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
#define WORKAROUND_INNER_CLASS_DEFINITION_TextGrammarCheck__LanguageToolConfigWidget
#include <languagetoolconfigwidget.h>
#include "liblanguagetoolconfigwidget.h"
#include "liblanguagetoolconfigwidget.hxx"

TextGrammarCheck__LanguageToolConfigWidget* TextGrammarCheck__LanguageToolConfigWidget_new(QWidget* parent) {
    return new VirtualTextGrammarCheckLanguageToolConfigWidget(parent);
}

TextGrammarCheck__LanguageToolConfigWidget* TextGrammarCheck__LanguageToolConfigWidget_new2() {
    return new VirtualTextGrammarCheckLanguageToolConfigWidget();
}

QMetaObject* TextGrammarCheck__LanguageToolConfigWidget_MetaObject(const TextGrammarCheck__LanguageToolConfigWidget* self) {
    auto* vtextgrammarcheck__languagetoolconfigwidget = dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarcheck__languagetoolconfigwidget && vtextgrammarcheck__languagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        return (QMetaObject*)self->metaObject();
    } else {
        return (QMetaObject*)((VirtualTextGrammarCheckLanguageToolConfigWidget*)self)->metaObject();
    }
}

void* TextGrammarCheck__LanguageToolConfigWidget_Metacast(TextGrammarCheck__LanguageToolConfigWidget* self, const char* param1) {
    auto* vtextgrammarcheck__languagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarcheck__languagetoolconfigwidget && vtextgrammarcheck__languagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        return self->qt_metacast(param1);
    } else {
        return ((VirtualTextGrammarCheckLanguageToolConfigWidget*)self)->qt_metacast(param1);
    }
}

int TextGrammarCheck__LanguageToolConfigWidget_Metacall(TextGrammarCheck__LanguageToolConfigWidget* self, int param1, int param2, void** param3) {
    auto* vtextgrammarcheck__languagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarcheck__languagetoolconfigwidget && vtextgrammarcheck__languagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualTextGrammarCheckLanguageToolConfigWidget*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

void TextGrammarCheck__LanguageToolConfigWidget_LoadSettings(TextGrammarCheck__LanguageToolConfigWidget* self) {
    self->loadSettings();
}

void TextGrammarCheck__LanguageToolConfigWidget_SaveSettings(TextGrammarCheck__LanguageToolConfigWidget* self) {
    self->saveSettings();
}

void TextGrammarCheck__LanguageToolConfigWidget_ResetValue(TextGrammarCheck__LanguageToolConfigWidget* self) {
    self->resetValue();
}

void TextGrammarCheck__LanguageToolConfigWidget_Connect_ResetValue(TextGrammarCheck__LanguageToolConfigWidget* self, intptr_t slot) {
    void (*slotFunc)(TextGrammarCheck__LanguageToolConfigWidget*) = reinterpret_cast<void (*)(TextGrammarCheck__LanguageToolConfigWidget*)>(slot);
    TextGrammarCheck::LanguageToolConfigWidget::connect(self, &TextGrammarCheck::LanguageToolConfigWidget::resetValue, [self, slotFunc]() {
        slotFunc(self);
    });
}

// Base class handler implementation
QMetaObject* TextGrammarCheck__LanguageToolConfigWidget_SuperMetaObject(const TextGrammarCheck__LanguageToolConfigWidget* self) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = const_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigWidget*>(self));
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->setTextGrammarCheck__LanguageToolConfigWidget_MetaObject_IsBase(true);
        return (QMetaObject*)vtextgrammarchecklanguagetoolconfigwidget->metaObject();
    } else {
        return (QMetaObject*)self->TextGrammarCheck::LanguageToolConfigWidget::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigWidget_OnMetaObject(const TextGrammarCheck__LanguageToolConfigWidget* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = const_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigWidget*>(self));
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->setTextGrammarCheck__LanguageToolConfigWidget_MetaObject_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigWidget::TextGrammarCheck__LanguageToolConfigWidget_MetaObject_Callback>(slot));
    }
}

// Base class handler implementation
void* TextGrammarCheck__LanguageToolConfigWidget_SuperMetacast(TextGrammarCheck__LanguageToolConfigWidget* self, const char* param1) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->setTextGrammarCheck__LanguageToolConfigWidget_Metacast_IsBase(true);
        return vtextgrammarchecklanguagetoolconfigwidget->qt_metacast(param1);
    } else {
        return self->TextGrammarCheck::LanguageToolConfigWidget::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigWidget_OnMetacast(TextGrammarCheck__LanguageToolConfigWidget* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->setTextGrammarCheck__LanguageToolConfigWidget_Metacast_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigWidget::TextGrammarCheck__LanguageToolConfigWidget_Metacast_Callback>(slot));
    }
}

// Base class handler implementation
int TextGrammarCheck__LanguageToolConfigWidget_SuperMetacall(TextGrammarCheck__LanguageToolConfigWidget* self, int param1, int param2, void** param3) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->setTextGrammarCheck__LanguageToolConfigWidget_Metacall_IsBase(true);
        return vtextgrammarchecklanguagetoolconfigwidget->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->TextGrammarCheck::LanguageToolConfigWidget::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigWidget_OnMetacall(TextGrammarCheck__LanguageToolConfigWidget* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->setTextGrammarCheck__LanguageToolConfigWidget_Metacall_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigWidget::TextGrammarCheck__LanguageToolConfigWidget_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
int TextGrammarCheck__LanguageToolConfigWidget_DevType(const TextGrammarCheck__LanguageToolConfigWidget* self) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = const_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigWidget*>(self));
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        return vtextgrammarchecklanguagetoolconfigwidget->devType();
    } else {
        return self->TextGrammarCheck::LanguageToolConfigWidget::devType();
    }
}

// Base class handler implementation
int TextGrammarCheck__LanguageToolConfigWidget_SuperDevType(const TextGrammarCheck__LanguageToolConfigWidget* self) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = const_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigWidget*>(self));
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->setTextGrammarCheck__LanguageToolConfigWidget_DevType_IsBase(true);
        return vtextgrammarchecklanguagetoolconfigwidget->devType();
    } else {
        return self->TextGrammarCheck::LanguageToolConfigWidget::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigWidget_OnDevType(const TextGrammarCheck__LanguageToolConfigWidget* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = const_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigWidget*>(self));
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->setTextGrammarCheck__LanguageToolConfigWidget_DevType_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigWidget::TextGrammarCheck__LanguageToolConfigWidget_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigWidget_SetVisible(TextGrammarCheck__LanguageToolConfigWidget* self, bool visible) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->setVisible(visible);
    } else {
        self->TextGrammarCheck::LanguageToolConfigWidget::setVisible(visible);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigWidget_SuperSetVisible(TextGrammarCheck__LanguageToolConfigWidget* self, bool visible) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->setTextGrammarCheck__LanguageToolConfigWidget_SetVisible_IsBase(true);
        vtextgrammarchecklanguagetoolconfigwidget->setVisible(visible);
    } else {
        self->TextGrammarCheck::LanguageToolConfigWidget::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigWidget_OnSetVisible(TextGrammarCheck__LanguageToolConfigWidget* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->setTextGrammarCheck__LanguageToolConfigWidget_SetVisible_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigWidget::TextGrammarCheck__LanguageToolConfigWidget_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* TextGrammarCheck__LanguageToolConfigWidget_SizeHint(const TextGrammarCheck__LanguageToolConfigWidget* self) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = const_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigWidget*>(self));
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        return new QSize(vtextgrammarchecklanguagetoolconfigwidget->sizeHint());
    } else {
        return new QSize(((VirtualTextGrammarCheckLanguageToolConfigWidget*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* TextGrammarCheck__LanguageToolConfigWidget_SuperSizeHint(const TextGrammarCheck__LanguageToolConfigWidget* self) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = const_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigWidget*>(self));
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->setTextGrammarCheck__LanguageToolConfigWidget_SizeHint_IsBase(true);
        return new QSize(vtextgrammarchecklanguagetoolconfigwidget->sizeHint());
    } else {
        return new QSize(((VirtualTextGrammarCheckLanguageToolConfigWidget*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigWidget_OnSizeHint(const TextGrammarCheck__LanguageToolConfigWidget* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = const_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigWidget*>(self));
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->setTextGrammarCheck__LanguageToolConfigWidget_SizeHint_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigWidget::TextGrammarCheck__LanguageToolConfigWidget_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* TextGrammarCheck__LanguageToolConfigWidget_MinimumSizeHint(const TextGrammarCheck__LanguageToolConfigWidget* self) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = const_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigWidget*>(self));
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        return new QSize(vtextgrammarchecklanguagetoolconfigwidget->minimumSizeHint());
    } else {
        return new QSize(((VirtualTextGrammarCheckLanguageToolConfigWidget*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* TextGrammarCheck__LanguageToolConfigWidget_SuperMinimumSizeHint(const TextGrammarCheck__LanguageToolConfigWidget* self) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = const_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigWidget*>(self));
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->setTextGrammarCheck__LanguageToolConfigWidget_MinimumSizeHint_IsBase(true);
        return new QSize(vtextgrammarchecklanguagetoolconfigwidget->minimumSizeHint());
    } else {
        return new QSize(((VirtualTextGrammarCheckLanguageToolConfigWidget*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigWidget_OnMinimumSizeHint(const TextGrammarCheck__LanguageToolConfigWidget* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = const_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigWidget*>(self));
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->setTextGrammarCheck__LanguageToolConfigWidget_MinimumSizeHint_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigWidget::TextGrammarCheck__LanguageToolConfigWidget_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
int TextGrammarCheck__LanguageToolConfigWidget_HeightForWidth(const TextGrammarCheck__LanguageToolConfigWidget* self, int param1) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = const_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigWidget*>(self));
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        return vtextgrammarchecklanguagetoolconfigwidget->heightForWidth(static_cast<int>(param1));
    } else {
        return self->TextGrammarCheck::LanguageToolConfigWidget::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int TextGrammarCheck__LanguageToolConfigWidget_SuperHeightForWidth(const TextGrammarCheck__LanguageToolConfigWidget* self, int param1) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = const_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigWidget*>(self));
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->setTextGrammarCheck__LanguageToolConfigWidget_HeightForWidth_IsBase(true);
        return vtextgrammarchecklanguagetoolconfigwidget->heightForWidth(static_cast<int>(param1));
    } else {
        return self->TextGrammarCheck::LanguageToolConfigWidget::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigWidget_OnHeightForWidth(const TextGrammarCheck__LanguageToolConfigWidget* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = const_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigWidget*>(self));
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->setTextGrammarCheck__LanguageToolConfigWidget_HeightForWidth_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigWidget::TextGrammarCheck__LanguageToolConfigWidget_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextGrammarCheck__LanguageToolConfigWidget_HasHeightForWidth(const TextGrammarCheck__LanguageToolConfigWidget* self) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = const_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigWidget*>(self));
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        return vtextgrammarchecklanguagetoolconfigwidget->hasHeightForWidth();
    } else {
        return self->TextGrammarCheck::LanguageToolConfigWidget::hasHeightForWidth();
    }
}

// Base class handler implementation
bool TextGrammarCheck__LanguageToolConfigWidget_SuperHasHeightForWidth(const TextGrammarCheck__LanguageToolConfigWidget* self) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = const_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigWidget*>(self));
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->setTextGrammarCheck__LanguageToolConfigWidget_HasHeightForWidth_IsBase(true);
        return vtextgrammarchecklanguagetoolconfigwidget->hasHeightForWidth();
    } else {
        return self->TextGrammarCheck::LanguageToolConfigWidget::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigWidget_OnHasHeightForWidth(const TextGrammarCheck__LanguageToolConfigWidget* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = const_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigWidget*>(self));
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->setTextGrammarCheck__LanguageToolConfigWidget_HasHeightForWidth_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigWidget::TextGrammarCheck__LanguageToolConfigWidget_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* TextGrammarCheck__LanguageToolConfigWidget_PaintEngine(const TextGrammarCheck__LanguageToolConfigWidget* self) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = const_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigWidget*>(self));
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        return vtextgrammarchecklanguagetoolconfigwidget->paintEngine();
    } else {
        return self->TextGrammarCheck::LanguageToolConfigWidget::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* TextGrammarCheck__LanguageToolConfigWidget_SuperPaintEngine(const TextGrammarCheck__LanguageToolConfigWidget* self) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = const_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigWidget*>(self));
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->setTextGrammarCheck__LanguageToolConfigWidget_PaintEngine_IsBase(true);
        return vtextgrammarchecklanguagetoolconfigwidget->paintEngine();
    } else {
        return self->TextGrammarCheck::LanguageToolConfigWidget::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigWidget_OnPaintEngine(const TextGrammarCheck__LanguageToolConfigWidget* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = const_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigWidget*>(self));
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->setTextGrammarCheck__LanguageToolConfigWidget_PaintEngine_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigWidget::TextGrammarCheck__LanguageToolConfigWidget_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextGrammarCheck__LanguageToolConfigWidget_Event(TextGrammarCheck__LanguageToolConfigWidget* self, QEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        return vtextgrammarchecklanguagetoolconfigwidget->event(event);
    } else {
        return ((VirtualTextGrammarCheckLanguageToolConfigWidget*)self)->event(event);
    }
}

// Base class handler implementation
bool TextGrammarCheck__LanguageToolConfigWidget_SuperEvent(TextGrammarCheck__LanguageToolConfigWidget* self, QEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->setTextGrammarCheck__LanguageToolConfigWidget_Event_IsBase(true);
        return vtextgrammarchecklanguagetoolconfigwidget->event(event);
    } else {
        return ((VirtualTextGrammarCheckLanguageToolConfigWidget*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigWidget_OnEvent(TextGrammarCheck__LanguageToolConfigWidget* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->setTextGrammarCheck__LanguageToolConfigWidget_Event_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigWidget::TextGrammarCheck__LanguageToolConfigWidget_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigWidget_MousePressEvent(TextGrammarCheck__LanguageToolConfigWidget* self, QMouseEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->mousePressEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigWidget*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigWidget_SuperMousePressEvent(TextGrammarCheck__LanguageToolConfigWidget* self, QMouseEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->setTextGrammarCheck__LanguageToolConfigWidget_MousePressEvent_IsBase(true);
        vtextgrammarchecklanguagetoolconfigwidget->mousePressEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigWidget*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigWidget_OnMousePressEvent(TextGrammarCheck__LanguageToolConfigWidget* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->setTextGrammarCheck__LanguageToolConfigWidget_MousePressEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigWidget::TextGrammarCheck__LanguageToolConfigWidget_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigWidget_MouseReleaseEvent(TextGrammarCheck__LanguageToolConfigWidget* self, QMouseEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->mouseReleaseEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigWidget*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigWidget_SuperMouseReleaseEvent(TextGrammarCheck__LanguageToolConfigWidget* self, QMouseEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->setTextGrammarCheck__LanguageToolConfigWidget_MouseReleaseEvent_IsBase(true);
        vtextgrammarchecklanguagetoolconfigwidget->mouseReleaseEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigWidget*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigWidget_OnMouseReleaseEvent(TextGrammarCheck__LanguageToolConfigWidget* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->setTextGrammarCheck__LanguageToolConfigWidget_MouseReleaseEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigWidget::TextGrammarCheck__LanguageToolConfigWidget_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigWidget_MouseDoubleClickEvent(TextGrammarCheck__LanguageToolConfigWidget* self, QMouseEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->mouseDoubleClickEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigWidget*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigWidget_SuperMouseDoubleClickEvent(TextGrammarCheck__LanguageToolConfigWidget* self, QMouseEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->setTextGrammarCheck__LanguageToolConfigWidget_MouseDoubleClickEvent_IsBase(true);
        vtextgrammarchecklanguagetoolconfigwidget->mouseDoubleClickEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigWidget*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigWidget_OnMouseDoubleClickEvent(TextGrammarCheck__LanguageToolConfigWidget* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->setTextGrammarCheck__LanguageToolConfigWidget_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigWidget::TextGrammarCheck__LanguageToolConfigWidget_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigWidget_MouseMoveEvent(TextGrammarCheck__LanguageToolConfigWidget* self, QMouseEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->mouseMoveEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigWidget*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigWidget_SuperMouseMoveEvent(TextGrammarCheck__LanguageToolConfigWidget* self, QMouseEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->setTextGrammarCheck__LanguageToolConfigWidget_MouseMoveEvent_IsBase(true);
        vtextgrammarchecklanguagetoolconfigwidget->mouseMoveEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigWidget*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigWidget_OnMouseMoveEvent(TextGrammarCheck__LanguageToolConfigWidget* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->setTextGrammarCheck__LanguageToolConfigWidget_MouseMoveEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigWidget::TextGrammarCheck__LanguageToolConfigWidget_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigWidget_WheelEvent(TextGrammarCheck__LanguageToolConfigWidget* self, QWheelEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->wheelEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigWidget*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigWidget_SuperWheelEvent(TextGrammarCheck__LanguageToolConfigWidget* self, QWheelEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->setTextGrammarCheck__LanguageToolConfigWidget_WheelEvent_IsBase(true);
        vtextgrammarchecklanguagetoolconfigwidget->wheelEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigWidget*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigWidget_OnWheelEvent(TextGrammarCheck__LanguageToolConfigWidget* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->setTextGrammarCheck__LanguageToolConfigWidget_WheelEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigWidget::TextGrammarCheck__LanguageToolConfigWidget_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigWidget_KeyPressEvent(TextGrammarCheck__LanguageToolConfigWidget* self, QKeyEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->keyPressEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigWidget*)self)->keyPressEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigWidget_SuperKeyPressEvent(TextGrammarCheck__LanguageToolConfigWidget* self, QKeyEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->setTextGrammarCheck__LanguageToolConfigWidget_KeyPressEvent_IsBase(true);
        vtextgrammarchecklanguagetoolconfigwidget->keyPressEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigWidget*)self)->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigWidget_OnKeyPressEvent(TextGrammarCheck__LanguageToolConfigWidget* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->setTextGrammarCheck__LanguageToolConfigWidget_KeyPressEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigWidget::TextGrammarCheck__LanguageToolConfigWidget_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigWidget_KeyReleaseEvent(TextGrammarCheck__LanguageToolConfigWidget* self, QKeyEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->keyReleaseEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigWidget*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigWidget_SuperKeyReleaseEvent(TextGrammarCheck__LanguageToolConfigWidget* self, QKeyEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->setTextGrammarCheck__LanguageToolConfigWidget_KeyReleaseEvent_IsBase(true);
        vtextgrammarchecklanguagetoolconfigwidget->keyReleaseEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigWidget*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigWidget_OnKeyReleaseEvent(TextGrammarCheck__LanguageToolConfigWidget* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->setTextGrammarCheck__LanguageToolConfigWidget_KeyReleaseEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigWidget::TextGrammarCheck__LanguageToolConfigWidget_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigWidget_FocusInEvent(TextGrammarCheck__LanguageToolConfigWidget* self, QFocusEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->focusInEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigWidget*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigWidget_SuperFocusInEvent(TextGrammarCheck__LanguageToolConfigWidget* self, QFocusEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->setTextGrammarCheck__LanguageToolConfigWidget_FocusInEvent_IsBase(true);
        vtextgrammarchecklanguagetoolconfigwidget->focusInEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigWidget*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigWidget_OnFocusInEvent(TextGrammarCheck__LanguageToolConfigWidget* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->setTextGrammarCheck__LanguageToolConfigWidget_FocusInEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigWidget::TextGrammarCheck__LanguageToolConfigWidget_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigWidget_FocusOutEvent(TextGrammarCheck__LanguageToolConfigWidget* self, QFocusEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->focusOutEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigWidget*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigWidget_SuperFocusOutEvent(TextGrammarCheck__LanguageToolConfigWidget* self, QFocusEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->setTextGrammarCheck__LanguageToolConfigWidget_FocusOutEvent_IsBase(true);
        vtextgrammarchecklanguagetoolconfigwidget->focusOutEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigWidget*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigWidget_OnFocusOutEvent(TextGrammarCheck__LanguageToolConfigWidget* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->setTextGrammarCheck__LanguageToolConfigWidget_FocusOutEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigWidget::TextGrammarCheck__LanguageToolConfigWidget_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigWidget_EnterEvent(TextGrammarCheck__LanguageToolConfigWidget* self, QEnterEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->enterEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigWidget*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigWidget_SuperEnterEvent(TextGrammarCheck__LanguageToolConfigWidget* self, QEnterEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->setTextGrammarCheck__LanguageToolConfigWidget_EnterEvent_IsBase(true);
        vtextgrammarchecklanguagetoolconfigwidget->enterEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigWidget*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigWidget_OnEnterEvent(TextGrammarCheck__LanguageToolConfigWidget* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->setTextGrammarCheck__LanguageToolConfigWidget_EnterEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigWidget::TextGrammarCheck__LanguageToolConfigWidget_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigWidget_LeaveEvent(TextGrammarCheck__LanguageToolConfigWidget* self, QEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->leaveEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigWidget*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigWidget_SuperLeaveEvent(TextGrammarCheck__LanguageToolConfigWidget* self, QEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->setTextGrammarCheck__LanguageToolConfigWidget_LeaveEvent_IsBase(true);
        vtextgrammarchecklanguagetoolconfigwidget->leaveEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigWidget*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigWidget_OnLeaveEvent(TextGrammarCheck__LanguageToolConfigWidget* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->setTextGrammarCheck__LanguageToolConfigWidget_LeaveEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigWidget::TextGrammarCheck__LanguageToolConfigWidget_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigWidget_PaintEvent(TextGrammarCheck__LanguageToolConfigWidget* self, QPaintEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->paintEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigWidget*)self)->paintEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigWidget_SuperPaintEvent(TextGrammarCheck__LanguageToolConfigWidget* self, QPaintEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->setTextGrammarCheck__LanguageToolConfigWidget_PaintEvent_IsBase(true);
        vtextgrammarchecklanguagetoolconfigwidget->paintEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigWidget*)self)->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigWidget_OnPaintEvent(TextGrammarCheck__LanguageToolConfigWidget* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->setTextGrammarCheck__LanguageToolConfigWidget_PaintEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigWidget::TextGrammarCheck__LanguageToolConfigWidget_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigWidget_MoveEvent(TextGrammarCheck__LanguageToolConfigWidget* self, QMoveEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->moveEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigWidget*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigWidget_SuperMoveEvent(TextGrammarCheck__LanguageToolConfigWidget* self, QMoveEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->setTextGrammarCheck__LanguageToolConfigWidget_MoveEvent_IsBase(true);
        vtextgrammarchecklanguagetoolconfigwidget->moveEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigWidget*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigWidget_OnMoveEvent(TextGrammarCheck__LanguageToolConfigWidget* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->setTextGrammarCheck__LanguageToolConfigWidget_MoveEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigWidget::TextGrammarCheck__LanguageToolConfigWidget_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigWidget_ResizeEvent(TextGrammarCheck__LanguageToolConfigWidget* self, QResizeEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->resizeEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigWidget*)self)->resizeEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigWidget_SuperResizeEvent(TextGrammarCheck__LanguageToolConfigWidget* self, QResizeEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->setTextGrammarCheck__LanguageToolConfigWidget_ResizeEvent_IsBase(true);
        vtextgrammarchecklanguagetoolconfigwidget->resizeEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigWidget*)self)->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigWidget_OnResizeEvent(TextGrammarCheck__LanguageToolConfigWidget* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->setTextGrammarCheck__LanguageToolConfigWidget_ResizeEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigWidget::TextGrammarCheck__LanguageToolConfigWidget_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigWidget_CloseEvent(TextGrammarCheck__LanguageToolConfigWidget* self, QCloseEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->closeEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigWidget*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigWidget_SuperCloseEvent(TextGrammarCheck__LanguageToolConfigWidget* self, QCloseEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->setTextGrammarCheck__LanguageToolConfigWidget_CloseEvent_IsBase(true);
        vtextgrammarchecklanguagetoolconfigwidget->closeEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigWidget*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigWidget_OnCloseEvent(TextGrammarCheck__LanguageToolConfigWidget* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->setTextGrammarCheck__LanguageToolConfigWidget_CloseEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigWidget::TextGrammarCheck__LanguageToolConfigWidget_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigWidget_ContextMenuEvent(TextGrammarCheck__LanguageToolConfigWidget* self, QContextMenuEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->contextMenuEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigWidget*)self)->contextMenuEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigWidget_SuperContextMenuEvent(TextGrammarCheck__LanguageToolConfigWidget* self, QContextMenuEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->setTextGrammarCheck__LanguageToolConfigWidget_ContextMenuEvent_IsBase(true);
        vtextgrammarchecklanguagetoolconfigwidget->contextMenuEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigWidget*)self)->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigWidget_OnContextMenuEvent(TextGrammarCheck__LanguageToolConfigWidget* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->setTextGrammarCheck__LanguageToolConfigWidget_ContextMenuEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigWidget::TextGrammarCheck__LanguageToolConfigWidget_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigWidget_TabletEvent(TextGrammarCheck__LanguageToolConfigWidget* self, QTabletEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->tabletEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigWidget*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigWidget_SuperTabletEvent(TextGrammarCheck__LanguageToolConfigWidget* self, QTabletEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->setTextGrammarCheck__LanguageToolConfigWidget_TabletEvent_IsBase(true);
        vtextgrammarchecklanguagetoolconfigwidget->tabletEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigWidget*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigWidget_OnTabletEvent(TextGrammarCheck__LanguageToolConfigWidget* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->setTextGrammarCheck__LanguageToolConfigWidget_TabletEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigWidget::TextGrammarCheck__LanguageToolConfigWidget_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigWidget_ActionEvent(TextGrammarCheck__LanguageToolConfigWidget* self, QActionEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->actionEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigWidget*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigWidget_SuperActionEvent(TextGrammarCheck__LanguageToolConfigWidget* self, QActionEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->setTextGrammarCheck__LanguageToolConfigWidget_ActionEvent_IsBase(true);
        vtextgrammarchecklanguagetoolconfigwidget->actionEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigWidget*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigWidget_OnActionEvent(TextGrammarCheck__LanguageToolConfigWidget* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->setTextGrammarCheck__LanguageToolConfigWidget_ActionEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigWidget::TextGrammarCheck__LanguageToolConfigWidget_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigWidget_DragEnterEvent(TextGrammarCheck__LanguageToolConfigWidget* self, QDragEnterEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->dragEnterEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigWidget*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigWidget_SuperDragEnterEvent(TextGrammarCheck__LanguageToolConfigWidget* self, QDragEnterEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->setTextGrammarCheck__LanguageToolConfigWidget_DragEnterEvent_IsBase(true);
        vtextgrammarchecklanguagetoolconfigwidget->dragEnterEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigWidget*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigWidget_OnDragEnterEvent(TextGrammarCheck__LanguageToolConfigWidget* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->setTextGrammarCheck__LanguageToolConfigWidget_DragEnterEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigWidget::TextGrammarCheck__LanguageToolConfigWidget_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigWidget_DragMoveEvent(TextGrammarCheck__LanguageToolConfigWidget* self, QDragMoveEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->dragMoveEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigWidget*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigWidget_SuperDragMoveEvent(TextGrammarCheck__LanguageToolConfigWidget* self, QDragMoveEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->setTextGrammarCheck__LanguageToolConfigWidget_DragMoveEvent_IsBase(true);
        vtextgrammarchecklanguagetoolconfigwidget->dragMoveEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigWidget*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigWidget_OnDragMoveEvent(TextGrammarCheck__LanguageToolConfigWidget* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->setTextGrammarCheck__LanguageToolConfigWidget_DragMoveEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigWidget::TextGrammarCheck__LanguageToolConfigWidget_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigWidget_DragLeaveEvent(TextGrammarCheck__LanguageToolConfigWidget* self, QDragLeaveEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->dragLeaveEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigWidget*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigWidget_SuperDragLeaveEvent(TextGrammarCheck__LanguageToolConfigWidget* self, QDragLeaveEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->setTextGrammarCheck__LanguageToolConfigWidget_DragLeaveEvent_IsBase(true);
        vtextgrammarchecklanguagetoolconfigwidget->dragLeaveEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigWidget*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigWidget_OnDragLeaveEvent(TextGrammarCheck__LanguageToolConfigWidget* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->setTextGrammarCheck__LanguageToolConfigWidget_DragLeaveEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigWidget::TextGrammarCheck__LanguageToolConfigWidget_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigWidget_DropEvent(TextGrammarCheck__LanguageToolConfigWidget* self, QDropEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->dropEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigWidget*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigWidget_SuperDropEvent(TextGrammarCheck__LanguageToolConfigWidget* self, QDropEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->setTextGrammarCheck__LanguageToolConfigWidget_DropEvent_IsBase(true);
        vtextgrammarchecklanguagetoolconfigwidget->dropEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigWidget*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigWidget_OnDropEvent(TextGrammarCheck__LanguageToolConfigWidget* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->setTextGrammarCheck__LanguageToolConfigWidget_DropEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigWidget::TextGrammarCheck__LanguageToolConfigWidget_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigWidget_ShowEvent(TextGrammarCheck__LanguageToolConfigWidget* self, QShowEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->showEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigWidget*)self)->showEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigWidget_SuperShowEvent(TextGrammarCheck__LanguageToolConfigWidget* self, QShowEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->setTextGrammarCheck__LanguageToolConfigWidget_ShowEvent_IsBase(true);
        vtextgrammarchecklanguagetoolconfigwidget->showEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigWidget*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigWidget_OnShowEvent(TextGrammarCheck__LanguageToolConfigWidget* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->setTextGrammarCheck__LanguageToolConfigWidget_ShowEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigWidget::TextGrammarCheck__LanguageToolConfigWidget_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigWidget_HideEvent(TextGrammarCheck__LanguageToolConfigWidget* self, QHideEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->hideEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigWidget*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigWidget_SuperHideEvent(TextGrammarCheck__LanguageToolConfigWidget* self, QHideEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->setTextGrammarCheck__LanguageToolConfigWidget_HideEvent_IsBase(true);
        vtextgrammarchecklanguagetoolconfigwidget->hideEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigWidget*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigWidget_OnHideEvent(TextGrammarCheck__LanguageToolConfigWidget* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->setTextGrammarCheck__LanguageToolConfigWidget_HideEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigWidget::TextGrammarCheck__LanguageToolConfigWidget_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextGrammarCheck__LanguageToolConfigWidget_NativeEvent(TextGrammarCheck__LanguageToolConfigWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        return vtextgrammarchecklanguagetoolconfigwidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualTextGrammarCheckLanguageToolConfigWidget*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool TextGrammarCheck__LanguageToolConfigWidget_SuperNativeEvent(TextGrammarCheck__LanguageToolConfigWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->setTextGrammarCheck__LanguageToolConfigWidget_NativeEvent_IsBase(true);
        return vtextgrammarchecklanguagetoolconfigwidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualTextGrammarCheckLanguageToolConfigWidget*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigWidget_OnNativeEvent(TextGrammarCheck__LanguageToolConfigWidget* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->setTextGrammarCheck__LanguageToolConfigWidget_NativeEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigWidget::TextGrammarCheck__LanguageToolConfigWidget_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigWidget_ChangeEvent(TextGrammarCheck__LanguageToolConfigWidget* self, QEvent* param1) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->changeEvent(param1);
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigWidget*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigWidget_SuperChangeEvent(TextGrammarCheck__LanguageToolConfigWidget* self, QEvent* param1) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->setTextGrammarCheck__LanguageToolConfigWidget_ChangeEvent_IsBase(true);
        vtextgrammarchecklanguagetoolconfigwidget->changeEvent(param1);
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigWidget*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigWidget_OnChangeEvent(TextGrammarCheck__LanguageToolConfigWidget* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->setTextGrammarCheck__LanguageToolConfigWidget_ChangeEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigWidget::TextGrammarCheck__LanguageToolConfigWidget_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int TextGrammarCheck__LanguageToolConfigWidget_Metric(const TextGrammarCheck__LanguageToolConfigWidget* self, int param1) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = const_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigWidget*>(self));
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        return vtextgrammarchecklanguagetoolconfigwidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualTextGrammarCheckLanguageToolConfigWidget*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int TextGrammarCheck__LanguageToolConfigWidget_SuperMetric(const TextGrammarCheck__LanguageToolConfigWidget* self, int param1) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = const_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigWidget*>(self));
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->setTextGrammarCheck__LanguageToolConfigWidget_Metric_IsBase(true);
        return vtextgrammarchecklanguagetoolconfigwidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualTextGrammarCheckLanguageToolConfigWidget*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigWidget_OnMetric(const TextGrammarCheck__LanguageToolConfigWidget* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = const_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigWidget*>(self));
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->setTextGrammarCheck__LanguageToolConfigWidget_Metric_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigWidget::TextGrammarCheck__LanguageToolConfigWidget_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigWidget_InitPainter(const TextGrammarCheck__LanguageToolConfigWidget* self, QPainter* painter) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = const_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigWidget*>(self));
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->initPainter(painter);
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigWidget*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigWidget_SuperInitPainter(const TextGrammarCheck__LanguageToolConfigWidget* self, QPainter* painter) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = const_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigWidget*>(self));
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->setTextGrammarCheck__LanguageToolConfigWidget_InitPainter_IsBase(true);
        vtextgrammarchecklanguagetoolconfigwidget->initPainter(painter);
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigWidget*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigWidget_OnInitPainter(const TextGrammarCheck__LanguageToolConfigWidget* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = const_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigWidget*>(self));
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->setTextGrammarCheck__LanguageToolConfigWidget_InitPainter_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigWidget::TextGrammarCheck__LanguageToolConfigWidget_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* TextGrammarCheck__LanguageToolConfigWidget_Redirected(const TextGrammarCheck__LanguageToolConfigWidget* self, QPoint* offset) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = const_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigWidget*>(self));
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        return vtextgrammarchecklanguagetoolconfigwidget->redirected(offset);
    } else {
        return ((VirtualTextGrammarCheckLanguageToolConfigWidget*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* TextGrammarCheck__LanguageToolConfigWidget_SuperRedirected(const TextGrammarCheck__LanguageToolConfigWidget* self, QPoint* offset) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = const_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigWidget*>(self));
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->setTextGrammarCheck__LanguageToolConfigWidget_Redirected_IsBase(true);
        return vtextgrammarchecklanguagetoolconfigwidget->redirected(offset);
    } else {
        return ((VirtualTextGrammarCheckLanguageToolConfigWidget*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigWidget_OnRedirected(const TextGrammarCheck__LanguageToolConfigWidget* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = const_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigWidget*>(self));
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->setTextGrammarCheck__LanguageToolConfigWidget_Redirected_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigWidget::TextGrammarCheck__LanguageToolConfigWidget_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* TextGrammarCheck__LanguageToolConfigWidget_SharedPainter(const TextGrammarCheck__LanguageToolConfigWidget* self) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = const_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigWidget*>(self));
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        return vtextgrammarchecklanguagetoolconfigwidget->sharedPainter();
    } else {
        return ((VirtualTextGrammarCheckLanguageToolConfigWidget*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* TextGrammarCheck__LanguageToolConfigWidget_SuperSharedPainter(const TextGrammarCheck__LanguageToolConfigWidget* self) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = const_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigWidget*>(self));
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->setTextGrammarCheck__LanguageToolConfigWidget_SharedPainter_IsBase(true);
        return vtextgrammarchecklanguagetoolconfigwidget->sharedPainter();
    } else {
        return ((VirtualTextGrammarCheckLanguageToolConfigWidget*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigWidget_OnSharedPainter(const TextGrammarCheck__LanguageToolConfigWidget* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = const_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigWidget*>(self));
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->setTextGrammarCheck__LanguageToolConfigWidget_SharedPainter_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigWidget::TextGrammarCheck__LanguageToolConfigWidget_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigWidget_InputMethodEvent(TextGrammarCheck__LanguageToolConfigWidget* self, QInputMethodEvent* param1) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->inputMethodEvent(param1);
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigWidget*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigWidget_SuperInputMethodEvent(TextGrammarCheck__LanguageToolConfigWidget* self, QInputMethodEvent* param1) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->setTextGrammarCheck__LanguageToolConfigWidget_InputMethodEvent_IsBase(true);
        vtextgrammarchecklanguagetoolconfigwidget->inputMethodEvent(param1);
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigWidget*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigWidget_OnInputMethodEvent(TextGrammarCheck__LanguageToolConfigWidget* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->setTextGrammarCheck__LanguageToolConfigWidget_InputMethodEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigWidget::TextGrammarCheck__LanguageToolConfigWidget_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* TextGrammarCheck__LanguageToolConfigWidget_InputMethodQuery(const TextGrammarCheck__LanguageToolConfigWidget* self, int param1) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = const_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigWidget*>(self));
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        return new QVariant(vtextgrammarchecklanguagetoolconfigwidget->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualTextGrammarCheckLanguageToolConfigWidget*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* TextGrammarCheck__LanguageToolConfigWidget_SuperInputMethodQuery(const TextGrammarCheck__LanguageToolConfigWidget* self, int param1) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = const_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigWidget*>(self));
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->setTextGrammarCheck__LanguageToolConfigWidget_InputMethodQuery_IsBase(true);
        return new QVariant(vtextgrammarchecklanguagetoolconfigwidget->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualTextGrammarCheckLanguageToolConfigWidget*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigWidget_OnInputMethodQuery(const TextGrammarCheck__LanguageToolConfigWidget* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = const_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigWidget*>(self));
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->setTextGrammarCheck__LanguageToolConfigWidget_InputMethodQuery_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigWidget::TextGrammarCheck__LanguageToolConfigWidget_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextGrammarCheck__LanguageToolConfigWidget_FocusNextPrevChild(TextGrammarCheck__LanguageToolConfigWidget* self, bool next) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        return vtextgrammarchecklanguagetoolconfigwidget->focusNextPrevChild(next);
    } else {
        return ((VirtualTextGrammarCheckLanguageToolConfigWidget*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool TextGrammarCheck__LanguageToolConfigWidget_SuperFocusNextPrevChild(TextGrammarCheck__LanguageToolConfigWidget* self, bool next) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->setTextGrammarCheck__LanguageToolConfigWidget_FocusNextPrevChild_IsBase(true);
        return vtextgrammarchecklanguagetoolconfigwidget->focusNextPrevChild(next);
    } else {
        return ((VirtualTextGrammarCheckLanguageToolConfigWidget*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigWidget_OnFocusNextPrevChild(TextGrammarCheck__LanguageToolConfigWidget* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->setTextGrammarCheck__LanguageToolConfigWidget_FocusNextPrevChild_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigWidget::TextGrammarCheck__LanguageToolConfigWidget_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextGrammarCheck__LanguageToolConfigWidget_EventFilter(TextGrammarCheck__LanguageToolConfigWidget* self, QObject* watched, QEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        return vtextgrammarchecklanguagetoolconfigwidget->eventFilter(watched, event);
    } else {
        return self->TextGrammarCheck::LanguageToolConfigWidget::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool TextGrammarCheck__LanguageToolConfigWidget_SuperEventFilter(TextGrammarCheck__LanguageToolConfigWidget* self, QObject* watched, QEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->setTextGrammarCheck__LanguageToolConfigWidget_EventFilter_IsBase(true);
        return vtextgrammarchecklanguagetoolconfigwidget->eventFilter(watched, event);
    } else {
        return self->TextGrammarCheck::LanguageToolConfigWidget::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigWidget_OnEventFilter(TextGrammarCheck__LanguageToolConfigWidget* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->setTextGrammarCheck__LanguageToolConfigWidget_EventFilter_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigWidget::TextGrammarCheck__LanguageToolConfigWidget_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigWidget_TimerEvent(TextGrammarCheck__LanguageToolConfigWidget* self, QTimerEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->timerEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigWidget*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigWidget_SuperTimerEvent(TextGrammarCheck__LanguageToolConfigWidget* self, QTimerEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->setTextGrammarCheck__LanguageToolConfigWidget_TimerEvent_IsBase(true);
        vtextgrammarchecklanguagetoolconfigwidget->timerEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigWidget*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigWidget_OnTimerEvent(TextGrammarCheck__LanguageToolConfigWidget* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->setTextGrammarCheck__LanguageToolConfigWidget_TimerEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigWidget::TextGrammarCheck__LanguageToolConfigWidget_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigWidget_ChildEvent(TextGrammarCheck__LanguageToolConfigWidget* self, QChildEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->childEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigWidget*)self)->childEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigWidget_SuperChildEvent(TextGrammarCheck__LanguageToolConfigWidget* self, QChildEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->setTextGrammarCheck__LanguageToolConfigWidget_ChildEvent_IsBase(true);
        vtextgrammarchecklanguagetoolconfigwidget->childEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigWidget*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigWidget_OnChildEvent(TextGrammarCheck__LanguageToolConfigWidget* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->setTextGrammarCheck__LanguageToolConfigWidget_ChildEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigWidget::TextGrammarCheck__LanguageToolConfigWidget_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigWidget_CustomEvent(TextGrammarCheck__LanguageToolConfigWidget* self, QEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->customEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigWidget*)self)->customEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigWidget_SuperCustomEvent(TextGrammarCheck__LanguageToolConfigWidget* self, QEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->setTextGrammarCheck__LanguageToolConfigWidget_CustomEvent_IsBase(true);
        vtextgrammarchecklanguagetoolconfigwidget->customEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigWidget*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigWidget_OnCustomEvent(TextGrammarCheck__LanguageToolConfigWidget* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->setTextGrammarCheck__LanguageToolConfigWidget_CustomEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigWidget::TextGrammarCheck__LanguageToolConfigWidget_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigWidget_ConnectNotify(TextGrammarCheck__LanguageToolConfigWidget* self, const QMetaMethod* signal) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->connectNotify(*signal);
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigWidget*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigWidget_SuperConnectNotify(TextGrammarCheck__LanguageToolConfigWidget* self, const QMetaMethod* signal) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->setTextGrammarCheck__LanguageToolConfigWidget_ConnectNotify_IsBase(true);
        vtextgrammarchecklanguagetoolconfigwidget->connectNotify(*signal);
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigWidget*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigWidget_OnConnectNotify(TextGrammarCheck__LanguageToolConfigWidget* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->setTextGrammarCheck__LanguageToolConfigWidget_ConnectNotify_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigWidget::TextGrammarCheck__LanguageToolConfigWidget_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigWidget_DisconnectNotify(TextGrammarCheck__LanguageToolConfigWidget* self, const QMetaMethod* signal) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->disconnectNotify(*signal);
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigWidget*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigWidget_SuperDisconnectNotify(TextGrammarCheck__LanguageToolConfigWidget* self, const QMetaMethod* signal) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->setTextGrammarCheck__LanguageToolConfigWidget_DisconnectNotify_IsBase(true);
        vtextgrammarchecklanguagetoolconfigwidget->disconnectNotify(*signal);
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigWidget*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigWidget_OnDisconnectNotify(TextGrammarCheck__LanguageToolConfigWidget* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->setTextGrammarCheck__LanguageToolConfigWidget_DisconnectNotify_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigWidget::TextGrammarCheck__LanguageToolConfigWidget_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigWidget_UpdateMicroFocus(TextGrammarCheck__LanguageToolConfigWidget* self) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->updateMicroFocus();
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigWidget*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigWidget_SuperUpdateMicroFocus(TextGrammarCheck__LanguageToolConfigWidget* self) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->setTextGrammarCheck__LanguageToolConfigWidget_UpdateMicroFocus_IsBase(true);
        vtextgrammarchecklanguagetoolconfigwidget->updateMicroFocus();
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigWidget*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigWidget_OnUpdateMicroFocus(TextGrammarCheck__LanguageToolConfigWidget* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->setTextGrammarCheck__LanguageToolConfigWidget_UpdateMicroFocus_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigWidget::TextGrammarCheck__LanguageToolConfigWidget_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigWidget_Create(TextGrammarCheck__LanguageToolConfigWidget* self) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->create();
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigWidget*)self)->create();
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigWidget_SuperCreate(TextGrammarCheck__LanguageToolConfigWidget* self) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->setTextGrammarCheck__LanguageToolConfigWidget_Create_IsBase(true);
        vtextgrammarchecklanguagetoolconfigwidget->create();
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigWidget*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigWidget_OnCreate(TextGrammarCheck__LanguageToolConfigWidget* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->setTextGrammarCheck__LanguageToolConfigWidget_Create_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigWidget::TextGrammarCheck__LanguageToolConfigWidget_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigWidget_Destroy(TextGrammarCheck__LanguageToolConfigWidget* self) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->destroy();
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigWidget*)self)->destroy();
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigWidget_SuperDestroy(TextGrammarCheck__LanguageToolConfigWidget* self) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->setTextGrammarCheck__LanguageToolConfigWidget_Destroy_IsBase(true);
        vtextgrammarchecklanguagetoolconfigwidget->destroy();
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigWidget*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigWidget_OnDestroy(TextGrammarCheck__LanguageToolConfigWidget* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->setTextGrammarCheck__LanguageToolConfigWidget_Destroy_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigWidget::TextGrammarCheck__LanguageToolConfigWidget_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextGrammarCheck__LanguageToolConfigWidget_FocusNextChild(TextGrammarCheck__LanguageToolConfigWidget* self) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        return vtextgrammarchecklanguagetoolconfigwidget->focusNextChild();
    } else {
        return ((VirtualTextGrammarCheckLanguageToolConfigWidget*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool TextGrammarCheck__LanguageToolConfigWidget_SuperFocusNextChild(TextGrammarCheck__LanguageToolConfigWidget* self) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->setTextGrammarCheck__LanguageToolConfigWidget_FocusNextChild_IsBase(true);
        return vtextgrammarchecklanguagetoolconfigwidget->focusNextChild();
    } else {
        return ((VirtualTextGrammarCheckLanguageToolConfigWidget*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigWidget_OnFocusNextChild(TextGrammarCheck__LanguageToolConfigWidget* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->setTextGrammarCheck__LanguageToolConfigWidget_FocusNextChild_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigWidget::TextGrammarCheck__LanguageToolConfigWidget_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextGrammarCheck__LanguageToolConfigWidget_FocusPreviousChild(TextGrammarCheck__LanguageToolConfigWidget* self) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        return vtextgrammarchecklanguagetoolconfigwidget->focusPreviousChild();
    } else {
        return ((VirtualTextGrammarCheckLanguageToolConfigWidget*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool TextGrammarCheck__LanguageToolConfigWidget_SuperFocusPreviousChild(TextGrammarCheck__LanguageToolConfigWidget* self) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->setTextGrammarCheck__LanguageToolConfigWidget_FocusPreviousChild_IsBase(true);
        return vtextgrammarchecklanguagetoolconfigwidget->focusPreviousChild();
    } else {
        return ((VirtualTextGrammarCheckLanguageToolConfigWidget*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigWidget_OnFocusPreviousChild(TextGrammarCheck__LanguageToolConfigWidget* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(self);
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->setTextGrammarCheck__LanguageToolConfigWidget_FocusPreviousChild_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigWidget::TextGrammarCheck__LanguageToolConfigWidget_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* TextGrammarCheck__LanguageToolConfigWidget_Sender(const TextGrammarCheck__LanguageToolConfigWidget* self) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = const_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigWidget*>(self));
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        return vtextgrammarchecklanguagetoolconfigwidget->sender();
    } else {
        return ((VirtualTextGrammarCheckLanguageToolConfigWidget*)self)->sender();
    }
}

// Base class handler implementation
QObject* TextGrammarCheck__LanguageToolConfigWidget_SuperSender(const TextGrammarCheck__LanguageToolConfigWidget* self) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = const_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigWidget*>(self));
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->setTextGrammarCheck__LanguageToolConfigWidget_Sender_IsBase(true);
        return vtextgrammarchecklanguagetoolconfigwidget->sender();
    } else {
        return ((VirtualTextGrammarCheckLanguageToolConfigWidget*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigWidget_OnSender(const TextGrammarCheck__LanguageToolConfigWidget* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = const_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigWidget*>(self));
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->setTextGrammarCheck__LanguageToolConfigWidget_Sender_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigWidget::TextGrammarCheck__LanguageToolConfigWidget_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int TextGrammarCheck__LanguageToolConfigWidget_SenderSignalIndex(const TextGrammarCheck__LanguageToolConfigWidget* self) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = const_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigWidget*>(self));
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        return vtextgrammarchecklanguagetoolconfigwidget->senderSignalIndex();
    } else {
        return ((VirtualTextGrammarCheckLanguageToolConfigWidget*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int TextGrammarCheck__LanguageToolConfigWidget_SuperSenderSignalIndex(const TextGrammarCheck__LanguageToolConfigWidget* self) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = const_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigWidget*>(self));
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->setTextGrammarCheck__LanguageToolConfigWidget_SenderSignalIndex_IsBase(true);
        return vtextgrammarchecklanguagetoolconfigwidget->senderSignalIndex();
    } else {
        return ((VirtualTextGrammarCheckLanguageToolConfigWidget*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigWidget_OnSenderSignalIndex(const TextGrammarCheck__LanguageToolConfigWidget* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = const_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigWidget*>(self));
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->setTextGrammarCheck__LanguageToolConfigWidget_SenderSignalIndex_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigWidget::TextGrammarCheck__LanguageToolConfigWidget_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int TextGrammarCheck__LanguageToolConfigWidget_Receivers(const TextGrammarCheck__LanguageToolConfigWidget* self, const char* signal) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = const_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigWidget*>(self));
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        return vtextgrammarchecklanguagetoolconfigwidget->receivers(signal);
    } else {
        return ((VirtualTextGrammarCheckLanguageToolConfigWidget*)self)->receivers(signal);
    }
}

// Base class handler implementation
int TextGrammarCheck__LanguageToolConfigWidget_SuperReceivers(const TextGrammarCheck__LanguageToolConfigWidget* self, const char* signal) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = const_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigWidget*>(self));
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->setTextGrammarCheck__LanguageToolConfigWidget_Receivers_IsBase(true);
        return vtextgrammarchecklanguagetoolconfigwidget->receivers(signal);
    } else {
        return ((VirtualTextGrammarCheckLanguageToolConfigWidget*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigWidget_OnReceivers(const TextGrammarCheck__LanguageToolConfigWidget* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = const_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigWidget*>(self));
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->setTextGrammarCheck__LanguageToolConfigWidget_Receivers_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigWidget::TextGrammarCheck__LanguageToolConfigWidget_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextGrammarCheck__LanguageToolConfigWidget_IsSignalConnected(const TextGrammarCheck__LanguageToolConfigWidget* self, const QMetaMethod* signal) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = const_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigWidget*>(self));
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        return vtextgrammarchecklanguagetoolconfigwidget->isSignalConnected(*signal);
    } else {
        return ((VirtualTextGrammarCheckLanguageToolConfigWidget*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool TextGrammarCheck__LanguageToolConfigWidget_SuperIsSignalConnected(const TextGrammarCheck__LanguageToolConfigWidget* self, const QMetaMethod* signal) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = const_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigWidget*>(self));
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->setTextGrammarCheck__LanguageToolConfigWidget_IsSignalConnected_IsBase(true);
        return vtextgrammarchecklanguagetoolconfigwidget->isSignalConnected(*signal);
    } else {
        return ((VirtualTextGrammarCheckLanguageToolConfigWidget*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigWidget_OnIsSignalConnected(const TextGrammarCheck__LanguageToolConfigWidget* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = const_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigWidget*>(self));
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->setTextGrammarCheck__LanguageToolConfigWidget_IsSignalConnected_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigWidget::TextGrammarCheck__LanguageToolConfigWidget_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double TextGrammarCheck__LanguageToolConfigWidget_GetDecodedMetricF(const TextGrammarCheck__LanguageToolConfigWidget* self, int metricA, int metricB) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = const_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigWidget*>(self));
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        return vtextgrammarchecklanguagetoolconfigwidget->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualTextGrammarCheckLanguageToolConfigWidget*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double TextGrammarCheck__LanguageToolConfigWidget_SuperGetDecodedMetricF(const TextGrammarCheck__LanguageToolConfigWidget* self, int metricA, int metricB) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = const_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigWidget*>(self));
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->setTextGrammarCheck__LanguageToolConfigWidget_GetDecodedMetricF_IsBase(true);
        return vtextgrammarchecklanguagetoolconfigwidget->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualTextGrammarCheckLanguageToolConfigWidget*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigWidget_OnGetDecodedMetricF(const TextGrammarCheck__LanguageToolConfigWidget* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolconfigwidget = const_cast<VirtualTextGrammarCheckLanguageToolConfigWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigWidget*>(self));
    if (vtextgrammarchecklanguagetoolconfigwidget && vtextgrammarchecklanguagetoolconfigwidget->isVirtualTextGrammarCheckLanguageToolConfigWidget) {
        vtextgrammarchecklanguagetoolconfigwidget->setTextGrammarCheck__LanguageToolConfigWidget_GetDecodedMetricF_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigWidget::TextGrammarCheck__LanguageToolConfigWidget_GetDecodedMetricF_Callback>(slot));
    }
}

void TextGrammarCheck__LanguageToolConfigWidget_Delete(TextGrammarCheck__LanguageToolConfigWidget* self) {
    delete self;
}
