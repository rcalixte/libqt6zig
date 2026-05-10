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
    auto* vtextautocorrectionwidgets__autocorrectionwidget = dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgets__autocorrectionwidget && vtextautocorrectionwidgets__autocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        return (QMetaObject*)self->metaObject();
    } else {
        return (QMetaObject*)((VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*)self)->metaObject();
    }
}

void* TextAutoCorrectionWidgets__AutoCorrectionWidget_Metacast(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, const char* param1) {
    auto* vtextautocorrectionwidgets__autocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgets__autocorrectionwidget && vtextautocorrectionwidgets__autocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        return self->qt_metacast(param1);
    } else {
        return ((VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*)self)->qt_metacast(param1);
    }
}

int TextAutoCorrectionWidgets__AutoCorrectionWidget_Metacall(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, int param1, int param2, void** param3) {
    auto* vtextautocorrectionwidgets__autocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgets__autocorrectionwidget && vtextautocorrectionwidgets__autocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
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
    TextAutoCorrectionWidgets::AutoCorrectionWidget::connect(self, &TextAutoCorrectionWidgets::AutoCorrectionWidget::changed, [self, slotFunc]() {
        slotFunc(self);
    });
}

// Base class handler implementation
QMetaObject* TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperMetaObject(const TextAutoCorrectionWidgets__AutoCorrectionWidget* self) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self));
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->setTextAutoCorrectionWidgets__AutoCorrectionWidget_MetaObject_IsBase(true);
        return (QMetaObject*)vtextautocorrectionwidgetsautocorrectionwidget->metaObject();
    } else {
        return (QMetaObject*)self->TextAutoCorrectionWidgets::AutoCorrectionWidget::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_OnMetaObject(const TextAutoCorrectionWidgets__AutoCorrectionWidget* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self));
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->setTextAutoCorrectionWidgets__AutoCorrectionWidget_MetaObject_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget::TextAutoCorrectionWidgets__AutoCorrectionWidget_MetaObject_Callback>(slot));
    }
}

// Base class handler implementation
void* TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperMetacast(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, const char* param1) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->setTextAutoCorrectionWidgets__AutoCorrectionWidget_Metacast_IsBase(true);
        return vtextautocorrectionwidgetsautocorrectionwidget->qt_metacast(param1);
    } else {
        return self->TextAutoCorrectionWidgets::AutoCorrectionWidget::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_OnMetacast(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->setTextAutoCorrectionWidgets__AutoCorrectionWidget_Metacast_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget::TextAutoCorrectionWidgets__AutoCorrectionWidget_Metacast_Callback>(slot));
    }
}

// Base class handler implementation
int TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperMetacall(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, int param1, int param2, void** param3) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->setTextAutoCorrectionWidgets__AutoCorrectionWidget_Metacall_IsBase(true);
        return vtextautocorrectionwidgetsautocorrectionwidget->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->TextAutoCorrectionWidgets::AutoCorrectionWidget::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_OnMetacall(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->setTextAutoCorrectionWidgets__AutoCorrectionWidget_Metacall_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget::TextAutoCorrectionWidgets__AutoCorrectionWidget_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
int TextAutoCorrectionWidgets__AutoCorrectionWidget_DevType(const TextAutoCorrectionWidgets__AutoCorrectionWidget* self) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self));
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        return vtextautocorrectionwidgetsautocorrectionwidget->devType();
    } else {
        return self->TextAutoCorrectionWidgets::AutoCorrectionWidget::devType();
    }
}

// Base class handler implementation
int TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperDevType(const TextAutoCorrectionWidgets__AutoCorrectionWidget* self) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self));
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->setTextAutoCorrectionWidgets__AutoCorrectionWidget_DevType_IsBase(true);
        return vtextautocorrectionwidgetsautocorrectionwidget->devType();
    } else {
        return self->TextAutoCorrectionWidgets::AutoCorrectionWidget::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_OnDevType(const TextAutoCorrectionWidgets__AutoCorrectionWidget* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self));
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->setTextAutoCorrectionWidgets__AutoCorrectionWidget_DevType_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget::TextAutoCorrectionWidgets__AutoCorrectionWidget_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_SetVisible(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, bool visible) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->setVisible(visible);
    } else {
        self->TextAutoCorrectionWidgets::AutoCorrectionWidget::setVisible(visible);
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperSetVisible(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, bool visible) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->setTextAutoCorrectionWidgets__AutoCorrectionWidget_SetVisible_IsBase(true);
        vtextautocorrectionwidgetsautocorrectionwidget->setVisible(visible);
    } else {
        self->TextAutoCorrectionWidgets::AutoCorrectionWidget::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_OnSetVisible(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->setTextAutoCorrectionWidgets__AutoCorrectionWidget_SetVisible_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget::TextAutoCorrectionWidgets__AutoCorrectionWidget_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* TextAutoCorrectionWidgets__AutoCorrectionWidget_SizeHint(const TextAutoCorrectionWidgets__AutoCorrectionWidget* self) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self));
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        return new QSize(vtextautocorrectionwidgetsautocorrectionwidget->sizeHint());
    } else {
        return new QSize(((VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperSizeHint(const TextAutoCorrectionWidgets__AutoCorrectionWidget* self) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self));
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->setTextAutoCorrectionWidgets__AutoCorrectionWidget_SizeHint_IsBase(true);
        return new QSize(vtextautocorrectionwidgetsautocorrectionwidget->sizeHint());
    } else {
        return new QSize(((VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_OnSizeHint(const TextAutoCorrectionWidgets__AutoCorrectionWidget* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self));
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->setTextAutoCorrectionWidgets__AutoCorrectionWidget_SizeHint_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget::TextAutoCorrectionWidgets__AutoCorrectionWidget_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* TextAutoCorrectionWidgets__AutoCorrectionWidget_MinimumSizeHint(const TextAutoCorrectionWidgets__AutoCorrectionWidget* self) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self));
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        return new QSize(vtextautocorrectionwidgetsautocorrectionwidget->minimumSizeHint());
    } else {
        return new QSize(((VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperMinimumSizeHint(const TextAutoCorrectionWidgets__AutoCorrectionWidget* self) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self));
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->setTextAutoCorrectionWidgets__AutoCorrectionWidget_MinimumSizeHint_IsBase(true);
        return new QSize(vtextautocorrectionwidgetsautocorrectionwidget->minimumSizeHint());
    } else {
        return new QSize(((VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_OnMinimumSizeHint(const TextAutoCorrectionWidgets__AutoCorrectionWidget* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self));
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->setTextAutoCorrectionWidgets__AutoCorrectionWidget_MinimumSizeHint_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget::TextAutoCorrectionWidgets__AutoCorrectionWidget_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
int TextAutoCorrectionWidgets__AutoCorrectionWidget_HeightForWidth(const TextAutoCorrectionWidgets__AutoCorrectionWidget* self, int param1) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self));
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        return vtextautocorrectionwidgetsautocorrectionwidget->heightForWidth(static_cast<int>(param1));
    } else {
        return self->TextAutoCorrectionWidgets::AutoCorrectionWidget::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperHeightForWidth(const TextAutoCorrectionWidgets__AutoCorrectionWidget* self, int param1) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self));
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->setTextAutoCorrectionWidgets__AutoCorrectionWidget_HeightForWidth_IsBase(true);
        return vtextautocorrectionwidgetsautocorrectionwidget->heightForWidth(static_cast<int>(param1));
    } else {
        return self->TextAutoCorrectionWidgets::AutoCorrectionWidget::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_OnHeightForWidth(const TextAutoCorrectionWidgets__AutoCorrectionWidget* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self));
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->setTextAutoCorrectionWidgets__AutoCorrectionWidget_HeightForWidth_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget::TextAutoCorrectionWidgets__AutoCorrectionWidget_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextAutoCorrectionWidgets__AutoCorrectionWidget_HasHeightForWidth(const TextAutoCorrectionWidgets__AutoCorrectionWidget* self) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self));
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        return vtextautocorrectionwidgetsautocorrectionwidget->hasHeightForWidth();
    } else {
        return self->TextAutoCorrectionWidgets::AutoCorrectionWidget::hasHeightForWidth();
    }
}

// Base class handler implementation
bool TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperHasHeightForWidth(const TextAutoCorrectionWidgets__AutoCorrectionWidget* self) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self));
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->setTextAutoCorrectionWidgets__AutoCorrectionWidget_HasHeightForWidth_IsBase(true);
        return vtextautocorrectionwidgetsautocorrectionwidget->hasHeightForWidth();
    } else {
        return self->TextAutoCorrectionWidgets::AutoCorrectionWidget::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_OnHasHeightForWidth(const TextAutoCorrectionWidgets__AutoCorrectionWidget* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self));
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->setTextAutoCorrectionWidgets__AutoCorrectionWidget_HasHeightForWidth_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget::TextAutoCorrectionWidgets__AutoCorrectionWidget_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* TextAutoCorrectionWidgets__AutoCorrectionWidget_PaintEngine(const TextAutoCorrectionWidgets__AutoCorrectionWidget* self) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self));
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        return vtextautocorrectionwidgetsautocorrectionwidget->paintEngine();
    } else {
        return self->TextAutoCorrectionWidgets::AutoCorrectionWidget::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperPaintEngine(const TextAutoCorrectionWidgets__AutoCorrectionWidget* self) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self));
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->setTextAutoCorrectionWidgets__AutoCorrectionWidget_PaintEngine_IsBase(true);
        return vtextautocorrectionwidgetsautocorrectionwidget->paintEngine();
    } else {
        return self->TextAutoCorrectionWidgets::AutoCorrectionWidget::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_OnPaintEngine(const TextAutoCorrectionWidgets__AutoCorrectionWidget* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self));
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->setTextAutoCorrectionWidgets__AutoCorrectionWidget_PaintEngine_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget::TextAutoCorrectionWidgets__AutoCorrectionWidget_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextAutoCorrectionWidgets__AutoCorrectionWidget_Event(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, QEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        return vtextautocorrectionwidgetsautocorrectionwidget->event(event);
    } else {
        return ((VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*)self)->event(event);
    }
}

// Base class handler implementation
bool TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, QEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->setTextAutoCorrectionWidgets__AutoCorrectionWidget_Event_IsBase(true);
        return vtextautocorrectionwidgetsautocorrectionwidget->event(event);
    } else {
        return ((VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_OnEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->setTextAutoCorrectionWidgets__AutoCorrectionWidget_Event_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget::TextAutoCorrectionWidgets__AutoCorrectionWidget_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_MousePressEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, QMouseEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->mousePressEvent(event);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperMousePressEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, QMouseEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->setTextAutoCorrectionWidgets__AutoCorrectionWidget_MousePressEvent_IsBase(true);
        vtextautocorrectionwidgetsautocorrectionwidget->mousePressEvent(event);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_OnMousePressEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->setTextAutoCorrectionWidgets__AutoCorrectionWidget_MousePressEvent_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget::TextAutoCorrectionWidgets__AutoCorrectionWidget_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_MouseReleaseEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, QMouseEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->mouseReleaseEvent(event);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperMouseReleaseEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, QMouseEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->setTextAutoCorrectionWidgets__AutoCorrectionWidget_MouseReleaseEvent_IsBase(true);
        vtextautocorrectionwidgetsautocorrectionwidget->mouseReleaseEvent(event);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_OnMouseReleaseEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->setTextAutoCorrectionWidgets__AutoCorrectionWidget_MouseReleaseEvent_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget::TextAutoCorrectionWidgets__AutoCorrectionWidget_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_MouseDoubleClickEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, QMouseEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->mouseDoubleClickEvent(event);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperMouseDoubleClickEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, QMouseEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->setTextAutoCorrectionWidgets__AutoCorrectionWidget_MouseDoubleClickEvent_IsBase(true);
        vtextautocorrectionwidgetsautocorrectionwidget->mouseDoubleClickEvent(event);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_OnMouseDoubleClickEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->setTextAutoCorrectionWidgets__AutoCorrectionWidget_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget::TextAutoCorrectionWidgets__AutoCorrectionWidget_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_MouseMoveEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, QMouseEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->mouseMoveEvent(event);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperMouseMoveEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, QMouseEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->setTextAutoCorrectionWidgets__AutoCorrectionWidget_MouseMoveEvent_IsBase(true);
        vtextautocorrectionwidgetsautocorrectionwidget->mouseMoveEvent(event);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_OnMouseMoveEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->setTextAutoCorrectionWidgets__AutoCorrectionWidget_MouseMoveEvent_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget::TextAutoCorrectionWidgets__AutoCorrectionWidget_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_WheelEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, QWheelEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->wheelEvent(event);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperWheelEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, QWheelEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->setTextAutoCorrectionWidgets__AutoCorrectionWidget_WheelEvent_IsBase(true);
        vtextautocorrectionwidgetsautocorrectionwidget->wheelEvent(event);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_OnWheelEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->setTextAutoCorrectionWidgets__AutoCorrectionWidget_WheelEvent_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget::TextAutoCorrectionWidgets__AutoCorrectionWidget_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_KeyPressEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, QKeyEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->keyPressEvent(event);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*)self)->keyPressEvent(event);
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperKeyPressEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, QKeyEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->setTextAutoCorrectionWidgets__AutoCorrectionWidget_KeyPressEvent_IsBase(true);
        vtextautocorrectionwidgetsautocorrectionwidget->keyPressEvent(event);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*)self)->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_OnKeyPressEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->setTextAutoCorrectionWidgets__AutoCorrectionWidget_KeyPressEvent_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget::TextAutoCorrectionWidgets__AutoCorrectionWidget_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_KeyReleaseEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, QKeyEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->keyReleaseEvent(event);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperKeyReleaseEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, QKeyEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->setTextAutoCorrectionWidgets__AutoCorrectionWidget_KeyReleaseEvent_IsBase(true);
        vtextautocorrectionwidgetsautocorrectionwidget->keyReleaseEvent(event);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_OnKeyReleaseEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->setTextAutoCorrectionWidgets__AutoCorrectionWidget_KeyReleaseEvent_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget::TextAutoCorrectionWidgets__AutoCorrectionWidget_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_FocusInEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, QFocusEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->focusInEvent(event);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperFocusInEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, QFocusEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->setTextAutoCorrectionWidgets__AutoCorrectionWidget_FocusInEvent_IsBase(true);
        vtextautocorrectionwidgetsautocorrectionwidget->focusInEvent(event);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_OnFocusInEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->setTextAutoCorrectionWidgets__AutoCorrectionWidget_FocusInEvent_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget::TextAutoCorrectionWidgets__AutoCorrectionWidget_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_FocusOutEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, QFocusEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->focusOutEvent(event);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperFocusOutEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, QFocusEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->setTextAutoCorrectionWidgets__AutoCorrectionWidget_FocusOutEvent_IsBase(true);
        vtextautocorrectionwidgetsautocorrectionwidget->focusOutEvent(event);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_OnFocusOutEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->setTextAutoCorrectionWidgets__AutoCorrectionWidget_FocusOutEvent_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget::TextAutoCorrectionWidgets__AutoCorrectionWidget_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_EnterEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, QEnterEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->enterEvent(event);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperEnterEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, QEnterEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->setTextAutoCorrectionWidgets__AutoCorrectionWidget_EnterEvent_IsBase(true);
        vtextautocorrectionwidgetsautocorrectionwidget->enterEvent(event);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_OnEnterEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->setTextAutoCorrectionWidgets__AutoCorrectionWidget_EnterEvent_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget::TextAutoCorrectionWidgets__AutoCorrectionWidget_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_LeaveEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, QEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->leaveEvent(event);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperLeaveEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, QEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->setTextAutoCorrectionWidgets__AutoCorrectionWidget_LeaveEvent_IsBase(true);
        vtextautocorrectionwidgetsautocorrectionwidget->leaveEvent(event);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_OnLeaveEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->setTextAutoCorrectionWidgets__AutoCorrectionWidget_LeaveEvent_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget::TextAutoCorrectionWidgets__AutoCorrectionWidget_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_PaintEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, QPaintEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->paintEvent(event);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*)self)->paintEvent(event);
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperPaintEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, QPaintEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->setTextAutoCorrectionWidgets__AutoCorrectionWidget_PaintEvent_IsBase(true);
        vtextautocorrectionwidgetsautocorrectionwidget->paintEvent(event);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*)self)->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_OnPaintEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->setTextAutoCorrectionWidgets__AutoCorrectionWidget_PaintEvent_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget::TextAutoCorrectionWidgets__AutoCorrectionWidget_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_MoveEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, QMoveEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->moveEvent(event);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperMoveEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, QMoveEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->setTextAutoCorrectionWidgets__AutoCorrectionWidget_MoveEvent_IsBase(true);
        vtextautocorrectionwidgetsautocorrectionwidget->moveEvent(event);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_OnMoveEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->setTextAutoCorrectionWidgets__AutoCorrectionWidget_MoveEvent_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget::TextAutoCorrectionWidgets__AutoCorrectionWidget_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_ResizeEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, QResizeEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->resizeEvent(event);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*)self)->resizeEvent(event);
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperResizeEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, QResizeEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->setTextAutoCorrectionWidgets__AutoCorrectionWidget_ResizeEvent_IsBase(true);
        vtextautocorrectionwidgetsautocorrectionwidget->resizeEvent(event);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*)self)->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_OnResizeEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->setTextAutoCorrectionWidgets__AutoCorrectionWidget_ResizeEvent_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget::TextAutoCorrectionWidgets__AutoCorrectionWidget_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_CloseEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, QCloseEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->closeEvent(event);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperCloseEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, QCloseEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->setTextAutoCorrectionWidgets__AutoCorrectionWidget_CloseEvent_IsBase(true);
        vtextautocorrectionwidgetsautocorrectionwidget->closeEvent(event);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_OnCloseEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->setTextAutoCorrectionWidgets__AutoCorrectionWidget_CloseEvent_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget::TextAutoCorrectionWidgets__AutoCorrectionWidget_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_ContextMenuEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, QContextMenuEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->contextMenuEvent(event);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*)self)->contextMenuEvent(event);
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperContextMenuEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, QContextMenuEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->setTextAutoCorrectionWidgets__AutoCorrectionWidget_ContextMenuEvent_IsBase(true);
        vtextautocorrectionwidgetsautocorrectionwidget->contextMenuEvent(event);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*)self)->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_OnContextMenuEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->setTextAutoCorrectionWidgets__AutoCorrectionWidget_ContextMenuEvent_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget::TextAutoCorrectionWidgets__AutoCorrectionWidget_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_TabletEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, QTabletEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->tabletEvent(event);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperTabletEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, QTabletEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->setTextAutoCorrectionWidgets__AutoCorrectionWidget_TabletEvent_IsBase(true);
        vtextautocorrectionwidgetsautocorrectionwidget->tabletEvent(event);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_OnTabletEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->setTextAutoCorrectionWidgets__AutoCorrectionWidget_TabletEvent_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget::TextAutoCorrectionWidgets__AutoCorrectionWidget_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_ActionEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, QActionEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->actionEvent(event);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperActionEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, QActionEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->setTextAutoCorrectionWidgets__AutoCorrectionWidget_ActionEvent_IsBase(true);
        vtextautocorrectionwidgetsautocorrectionwidget->actionEvent(event);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_OnActionEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->setTextAutoCorrectionWidgets__AutoCorrectionWidget_ActionEvent_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget::TextAutoCorrectionWidgets__AutoCorrectionWidget_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_DragEnterEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, QDragEnterEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->dragEnterEvent(event);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperDragEnterEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, QDragEnterEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->setTextAutoCorrectionWidgets__AutoCorrectionWidget_DragEnterEvent_IsBase(true);
        vtextautocorrectionwidgetsautocorrectionwidget->dragEnterEvent(event);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_OnDragEnterEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->setTextAutoCorrectionWidgets__AutoCorrectionWidget_DragEnterEvent_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget::TextAutoCorrectionWidgets__AutoCorrectionWidget_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_DragMoveEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, QDragMoveEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->dragMoveEvent(event);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperDragMoveEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, QDragMoveEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->setTextAutoCorrectionWidgets__AutoCorrectionWidget_DragMoveEvent_IsBase(true);
        vtextautocorrectionwidgetsautocorrectionwidget->dragMoveEvent(event);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_OnDragMoveEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->setTextAutoCorrectionWidgets__AutoCorrectionWidget_DragMoveEvent_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget::TextAutoCorrectionWidgets__AutoCorrectionWidget_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_DragLeaveEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, QDragLeaveEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->dragLeaveEvent(event);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperDragLeaveEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, QDragLeaveEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->setTextAutoCorrectionWidgets__AutoCorrectionWidget_DragLeaveEvent_IsBase(true);
        vtextautocorrectionwidgetsautocorrectionwidget->dragLeaveEvent(event);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_OnDragLeaveEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->setTextAutoCorrectionWidgets__AutoCorrectionWidget_DragLeaveEvent_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget::TextAutoCorrectionWidgets__AutoCorrectionWidget_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_DropEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, QDropEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->dropEvent(event);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperDropEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, QDropEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->setTextAutoCorrectionWidgets__AutoCorrectionWidget_DropEvent_IsBase(true);
        vtextautocorrectionwidgetsautocorrectionwidget->dropEvent(event);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_OnDropEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->setTextAutoCorrectionWidgets__AutoCorrectionWidget_DropEvent_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget::TextAutoCorrectionWidgets__AutoCorrectionWidget_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_ShowEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, QShowEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->showEvent(event);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*)self)->showEvent(event);
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperShowEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, QShowEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->setTextAutoCorrectionWidgets__AutoCorrectionWidget_ShowEvent_IsBase(true);
        vtextautocorrectionwidgetsautocorrectionwidget->showEvent(event);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_OnShowEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->setTextAutoCorrectionWidgets__AutoCorrectionWidget_ShowEvent_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget::TextAutoCorrectionWidgets__AutoCorrectionWidget_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_HideEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, QHideEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->hideEvent(event);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperHideEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, QHideEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->setTextAutoCorrectionWidgets__AutoCorrectionWidget_HideEvent_IsBase(true);
        vtextautocorrectionwidgetsautocorrectionwidget->hideEvent(event);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_OnHideEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->setTextAutoCorrectionWidgets__AutoCorrectionWidget_HideEvent_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget::TextAutoCorrectionWidgets__AutoCorrectionWidget_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextAutoCorrectionWidgets__AutoCorrectionWidget_NativeEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        return vtextautocorrectionwidgetsautocorrectionwidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperNativeEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->setTextAutoCorrectionWidgets__AutoCorrectionWidget_NativeEvent_IsBase(true);
        return vtextautocorrectionwidgetsautocorrectionwidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_OnNativeEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->setTextAutoCorrectionWidgets__AutoCorrectionWidget_NativeEvent_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget::TextAutoCorrectionWidgets__AutoCorrectionWidget_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_ChangeEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, QEvent* param1) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->changeEvent(param1);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperChangeEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, QEvent* param1) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->setTextAutoCorrectionWidgets__AutoCorrectionWidget_ChangeEvent_IsBase(true);
        vtextautocorrectionwidgetsautocorrectionwidget->changeEvent(param1);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_OnChangeEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->setTextAutoCorrectionWidgets__AutoCorrectionWidget_ChangeEvent_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget::TextAutoCorrectionWidgets__AutoCorrectionWidget_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int TextAutoCorrectionWidgets__AutoCorrectionWidget_Metric(const TextAutoCorrectionWidgets__AutoCorrectionWidget* self, int param1) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self));
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        return vtextautocorrectionwidgetsautocorrectionwidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperMetric(const TextAutoCorrectionWidgets__AutoCorrectionWidget* self, int param1) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self));
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->setTextAutoCorrectionWidgets__AutoCorrectionWidget_Metric_IsBase(true);
        return vtextautocorrectionwidgetsautocorrectionwidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_OnMetric(const TextAutoCorrectionWidgets__AutoCorrectionWidget* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self));
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->setTextAutoCorrectionWidgets__AutoCorrectionWidget_Metric_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget::TextAutoCorrectionWidgets__AutoCorrectionWidget_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_InitPainter(const TextAutoCorrectionWidgets__AutoCorrectionWidget* self, QPainter* painter) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self));
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->initPainter(painter);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperInitPainter(const TextAutoCorrectionWidgets__AutoCorrectionWidget* self, QPainter* painter) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self));
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->setTextAutoCorrectionWidgets__AutoCorrectionWidget_InitPainter_IsBase(true);
        vtextautocorrectionwidgetsautocorrectionwidget->initPainter(painter);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_OnInitPainter(const TextAutoCorrectionWidgets__AutoCorrectionWidget* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self));
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->setTextAutoCorrectionWidgets__AutoCorrectionWidget_InitPainter_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget::TextAutoCorrectionWidgets__AutoCorrectionWidget_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* TextAutoCorrectionWidgets__AutoCorrectionWidget_Redirected(const TextAutoCorrectionWidgets__AutoCorrectionWidget* self, QPoint* offset) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self));
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        return vtextautocorrectionwidgetsautocorrectionwidget->redirected(offset);
    } else {
        return ((VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperRedirected(const TextAutoCorrectionWidgets__AutoCorrectionWidget* self, QPoint* offset) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self));
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->setTextAutoCorrectionWidgets__AutoCorrectionWidget_Redirected_IsBase(true);
        return vtextautocorrectionwidgetsautocorrectionwidget->redirected(offset);
    } else {
        return ((VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_OnRedirected(const TextAutoCorrectionWidgets__AutoCorrectionWidget* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self));
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->setTextAutoCorrectionWidgets__AutoCorrectionWidget_Redirected_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget::TextAutoCorrectionWidgets__AutoCorrectionWidget_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* TextAutoCorrectionWidgets__AutoCorrectionWidget_SharedPainter(const TextAutoCorrectionWidgets__AutoCorrectionWidget* self) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self));
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        return vtextautocorrectionwidgetsautocorrectionwidget->sharedPainter();
    } else {
        return ((VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperSharedPainter(const TextAutoCorrectionWidgets__AutoCorrectionWidget* self) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self));
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->setTextAutoCorrectionWidgets__AutoCorrectionWidget_SharedPainter_IsBase(true);
        return vtextautocorrectionwidgetsautocorrectionwidget->sharedPainter();
    } else {
        return ((VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_OnSharedPainter(const TextAutoCorrectionWidgets__AutoCorrectionWidget* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self));
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->setTextAutoCorrectionWidgets__AutoCorrectionWidget_SharedPainter_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget::TextAutoCorrectionWidgets__AutoCorrectionWidget_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_InputMethodEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, QInputMethodEvent* param1) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->inputMethodEvent(param1);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperInputMethodEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, QInputMethodEvent* param1) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->setTextAutoCorrectionWidgets__AutoCorrectionWidget_InputMethodEvent_IsBase(true);
        vtextautocorrectionwidgetsautocorrectionwidget->inputMethodEvent(param1);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_OnInputMethodEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->setTextAutoCorrectionWidgets__AutoCorrectionWidget_InputMethodEvent_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget::TextAutoCorrectionWidgets__AutoCorrectionWidget_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* TextAutoCorrectionWidgets__AutoCorrectionWidget_InputMethodQuery(const TextAutoCorrectionWidgets__AutoCorrectionWidget* self, int param1) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self));
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        return new QVariant(vtextautocorrectionwidgetsautocorrectionwidget->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperInputMethodQuery(const TextAutoCorrectionWidgets__AutoCorrectionWidget* self, int param1) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self));
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->setTextAutoCorrectionWidgets__AutoCorrectionWidget_InputMethodQuery_IsBase(true);
        return new QVariant(vtextautocorrectionwidgetsautocorrectionwidget->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_OnInputMethodQuery(const TextAutoCorrectionWidgets__AutoCorrectionWidget* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self));
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->setTextAutoCorrectionWidgets__AutoCorrectionWidget_InputMethodQuery_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget::TextAutoCorrectionWidgets__AutoCorrectionWidget_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextAutoCorrectionWidgets__AutoCorrectionWidget_FocusNextPrevChild(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, bool next) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        return vtextautocorrectionwidgetsautocorrectionwidget->focusNextPrevChild(next);
    } else {
        return ((VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperFocusNextPrevChild(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, bool next) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->setTextAutoCorrectionWidgets__AutoCorrectionWidget_FocusNextPrevChild_IsBase(true);
        return vtextautocorrectionwidgetsautocorrectionwidget->focusNextPrevChild(next);
    } else {
        return ((VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_OnFocusNextPrevChild(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->setTextAutoCorrectionWidgets__AutoCorrectionWidget_FocusNextPrevChild_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget::TextAutoCorrectionWidgets__AutoCorrectionWidget_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextAutoCorrectionWidgets__AutoCorrectionWidget_EventFilter(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, QObject* watched, QEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        return vtextautocorrectionwidgetsautocorrectionwidget->eventFilter(watched, event);
    } else {
        return self->TextAutoCorrectionWidgets::AutoCorrectionWidget::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperEventFilter(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, QObject* watched, QEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->setTextAutoCorrectionWidgets__AutoCorrectionWidget_EventFilter_IsBase(true);
        return vtextautocorrectionwidgetsautocorrectionwidget->eventFilter(watched, event);
    } else {
        return self->TextAutoCorrectionWidgets::AutoCorrectionWidget::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_OnEventFilter(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->setTextAutoCorrectionWidgets__AutoCorrectionWidget_EventFilter_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget::TextAutoCorrectionWidgets__AutoCorrectionWidget_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_TimerEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, QTimerEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->timerEvent(event);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperTimerEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, QTimerEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->setTextAutoCorrectionWidgets__AutoCorrectionWidget_TimerEvent_IsBase(true);
        vtextautocorrectionwidgetsautocorrectionwidget->timerEvent(event);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_OnTimerEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->setTextAutoCorrectionWidgets__AutoCorrectionWidget_TimerEvent_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget::TextAutoCorrectionWidgets__AutoCorrectionWidget_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_ChildEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, QChildEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->childEvent(event);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*)self)->childEvent(event);
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperChildEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, QChildEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->setTextAutoCorrectionWidgets__AutoCorrectionWidget_ChildEvent_IsBase(true);
        vtextautocorrectionwidgetsautocorrectionwidget->childEvent(event);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_OnChildEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->setTextAutoCorrectionWidgets__AutoCorrectionWidget_ChildEvent_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget::TextAutoCorrectionWidgets__AutoCorrectionWidget_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_CustomEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, QEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->customEvent(event);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*)self)->customEvent(event);
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperCustomEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, QEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->setTextAutoCorrectionWidgets__AutoCorrectionWidget_CustomEvent_IsBase(true);
        vtextautocorrectionwidgetsautocorrectionwidget->customEvent(event);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_OnCustomEvent(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->setTextAutoCorrectionWidgets__AutoCorrectionWidget_CustomEvent_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget::TextAutoCorrectionWidgets__AutoCorrectionWidget_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_ConnectNotify(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, const QMetaMethod* signal) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->connectNotify(*signal);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperConnectNotify(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, const QMetaMethod* signal) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->setTextAutoCorrectionWidgets__AutoCorrectionWidget_ConnectNotify_IsBase(true);
        vtextautocorrectionwidgetsautocorrectionwidget->connectNotify(*signal);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_OnConnectNotify(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->setTextAutoCorrectionWidgets__AutoCorrectionWidget_ConnectNotify_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget::TextAutoCorrectionWidgets__AutoCorrectionWidget_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_DisconnectNotify(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, const QMetaMethod* signal) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->disconnectNotify(*signal);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperDisconnectNotify(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, const QMetaMethod* signal) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->setTextAutoCorrectionWidgets__AutoCorrectionWidget_DisconnectNotify_IsBase(true);
        vtextautocorrectionwidgetsautocorrectionwidget->disconnectNotify(*signal);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_OnDisconnectNotify(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->setTextAutoCorrectionWidgets__AutoCorrectionWidget_DisconnectNotify_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget::TextAutoCorrectionWidgets__AutoCorrectionWidget_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_UpdateMicroFocus(TextAutoCorrectionWidgets__AutoCorrectionWidget* self) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->updateMicroFocus();
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperUpdateMicroFocus(TextAutoCorrectionWidgets__AutoCorrectionWidget* self) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->setTextAutoCorrectionWidgets__AutoCorrectionWidget_UpdateMicroFocus_IsBase(true);
        vtextautocorrectionwidgetsautocorrectionwidget->updateMicroFocus();
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_OnUpdateMicroFocus(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->setTextAutoCorrectionWidgets__AutoCorrectionWidget_UpdateMicroFocus_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget::TextAutoCorrectionWidgets__AutoCorrectionWidget_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_Create(TextAutoCorrectionWidgets__AutoCorrectionWidget* self) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->create();
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*)self)->create();
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperCreate(TextAutoCorrectionWidgets__AutoCorrectionWidget* self) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->setTextAutoCorrectionWidgets__AutoCorrectionWidget_Create_IsBase(true);
        vtextautocorrectionwidgetsautocorrectionwidget->create();
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_OnCreate(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->setTextAutoCorrectionWidgets__AutoCorrectionWidget_Create_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget::TextAutoCorrectionWidgets__AutoCorrectionWidget_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_Destroy(TextAutoCorrectionWidgets__AutoCorrectionWidget* self) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->destroy();
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*)self)->destroy();
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperDestroy(TextAutoCorrectionWidgets__AutoCorrectionWidget* self) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->setTextAutoCorrectionWidgets__AutoCorrectionWidget_Destroy_IsBase(true);
        vtextautocorrectionwidgetsautocorrectionwidget->destroy();
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_OnDestroy(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->setTextAutoCorrectionWidgets__AutoCorrectionWidget_Destroy_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget::TextAutoCorrectionWidgets__AutoCorrectionWidget_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextAutoCorrectionWidgets__AutoCorrectionWidget_FocusNextChild(TextAutoCorrectionWidgets__AutoCorrectionWidget* self) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        return vtextautocorrectionwidgetsautocorrectionwidget->focusNextChild();
    } else {
        return ((VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperFocusNextChild(TextAutoCorrectionWidgets__AutoCorrectionWidget* self) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->setTextAutoCorrectionWidgets__AutoCorrectionWidget_FocusNextChild_IsBase(true);
        return vtextautocorrectionwidgetsautocorrectionwidget->focusNextChild();
    } else {
        return ((VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_OnFocusNextChild(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->setTextAutoCorrectionWidgets__AutoCorrectionWidget_FocusNextChild_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget::TextAutoCorrectionWidgets__AutoCorrectionWidget_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextAutoCorrectionWidgets__AutoCorrectionWidget_FocusPreviousChild(TextAutoCorrectionWidgets__AutoCorrectionWidget* self) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        return vtextautocorrectionwidgetsautocorrectionwidget->focusPreviousChild();
    } else {
        return ((VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperFocusPreviousChild(TextAutoCorrectionWidgets__AutoCorrectionWidget* self) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->setTextAutoCorrectionWidgets__AutoCorrectionWidget_FocusPreviousChild_IsBase(true);
        return vtextautocorrectionwidgetsautocorrectionwidget->focusPreviousChild();
    } else {
        return ((VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_OnFocusPreviousChild(TextAutoCorrectionWidgets__AutoCorrectionWidget* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self);
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->setTextAutoCorrectionWidgets__AutoCorrectionWidget_FocusPreviousChild_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget::TextAutoCorrectionWidgets__AutoCorrectionWidget_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* TextAutoCorrectionWidgets__AutoCorrectionWidget_Sender(const TextAutoCorrectionWidgets__AutoCorrectionWidget* self) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self));
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        return vtextautocorrectionwidgetsautocorrectionwidget->sender();
    } else {
        return ((VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*)self)->sender();
    }
}

// Base class handler implementation
QObject* TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperSender(const TextAutoCorrectionWidgets__AutoCorrectionWidget* self) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self));
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->setTextAutoCorrectionWidgets__AutoCorrectionWidget_Sender_IsBase(true);
        return vtextautocorrectionwidgetsautocorrectionwidget->sender();
    } else {
        return ((VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_OnSender(const TextAutoCorrectionWidgets__AutoCorrectionWidget* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self));
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->setTextAutoCorrectionWidgets__AutoCorrectionWidget_Sender_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget::TextAutoCorrectionWidgets__AutoCorrectionWidget_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int TextAutoCorrectionWidgets__AutoCorrectionWidget_SenderSignalIndex(const TextAutoCorrectionWidgets__AutoCorrectionWidget* self) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self));
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        return vtextautocorrectionwidgetsautocorrectionwidget->senderSignalIndex();
    } else {
        return ((VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperSenderSignalIndex(const TextAutoCorrectionWidgets__AutoCorrectionWidget* self) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self));
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->setTextAutoCorrectionWidgets__AutoCorrectionWidget_SenderSignalIndex_IsBase(true);
        return vtextautocorrectionwidgetsautocorrectionwidget->senderSignalIndex();
    } else {
        return ((VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_OnSenderSignalIndex(const TextAutoCorrectionWidgets__AutoCorrectionWidget* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self));
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->setTextAutoCorrectionWidgets__AutoCorrectionWidget_SenderSignalIndex_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget::TextAutoCorrectionWidgets__AutoCorrectionWidget_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int TextAutoCorrectionWidgets__AutoCorrectionWidget_Receivers(const TextAutoCorrectionWidgets__AutoCorrectionWidget* self, const char* signal) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self));
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        return vtextautocorrectionwidgetsautocorrectionwidget->receivers(signal);
    } else {
        return ((VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*)self)->receivers(signal);
    }
}

// Base class handler implementation
int TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperReceivers(const TextAutoCorrectionWidgets__AutoCorrectionWidget* self, const char* signal) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self));
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->setTextAutoCorrectionWidgets__AutoCorrectionWidget_Receivers_IsBase(true);
        return vtextautocorrectionwidgetsautocorrectionwidget->receivers(signal);
    } else {
        return ((VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_OnReceivers(const TextAutoCorrectionWidgets__AutoCorrectionWidget* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self));
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->setTextAutoCorrectionWidgets__AutoCorrectionWidget_Receivers_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget::TextAutoCorrectionWidgets__AutoCorrectionWidget_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextAutoCorrectionWidgets__AutoCorrectionWidget_IsSignalConnected(const TextAutoCorrectionWidgets__AutoCorrectionWidget* self, const QMetaMethod* signal) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self));
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        return vtextautocorrectionwidgetsautocorrectionwidget->isSignalConnected(*signal);
    } else {
        return ((VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperIsSignalConnected(const TextAutoCorrectionWidgets__AutoCorrectionWidget* self, const QMetaMethod* signal) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self));
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->setTextAutoCorrectionWidgets__AutoCorrectionWidget_IsSignalConnected_IsBase(true);
        return vtextautocorrectionwidgetsautocorrectionwidget->isSignalConnected(*signal);
    } else {
        return ((VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_OnIsSignalConnected(const TextAutoCorrectionWidgets__AutoCorrectionWidget* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self));
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->setTextAutoCorrectionWidgets__AutoCorrectionWidget_IsSignalConnected_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget::TextAutoCorrectionWidgets__AutoCorrectionWidget_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double TextAutoCorrectionWidgets__AutoCorrectionWidget_GetDecodedMetricF(const TextAutoCorrectionWidgets__AutoCorrectionWidget* self, int metricA, int metricB) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self));
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        return vtextautocorrectionwidgetsautocorrectionwidget->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperGetDecodedMetricF(const TextAutoCorrectionWidgets__AutoCorrectionWidget* self, int metricA, int metricB) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self));
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->setTextAutoCorrectionWidgets__AutoCorrectionWidget_GetDecodedMetricF_IsBase(true);
        return vtextautocorrectionwidgetsautocorrectionwidget->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionWidget_OnGetDecodedMetricF(const TextAutoCorrectionWidgets__AutoCorrectionWidget* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectionwidget = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget*>(self));
    if (vtextautocorrectionwidgetsautocorrectionwidget && vtextautocorrectionwidgetsautocorrectionwidget->isVirtualTextAutoCorrectionWidgetsAutoCorrectionWidget) {
        vtextautocorrectionwidgetsautocorrectionwidget->setTextAutoCorrectionWidgets__AutoCorrectionWidget_GetDecodedMetricF_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget::TextAutoCorrectionWidgets__AutoCorrectionWidget_GetDecodedMetricF_Callback>(slot));
    }
}

void TextAutoCorrectionWidgets__AutoCorrectionWidget_Delete(TextAutoCorrectionWidgets__AutoCorrectionWidget* self) {
    delete self;
}
