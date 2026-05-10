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
#define WORKAROUND_INNER_CLASS_DEFINITION_TextGrammarCheck__GrammalecteResultWidget
#define WORKAROUND_INNER_CLASS_DEFINITION_TextGrammarCheck__GrammarResultWidget
#include <grammalecteresultwidget.h>
#include "libgrammalecteresultwidget.h"
#include "libgrammalecteresultwidget.hxx"

TextGrammarCheck__GrammalecteResultWidget* TextGrammarCheck__GrammalecteResultWidget_new(QWidget* parent) {
    return new VirtualTextGrammarCheckGrammalecteResultWidget(parent);
}

TextGrammarCheck__GrammalecteResultWidget* TextGrammarCheck__GrammalecteResultWidget_new2() {
    return new VirtualTextGrammarCheckGrammalecteResultWidget();
}

QMetaObject* TextGrammarCheck__GrammalecteResultWidget_MetaObject(const TextGrammarCheck__GrammalecteResultWidget* self) {
    auto* vtextgrammarcheck__grammalecteresultwidget = dynamic_cast<const VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheck__grammalecteresultwidget && vtextgrammarcheck__grammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        return (QMetaObject*)self->metaObject();
    } else {
        return (QMetaObject*)((VirtualTextGrammarCheckGrammalecteResultWidget*)self)->metaObject();
    }
}

void* TextGrammarCheck__GrammalecteResultWidget_Metacast(TextGrammarCheck__GrammalecteResultWidget* self, const char* param1) {
    auto* vtextgrammarcheck__grammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheck__grammalecteresultwidget && vtextgrammarcheck__grammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        return self->qt_metacast(param1);
    } else {
        return ((VirtualTextGrammarCheckGrammalecteResultWidget*)self)->qt_metacast(param1);
    }
}

int TextGrammarCheck__GrammalecteResultWidget_Metacall(TextGrammarCheck__GrammalecteResultWidget* self, int param1, int param2, void** param3) {
    auto* vtextgrammarcheck__grammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheck__grammalecteresultwidget && vtextgrammarcheck__grammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualTextGrammarCheckGrammalecteResultWidget*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

void TextGrammarCheck__GrammalecteResultWidget_CheckGrammar(TextGrammarCheck__GrammalecteResultWidget* self) {
    auto* vtextgrammarcheck__grammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheck__grammalecteresultwidget && vtextgrammarcheck__grammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        self->checkGrammar();
    } else {
        ((VirtualTextGrammarCheckGrammalecteResultWidget*)self)->checkGrammar();
    }
}

// Base class handler implementation
QMetaObject* TextGrammarCheck__GrammalecteResultWidget_SuperMetaObject(const TextGrammarCheck__GrammalecteResultWidget* self) {
    auto* vtextgrammarcheckgrammalecteresultwidget = const_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteResultWidget*>(self));
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->setTextGrammarCheck__GrammalecteResultWidget_MetaObject_IsBase(true);
        return (QMetaObject*)vtextgrammarcheckgrammalecteresultwidget->metaObject();
    } else {
        return (QMetaObject*)self->TextGrammarCheck::GrammalecteResultWidget::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteResultWidget_OnMetaObject(const TextGrammarCheck__GrammalecteResultWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteresultwidget = const_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteResultWidget*>(self));
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->setTextGrammarCheck__GrammalecteResultWidget_MetaObject_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteResultWidget::TextGrammarCheck__GrammalecteResultWidget_MetaObject_Callback>(slot));
    }
}

// Base class handler implementation
void* TextGrammarCheck__GrammalecteResultWidget_SuperMetacast(TextGrammarCheck__GrammalecteResultWidget* self, const char* param1) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->setTextGrammarCheck__GrammalecteResultWidget_Metacast_IsBase(true);
        return vtextgrammarcheckgrammalecteresultwidget->qt_metacast(param1);
    } else {
        return self->TextGrammarCheck::GrammalecteResultWidget::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteResultWidget_OnMetacast(TextGrammarCheck__GrammalecteResultWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->setTextGrammarCheck__GrammalecteResultWidget_Metacast_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteResultWidget::TextGrammarCheck__GrammalecteResultWidget_Metacast_Callback>(slot));
    }
}

// Base class handler implementation
int TextGrammarCheck__GrammalecteResultWidget_SuperMetacall(TextGrammarCheck__GrammalecteResultWidget* self, int param1, int param2, void** param3) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->setTextGrammarCheck__GrammalecteResultWidget_Metacall_IsBase(true);
        return vtextgrammarcheckgrammalecteresultwidget->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->TextGrammarCheck::GrammalecteResultWidget::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteResultWidget_OnMetacall(TextGrammarCheck__GrammalecteResultWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->setTextGrammarCheck__GrammalecteResultWidget_Metacall_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteResultWidget::TextGrammarCheck__GrammalecteResultWidget_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_SuperCheckGrammar(TextGrammarCheck__GrammalecteResultWidget* self) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->setTextGrammarCheck__GrammalecteResultWidget_CheckGrammar_IsBase(true);
        vtextgrammarcheckgrammalecteresultwidget->checkGrammar();
    } else {
        self->TextGrammarCheck::GrammalecteResultWidget::checkGrammar();
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteResultWidget_OnCheckGrammar(TextGrammarCheck__GrammalecteResultWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->setTextGrammarCheck__GrammalecteResultWidget_CheckGrammar_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteResultWidget::TextGrammarCheck__GrammalecteResultWidget_CheckGrammar_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_AddExtraWidget(TextGrammarCheck__GrammalecteResultWidget* self) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->addExtraWidget();
    } else {
        ((VirtualTextGrammarCheckGrammalecteResultWidget*)self)->addExtraWidget();
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_SuperAddExtraWidget(TextGrammarCheck__GrammalecteResultWidget* self) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->setTextGrammarCheck__GrammalecteResultWidget_AddExtraWidget_IsBase(true);
        vtextgrammarcheckgrammalecteresultwidget->addExtraWidget();
    } else {
        ((VirtualTextGrammarCheckGrammalecteResultWidget*)self)->addExtraWidget();
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteResultWidget_OnAddExtraWidget(TextGrammarCheck__GrammalecteResultWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->setTextGrammarCheck__GrammalecteResultWidget_AddExtraWidget_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteResultWidget::TextGrammarCheck__GrammalecteResultWidget_AddExtraWidget_Callback>(slot));
    }
}

// Derived class handler implementation
int TextGrammarCheck__GrammalecteResultWidget_DevType(const TextGrammarCheck__GrammalecteResultWidget* self) {
    auto* vtextgrammarcheckgrammalecteresultwidget = const_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteResultWidget*>(self));
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        return vtextgrammarcheckgrammalecteresultwidget->devType();
    } else {
        return self->TextGrammarCheck::GrammalecteResultWidget::devType();
    }
}

// Base class handler implementation
int TextGrammarCheck__GrammalecteResultWidget_SuperDevType(const TextGrammarCheck__GrammalecteResultWidget* self) {
    auto* vtextgrammarcheckgrammalecteresultwidget = const_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteResultWidget*>(self));
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->setTextGrammarCheck__GrammalecteResultWidget_DevType_IsBase(true);
        return vtextgrammarcheckgrammalecteresultwidget->devType();
    } else {
        return self->TextGrammarCheck::GrammalecteResultWidget::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteResultWidget_OnDevType(const TextGrammarCheck__GrammalecteResultWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteresultwidget = const_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteResultWidget*>(self));
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->setTextGrammarCheck__GrammalecteResultWidget_DevType_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteResultWidget::TextGrammarCheck__GrammalecteResultWidget_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_SetVisible(TextGrammarCheck__GrammalecteResultWidget* self, bool visible) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->setVisible(visible);
    } else {
        self->TextGrammarCheck::GrammalecteResultWidget::setVisible(visible);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_SuperSetVisible(TextGrammarCheck__GrammalecteResultWidget* self, bool visible) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->setTextGrammarCheck__GrammalecteResultWidget_SetVisible_IsBase(true);
        vtextgrammarcheckgrammalecteresultwidget->setVisible(visible);
    } else {
        self->TextGrammarCheck::GrammalecteResultWidget::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteResultWidget_OnSetVisible(TextGrammarCheck__GrammalecteResultWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->setTextGrammarCheck__GrammalecteResultWidget_SetVisible_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteResultWidget::TextGrammarCheck__GrammalecteResultWidget_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* TextGrammarCheck__GrammalecteResultWidget_SizeHint(const TextGrammarCheck__GrammalecteResultWidget* self) {
    auto* vtextgrammarcheckgrammalecteresultwidget = const_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteResultWidget*>(self));
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        return new QSize(vtextgrammarcheckgrammalecteresultwidget->sizeHint());
    } else {
        return new QSize(((VirtualTextGrammarCheckGrammalecteResultWidget*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* TextGrammarCheck__GrammalecteResultWidget_SuperSizeHint(const TextGrammarCheck__GrammalecteResultWidget* self) {
    auto* vtextgrammarcheckgrammalecteresultwidget = const_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteResultWidget*>(self));
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->setTextGrammarCheck__GrammalecteResultWidget_SizeHint_IsBase(true);
        return new QSize(vtextgrammarcheckgrammalecteresultwidget->sizeHint());
    } else {
        return new QSize(((VirtualTextGrammarCheckGrammalecteResultWidget*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteResultWidget_OnSizeHint(const TextGrammarCheck__GrammalecteResultWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteresultwidget = const_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteResultWidget*>(self));
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->setTextGrammarCheck__GrammalecteResultWidget_SizeHint_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteResultWidget::TextGrammarCheck__GrammalecteResultWidget_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* TextGrammarCheck__GrammalecteResultWidget_MinimumSizeHint(const TextGrammarCheck__GrammalecteResultWidget* self) {
    auto* vtextgrammarcheckgrammalecteresultwidget = const_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteResultWidget*>(self));
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        return new QSize(vtextgrammarcheckgrammalecteresultwidget->minimumSizeHint());
    } else {
        return new QSize(((VirtualTextGrammarCheckGrammalecteResultWidget*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* TextGrammarCheck__GrammalecteResultWidget_SuperMinimumSizeHint(const TextGrammarCheck__GrammalecteResultWidget* self) {
    auto* vtextgrammarcheckgrammalecteresultwidget = const_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteResultWidget*>(self));
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->setTextGrammarCheck__GrammalecteResultWidget_MinimumSizeHint_IsBase(true);
        return new QSize(vtextgrammarcheckgrammalecteresultwidget->minimumSizeHint());
    } else {
        return new QSize(((VirtualTextGrammarCheckGrammalecteResultWidget*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteResultWidget_OnMinimumSizeHint(const TextGrammarCheck__GrammalecteResultWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteresultwidget = const_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteResultWidget*>(self));
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->setTextGrammarCheck__GrammalecteResultWidget_MinimumSizeHint_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteResultWidget::TextGrammarCheck__GrammalecteResultWidget_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
int TextGrammarCheck__GrammalecteResultWidget_HeightForWidth(const TextGrammarCheck__GrammalecteResultWidget* self, int param1) {
    auto* vtextgrammarcheckgrammalecteresultwidget = const_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteResultWidget*>(self));
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        return vtextgrammarcheckgrammalecteresultwidget->heightForWidth(static_cast<int>(param1));
    } else {
        return self->TextGrammarCheck::GrammalecteResultWidget::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int TextGrammarCheck__GrammalecteResultWidget_SuperHeightForWidth(const TextGrammarCheck__GrammalecteResultWidget* self, int param1) {
    auto* vtextgrammarcheckgrammalecteresultwidget = const_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteResultWidget*>(self));
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->setTextGrammarCheck__GrammalecteResultWidget_HeightForWidth_IsBase(true);
        return vtextgrammarcheckgrammalecteresultwidget->heightForWidth(static_cast<int>(param1));
    } else {
        return self->TextGrammarCheck::GrammalecteResultWidget::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteResultWidget_OnHeightForWidth(const TextGrammarCheck__GrammalecteResultWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteresultwidget = const_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteResultWidget*>(self));
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->setTextGrammarCheck__GrammalecteResultWidget_HeightForWidth_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteResultWidget::TextGrammarCheck__GrammalecteResultWidget_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextGrammarCheck__GrammalecteResultWidget_HasHeightForWidth(const TextGrammarCheck__GrammalecteResultWidget* self) {
    auto* vtextgrammarcheckgrammalecteresultwidget = const_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteResultWidget*>(self));
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        return vtextgrammarcheckgrammalecteresultwidget->hasHeightForWidth();
    } else {
        return self->TextGrammarCheck::GrammalecteResultWidget::hasHeightForWidth();
    }
}

// Base class handler implementation
bool TextGrammarCheck__GrammalecteResultWidget_SuperHasHeightForWidth(const TextGrammarCheck__GrammalecteResultWidget* self) {
    auto* vtextgrammarcheckgrammalecteresultwidget = const_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteResultWidget*>(self));
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->setTextGrammarCheck__GrammalecteResultWidget_HasHeightForWidth_IsBase(true);
        return vtextgrammarcheckgrammalecteresultwidget->hasHeightForWidth();
    } else {
        return self->TextGrammarCheck::GrammalecteResultWidget::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteResultWidget_OnHasHeightForWidth(const TextGrammarCheck__GrammalecteResultWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteresultwidget = const_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteResultWidget*>(self));
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->setTextGrammarCheck__GrammalecteResultWidget_HasHeightForWidth_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteResultWidget::TextGrammarCheck__GrammalecteResultWidget_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* TextGrammarCheck__GrammalecteResultWidget_PaintEngine(const TextGrammarCheck__GrammalecteResultWidget* self) {
    auto* vtextgrammarcheckgrammalecteresultwidget = const_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteResultWidget*>(self));
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        return vtextgrammarcheckgrammalecteresultwidget->paintEngine();
    } else {
        return self->TextGrammarCheck::GrammalecteResultWidget::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* TextGrammarCheck__GrammalecteResultWidget_SuperPaintEngine(const TextGrammarCheck__GrammalecteResultWidget* self) {
    auto* vtextgrammarcheckgrammalecteresultwidget = const_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteResultWidget*>(self));
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->setTextGrammarCheck__GrammalecteResultWidget_PaintEngine_IsBase(true);
        return vtextgrammarcheckgrammalecteresultwidget->paintEngine();
    } else {
        return self->TextGrammarCheck::GrammalecteResultWidget::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteResultWidget_OnPaintEngine(const TextGrammarCheck__GrammalecteResultWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteresultwidget = const_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteResultWidget*>(self));
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->setTextGrammarCheck__GrammalecteResultWidget_PaintEngine_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteResultWidget::TextGrammarCheck__GrammalecteResultWidget_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextGrammarCheck__GrammalecteResultWidget_Event(TextGrammarCheck__GrammalecteResultWidget* self, QEvent* event) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        return vtextgrammarcheckgrammalecteresultwidget->event(event);
    } else {
        return ((VirtualTextGrammarCheckGrammalecteResultWidget*)self)->event(event);
    }
}

// Base class handler implementation
bool TextGrammarCheck__GrammalecteResultWidget_SuperEvent(TextGrammarCheck__GrammalecteResultWidget* self, QEvent* event) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->setTextGrammarCheck__GrammalecteResultWidget_Event_IsBase(true);
        return vtextgrammarcheckgrammalecteresultwidget->event(event);
    } else {
        return ((VirtualTextGrammarCheckGrammalecteResultWidget*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteResultWidget_OnEvent(TextGrammarCheck__GrammalecteResultWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->setTextGrammarCheck__GrammalecteResultWidget_Event_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteResultWidget::TextGrammarCheck__GrammalecteResultWidget_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_MousePressEvent(TextGrammarCheck__GrammalecteResultWidget* self, QMouseEvent* event) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->mousePressEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteResultWidget*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_SuperMousePressEvent(TextGrammarCheck__GrammalecteResultWidget* self, QMouseEvent* event) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->setTextGrammarCheck__GrammalecteResultWidget_MousePressEvent_IsBase(true);
        vtextgrammarcheckgrammalecteresultwidget->mousePressEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteResultWidget*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteResultWidget_OnMousePressEvent(TextGrammarCheck__GrammalecteResultWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->setTextGrammarCheck__GrammalecteResultWidget_MousePressEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteResultWidget::TextGrammarCheck__GrammalecteResultWidget_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_MouseReleaseEvent(TextGrammarCheck__GrammalecteResultWidget* self, QMouseEvent* event) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->mouseReleaseEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteResultWidget*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_SuperMouseReleaseEvent(TextGrammarCheck__GrammalecteResultWidget* self, QMouseEvent* event) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->setTextGrammarCheck__GrammalecteResultWidget_MouseReleaseEvent_IsBase(true);
        vtextgrammarcheckgrammalecteresultwidget->mouseReleaseEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteResultWidget*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteResultWidget_OnMouseReleaseEvent(TextGrammarCheck__GrammalecteResultWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->setTextGrammarCheck__GrammalecteResultWidget_MouseReleaseEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteResultWidget::TextGrammarCheck__GrammalecteResultWidget_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_MouseDoubleClickEvent(TextGrammarCheck__GrammalecteResultWidget* self, QMouseEvent* event) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->mouseDoubleClickEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteResultWidget*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_SuperMouseDoubleClickEvent(TextGrammarCheck__GrammalecteResultWidget* self, QMouseEvent* event) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->setTextGrammarCheck__GrammalecteResultWidget_MouseDoubleClickEvent_IsBase(true);
        vtextgrammarcheckgrammalecteresultwidget->mouseDoubleClickEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteResultWidget*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteResultWidget_OnMouseDoubleClickEvent(TextGrammarCheck__GrammalecteResultWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->setTextGrammarCheck__GrammalecteResultWidget_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteResultWidget::TextGrammarCheck__GrammalecteResultWidget_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_MouseMoveEvent(TextGrammarCheck__GrammalecteResultWidget* self, QMouseEvent* event) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->mouseMoveEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteResultWidget*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_SuperMouseMoveEvent(TextGrammarCheck__GrammalecteResultWidget* self, QMouseEvent* event) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->setTextGrammarCheck__GrammalecteResultWidget_MouseMoveEvent_IsBase(true);
        vtextgrammarcheckgrammalecteresultwidget->mouseMoveEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteResultWidget*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteResultWidget_OnMouseMoveEvent(TextGrammarCheck__GrammalecteResultWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->setTextGrammarCheck__GrammalecteResultWidget_MouseMoveEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteResultWidget::TextGrammarCheck__GrammalecteResultWidget_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_WheelEvent(TextGrammarCheck__GrammalecteResultWidget* self, QWheelEvent* event) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->wheelEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteResultWidget*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_SuperWheelEvent(TextGrammarCheck__GrammalecteResultWidget* self, QWheelEvent* event) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->setTextGrammarCheck__GrammalecteResultWidget_WheelEvent_IsBase(true);
        vtextgrammarcheckgrammalecteresultwidget->wheelEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteResultWidget*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteResultWidget_OnWheelEvent(TextGrammarCheck__GrammalecteResultWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->setTextGrammarCheck__GrammalecteResultWidget_WheelEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteResultWidget::TextGrammarCheck__GrammalecteResultWidget_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_KeyPressEvent(TextGrammarCheck__GrammalecteResultWidget* self, QKeyEvent* event) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->keyPressEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteResultWidget*)self)->keyPressEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_SuperKeyPressEvent(TextGrammarCheck__GrammalecteResultWidget* self, QKeyEvent* event) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->setTextGrammarCheck__GrammalecteResultWidget_KeyPressEvent_IsBase(true);
        vtextgrammarcheckgrammalecteresultwidget->keyPressEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteResultWidget*)self)->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteResultWidget_OnKeyPressEvent(TextGrammarCheck__GrammalecteResultWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->setTextGrammarCheck__GrammalecteResultWidget_KeyPressEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteResultWidget::TextGrammarCheck__GrammalecteResultWidget_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_KeyReleaseEvent(TextGrammarCheck__GrammalecteResultWidget* self, QKeyEvent* event) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->keyReleaseEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteResultWidget*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_SuperKeyReleaseEvent(TextGrammarCheck__GrammalecteResultWidget* self, QKeyEvent* event) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->setTextGrammarCheck__GrammalecteResultWidget_KeyReleaseEvent_IsBase(true);
        vtextgrammarcheckgrammalecteresultwidget->keyReleaseEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteResultWidget*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteResultWidget_OnKeyReleaseEvent(TextGrammarCheck__GrammalecteResultWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->setTextGrammarCheck__GrammalecteResultWidget_KeyReleaseEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteResultWidget::TextGrammarCheck__GrammalecteResultWidget_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_FocusInEvent(TextGrammarCheck__GrammalecteResultWidget* self, QFocusEvent* event) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->focusInEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteResultWidget*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_SuperFocusInEvent(TextGrammarCheck__GrammalecteResultWidget* self, QFocusEvent* event) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->setTextGrammarCheck__GrammalecteResultWidget_FocusInEvent_IsBase(true);
        vtextgrammarcheckgrammalecteresultwidget->focusInEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteResultWidget*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteResultWidget_OnFocusInEvent(TextGrammarCheck__GrammalecteResultWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->setTextGrammarCheck__GrammalecteResultWidget_FocusInEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteResultWidget::TextGrammarCheck__GrammalecteResultWidget_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_FocusOutEvent(TextGrammarCheck__GrammalecteResultWidget* self, QFocusEvent* event) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->focusOutEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteResultWidget*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_SuperFocusOutEvent(TextGrammarCheck__GrammalecteResultWidget* self, QFocusEvent* event) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->setTextGrammarCheck__GrammalecteResultWidget_FocusOutEvent_IsBase(true);
        vtextgrammarcheckgrammalecteresultwidget->focusOutEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteResultWidget*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteResultWidget_OnFocusOutEvent(TextGrammarCheck__GrammalecteResultWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->setTextGrammarCheck__GrammalecteResultWidget_FocusOutEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteResultWidget::TextGrammarCheck__GrammalecteResultWidget_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_EnterEvent(TextGrammarCheck__GrammalecteResultWidget* self, QEnterEvent* event) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->enterEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteResultWidget*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_SuperEnterEvent(TextGrammarCheck__GrammalecteResultWidget* self, QEnterEvent* event) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->setTextGrammarCheck__GrammalecteResultWidget_EnterEvent_IsBase(true);
        vtextgrammarcheckgrammalecteresultwidget->enterEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteResultWidget*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteResultWidget_OnEnterEvent(TextGrammarCheck__GrammalecteResultWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->setTextGrammarCheck__GrammalecteResultWidget_EnterEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteResultWidget::TextGrammarCheck__GrammalecteResultWidget_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_LeaveEvent(TextGrammarCheck__GrammalecteResultWidget* self, QEvent* event) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->leaveEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteResultWidget*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_SuperLeaveEvent(TextGrammarCheck__GrammalecteResultWidget* self, QEvent* event) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->setTextGrammarCheck__GrammalecteResultWidget_LeaveEvent_IsBase(true);
        vtextgrammarcheckgrammalecteresultwidget->leaveEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteResultWidget*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteResultWidget_OnLeaveEvent(TextGrammarCheck__GrammalecteResultWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->setTextGrammarCheck__GrammalecteResultWidget_LeaveEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteResultWidget::TextGrammarCheck__GrammalecteResultWidget_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_PaintEvent(TextGrammarCheck__GrammalecteResultWidget* self, QPaintEvent* event) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->paintEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteResultWidget*)self)->paintEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_SuperPaintEvent(TextGrammarCheck__GrammalecteResultWidget* self, QPaintEvent* event) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->setTextGrammarCheck__GrammalecteResultWidget_PaintEvent_IsBase(true);
        vtextgrammarcheckgrammalecteresultwidget->paintEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteResultWidget*)self)->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteResultWidget_OnPaintEvent(TextGrammarCheck__GrammalecteResultWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->setTextGrammarCheck__GrammalecteResultWidget_PaintEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteResultWidget::TextGrammarCheck__GrammalecteResultWidget_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_MoveEvent(TextGrammarCheck__GrammalecteResultWidget* self, QMoveEvent* event) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->moveEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteResultWidget*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_SuperMoveEvent(TextGrammarCheck__GrammalecteResultWidget* self, QMoveEvent* event) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->setTextGrammarCheck__GrammalecteResultWidget_MoveEvent_IsBase(true);
        vtextgrammarcheckgrammalecteresultwidget->moveEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteResultWidget*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteResultWidget_OnMoveEvent(TextGrammarCheck__GrammalecteResultWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->setTextGrammarCheck__GrammalecteResultWidget_MoveEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteResultWidget::TextGrammarCheck__GrammalecteResultWidget_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_ResizeEvent(TextGrammarCheck__GrammalecteResultWidget* self, QResizeEvent* event) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->resizeEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteResultWidget*)self)->resizeEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_SuperResizeEvent(TextGrammarCheck__GrammalecteResultWidget* self, QResizeEvent* event) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->setTextGrammarCheck__GrammalecteResultWidget_ResizeEvent_IsBase(true);
        vtextgrammarcheckgrammalecteresultwidget->resizeEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteResultWidget*)self)->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteResultWidget_OnResizeEvent(TextGrammarCheck__GrammalecteResultWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->setTextGrammarCheck__GrammalecteResultWidget_ResizeEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteResultWidget::TextGrammarCheck__GrammalecteResultWidget_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_CloseEvent(TextGrammarCheck__GrammalecteResultWidget* self, QCloseEvent* event) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->closeEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteResultWidget*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_SuperCloseEvent(TextGrammarCheck__GrammalecteResultWidget* self, QCloseEvent* event) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->setTextGrammarCheck__GrammalecteResultWidget_CloseEvent_IsBase(true);
        vtextgrammarcheckgrammalecteresultwidget->closeEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteResultWidget*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteResultWidget_OnCloseEvent(TextGrammarCheck__GrammalecteResultWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->setTextGrammarCheck__GrammalecteResultWidget_CloseEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteResultWidget::TextGrammarCheck__GrammalecteResultWidget_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_ContextMenuEvent(TextGrammarCheck__GrammalecteResultWidget* self, QContextMenuEvent* event) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->contextMenuEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteResultWidget*)self)->contextMenuEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_SuperContextMenuEvent(TextGrammarCheck__GrammalecteResultWidget* self, QContextMenuEvent* event) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->setTextGrammarCheck__GrammalecteResultWidget_ContextMenuEvent_IsBase(true);
        vtextgrammarcheckgrammalecteresultwidget->contextMenuEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteResultWidget*)self)->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteResultWidget_OnContextMenuEvent(TextGrammarCheck__GrammalecteResultWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->setTextGrammarCheck__GrammalecteResultWidget_ContextMenuEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteResultWidget::TextGrammarCheck__GrammalecteResultWidget_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_TabletEvent(TextGrammarCheck__GrammalecteResultWidget* self, QTabletEvent* event) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->tabletEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteResultWidget*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_SuperTabletEvent(TextGrammarCheck__GrammalecteResultWidget* self, QTabletEvent* event) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->setTextGrammarCheck__GrammalecteResultWidget_TabletEvent_IsBase(true);
        vtextgrammarcheckgrammalecteresultwidget->tabletEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteResultWidget*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteResultWidget_OnTabletEvent(TextGrammarCheck__GrammalecteResultWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->setTextGrammarCheck__GrammalecteResultWidget_TabletEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteResultWidget::TextGrammarCheck__GrammalecteResultWidget_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_ActionEvent(TextGrammarCheck__GrammalecteResultWidget* self, QActionEvent* event) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->actionEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteResultWidget*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_SuperActionEvent(TextGrammarCheck__GrammalecteResultWidget* self, QActionEvent* event) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->setTextGrammarCheck__GrammalecteResultWidget_ActionEvent_IsBase(true);
        vtextgrammarcheckgrammalecteresultwidget->actionEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteResultWidget*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteResultWidget_OnActionEvent(TextGrammarCheck__GrammalecteResultWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->setTextGrammarCheck__GrammalecteResultWidget_ActionEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteResultWidget::TextGrammarCheck__GrammalecteResultWidget_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_DragEnterEvent(TextGrammarCheck__GrammalecteResultWidget* self, QDragEnterEvent* event) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->dragEnterEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteResultWidget*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_SuperDragEnterEvent(TextGrammarCheck__GrammalecteResultWidget* self, QDragEnterEvent* event) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->setTextGrammarCheck__GrammalecteResultWidget_DragEnterEvent_IsBase(true);
        vtextgrammarcheckgrammalecteresultwidget->dragEnterEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteResultWidget*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteResultWidget_OnDragEnterEvent(TextGrammarCheck__GrammalecteResultWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->setTextGrammarCheck__GrammalecteResultWidget_DragEnterEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteResultWidget::TextGrammarCheck__GrammalecteResultWidget_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_DragMoveEvent(TextGrammarCheck__GrammalecteResultWidget* self, QDragMoveEvent* event) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->dragMoveEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteResultWidget*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_SuperDragMoveEvent(TextGrammarCheck__GrammalecteResultWidget* self, QDragMoveEvent* event) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->setTextGrammarCheck__GrammalecteResultWidget_DragMoveEvent_IsBase(true);
        vtextgrammarcheckgrammalecteresultwidget->dragMoveEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteResultWidget*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteResultWidget_OnDragMoveEvent(TextGrammarCheck__GrammalecteResultWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->setTextGrammarCheck__GrammalecteResultWidget_DragMoveEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteResultWidget::TextGrammarCheck__GrammalecteResultWidget_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_DragLeaveEvent(TextGrammarCheck__GrammalecteResultWidget* self, QDragLeaveEvent* event) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->dragLeaveEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteResultWidget*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_SuperDragLeaveEvent(TextGrammarCheck__GrammalecteResultWidget* self, QDragLeaveEvent* event) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->setTextGrammarCheck__GrammalecteResultWidget_DragLeaveEvent_IsBase(true);
        vtextgrammarcheckgrammalecteresultwidget->dragLeaveEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteResultWidget*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteResultWidget_OnDragLeaveEvent(TextGrammarCheck__GrammalecteResultWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->setTextGrammarCheck__GrammalecteResultWidget_DragLeaveEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteResultWidget::TextGrammarCheck__GrammalecteResultWidget_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_DropEvent(TextGrammarCheck__GrammalecteResultWidget* self, QDropEvent* event) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->dropEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteResultWidget*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_SuperDropEvent(TextGrammarCheck__GrammalecteResultWidget* self, QDropEvent* event) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->setTextGrammarCheck__GrammalecteResultWidget_DropEvent_IsBase(true);
        vtextgrammarcheckgrammalecteresultwidget->dropEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteResultWidget*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteResultWidget_OnDropEvent(TextGrammarCheck__GrammalecteResultWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->setTextGrammarCheck__GrammalecteResultWidget_DropEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteResultWidget::TextGrammarCheck__GrammalecteResultWidget_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_ShowEvent(TextGrammarCheck__GrammalecteResultWidget* self, QShowEvent* event) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->showEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteResultWidget*)self)->showEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_SuperShowEvent(TextGrammarCheck__GrammalecteResultWidget* self, QShowEvent* event) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->setTextGrammarCheck__GrammalecteResultWidget_ShowEvent_IsBase(true);
        vtextgrammarcheckgrammalecteresultwidget->showEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteResultWidget*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteResultWidget_OnShowEvent(TextGrammarCheck__GrammalecteResultWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->setTextGrammarCheck__GrammalecteResultWidget_ShowEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteResultWidget::TextGrammarCheck__GrammalecteResultWidget_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_HideEvent(TextGrammarCheck__GrammalecteResultWidget* self, QHideEvent* event) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->hideEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteResultWidget*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_SuperHideEvent(TextGrammarCheck__GrammalecteResultWidget* self, QHideEvent* event) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->setTextGrammarCheck__GrammalecteResultWidget_HideEvent_IsBase(true);
        vtextgrammarcheckgrammalecteresultwidget->hideEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteResultWidget*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteResultWidget_OnHideEvent(TextGrammarCheck__GrammalecteResultWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->setTextGrammarCheck__GrammalecteResultWidget_HideEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteResultWidget::TextGrammarCheck__GrammalecteResultWidget_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextGrammarCheck__GrammalecteResultWidget_NativeEvent(TextGrammarCheck__GrammalecteResultWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        return vtextgrammarcheckgrammalecteresultwidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualTextGrammarCheckGrammalecteResultWidget*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool TextGrammarCheck__GrammalecteResultWidget_SuperNativeEvent(TextGrammarCheck__GrammalecteResultWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->setTextGrammarCheck__GrammalecteResultWidget_NativeEvent_IsBase(true);
        return vtextgrammarcheckgrammalecteresultwidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualTextGrammarCheckGrammalecteResultWidget*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteResultWidget_OnNativeEvent(TextGrammarCheck__GrammalecteResultWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->setTextGrammarCheck__GrammalecteResultWidget_NativeEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteResultWidget::TextGrammarCheck__GrammalecteResultWidget_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_ChangeEvent(TextGrammarCheck__GrammalecteResultWidget* self, QEvent* param1) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->changeEvent(param1);
    } else {
        ((VirtualTextGrammarCheckGrammalecteResultWidget*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_SuperChangeEvent(TextGrammarCheck__GrammalecteResultWidget* self, QEvent* param1) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->setTextGrammarCheck__GrammalecteResultWidget_ChangeEvent_IsBase(true);
        vtextgrammarcheckgrammalecteresultwidget->changeEvent(param1);
    } else {
        ((VirtualTextGrammarCheckGrammalecteResultWidget*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteResultWidget_OnChangeEvent(TextGrammarCheck__GrammalecteResultWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->setTextGrammarCheck__GrammalecteResultWidget_ChangeEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteResultWidget::TextGrammarCheck__GrammalecteResultWidget_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int TextGrammarCheck__GrammalecteResultWidget_Metric(const TextGrammarCheck__GrammalecteResultWidget* self, int param1) {
    auto* vtextgrammarcheckgrammalecteresultwidget = const_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteResultWidget*>(self));
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        return vtextgrammarcheckgrammalecteresultwidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualTextGrammarCheckGrammalecteResultWidget*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int TextGrammarCheck__GrammalecteResultWidget_SuperMetric(const TextGrammarCheck__GrammalecteResultWidget* self, int param1) {
    auto* vtextgrammarcheckgrammalecteresultwidget = const_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteResultWidget*>(self));
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->setTextGrammarCheck__GrammalecteResultWidget_Metric_IsBase(true);
        return vtextgrammarcheckgrammalecteresultwidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualTextGrammarCheckGrammalecteResultWidget*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteResultWidget_OnMetric(const TextGrammarCheck__GrammalecteResultWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteresultwidget = const_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteResultWidget*>(self));
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->setTextGrammarCheck__GrammalecteResultWidget_Metric_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteResultWidget::TextGrammarCheck__GrammalecteResultWidget_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_InitPainter(const TextGrammarCheck__GrammalecteResultWidget* self, QPainter* painter) {
    auto* vtextgrammarcheckgrammalecteresultwidget = const_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteResultWidget*>(self));
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->initPainter(painter);
    } else {
        ((VirtualTextGrammarCheckGrammalecteResultWidget*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_SuperInitPainter(const TextGrammarCheck__GrammalecteResultWidget* self, QPainter* painter) {
    auto* vtextgrammarcheckgrammalecteresultwidget = const_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteResultWidget*>(self));
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->setTextGrammarCheck__GrammalecteResultWidget_InitPainter_IsBase(true);
        vtextgrammarcheckgrammalecteresultwidget->initPainter(painter);
    } else {
        ((VirtualTextGrammarCheckGrammalecteResultWidget*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteResultWidget_OnInitPainter(const TextGrammarCheck__GrammalecteResultWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteresultwidget = const_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteResultWidget*>(self));
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->setTextGrammarCheck__GrammalecteResultWidget_InitPainter_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteResultWidget::TextGrammarCheck__GrammalecteResultWidget_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* TextGrammarCheck__GrammalecteResultWidget_Redirected(const TextGrammarCheck__GrammalecteResultWidget* self, QPoint* offset) {
    auto* vtextgrammarcheckgrammalecteresultwidget = const_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteResultWidget*>(self));
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        return vtextgrammarcheckgrammalecteresultwidget->redirected(offset);
    } else {
        return ((VirtualTextGrammarCheckGrammalecteResultWidget*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* TextGrammarCheck__GrammalecteResultWidget_SuperRedirected(const TextGrammarCheck__GrammalecteResultWidget* self, QPoint* offset) {
    auto* vtextgrammarcheckgrammalecteresultwidget = const_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteResultWidget*>(self));
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->setTextGrammarCheck__GrammalecteResultWidget_Redirected_IsBase(true);
        return vtextgrammarcheckgrammalecteresultwidget->redirected(offset);
    } else {
        return ((VirtualTextGrammarCheckGrammalecteResultWidget*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteResultWidget_OnRedirected(const TextGrammarCheck__GrammalecteResultWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteresultwidget = const_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteResultWidget*>(self));
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->setTextGrammarCheck__GrammalecteResultWidget_Redirected_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteResultWidget::TextGrammarCheck__GrammalecteResultWidget_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* TextGrammarCheck__GrammalecteResultWidget_SharedPainter(const TextGrammarCheck__GrammalecteResultWidget* self) {
    auto* vtextgrammarcheckgrammalecteresultwidget = const_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteResultWidget*>(self));
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        return vtextgrammarcheckgrammalecteresultwidget->sharedPainter();
    } else {
        return ((VirtualTextGrammarCheckGrammalecteResultWidget*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* TextGrammarCheck__GrammalecteResultWidget_SuperSharedPainter(const TextGrammarCheck__GrammalecteResultWidget* self) {
    auto* vtextgrammarcheckgrammalecteresultwidget = const_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteResultWidget*>(self));
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->setTextGrammarCheck__GrammalecteResultWidget_SharedPainter_IsBase(true);
        return vtextgrammarcheckgrammalecteresultwidget->sharedPainter();
    } else {
        return ((VirtualTextGrammarCheckGrammalecteResultWidget*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteResultWidget_OnSharedPainter(const TextGrammarCheck__GrammalecteResultWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteresultwidget = const_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteResultWidget*>(self));
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->setTextGrammarCheck__GrammalecteResultWidget_SharedPainter_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteResultWidget::TextGrammarCheck__GrammalecteResultWidget_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_InputMethodEvent(TextGrammarCheck__GrammalecteResultWidget* self, QInputMethodEvent* param1) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->inputMethodEvent(param1);
    } else {
        ((VirtualTextGrammarCheckGrammalecteResultWidget*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_SuperInputMethodEvent(TextGrammarCheck__GrammalecteResultWidget* self, QInputMethodEvent* param1) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->setTextGrammarCheck__GrammalecteResultWidget_InputMethodEvent_IsBase(true);
        vtextgrammarcheckgrammalecteresultwidget->inputMethodEvent(param1);
    } else {
        ((VirtualTextGrammarCheckGrammalecteResultWidget*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteResultWidget_OnInputMethodEvent(TextGrammarCheck__GrammalecteResultWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->setTextGrammarCheck__GrammalecteResultWidget_InputMethodEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteResultWidget::TextGrammarCheck__GrammalecteResultWidget_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* TextGrammarCheck__GrammalecteResultWidget_InputMethodQuery(const TextGrammarCheck__GrammalecteResultWidget* self, int param1) {
    auto* vtextgrammarcheckgrammalecteresultwidget = const_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteResultWidget*>(self));
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        return new QVariant(vtextgrammarcheckgrammalecteresultwidget->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualTextGrammarCheckGrammalecteResultWidget*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* TextGrammarCheck__GrammalecteResultWidget_SuperInputMethodQuery(const TextGrammarCheck__GrammalecteResultWidget* self, int param1) {
    auto* vtextgrammarcheckgrammalecteresultwidget = const_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteResultWidget*>(self));
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->setTextGrammarCheck__GrammalecteResultWidget_InputMethodQuery_IsBase(true);
        return new QVariant(vtextgrammarcheckgrammalecteresultwidget->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualTextGrammarCheckGrammalecteResultWidget*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteResultWidget_OnInputMethodQuery(const TextGrammarCheck__GrammalecteResultWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteresultwidget = const_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteResultWidget*>(self));
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->setTextGrammarCheck__GrammalecteResultWidget_InputMethodQuery_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteResultWidget::TextGrammarCheck__GrammalecteResultWidget_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextGrammarCheck__GrammalecteResultWidget_FocusNextPrevChild(TextGrammarCheck__GrammalecteResultWidget* self, bool next) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        return vtextgrammarcheckgrammalecteresultwidget->focusNextPrevChild(next);
    } else {
        return ((VirtualTextGrammarCheckGrammalecteResultWidget*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool TextGrammarCheck__GrammalecteResultWidget_SuperFocusNextPrevChild(TextGrammarCheck__GrammalecteResultWidget* self, bool next) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->setTextGrammarCheck__GrammalecteResultWidget_FocusNextPrevChild_IsBase(true);
        return vtextgrammarcheckgrammalecteresultwidget->focusNextPrevChild(next);
    } else {
        return ((VirtualTextGrammarCheckGrammalecteResultWidget*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteResultWidget_OnFocusNextPrevChild(TextGrammarCheck__GrammalecteResultWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->setTextGrammarCheck__GrammalecteResultWidget_FocusNextPrevChild_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteResultWidget::TextGrammarCheck__GrammalecteResultWidget_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextGrammarCheck__GrammalecteResultWidget_EventFilter(TextGrammarCheck__GrammalecteResultWidget* self, QObject* watched, QEvent* event) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        return vtextgrammarcheckgrammalecteresultwidget->eventFilter(watched, event);
    } else {
        return self->TextGrammarCheck::GrammalecteResultWidget::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool TextGrammarCheck__GrammalecteResultWidget_SuperEventFilter(TextGrammarCheck__GrammalecteResultWidget* self, QObject* watched, QEvent* event) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->setTextGrammarCheck__GrammalecteResultWidget_EventFilter_IsBase(true);
        return vtextgrammarcheckgrammalecteresultwidget->eventFilter(watched, event);
    } else {
        return self->TextGrammarCheck::GrammalecteResultWidget::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteResultWidget_OnEventFilter(TextGrammarCheck__GrammalecteResultWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->setTextGrammarCheck__GrammalecteResultWidget_EventFilter_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteResultWidget::TextGrammarCheck__GrammalecteResultWidget_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_TimerEvent(TextGrammarCheck__GrammalecteResultWidget* self, QTimerEvent* event) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->timerEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteResultWidget*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_SuperTimerEvent(TextGrammarCheck__GrammalecteResultWidget* self, QTimerEvent* event) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->setTextGrammarCheck__GrammalecteResultWidget_TimerEvent_IsBase(true);
        vtextgrammarcheckgrammalecteresultwidget->timerEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteResultWidget*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteResultWidget_OnTimerEvent(TextGrammarCheck__GrammalecteResultWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->setTextGrammarCheck__GrammalecteResultWidget_TimerEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteResultWidget::TextGrammarCheck__GrammalecteResultWidget_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_ChildEvent(TextGrammarCheck__GrammalecteResultWidget* self, QChildEvent* event) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->childEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteResultWidget*)self)->childEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_SuperChildEvent(TextGrammarCheck__GrammalecteResultWidget* self, QChildEvent* event) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->setTextGrammarCheck__GrammalecteResultWidget_ChildEvent_IsBase(true);
        vtextgrammarcheckgrammalecteresultwidget->childEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteResultWidget*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteResultWidget_OnChildEvent(TextGrammarCheck__GrammalecteResultWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->setTextGrammarCheck__GrammalecteResultWidget_ChildEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteResultWidget::TextGrammarCheck__GrammalecteResultWidget_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_CustomEvent(TextGrammarCheck__GrammalecteResultWidget* self, QEvent* event) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->customEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteResultWidget*)self)->customEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_SuperCustomEvent(TextGrammarCheck__GrammalecteResultWidget* self, QEvent* event) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->setTextGrammarCheck__GrammalecteResultWidget_CustomEvent_IsBase(true);
        vtextgrammarcheckgrammalecteresultwidget->customEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteResultWidget*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteResultWidget_OnCustomEvent(TextGrammarCheck__GrammalecteResultWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->setTextGrammarCheck__GrammalecteResultWidget_CustomEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteResultWidget::TextGrammarCheck__GrammalecteResultWidget_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_ConnectNotify(TextGrammarCheck__GrammalecteResultWidget* self, const QMetaMethod* signal) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->connectNotify(*signal);
    } else {
        ((VirtualTextGrammarCheckGrammalecteResultWidget*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_SuperConnectNotify(TextGrammarCheck__GrammalecteResultWidget* self, const QMetaMethod* signal) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->setTextGrammarCheck__GrammalecteResultWidget_ConnectNotify_IsBase(true);
        vtextgrammarcheckgrammalecteresultwidget->connectNotify(*signal);
    } else {
        ((VirtualTextGrammarCheckGrammalecteResultWidget*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteResultWidget_OnConnectNotify(TextGrammarCheck__GrammalecteResultWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->setTextGrammarCheck__GrammalecteResultWidget_ConnectNotify_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteResultWidget::TextGrammarCheck__GrammalecteResultWidget_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_DisconnectNotify(TextGrammarCheck__GrammalecteResultWidget* self, const QMetaMethod* signal) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->disconnectNotify(*signal);
    } else {
        ((VirtualTextGrammarCheckGrammalecteResultWidget*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_SuperDisconnectNotify(TextGrammarCheck__GrammalecteResultWidget* self, const QMetaMethod* signal) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->setTextGrammarCheck__GrammalecteResultWidget_DisconnectNotify_IsBase(true);
        vtextgrammarcheckgrammalecteresultwidget->disconnectNotify(*signal);
    } else {
        ((VirtualTextGrammarCheckGrammalecteResultWidget*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteResultWidget_OnDisconnectNotify(TextGrammarCheck__GrammalecteResultWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->setTextGrammarCheck__GrammalecteResultWidget_DisconnectNotify_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteResultWidget::TextGrammarCheck__GrammalecteResultWidget_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_UpdateMicroFocus(TextGrammarCheck__GrammalecteResultWidget* self) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->updateMicroFocus();
    } else {
        ((VirtualTextGrammarCheckGrammalecteResultWidget*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_SuperUpdateMicroFocus(TextGrammarCheck__GrammalecteResultWidget* self) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->setTextGrammarCheck__GrammalecteResultWidget_UpdateMicroFocus_IsBase(true);
        vtextgrammarcheckgrammalecteresultwidget->updateMicroFocus();
    } else {
        ((VirtualTextGrammarCheckGrammalecteResultWidget*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteResultWidget_OnUpdateMicroFocus(TextGrammarCheck__GrammalecteResultWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->setTextGrammarCheck__GrammalecteResultWidget_UpdateMicroFocus_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteResultWidget::TextGrammarCheck__GrammalecteResultWidget_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_Create(TextGrammarCheck__GrammalecteResultWidget* self) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->create();
    } else {
        ((VirtualTextGrammarCheckGrammalecteResultWidget*)self)->create();
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_SuperCreate(TextGrammarCheck__GrammalecteResultWidget* self) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->setTextGrammarCheck__GrammalecteResultWidget_Create_IsBase(true);
        vtextgrammarcheckgrammalecteresultwidget->create();
    } else {
        ((VirtualTextGrammarCheckGrammalecteResultWidget*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteResultWidget_OnCreate(TextGrammarCheck__GrammalecteResultWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->setTextGrammarCheck__GrammalecteResultWidget_Create_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteResultWidget::TextGrammarCheck__GrammalecteResultWidget_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_Destroy(TextGrammarCheck__GrammalecteResultWidget* self) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->destroy();
    } else {
        ((VirtualTextGrammarCheckGrammalecteResultWidget*)self)->destroy();
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteResultWidget_SuperDestroy(TextGrammarCheck__GrammalecteResultWidget* self) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->setTextGrammarCheck__GrammalecteResultWidget_Destroy_IsBase(true);
        vtextgrammarcheckgrammalecteresultwidget->destroy();
    } else {
        ((VirtualTextGrammarCheckGrammalecteResultWidget*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteResultWidget_OnDestroy(TextGrammarCheck__GrammalecteResultWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->setTextGrammarCheck__GrammalecteResultWidget_Destroy_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteResultWidget::TextGrammarCheck__GrammalecteResultWidget_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextGrammarCheck__GrammalecteResultWidget_FocusNextChild(TextGrammarCheck__GrammalecteResultWidget* self) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        return vtextgrammarcheckgrammalecteresultwidget->focusNextChild();
    } else {
        return ((VirtualTextGrammarCheckGrammalecteResultWidget*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool TextGrammarCheck__GrammalecteResultWidget_SuperFocusNextChild(TextGrammarCheck__GrammalecteResultWidget* self) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->setTextGrammarCheck__GrammalecteResultWidget_FocusNextChild_IsBase(true);
        return vtextgrammarcheckgrammalecteresultwidget->focusNextChild();
    } else {
        return ((VirtualTextGrammarCheckGrammalecteResultWidget*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteResultWidget_OnFocusNextChild(TextGrammarCheck__GrammalecteResultWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->setTextGrammarCheck__GrammalecteResultWidget_FocusNextChild_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteResultWidget::TextGrammarCheck__GrammalecteResultWidget_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextGrammarCheck__GrammalecteResultWidget_FocusPreviousChild(TextGrammarCheck__GrammalecteResultWidget* self) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        return vtextgrammarcheckgrammalecteresultwidget->focusPreviousChild();
    } else {
        return ((VirtualTextGrammarCheckGrammalecteResultWidget*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool TextGrammarCheck__GrammalecteResultWidget_SuperFocusPreviousChild(TextGrammarCheck__GrammalecteResultWidget* self) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->setTextGrammarCheck__GrammalecteResultWidget_FocusPreviousChild_IsBase(true);
        return vtextgrammarcheckgrammalecteresultwidget->focusPreviousChild();
    } else {
        return ((VirtualTextGrammarCheckGrammalecteResultWidget*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteResultWidget_OnFocusPreviousChild(TextGrammarCheck__GrammalecteResultWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(self);
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->setTextGrammarCheck__GrammalecteResultWidget_FocusPreviousChild_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteResultWidget::TextGrammarCheck__GrammalecteResultWidget_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* TextGrammarCheck__GrammalecteResultWidget_Sender(const TextGrammarCheck__GrammalecteResultWidget* self) {
    auto* vtextgrammarcheckgrammalecteresultwidget = const_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteResultWidget*>(self));
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        return vtextgrammarcheckgrammalecteresultwidget->sender();
    } else {
        return ((VirtualTextGrammarCheckGrammalecteResultWidget*)self)->sender();
    }
}

// Base class handler implementation
QObject* TextGrammarCheck__GrammalecteResultWidget_SuperSender(const TextGrammarCheck__GrammalecteResultWidget* self) {
    auto* vtextgrammarcheckgrammalecteresultwidget = const_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteResultWidget*>(self));
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->setTextGrammarCheck__GrammalecteResultWidget_Sender_IsBase(true);
        return vtextgrammarcheckgrammalecteresultwidget->sender();
    } else {
        return ((VirtualTextGrammarCheckGrammalecteResultWidget*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteResultWidget_OnSender(const TextGrammarCheck__GrammalecteResultWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteresultwidget = const_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteResultWidget*>(self));
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->setTextGrammarCheck__GrammalecteResultWidget_Sender_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteResultWidget::TextGrammarCheck__GrammalecteResultWidget_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int TextGrammarCheck__GrammalecteResultWidget_SenderSignalIndex(const TextGrammarCheck__GrammalecteResultWidget* self) {
    auto* vtextgrammarcheckgrammalecteresultwidget = const_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteResultWidget*>(self));
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        return vtextgrammarcheckgrammalecteresultwidget->senderSignalIndex();
    } else {
        return ((VirtualTextGrammarCheckGrammalecteResultWidget*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int TextGrammarCheck__GrammalecteResultWidget_SuperSenderSignalIndex(const TextGrammarCheck__GrammalecteResultWidget* self) {
    auto* vtextgrammarcheckgrammalecteresultwidget = const_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteResultWidget*>(self));
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->setTextGrammarCheck__GrammalecteResultWidget_SenderSignalIndex_IsBase(true);
        return vtextgrammarcheckgrammalecteresultwidget->senderSignalIndex();
    } else {
        return ((VirtualTextGrammarCheckGrammalecteResultWidget*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteResultWidget_OnSenderSignalIndex(const TextGrammarCheck__GrammalecteResultWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteresultwidget = const_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteResultWidget*>(self));
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->setTextGrammarCheck__GrammalecteResultWidget_SenderSignalIndex_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteResultWidget::TextGrammarCheck__GrammalecteResultWidget_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int TextGrammarCheck__GrammalecteResultWidget_Receivers(const TextGrammarCheck__GrammalecteResultWidget* self, const char* signal) {
    auto* vtextgrammarcheckgrammalecteresultwidget = const_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteResultWidget*>(self));
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        return vtextgrammarcheckgrammalecteresultwidget->receivers(signal);
    } else {
        return ((VirtualTextGrammarCheckGrammalecteResultWidget*)self)->receivers(signal);
    }
}

// Base class handler implementation
int TextGrammarCheck__GrammalecteResultWidget_SuperReceivers(const TextGrammarCheck__GrammalecteResultWidget* self, const char* signal) {
    auto* vtextgrammarcheckgrammalecteresultwidget = const_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteResultWidget*>(self));
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->setTextGrammarCheck__GrammalecteResultWidget_Receivers_IsBase(true);
        return vtextgrammarcheckgrammalecteresultwidget->receivers(signal);
    } else {
        return ((VirtualTextGrammarCheckGrammalecteResultWidget*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteResultWidget_OnReceivers(const TextGrammarCheck__GrammalecteResultWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteresultwidget = const_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteResultWidget*>(self));
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->setTextGrammarCheck__GrammalecteResultWidget_Receivers_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteResultWidget::TextGrammarCheck__GrammalecteResultWidget_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextGrammarCheck__GrammalecteResultWidget_IsSignalConnected(const TextGrammarCheck__GrammalecteResultWidget* self, const QMetaMethod* signal) {
    auto* vtextgrammarcheckgrammalecteresultwidget = const_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteResultWidget*>(self));
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        return vtextgrammarcheckgrammalecteresultwidget->isSignalConnected(*signal);
    } else {
        return ((VirtualTextGrammarCheckGrammalecteResultWidget*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool TextGrammarCheck__GrammalecteResultWidget_SuperIsSignalConnected(const TextGrammarCheck__GrammalecteResultWidget* self, const QMetaMethod* signal) {
    auto* vtextgrammarcheckgrammalecteresultwidget = const_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteResultWidget*>(self));
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->setTextGrammarCheck__GrammalecteResultWidget_IsSignalConnected_IsBase(true);
        return vtextgrammarcheckgrammalecteresultwidget->isSignalConnected(*signal);
    } else {
        return ((VirtualTextGrammarCheckGrammalecteResultWidget*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteResultWidget_OnIsSignalConnected(const TextGrammarCheck__GrammalecteResultWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteresultwidget = const_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteResultWidget*>(self));
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->setTextGrammarCheck__GrammalecteResultWidget_IsSignalConnected_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteResultWidget::TextGrammarCheck__GrammalecteResultWidget_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double TextGrammarCheck__GrammalecteResultWidget_GetDecodedMetricF(const TextGrammarCheck__GrammalecteResultWidget* self, int metricA, int metricB) {
    auto* vtextgrammarcheckgrammalecteresultwidget = const_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteResultWidget*>(self));
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        return vtextgrammarcheckgrammalecteresultwidget->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualTextGrammarCheckGrammalecteResultWidget*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double TextGrammarCheck__GrammalecteResultWidget_SuperGetDecodedMetricF(const TextGrammarCheck__GrammalecteResultWidget* self, int metricA, int metricB) {
    auto* vtextgrammarcheckgrammalecteresultwidget = const_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteResultWidget*>(self));
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->setTextGrammarCheck__GrammalecteResultWidget_GetDecodedMetricF_IsBase(true);
        return vtextgrammarcheckgrammalecteresultwidget->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualTextGrammarCheckGrammalecteResultWidget*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteResultWidget_OnGetDecodedMetricF(const TextGrammarCheck__GrammalecteResultWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteresultwidget = const_cast<VirtualTextGrammarCheckGrammalecteResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteResultWidget*>(self));
    if (vtextgrammarcheckgrammalecteresultwidget && vtextgrammarcheckgrammalecteresultwidget->isVirtualTextGrammarCheckGrammalecteResultWidget) {
        vtextgrammarcheckgrammalecteresultwidget->setTextGrammarCheck__GrammalecteResultWidget_GetDecodedMetricF_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteResultWidget::TextGrammarCheck__GrammalecteResultWidget_GetDecodedMetricF_Callback>(slot));
    }
}

void TextGrammarCheck__GrammalecteResultWidget_Delete(TextGrammarCheck__GrammalecteResultWidget* self) {
    delete self;
}
