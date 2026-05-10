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
#define WORKAROUND_INNER_CLASS_DEFINITION_TextGrammarCheck__GrammarResultWidget
#define WORKAROUND_INNER_CLASS_DEFINITION_TextGrammarCheck__LanguageToolResultWidget
#include <languagetoolresultwidget.h>
#include "liblanguagetoolresultwidget.h"
#include "liblanguagetoolresultwidget.hxx"

TextGrammarCheck__LanguageToolResultWidget* TextGrammarCheck__LanguageToolResultWidget_new(QWidget* parent) {
    return new VirtualTextGrammarCheckLanguageToolResultWidget(parent);
}

TextGrammarCheck__LanguageToolResultWidget* TextGrammarCheck__LanguageToolResultWidget_new2() {
    return new VirtualTextGrammarCheckLanguageToolResultWidget();
}

QMetaObject* TextGrammarCheck__LanguageToolResultWidget_MetaObject(const TextGrammarCheck__LanguageToolResultWidget* self) {
    auto* vtextgrammarcheck__languagetoolresultwidget = dynamic_cast<const VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarcheck__languagetoolresultwidget && vtextgrammarcheck__languagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        return (QMetaObject*)self->metaObject();
    } else {
        return (QMetaObject*)((VirtualTextGrammarCheckLanguageToolResultWidget*)self)->metaObject();
    }
}

void* TextGrammarCheck__LanguageToolResultWidget_Metacast(TextGrammarCheck__LanguageToolResultWidget* self, const char* param1) {
    auto* vtextgrammarcheck__languagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarcheck__languagetoolresultwidget && vtextgrammarcheck__languagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        return self->qt_metacast(param1);
    } else {
        return ((VirtualTextGrammarCheckLanguageToolResultWidget*)self)->qt_metacast(param1);
    }
}

int TextGrammarCheck__LanguageToolResultWidget_Metacall(TextGrammarCheck__LanguageToolResultWidget* self, int param1, int param2, void** param3) {
    auto* vtextgrammarcheck__languagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarcheck__languagetoolresultwidget && vtextgrammarcheck__languagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualTextGrammarCheckLanguageToolResultWidget*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

void TextGrammarCheck__LanguageToolResultWidget_CheckGrammar(TextGrammarCheck__LanguageToolResultWidget* self) {
    auto* vtextgrammarcheck__languagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarcheck__languagetoolresultwidget && vtextgrammarcheck__languagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        self->checkGrammar();
    } else {
        ((VirtualTextGrammarCheckLanguageToolResultWidget*)self)->checkGrammar();
    }
}

void TextGrammarCheck__LanguageToolResultWidget_AddExtraWidget(TextGrammarCheck__LanguageToolResultWidget* self) {
    auto* vtextgrammarcheck__languagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarcheck__languagetoolresultwidget && vtextgrammarcheck__languagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarcheck__languagetoolresultwidget->addExtraWidget();
    }
}

// Base class handler implementation
QMetaObject* TextGrammarCheck__LanguageToolResultWidget_SuperMetaObject(const TextGrammarCheck__LanguageToolResultWidget* self) {
    auto* vtextgrammarchecklanguagetoolresultwidget = const_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolResultWidget*>(self));
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->setTextGrammarCheck__LanguageToolResultWidget_MetaObject_IsBase(true);
        return (QMetaObject*)vtextgrammarchecklanguagetoolresultwidget->metaObject();
    } else {
        return (QMetaObject*)self->TextGrammarCheck::LanguageToolResultWidget::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolResultWidget_OnMetaObject(const TextGrammarCheck__LanguageToolResultWidget* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolresultwidget = const_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolResultWidget*>(self));
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->setTextGrammarCheck__LanguageToolResultWidget_MetaObject_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolResultWidget::TextGrammarCheck__LanguageToolResultWidget_MetaObject_Callback>(slot));
    }
}

// Base class handler implementation
void* TextGrammarCheck__LanguageToolResultWidget_SuperMetacast(TextGrammarCheck__LanguageToolResultWidget* self, const char* param1) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->setTextGrammarCheck__LanguageToolResultWidget_Metacast_IsBase(true);
        return vtextgrammarchecklanguagetoolresultwidget->qt_metacast(param1);
    } else {
        return self->TextGrammarCheck::LanguageToolResultWidget::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolResultWidget_OnMetacast(TextGrammarCheck__LanguageToolResultWidget* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->setTextGrammarCheck__LanguageToolResultWidget_Metacast_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolResultWidget::TextGrammarCheck__LanguageToolResultWidget_Metacast_Callback>(slot));
    }
}

// Base class handler implementation
int TextGrammarCheck__LanguageToolResultWidget_SuperMetacall(TextGrammarCheck__LanguageToolResultWidget* self, int param1, int param2, void** param3) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->setTextGrammarCheck__LanguageToolResultWidget_Metacall_IsBase(true);
        return vtextgrammarchecklanguagetoolresultwidget->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->TextGrammarCheck::LanguageToolResultWidget::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolResultWidget_OnMetacall(TextGrammarCheck__LanguageToolResultWidget* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->setTextGrammarCheck__LanguageToolResultWidget_Metacall_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolResultWidget::TextGrammarCheck__LanguageToolResultWidget_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_SuperCheckGrammar(TextGrammarCheck__LanguageToolResultWidget* self) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->setTextGrammarCheck__LanguageToolResultWidget_CheckGrammar_IsBase(true);
        vtextgrammarchecklanguagetoolresultwidget->checkGrammar();
    } else {
        self->TextGrammarCheck::LanguageToolResultWidget::checkGrammar();
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolResultWidget_OnCheckGrammar(TextGrammarCheck__LanguageToolResultWidget* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->setTextGrammarCheck__LanguageToolResultWidget_CheckGrammar_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolResultWidget::TextGrammarCheck__LanguageToolResultWidget_CheckGrammar_Callback>(slot));
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_SuperAddExtraWidget(TextGrammarCheck__LanguageToolResultWidget* self) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->setTextGrammarCheck__LanguageToolResultWidget_AddExtraWidget_IsBase(true);
        vtextgrammarchecklanguagetoolresultwidget->addExtraWidget();
    } else {
        ((VirtualTextGrammarCheckLanguageToolResultWidget*)self)->addExtraWidget();
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolResultWidget_OnAddExtraWidget(TextGrammarCheck__LanguageToolResultWidget* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->setTextGrammarCheck__LanguageToolResultWidget_AddExtraWidget_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolResultWidget::TextGrammarCheck__LanguageToolResultWidget_AddExtraWidget_Callback>(slot));
    }
}

// Derived class handler implementation
int TextGrammarCheck__LanguageToolResultWidget_DevType(const TextGrammarCheck__LanguageToolResultWidget* self) {
    auto* vtextgrammarchecklanguagetoolresultwidget = const_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolResultWidget*>(self));
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        return vtextgrammarchecklanguagetoolresultwidget->devType();
    } else {
        return self->TextGrammarCheck::LanguageToolResultWidget::devType();
    }
}

// Base class handler implementation
int TextGrammarCheck__LanguageToolResultWidget_SuperDevType(const TextGrammarCheck__LanguageToolResultWidget* self) {
    auto* vtextgrammarchecklanguagetoolresultwidget = const_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolResultWidget*>(self));
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->setTextGrammarCheck__LanguageToolResultWidget_DevType_IsBase(true);
        return vtextgrammarchecklanguagetoolresultwidget->devType();
    } else {
        return self->TextGrammarCheck::LanguageToolResultWidget::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolResultWidget_OnDevType(const TextGrammarCheck__LanguageToolResultWidget* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolresultwidget = const_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolResultWidget*>(self));
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->setTextGrammarCheck__LanguageToolResultWidget_DevType_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolResultWidget::TextGrammarCheck__LanguageToolResultWidget_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_SetVisible(TextGrammarCheck__LanguageToolResultWidget* self, bool visible) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->setVisible(visible);
    } else {
        self->TextGrammarCheck::LanguageToolResultWidget::setVisible(visible);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_SuperSetVisible(TextGrammarCheck__LanguageToolResultWidget* self, bool visible) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->setTextGrammarCheck__LanguageToolResultWidget_SetVisible_IsBase(true);
        vtextgrammarchecklanguagetoolresultwidget->setVisible(visible);
    } else {
        self->TextGrammarCheck::LanguageToolResultWidget::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolResultWidget_OnSetVisible(TextGrammarCheck__LanguageToolResultWidget* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->setTextGrammarCheck__LanguageToolResultWidget_SetVisible_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolResultWidget::TextGrammarCheck__LanguageToolResultWidget_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* TextGrammarCheck__LanguageToolResultWidget_SizeHint(const TextGrammarCheck__LanguageToolResultWidget* self) {
    auto* vtextgrammarchecklanguagetoolresultwidget = const_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolResultWidget*>(self));
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        return new QSize(vtextgrammarchecklanguagetoolresultwidget->sizeHint());
    } else {
        return new QSize(((VirtualTextGrammarCheckLanguageToolResultWidget*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* TextGrammarCheck__LanguageToolResultWidget_SuperSizeHint(const TextGrammarCheck__LanguageToolResultWidget* self) {
    auto* vtextgrammarchecklanguagetoolresultwidget = const_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolResultWidget*>(self));
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->setTextGrammarCheck__LanguageToolResultWidget_SizeHint_IsBase(true);
        return new QSize(vtextgrammarchecklanguagetoolresultwidget->sizeHint());
    } else {
        return new QSize(((VirtualTextGrammarCheckLanguageToolResultWidget*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolResultWidget_OnSizeHint(const TextGrammarCheck__LanguageToolResultWidget* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolresultwidget = const_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolResultWidget*>(self));
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->setTextGrammarCheck__LanguageToolResultWidget_SizeHint_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolResultWidget::TextGrammarCheck__LanguageToolResultWidget_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* TextGrammarCheck__LanguageToolResultWidget_MinimumSizeHint(const TextGrammarCheck__LanguageToolResultWidget* self) {
    auto* vtextgrammarchecklanguagetoolresultwidget = const_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolResultWidget*>(self));
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        return new QSize(vtextgrammarchecklanguagetoolresultwidget->minimumSizeHint());
    } else {
        return new QSize(((VirtualTextGrammarCheckLanguageToolResultWidget*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* TextGrammarCheck__LanguageToolResultWidget_SuperMinimumSizeHint(const TextGrammarCheck__LanguageToolResultWidget* self) {
    auto* vtextgrammarchecklanguagetoolresultwidget = const_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolResultWidget*>(self));
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->setTextGrammarCheck__LanguageToolResultWidget_MinimumSizeHint_IsBase(true);
        return new QSize(vtextgrammarchecklanguagetoolresultwidget->minimumSizeHint());
    } else {
        return new QSize(((VirtualTextGrammarCheckLanguageToolResultWidget*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolResultWidget_OnMinimumSizeHint(const TextGrammarCheck__LanguageToolResultWidget* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolresultwidget = const_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolResultWidget*>(self));
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->setTextGrammarCheck__LanguageToolResultWidget_MinimumSizeHint_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolResultWidget::TextGrammarCheck__LanguageToolResultWidget_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
int TextGrammarCheck__LanguageToolResultWidget_HeightForWidth(const TextGrammarCheck__LanguageToolResultWidget* self, int param1) {
    auto* vtextgrammarchecklanguagetoolresultwidget = const_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolResultWidget*>(self));
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        return vtextgrammarchecklanguagetoolresultwidget->heightForWidth(static_cast<int>(param1));
    } else {
        return self->TextGrammarCheck::LanguageToolResultWidget::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int TextGrammarCheck__LanguageToolResultWidget_SuperHeightForWidth(const TextGrammarCheck__LanguageToolResultWidget* self, int param1) {
    auto* vtextgrammarchecklanguagetoolresultwidget = const_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolResultWidget*>(self));
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->setTextGrammarCheck__LanguageToolResultWidget_HeightForWidth_IsBase(true);
        return vtextgrammarchecklanguagetoolresultwidget->heightForWidth(static_cast<int>(param1));
    } else {
        return self->TextGrammarCheck::LanguageToolResultWidget::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolResultWidget_OnHeightForWidth(const TextGrammarCheck__LanguageToolResultWidget* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolresultwidget = const_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolResultWidget*>(self));
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->setTextGrammarCheck__LanguageToolResultWidget_HeightForWidth_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolResultWidget::TextGrammarCheck__LanguageToolResultWidget_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextGrammarCheck__LanguageToolResultWidget_HasHeightForWidth(const TextGrammarCheck__LanguageToolResultWidget* self) {
    auto* vtextgrammarchecklanguagetoolresultwidget = const_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolResultWidget*>(self));
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        return vtextgrammarchecklanguagetoolresultwidget->hasHeightForWidth();
    } else {
        return self->TextGrammarCheck::LanguageToolResultWidget::hasHeightForWidth();
    }
}

// Base class handler implementation
bool TextGrammarCheck__LanguageToolResultWidget_SuperHasHeightForWidth(const TextGrammarCheck__LanguageToolResultWidget* self) {
    auto* vtextgrammarchecklanguagetoolresultwidget = const_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolResultWidget*>(self));
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->setTextGrammarCheck__LanguageToolResultWidget_HasHeightForWidth_IsBase(true);
        return vtextgrammarchecklanguagetoolresultwidget->hasHeightForWidth();
    } else {
        return self->TextGrammarCheck::LanguageToolResultWidget::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolResultWidget_OnHasHeightForWidth(const TextGrammarCheck__LanguageToolResultWidget* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolresultwidget = const_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolResultWidget*>(self));
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->setTextGrammarCheck__LanguageToolResultWidget_HasHeightForWidth_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolResultWidget::TextGrammarCheck__LanguageToolResultWidget_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* TextGrammarCheck__LanguageToolResultWidget_PaintEngine(const TextGrammarCheck__LanguageToolResultWidget* self) {
    auto* vtextgrammarchecklanguagetoolresultwidget = const_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolResultWidget*>(self));
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        return vtextgrammarchecklanguagetoolresultwidget->paintEngine();
    } else {
        return self->TextGrammarCheck::LanguageToolResultWidget::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* TextGrammarCheck__LanguageToolResultWidget_SuperPaintEngine(const TextGrammarCheck__LanguageToolResultWidget* self) {
    auto* vtextgrammarchecklanguagetoolresultwidget = const_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolResultWidget*>(self));
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->setTextGrammarCheck__LanguageToolResultWidget_PaintEngine_IsBase(true);
        return vtextgrammarchecklanguagetoolresultwidget->paintEngine();
    } else {
        return self->TextGrammarCheck::LanguageToolResultWidget::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolResultWidget_OnPaintEngine(const TextGrammarCheck__LanguageToolResultWidget* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolresultwidget = const_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolResultWidget*>(self));
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->setTextGrammarCheck__LanguageToolResultWidget_PaintEngine_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolResultWidget::TextGrammarCheck__LanguageToolResultWidget_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextGrammarCheck__LanguageToolResultWidget_Event(TextGrammarCheck__LanguageToolResultWidget* self, QEvent* event) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        return vtextgrammarchecklanguagetoolresultwidget->event(event);
    } else {
        return ((VirtualTextGrammarCheckLanguageToolResultWidget*)self)->event(event);
    }
}

// Base class handler implementation
bool TextGrammarCheck__LanguageToolResultWidget_SuperEvent(TextGrammarCheck__LanguageToolResultWidget* self, QEvent* event) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->setTextGrammarCheck__LanguageToolResultWidget_Event_IsBase(true);
        return vtextgrammarchecklanguagetoolresultwidget->event(event);
    } else {
        return ((VirtualTextGrammarCheckLanguageToolResultWidget*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolResultWidget_OnEvent(TextGrammarCheck__LanguageToolResultWidget* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->setTextGrammarCheck__LanguageToolResultWidget_Event_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolResultWidget::TextGrammarCheck__LanguageToolResultWidget_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_MousePressEvent(TextGrammarCheck__LanguageToolResultWidget* self, QMouseEvent* event) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->mousePressEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolResultWidget*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_SuperMousePressEvent(TextGrammarCheck__LanguageToolResultWidget* self, QMouseEvent* event) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->setTextGrammarCheck__LanguageToolResultWidget_MousePressEvent_IsBase(true);
        vtextgrammarchecklanguagetoolresultwidget->mousePressEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolResultWidget*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolResultWidget_OnMousePressEvent(TextGrammarCheck__LanguageToolResultWidget* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->setTextGrammarCheck__LanguageToolResultWidget_MousePressEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolResultWidget::TextGrammarCheck__LanguageToolResultWidget_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_MouseReleaseEvent(TextGrammarCheck__LanguageToolResultWidget* self, QMouseEvent* event) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->mouseReleaseEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolResultWidget*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_SuperMouseReleaseEvent(TextGrammarCheck__LanguageToolResultWidget* self, QMouseEvent* event) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->setTextGrammarCheck__LanguageToolResultWidget_MouseReleaseEvent_IsBase(true);
        vtextgrammarchecklanguagetoolresultwidget->mouseReleaseEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolResultWidget*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolResultWidget_OnMouseReleaseEvent(TextGrammarCheck__LanguageToolResultWidget* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->setTextGrammarCheck__LanguageToolResultWidget_MouseReleaseEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolResultWidget::TextGrammarCheck__LanguageToolResultWidget_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_MouseDoubleClickEvent(TextGrammarCheck__LanguageToolResultWidget* self, QMouseEvent* event) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->mouseDoubleClickEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolResultWidget*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_SuperMouseDoubleClickEvent(TextGrammarCheck__LanguageToolResultWidget* self, QMouseEvent* event) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->setTextGrammarCheck__LanguageToolResultWidget_MouseDoubleClickEvent_IsBase(true);
        vtextgrammarchecklanguagetoolresultwidget->mouseDoubleClickEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolResultWidget*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolResultWidget_OnMouseDoubleClickEvent(TextGrammarCheck__LanguageToolResultWidget* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->setTextGrammarCheck__LanguageToolResultWidget_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolResultWidget::TextGrammarCheck__LanguageToolResultWidget_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_MouseMoveEvent(TextGrammarCheck__LanguageToolResultWidget* self, QMouseEvent* event) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->mouseMoveEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolResultWidget*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_SuperMouseMoveEvent(TextGrammarCheck__LanguageToolResultWidget* self, QMouseEvent* event) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->setTextGrammarCheck__LanguageToolResultWidget_MouseMoveEvent_IsBase(true);
        vtextgrammarchecklanguagetoolresultwidget->mouseMoveEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolResultWidget*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolResultWidget_OnMouseMoveEvent(TextGrammarCheck__LanguageToolResultWidget* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->setTextGrammarCheck__LanguageToolResultWidget_MouseMoveEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolResultWidget::TextGrammarCheck__LanguageToolResultWidget_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_WheelEvent(TextGrammarCheck__LanguageToolResultWidget* self, QWheelEvent* event) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->wheelEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolResultWidget*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_SuperWheelEvent(TextGrammarCheck__LanguageToolResultWidget* self, QWheelEvent* event) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->setTextGrammarCheck__LanguageToolResultWidget_WheelEvent_IsBase(true);
        vtextgrammarchecklanguagetoolresultwidget->wheelEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolResultWidget*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolResultWidget_OnWheelEvent(TextGrammarCheck__LanguageToolResultWidget* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->setTextGrammarCheck__LanguageToolResultWidget_WheelEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolResultWidget::TextGrammarCheck__LanguageToolResultWidget_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_KeyPressEvent(TextGrammarCheck__LanguageToolResultWidget* self, QKeyEvent* event) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->keyPressEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolResultWidget*)self)->keyPressEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_SuperKeyPressEvent(TextGrammarCheck__LanguageToolResultWidget* self, QKeyEvent* event) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->setTextGrammarCheck__LanguageToolResultWidget_KeyPressEvent_IsBase(true);
        vtextgrammarchecklanguagetoolresultwidget->keyPressEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolResultWidget*)self)->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolResultWidget_OnKeyPressEvent(TextGrammarCheck__LanguageToolResultWidget* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->setTextGrammarCheck__LanguageToolResultWidget_KeyPressEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolResultWidget::TextGrammarCheck__LanguageToolResultWidget_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_KeyReleaseEvent(TextGrammarCheck__LanguageToolResultWidget* self, QKeyEvent* event) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->keyReleaseEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolResultWidget*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_SuperKeyReleaseEvent(TextGrammarCheck__LanguageToolResultWidget* self, QKeyEvent* event) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->setTextGrammarCheck__LanguageToolResultWidget_KeyReleaseEvent_IsBase(true);
        vtextgrammarchecklanguagetoolresultwidget->keyReleaseEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolResultWidget*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolResultWidget_OnKeyReleaseEvent(TextGrammarCheck__LanguageToolResultWidget* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->setTextGrammarCheck__LanguageToolResultWidget_KeyReleaseEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolResultWidget::TextGrammarCheck__LanguageToolResultWidget_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_FocusInEvent(TextGrammarCheck__LanguageToolResultWidget* self, QFocusEvent* event) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->focusInEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolResultWidget*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_SuperFocusInEvent(TextGrammarCheck__LanguageToolResultWidget* self, QFocusEvent* event) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->setTextGrammarCheck__LanguageToolResultWidget_FocusInEvent_IsBase(true);
        vtextgrammarchecklanguagetoolresultwidget->focusInEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolResultWidget*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolResultWidget_OnFocusInEvent(TextGrammarCheck__LanguageToolResultWidget* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->setTextGrammarCheck__LanguageToolResultWidget_FocusInEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolResultWidget::TextGrammarCheck__LanguageToolResultWidget_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_FocusOutEvent(TextGrammarCheck__LanguageToolResultWidget* self, QFocusEvent* event) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->focusOutEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolResultWidget*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_SuperFocusOutEvent(TextGrammarCheck__LanguageToolResultWidget* self, QFocusEvent* event) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->setTextGrammarCheck__LanguageToolResultWidget_FocusOutEvent_IsBase(true);
        vtextgrammarchecklanguagetoolresultwidget->focusOutEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolResultWidget*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolResultWidget_OnFocusOutEvent(TextGrammarCheck__LanguageToolResultWidget* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->setTextGrammarCheck__LanguageToolResultWidget_FocusOutEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolResultWidget::TextGrammarCheck__LanguageToolResultWidget_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_EnterEvent(TextGrammarCheck__LanguageToolResultWidget* self, QEnterEvent* event) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->enterEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolResultWidget*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_SuperEnterEvent(TextGrammarCheck__LanguageToolResultWidget* self, QEnterEvent* event) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->setTextGrammarCheck__LanguageToolResultWidget_EnterEvent_IsBase(true);
        vtextgrammarchecklanguagetoolresultwidget->enterEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolResultWidget*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolResultWidget_OnEnterEvent(TextGrammarCheck__LanguageToolResultWidget* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->setTextGrammarCheck__LanguageToolResultWidget_EnterEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolResultWidget::TextGrammarCheck__LanguageToolResultWidget_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_LeaveEvent(TextGrammarCheck__LanguageToolResultWidget* self, QEvent* event) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->leaveEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolResultWidget*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_SuperLeaveEvent(TextGrammarCheck__LanguageToolResultWidget* self, QEvent* event) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->setTextGrammarCheck__LanguageToolResultWidget_LeaveEvent_IsBase(true);
        vtextgrammarchecklanguagetoolresultwidget->leaveEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolResultWidget*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolResultWidget_OnLeaveEvent(TextGrammarCheck__LanguageToolResultWidget* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->setTextGrammarCheck__LanguageToolResultWidget_LeaveEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolResultWidget::TextGrammarCheck__LanguageToolResultWidget_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_PaintEvent(TextGrammarCheck__LanguageToolResultWidget* self, QPaintEvent* event) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->paintEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolResultWidget*)self)->paintEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_SuperPaintEvent(TextGrammarCheck__LanguageToolResultWidget* self, QPaintEvent* event) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->setTextGrammarCheck__LanguageToolResultWidget_PaintEvent_IsBase(true);
        vtextgrammarchecklanguagetoolresultwidget->paintEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolResultWidget*)self)->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolResultWidget_OnPaintEvent(TextGrammarCheck__LanguageToolResultWidget* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->setTextGrammarCheck__LanguageToolResultWidget_PaintEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolResultWidget::TextGrammarCheck__LanguageToolResultWidget_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_MoveEvent(TextGrammarCheck__LanguageToolResultWidget* self, QMoveEvent* event) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->moveEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolResultWidget*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_SuperMoveEvent(TextGrammarCheck__LanguageToolResultWidget* self, QMoveEvent* event) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->setTextGrammarCheck__LanguageToolResultWidget_MoveEvent_IsBase(true);
        vtextgrammarchecklanguagetoolresultwidget->moveEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolResultWidget*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolResultWidget_OnMoveEvent(TextGrammarCheck__LanguageToolResultWidget* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->setTextGrammarCheck__LanguageToolResultWidget_MoveEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolResultWidget::TextGrammarCheck__LanguageToolResultWidget_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_ResizeEvent(TextGrammarCheck__LanguageToolResultWidget* self, QResizeEvent* event) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->resizeEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolResultWidget*)self)->resizeEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_SuperResizeEvent(TextGrammarCheck__LanguageToolResultWidget* self, QResizeEvent* event) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->setTextGrammarCheck__LanguageToolResultWidget_ResizeEvent_IsBase(true);
        vtextgrammarchecklanguagetoolresultwidget->resizeEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolResultWidget*)self)->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolResultWidget_OnResizeEvent(TextGrammarCheck__LanguageToolResultWidget* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->setTextGrammarCheck__LanguageToolResultWidget_ResizeEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolResultWidget::TextGrammarCheck__LanguageToolResultWidget_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_CloseEvent(TextGrammarCheck__LanguageToolResultWidget* self, QCloseEvent* event) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->closeEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolResultWidget*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_SuperCloseEvent(TextGrammarCheck__LanguageToolResultWidget* self, QCloseEvent* event) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->setTextGrammarCheck__LanguageToolResultWidget_CloseEvent_IsBase(true);
        vtextgrammarchecklanguagetoolresultwidget->closeEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolResultWidget*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolResultWidget_OnCloseEvent(TextGrammarCheck__LanguageToolResultWidget* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->setTextGrammarCheck__LanguageToolResultWidget_CloseEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolResultWidget::TextGrammarCheck__LanguageToolResultWidget_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_ContextMenuEvent(TextGrammarCheck__LanguageToolResultWidget* self, QContextMenuEvent* event) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->contextMenuEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolResultWidget*)self)->contextMenuEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_SuperContextMenuEvent(TextGrammarCheck__LanguageToolResultWidget* self, QContextMenuEvent* event) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->setTextGrammarCheck__LanguageToolResultWidget_ContextMenuEvent_IsBase(true);
        vtextgrammarchecklanguagetoolresultwidget->contextMenuEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolResultWidget*)self)->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolResultWidget_OnContextMenuEvent(TextGrammarCheck__LanguageToolResultWidget* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->setTextGrammarCheck__LanguageToolResultWidget_ContextMenuEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolResultWidget::TextGrammarCheck__LanguageToolResultWidget_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_TabletEvent(TextGrammarCheck__LanguageToolResultWidget* self, QTabletEvent* event) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->tabletEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolResultWidget*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_SuperTabletEvent(TextGrammarCheck__LanguageToolResultWidget* self, QTabletEvent* event) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->setTextGrammarCheck__LanguageToolResultWidget_TabletEvent_IsBase(true);
        vtextgrammarchecklanguagetoolresultwidget->tabletEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolResultWidget*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolResultWidget_OnTabletEvent(TextGrammarCheck__LanguageToolResultWidget* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->setTextGrammarCheck__LanguageToolResultWidget_TabletEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolResultWidget::TextGrammarCheck__LanguageToolResultWidget_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_ActionEvent(TextGrammarCheck__LanguageToolResultWidget* self, QActionEvent* event) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->actionEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolResultWidget*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_SuperActionEvent(TextGrammarCheck__LanguageToolResultWidget* self, QActionEvent* event) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->setTextGrammarCheck__LanguageToolResultWidget_ActionEvent_IsBase(true);
        vtextgrammarchecklanguagetoolresultwidget->actionEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolResultWidget*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolResultWidget_OnActionEvent(TextGrammarCheck__LanguageToolResultWidget* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->setTextGrammarCheck__LanguageToolResultWidget_ActionEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolResultWidget::TextGrammarCheck__LanguageToolResultWidget_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_DragEnterEvent(TextGrammarCheck__LanguageToolResultWidget* self, QDragEnterEvent* event) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->dragEnterEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolResultWidget*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_SuperDragEnterEvent(TextGrammarCheck__LanguageToolResultWidget* self, QDragEnterEvent* event) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->setTextGrammarCheck__LanguageToolResultWidget_DragEnterEvent_IsBase(true);
        vtextgrammarchecklanguagetoolresultwidget->dragEnterEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolResultWidget*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolResultWidget_OnDragEnterEvent(TextGrammarCheck__LanguageToolResultWidget* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->setTextGrammarCheck__LanguageToolResultWidget_DragEnterEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolResultWidget::TextGrammarCheck__LanguageToolResultWidget_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_DragMoveEvent(TextGrammarCheck__LanguageToolResultWidget* self, QDragMoveEvent* event) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->dragMoveEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolResultWidget*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_SuperDragMoveEvent(TextGrammarCheck__LanguageToolResultWidget* self, QDragMoveEvent* event) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->setTextGrammarCheck__LanguageToolResultWidget_DragMoveEvent_IsBase(true);
        vtextgrammarchecklanguagetoolresultwidget->dragMoveEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolResultWidget*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolResultWidget_OnDragMoveEvent(TextGrammarCheck__LanguageToolResultWidget* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->setTextGrammarCheck__LanguageToolResultWidget_DragMoveEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolResultWidget::TextGrammarCheck__LanguageToolResultWidget_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_DragLeaveEvent(TextGrammarCheck__LanguageToolResultWidget* self, QDragLeaveEvent* event) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->dragLeaveEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolResultWidget*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_SuperDragLeaveEvent(TextGrammarCheck__LanguageToolResultWidget* self, QDragLeaveEvent* event) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->setTextGrammarCheck__LanguageToolResultWidget_DragLeaveEvent_IsBase(true);
        vtextgrammarchecklanguagetoolresultwidget->dragLeaveEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolResultWidget*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolResultWidget_OnDragLeaveEvent(TextGrammarCheck__LanguageToolResultWidget* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->setTextGrammarCheck__LanguageToolResultWidget_DragLeaveEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolResultWidget::TextGrammarCheck__LanguageToolResultWidget_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_DropEvent(TextGrammarCheck__LanguageToolResultWidget* self, QDropEvent* event) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->dropEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolResultWidget*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_SuperDropEvent(TextGrammarCheck__LanguageToolResultWidget* self, QDropEvent* event) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->setTextGrammarCheck__LanguageToolResultWidget_DropEvent_IsBase(true);
        vtextgrammarchecklanguagetoolresultwidget->dropEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolResultWidget*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolResultWidget_OnDropEvent(TextGrammarCheck__LanguageToolResultWidget* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->setTextGrammarCheck__LanguageToolResultWidget_DropEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolResultWidget::TextGrammarCheck__LanguageToolResultWidget_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_ShowEvent(TextGrammarCheck__LanguageToolResultWidget* self, QShowEvent* event) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->showEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolResultWidget*)self)->showEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_SuperShowEvent(TextGrammarCheck__LanguageToolResultWidget* self, QShowEvent* event) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->setTextGrammarCheck__LanguageToolResultWidget_ShowEvent_IsBase(true);
        vtextgrammarchecklanguagetoolresultwidget->showEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolResultWidget*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolResultWidget_OnShowEvent(TextGrammarCheck__LanguageToolResultWidget* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->setTextGrammarCheck__LanguageToolResultWidget_ShowEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolResultWidget::TextGrammarCheck__LanguageToolResultWidget_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_HideEvent(TextGrammarCheck__LanguageToolResultWidget* self, QHideEvent* event) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->hideEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolResultWidget*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_SuperHideEvent(TextGrammarCheck__LanguageToolResultWidget* self, QHideEvent* event) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->setTextGrammarCheck__LanguageToolResultWidget_HideEvent_IsBase(true);
        vtextgrammarchecklanguagetoolresultwidget->hideEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolResultWidget*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolResultWidget_OnHideEvent(TextGrammarCheck__LanguageToolResultWidget* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->setTextGrammarCheck__LanguageToolResultWidget_HideEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolResultWidget::TextGrammarCheck__LanguageToolResultWidget_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextGrammarCheck__LanguageToolResultWidget_NativeEvent(TextGrammarCheck__LanguageToolResultWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        return vtextgrammarchecklanguagetoolresultwidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualTextGrammarCheckLanguageToolResultWidget*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool TextGrammarCheck__LanguageToolResultWidget_SuperNativeEvent(TextGrammarCheck__LanguageToolResultWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->setTextGrammarCheck__LanguageToolResultWidget_NativeEvent_IsBase(true);
        return vtextgrammarchecklanguagetoolresultwidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualTextGrammarCheckLanguageToolResultWidget*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolResultWidget_OnNativeEvent(TextGrammarCheck__LanguageToolResultWidget* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->setTextGrammarCheck__LanguageToolResultWidget_NativeEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolResultWidget::TextGrammarCheck__LanguageToolResultWidget_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_ChangeEvent(TextGrammarCheck__LanguageToolResultWidget* self, QEvent* param1) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->changeEvent(param1);
    } else {
        ((VirtualTextGrammarCheckLanguageToolResultWidget*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_SuperChangeEvent(TextGrammarCheck__LanguageToolResultWidget* self, QEvent* param1) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->setTextGrammarCheck__LanguageToolResultWidget_ChangeEvent_IsBase(true);
        vtextgrammarchecklanguagetoolresultwidget->changeEvent(param1);
    } else {
        ((VirtualTextGrammarCheckLanguageToolResultWidget*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolResultWidget_OnChangeEvent(TextGrammarCheck__LanguageToolResultWidget* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->setTextGrammarCheck__LanguageToolResultWidget_ChangeEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolResultWidget::TextGrammarCheck__LanguageToolResultWidget_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int TextGrammarCheck__LanguageToolResultWidget_Metric(const TextGrammarCheck__LanguageToolResultWidget* self, int param1) {
    auto* vtextgrammarchecklanguagetoolresultwidget = const_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolResultWidget*>(self));
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        return vtextgrammarchecklanguagetoolresultwidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualTextGrammarCheckLanguageToolResultWidget*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int TextGrammarCheck__LanguageToolResultWidget_SuperMetric(const TextGrammarCheck__LanguageToolResultWidget* self, int param1) {
    auto* vtextgrammarchecklanguagetoolresultwidget = const_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolResultWidget*>(self));
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->setTextGrammarCheck__LanguageToolResultWidget_Metric_IsBase(true);
        return vtextgrammarchecklanguagetoolresultwidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualTextGrammarCheckLanguageToolResultWidget*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolResultWidget_OnMetric(const TextGrammarCheck__LanguageToolResultWidget* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolresultwidget = const_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolResultWidget*>(self));
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->setTextGrammarCheck__LanguageToolResultWidget_Metric_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolResultWidget::TextGrammarCheck__LanguageToolResultWidget_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_InitPainter(const TextGrammarCheck__LanguageToolResultWidget* self, QPainter* painter) {
    auto* vtextgrammarchecklanguagetoolresultwidget = const_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolResultWidget*>(self));
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->initPainter(painter);
    } else {
        ((VirtualTextGrammarCheckLanguageToolResultWidget*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_SuperInitPainter(const TextGrammarCheck__LanguageToolResultWidget* self, QPainter* painter) {
    auto* vtextgrammarchecklanguagetoolresultwidget = const_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolResultWidget*>(self));
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->setTextGrammarCheck__LanguageToolResultWidget_InitPainter_IsBase(true);
        vtextgrammarchecklanguagetoolresultwidget->initPainter(painter);
    } else {
        ((VirtualTextGrammarCheckLanguageToolResultWidget*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolResultWidget_OnInitPainter(const TextGrammarCheck__LanguageToolResultWidget* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolresultwidget = const_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolResultWidget*>(self));
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->setTextGrammarCheck__LanguageToolResultWidget_InitPainter_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolResultWidget::TextGrammarCheck__LanguageToolResultWidget_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* TextGrammarCheck__LanguageToolResultWidget_Redirected(const TextGrammarCheck__LanguageToolResultWidget* self, QPoint* offset) {
    auto* vtextgrammarchecklanguagetoolresultwidget = const_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolResultWidget*>(self));
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        return vtextgrammarchecklanguagetoolresultwidget->redirected(offset);
    } else {
        return ((VirtualTextGrammarCheckLanguageToolResultWidget*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* TextGrammarCheck__LanguageToolResultWidget_SuperRedirected(const TextGrammarCheck__LanguageToolResultWidget* self, QPoint* offset) {
    auto* vtextgrammarchecklanguagetoolresultwidget = const_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolResultWidget*>(self));
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->setTextGrammarCheck__LanguageToolResultWidget_Redirected_IsBase(true);
        return vtextgrammarchecklanguagetoolresultwidget->redirected(offset);
    } else {
        return ((VirtualTextGrammarCheckLanguageToolResultWidget*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolResultWidget_OnRedirected(const TextGrammarCheck__LanguageToolResultWidget* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolresultwidget = const_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolResultWidget*>(self));
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->setTextGrammarCheck__LanguageToolResultWidget_Redirected_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolResultWidget::TextGrammarCheck__LanguageToolResultWidget_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* TextGrammarCheck__LanguageToolResultWidget_SharedPainter(const TextGrammarCheck__LanguageToolResultWidget* self) {
    auto* vtextgrammarchecklanguagetoolresultwidget = const_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolResultWidget*>(self));
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        return vtextgrammarchecklanguagetoolresultwidget->sharedPainter();
    } else {
        return ((VirtualTextGrammarCheckLanguageToolResultWidget*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* TextGrammarCheck__LanguageToolResultWidget_SuperSharedPainter(const TextGrammarCheck__LanguageToolResultWidget* self) {
    auto* vtextgrammarchecklanguagetoolresultwidget = const_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolResultWidget*>(self));
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->setTextGrammarCheck__LanguageToolResultWidget_SharedPainter_IsBase(true);
        return vtextgrammarchecklanguagetoolresultwidget->sharedPainter();
    } else {
        return ((VirtualTextGrammarCheckLanguageToolResultWidget*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolResultWidget_OnSharedPainter(const TextGrammarCheck__LanguageToolResultWidget* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolresultwidget = const_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolResultWidget*>(self));
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->setTextGrammarCheck__LanguageToolResultWidget_SharedPainter_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolResultWidget::TextGrammarCheck__LanguageToolResultWidget_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_InputMethodEvent(TextGrammarCheck__LanguageToolResultWidget* self, QInputMethodEvent* param1) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->inputMethodEvent(param1);
    } else {
        ((VirtualTextGrammarCheckLanguageToolResultWidget*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_SuperInputMethodEvent(TextGrammarCheck__LanguageToolResultWidget* self, QInputMethodEvent* param1) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->setTextGrammarCheck__LanguageToolResultWidget_InputMethodEvent_IsBase(true);
        vtextgrammarchecklanguagetoolresultwidget->inputMethodEvent(param1);
    } else {
        ((VirtualTextGrammarCheckLanguageToolResultWidget*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolResultWidget_OnInputMethodEvent(TextGrammarCheck__LanguageToolResultWidget* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->setTextGrammarCheck__LanguageToolResultWidget_InputMethodEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolResultWidget::TextGrammarCheck__LanguageToolResultWidget_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* TextGrammarCheck__LanguageToolResultWidget_InputMethodQuery(const TextGrammarCheck__LanguageToolResultWidget* self, int param1) {
    auto* vtextgrammarchecklanguagetoolresultwidget = const_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolResultWidget*>(self));
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        return new QVariant(vtextgrammarchecklanguagetoolresultwidget->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualTextGrammarCheckLanguageToolResultWidget*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* TextGrammarCheck__LanguageToolResultWidget_SuperInputMethodQuery(const TextGrammarCheck__LanguageToolResultWidget* self, int param1) {
    auto* vtextgrammarchecklanguagetoolresultwidget = const_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolResultWidget*>(self));
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->setTextGrammarCheck__LanguageToolResultWidget_InputMethodQuery_IsBase(true);
        return new QVariant(vtextgrammarchecklanguagetoolresultwidget->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualTextGrammarCheckLanguageToolResultWidget*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolResultWidget_OnInputMethodQuery(const TextGrammarCheck__LanguageToolResultWidget* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolresultwidget = const_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolResultWidget*>(self));
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->setTextGrammarCheck__LanguageToolResultWidget_InputMethodQuery_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolResultWidget::TextGrammarCheck__LanguageToolResultWidget_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextGrammarCheck__LanguageToolResultWidget_FocusNextPrevChild(TextGrammarCheck__LanguageToolResultWidget* self, bool next) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        return vtextgrammarchecklanguagetoolresultwidget->focusNextPrevChild(next);
    } else {
        return ((VirtualTextGrammarCheckLanguageToolResultWidget*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool TextGrammarCheck__LanguageToolResultWidget_SuperFocusNextPrevChild(TextGrammarCheck__LanguageToolResultWidget* self, bool next) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->setTextGrammarCheck__LanguageToolResultWidget_FocusNextPrevChild_IsBase(true);
        return vtextgrammarchecklanguagetoolresultwidget->focusNextPrevChild(next);
    } else {
        return ((VirtualTextGrammarCheckLanguageToolResultWidget*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolResultWidget_OnFocusNextPrevChild(TextGrammarCheck__LanguageToolResultWidget* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->setTextGrammarCheck__LanguageToolResultWidget_FocusNextPrevChild_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolResultWidget::TextGrammarCheck__LanguageToolResultWidget_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextGrammarCheck__LanguageToolResultWidget_EventFilter(TextGrammarCheck__LanguageToolResultWidget* self, QObject* watched, QEvent* event) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        return vtextgrammarchecklanguagetoolresultwidget->eventFilter(watched, event);
    } else {
        return self->TextGrammarCheck::LanguageToolResultWidget::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool TextGrammarCheck__LanguageToolResultWidget_SuperEventFilter(TextGrammarCheck__LanguageToolResultWidget* self, QObject* watched, QEvent* event) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->setTextGrammarCheck__LanguageToolResultWidget_EventFilter_IsBase(true);
        return vtextgrammarchecklanguagetoolresultwidget->eventFilter(watched, event);
    } else {
        return self->TextGrammarCheck::LanguageToolResultWidget::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolResultWidget_OnEventFilter(TextGrammarCheck__LanguageToolResultWidget* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->setTextGrammarCheck__LanguageToolResultWidget_EventFilter_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolResultWidget::TextGrammarCheck__LanguageToolResultWidget_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_TimerEvent(TextGrammarCheck__LanguageToolResultWidget* self, QTimerEvent* event) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->timerEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolResultWidget*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_SuperTimerEvent(TextGrammarCheck__LanguageToolResultWidget* self, QTimerEvent* event) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->setTextGrammarCheck__LanguageToolResultWidget_TimerEvent_IsBase(true);
        vtextgrammarchecklanguagetoolresultwidget->timerEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolResultWidget*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolResultWidget_OnTimerEvent(TextGrammarCheck__LanguageToolResultWidget* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->setTextGrammarCheck__LanguageToolResultWidget_TimerEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolResultWidget::TextGrammarCheck__LanguageToolResultWidget_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_ChildEvent(TextGrammarCheck__LanguageToolResultWidget* self, QChildEvent* event) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->childEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolResultWidget*)self)->childEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_SuperChildEvent(TextGrammarCheck__LanguageToolResultWidget* self, QChildEvent* event) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->setTextGrammarCheck__LanguageToolResultWidget_ChildEvent_IsBase(true);
        vtextgrammarchecklanguagetoolresultwidget->childEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolResultWidget*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolResultWidget_OnChildEvent(TextGrammarCheck__LanguageToolResultWidget* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->setTextGrammarCheck__LanguageToolResultWidget_ChildEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolResultWidget::TextGrammarCheck__LanguageToolResultWidget_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_CustomEvent(TextGrammarCheck__LanguageToolResultWidget* self, QEvent* event) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->customEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolResultWidget*)self)->customEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_SuperCustomEvent(TextGrammarCheck__LanguageToolResultWidget* self, QEvent* event) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->setTextGrammarCheck__LanguageToolResultWidget_CustomEvent_IsBase(true);
        vtextgrammarchecklanguagetoolresultwidget->customEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolResultWidget*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolResultWidget_OnCustomEvent(TextGrammarCheck__LanguageToolResultWidget* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->setTextGrammarCheck__LanguageToolResultWidget_CustomEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolResultWidget::TextGrammarCheck__LanguageToolResultWidget_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_ConnectNotify(TextGrammarCheck__LanguageToolResultWidget* self, const QMetaMethod* signal) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->connectNotify(*signal);
    } else {
        ((VirtualTextGrammarCheckLanguageToolResultWidget*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_SuperConnectNotify(TextGrammarCheck__LanguageToolResultWidget* self, const QMetaMethod* signal) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->setTextGrammarCheck__LanguageToolResultWidget_ConnectNotify_IsBase(true);
        vtextgrammarchecklanguagetoolresultwidget->connectNotify(*signal);
    } else {
        ((VirtualTextGrammarCheckLanguageToolResultWidget*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolResultWidget_OnConnectNotify(TextGrammarCheck__LanguageToolResultWidget* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->setTextGrammarCheck__LanguageToolResultWidget_ConnectNotify_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolResultWidget::TextGrammarCheck__LanguageToolResultWidget_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_DisconnectNotify(TextGrammarCheck__LanguageToolResultWidget* self, const QMetaMethod* signal) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->disconnectNotify(*signal);
    } else {
        ((VirtualTextGrammarCheckLanguageToolResultWidget*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_SuperDisconnectNotify(TextGrammarCheck__LanguageToolResultWidget* self, const QMetaMethod* signal) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->setTextGrammarCheck__LanguageToolResultWidget_DisconnectNotify_IsBase(true);
        vtextgrammarchecklanguagetoolresultwidget->disconnectNotify(*signal);
    } else {
        ((VirtualTextGrammarCheckLanguageToolResultWidget*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolResultWidget_OnDisconnectNotify(TextGrammarCheck__LanguageToolResultWidget* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->setTextGrammarCheck__LanguageToolResultWidget_DisconnectNotify_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolResultWidget::TextGrammarCheck__LanguageToolResultWidget_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_UpdateMicroFocus(TextGrammarCheck__LanguageToolResultWidget* self) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->updateMicroFocus();
    } else {
        ((VirtualTextGrammarCheckLanguageToolResultWidget*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_SuperUpdateMicroFocus(TextGrammarCheck__LanguageToolResultWidget* self) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->setTextGrammarCheck__LanguageToolResultWidget_UpdateMicroFocus_IsBase(true);
        vtextgrammarchecklanguagetoolresultwidget->updateMicroFocus();
    } else {
        ((VirtualTextGrammarCheckLanguageToolResultWidget*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolResultWidget_OnUpdateMicroFocus(TextGrammarCheck__LanguageToolResultWidget* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->setTextGrammarCheck__LanguageToolResultWidget_UpdateMicroFocus_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolResultWidget::TextGrammarCheck__LanguageToolResultWidget_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_Create(TextGrammarCheck__LanguageToolResultWidget* self) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->create();
    } else {
        ((VirtualTextGrammarCheckLanguageToolResultWidget*)self)->create();
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_SuperCreate(TextGrammarCheck__LanguageToolResultWidget* self) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->setTextGrammarCheck__LanguageToolResultWidget_Create_IsBase(true);
        vtextgrammarchecklanguagetoolresultwidget->create();
    } else {
        ((VirtualTextGrammarCheckLanguageToolResultWidget*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolResultWidget_OnCreate(TextGrammarCheck__LanguageToolResultWidget* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->setTextGrammarCheck__LanguageToolResultWidget_Create_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolResultWidget::TextGrammarCheck__LanguageToolResultWidget_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_Destroy(TextGrammarCheck__LanguageToolResultWidget* self) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->destroy();
    } else {
        ((VirtualTextGrammarCheckLanguageToolResultWidget*)self)->destroy();
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolResultWidget_SuperDestroy(TextGrammarCheck__LanguageToolResultWidget* self) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->setTextGrammarCheck__LanguageToolResultWidget_Destroy_IsBase(true);
        vtextgrammarchecklanguagetoolresultwidget->destroy();
    } else {
        ((VirtualTextGrammarCheckLanguageToolResultWidget*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolResultWidget_OnDestroy(TextGrammarCheck__LanguageToolResultWidget* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->setTextGrammarCheck__LanguageToolResultWidget_Destroy_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolResultWidget::TextGrammarCheck__LanguageToolResultWidget_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextGrammarCheck__LanguageToolResultWidget_FocusNextChild(TextGrammarCheck__LanguageToolResultWidget* self) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        return vtextgrammarchecklanguagetoolresultwidget->focusNextChild();
    } else {
        return ((VirtualTextGrammarCheckLanguageToolResultWidget*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool TextGrammarCheck__LanguageToolResultWidget_SuperFocusNextChild(TextGrammarCheck__LanguageToolResultWidget* self) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->setTextGrammarCheck__LanguageToolResultWidget_FocusNextChild_IsBase(true);
        return vtextgrammarchecklanguagetoolresultwidget->focusNextChild();
    } else {
        return ((VirtualTextGrammarCheckLanguageToolResultWidget*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolResultWidget_OnFocusNextChild(TextGrammarCheck__LanguageToolResultWidget* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->setTextGrammarCheck__LanguageToolResultWidget_FocusNextChild_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolResultWidget::TextGrammarCheck__LanguageToolResultWidget_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextGrammarCheck__LanguageToolResultWidget_FocusPreviousChild(TextGrammarCheck__LanguageToolResultWidget* self) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        return vtextgrammarchecklanguagetoolresultwidget->focusPreviousChild();
    } else {
        return ((VirtualTextGrammarCheckLanguageToolResultWidget*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool TextGrammarCheck__LanguageToolResultWidget_SuperFocusPreviousChild(TextGrammarCheck__LanguageToolResultWidget* self) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->setTextGrammarCheck__LanguageToolResultWidget_FocusPreviousChild_IsBase(true);
        return vtextgrammarchecklanguagetoolresultwidget->focusPreviousChild();
    } else {
        return ((VirtualTextGrammarCheckLanguageToolResultWidget*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolResultWidget_OnFocusPreviousChild(TextGrammarCheck__LanguageToolResultWidget* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolresultwidget = dynamic_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(self);
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->setTextGrammarCheck__LanguageToolResultWidget_FocusPreviousChild_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolResultWidget::TextGrammarCheck__LanguageToolResultWidget_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* TextGrammarCheck__LanguageToolResultWidget_Sender(const TextGrammarCheck__LanguageToolResultWidget* self) {
    auto* vtextgrammarchecklanguagetoolresultwidget = const_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolResultWidget*>(self));
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        return vtextgrammarchecklanguagetoolresultwidget->sender();
    } else {
        return ((VirtualTextGrammarCheckLanguageToolResultWidget*)self)->sender();
    }
}

// Base class handler implementation
QObject* TextGrammarCheck__LanguageToolResultWidget_SuperSender(const TextGrammarCheck__LanguageToolResultWidget* self) {
    auto* vtextgrammarchecklanguagetoolresultwidget = const_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolResultWidget*>(self));
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->setTextGrammarCheck__LanguageToolResultWidget_Sender_IsBase(true);
        return vtextgrammarchecklanguagetoolresultwidget->sender();
    } else {
        return ((VirtualTextGrammarCheckLanguageToolResultWidget*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolResultWidget_OnSender(const TextGrammarCheck__LanguageToolResultWidget* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolresultwidget = const_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolResultWidget*>(self));
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->setTextGrammarCheck__LanguageToolResultWidget_Sender_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolResultWidget::TextGrammarCheck__LanguageToolResultWidget_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int TextGrammarCheck__LanguageToolResultWidget_SenderSignalIndex(const TextGrammarCheck__LanguageToolResultWidget* self) {
    auto* vtextgrammarchecklanguagetoolresultwidget = const_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolResultWidget*>(self));
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        return vtextgrammarchecklanguagetoolresultwidget->senderSignalIndex();
    } else {
        return ((VirtualTextGrammarCheckLanguageToolResultWidget*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int TextGrammarCheck__LanguageToolResultWidget_SuperSenderSignalIndex(const TextGrammarCheck__LanguageToolResultWidget* self) {
    auto* vtextgrammarchecklanguagetoolresultwidget = const_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolResultWidget*>(self));
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->setTextGrammarCheck__LanguageToolResultWidget_SenderSignalIndex_IsBase(true);
        return vtextgrammarchecklanguagetoolresultwidget->senderSignalIndex();
    } else {
        return ((VirtualTextGrammarCheckLanguageToolResultWidget*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolResultWidget_OnSenderSignalIndex(const TextGrammarCheck__LanguageToolResultWidget* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolresultwidget = const_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolResultWidget*>(self));
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->setTextGrammarCheck__LanguageToolResultWidget_SenderSignalIndex_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolResultWidget::TextGrammarCheck__LanguageToolResultWidget_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int TextGrammarCheck__LanguageToolResultWidget_Receivers(const TextGrammarCheck__LanguageToolResultWidget* self, const char* signal) {
    auto* vtextgrammarchecklanguagetoolresultwidget = const_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolResultWidget*>(self));
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        return vtextgrammarchecklanguagetoolresultwidget->receivers(signal);
    } else {
        return ((VirtualTextGrammarCheckLanguageToolResultWidget*)self)->receivers(signal);
    }
}

// Base class handler implementation
int TextGrammarCheck__LanguageToolResultWidget_SuperReceivers(const TextGrammarCheck__LanguageToolResultWidget* self, const char* signal) {
    auto* vtextgrammarchecklanguagetoolresultwidget = const_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolResultWidget*>(self));
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->setTextGrammarCheck__LanguageToolResultWidget_Receivers_IsBase(true);
        return vtextgrammarchecklanguagetoolresultwidget->receivers(signal);
    } else {
        return ((VirtualTextGrammarCheckLanguageToolResultWidget*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolResultWidget_OnReceivers(const TextGrammarCheck__LanguageToolResultWidget* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolresultwidget = const_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolResultWidget*>(self));
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->setTextGrammarCheck__LanguageToolResultWidget_Receivers_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolResultWidget::TextGrammarCheck__LanguageToolResultWidget_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextGrammarCheck__LanguageToolResultWidget_IsSignalConnected(const TextGrammarCheck__LanguageToolResultWidget* self, const QMetaMethod* signal) {
    auto* vtextgrammarchecklanguagetoolresultwidget = const_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolResultWidget*>(self));
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        return vtextgrammarchecklanguagetoolresultwidget->isSignalConnected(*signal);
    } else {
        return ((VirtualTextGrammarCheckLanguageToolResultWidget*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool TextGrammarCheck__LanguageToolResultWidget_SuperIsSignalConnected(const TextGrammarCheck__LanguageToolResultWidget* self, const QMetaMethod* signal) {
    auto* vtextgrammarchecklanguagetoolresultwidget = const_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolResultWidget*>(self));
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->setTextGrammarCheck__LanguageToolResultWidget_IsSignalConnected_IsBase(true);
        return vtextgrammarchecklanguagetoolresultwidget->isSignalConnected(*signal);
    } else {
        return ((VirtualTextGrammarCheckLanguageToolResultWidget*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolResultWidget_OnIsSignalConnected(const TextGrammarCheck__LanguageToolResultWidget* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolresultwidget = const_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolResultWidget*>(self));
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->setTextGrammarCheck__LanguageToolResultWidget_IsSignalConnected_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolResultWidget::TextGrammarCheck__LanguageToolResultWidget_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double TextGrammarCheck__LanguageToolResultWidget_GetDecodedMetricF(const TextGrammarCheck__LanguageToolResultWidget* self, int metricA, int metricB) {
    auto* vtextgrammarchecklanguagetoolresultwidget = const_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolResultWidget*>(self));
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        return vtextgrammarchecklanguagetoolresultwidget->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualTextGrammarCheckLanguageToolResultWidget*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double TextGrammarCheck__LanguageToolResultWidget_SuperGetDecodedMetricF(const TextGrammarCheck__LanguageToolResultWidget* self, int metricA, int metricB) {
    auto* vtextgrammarchecklanguagetoolresultwidget = const_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolResultWidget*>(self));
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->setTextGrammarCheck__LanguageToolResultWidget_GetDecodedMetricF_IsBase(true);
        return vtextgrammarchecklanguagetoolresultwidget->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualTextGrammarCheckLanguageToolResultWidget*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolResultWidget_OnGetDecodedMetricF(const TextGrammarCheck__LanguageToolResultWidget* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolresultwidget = const_cast<VirtualTextGrammarCheckLanguageToolResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolResultWidget*>(self));
    if (vtextgrammarchecklanguagetoolresultwidget && vtextgrammarchecklanguagetoolresultwidget->isVirtualTextGrammarCheckLanguageToolResultWidget) {
        vtextgrammarchecklanguagetoolresultwidget->setTextGrammarCheck__LanguageToolResultWidget_GetDecodedMetricF_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolResultWidget::TextGrammarCheck__LanguageToolResultWidget_GetDecodedMetricF_Callback>(slot));
    }
}

void TextGrammarCheck__LanguageToolResultWidget_Delete(TextGrammarCheck__LanguageToolResultWidget* self) {
    delete self;
}
