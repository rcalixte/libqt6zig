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
#define WORKAROUND_INNER_CLASS_DEFINITION_TextGrammarCheck__GrammalecteConfigWidget
#include <grammalecteconfigwidget.h>
#include "libgrammalecteconfigwidget.h"
#include "libgrammalecteconfigwidget.hxx"

TextGrammarCheck__GrammalecteConfigWidget* TextGrammarCheck__GrammalecteConfigWidget_new(QWidget* parent) {
    return new VirtualTextGrammarCheckGrammalecteConfigWidget(parent);
}

TextGrammarCheck__GrammalecteConfigWidget* TextGrammarCheck__GrammalecteConfigWidget_new2() {
    return new VirtualTextGrammarCheckGrammalecteConfigWidget();
}

TextGrammarCheck__GrammalecteConfigWidget* TextGrammarCheck__GrammalecteConfigWidget_new3(QWidget* parent, bool disableMessageBox) {
    return new VirtualTextGrammarCheckGrammalecteConfigWidget(parent, disableMessageBox);
}

QMetaObject* TextGrammarCheck__GrammalecteConfigWidget_MetaObject(const TextGrammarCheck__GrammalecteConfigWidget* self) {
    auto* vtextgrammarcheck__grammalecteconfigwidget = dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheck__grammalecteconfigwidget && vtextgrammarcheck__grammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        return (QMetaObject*)self->metaObject();
    } else {
        return (QMetaObject*)((VirtualTextGrammarCheckGrammalecteConfigWidget*)self)->metaObject();
    }
}

void* TextGrammarCheck__GrammalecteConfigWidget_Metacast(TextGrammarCheck__GrammalecteConfigWidget* self, const char* param1) {
    auto* vtextgrammarcheck__grammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheck__grammalecteconfigwidget && vtextgrammarcheck__grammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        return self->qt_metacast(param1);
    } else {
        return ((VirtualTextGrammarCheckGrammalecteConfigWidget*)self)->qt_metacast(param1);
    }
}

int TextGrammarCheck__GrammalecteConfigWidget_Metacall(TextGrammarCheck__GrammalecteConfigWidget* self, int param1, int param2, void** param3) {
    auto* vtextgrammarcheck__grammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheck__grammalecteconfigwidget && vtextgrammarcheck__grammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualTextGrammarCheckGrammalecteConfigWidget*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

void TextGrammarCheck__GrammalecteConfigWidget_LoadSettings(TextGrammarCheck__GrammalecteConfigWidget* self) {
    self->loadSettings();
}

void TextGrammarCheck__GrammalecteConfigWidget_SaveSettings(TextGrammarCheck__GrammalecteConfigWidget* self) {
    self->saveSettings();
}

// Base class handler implementation
QMetaObject* TextGrammarCheck__GrammalecteConfigWidget_SuperMetaObject(const TextGrammarCheck__GrammalecteConfigWidget* self) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = const_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigWidget*>(self));
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->setTextGrammarCheck__GrammalecteConfigWidget_MetaObject_IsBase(true);
        return (QMetaObject*)vtextgrammarcheckgrammalecteconfigwidget->metaObject();
    } else {
        return (QMetaObject*)self->TextGrammarCheck::GrammalecteConfigWidget::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigWidget_OnMetaObject(const TextGrammarCheck__GrammalecteConfigWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = const_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigWidget*>(self));
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->setTextGrammarCheck__GrammalecteConfigWidget_MetaObject_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigWidget::TextGrammarCheck__GrammalecteConfigWidget_MetaObject_Callback>(slot));
    }
}

// Base class handler implementation
void* TextGrammarCheck__GrammalecteConfigWidget_SuperMetacast(TextGrammarCheck__GrammalecteConfigWidget* self, const char* param1) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->setTextGrammarCheck__GrammalecteConfigWidget_Metacast_IsBase(true);
        return vtextgrammarcheckgrammalecteconfigwidget->qt_metacast(param1);
    } else {
        return self->TextGrammarCheck::GrammalecteConfigWidget::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigWidget_OnMetacast(TextGrammarCheck__GrammalecteConfigWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->setTextGrammarCheck__GrammalecteConfigWidget_Metacast_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigWidget::TextGrammarCheck__GrammalecteConfigWidget_Metacast_Callback>(slot));
    }
}

// Base class handler implementation
int TextGrammarCheck__GrammalecteConfigWidget_SuperMetacall(TextGrammarCheck__GrammalecteConfigWidget* self, int param1, int param2, void** param3) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->setTextGrammarCheck__GrammalecteConfigWidget_Metacall_IsBase(true);
        return vtextgrammarcheckgrammalecteconfigwidget->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->TextGrammarCheck::GrammalecteConfigWidget::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigWidget_OnMetacall(TextGrammarCheck__GrammalecteConfigWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->setTextGrammarCheck__GrammalecteConfigWidget_Metacall_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigWidget::TextGrammarCheck__GrammalecteConfigWidget_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
int TextGrammarCheck__GrammalecteConfigWidget_DevType(const TextGrammarCheck__GrammalecteConfigWidget* self) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = const_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigWidget*>(self));
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        return vtextgrammarcheckgrammalecteconfigwidget->devType();
    } else {
        return self->TextGrammarCheck::GrammalecteConfigWidget::devType();
    }
}

// Base class handler implementation
int TextGrammarCheck__GrammalecteConfigWidget_SuperDevType(const TextGrammarCheck__GrammalecteConfigWidget* self) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = const_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigWidget*>(self));
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->setTextGrammarCheck__GrammalecteConfigWidget_DevType_IsBase(true);
        return vtextgrammarcheckgrammalecteconfigwidget->devType();
    } else {
        return self->TextGrammarCheck::GrammalecteConfigWidget::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigWidget_OnDevType(const TextGrammarCheck__GrammalecteConfigWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = const_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigWidget*>(self));
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->setTextGrammarCheck__GrammalecteConfigWidget_DevType_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigWidget::TextGrammarCheck__GrammalecteConfigWidget_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigWidget_SetVisible(TextGrammarCheck__GrammalecteConfigWidget* self, bool visible) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->setVisible(visible);
    } else {
        self->TextGrammarCheck::GrammalecteConfigWidget::setVisible(visible);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigWidget_SuperSetVisible(TextGrammarCheck__GrammalecteConfigWidget* self, bool visible) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->setTextGrammarCheck__GrammalecteConfigWidget_SetVisible_IsBase(true);
        vtextgrammarcheckgrammalecteconfigwidget->setVisible(visible);
    } else {
        self->TextGrammarCheck::GrammalecteConfigWidget::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigWidget_OnSetVisible(TextGrammarCheck__GrammalecteConfigWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->setTextGrammarCheck__GrammalecteConfigWidget_SetVisible_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigWidget::TextGrammarCheck__GrammalecteConfigWidget_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* TextGrammarCheck__GrammalecteConfigWidget_SizeHint(const TextGrammarCheck__GrammalecteConfigWidget* self) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = const_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigWidget*>(self));
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        return new QSize(vtextgrammarcheckgrammalecteconfigwidget->sizeHint());
    } else {
        return new QSize(((VirtualTextGrammarCheckGrammalecteConfigWidget*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* TextGrammarCheck__GrammalecteConfigWidget_SuperSizeHint(const TextGrammarCheck__GrammalecteConfigWidget* self) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = const_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigWidget*>(self));
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->setTextGrammarCheck__GrammalecteConfigWidget_SizeHint_IsBase(true);
        return new QSize(vtextgrammarcheckgrammalecteconfigwidget->sizeHint());
    } else {
        return new QSize(((VirtualTextGrammarCheckGrammalecteConfigWidget*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigWidget_OnSizeHint(const TextGrammarCheck__GrammalecteConfigWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = const_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigWidget*>(self));
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->setTextGrammarCheck__GrammalecteConfigWidget_SizeHint_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigWidget::TextGrammarCheck__GrammalecteConfigWidget_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* TextGrammarCheck__GrammalecteConfigWidget_MinimumSizeHint(const TextGrammarCheck__GrammalecteConfigWidget* self) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = const_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigWidget*>(self));
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        return new QSize(vtextgrammarcheckgrammalecteconfigwidget->minimumSizeHint());
    } else {
        return new QSize(((VirtualTextGrammarCheckGrammalecteConfigWidget*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* TextGrammarCheck__GrammalecteConfigWidget_SuperMinimumSizeHint(const TextGrammarCheck__GrammalecteConfigWidget* self) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = const_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigWidget*>(self));
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->setTextGrammarCheck__GrammalecteConfigWidget_MinimumSizeHint_IsBase(true);
        return new QSize(vtextgrammarcheckgrammalecteconfigwidget->minimumSizeHint());
    } else {
        return new QSize(((VirtualTextGrammarCheckGrammalecteConfigWidget*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigWidget_OnMinimumSizeHint(const TextGrammarCheck__GrammalecteConfigWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = const_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigWidget*>(self));
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->setTextGrammarCheck__GrammalecteConfigWidget_MinimumSizeHint_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigWidget::TextGrammarCheck__GrammalecteConfigWidget_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
int TextGrammarCheck__GrammalecteConfigWidget_HeightForWidth(const TextGrammarCheck__GrammalecteConfigWidget* self, int param1) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = const_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigWidget*>(self));
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        return vtextgrammarcheckgrammalecteconfigwidget->heightForWidth(static_cast<int>(param1));
    } else {
        return self->TextGrammarCheck::GrammalecteConfigWidget::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int TextGrammarCheck__GrammalecteConfigWidget_SuperHeightForWidth(const TextGrammarCheck__GrammalecteConfigWidget* self, int param1) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = const_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigWidget*>(self));
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->setTextGrammarCheck__GrammalecteConfigWidget_HeightForWidth_IsBase(true);
        return vtextgrammarcheckgrammalecteconfigwidget->heightForWidth(static_cast<int>(param1));
    } else {
        return self->TextGrammarCheck::GrammalecteConfigWidget::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigWidget_OnHeightForWidth(const TextGrammarCheck__GrammalecteConfigWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = const_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigWidget*>(self));
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->setTextGrammarCheck__GrammalecteConfigWidget_HeightForWidth_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigWidget::TextGrammarCheck__GrammalecteConfigWidget_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextGrammarCheck__GrammalecteConfigWidget_HasHeightForWidth(const TextGrammarCheck__GrammalecteConfigWidget* self) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = const_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigWidget*>(self));
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        return vtextgrammarcheckgrammalecteconfigwidget->hasHeightForWidth();
    } else {
        return self->TextGrammarCheck::GrammalecteConfigWidget::hasHeightForWidth();
    }
}

// Base class handler implementation
bool TextGrammarCheck__GrammalecteConfigWidget_SuperHasHeightForWidth(const TextGrammarCheck__GrammalecteConfigWidget* self) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = const_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigWidget*>(self));
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->setTextGrammarCheck__GrammalecteConfigWidget_HasHeightForWidth_IsBase(true);
        return vtextgrammarcheckgrammalecteconfigwidget->hasHeightForWidth();
    } else {
        return self->TextGrammarCheck::GrammalecteConfigWidget::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigWidget_OnHasHeightForWidth(const TextGrammarCheck__GrammalecteConfigWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = const_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigWidget*>(self));
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->setTextGrammarCheck__GrammalecteConfigWidget_HasHeightForWidth_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigWidget::TextGrammarCheck__GrammalecteConfigWidget_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* TextGrammarCheck__GrammalecteConfigWidget_PaintEngine(const TextGrammarCheck__GrammalecteConfigWidget* self) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = const_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigWidget*>(self));
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        return vtextgrammarcheckgrammalecteconfigwidget->paintEngine();
    } else {
        return self->TextGrammarCheck::GrammalecteConfigWidget::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* TextGrammarCheck__GrammalecteConfigWidget_SuperPaintEngine(const TextGrammarCheck__GrammalecteConfigWidget* self) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = const_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigWidget*>(self));
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->setTextGrammarCheck__GrammalecteConfigWidget_PaintEngine_IsBase(true);
        return vtextgrammarcheckgrammalecteconfigwidget->paintEngine();
    } else {
        return self->TextGrammarCheck::GrammalecteConfigWidget::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigWidget_OnPaintEngine(const TextGrammarCheck__GrammalecteConfigWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = const_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigWidget*>(self));
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->setTextGrammarCheck__GrammalecteConfigWidget_PaintEngine_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigWidget::TextGrammarCheck__GrammalecteConfigWidget_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextGrammarCheck__GrammalecteConfigWidget_Event(TextGrammarCheck__GrammalecteConfigWidget* self, QEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        return vtextgrammarcheckgrammalecteconfigwidget->event(event);
    } else {
        return ((VirtualTextGrammarCheckGrammalecteConfigWidget*)self)->event(event);
    }
}

// Base class handler implementation
bool TextGrammarCheck__GrammalecteConfigWidget_SuperEvent(TextGrammarCheck__GrammalecteConfigWidget* self, QEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->setTextGrammarCheck__GrammalecteConfigWidget_Event_IsBase(true);
        return vtextgrammarcheckgrammalecteconfigwidget->event(event);
    } else {
        return ((VirtualTextGrammarCheckGrammalecteConfigWidget*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigWidget_OnEvent(TextGrammarCheck__GrammalecteConfigWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->setTextGrammarCheck__GrammalecteConfigWidget_Event_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigWidget::TextGrammarCheck__GrammalecteConfigWidget_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigWidget_MousePressEvent(TextGrammarCheck__GrammalecteConfigWidget* self, QMouseEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->mousePressEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigWidget*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigWidget_SuperMousePressEvent(TextGrammarCheck__GrammalecteConfigWidget* self, QMouseEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->setTextGrammarCheck__GrammalecteConfigWidget_MousePressEvent_IsBase(true);
        vtextgrammarcheckgrammalecteconfigwidget->mousePressEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigWidget*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigWidget_OnMousePressEvent(TextGrammarCheck__GrammalecteConfigWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->setTextGrammarCheck__GrammalecteConfigWidget_MousePressEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigWidget::TextGrammarCheck__GrammalecteConfigWidget_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigWidget_MouseReleaseEvent(TextGrammarCheck__GrammalecteConfigWidget* self, QMouseEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->mouseReleaseEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigWidget*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigWidget_SuperMouseReleaseEvent(TextGrammarCheck__GrammalecteConfigWidget* self, QMouseEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->setTextGrammarCheck__GrammalecteConfigWidget_MouseReleaseEvent_IsBase(true);
        vtextgrammarcheckgrammalecteconfigwidget->mouseReleaseEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigWidget*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigWidget_OnMouseReleaseEvent(TextGrammarCheck__GrammalecteConfigWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->setTextGrammarCheck__GrammalecteConfigWidget_MouseReleaseEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigWidget::TextGrammarCheck__GrammalecteConfigWidget_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigWidget_MouseDoubleClickEvent(TextGrammarCheck__GrammalecteConfigWidget* self, QMouseEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->mouseDoubleClickEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigWidget*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigWidget_SuperMouseDoubleClickEvent(TextGrammarCheck__GrammalecteConfigWidget* self, QMouseEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->setTextGrammarCheck__GrammalecteConfigWidget_MouseDoubleClickEvent_IsBase(true);
        vtextgrammarcheckgrammalecteconfigwidget->mouseDoubleClickEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigWidget*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigWidget_OnMouseDoubleClickEvent(TextGrammarCheck__GrammalecteConfigWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->setTextGrammarCheck__GrammalecteConfigWidget_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigWidget::TextGrammarCheck__GrammalecteConfigWidget_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigWidget_MouseMoveEvent(TextGrammarCheck__GrammalecteConfigWidget* self, QMouseEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->mouseMoveEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigWidget*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigWidget_SuperMouseMoveEvent(TextGrammarCheck__GrammalecteConfigWidget* self, QMouseEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->setTextGrammarCheck__GrammalecteConfigWidget_MouseMoveEvent_IsBase(true);
        vtextgrammarcheckgrammalecteconfigwidget->mouseMoveEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigWidget*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigWidget_OnMouseMoveEvent(TextGrammarCheck__GrammalecteConfigWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->setTextGrammarCheck__GrammalecteConfigWidget_MouseMoveEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigWidget::TextGrammarCheck__GrammalecteConfigWidget_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigWidget_WheelEvent(TextGrammarCheck__GrammalecteConfigWidget* self, QWheelEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->wheelEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigWidget*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigWidget_SuperWheelEvent(TextGrammarCheck__GrammalecteConfigWidget* self, QWheelEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->setTextGrammarCheck__GrammalecteConfigWidget_WheelEvent_IsBase(true);
        vtextgrammarcheckgrammalecteconfigwidget->wheelEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigWidget*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigWidget_OnWheelEvent(TextGrammarCheck__GrammalecteConfigWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->setTextGrammarCheck__GrammalecteConfigWidget_WheelEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigWidget::TextGrammarCheck__GrammalecteConfigWidget_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigWidget_KeyPressEvent(TextGrammarCheck__GrammalecteConfigWidget* self, QKeyEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->keyPressEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigWidget*)self)->keyPressEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigWidget_SuperKeyPressEvent(TextGrammarCheck__GrammalecteConfigWidget* self, QKeyEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->setTextGrammarCheck__GrammalecteConfigWidget_KeyPressEvent_IsBase(true);
        vtextgrammarcheckgrammalecteconfigwidget->keyPressEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigWidget*)self)->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigWidget_OnKeyPressEvent(TextGrammarCheck__GrammalecteConfigWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->setTextGrammarCheck__GrammalecteConfigWidget_KeyPressEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigWidget::TextGrammarCheck__GrammalecteConfigWidget_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigWidget_KeyReleaseEvent(TextGrammarCheck__GrammalecteConfigWidget* self, QKeyEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->keyReleaseEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigWidget*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigWidget_SuperKeyReleaseEvent(TextGrammarCheck__GrammalecteConfigWidget* self, QKeyEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->setTextGrammarCheck__GrammalecteConfigWidget_KeyReleaseEvent_IsBase(true);
        vtextgrammarcheckgrammalecteconfigwidget->keyReleaseEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigWidget*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigWidget_OnKeyReleaseEvent(TextGrammarCheck__GrammalecteConfigWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->setTextGrammarCheck__GrammalecteConfigWidget_KeyReleaseEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigWidget::TextGrammarCheck__GrammalecteConfigWidget_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigWidget_FocusInEvent(TextGrammarCheck__GrammalecteConfigWidget* self, QFocusEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->focusInEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigWidget*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigWidget_SuperFocusInEvent(TextGrammarCheck__GrammalecteConfigWidget* self, QFocusEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->setTextGrammarCheck__GrammalecteConfigWidget_FocusInEvent_IsBase(true);
        vtextgrammarcheckgrammalecteconfigwidget->focusInEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigWidget*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigWidget_OnFocusInEvent(TextGrammarCheck__GrammalecteConfigWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->setTextGrammarCheck__GrammalecteConfigWidget_FocusInEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigWidget::TextGrammarCheck__GrammalecteConfigWidget_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigWidget_FocusOutEvent(TextGrammarCheck__GrammalecteConfigWidget* self, QFocusEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->focusOutEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigWidget*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigWidget_SuperFocusOutEvent(TextGrammarCheck__GrammalecteConfigWidget* self, QFocusEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->setTextGrammarCheck__GrammalecteConfigWidget_FocusOutEvent_IsBase(true);
        vtextgrammarcheckgrammalecteconfigwidget->focusOutEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigWidget*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigWidget_OnFocusOutEvent(TextGrammarCheck__GrammalecteConfigWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->setTextGrammarCheck__GrammalecteConfigWidget_FocusOutEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigWidget::TextGrammarCheck__GrammalecteConfigWidget_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigWidget_EnterEvent(TextGrammarCheck__GrammalecteConfigWidget* self, QEnterEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->enterEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigWidget*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigWidget_SuperEnterEvent(TextGrammarCheck__GrammalecteConfigWidget* self, QEnterEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->setTextGrammarCheck__GrammalecteConfigWidget_EnterEvent_IsBase(true);
        vtextgrammarcheckgrammalecteconfigwidget->enterEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigWidget*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigWidget_OnEnterEvent(TextGrammarCheck__GrammalecteConfigWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->setTextGrammarCheck__GrammalecteConfigWidget_EnterEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigWidget::TextGrammarCheck__GrammalecteConfigWidget_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigWidget_LeaveEvent(TextGrammarCheck__GrammalecteConfigWidget* self, QEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->leaveEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigWidget*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigWidget_SuperLeaveEvent(TextGrammarCheck__GrammalecteConfigWidget* self, QEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->setTextGrammarCheck__GrammalecteConfigWidget_LeaveEvent_IsBase(true);
        vtextgrammarcheckgrammalecteconfigwidget->leaveEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigWidget*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigWidget_OnLeaveEvent(TextGrammarCheck__GrammalecteConfigWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->setTextGrammarCheck__GrammalecteConfigWidget_LeaveEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigWidget::TextGrammarCheck__GrammalecteConfigWidget_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigWidget_PaintEvent(TextGrammarCheck__GrammalecteConfigWidget* self, QPaintEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->paintEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigWidget*)self)->paintEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigWidget_SuperPaintEvent(TextGrammarCheck__GrammalecteConfigWidget* self, QPaintEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->setTextGrammarCheck__GrammalecteConfigWidget_PaintEvent_IsBase(true);
        vtextgrammarcheckgrammalecteconfigwidget->paintEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigWidget*)self)->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigWidget_OnPaintEvent(TextGrammarCheck__GrammalecteConfigWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->setTextGrammarCheck__GrammalecteConfigWidget_PaintEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigWidget::TextGrammarCheck__GrammalecteConfigWidget_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigWidget_MoveEvent(TextGrammarCheck__GrammalecteConfigWidget* self, QMoveEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->moveEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigWidget*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigWidget_SuperMoveEvent(TextGrammarCheck__GrammalecteConfigWidget* self, QMoveEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->setTextGrammarCheck__GrammalecteConfigWidget_MoveEvent_IsBase(true);
        vtextgrammarcheckgrammalecteconfigwidget->moveEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigWidget*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigWidget_OnMoveEvent(TextGrammarCheck__GrammalecteConfigWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->setTextGrammarCheck__GrammalecteConfigWidget_MoveEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigWidget::TextGrammarCheck__GrammalecteConfigWidget_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigWidget_ResizeEvent(TextGrammarCheck__GrammalecteConfigWidget* self, QResizeEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->resizeEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigWidget*)self)->resizeEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigWidget_SuperResizeEvent(TextGrammarCheck__GrammalecteConfigWidget* self, QResizeEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->setTextGrammarCheck__GrammalecteConfigWidget_ResizeEvent_IsBase(true);
        vtextgrammarcheckgrammalecteconfigwidget->resizeEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigWidget*)self)->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigWidget_OnResizeEvent(TextGrammarCheck__GrammalecteConfigWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->setTextGrammarCheck__GrammalecteConfigWidget_ResizeEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigWidget::TextGrammarCheck__GrammalecteConfigWidget_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigWidget_CloseEvent(TextGrammarCheck__GrammalecteConfigWidget* self, QCloseEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->closeEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigWidget*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigWidget_SuperCloseEvent(TextGrammarCheck__GrammalecteConfigWidget* self, QCloseEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->setTextGrammarCheck__GrammalecteConfigWidget_CloseEvent_IsBase(true);
        vtextgrammarcheckgrammalecteconfigwidget->closeEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigWidget*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigWidget_OnCloseEvent(TextGrammarCheck__GrammalecteConfigWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->setTextGrammarCheck__GrammalecteConfigWidget_CloseEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigWidget::TextGrammarCheck__GrammalecteConfigWidget_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigWidget_ContextMenuEvent(TextGrammarCheck__GrammalecteConfigWidget* self, QContextMenuEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->contextMenuEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigWidget*)self)->contextMenuEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigWidget_SuperContextMenuEvent(TextGrammarCheck__GrammalecteConfigWidget* self, QContextMenuEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->setTextGrammarCheck__GrammalecteConfigWidget_ContextMenuEvent_IsBase(true);
        vtextgrammarcheckgrammalecteconfigwidget->contextMenuEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigWidget*)self)->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigWidget_OnContextMenuEvent(TextGrammarCheck__GrammalecteConfigWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->setTextGrammarCheck__GrammalecteConfigWidget_ContextMenuEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigWidget::TextGrammarCheck__GrammalecteConfigWidget_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigWidget_TabletEvent(TextGrammarCheck__GrammalecteConfigWidget* self, QTabletEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->tabletEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigWidget*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigWidget_SuperTabletEvent(TextGrammarCheck__GrammalecteConfigWidget* self, QTabletEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->setTextGrammarCheck__GrammalecteConfigWidget_TabletEvent_IsBase(true);
        vtextgrammarcheckgrammalecteconfigwidget->tabletEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigWidget*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigWidget_OnTabletEvent(TextGrammarCheck__GrammalecteConfigWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->setTextGrammarCheck__GrammalecteConfigWidget_TabletEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigWidget::TextGrammarCheck__GrammalecteConfigWidget_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigWidget_ActionEvent(TextGrammarCheck__GrammalecteConfigWidget* self, QActionEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->actionEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigWidget*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigWidget_SuperActionEvent(TextGrammarCheck__GrammalecteConfigWidget* self, QActionEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->setTextGrammarCheck__GrammalecteConfigWidget_ActionEvent_IsBase(true);
        vtextgrammarcheckgrammalecteconfigwidget->actionEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigWidget*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigWidget_OnActionEvent(TextGrammarCheck__GrammalecteConfigWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->setTextGrammarCheck__GrammalecteConfigWidget_ActionEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigWidget::TextGrammarCheck__GrammalecteConfigWidget_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigWidget_DragEnterEvent(TextGrammarCheck__GrammalecteConfigWidget* self, QDragEnterEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->dragEnterEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigWidget*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigWidget_SuperDragEnterEvent(TextGrammarCheck__GrammalecteConfigWidget* self, QDragEnterEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->setTextGrammarCheck__GrammalecteConfigWidget_DragEnterEvent_IsBase(true);
        vtextgrammarcheckgrammalecteconfigwidget->dragEnterEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigWidget*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigWidget_OnDragEnterEvent(TextGrammarCheck__GrammalecteConfigWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->setTextGrammarCheck__GrammalecteConfigWidget_DragEnterEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigWidget::TextGrammarCheck__GrammalecteConfigWidget_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigWidget_DragMoveEvent(TextGrammarCheck__GrammalecteConfigWidget* self, QDragMoveEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->dragMoveEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigWidget*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigWidget_SuperDragMoveEvent(TextGrammarCheck__GrammalecteConfigWidget* self, QDragMoveEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->setTextGrammarCheck__GrammalecteConfigWidget_DragMoveEvent_IsBase(true);
        vtextgrammarcheckgrammalecteconfigwidget->dragMoveEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigWidget*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigWidget_OnDragMoveEvent(TextGrammarCheck__GrammalecteConfigWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->setTextGrammarCheck__GrammalecteConfigWidget_DragMoveEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigWidget::TextGrammarCheck__GrammalecteConfigWidget_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigWidget_DragLeaveEvent(TextGrammarCheck__GrammalecteConfigWidget* self, QDragLeaveEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->dragLeaveEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigWidget*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigWidget_SuperDragLeaveEvent(TextGrammarCheck__GrammalecteConfigWidget* self, QDragLeaveEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->setTextGrammarCheck__GrammalecteConfigWidget_DragLeaveEvent_IsBase(true);
        vtextgrammarcheckgrammalecteconfigwidget->dragLeaveEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigWidget*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigWidget_OnDragLeaveEvent(TextGrammarCheck__GrammalecteConfigWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->setTextGrammarCheck__GrammalecteConfigWidget_DragLeaveEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigWidget::TextGrammarCheck__GrammalecteConfigWidget_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigWidget_DropEvent(TextGrammarCheck__GrammalecteConfigWidget* self, QDropEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->dropEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigWidget*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigWidget_SuperDropEvent(TextGrammarCheck__GrammalecteConfigWidget* self, QDropEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->setTextGrammarCheck__GrammalecteConfigWidget_DropEvent_IsBase(true);
        vtextgrammarcheckgrammalecteconfigwidget->dropEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigWidget*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigWidget_OnDropEvent(TextGrammarCheck__GrammalecteConfigWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->setTextGrammarCheck__GrammalecteConfigWidget_DropEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigWidget::TextGrammarCheck__GrammalecteConfigWidget_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigWidget_ShowEvent(TextGrammarCheck__GrammalecteConfigWidget* self, QShowEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->showEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigWidget*)self)->showEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigWidget_SuperShowEvent(TextGrammarCheck__GrammalecteConfigWidget* self, QShowEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->setTextGrammarCheck__GrammalecteConfigWidget_ShowEvent_IsBase(true);
        vtextgrammarcheckgrammalecteconfigwidget->showEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigWidget*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigWidget_OnShowEvent(TextGrammarCheck__GrammalecteConfigWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->setTextGrammarCheck__GrammalecteConfigWidget_ShowEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigWidget::TextGrammarCheck__GrammalecteConfigWidget_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigWidget_HideEvent(TextGrammarCheck__GrammalecteConfigWidget* self, QHideEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->hideEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigWidget*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigWidget_SuperHideEvent(TextGrammarCheck__GrammalecteConfigWidget* self, QHideEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->setTextGrammarCheck__GrammalecteConfigWidget_HideEvent_IsBase(true);
        vtextgrammarcheckgrammalecteconfigwidget->hideEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigWidget*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigWidget_OnHideEvent(TextGrammarCheck__GrammalecteConfigWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->setTextGrammarCheck__GrammalecteConfigWidget_HideEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigWidget::TextGrammarCheck__GrammalecteConfigWidget_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextGrammarCheck__GrammalecteConfigWidget_NativeEvent(TextGrammarCheck__GrammalecteConfigWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        return vtextgrammarcheckgrammalecteconfigwidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualTextGrammarCheckGrammalecteConfigWidget*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool TextGrammarCheck__GrammalecteConfigWidget_SuperNativeEvent(TextGrammarCheck__GrammalecteConfigWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->setTextGrammarCheck__GrammalecteConfigWidget_NativeEvent_IsBase(true);
        return vtextgrammarcheckgrammalecteconfigwidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualTextGrammarCheckGrammalecteConfigWidget*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigWidget_OnNativeEvent(TextGrammarCheck__GrammalecteConfigWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->setTextGrammarCheck__GrammalecteConfigWidget_NativeEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigWidget::TextGrammarCheck__GrammalecteConfigWidget_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigWidget_ChangeEvent(TextGrammarCheck__GrammalecteConfigWidget* self, QEvent* param1) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->changeEvent(param1);
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigWidget*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigWidget_SuperChangeEvent(TextGrammarCheck__GrammalecteConfigWidget* self, QEvent* param1) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->setTextGrammarCheck__GrammalecteConfigWidget_ChangeEvent_IsBase(true);
        vtextgrammarcheckgrammalecteconfigwidget->changeEvent(param1);
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigWidget*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigWidget_OnChangeEvent(TextGrammarCheck__GrammalecteConfigWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->setTextGrammarCheck__GrammalecteConfigWidget_ChangeEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigWidget::TextGrammarCheck__GrammalecteConfigWidget_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int TextGrammarCheck__GrammalecteConfigWidget_Metric(const TextGrammarCheck__GrammalecteConfigWidget* self, int param1) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = const_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigWidget*>(self));
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        return vtextgrammarcheckgrammalecteconfigwidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualTextGrammarCheckGrammalecteConfigWidget*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int TextGrammarCheck__GrammalecteConfigWidget_SuperMetric(const TextGrammarCheck__GrammalecteConfigWidget* self, int param1) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = const_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigWidget*>(self));
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->setTextGrammarCheck__GrammalecteConfigWidget_Metric_IsBase(true);
        return vtextgrammarcheckgrammalecteconfigwidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualTextGrammarCheckGrammalecteConfigWidget*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigWidget_OnMetric(const TextGrammarCheck__GrammalecteConfigWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = const_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigWidget*>(self));
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->setTextGrammarCheck__GrammalecteConfigWidget_Metric_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigWidget::TextGrammarCheck__GrammalecteConfigWidget_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigWidget_InitPainter(const TextGrammarCheck__GrammalecteConfigWidget* self, QPainter* painter) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = const_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigWidget*>(self));
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->initPainter(painter);
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigWidget*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigWidget_SuperInitPainter(const TextGrammarCheck__GrammalecteConfigWidget* self, QPainter* painter) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = const_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigWidget*>(self));
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->setTextGrammarCheck__GrammalecteConfigWidget_InitPainter_IsBase(true);
        vtextgrammarcheckgrammalecteconfigwidget->initPainter(painter);
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigWidget*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigWidget_OnInitPainter(const TextGrammarCheck__GrammalecteConfigWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = const_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigWidget*>(self));
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->setTextGrammarCheck__GrammalecteConfigWidget_InitPainter_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigWidget::TextGrammarCheck__GrammalecteConfigWidget_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* TextGrammarCheck__GrammalecteConfigWidget_Redirected(const TextGrammarCheck__GrammalecteConfigWidget* self, QPoint* offset) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = const_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigWidget*>(self));
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        return vtextgrammarcheckgrammalecteconfigwidget->redirected(offset);
    } else {
        return ((VirtualTextGrammarCheckGrammalecteConfigWidget*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* TextGrammarCheck__GrammalecteConfigWidget_SuperRedirected(const TextGrammarCheck__GrammalecteConfigWidget* self, QPoint* offset) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = const_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigWidget*>(self));
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->setTextGrammarCheck__GrammalecteConfigWidget_Redirected_IsBase(true);
        return vtextgrammarcheckgrammalecteconfigwidget->redirected(offset);
    } else {
        return ((VirtualTextGrammarCheckGrammalecteConfigWidget*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigWidget_OnRedirected(const TextGrammarCheck__GrammalecteConfigWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = const_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigWidget*>(self));
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->setTextGrammarCheck__GrammalecteConfigWidget_Redirected_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigWidget::TextGrammarCheck__GrammalecteConfigWidget_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* TextGrammarCheck__GrammalecteConfigWidget_SharedPainter(const TextGrammarCheck__GrammalecteConfigWidget* self) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = const_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigWidget*>(self));
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        return vtextgrammarcheckgrammalecteconfigwidget->sharedPainter();
    } else {
        return ((VirtualTextGrammarCheckGrammalecteConfigWidget*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* TextGrammarCheck__GrammalecteConfigWidget_SuperSharedPainter(const TextGrammarCheck__GrammalecteConfigWidget* self) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = const_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigWidget*>(self));
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->setTextGrammarCheck__GrammalecteConfigWidget_SharedPainter_IsBase(true);
        return vtextgrammarcheckgrammalecteconfigwidget->sharedPainter();
    } else {
        return ((VirtualTextGrammarCheckGrammalecteConfigWidget*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigWidget_OnSharedPainter(const TextGrammarCheck__GrammalecteConfigWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = const_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigWidget*>(self));
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->setTextGrammarCheck__GrammalecteConfigWidget_SharedPainter_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigWidget::TextGrammarCheck__GrammalecteConfigWidget_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigWidget_InputMethodEvent(TextGrammarCheck__GrammalecteConfigWidget* self, QInputMethodEvent* param1) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->inputMethodEvent(param1);
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigWidget*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigWidget_SuperInputMethodEvent(TextGrammarCheck__GrammalecteConfigWidget* self, QInputMethodEvent* param1) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->setTextGrammarCheck__GrammalecteConfigWidget_InputMethodEvent_IsBase(true);
        vtextgrammarcheckgrammalecteconfigwidget->inputMethodEvent(param1);
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigWidget*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigWidget_OnInputMethodEvent(TextGrammarCheck__GrammalecteConfigWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->setTextGrammarCheck__GrammalecteConfigWidget_InputMethodEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigWidget::TextGrammarCheck__GrammalecteConfigWidget_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* TextGrammarCheck__GrammalecteConfigWidget_InputMethodQuery(const TextGrammarCheck__GrammalecteConfigWidget* self, int param1) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = const_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigWidget*>(self));
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        return new QVariant(vtextgrammarcheckgrammalecteconfigwidget->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualTextGrammarCheckGrammalecteConfigWidget*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* TextGrammarCheck__GrammalecteConfigWidget_SuperInputMethodQuery(const TextGrammarCheck__GrammalecteConfigWidget* self, int param1) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = const_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigWidget*>(self));
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->setTextGrammarCheck__GrammalecteConfigWidget_InputMethodQuery_IsBase(true);
        return new QVariant(vtextgrammarcheckgrammalecteconfigwidget->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualTextGrammarCheckGrammalecteConfigWidget*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigWidget_OnInputMethodQuery(const TextGrammarCheck__GrammalecteConfigWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = const_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigWidget*>(self));
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->setTextGrammarCheck__GrammalecteConfigWidget_InputMethodQuery_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigWidget::TextGrammarCheck__GrammalecteConfigWidget_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextGrammarCheck__GrammalecteConfigWidget_FocusNextPrevChild(TextGrammarCheck__GrammalecteConfigWidget* self, bool next) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        return vtextgrammarcheckgrammalecteconfigwidget->focusNextPrevChild(next);
    } else {
        return ((VirtualTextGrammarCheckGrammalecteConfigWidget*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool TextGrammarCheck__GrammalecteConfigWidget_SuperFocusNextPrevChild(TextGrammarCheck__GrammalecteConfigWidget* self, bool next) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->setTextGrammarCheck__GrammalecteConfigWidget_FocusNextPrevChild_IsBase(true);
        return vtextgrammarcheckgrammalecteconfigwidget->focusNextPrevChild(next);
    } else {
        return ((VirtualTextGrammarCheckGrammalecteConfigWidget*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigWidget_OnFocusNextPrevChild(TextGrammarCheck__GrammalecteConfigWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->setTextGrammarCheck__GrammalecteConfigWidget_FocusNextPrevChild_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigWidget::TextGrammarCheck__GrammalecteConfigWidget_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextGrammarCheck__GrammalecteConfigWidget_EventFilter(TextGrammarCheck__GrammalecteConfigWidget* self, QObject* watched, QEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        return vtextgrammarcheckgrammalecteconfigwidget->eventFilter(watched, event);
    } else {
        return self->TextGrammarCheck::GrammalecteConfigWidget::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool TextGrammarCheck__GrammalecteConfigWidget_SuperEventFilter(TextGrammarCheck__GrammalecteConfigWidget* self, QObject* watched, QEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->setTextGrammarCheck__GrammalecteConfigWidget_EventFilter_IsBase(true);
        return vtextgrammarcheckgrammalecteconfigwidget->eventFilter(watched, event);
    } else {
        return self->TextGrammarCheck::GrammalecteConfigWidget::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigWidget_OnEventFilter(TextGrammarCheck__GrammalecteConfigWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->setTextGrammarCheck__GrammalecteConfigWidget_EventFilter_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigWidget::TextGrammarCheck__GrammalecteConfigWidget_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigWidget_TimerEvent(TextGrammarCheck__GrammalecteConfigWidget* self, QTimerEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->timerEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigWidget*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigWidget_SuperTimerEvent(TextGrammarCheck__GrammalecteConfigWidget* self, QTimerEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->setTextGrammarCheck__GrammalecteConfigWidget_TimerEvent_IsBase(true);
        vtextgrammarcheckgrammalecteconfigwidget->timerEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigWidget*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigWidget_OnTimerEvent(TextGrammarCheck__GrammalecteConfigWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->setTextGrammarCheck__GrammalecteConfigWidget_TimerEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigWidget::TextGrammarCheck__GrammalecteConfigWidget_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigWidget_ChildEvent(TextGrammarCheck__GrammalecteConfigWidget* self, QChildEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->childEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigWidget*)self)->childEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigWidget_SuperChildEvent(TextGrammarCheck__GrammalecteConfigWidget* self, QChildEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->setTextGrammarCheck__GrammalecteConfigWidget_ChildEvent_IsBase(true);
        vtextgrammarcheckgrammalecteconfigwidget->childEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigWidget*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigWidget_OnChildEvent(TextGrammarCheck__GrammalecteConfigWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->setTextGrammarCheck__GrammalecteConfigWidget_ChildEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigWidget::TextGrammarCheck__GrammalecteConfigWidget_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigWidget_CustomEvent(TextGrammarCheck__GrammalecteConfigWidget* self, QEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->customEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigWidget*)self)->customEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigWidget_SuperCustomEvent(TextGrammarCheck__GrammalecteConfigWidget* self, QEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->setTextGrammarCheck__GrammalecteConfigWidget_CustomEvent_IsBase(true);
        vtextgrammarcheckgrammalecteconfigwidget->customEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigWidget*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigWidget_OnCustomEvent(TextGrammarCheck__GrammalecteConfigWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->setTextGrammarCheck__GrammalecteConfigWidget_CustomEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigWidget::TextGrammarCheck__GrammalecteConfigWidget_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigWidget_ConnectNotify(TextGrammarCheck__GrammalecteConfigWidget* self, const QMetaMethod* signal) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->connectNotify(*signal);
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigWidget*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigWidget_SuperConnectNotify(TextGrammarCheck__GrammalecteConfigWidget* self, const QMetaMethod* signal) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->setTextGrammarCheck__GrammalecteConfigWidget_ConnectNotify_IsBase(true);
        vtextgrammarcheckgrammalecteconfigwidget->connectNotify(*signal);
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigWidget*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigWidget_OnConnectNotify(TextGrammarCheck__GrammalecteConfigWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->setTextGrammarCheck__GrammalecteConfigWidget_ConnectNotify_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigWidget::TextGrammarCheck__GrammalecteConfigWidget_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigWidget_DisconnectNotify(TextGrammarCheck__GrammalecteConfigWidget* self, const QMetaMethod* signal) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->disconnectNotify(*signal);
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigWidget*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigWidget_SuperDisconnectNotify(TextGrammarCheck__GrammalecteConfigWidget* self, const QMetaMethod* signal) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->setTextGrammarCheck__GrammalecteConfigWidget_DisconnectNotify_IsBase(true);
        vtextgrammarcheckgrammalecteconfigwidget->disconnectNotify(*signal);
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigWidget*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigWidget_OnDisconnectNotify(TextGrammarCheck__GrammalecteConfigWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->setTextGrammarCheck__GrammalecteConfigWidget_DisconnectNotify_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigWidget::TextGrammarCheck__GrammalecteConfigWidget_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigWidget_UpdateMicroFocus(TextGrammarCheck__GrammalecteConfigWidget* self) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->updateMicroFocus();
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigWidget*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigWidget_SuperUpdateMicroFocus(TextGrammarCheck__GrammalecteConfigWidget* self) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->setTextGrammarCheck__GrammalecteConfigWidget_UpdateMicroFocus_IsBase(true);
        vtextgrammarcheckgrammalecteconfigwidget->updateMicroFocus();
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigWidget*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigWidget_OnUpdateMicroFocus(TextGrammarCheck__GrammalecteConfigWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->setTextGrammarCheck__GrammalecteConfigWidget_UpdateMicroFocus_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigWidget::TextGrammarCheck__GrammalecteConfigWidget_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigWidget_Create(TextGrammarCheck__GrammalecteConfigWidget* self) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->create();
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigWidget*)self)->create();
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigWidget_SuperCreate(TextGrammarCheck__GrammalecteConfigWidget* self) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->setTextGrammarCheck__GrammalecteConfigWidget_Create_IsBase(true);
        vtextgrammarcheckgrammalecteconfigwidget->create();
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigWidget*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigWidget_OnCreate(TextGrammarCheck__GrammalecteConfigWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->setTextGrammarCheck__GrammalecteConfigWidget_Create_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigWidget::TextGrammarCheck__GrammalecteConfigWidget_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigWidget_Destroy(TextGrammarCheck__GrammalecteConfigWidget* self) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->destroy();
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigWidget*)self)->destroy();
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigWidget_SuperDestroy(TextGrammarCheck__GrammalecteConfigWidget* self) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->setTextGrammarCheck__GrammalecteConfigWidget_Destroy_IsBase(true);
        vtextgrammarcheckgrammalecteconfigwidget->destroy();
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigWidget*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigWidget_OnDestroy(TextGrammarCheck__GrammalecteConfigWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->setTextGrammarCheck__GrammalecteConfigWidget_Destroy_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigWidget::TextGrammarCheck__GrammalecteConfigWidget_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextGrammarCheck__GrammalecteConfigWidget_FocusNextChild(TextGrammarCheck__GrammalecteConfigWidget* self) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        return vtextgrammarcheckgrammalecteconfigwidget->focusNextChild();
    } else {
        return ((VirtualTextGrammarCheckGrammalecteConfigWidget*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool TextGrammarCheck__GrammalecteConfigWidget_SuperFocusNextChild(TextGrammarCheck__GrammalecteConfigWidget* self) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->setTextGrammarCheck__GrammalecteConfigWidget_FocusNextChild_IsBase(true);
        return vtextgrammarcheckgrammalecteconfigwidget->focusNextChild();
    } else {
        return ((VirtualTextGrammarCheckGrammalecteConfigWidget*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigWidget_OnFocusNextChild(TextGrammarCheck__GrammalecteConfigWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->setTextGrammarCheck__GrammalecteConfigWidget_FocusNextChild_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigWidget::TextGrammarCheck__GrammalecteConfigWidget_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextGrammarCheck__GrammalecteConfigWidget_FocusPreviousChild(TextGrammarCheck__GrammalecteConfigWidget* self) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        return vtextgrammarcheckgrammalecteconfigwidget->focusPreviousChild();
    } else {
        return ((VirtualTextGrammarCheckGrammalecteConfigWidget*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool TextGrammarCheck__GrammalecteConfigWidget_SuperFocusPreviousChild(TextGrammarCheck__GrammalecteConfigWidget* self) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->setTextGrammarCheck__GrammalecteConfigWidget_FocusPreviousChild_IsBase(true);
        return vtextgrammarcheckgrammalecteconfigwidget->focusPreviousChild();
    } else {
        return ((VirtualTextGrammarCheckGrammalecteConfigWidget*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigWidget_OnFocusPreviousChild(TextGrammarCheck__GrammalecteConfigWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(self);
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->setTextGrammarCheck__GrammalecteConfigWidget_FocusPreviousChild_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigWidget::TextGrammarCheck__GrammalecteConfigWidget_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* TextGrammarCheck__GrammalecteConfigWidget_Sender(const TextGrammarCheck__GrammalecteConfigWidget* self) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = const_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigWidget*>(self));
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        return vtextgrammarcheckgrammalecteconfigwidget->sender();
    } else {
        return ((VirtualTextGrammarCheckGrammalecteConfigWidget*)self)->sender();
    }
}

// Base class handler implementation
QObject* TextGrammarCheck__GrammalecteConfigWidget_SuperSender(const TextGrammarCheck__GrammalecteConfigWidget* self) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = const_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigWidget*>(self));
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->setTextGrammarCheck__GrammalecteConfigWidget_Sender_IsBase(true);
        return vtextgrammarcheckgrammalecteconfigwidget->sender();
    } else {
        return ((VirtualTextGrammarCheckGrammalecteConfigWidget*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigWidget_OnSender(const TextGrammarCheck__GrammalecteConfigWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = const_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigWidget*>(self));
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->setTextGrammarCheck__GrammalecteConfigWidget_Sender_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigWidget::TextGrammarCheck__GrammalecteConfigWidget_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int TextGrammarCheck__GrammalecteConfigWidget_SenderSignalIndex(const TextGrammarCheck__GrammalecteConfigWidget* self) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = const_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigWidget*>(self));
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        return vtextgrammarcheckgrammalecteconfigwidget->senderSignalIndex();
    } else {
        return ((VirtualTextGrammarCheckGrammalecteConfigWidget*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int TextGrammarCheck__GrammalecteConfigWidget_SuperSenderSignalIndex(const TextGrammarCheck__GrammalecteConfigWidget* self) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = const_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigWidget*>(self));
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->setTextGrammarCheck__GrammalecteConfigWidget_SenderSignalIndex_IsBase(true);
        return vtextgrammarcheckgrammalecteconfigwidget->senderSignalIndex();
    } else {
        return ((VirtualTextGrammarCheckGrammalecteConfigWidget*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigWidget_OnSenderSignalIndex(const TextGrammarCheck__GrammalecteConfigWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = const_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigWidget*>(self));
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->setTextGrammarCheck__GrammalecteConfigWidget_SenderSignalIndex_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigWidget::TextGrammarCheck__GrammalecteConfigWidget_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int TextGrammarCheck__GrammalecteConfigWidget_Receivers(const TextGrammarCheck__GrammalecteConfigWidget* self, const char* signal) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = const_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigWidget*>(self));
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        return vtextgrammarcheckgrammalecteconfigwidget->receivers(signal);
    } else {
        return ((VirtualTextGrammarCheckGrammalecteConfigWidget*)self)->receivers(signal);
    }
}

// Base class handler implementation
int TextGrammarCheck__GrammalecteConfigWidget_SuperReceivers(const TextGrammarCheck__GrammalecteConfigWidget* self, const char* signal) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = const_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigWidget*>(self));
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->setTextGrammarCheck__GrammalecteConfigWidget_Receivers_IsBase(true);
        return vtextgrammarcheckgrammalecteconfigwidget->receivers(signal);
    } else {
        return ((VirtualTextGrammarCheckGrammalecteConfigWidget*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigWidget_OnReceivers(const TextGrammarCheck__GrammalecteConfigWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = const_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigWidget*>(self));
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->setTextGrammarCheck__GrammalecteConfigWidget_Receivers_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigWidget::TextGrammarCheck__GrammalecteConfigWidget_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextGrammarCheck__GrammalecteConfigWidget_IsSignalConnected(const TextGrammarCheck__GrammalecteConfigWidget* self, const QMetaMethod* signal) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = const_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigWidget*>(self));
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        return vtextgrammarcheckgrammalecteconfigwidget->isSignalConnected(*signal);
    } else {
        return ((VirtualTextGrammarCheckGrammalecteConfigWidget*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool TextGrammarCheck__GrammalecteConfigWidget_SuperIsSignalConnected(const TextGrammarCheck__GrammalecteConfigWidget* self, const QMetaMethod* signal) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = const_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigWidget*>(self));
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->setTextGrammarCheck__GrammalecteConfigWidget_IsSignalConnected_IsBase(true);
        return vtextgrammarcheckgrammalecteconfigwidget->isSignalConnected(*signal);
    } else {
        return ((VirtualTextGrammarCheckGrammalecteConfigWidget*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigWidget_OnIsSignalConnected(const TextGrammarCheck__GrammalecteConfigWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = const_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigWidget*>(self));
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->setTextGrammarCheck__GrammalecteConfigWidget_IsSignalConnected_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigWidget::TextGrammarCheck__GrammalecteConfigWidget_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double TextGrammarCheck__GrammalecteConfigWidget_GetDecodedMetricF(const TextGrammarCheck__GrammalecteConfigWidget* self, int metricA, int metricB) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = const_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigWidget*>(self));
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        return vtextgrammarcheckgrammalecteconfigwidget->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualTextGrammarCheckGrammalecteConfigWidget*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double TextGrammarCheck__GrammalecteConfigWidget_SuperGetDecodedMetricF(const TextGrammarCheck__GrammalecteConfigWidget* self, int metricA, int metricB) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = const_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigWidget*>(self));
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->setTextGrammarCheck__GrammalecteConfigWidget_GetDecodedMetricF_IsBase(true);
        return vtextgrammarcheckgrammalecteconfigwidget->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualTextGrammarCheckGrammalecteConfigWidget*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigWidget_OnGetDecodedMetricF(const TextGrammarCheck__GrammalecteConfigWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteconfigwidget = const_cast<VirtualTextGrammarCheckGrammalecteConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigWidget*>(self));
    if (vtextgrammarcheckgrammalecteconfigwidget && vtextgrammarcheckgrammalecteconfigwidget->isVirtualTextGrammarCheckGrammalecteConfigWidget) {
        vtextgrammarcheckgrammalecteconfigwidget->setTextGrammarCheck__GrammalecteConfigWidget_GetDecodedMetricF_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigWidget::TextGrammarCheck__GrammalecteConfigWidget_GetDecodedMetricF_Callback>(slot));
    }
}

void TextGrammarCheck__GrammalecteConfigWidget_Delete(TextGrammarCheck__GrammalecteConfigWidget* self) {
    delete self;
}
