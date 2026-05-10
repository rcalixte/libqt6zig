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
#include <QVector>
#include <QWheelEvent>
#include <QWidget>
#define WORKAROUND_INNER_CLASS_DEFINITION_TextGrammarCheck__GrammarAction
#define WORKAROUND_INNER_CLASS_DEFINITION_TextGrammarCheck__GrammarError
#define WORKAROUND_INNER_CLASS_DEFINITION_TextGrammarCheck__GrammarResultWidget
#include <grammarresultwidget.h>
#include "libgrammarresultwidget.h"
#include "libgrammarresultwidget.hxx"

TextGrammarCheck__GrammarResultWidget* TextGrammarCheck__GrammarResultWidget_new(QWidget* parent) {
    return new VirtualTextGrammarCheckGrammarResultWidget(parent);
}

TextGrammarCheck__GrammarResultWidget* TextGrammarCheck__GrammarResultWidget_new2() {
    return new VirtualTextGrammarCheckGrammarResultWidget();
}

QMetaObject* TextGrammarCheck__GrammarResultWidget_MetaObject(const TextGrammarCheck__GrammarResultWidget* self) {
    auto* vtextgrammarcheck__grammarresultwidget = dynamic_cast<const VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheck__grammarresultwidget && vtextgrammarcheck__grammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        return (QMetaObject*)self->metaObject();
    } else {
        return (QMetaObject*)((VirtualTextGrammarCheckGrammarResultWidget*)self)->metaObject();
    }
}

void* TextGrammarCheck__GrammarResultWidget_Metacast(TextGrammarCheck__GrammarResultWidget* self, const char* param1) {
    auto* vtextgrammarcheck__grammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheck__grammarresultwidget && vtextgrammarcheck__grammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        return self->qt_metacast(param1);
    } else {
        return ((VirtualTextGrammarCheckGrammarResultWidget*)self)->qt_metacast(param1);
    }
}

int TextGrammarCheck__GrammarResultWidget_Metacall(TextGrammarCheck__GrammarResultWidget* self, int param1, int param2, void** param3) {
    auto* vtextgrammarcheck__grammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheck__grammarresultwidget && vtextgrammarcheck__grammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualTextGrammarCheckGrammarResultWidget*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

void TextGrammarCheck__GrammarResultWidget_SetText(TextGrammarCheck__GrammarResultWidget* self, const libqt_string str) {
    QString str_QString = QString::fromUtf8(str.data, str.len);
    self->setText(str_QString);
}

void TextGrammarCheck__GrammarResultWidget_CheckGrammar(TextGrammarCheck__GrammarResultWidget* self) {
    auto* vtextgrammarcheck__grammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheck__grammarresultwidget && vtextgrammarcheck__grammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheck__grammarresultwidget->checkGrammar();
    } else {
        ((VirtualTextGrammarCheckGrammarResultWidget*)self)->checkGrammar();
    }
}

void TextGrammarCheck__GrammarResultWidget_ApplyGrammarResult(TextGrammarCheck__GrammarResultWidget* self, const libqt_list /* of TextGrammarCheck__GrammarError* */ infos) {
    QVector<TextGrammarCheck::GrammarError> infos_QVector;
    infos_QVector.reserve(infos.len);
    TextGrammarCheck__GrammarError** infos_arr = static_cast<TextGrammarCheck__GrammarError**>(infos.data);
    for (size_t i = 0; i < infos.len; ++i) {
        infos_QVector.push_back(*(infos_arr[i]));
    }
    self->applyGrammarResult(infos_QVector);
}

void TextGrammarCheck__GrammarResultWidget_ReplaceText(TextGrammarCheck__GrammarResultWidget* self, const TextGrammarCheck__GrammarAction* act) {
    self->replaceText(*act);
}

void TextGrammarCheck__GrammarResultWidget_Connect_ReplaceText(TextGrammarCheck__GrammarResultWidget* self, intptr_t slot) {
    void (*slotFunc)(TextGrammarCheck__GrammarResultWidget*, TextGrammarCheck__GrammarAction*) = reinterpret_cast<void (*)(TextGrammarCheck__GrammarResultWidget*, TextGrammarCheck__GrammarAction*)>(slot);
    TextGrammarCheck::GrammarResultWidget::connect(self, &TextGrammarCheck::GrammarResultWidget::replaceText, [self, slotFunc](const TextGrammarCheck::GrammarAction& act) {
        const TextGrammarCheck::GrammarAction& act_ret = act;
        // Cast returned reference into pointer
        TextGrammarCheck__GrammarAction* sigval1 = const_cast<TextGrammarCheck::GrammarAction*>(&act_ret);
        slotFunc(self, sigval1);
    });
}

void TextGrammarCheck__GrammarResultWidget_CheckAgain(TextGrammarCheck__GrammarResultWidget* self) {
    self->checkAgain();
}

void TextGrammarCheck__GrammarResultWidget_Connect_CheckAgain(TextGrammarCheck__GrammarResultWidget* self, intptr_t slot) {
    void (*slotFunc)(TextGrammarCheck__GrammarResultWidget*) = reinterpret_cast<void (*)(TextGrammarCheck__GrammarResultWidget*)>(slot);
    TextGrammarCheck::GrammarResultWidget::connect(self, &TextGrammarCheck::GrammarResultWidget::checkAgain, [self, slotFunc]() {
        slotFunc(self);
    });
}

void TextGrammarCheck__GrammarResultWidget_CloseChecker(TextGrammarCheck__GrammarResultWidget* self) {
    self->closeChecker();
}

void TextGrammarCheck__GrammarResultWidget_Connect_CloseChecker(TextGrammarCheck__GrammarResultWidget* self, intptr_t slot) {
    void (*slotFunc)(TextGrammarCheck__GrammarResultWidget*) = reinterpret_cast<void (*)(TextGrammarCheck__GrammarResultWidget*)>(slot);
    TextGrammarCheck::GrammarResultWidget::connect(self, &TextGrammarCheck::GrammarResultWidget::closeChecker, [self, slotFunc]() {
        slotFunc(self);
    });
}

void TextGrammarCheck__GrammarResultWidget_Configure(TextGrammarCheck__GrammarResultWidget* self) {
    self->configure();
}

void TextGrammarCheck__GrammarResultWidget_Connect_Configure(TextGrammarCheck__GrammarResultWidget* self, intptr_t slot) {
    void (*slotFunc)(TextGrammarCheck__GrammarResultWidget*) = reinterpret_cast<void (*)(TextGrammarCheck__GrammarResultWidget*)>(slot);
    TextGrammarCheck::GrammarResultWidget::connect(self, &TextGrammarCheck::GrammarResultWidget::configure, [self, slotFunc]() {
        slotFunc(self);
    });
}

void TextGrammarCheck__GrammarResultWidget_AddExtraWidget(TextGrammarCheck__GrammarResultWidget* self) {
    auto* vtextgrammarcheck__grammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheck__grammarresultwidget && vtextgrammarcheck__grammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheck__grammarresultwidget->addExtraWidget();
    }
}

// Base class handler implementation
QMetaObject* TextGrammarCheck__GrammarResultWidget_SuperMetaObject(const TextGrammarCheck__GrammarResultWidget* self) {
    auto* vtextgrammarcheckgrammarresultwidget = const_cast<VirtualTextGrammarCheckGrammarResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultWidget*>(self));
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->setTextGrammarCheck__GrammarResultWidget_MetaObject_IsBase(true);
        return (QMetaObject*)vtextgrammarcheckgrammarresultwidget->metaObject();
    } else {
        return (QMetaObject*)self->TextGrammarCheck::GrammarResultWidget::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultWidget_OnMetaObject(const TextGrammarCheck__GrammarResultWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammarresultwidget = const_cast<VirtualTextGrammarCheckGrammarResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultWidget*>(self));
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->setTextGrammarCheck__GrammarResultWidget_MetaObject_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammarResultWidget::TextGrammarCheck__GrammarResultWidget_MetaObject_Callback>(slot));
    }
}

// Base class handler implementation
void* TextGrammarCheck__GrammarResultWidget_SuperMetacast(TextGrammarCheck__GrammarResultWidget* self, const char* param1) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->setTextGrammarCheck__GrammarResultWidget_Metacast_IsBase(true);
        return vtextgrammarcheckgrammarresultwidget->qt_metacast(param1);
    } else {
        return self->TextGrammarCheck::GrammarResultWidget::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultWidget_OnMetacast(TextGrammarCheck__GrammarResultWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->setTextGrammarCheck__GrammarResultWidget_Metacast_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammarResultWidget::TextGrammarCheck__GrammarResultWidget_Metacast_Callback>(slot));
    }
}

// Base class handler implementation
int TextGrammarCheck__GrammarResultWidget_SuperMetacall(TextGrammarCheck__GrammarResultWidget* self, int param1, int param2, void** param3) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->setTextGrammarCheck__GrammarResultWidget_Metacall_IsBase(true);
        return vtextgrammarcheckgrammarresultwidget->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->TextGrammarCheck::GrammarResultWidget::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultWidget_OnMetacall(TextGrammarCheck__GrammarResultWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->setTextGrammarCheck__GrammarResultWidget_Metacall_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammarResultWidget::TextGrammarCheck__GrammarResultWidget_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultWidget_SuperCheckGrammar(TextGrammarCheck__GrammarResultWidget* self) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->setTextGrammarCheck__GrammarResultWidget_CheckGrammar_IsBase(true);
        vtextgrammarcheckgrammarresultwidget->checkGrammar();
    } else {
        ((VirtualTextGrammarCheckGrammarResultWidget*)self)->checkGrammar();
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultWidget_OnCheckGrammar(TextGrammarCheck__GrammarResultWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->setTextGrammarCheck__GrammarResultWidget_CheckGrammar_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammarResultWidget::TextGrammarCheck__GrammarResultWidget_CheckGrammar_Callback>(slot));
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultWidget_SuperAddExtraWidget(TextGrammarCheck__GrammarResultWidget* self) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->setTextGrammarCheck__GrammarResultWidget_AddExtraWidget_IsBase(true);
        vtextgrammarcheckgrammarresultwidget->addExtraWidget();
    } else {
        ((VirtualTextGrammarCheckGrammarResultWidget*)self)->addExtraWidget();
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultWidget_OnAddExtraWidget(TextGrammarCheck__GrammarResultWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->setTextGrammarCheck__GrammarResultWidget_AddExtraWidget_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammarResultWidget::TextGrammarCheck__GrammarResultWidget_AddExtraWidget_Callback>(slot));
    }
}

// Derived class handler implementation
int TextGrammarCheck__GrammarResultWidget_DevType(const TextGrammarCheck__GrammarResultWidget* self) {
    auto* vtextgrammarcheckgrammarresultwidget = const_cast<VirtualTextGrammarCheckGrammarResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultWidget*>(self));
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        return vtextgrammarcheckgrammarresultwidget->devType();
    } else {
        return self->TextGrammarCheck::GrammarResultWidget::devType();
    }
}

// Base class handler implementation
int TextGrammarCheck__GrammarResultWidget_SuperDevType(const TextGrammarCheck__GrammarResultWidget* self) {
    auto* vtextgrammarcheckgrammarresultwidget = const_cast<VirtualTextGrammarCheckGrammarResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultWidget*>(self));
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->setTextGrammarCheck__GrammarResultWidget_DevType_IsBase(true);
        return vtextgrammarcheckgrammarresultwidget->devType();
    } else {
        return self->TextGrammarCheck::GrammarResultWidget::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultWidget_OnDevType(const TextGrammarCheck__GrammarResultWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammarresultwidget = const_cast<VirtualTextGrammarCheckGrammarResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultWidget*>(self));
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->setTextGrammarCheck__GrammarResultWidget_DevType_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammarResultWidget::TextGrammarCheck__GrammarResultWidget_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultWidget_SetVisible(TextGrammarCheck__GrammarResultWidget* self, bool visible) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->setVisible(visible);
    } else {
        self->TextGrammarCheck::GrammarResultWidget::setVisible(visible);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultWidget_SuperSetVisible(TextGrammarCheck__GrammarResultWidget* self, bool visible) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->setTextGrammarCheck__GrammarResultWidget_SetVisible_IsBase(true);
        vtextgrammarcheckgrammarresultwidget->setVisible(visible);
    } else {
        self->TextGrammarCheck::GrammarResultWidget::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultWidget_OnSetVisible(TextGrammarCheck__GrammarResultWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->setTextGrammarCheck__GrammarResultWidget_SetVisible_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammarResultWidget::TextGrammarCheck__GrammarResultWidget_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* TextGrammarCheck__GrammarResultWidget_SizeHint(const TextGrammarCheck__GrammarResultWidget* self) {
    auto* vtextgrammarcheckgrammarresultwidget = const_cast<VirtualTextGrammarCheckGrammarResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultWidget*>(self));
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        return new QSize(vtextgrammarcheckgrammarresultwidget->sizeHint());
    } else {
        return new QSize(((VirtualTextGrammarCheckGrammarResultWidget*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* TextGrammarCheck__GrammarResultWidget_SuperSizeHint(const TextGrammarCheck__GrammarResultWidget* self) {
    auto* vtextgrammarcheckgrammarresultwidget = const_cast<VirtualTextGrammarCheckGrammarResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultWidget*>(self));
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->setTextGrammarCheck__GrammarResultWidget_SizeHint_IsBase(true);
        return new QSize(vtextgrammarcheckgrammarresultwidget->sizeHint());
    } else {
        return new QSize(((VirtualTextGrammarCheckGrammarResultWidget*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultWidget_OnSizeHint(const TextGrammarCheck__GrammarResultWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammarresultwidget = const_cast<VirtualTextGrammarCheckGrammarResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultWidget*>(self));
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->setTextGrammarCheck__GrammarResultWidget_SizeHint_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammarResultWidget::TextGrammarCheck__GrammarResultWidget_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* TextGrammarCheck__GrammarResultWidget_MinimumSizeHint(const TextGrammarCheck__GrammarResultWidget* self) {
    auto* vtextgrammarcheckgrammarresultwidget = const_cast<VirtualTextGrammarCheckGrammarResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultWidget*>(self));
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        return new QSize(vtextgrammarcheckgrammarresultwidget->minimumSizeHint());
    } else {
        return new QSize(((VirtualTextGrammarCheckGrammarResultWidget*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* TextGrammarCheck__GrammarResultWidget_SuperMinimumSizeHint(const TextGrammarCheck__GrammarResultWidget* self) {
    auto* vtextgrammarcheckgrammarresultwidget = const_cast<VirtualTextGrammarCheckGrammarResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultWidget*>(self));
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->setTextGrammarCheck__GrammarResultWidget_MinimumSizeHint_IsBase(true);
        return new QSize(vtextgrammarcheckgrammarresultwidget->minimumSizeHint());
    } else {
        return new QSize(((VirtualTextGrammarCheckGrammarResultWidget*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultWidget_OnMinimumSizeHint(const TextGrammarCheck__GrammarResultWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammarresultwidget = const_cast<VirtualTextGrammarCheckGrammarResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultWidget*>(self));
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->setTextGrammarCheck__GrammarResultWidget_MinimumSizeHint_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammarResultWidget::TextGrammarCheck__GrammarResultWidget_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
int TextGrammarCheck__GrammarResultWidget_HeightForWidth(const TextGrammarCheck__GrammarResultWidget* self, int param1) {
    auto* vtextgrammarcheckgrammarresultwidget = const_cast<VirtualTextGrammarCheckGrammarResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultWidget*>(self));
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        return vtextgrammarcheckgrammarresultwidget->heightForWidth(static_cast<int>(param1));
    } else {
        return self->TextGrammarCheck::GrammarResultWidget::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int TextGrammarCheck__GrammarResultWidget_SuperHeightForWidth(const TextGrammarCheck__GrammarResultWidget* self, int param1) {
    auto* vtextgrammarcheckgrammarresultwidget = const_cast<VirtualTextGrammarCheckGrammarResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultWidget*>(self));
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->setTextGrammarCheck__GrammarResultWidget_HeightForWidth_IsBase(true);
        return vtextgrammarcheckgrammarresultwidget->heightForWidth(static_cast<int>(param1));
    } else {
        return self->TextGrammarCheck::GrammarResultWidget::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultWidget_OnHeightForWidth(const TextGrammarCheck__GrammarResultWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammarresultwidget = const_cast<VirtualTextGrammarCheckGrammarResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultWidget*>(self));
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->setTextGrammarCheck__GrammarResultWidget_HeightForWidth_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammarResultWidget::TextGrammarCheck__GrammarResultWidget_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextGrammarCheck__GrammarResultWidget_HasHeightForWidth(const TextGrammarCheck__GrammarResultWidget* self) {
    auto* vtextgrammarcheckgrammarresultwidget = const_cast<VirtualTextGrammarCheckGrammarResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultWidget*>(self));
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        return vtextgrammarcheckgrammarresultwidget->hasHeightForWidth();
    } else {
        return self->TextGrammarCheck::GrammarResultWidget::hasHeightForWidth();
    }
}

// Base class handler implementation
bool TextGrammarCheck__GrammarResultWidget_SuperHasHeightForWidth(const TextGrammarCheck__GrammarResultWidget* self) {
    auto* vtextgrammarcheckgrammarresultwidget = const_cast<VirtualTextGrammarCheckGrammarResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultWidget*>(self));
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->setTextGrammarCheck__GrammarResultWidget_HasHeightForWidth_IsBase(true);
        return vtextgrammarcheckgrammarresultwidget->hasHeightForWidth();
    } else {
        return self->TextGrammarCheck::GrammarResultWidget::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultWidget_OnHasHeightForWidth(const TextGrammarCheck__GrammarResultWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammarresultwidget = const_cast<VirtualTextGrammarCheckGrammarResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultWidget*>(self));
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->setTextGrammarCheck__GrammarResultWidget_HasHeightForWidth_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammarResultWidget::TextGrammarCheck__GrammarResultWidget_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* TextGrammarCheck__GrammarResultWidget_PaintEngine(const TextGrammarCheck__GrammarResultWidget* self) {
    auto* vtextgrammarcheckgrammarresultwidget = const_cast<VirtualTextGrammarCheckGrammarResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultWidget*>(self));
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        return vtextgrammarcheckgrammarresultwidget->paintEngine();
    } else {
        return self->TextGrammarCheck::GrammarResultWidget::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* TextGrammarCheck__GrammarResultWidget_SuperPaintEngine(const TextGrammarCheck__GrammarResultWidget* self) {
    auto* vtextgrammarcheckgrammarresultwidget = const_cast<VirtualTextGrammarCheckGrammarResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultWidget*>(self));
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->setTextGrammarCheck__GrammarResultWidget_PaintEngine_IsBase(true);
        return vtextgrammarcheckgrammarresultwidget->paintEngine();
    } else {
        return self->TextGrammarCheck::GrammarResultWidget::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultWidget_OnPaintEngine(const TextGrammarCheck__GrammarResultWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammarresultwidget = const_cast<VirtualTextGrammarCheckGrammarResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultWidget*>(self));
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->setTextGrammarCheck__GrammarResultWidget_PaintEngine_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammarResultWidget::TextGrammarCheck__GrammarResultWidget_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextGrammarCheck__GrammarResultWidget_Event(TextGrammarCheck__GrammarResultWidget* self, QEvent* event) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        return vtextgrammarcheckgrammarresultwidget->event(event);
    } else {
        return ((VirtualTextGrammarCheckGrammarResultWidget*)self)->event(event);
    }
}

// Base class handler implementation
bool TextGrammarCheck__GrammarResultWidget_SuperEvent(TextGrammarCheck__GrammarResultWidget* self, QEvent* event) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->setTextGrammarCheck__GrammarResultWidget_Event_IsBase(true);
        return vtextgrammarcheckgrammarresultwidget->event(event);
    } else {
        return ((VirtualTextGrammarCheckGrammarResultWidget*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultWidget_OnEvent(TextGrammarCheck__GrammarResultWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->setTextGrammarCheck__GrammarResultWidget_Event_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammarResultWidget::TextGrammarCheck__GrammarResultWidget_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultWidget_MousePressEvent(TextGrammarCheck__GrammarResultWidget* self, QMouseEvent* event) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->mousePressEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammarResultWidget*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultWidget_SuperMousePressEvent(TextGrammarCheck__GrammarResultWidget* self, QMouseEvent* event) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->setTextGrammarCheck__GrammarResultWidget_MousePressEvent_IsBase(true);
        vtextgrammarcheckgrammarresultwidget->mousePressEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammarResultWidget*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultWidget_OnMousePressEvent(TextGrammarCheck__GrammarResultWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->setTextGrammarCheck__GrammarResultWidget_MousePressEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammarResultWidget::TextGrammarCheck__GrammarResultWidget_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultWidget_MouseReleaseEvent(TextGrammarCheck__GrammarResultWidget* self, QMouseEvent* event) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->mouseReleaseEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammarResultWidget*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultWidget_SuperMouseReleaseEvent(TextGrammarCheck__GrammarResultWidget* self, QMouseEvent* event) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->setTextGrammarCheck__GrammarResultWidget_MouseReleaseEvent_IsBase(true);
        vtextgrammarcheckgrammarresultwidget->mouseReleaseEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammarResultWidget*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultWidget_OnMouseReleaseEvent(TextGrammarCheck__GrammarResultWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->setTextGrammarCheck__GrammarResultWidget_MouseReleaseEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammarResultWidget::TextGrammarCheck__GrammarResultWidget_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultWidget_MouseDoubleClickEvent(TextGrammarCheck__GrammarResultWidget* self, QMouseEvent* event) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->mouseDoubleClickEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammarResultWidget*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultWidget_SuperMouseDoubleClickEvent(TextGrammarCheck__GrammarResultWidget* self, QMouseEvent* event) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->setTextGrammarCheck__GrammarResultWidget_MouseDoubleClickEvent_IsBase(true);
        vtextgrammarcheckgrammarresultwidget->mouseDoubleClickEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammarResultWidget*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultWidget_OnMouseDoubleClickEvent(TextGrammarCheck__GrammarResultWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->setTextGrammarCheck__GrammarResultWidget_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammarResultWidget::TextGrammarCheck__GrammarResultWidget_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultWidget_MouseMoveEvent(TextGrammarCheck__GrammarResultWidget* self, QMouseEvent* event) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->mouseMoveEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammarResultWidget*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultWidget_SuperMouseMoveEvent(TextGrammarCheck__GrammarResultWidget* self, QMouseEvent* event) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->setTextGrammarCheck__GrammarResultWidget_MouseMoveEvent_IsBase(true);
        vtextgrammarcheckgrammarresultwidget->mouseMoveEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammarResultWidget*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultWidget_OnMouseMoveEvent(TextGrammarCheck__GrammarResultWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->setTextGrammarCheck__GrammarResultWidget_MouseMoveEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammarResultWidget::TextGrammarCheck__GrammarResultWidget_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultWidget_WheelEvent(TextGrammarCheck__GrammarResultWidget* self, QWheelEvent* event) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->wheelEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammarResultWidget*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultWidget_SuperWheelEvent(TextGrammarCheck__GrammarResultWidget* self, QWheelEvent* event) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->setTextGrammarCheck__GrammarResultWidget_WheelEvent_IsBase(true);
        vtextgrammarcheckgrammarresultwidget->wheelEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammarResultWidget*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultWidget_OnWheelEvent(TextGrammarCheck__GrammarResultWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->setTextGrammarCheck__GrammarResultWidget_WheelEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammarResultWidget::TextGrammarCheck__GrammarResultWidget_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultWidget_KeyPressEvent(TextGrammarCheck__GrammarResultWidget* self, QKeyEvent* event) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->keyPressEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammarResultWidget*)self)->keyPressEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultWidget_SuperKeyPressEvent(TextGrammarCheck__GrammarResultWidget* self, QKeyEvent* event) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->setTextGrammarCheck__GrammarResultWidget_KeyPressEvent_IsBase(true);
        vtextgrammarcheckgrammarresultwidget->keyPressEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammarResultWidget*)self)->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultWidget_OnKeyPressEvent(TextGrammarCheck__GrammarResultWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->setTextGrammarCheck__GrammarResultWidget_KeyPressEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammarResultWidget::TextGrammarCheck__GrammarResultWidget_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultWidget_KeyReleaseEvent(TextGrammarCheck__GrammarResultWidget* self, QKeyEvent* event) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->keyReleaseEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammarResultWidget*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultWidget_SuperKeyReleaseEvent(TextGrammarCheck__GrammarResultWidget* self, QKeyEvent* event) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->setTextGrammarCheck__GrammarResultWidget_KeyReleaseEvent_IsBase(true);
        vtextgrammarcheckgrammarresultwidget->keyReleaseEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammarResultWidget*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultWidget_OnKeyReleaseEvent(TextGrammarCheck__GrammarResultWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->setTextGrammarCheck__GrammarResultWidget_KeyReleaseEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammarResultWidget::TextGrammarCheck__GrammarResultWidget_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultWidget_FocusInEvent(TextGrammarCheck__GrammarResultWidget* self, QFocusEvent* event) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->focusInEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammarResultWidget*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultWidget_SuperFocusInEvent(TextGrammarCheck__GrammarResultWidget* self, QFocusEvent* event) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->setTextGrammarCheck__GrammarResultWidget_FocusInEvent_IsBase(true);
        vtextgrammarcheckgrammarresultwidget->focusInEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammarResultWidget*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultWidget_OnFocusInEvent(TextGrammarCheck__GrammarResultWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->setTextGrammarCheck__GrammarResultWidget_FocusInEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammarResultWidget::TextGrammarCheck__GrammarResultWidget_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultWidget_FocusOutEvent(TextGrammarCheck__GrammarResultWidget* self, QFocusEvent* event) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->focusOutEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammarResultWidget*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultWidget_SuperFocusOutEvent(TextGrammarCheck__GrammarResultWidget* self, QFocusEvent* event) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->setTextGrammarCheck__GrammarResultWidget_FocusOutEvent_IsBase(true);
        vtextgrammarcheckgrammarresultwidget->focusOutEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammarResultWidget*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultWidget_OnFocusOutEvent(TextGrammarCheck__GrammarResultWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->setTextGrammarCheck__GrammarResultWidget_FocusOutEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammarResultWidget::TextGrammarCheck__GrammarResultWidget_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultWidget_EnterEvent(TextGrammarCheck__GrammarResultWidget* self, QEnterEvent* event) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->enterEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammarResultWidget*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultWidget_SuperEnterEvent(TextGrammarCheck__GrammarResultWidget* self, QEnterEvent* event) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->setTextGrammarCheck__GrammarResultWidget_EnterEvent_IsBase(true);
        vtextgrammarcheckgrammarresultwidget->enterEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammarResultWidget*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultWidget_OnEnterEvent(TextGrammarCheck__GrammarResultWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->setTextGrammarCheck__GrammarResultWidget_EnterEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammarResultWidget::TextGrammarCheck__GrammarResultWidget_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultWidget_LeaveEvent(TextGrammarCheck__GrammarResultWidget* self, QEvent* event) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->leaveEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammarResultWidget*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultWidget_SuperLeaveEvent(TextGrammarCheck__GrammarResultWidget* self, QEvent* event) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->setTextGrammarCheck__GrammarResultWidget_LeaveEvent_IsBase(true);
        vtextgrammarcheckgrammarresultwidget->leaveEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammarResultWidget*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultWidget_OnLeaveEvent(TextGrammarCheck__GrammarResultWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->setTextGrammarCheck__GrammarResultWidget_LeaveEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammarResultWidget::TextGrammarCheck__GrammarResultWidget_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultWidget_PaintEvent(TextGrammarCheck__GrammarResultWidget* self, QPaintEvent* event) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->paintEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammarResultWidget*)self)->paintEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultWidget_SuperPaintEvent(TextGrammarCheck__GrammarResultWidget* self, QPaintEvent* event) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->setTextGrammarCheck__GrammarResultWidget_PaintEvent_IsBase(true);
        vtextgrammarcheckgrammarresultwidget->paintEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammarResultWidget*)self)->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultWidget_OnPaintEvent(TextGrammarCheck__GrammarResultWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->setTextGrammarCheck__GrammarResultWidget_PaintEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammarResultWidget::TextGrammarCheck__GrammarResultWidget_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultWidget_MoveEvent(TextGrammarCheck__GrammarResultWidget* self, QMoveEvent* event) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->moveEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammarResultWidget*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultWidget_SuperMoveEvent(TextGrammarCheck__GrammarResultWidget* self, QMoveEvent* event) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->setTextGrammarCheck__GrammarResultWidget_MoveEvent_IsBase(true);
        vtextgrammarcheckgrammarresultwidget->moveEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammarResultWidget*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultWidget_OnMoveEvent(TextGrammarCheck__GrammarResultWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->setTextGrammarCheck__GrammarResultWidget_MoveEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammarResultWidget::TextGrammarCheck__GrammarResultWidget_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultWidget_ResizeEvent(TextGrammarCheck__GrammarResultWidget* self, QResizeEvent* event) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->resizeEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammarResultWidget*)self)->resizeEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultWidget_SuperResizeEvent(TextGrammarCheck__GrammarResultWidget* self, QResizeEvent* event) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->setTextGrammarCheck__GrammarResultWidget_ResizeEvent_IsBase(true);
        vtextgrammarcheckgrammarresultwidget->resizeEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammarResultWidget*)self)->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultWidget_OnResizeEvent(TextGrammarCheck__GrammarResultWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->setTextGrammarCheck__GrammarResultWidget_ResizeEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammarResultWidget::TextGrammarCheck__GrammarResultWidget_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultWidget_CloseEvent(TextGrammarCheck__GrammarResultWidget* self, QCloseEvent* event) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->closeEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammarResultWidget*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultWidget_SuperCloseEvent(TextGrammarCheck__GrammarResultWidget* self, QCloseEvent* event) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->setTextGrammarCheck__GrammarResultWidget_CloseEvent_IsBase(true);
        vtextgrammarcheckgrammarresultwidget->closeEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammarResultWidget*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultWidget_OnCloseEvent(TextGrammarCheck__GrammarResultWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->setTextGrammarCheck__GrammarResultWidget_CloseEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammarResultWidget::TextGrammarCheck__GrammarResultWidget_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultWidget_ContextMenuEvent(TextGrammarCheck__GrammarResultWidget* self, QContextMenuEvent* event) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->contextMenuEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammarResultWidget*)self)->contextMenuEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultWidget_SuperContextMenuEvent(TextGrammarCheck__GrammarResultWidget* self, QContextMenuEvent* event) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->setTextGrammarCheck__GrammarResultWidget_ContextMenuEvent_IsBase(true);
        vtextgrammarcheckgrammarresultwidget->contextMenuEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammarResultWidget*)self)->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultWidget_OnContextMenuEvent(TextGrammarCheck__GrammarResultWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->setTextGrammarCheck__GrammarResultWidget_ContextMenuEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammarResultWidget::TextGrammarCheck__GrammarResultWidget_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultWidget_TabletEvent(TextGrammarCheck__GrammarResultWidget* self, QTabletEvent* event) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->tabletEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammarResultWidget*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultWidget_SuperTabletEvent(TextGrammarCheck__GrammarResultWidget* self, QTabletEvent* event) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->setTextGrammarCheck__GrammarResultWidget_TabletEvent_IsBase(true);
        vtextgrammarcheckgrammarresultwidget->tabletEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammarResultWidget*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultWidget_OnTabletEvent(TextGrammarCheck__GrammarResultWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->setTextGrammarCheck__GrammarResultWidget_TabletEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammarResultWidget::TextGrammarCheck__GrammarResultWidget_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultWidget_ActionEvent(TextGrammarCheck__GrammarResultWidget* self, QActionEvent* event) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->actionEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammarResultWidget*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultWidget_SuperActionEvent(TextGrammarCheck__GrammarResultWidget* self, QActionEvent* event) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->setTextGrammarCheck__GrammarResultWidget_ActionEvent_IsBase(true);
        vtextgrammarcheckgrammarresultwidget->actionEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammarResultWidget*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultWidget_OnActionEvent(TextGrammarCheck__GrammarResultWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->setTextGrammarCheck__GrammarResultWidget_ActionEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammarResultWidget::TextGrammarCheck__GrammarResultWidget_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultWidget_DragEnterEvent(TextGrammarCheck__GrammarResultWidget* self, QDragEnterEvent* event) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->dragEnterEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammarResultWidget*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultWidget_SuperDragEnterEvent(TextGrammarCheck__GrammarResultWidget* self, QDragEnterEvent* event) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->setTextGrammarCheck__GrammarResultWidget_DragEnterEvent_IsBase(true);
        vtextgrammarcheckgrammarresultwidget->dragEnterEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammarResultWidget*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultWidget_OnDragEnterEvent(TextGrammarCheck__GrammarResultWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->setTextGrammarCheck__GrammarResultWidget_DragEnterEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammarResultWidget::TextGrammarCheck__GrammarResultWidget_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultWidget_DragMoveEvent(TextGrammarCheck__GrammarResultWidget* self, QDragMoveEvent* event) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->dragMoveEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammarResultWidget*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultWidget_SuperDragMoveEvent(TextGrammarCheck__GrammarResultWidget* self, QDragMoveEvent* event) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->setTextGrammarCheck__GrammarResultWidget_DragMoveEvent_IsBase(true);
        vtextgrammarcheckgrammarresultwidget->dragMoveEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammarResultWidget*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultWidget_OnDragMoveEvent(TextGrammarCheck__GrammarResultWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->setTextGrammarCheck__GrammarResultWidget_DragMoveEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammarResultWidget::TextGrammarCheck__GrammarResultWidget_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultWidget_DragLeaveEvent(TextGrammarCheck__GrammarResultWidget* self, QDragLeaveEvent* event) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->dragLeaveEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammarResultWidget*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultWidget_SuperDragLeaveEvent(TextGrammarCheck__GrammarResultWidget* self, QDragLeaveEvent* event) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->setTextGrammarCheck__GrammarResultWidget_DragLeaveEvent_IsBase(true);
        vtextgrammarcheckgrammarresultwidget->dragLeaveEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammarResultWidget*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultWidget_OnDragLeaveEvent(TextGrammarCheck__GrammarResultWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->setTextGrammarCheck__GrammarResultWidget_DragLeaveEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammarResultWidget::TextGrammarCheck__GrammarResultWidget_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultWidget_DropEvent(TextGrammarCheck__GrammarResultWidget* self, QDropEvent* event) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->dropEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammarResultWidget*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultWidget_SuperDropEvent(TextGrammarCheck__GrammarResultWidget* self, QDropEvent* event) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->setTextGrammarCheck__GrammarResultWidget_DropEvent_IsBase(true);
        vtextgrammarcheckgrammarresultwidget->dropEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammarResultWidget*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultWidget_OnDropEvent(TextGrammarCheck__GrammarResultWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->setTextGrammarCheck__GrammarResultWidget_DropEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammarResultWidget::TextGrammarCheck__GrammarResultWidget_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultWidget_ShowEvent(TextGrammarCheck__GrammarResultWidget* self, QShowEvent* event) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->showEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammarResultWidget*)self)->showEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultWidget_SuperShowEvent(TextGrammarCheck__GrammarResultWidget* self, QShowEvent* event) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->setTextGrammarCheck__GrammarResultWidget_ShowEvent_IsBase(true);
        vtextgrammarcheckgrammarresultwidget->showEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammarResultWidget*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultWidget_OnShowEvent(TextGrammarCheck__GrammarResultWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->setTextGrammarCheck__GrammarResultWidget_ShowEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammarResultWidget::TextGrammarCheck__GrammarResultWidget_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultWidget_HideEvent(TextGrammarCheck__GrammarResultWidget* self, QHideEvent* event) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->hideEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammarResultWidget*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultWidget_SuperHideEvent(TextGrammarCheck__GrammarResultWidget* self, QHideEvent* event) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->setTextGrammarCheck__GrammarResultWidget_HideEvent_IsBase(true);
        vtextgrammarcheckgrammarresultwidget->hideEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammarResultWidget*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultWidget_OnHideEvent(TextGrammarCheck__GrammarResultWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->setTextGrammarCheck__GrammarResultWidget_HideEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammarResultWidget::TextGrammarCheck__GrammarResultWidget_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextGrammarCheck__GrammarResultWidget_NativeEvent(TextGrammarCheck__GrammarResultWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        return vtextgrammarcheckgrammarresultwidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualTextGrammarCheckGrammarResultWidget*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool TextGrammarCheck__GrammarResultWidget_SuperNativeEvent(TextGrammarCheck__GrammarResultWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->setTextGrammarCheck__GrammarResultWidget_NativeEvent_IsBase(true);
        return vtextgrammarcheckgrammarresultwidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualTextGrammarCheckGrammarResultWidget*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultWidget_OnNativeEvent(TextGrammarCheck__GrammarResultWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->setTextGrammarCheck__GrammarResultWidget_NativeEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammarResultWidget::TextGrammarCheck__GrammarResultWidget_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultWidget_ChangeEvent(TextGrammarCheck__GrammarResultWidget* self, QEvent* param1) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->changeEvent(param1);
    } else {
        ((VirtualTextGrammarCheckGrammarResultWidget*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultWidget_SuperChangeEvent(TextGrammarCheck__GrammarResultWidget* self, QEvent* param1) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->setTextGrammarCheck__GrammarResultWidget_ChangeEvent_IsBase(true);
        vtextgrammarcheckgrammarresultwidget->changeEvent(param1);
    } else {
        ((VirtualTextGrammarCheckGrammarResultWidget*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultWidget_OnChangeEvent(TextGrammarCheck__GrammarResultWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->setTextGrammarCheck__GrammarResultWidget_ChangeEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammarResultWidget::TextGrammarCheck__GrammarResultWidget_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int TextGrammarCheck__GrammarResultWidget_Metric(const TextGrammarCheck__GrammarResultWidget* self, int param1) {
    auto* vtextgrammarcheckgrammarresultwidget = const_cast<VirtualTextGrammarCheckGrammarResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultWidget*>(self));
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        return vtextgrammarcheckgrammarresultwidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualTextGrammarCheckGrammarResultWidget*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int TextGrammarCheck__GrammarResultWidget_SuperMetric(const TextGrammarCheck__GrammarResultWidget* self, int param1) {
    auto* vtextgrammarcheckgrammarresultwidget = const_cast<VirtualTextGrammarCheckGrammarResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultWidget*>(self));
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->setTextGrammarCheck__GrammarResultWidget_Metric_IsBase(true);
        return vtextgrammarcheckgrammarresultwidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualTextGrammarCheckGrammarResultWidget*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultWidget_OnMetric(const TextGrammarCheck__GrammarResultWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammarresultwidget = const_cast<VirtualTextGrammarCheckGrammarResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultWidget*>(self));
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->setTextGrammarCheck__GrammarResultWidget_Metric_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammarResultWidget::TextGrammarCheck__GrammarResultWidget_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultWidget_InitPainter(const TextGrammarCheck__GrammarResultWidget* self, QPainter* painter) {
    auto* vtextgrammarcheckgrammarresultwidget = const_cast<VirtualTextGrammarCheckGrammarResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultWidget*>(self));
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->initPainter(painter);
    } else {
        ((VirtualTextGrammarCheckGrammarResultWidget*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultWidget_SuperInitPainter(const TextGrammarCheck__GrammarResultWidget* self, QPainter* painter) {
    auto* vtextgrammarcheckgrammarresultwidget = const_cast<VirtualTextGrammarCheckGrammarResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultWidget*>(self));
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->setTextGrammarCheck__GrammarResultWidget_InitPainter_IsBase(true);
        vtextgrammarcheckgrammarresultwidget->initPainter(painter);
    } else {
        ((VirtualTextGrammarCheckGrammarResultWidget*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultWidget_OnInitPainter(const TextGrammarCheck__GrammarResultWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammarresultwidget = const_cast<VirtualTextGrammarCheckGrammarResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultWidget*>(self));
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->setTextGrammarCheck__GrammarResultWidget_InitPainter_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammarResultWidget::TextGrammarCheck__GrammarResultWidget_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* TextGrammarCheck__GrammarResultWidget_Redirected(const TextGrammarCheck__GrammarResultWidget* self, QPoint* offset) {
    auto* vtextgrammarcheckgrammarresultwidget = const_cast<VirtualTextGrammarCheckGrammarResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultWidget*>(self));
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        return vtextgrammarcheckgrammarresultwidget->redirected(offset);
    } else {
        return ((VirtualTextGrammarCheckGrammarResultWidget*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* TextGrammarCheck__GrammarResultWidget_SuperRedirected(const TextGrammarCheck__GrammarResultWidget* self, QPoint* offset) {
    auto* vtextgrammarcheckgrammarresultwidget = const_cast<VirtualTextGrammarCheckGrammarResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultWidget*>(self));
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->setTextGrammarCheck__GrammarResultWidget_Redirected_IsBase(true);
        return vtextgrammarcheckgrammarresultwidget->redirected(offset);
    } else {
        return ((VirtualTextGrammarCheckGrammarResultWidget*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultWidget_OnRedirected(const TextGrammarCheck__GrammarResultWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammarresultwidget = const_cast<VirtualTextGrammarCheckGrammarResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultWidget*>(self));
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->setTextGrammarCheck__GrammarResultWidget_Redirected_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammarResultWidget::TextGrammarCheck__GrammarResultWidget_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* TextGrammarCheck__GrammarResultWidget_SharedPainter(const TextGrammarCheck__GrammarResultWidget* self) {
    auto* vtextgrammarcheckgrammarresultwidget = const_cast<VirtualTextGrammarCheckGrammarResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultWidget*>(self));
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        return vtextgrammarcheckgrammarresultwidget->sharedPainter();
    } else {
        return ((VirtualTextGrammarCheckGrammarResultWidget*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* TextGrammarCheck__GrammarResultWidget_SuperSharedPainter(const TextGrammarCheck__GrammarResultWidget* self) {
    auto* vtextgrammarcheckgrammarresultwidget = const_cast<VirtualTextGrammarCheckGrammarResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultWidget*>(self));
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->setTextGrammarCheck__GrammarResultWidget_SharedPainter_IsBase(true);
        return vtextgrammarcheckgrammarresultwidget->sharedPainter();
    } else {
        return ((VirtualTextGrammarCheckGrammarResultWidget*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultWidget_OnSharedPainter(const TextGrammarCheck__GrammarResultWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammarresultwidget = const_cast<VirtualTextGrammarCheckGrammarResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultWidget*>(self));
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->setTextGrammarCheck__GrammarResultWidget_SharedPainter_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammarResultWidget::TextGrammarCheck__GrammarResultWidget_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultWidget_InputMethodEvent(TextGrammarCheck__GrammarResultWidget* self, QInputMethodEvent* param1) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->inputMethodEvent(param1);
    } else {
        ((VirtualTextGrammarCheckGrammarResultWidget*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultWidget_SuperInputMethodEvent(TextGrammarCheck__GrammarResultWidget* self, QInputMethodEvent* param1) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->setTextGrammarCheck__GrammarResultWidget_InputMethodEvent_IsBase(true);
        vtextgrammarcheckgrammarresultwidget->inputMethodEvent(param1);
    } else {
        ((VirtualTextGrammarCheckGrammarResultWidget*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultWidget_OnInputMethodEvent(TextGrammarCheck__GrammarResultWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->setTextGrammarCheck__GrammarResultWidget_InputMethodEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammarResultWidget::TextGrammarCheck__GrammarResultWidget_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* TextGrammarCheck__GrammarResultWidget_InputMethodQuery(const TextGrammarCheck__GrammarResultWidget* self, int param1) {
    auto* vtextgrammarcheckgrammarresultwidget = const_cast<VirtualTextGrammarCheckGrammarResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultWidget*>(self));
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        return new QVariant(vtextgrammarcheckgrammarresultwidget->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualTextGrammarCheckGrammarResultWidget*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* TextGrammarCheck__GrammarResultWidget_SuperInputMethodQuery(const TextGrammarCheck__GrammarResultWidget* self, int param1) {
    auto* vtextgrammarcheckgrammarresultwidget = const_cast<VirtualTextGrammarCheckGrammarResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultWidget*>(self));
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->setTextGrammarCheck__GrammarResultWidget_InputMethodQuery_IsBase(true);
        return new QVariant(vtextgrammarcheckgrammarresultwidget->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualTextGrammarCheckGrammarResultWidget*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultWidget_OnInputMethodQuery(const TextGrammarCheck__GrammarResultWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammarresultwidget = const_cast<VirtualTextGrammarCheckGrammarResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultWidget*>(self));
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->setTextGrammarCheck__GrammarResultWidget_InputMethodQuery_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammarResultWidget::TextGrammarCheck__GrammarResultWidget_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextGrammarCheck__GrammarResultWidget_FocusNextPrevChild(TextGrammarCheck__GrammarResultWidget* self, bool next) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        return vtextgrammarcheckgrammarresultwidget->focusNextPrevChild(next);
    } else {
        return ((VirtualTextGrammarCheckGrammarResultWidget*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool TextGrammarCheck__GrammarResultWidget_SuperFocusNextPrevChild(TextGrammarCheck__GrammarResultWidget* self, bool next) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->setTextGrammarCheck__GrammarResultWidget_FocusNextPrevChild_IsBase(true);
        return vtextgrammarcheckgrammarresultwidget->focusNextPrevChild(next);
    } else {
        return ((VirtualTextGrammarCheckGrammarResultWidget*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultWidget_OnFocusNextPrevChild(TextGrammarCheck__GrammarResultWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->setTextGrammarCheck__GrammarResultWidget_FocusNextPrevChild_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammarResultWidget::TextGrammarCheck__GrammarResultWidget_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextGrammarCheck__GrammarResultWidget_EventFilter(TextGrammarCheck__GrammarResultWidget* self, QObject* watched, QEvent* event) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        return vtextgrammarcheckgrammarresultwidget->eventFilter(watched, event);
    } else {
        return self->TextGrammarCheck::GrammarResultWidget::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool TextGrammarCheck__GrammarResultWidget_SuperEventFilter(TextGrammarCheck__GrammarResultWidget* self, QObject* watched, QEvent* event) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->setTextGrammarCheck__GrammarResultWidget_EventFilter_IsBase(true);
        return vtextgrammarcheckgrammarresultwidget->eventFilter(watched, event);
    } else {
        return self->TextGrammarCheck::GrammarResultWidget::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultWidget_OnEventFilter(TextGrammarCheck__GrammarResultWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->setTextGrammarCheck__GrammarResultWidget_EventFilter_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammarResultWidget::TextGrammarCheck__GrammarResultWidget_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultWidget_TimerEvent(TextGrammarCheck__GrammarResultWidget* self, QTimerEvent* event) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->timerEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammarResultWidget*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultWidget_SuperTimerEvent(TextGrammarCheck__GrammarResultWidget* self, QTimerEvent* event) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->setTextGrammarCheck__GrammarResultWidget_TimerEvent_IsBase(true);
        vtextgrammarcheckgrammarresultwidget->timerEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammarResultWidget*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultWidget_OnTimerEvent(TextGrammarCheck__GrammarResultWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->setTextGrammarCheck__GrammarResultWidget_TimerEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammarResultWidget::TextGrammarCheck__GrammarResultWidget_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultWidget_ChildEvent(TextGrammarCheck__GrammarResultWidget* self, QChildEvent* event) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->childEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammarResultWidget*)self)->childEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultWidget_SuperChildEvent(TextGrammarCheck__GrammarResultWidget* self, QChildEvent* event) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->setTextGrammarCheck__GrammarResultWidget_ChildEvent_IsBase(true);
        vtextgrammarcheckgrammarresultwidget->childEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammarResultWidget*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultWidget_OnChildEvent(TextGrammarCheck__GrammarResultWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->setTextGrammarCheck__GrammarResultWidget_ChildEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammarResultWidget::TextGrammarCheck__GrammarResultWidget_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultWidget_CustomEvent(TextGrammarCheck__GrammarResultWidget* self, QEvent* event) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->customEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammarResultWidget*)self)->customEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultWidget_SuperCustomEvent(TextGrammarCheck__GrammarResultWidget* self, QEvent* event) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->setTextGrammarCheck__GrammarResultWidget_CustomEvent_IsBase(true);
        vtextgrammarcheckgrammarresultwidget->customEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammarResultWidget*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultWidget_OnCustomEvent(TextGrammarCheck__GrammarResultWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->setTextGrammarCheck__GrammarResultWidget_CustomEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammarResultWidget::TextGrammarCheck__GrammarResultWidget_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultWidget_ConnectNotify(TextGrammarCheck__GrammarResultWidget* self, const QMetaMethod* signal) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->connectNotify(*signal);
    } else {
        ((VirtualTextGrammarCheckGrammarResultWidget*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultWidget_SuperConnectNotify(TextGrammarCheck__GrammarResultWidget* self, const QMetaMethod* signal) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->setTextGrammarCheck__GrammarResultWidget_ConnectNotify_IsBase(true);
        vtextgrammarcheckgrammarresultwidget->connectNotify(*signal);
    } else {
        ((VirtualTextGrammarCheckGrammarResultWidget*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultWidget_OnConnectNotify(TextGrammarCheck__GrammarResultWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->setTextGrammarCheck__GrammarResultWidget_ConnectNotify_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammarResultWidget::TextGrammarCheck__GrammarResultWidget_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultWidget_DisconnectNotify(TextGrammarCheck__GrammarResultWidget* self, const QMetaMethod* signal) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->disconnectNotify(*signal);
    } else {
        ((VirtualTextGrammarCheckGrammarResultWidget*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultWidget_SuperDisconnectNotify(TextGrammarCheck__GrammarResultWidget* self, const QMetaMethod* signal) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->setTextGrammarCheck__GrammarResultWidget_DisconnectNotify_IsBase(true);
        vtextgrammarcheckgrammarresultwidget->disconnectNotify(*signal);
    } else {
        ((VirtualTextGrammarCheckGrammarResultWidget*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultWidget_OnDisconnectNotify(TextGrammarCheck__GrammarResultWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->setTextGrammarCheck__GrammarResultWidget_DisconnectNotify_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammarResultWidget::TextGrammarCheck__GrammarResultWidget_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultWidget_UpdateMicroFocus(TextGrammarCheck__GrammarResultWidget* self) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->updateMicroFocus();
    } else {
        ((VirtualTextGrammarCheckGrammarResultWidget*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultWidget_SuperUpdateMicroFocus(TextGrammarCheck__GrammarResultWidget* self) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->setTextGrammarCheck__GrammarResultWidget_UpdateMicroFocus_IsBase(true);
        vtextgrammarcheckgrammarresultwidget->updateMicroFocus();
    } else {
        ((VirtualTextGrammarCheckGrammarResultWidget*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultWidget_OnUpdateMicroFocus(TextGrammarCheck__GrammarResultWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->setTextGrammarCheck__GrammarResultWidget_UpdateMicroFocus_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammarResultWidget::TextGrammarCheck__GrammarResultWidget_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultWidget_Create(TextGrammarCheck__GrammarResultWidget* self) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->create();
    } else {
        ((VirtualTextGrammarCheckGrammarResultWidget*)self)->create();
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultWidget_SuperCreate(TextGrammarCheck__GrammarResultWidget* self) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->setTextGrammarCheck__GrammarResultWidget_Create_IsBase(true);
        vtextgrammarcheckgrammarresultwidget->create();
    } else {
        ((VirtualTextGrammarCheckGrammarResultWidget*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultWidget_OnCreate(TextGrammarCheck__GrammarResultWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->setTextGrammarCheck__GrammarResultWidget_Create_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammarResultWidget::TextGrammarCheck__GrammarResultWidget_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammarResultWidget_Destroy(TextGrammarCheck__GrammarResultWidget* self) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->destroy();
    } else {
        ((VirtualTextGrammarCheckGrammarResultWidget*)self)->destroy();
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammarResultWidget_SuperDestroy(TextGrammarCheck__GrammarResultWidget* self) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->setTextGrammarCheck__GrammarResultWidget_Destroy_IsBase(true);
        vtextgrammarcheckgrammarresultwidget->destroy();
    } else {
        ((VirtualTextGrammarCheckGrammarResultWidget*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultWidget_OnDestroy(TextGrammarCheck__GrammarResultWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->setTextGrammarCheck__GrammarResultWidget_Destroy_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammarResultWidget::TextGrammarCheck__GrammarResultWidget_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextGrammarCheck__GrammarResultWidget_FocusNextChild(TextGrammarCheck__GrammarResultWidget* self) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        return vtextgrammarcheckgrammarresultwidget->focusNextChild();
    } else {
        return ((VirtualTextGrammarCheckGrammarResultWidget*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool TextGrammarCheck__GrammarResultWidget_SuperFocusNextChild(TextGrammarCheck__GrammarResultWidget* self) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->setTextGrammarCheck__GrammarResultWidget_FocusNextChild_IsBase(true);
        return vtextgrammarcheckgrammarresultwidget->focusNextChild();
    } else {
        return ((VirtualTextGrammarCheckGrammarResultWidget*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultWidget_OnFocusNextChild(TextGrammarCheck__GrammarResultWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->setTextGrammarCheck__GrammarResultWidget_FocusNextChild_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammarResultWidget::TextGrammarCheck__GrammarResultWidget_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextGrammarCheck__GrammarResultWidget_FocusPreviousChild(TextGrammarCheck__GrammarResultWidget* self) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        return vtextgrammarcheckgrammarresultwidget->focusPreviousChild();
    } else {
        return ((VirtualTextGrammarCheckGrammarResultWidget*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool TextGrammarCheck__GrammarResultWidget_SuperFocusPreviousChild(TextGrammarCheck__GrammarResultWidget* self) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->setTextGrammarCheck__GrammarResultWidget_FocusPreviousChild_IsBase(true);
        return vtextgrammarcheckgrammarresultwidget->focusPreviousChild();
    } else {
        return ((VirtualTextGrammarCheckGrammarResultWidget*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultWidget_OnFocusPreviousChild(TextGrammarCheck__GrammarResultWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammarresultwidget = dynamic_cast<VirtualTextGrammarCheckGrammarResultWidget*>(self);
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->setTextGrammarCheck__GrammarResultWidget_FocusPreviousChild_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammarResultWidget::TextGrammarCheck__GrammarResultWidget_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* TextGrammarCheck__GrammarResultWidget_Sender(const TextGrammarCheck__GrammarResultWidget* self) {
    auto* vtextgrammarcheckgrammarresultwidget = const_cast<VirtualTextGrammarCheckGrammarResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultWidget*>(self));
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        return vtextgrammarcheckgrammarresultwidget->sender();
    } else {
        return ((VirtualTextGrammarCheckGrammarResultWidget*)self)->sender();
    }
}

// Base class handler implementation
QObject* TextGrammarCheck__GrammarResultWidget_SuperSender(const TextGrammarCheck__GrammarResultWidget* self) {
    auto* vtextgrammarcheckgrammarresultwidget = const_cast<VirtualTextGrammarCheckGrammarResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultWidget*>(self));
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->setTextGrammarCheck__GrammarResultWidget_Sender_IsBase(true);
        return vtextgrammarcheckgrammarresultwidget->sender();
    } else {
        return ((VirtualTextGrammarCheckGrammarResultWidget*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultWidget_OnSender(const TextGrammarCheck__GrammarResultWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammarresultwidget = const_cast<VirtualTextGrammarCheckGrammarResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultWidget*>(self));
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->setTextGrammarCheck__GrammarResultWidget_Sender_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammarResultWidget::TextGrammarCheck__GrammarResultWidget_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int TextGrammarCheck__GrammarResultWidget_SenderSignalIndex(const TextGrammarCheck__GrammarResultWidget* self) {
    auto* vtextgrammarcheckgrammarresultwidget = const_cast<VirtualTextGrammarCheckGrammarResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultWidget*>(self));
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        return vtextgrammarcheckgrammarresultwidget->senderSignalIndex();
    } else {
        return ((VirtualTextGrammarCheckGrammarResultWidget*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int TextGrammarCheck__GrammarResultWidget_SuperSenderSignalIndex(const TextGrammarCheck__GrammarResultWidget* self) {
    auto* vtextgrammarcheckgrammarresultwidget = const_cast<VirtualTextGrammarCheckGrammarResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultWidget*>(self));
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->setTextGrammarCheck__GrammarResultWidget_SenderSignalIndex_IsBase(true);
        return vtextgrammarcheckgrammarresultwidget->senderSignalIndex();
    } else {
        return ((VirtualTextGrammarCheckGrammarResultWidget*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultWidget_OnSenderSignalIndex(const TextGrammarCheck__GrammarResultWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammarresultwidget = const_cast<VirtualTextGrammarCheckGrammarResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultWidget*>(self));
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->setTextGrammarCheck__GrammarResultWidget_SenderSignalIndex_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammarResultWidget::TextGrammarCheck__GrammarResultWidget_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int TextGrammarCheck__GrammarResultWidget_Receivers(const TextGrammarCheck__GrammarResultWidget* self, const char* signal) {
    auto* vtextgrammarcheckgrammarresultwidget = const_cast<VirtualTextGrammarCheckGrammarResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultWidget*>(self));
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        return vtextgrammarcheckgrammarresultwidget->receivers(signal);
    } else {
        return ((VirtualTextGrammarCheckGrammarResultWidget*)self)->receivers(signal);
    }
}

// Base class handler implementation
int TextGrammarCheck__GrammarResultWidget_SuperReceivers(const TextGrammarCheck__GrammarResultWidget* self, const char* signal) {
    auto* vtextgrammarcheckgrammarresultwidget = const_cast<VirtualTextGrammarCheckGrammarResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultWidget*>(self));
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->setTextGrammarCheck__GrammarResultWidget_Receivers_IsBase(true);
        return vtextgrammarcheckgrammarresultwidget->receivers(signal);
    } else {
        return ((VirtualTextGrammarCheckGrammarResultWidget*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultWidget_OnReceivers(const TextGrammarCheck__GrammarResultWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammarresultwidget = const_cast<VirtualTextGrammarCheckGrammarResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultWidget*>(self));
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->setTextGrammarCheck__GrammarResultWidget_Receivers_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammarResultWidget::TextGrammarCheck__GrammarResultWidget_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextGrammarCheck__GrammarResultWidget_IsSignalConnected(const TextGrammarCheck__GrammarResultWidget* self, const QMetaMethod* signal) {
    auto* vtextgrammarcheckgrammarresultwidget = const_cast<VirtualTextGrammarCheckGrammarResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultWidget*>(self));
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        return vtextgrammarcheckgrammarresultwidget->isSignalConnected(*signal);
    } else {
        return ((VirtualTextGrammarCheckGrammarResultWidget*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool TextGrammarCheck__GrammarResultWidget_SuperIsSignalConnected(const TextGrammarCheck__GrammarResultWidget* self, const QMetaMethod* signal) {
    auto* vtextgrammarcheckgrammarresultwidget = const_cast<VirtualTextGrammarCheckGrammarResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultWidget*>(self));
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->setTextGrammarCheck__GrammarResultWidget_IsSignalConnected_IsBase(true);
        return vtextgrammarcheckgrammarresultwidget->isSignalConnected(*signal);
    } else {
        return ((VirtualTextGrammarCheckGrammarResultWidget*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultWidget_OnIsSignalConnected(const TextGrammarCheck__GrammarResultWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammarresultwidget = const_cast<VirtualTextGrammarCheckGrammarResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultWidget*>(self));
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->setTextGrammarCheck__GrammarResultWidget_IsSignalConnected_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammarResultWidget::TextGrammarCheck__GrammarResultWidget_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double TextGrammarCheck__GrammarResultWidget_GetDecodedMetricF(const TextGrammarCheck__GrammarResultWidget* self, int metricA, int metricB) {
    auto* vtextgrammarcheckgrammarresultwidget = const_cast<VirtualTextGrammarCheckGrammarResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultWidget*>(self));
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        return vtextgrammarcheckgrammarresultwidget->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualTextGrammarCheckGrammarResultWidget*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double TextGrammarCheck__GrammarResultWidget_SuperGetDecodedMetricF(const TextGrammarCheck__GrammarResultWidget* self, int metricA, int metricB) {
    auto* vtextgrammarcheckgrammarresultwidget = const_cast<VirtualTextGrammarCheckGrammarResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultWidget*>(self));
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->setTextGrammarCheck__GrammarResultWidget_GetDecodedMetricF_IsBase(true);
        return vtextgrammarcheckgrammarresultwidget->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualTextGrammarCheckGrammarResultWidget*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammarResultWidget_OnGetDecodedMetricF(const TextGrammarCheck__GrammarResultWidget* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammarresultwidget = const_cast<VirtualTextGrammarCheckGrammarResultWidget*>(dynamic_cast<const VirtualTextGrammarCheckGrammarResultWidget*>(self));
    if (vtextgrammarcheckgrammarresultwidget && vtextgrammarcheckgrammarresultwidget->isVirtualTextGrammarCheckGrammarResultWidget) {
        vtextgrammarcheckgrammarresultwidget->setTextGrammarCheck__GrammarResultWidget_GetDecodedMetricF_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammarResultWidget::TextGrammarCheck__GrammarResultWidget_GetDecodedMetricF_Callback>(slot));
    }
}

void TextGrammarCheck__GrammarResultWidget_Delete(TextGrammarCheck__GrammarResultWidget* self) {
    delete self;
}
