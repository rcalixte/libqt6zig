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
#define WORKAROUND_INNER_CLASS_DEFINITION_TextCustomEditor__TextGoToLineWidget
#include <textgotolinewidget.h>
#include "libtextgotolinewidget.h"
#include "libtextgotolinewidget.hxx"

TextCustomEditor__TextGoToLineWidget* TextCustomEditor__TextGoToLineWidget_new(QWidget* parent) {
    return new VirtualTextCustomEditorTextGoToLineWidget(parent);
}

TextCustomEditor__TextGoToLineWidget* TextCustomEditor__TextGoToLineWidget_new2() {
    return new VirtualTextCustomEditorTextGoToLineWidget();
}

QMetaObject* TextCustomEditor__TextGoToLineWidget_MetaObject(const TextCustomEditor__TextGoToLineWidget* self) {
    auto* vtextcustomeditor__textgotolinewidget = dynamic_cast<const VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditor__textgotolinewidget && vtextcustomeditor__textgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        return (QMetaObject*)self->metaObject();
    } else {
        return (QMetaObject*)((VirtualTextCustomEditorTextGoToLineWidget*)self)->metaObject();
    }
}

void* TextCustomEditor__TextGoToLineWidget_Metacast(TextCustomEditor__TextGoToLineWidget* self, const char* param1) {
    auto* vtextcustomeditor__textgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditor__textgotolinewidget && vtextcustomeditor__textgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        return self->qt_metacast(param1);
    } else {
        return ((VirtualTextCustomEditorTextGoToLineWidget*)self)->qt_metacast(param1);
    }
}

int TextCustomEditor__TextGoToLineWidget_Metacall(TextCustomEditor__TextGoToLineWidget* self, int param1, int param2, void** param3) {
    auto* vtextcustomeditor__textgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditor__textgotolinewidget && vtextcustomeditor__textgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualTextCustomEditorTextGoToLineWidget*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

void TextCustomEditor__TextGoToLineWidget_GoToLine(TextCustomEditor__TextGoToLineWidget* self) {
    self->goToLine();
}

void TextCustomEditor__TextGoToLineWidget_SetMaximumLineCount(TextCustomEditor__TextGoToLineWidget* self, int max) {
    self->setMaximumLineCount(static_cast<int>(max));
}

void TextCustomEditor__TextGoToLineWidget_MoveToLine(TextCustomEditor__TextGoToLineWidget* self, int param1) {
    self->moveToLine(static_cast<int>(param1));
}

void TextCustomEditor__TextGoToLineWidget_Connect_MoveToLine(TextCustomEditor__TextGoToLineWidget* self, intptr_t slot) {
    void (*slotFunc)(TextCustomEditor__TextGoToLineWidget*, int) = reinterpret_cast<void (*)(TextCustomEditor__TextGoToLineWidget*, int)>(slot);
    TextCustomEditor::TextGoToLineWidget::connect(self, &TextCustomEditor::TextGoToLineWidget::moveToLine, [self, slotFunc](int param1) {
        int sigval1 = param1;
        slotFunc(self, sigval1);
    });
}

void TextCustomEditor__TextGoToLineWidget_HideGotoLine(TextCustomEditor__TextGoToLineWidget* self) {
    self->hideGotoLine();
}

void TextCustomEditor__TextGoToLineWidget_Connect_HideGotoLine(TextCustomEditor__TextGoToLineWidget* self, intptr_t slot) {
    void (*slotFunc)(TextCustomEditor__TextGoToLineWidget*) = reinterpret_cast<void (*)(TextCustomEditor__TextGoToLineWidget*)>(slot);
    TextCustomEditor::TextGoToLineWidget::connect(self, &TextCustomEditor::TextGoToLineWidget::hideGotoLine, [self, slotFunc]() {
        slotFunc(self);
    });
}

bool TextCustomEditor__TextGoToLineWidget_Event(TextCustomEditor__TextGoToLineWidget* self, QEvent* e) {
    auto* vtextcustomeditor__textgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditor__textgotolinewidget && vtextcustomeditor__textgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        return vtextcustomeditor__textgotolinewidget->event(e);
    }
    return {};
}

void TextCustomEditor__TextGoToLineWidget_ShowEvent(TextCustomEditor__TextGoToLineWidget* self, QShowEvent* e) {
    auto* vtextcustomeditor__textgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditor__textgotolinewidget && vtextcustomeditor__textgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditor__textgotolinewidget->showEvent(e);
    }
}

bool TextCustomEditor__TextGoToLineWidget_EventFilter(TextCustomEditor__TextGoToLineWidget* self, QObject* obj, QEvent* event) {
    auto* vtextcustomeditor__textgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditor__textgotolinewidget && vtextcustomeditor__textgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        return vtextcustomeditor__textgotolinewidget->eventFilter(obj, event);
    }
    return {};
}

void TextCustomEditor__TextGoToLineWidget_SlotBlockCountChanged(TextCustomEditor__TextGoToLineWidget* self, int numberBlockCount) {
    self->slotBlockCountChanged(static_cast<int>(numberBlockCount));
}

// Base class handler implementation
QMetaObject* TextCustomEditor__TextGoToLineWidget_SuperMetaObject(const TextCustomEditor__TextGoToLineWidget* self) {
    auto* vtextcustomeditortextgotolinewidget = const_cast<VirtualTextCustomEditorTextGoToLineWidget*>(dynamic_cast<const VirtualTextCustomEditorTextGoToLineWidget*>(self));
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->setTextCustomEditor__TextGoToLineWidget_MetaObject_IsBase(true);
        return (QMetaObject*)vtextcustomeditortextgotolinewidget->metaObject();
    } else {
        return (QMetaObject*)self->TextCustomEditor::TextGoToLineWidget::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextGoToLineWidget_OnMetaObject(const TextCustomEditor__TextGoToLineWidget* self, intptr_t slot) {
    auto* vtextcustomeditortextgotolinewidget = const_cast<VirtualTextCustomEditorTextGoToLineWidget*>(dynamic_cast<const VirtualTextCustomEditorTextGoToLineWidget*>(self));
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->setTextCustomEditor__TextGoToLineWidget_MetaObject_Callback(reinterpret_cast<VirtualTextCustomEditorTextGoToLineWidget::TextCustomEditor__TextGoToLineWidget_MetaObject_Callback>(slot));
    }
}

// Base class handler implementation
void* TextCustomEditor__TextGoToLineWidget_SuperMetacast(TextCustomEditor__TextGoToLineWidget* self, const char* param1) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->setTextCustomEditor__TextGoToLineWidget_Metacast_IsBase(true);
        return vtextcustomeditortextgotolinewidget->qt_metacast(param1);
    } else {
        return self->TextCustomEditor::TextGoToLineWidget::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextGoToLineWidget_OnMetacast(TextCustomEditor__TextGoToLineWidget* self, intptr_t slot) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->setTextCustomEditor__TextGoToLineWidget_Metacast_Callback(reinterpret_cast<VirtualTextCustomEditorTextGoToLineWidget::TextCustomEditor__TextGoToLineWidget_Metacast_Callback>(slot));
    }
}

// Base class handler implementation
int TextCustomEditor__TextGoToLineWidget_SuperMetacall(TextCustomEditor__TextGoToLineWidget* self, int param1, int param2, void** param3) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->setTextCustomEditor__TextGoToLineWidget_Metacall_IsBase(true);
        return vtextcustomeditortextgotolinewidget->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->TextCustomEditor::TextGoToLineWidget::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextGoToLineWidget_OnMetacall(TextCustomEditor__TextGoToLineWidget* self, intptr_t slot) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->setTextCustomEditor__TextGoToLineWidget_Metacall_Callback(reinterpret_cast<VirtualTextCustomEditorTextGoToLineWidget::TextCustomEditor__TextGoToLineWidget_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
bool TextCustomEditor__TextGoToLineWidget_SuperEvent(TextCustomEditor__TextGoToLineWidget* self, QEvent* e) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->setTextCustomEditor__TextGoToLineWidget_Event_IsBase(true);
        return vtextcustomeditortextgotolinewidget->event(e);
    } else {
        return ((VirtualTextCustomEditorTextGoToLineWidget*)self)->event(e);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextGoToLineWidget_OnEvent(TextCustomEditor__TextGoToLineWidget* self, intptr_t slot) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->setTextCustomEditor__TextGoToLineWidget_Event_Callback(reinterpret_cast<VirtualTextCustomEditorTextGoToLineWidget::TextCustomEditor__TextGoToLineWidget_Event_Callback>(slot));
    }
}

// Base class handler implementation
void TextCustomEditor__TextGoToLineWidget_SuperShowEvent(TextCustomEditor__TextGoToLineWidget* self, QShowEvent* e) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->setTextCustomEditor__TextGoToLineWidget_ShowEvent_IsBase(true);
        vtextcustomeditortextgotolinewidget->showEvent(e);
    } else {
        ((VirtualTextCustomEditorTextGoToLineWidget*)self)->showEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextGoToLineWidget_OnShowEvent(TextCustomEditor__TextGoToLineWidget* self, intptr_t slot) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->setTextCustomEditor__TextGoToLineWidget_ShowEvent_Callback(reinterpret_cast<VirtualTextCustomEditorTextGoToLineWidget::TextCustomEditor__TextGoToLineWidget_ShowEvent_Callback>(slot));
    }
}

// Base class handler implementation
bool TextCustomEditor__TextGoToLineWidget_SuperEventFilter(TextCustomEditor__TextGoToLineWidget* self, QObject* obj, QEvent* event) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->setTextCustomEditor__TextGoToLineWidget_EventFilter_IsBase(true);
        return vtextcustomeditortextgotolinewidget->eventFilter(obj, event);
    } else {
        return ((VirtualTextCustomEditorTextGoToLineWidget*)self)->eventFilter(obj, event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextGoToLineWidget_OnEventFilter(TextCustomEditor__TextGoToLineWidget* self, intptr_t slot) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->setTextCustomEditor__TextGoToLineWidget_EventFilter_Callback(reinterpret_cast<VirtualTextCustomEditorTextGoToLineWidget::TextCustomEditor__TextGoToLineWidget_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
int TextCustomEditor__TextGoToLineWidget_DevType(const TextCustomEditor__TextGoToLineWidget* self) {
    auto* vtextcustomeditortextgotolinewidget = const_cast<VirtualTextCustomEditorTextGoToLineWidget*>(dynamic_cast<const VirtualTextCustomEditorTextGoToLineWidget*>(self));
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        return vtextcustomeditortextgotolinewidget->devType();
    } else {
        return self->TextCustomEditor::TextGoToLineWidget::devType();
    }
}

// Base class handler implementation
int TextCustomEditor__TextGoToLineWidget_SuperDevType(const TextCustomEditor__TextGoToLineWidget* self) {
    auto* vtextcustomeditortextgotolinewidget = const_cast<VirtualTextCustomEditorTextGoToLineWidget*>(dynamic_cast<const VirtualTextCustomEditorTextGoToLineWidget*>(self));
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->setTextCustomEditor__TextGoToLineWidget_DevType_IsBase(true);
        return vtextcustomeditortextgotolinewidget->devType();
    } else {
        return self->TextCustomEditor::TextGoToLineWidget::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextGoToLineWidget_OnDevType(const TextCustomEditor__TextGoToLineWidget* self, intptr_t slot) {
    auto* vtextcustomeditortextgotolinewidget = const_cast<VirtualTextCustomEditorTextGoToLineWidget*>(dynamic_cast<const VirtualTextCustomEditorTextGoToLineWidget*>(self));
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->setTextCustomEditor__TextGoToLineWidget_DevType_Callback(reinterpret_cast<VirtualTextCustomEditorTextGoToLineWidget::TextCustomEditor__TextGoToLineWidget_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__TextGoToLineWidget_SetVisible(TextCustomEditor__TextGoToLineWidget* self, bool visible) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->setVisible(visible);
    } else {
        self->TextCustomEditor::TextGoToLineWidget::setVisible(visible);
    }
}

// Base class handler implementation
void TextCustomEditor__TextGoToLineWidget_SuperSetVisible(TextCustomEditor__TextGoToLineWidget* self, bool visible) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->setTextCustomEditor__TextGoToLineWidget_SetVisible_IsBase(true);
        vtextcustomeditortextgotolinewidget->setVisible(visible);
    } else {
        self->TextCustomEditor::TextGoToLineWidget::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextGoToLineWidget_OnSetVisible(TextCustomEditor__TextGoToLineWidget* self, intptr_t slot) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->setTextCustomEditor__TextGoToLineWidget_SetVisible_Callback(reinterpret_cast<VirtualTextCustomEditorTextGoToLineWidget::TextCustomEditor__TextGoToLineWidget_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* TextCustomEditor__TextGoToLineWidget_SizeHint(const TextCustomEditor__TextGoToLineWidget* self) {
    auto* vtextcustomeditortextgotolinewidget = const_cast<VirtualTextCustomEditorTextGoToLineWidget*>(dynamic_cast<const VirtualTextCustomEditorTextGoToLineWidget*>(self));
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        return new QSize(vtextcustomeditortextgotolinewidget->sizeHint());
    } else {
        return new QSize(((VirtualTextCustomEditorTextGoToLineWidget*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* TextCustomEditor__TextGoToLineWidget_SuperSizeHint(const TextCustomEditor__TextGoToLineWidget* self) {
    auto* vtextcustomeditortextgotolinewidget = const_cast<VirtualTextCustomEditorTextGoToLineWidget*>(dynamic_cast<const VirtualTextCustomEditorTextGoToLineWidget*>(self));
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->setTextCustomEditor__TextGoToLineWidget_SizeHint_IsBase(true);
        return new QSize(vtextcustomeditortextgotolinewidget->sizeHint());
    } else {
        return new QSize(((VirtualTextCustomEditorTextGoToLineWidget*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextGoToLineWidget_OnSizeHint(const TextCustomEditor__TextGoToLineWidget* self, intptr_t slot) {
    auto* vtextcustomeditortextgotolinewidget = const_cast<VirtualTextCustomEditorTextGoToLineWidget*>(dynamic_cast<const VirtualTextCustomEditorTextGoToLineWidget*>(self));
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->setTextCustomEditor__TextGoToLineWidget_SizeHint_Callback(reinterpret_cast<VirtualTextCustomEditorTextGoToLineWidget::TextCustomEditor__TextGoToLineWidget_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* TextCustomEditor__TextGoToLineWidget_MinimumSizeHint(const TextCustomEditor__TextGoToLineWidget* self) {
    auto* vtextcustomeditortextgotolinewidget = const_cast<VirtualTextCustomEditorTextGoToLineWidget*>(dynamic_cast<const VirtualTextCustomEditorTextGoToLineWidget*>(self));
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        return new QSize(vtextcustomeditortextgotolinewidget->minimumSizeHint());
    } else {
        return new QSize(((VirtualTextCustomEditorTextGoToLineWidget*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* TextCustomEditor__TextGoToLineWidget_SuperMinimumSizeHint(const TextCustomEditor__TextGoToLineWidget* self) {
    auto* vtextcustomeditortextgotolinewidget = const_cast<VirtualTextCustomEditorTextGoToLineWidget*>(dynamic_cast<const VirtualTextCustomEditorTextGoToLineWidget*>(self));
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->setTextCustomEditor__TextGoToLineWidget_MinimumSizeHint_IsBase(true);
        return new QSize(vtextcustomeditortextgotolinewidget->minimumSizeHint());
    } else {
        return new QSize(((VirtualTextCustomEditorTextGoToLineWidget*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextGoToLineWidget_OnMinimumSizeHint(const TextCustomEditor__TextGoToLineWidget* self, intptr_t slot) {
    auto* vtextcustomeditortextgotolinewidget = const_cast<VirtualTextCustomEditorTextGoToLineWidget*>(dynamic_cast<const VirtualTextCustomEditorTextGoToLineWidget*>(self));
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->setTextCustomEditor__TextGoToLineWidget_MinimumSizeHint_Callback(reinterpret_cast<VirtualTextCustomEditorTextGoToLineWidget::TextCustomEditor__TextGoToLineWidget_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
int TextCustomEditor__TextGoToLineWidget_HeightForWidth(const TextCustomEditor__TextGoToLineWidget* self, int param1) {
    auto* vtextcustomeditortextgotolinewidget = const_cast<VirtualTextCustomEditorTextGoToLineWidget*>(dynamic_cast<const VirtualTextCustomEditorTextGoToLineWidget*>(self));
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        return vtextcustomeditortextgotolinewidget->heightForWidth(static_cast<int>(param1));
    } else {
        return self->TextCustomEditor::TextGoToLineWidget::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int TextCustomEditor__TextGoToLineWidget_SuperHeightForWidth(const TextCustomEditor__TextGoToLineWidget* self, int param1) {
    auto* vtextcustomeditortextgotolinewidget = const_cast<VirtualTextCustomEditorTextGoToLineWidget*>(dynamic_cast<const VirtualTextCustomEditorTextGoToLineWidget*>(self));
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->setTextCustomEditor__TextGoToLineWidget_HeightForWidth_IsBase(true);
        return vtextcustomeditortextgotolinewidget->heightForWidth(static_cast<int>(param1));
    } else {
        return self->TextCustomEditor::TextGoToLineWidget::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextGoToLineWidget_OnHeightForWidth(const TextCustomEditor__TextGoToLineWidget* self, intptr_t slot) {
    auto* vtextcustomeditortextgotolinewidget = const_cast<VirtualTextCustomEditorTextGoToLineWidget*>(dynamic_cast<const VirtualTextCustomEditorTextGoToLineWidget*>(self));
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->setTextCustomEditor__TextGoToLineWidget_HeightForWidth_Callback(reinterpret_cast<VirtualTextCustomEditorTextGoToLineWidget::TextCustomEditor__TextGoToLineWidget_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextCustomEditor__TextGoToLineWidget_HasHeightForWidth(const TextCustomEditor__TextGoToLineWidget* self) {
    auto* vtextcustomeditortextgotolinewidget = const_cast<VirtualTextCustomEditorTextGoToLineWidget*>(dynamic_cast<const VirtualTextCustomEditorTextGoToLineWidget*>(self));
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        return vtextcustomeditortextgotolinewidget->hasHeightForWidth();
    } else {
        return self->TextCustomEditor::TextGoToLineWidget::hasHeightForWidth();
    }
}

// Base class handler implementation
bool TextCustomEditor__TextGoToLineWidget_SuperHasHeightForWidth(const TextCustomEditor__TextGoToLineWidget* self) {
    auto* vtextcustomeditortextgotolinewidget = const_cast<VirtualTextCustomEditorTextGoToLineWidget*>(dynamic_cast<const VirtualTextCustomEditorTextGoToLineWidget*>(self));
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->setTextCustomEditor__TextGoToLineWidget_HasHeightForWidth_IsBase(true);
        return vtextcustomeditortextgotolinewidget->hasHeightForWidth();
    } else {
        return self->TextCustomEditor::TextGoToLineWidget::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextGoToLineWidget_OnHasHeightForWidth(const TextCustomEditor__TextGoToLineWidget* self, intptr_t slot) {
    auto* vtextcustomeditortextgotolinewidget = const_cast<VirtualTextCustomEditorTextGoToLineWidget*>(dynamic_cast<const VirtualTextCustomEditorTextGoToLineWidget*>(self));
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->setTextCustomEditor__TextGoToLineWidget_HasHeightForWidth_Callback(reinterpret_cast<VirtualTextCustomEditorTextGoToLineWidget::TextCustomEditor__TextGoToLineWidget_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* TextCustomEditor__TextGoToLineWidget_PaintEngine(const TextCustomEditor__TextGoToLineWidget* self) {
    auto* vtextcustomeditortextgotolinewidget = const_cast<VirtualTextCustomEditorTextGoToLineWidget*>(dynamic_cast<const VirtualTextCustomEditorTextGoToLineWidget*>(self));
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        return vtextcustomeditortextgotolinewidget->paintEngine();
    } else {
        return self->TextCustomEditor::TextGoToLineWidget::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* TextCustomEditor__TextGoToLineWidget_SuperPaintEngine(const TextCustomEditor__TextGoToLineWidget* self) {
    auto* vtextcustomeditortextgotolinewidget = const_cast<VirtualTextCustomEditorTextGoToLineWidget*>(dynamic_cast<const VirtualTextCustomEditorTextGoToLineWidget*>(self));
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->setTextCustomEditor__TextGoToLineWidget_PaintEngine_IsBase(true);
        return vtextcustomeditortextgotolinewidget->paintEngine();
    } else {
        return self->TextCustomEditor::TextGoToLineWidget::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextGoToLineWidget_OnPaintEngine(const TextCustomEditor__TextGoToLineWidget* self, intptr_t slot) {
    auto* vtextcustomeditortextgotolinewidget = const_cast<VirtualTextCustomEditorTextGoToLineWidget*>(dynamic_cast<const VirtualTextCustomEditorTextGoToLineWidget*>(self));
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->setTextCustomEditor__TextGoToLineWidget_PaintEngine_Callback(reinterpret_cast<VirtualTextCustomEditorTextGoToLineWidget::TextCustomEditor__TextGoToLineWidget_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__TextGoToLineWidget_MousePressEvent(TextCustomEditor__TextGoToLineWidget* self, QMouseEvent* event) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->mousePressEvent(event);
    } else {
        ((VirtualTextCustomEditorTextGoToLineWidget*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__TextGoToLineWidget_SuperMousePressEvent(TextCustomEditor__TextGoToLineWidget* self, QMouseEvent* event) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->setTextCustomEditor__TextGoToLineWidget_MousePressEvent_IsBase(true);
        vtextcustomeditortextgotolinewidget->mousePressEvent(event);
    } else {
        ((VirtualTextCustomEditorTextGoToLineWidget*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextGoToLineWidget_OnMousePressEvent(TextCustomEditor__TextGoToLineWidget* self, intptr_t slot) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->setTextCustomEditor__TextGoToLineWidget_MousePressEvent_Callback(reinterpret_cast<VirtualTextCustomEditorTextGoToLineWidget::TextCustomEditor__TextGoToLineWidget_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__TextGoToLineWidget_MouseReleaseEvent(TextCustomEditor__TextGoToLineWidget* self, QMouseEvent* event) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->mouseReleaseEvent(event);
    } else {
        ((VirtualTextCustomEditorTextGoToLineWidget*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__TextGoToLineWidget_SuperMouseReleaseEvent(TextCustomEditor__TextGoToLineWidget* self, QMouseEvent* event) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->setTextCustomEditor__TextGoToLineWidget_MouseReleaseEvent_IsBase(true);
        vtextcustomeditortextgotolinewidget->mouseReleaseEvent(event);
    } else {
        ((VirtualTextCustomEditorTextGoToLineWidget*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextGoToLineWidget_OnMouseReleaseEvent(TextCustomEditor__TextGoToLineWidget* self, intptr_t slot) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->setTextCustomEditor__TextGoToLineWidget_MouseReleaseEvent_Callback(reinterpret_cast<VirtualTextCustomEditorTextGoToLineWidget::TextCustomEditor__TextGoToLineWidget_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__TextGoToLineWidget_MouseDoubleClickEvent(TextCustomEditor__TextGoToLineWidget* self, QMouseEvent* event) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->mouseDoubleClickEvent(event);
    } else {
        ((VirtualTextCustomEditorTextGoToLineWidget*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__TextGoToLineWidget_SuperMouseDoubleClickEvent(TextCustomEditor__TextGoToLineWidget* self, QMouseEvent* event) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->setTextCustomEditor__TextGoToLineWidget_MouseDoubleClickEvent_IsBase(true);
        vtextcustomeditortextgotolinewidget->mouseDoubleClickEvent(event);
    } else {
        ((VirtualTextCustomEditorTextGoToLineWidget*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextGoToLineWidget_OnMouseDoubleClickEvent(TextCustomEditor__TextGoToLineWidget* self, intptr_t slot) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->setTextCustomEditor__TextGoToLineWidget_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualTextCustomEditorTextGoToLineWidget::TextCustomEditor__TextGoToLineWidget_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__TextGoToLineWidget_MouseMoveEvent(TextCustomEditor__TextGoToLineWidget* self, QMouseEvent* event) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->mouseMoveEvent(event);
    } else {
        ((VirtualTextCustomEditorTextGoToLineWidget*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__TextGoToLineWidget_SuperMouseMoveEvent(TextCustomEditor__TextGoToLineWidget* self, QMouseEvent* event) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->setTextCustomEditor__TextGoToLineWidget_MouseMoveEvent_IsBase(true);
        vtextcustomeditortextgotolinewidget->mouseMoveEvent(event);
    } else {
        ((VirtualTextCustomEditorTextGoToLineWidget*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextGoToLineWidget_OnMouseMoveEvent(TextCustomEditor__TextGoToLineWidget* self, intptr_t slot) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->setTextCustomEditor__TextGoToLineWidget_MouseMoveEvent_Callback(reinterpret_cast<VirtualTextCustomEditorTextGoToLineWidget::TextCustomEditor__TextGoToLineWidget_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__TextGoToLineWidget_WheelEvent(TextCustomEditor__TextGoToLineWidget* self, QWheelEvent* event) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->wheelEvent(event);
    } else {
        ((VirtualTextCustomEditorTextGoToLineWidget*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__TextGoToLineWidget_SuperWheelEvent(TextCustomEditor__TextGoToLineWidget* self, QWheelEvent* event) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->setTextCustomEditor__TextGoToLineWidget_WheelEvent_IsBase(true);
        vtextcustomeditortextgotolinewidget->wheelEvent(event);
    } else {
        ((VirtualTextCustomEditorTextGoToLineWidget*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextGoToLineWidget_OnWheelEvent(TextCustomEditor__TextGoToLineWidget* self, intptr_t slot) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->setTextCustomEditor__TextGoToLineWidget_WheelEvent_Callback(reinterpret_cast<VirtualTextCustomEditorTextGoToLineWidget::TextCustomEditor__TextGoToLineWidget_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__TextGoToLineWidget_KeyPressEvent(TextCustomEditor__TextGoToLineWidget* self, QKeyEvent* event) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->keyPressEvent(event);
    } else {
        ((VirtualTextCustomEditorTextGoToLineWidget*)self)->keyPressEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__TextGoToLineWidget_SuperKeyPressEvent(TextCustomEditor__TextGoToLineWidget* self, QKeyEvent* event) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->setTextCustomEditor__TextGoToLineWidget_KeyPressEvent_IsBase(true);
        vtextcustomeditortextgotolinewidget->keyPressEvent(event);
    } else {
        ((VirtualTextCustomEditorTextGoToLineWidget*)self)->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextGoToLineWidget_OnKeyPressEvent(TextCustomEditor__TextGoToLineWidget* self, intptr_t slot) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->setTextCustomEditor__TextGoToLineWidget_KeyPressEvent_Callback(reinterpret_cast<VirtualTextCustomEditorTextGoToLineWidget::TextCustomEditor__TextGoToLineWidget_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__TextGoToLineWidget_KeyReleaseEvent(TextCustomEditor__TextGoToLineWidget* self, QKeyEvent* event) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->keyReleaseEvent(event);
    } else {
        ((VirtualTextCustomEditorTextGoToLineWidget*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__TextGoToLineWidget_SuperKeyReleaseEvent(TextCustomEditor__TextGoToLineWidget* self, QKeyEvent* event) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->setTextCustomEditor__TextGoToLineWidget_KeyReleaseEvent_IsBase(true);
        vtextcustomeditortextgotolinewidget->keyReleaseEvent(event);
    } else {
        ((VirtualTextCustomEditorTextGoToLineWidget*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextGoToLineWidget_OnKeyReleaseEvent(TextCustomEditor__TextGoToLineWidget* self, intptr_t slot) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->setTextCustomEditor__TextGoToLineWidget_KeyReleaseEvent_Callback(reinterpret_cast<VirtualTextCustomEditorTextGoToLineWidget::TextCustomEditor__TextGoToLineWidget_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__TextGoToLineWidget_FocusInEvent(TextCustomEditor__TextGoToLineWidget* self, QFocusEvent* event) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->focusInEvent(event);
    } else {
        ((VirtualTextCustomEditorTextGoToLineWidget*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__TextGoToLineWidget_SuperFocusInEvent(TextCustomEditor__TextGoToLineWidget* self, QFocusEvent* event) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->setTextCustomEditor__TextGoToLineWidget_FocusInEvent_IsBase(true);
        vtextcustomeditortextgotolinewidget->focusInEvent(event);
    } else {
        ((VirtualTextCustomEditorTextGoToLineWidget*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextGoToLineWidget_OnFocusInEvent(TextCustomEditor__TextGoToLineWidget* self, intptr_t slot) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->setTextCustomEditor__TextGoToLineWidget_FocusInEvent_Callback(reinterpret_cast<VirtualTextCustomEditorTextGoToLineWidget::TextCustomEditor__TextGoToLineWidget_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__TextGoToLineWidget_FocusOutEvent(TextCustomEditor__TextGoToLineWidget* self, QFocusEvent* event) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->focusOutEvent(event);
    } else {
        ((VirtualTextCustomEditorTextGoToLineWidget*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__TextGoToLineWidget_SuperFocusOutEvent(TextCustomEditor__TextGoToLineWidget* self, QFocusEvent* event) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->setTextCustomEditor__TextGoToLineWidget_FocusOutEvent_IsBase(true);
        vtextcustomeditortextgotolinewidget->focusOutEvent(event);
    } else {
        ((VirtualTextCustomEditorTextGoToLineWidget*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextGoToLineWidget_OnFocusOutEvent(TextCustomEditor__TextGoToLineWidget* self, intptr_t slot) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->setTextCustomEditor__TextGoToLineWidget_FocusOutEvent_Callback(reinterpret_cast<VirtualTextCustomEditorTextGoToLineWidget::TextCustomEditor__TextGoToLineWidget_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__TextGoToLineWidget_EnterEvent(TextCustomEditor__TextGoToLineWidget* self, QEnterEvent* event) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->enterEvent(event);
    } else {
        ((VirtualTextCustomEditorTextGoToLineWidget*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__TextGoToLineWidget_SuperEnterEvent(TextCustomEditor__TextGoToLineWidget* self, QEnterEvent* event) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->setTextCustomEditor__TextGoToLineWidget_EnterEvent_IsBase(true);
        vtextcustomeditortextgotolinewidget->enterEvent(event);
    } else {
        ((VirtualTextCustomEditorTextGoToLineWidget*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextGoToLineWidget_OnEnterEvent(TextCustomEditor__TextGoToLineWidget* self, intptr_t slot) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->setTextCustomEditor__TextGoToLineWidget_EnterEvent_Callback(reinterpret_cast<VirtualTextCustomEditorTextGoToLineWidget::TextCustomEditor__TextGoToLineWidget_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__TextGoToLineWidget_LeaveEvent(TextCustomEditor__TextGoToLineWidget* self, QEvent* event) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->leaveEvent(event);
    } else {
        ((VirtualTextCustomEditorTextGoToLineWidget*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__TextGoToLineWidget_SuperLeaveEvent(TextCustomEditor__TextGoToLineWidget* self, QEvent* event) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->setTextCustomEditor__TextGoToLineWidget_LeaveEvent_IsBase(true);
        vtextcustomeditortextgotolinewidget->leaveEvent(event);
    } else {
        ((VirtualTextCustomEditorTextGoToLineWidget*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextGoToLineWidget_OnLeaveEvent(TextCustomEditor__TextGoToLineWidget* self, intptr_t slot) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->setTextCustomEditor__TextGoToLineWidget_LeaveEvent_Callback(reinterpret_cast<VirtualTextCustomEditorTextGoToLineWidget::TextCustomEditor__TextGoToLineWidget_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__TextGoToLineWidget_PaintEvent(TextCustomEditor__TextGoToLineWidget* self, QPaintEvent* event) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->paintEvent(event);
    } else {
        ((VirtualTextCustomEditorTextGoToLineWidget*)self)->paintEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__TextGoToLineWidget_SuperPaintEvent(TextCustomEditor__TextGoToLineWidget* self, QPaintEvent* event) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->setTextCustomEditor__TextGoToLineWidget_PaintEvent_IsBase(true);
        vtextcustomeditortextgotolinewidget->paintEvent(event);
    } else {
        ((VirtualTextCustomEditorTextGoToLineWidget*)self)->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextGoToLineWidget_OnPaintEvent(TextCustomEditor__TextGoToLineWidget* self, intptr_t slot) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->setTextCustomEditor__TextGoToLineWidget_PaintEvent_Callback(reinterpret_cast<VirtualTextCustomEditorTextGoToLineWidget::TextCustomEditor__TextGoToLineWidget_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__TextGoToLineWidget_MoveEvent(TextCustomEditor__TextGoToLineWidget* self, QMoveEvent* event) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->moveEvent(event);
    } else {
        ((VirtualTextCustomEditorTextGoToLineWidget*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__TextGoToLineWidget_SuperMoveEvent(TextCustomEditor__TextGoToLineWidget* self, QMoveEvent* event) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->setTextCustomEditor__TextGoToLineWidget_MoveEvent_IsBase(true);
        vtextcustomeditortextgotolinewidget->moveEvent(event);
    } else {
        ((VirtualTextCustomEditorTextGoToLineWidget*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextGoToLineWidget_OnMoveEvent(TextCustomEditor__TextGoToLineWidget* self, intptr_t slot) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->setTextCustomEditor__TextGoToLineWidget_MoveEvent_Callback(reinterpret_cast<VirtualTextCustomEditorTextGoToLineWidget::TextCustomEditor__TextGoToLineWidget_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__TextGoToLineWidget_ResizeEvent(TextCustomEditor__TextGoToLineWidget* self, QResizeEvent* event) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->resizeEvent(event);
    } else {
        ((VirtualTextCustomEditorTextGoToLineWidget*)self)->resizeEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__TextGoToLineWidget_SuperResizeEvent(TextCustomEditor__TextGoToLineWidget* self, QResizeEvent* event) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->setTextCustomEditor__TextGoToLineWidget_ResizeEvent_IsBase(true);
        vtextcustomeditortextgotolinewidget->resizeEvent(event);
    } else {
        ((VirtualTextCustomEditorTextGoToLineWidget*)self)->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextGoToLineWidget_OnResizeEvent(TextCustomEditor__TextGoToLineWidget* self, intptr_t slot) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->setTextCustomEditor__TextGoToLineWidget_ResizeEvent_Callback(reinterpret_cast<VirtualTextCustomEditorTextGoToLineWidget::TextCustomEditor__TextGoToLineWidget_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__TextGoToLineWidget_CloseEvent(TextCustomEditor__TextGoToLineWidget* self, QCloseEvent* event) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->closeEvent(event);
    } else {
        ((VirtualTextCustomEditorTextGoToLineWidget*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__TextGoToLineWidget_SuperCloseEvent(TextCustomEditor__TextGoToLineWidget* self, QCloseEvent* event) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->setTextCustomEditor__TextGoToLineWidget_CloseEvent_IsBase(true);
        vtextcustomeditortextgotolinewidget->closeEvent(event);
    } else {
        ((VirtualTextCustomEditorTextGoToLineWidget*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextGoToLineWidget_OnCloseEvent(TextCustomEditor__TextGoToLineWidget* self, intptr_t slot) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->setTextCustomEditor__TextGoToLineWidget_CloseEvent_Callback(reinterpret_cast<VirtualTextCustomEditorTextGoToLineWidget::TextCustomEditor__TextGoToLineWidget_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__TextGoToLineWidget_ContextMenuEvent(TextCustomEditor__TextGoToLineWidget* self, QContextMenuEvent* event) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->contextMenuEvent(event);
    } else {
        ((VirtualTextCustomEditorTextGoToLineWidget*)self)->contextMenuEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__TextGoToLineWidget_SuperContextMenuEvent(TextCustomEditor__TextGoToLineWidget* self, QContextMenuEvent* event) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->setTextCustomEditor__TextGoToLineWidget_ContextMenuEvent_IsBase(true);
        vtextcustomeditortextgotolinewidget->contextMenuEvent(event);
    } else {
        ((VirtualTextCustomEditorTextGoToLineWidget*)self)->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextGoToLineWidget_OnContextMenuEvent(TextCustomEditor__TextGoToLineWidget* self, intptr_t slot) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->setTextCustomEditor__TextGoToLineWidget_ContextMenuEvent_Callback(reinterpret_cast<VirtualTextCustomEditorTextGoToLineWidget::TextCustomEditor__TextGoToLineWidget_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__TextGoToLineWidget_TabletEvent(TextCustomEditor__TextGoToLineWidget* self, QTabletEvent* event) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->tabletEvent(event);
    } else {
        ((VirtualTextCustomEditorTextGoToLineWidget*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__TextGoToLineWidget_SuperTabletEvent(TextCustomEditor__TextGoToLineWidget* self, QTabletEvent* event) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->setTextCustomEditor__TextGoToLineWidget_TabletEvent_IsBase(true);
        vtextcustomeditortextgotolinewidget->tabletEvent(event);
    } else {
        ((VirtualTextCustomEditorTextGoToLineWidget*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextGoToLineWidget_OnTabletEvent(TextCustomEditor__TextGoToLineWidget* self, intptr_t slot) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->setTextCustomEditor__TextGoToLineWidget_TabletEvent_Callback(reinterpret_cast<VirtualTextCustomEditorTextGoToLineWidget::TextCustomEditor__TextGoToLineWidget_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__TextGoToLineWidget_ActionEvent(TextCustomEditor__TextGoToLineWidget* self, QActionEvent* event) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->actionEvent(event);
    } else {
        ((VirtualTextCustomEditorTextGoToLineWidget*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__TextGoToLineWidget_SuperActionEvent(TextCustomEditor__TextGoToLineWidget* self, QActionEvent* event) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->setTextCustomEditor__TextGoToLineWidget_ActionEvent_IsBase(true);
        vtextcustomeditortextgotolinewidget->actionEvent(event);
    } else {
        ((VirtualTextCustomEditorTextGoToLineWidget*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextGoToLineWidget_OnActionEvent(TextCustomEditor__TextGoToLineWidget* self, intptr_t slot) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->setTextCustomEditor__TextGoToLineWidget_ActionEvent_Callback(reinterpret_cast<VirtualTextCustomEditorTextGoToLineWidget::TextCustomEditor__TextGoToLineWidget_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__TextGoToLineWidget_DragEnterEvent(TextCustomEditor__TextGoToLineWidget* self, QDragEnterEvent* event) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->dragEnterEvent(event);
    } else {
        ((VirtualTextCustomEditorTextGoToLineWidget*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__TextGoToLineWidget_SuperDragEnterEvent(TextCustomEditor__TextGoToLineWidget* self, QDragEnterEvent* event) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->setTextCustomEditor__TextGoToLineWidget_DragEnterEvent_IsBase(true);
        vtextcustomeditortextgotolinewidget->dragEnterEvent(event);
    } else {
        ((VirtualTextCustomEditorTextGoToLineWidget*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextGoToLineWidget_OnDragEnterEvent(TextCustomEditor__TextGoToLineWidget* self, intptr_t slot) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->setTextCustomEditor__TextGoToLineWidget_DragEnterEvent_Callback(reinterpret_cast<VirtualTextCustomEditorTextGoToLineWidget::TextCustomEditor__TextGoToLineWidget_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__TextGoToLineWidget_DragMoveEvent(TextCustomEditor__TextGoToLineWidget* self, QDragMoveEvent* event) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->dragMoveEvent(event);
    } else {
        ((VirtualTextCustomEditorTextGoToLineWidget*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__TextGoToLineWidget_SuperDragMoveEvent(TextCustomEditor__TextGoToLineWidget* self, QDragMoveEvent* event) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->setTextCustomEditor__TextGoToLineWidget_DragMoveEvent_IsBase(true);
        vtextcustomeditortextgotolinewidget->dragMoveEvent(event);
    } else {
        ((VirtualTextCustomEditorTextGoToLineWidget*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextGoToLineWidget_OnDragMoveEvent(TextCustomEditor__TextGoToLineWidget* self, intptr_t slot) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->setTextCustomEditor__TextGoToLineWidget_DragMoveEvent_Callback(reinterpret_cast<VirtualTextCustomEditorTextGoToLineWidget::TextCustomEditor__TextGoToLineWidget_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__TextGoToLineWidget_DragLeaveEvent(TextCustomEditor__TextGoToLineWidget* self, QDragLeaveEvent* event) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->dragLeaveEvent(event);
    } else {
        ((VirtualTextCustomEditorTextGoToLineWidget*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__TextGoToLineWidget_SuperDragLeaveEvent(TextCustomEditor__TextGoToLineWidget* self, QDragLeaveEvent* event) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->setTextCustomEditor__TextGoToLineWidget_DragLeaveEvent_IsBase(true);
        vtextcustomeditortextgotolinewidget->dragLeaveEvent(event);
    } else {
        ((VirtualTextCustomEditorTextGoToLineWidget*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextGoToLineWidget_OnDragLeaveEvent(TextCustomEditor__TextGoToLineWidget* self, intptr_t slot) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->setTextCustomEditor__TextGoToLineWidget_DragLeaveEvent_Callback(reinterpret_cast<VirtualTextCustomEditorTextGoToLineWidget::TextCustomEditor__TextGoToLineWidget_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__TextGoToLineWidget_DropEvent(TextCustomEditor__TextGoToLineWidget* self, QDropEvent* event) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->dropEvent(event);
    } else {
        ((VirtualTextCustomEditorTextGoToLineWidget*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__TextGoToLineWidget_SuperDropEvent(TextCustomEditor__TextGoToLineWidget* self, QDropEvent* event) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->setTextCustomEditor__TextGoToLineWidget_DropEvent_IsBase(true);
        vtextcustomeditortextgotolinewidget->dropEvent(event);
    } else {
        ((VirtualTextCustomEditorTextGoToLineWidget*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextGoToLineWidget_OnDropEvent(TextCustomEditor__TextGoToLineWidget* self, intptr_t slot) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->setTextCustomEditor__TextGoToLineWidget_DropEvent_Callback(reinterpret_cast<VirtualTextCustomEditorTextGoToLineWidget::TextCustomEditor__TextGoToLineWidget_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__TextGoToLineWidget_HideEvent(TextCustomEditor__TextGoToLineWidget* self, QHideEvent* event) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->hideEvent(event);
    } else {
        ((VirtualTextCustomEditorTextGoToLineWidget*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__TextGoToLineWidget_SuperHideEvent(TextCustomEditor__TextGoToLineWidget* self, QHideEvent* event) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->setTextCustomEditor__TextGoToLineWidget_HideEvent_IsBase(true);
        vtextcustomeditortextgotolinewidget->hideEvent(event);
    } else {
        ((VirtualTextCustomEditorTextGoToLineWidget*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextGoToLineWidget_OnHideEvent(TextCustomEditor__TextGoToLineWidget* self, intptr_t slot) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->setTextCustomEditor__TextGoToLineWidget_HideEvent_Callback(reinterpret_cast<VirtualTextCustomEditorTextGoToLineWidget::TextCustomEditor__TextGoToLineWidget_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextCustomEditor__TextGoToLineWidget_NativeEvent(TextCustomEditor__TextGoToLineWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        return vtextcustomeditortextgotolinewidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualTextCustomEditorTextGoToLineWidget*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool TextCustomEditor__TextGoToLineWidget_SuperNativeEvent(TextCustomEditor__TextGoToLineWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->setTextCustomEditor__TextGoToLineWidget_NativeEvent_IsBase(true);
        return vtextcustomeditortextgotolinewidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualTextCustomEditorTextGoToLineWidget*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextGoToLineWidget_OnNativeEvent(TextCustomEditor__TextGoToLineWidget* self, intptr_t slot) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->setTextCustomEditor__TextGoToLineWidget_NativeEvent_Callback(reinterpret_cast<VirtualTextCustomEditorTextGoToLineWidget::TextCustomEditor__TextGoToLineWidget_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__TextGoToLineWidget_ChangeEvent(TextCustomEditor__TextGoToLineWidget* self, QEvent* param1) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->changeEvent(param1);
    } else {
        ((VirtualTextCustomEditorTextGoToLineWidget*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void TextCustomEditor__TextGoToLineWidget_SuperChangeEvent(TextCustomEditor__TextGoToLineWidget* self, QEvent* param1) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->setTextCustomEditor__TextGoToLineWidget_ChangeEvent_IsBase(true);
        vtextcustomeditortextgotolinewidget->changeEvent(param1);
    } else {
        ((VirtualTextCustomEditorTextGoToLineWidget*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextGoToLineWidget_OnChangeEvent(TextCustomEditor__TextGoToLineWidget* self, intptr_t slot) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->setTextCustomEditor__TextGoToLineWidget_ChangeEvent_Callback(reinterpret_cast<VirtualTextCustomEditorTextGoToLineWidget::TextCustomEditor__TextGoToLineWidget_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int TextCustomEditor__TextGoToLineWidget_Metric(const TextCustomEditor__TextGoToLineWidget* self, int param1) {
    auto* vtextcustomeditortextgotolinewidget = const_cast<VirtualTextCustomEditorTextGoToLineWidget*>(dynamic_cast<const VirtualTextCustomEditorTextGoToLineWidget*>(self));
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        return vtextcustomeditortextgotolinewidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualTextCustomEditorTextGoToLineWidget*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int TextCustomEditor__TextGoToLineWidget_SuperMetric(const TextCustomEditor__TextGoToLineWidget* self, int param1) {
    auto* vtextcustomeditortextgotolinewidget = const_cast<VirtualTextCustomEditorTextGoToLineWidget*>(dynamic_cast<const VirtualTextCustomEditorTextGoToLineWidget*>(self));
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->setTextCustomEditor__TextGoToLineWidget_Metric_IsBase(true);
        return vtextcustomeditortextgotolinewidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualTextCustomEditorTextGoToLineWidget*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextGoToLineWidget_OnMetric(const TextCustomEditor__TextGoToLineWidget* self, intptr_t slot) {
    auto* vtextcustomeditortextgotolinewidget = const_cast<VirtualTextCustomEditorTextGoToLineWidget*>(dynamic_cast<const VirtualTextCustomEditorTextGoToLineWidget*>(self));
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->setTextCustomEditor__TextGoToLineWidget_Metric_Callback(reinterpret_cast<VirtualTextCustomEditorTextGoToLineWidget::TextCustomEditor__TextGoToLineWidget_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__TextGoToLineWidget_InitPainter(const TextCustomEditor__TextGoToLineWidget* self, QPainter* painter) {
    auto* vtextcustomeditortextgotolinewidget = const_cast<VirtualTextCustomEditorTextGoToLineWidget*>(dynamic_cast<const VirtualTextCustomEditorTextGoToLineWidget*>(self));
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->initPainter(painter);
    } else {
        ((VirtualTextCustomEditorTextGoToLineWidget*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void TextCustomEditor__TextGoToLineWidget_SuperInitPainter(const TextCustomEditor__TextGoToLineWidget* self, QPainter* painter) {
    auto* vtextcustomeditortextgotolinewidget = const_cast<VirtualTextCustomEditorTextGoToLineWidget*>(dynamic_cast<const VirtualTextCustomEditorTextGoToLineWidget*>(self));
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->setTextCustomEditor__TextGoToLineWidget_InitPainter_IsBase(true);
        vtextcustomeditortextgotolinewidget->initPainter(painter);
    } else {
        ((VirtualTextCustomEditorTextGoToLineWidget*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextGoToLineWidget_OnInitPainter(const TextCustomEditor__TextGoToLineWidget* self, intptr_t slot) {
    auto* vtextcustomeditortextgotolinewidget = const_cast<VirtualTextCustomEditorTextGoToLineWidget*>(dynamic_cast<const VirtualTextCustomEditorTextGoToLineWidget*>(self));
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->setTextCustomEditor__TextGoToLineWidget_InitPainter_Callback(reinterpret_cast<VirtualTextCustomEditorTextGoToLineWidget::TextCustomEditor__TextGoToLineWidget_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* TextCustomEditor__TextGoToLineWidget_Redirected(const TextCustomEditor__TextGoToLineWidget* self, QPoint* offset) {
    auto* vtextcustomeditortextgotolinewidget = const_cast<VirtualTextCustomEditorTextGoToLineWidget*>(dynamic_cast<const VirtualTextCustomEditorTextGoToLineWidget*>(self));
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        return vtextcustomeditortextgotolinewidget->redirected(offset);
    } else {
        return ((VirtualTextCustomEditorTextGoToLineWidget*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* TextCustomEditor__TextGoToLineWidget_SuperRedirected(const TextCustomEditor__TextGoToLineWidget* self, QPoint* offset) {
    auto* vtextcustomeditortextgotolinewidget = const_cast<VirtualTextCustomEditorTextGoToLineWidget*>(dynamic_cast<const VirtualTextCustomEditorTextGoToLineWidget*>(self));
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->setTextCustomEditor__TextGoToLineWidget_Redirected_IsBase(true);
        return vtextcustomeditortextgotolinewidget->redirected(offset);
    } else {
        return ((VirtualTextCustomEditorTextGoToLineWidget*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextGoToLineWidget_OnRedirected(const TextCustomEditor__TextGoToLineWidget* self, intptr_t slot) {
    auto* vtextcustomeditortextgotolinewidget = const_cast<VirtualTextCustomEditorTextGoToLineWidget*>(dynamic_cast<const VirtualTextCustomEditorTextGoToLineWidget*>(self));
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->setTextCustomEditor__TextGoToLineWidget_Redirected_Callback(reinterpret_cast<VirtualTextCustomEditorTextGoToLineWidget::TextCustomEditor__TextGoToLineWidget_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* TextCustomEditor__TextGoToLineWidget_SharedPainter(const TextCustomEditor__TextGoToLineWidget* self) {
    auto* vtextcustomeditortextgotolinewidget = const_cast<VirtualTextCustomEditorTextGoToLineWidget*>(dynamic_cast<const VirtualTextCustomEditorTextGoToLineWidget*>(self));
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        return vtextcustomeditortextgotolinewidget->sharedPainter();
    } else {
        return ((VirtualTextCustomEditorTextGoToLineWidget*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* TextCustomEditor__TextGoToLineWidget_SuperSharedPainter(const TextCustomEditor__TextGoToLineWidget* self) {
    auto* vtextcustomeditortextgotolinewidget = const_cast<VirtualTextCustomEditorTextGoToLineWidget*>(dynamic_cast<const VirtualTextCustomEditorTextGoToLineWidget*>(self));
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->setTextCustomEditor__TextGoToLineWidget_SharedPainter_IsBase(true);
        return vtextcustomeditortextgotolinewidget->sharedPainter();
    } else {
        return ((VirtualTextCustomEditorTextGoToLineWidget*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextGoToLineWidget_OnSharedPainter(const TextCustomEditor__TextGoToLineWidget* self, intptr_t slot) {
    auto* vtextcustomeditortextgotolinewidget = const_cast<VirtualTextCustomEditorTextGoToLineWidget*>(dynamic_cast<const VirtualTextCustomEditorTextGoToLineWidget*>(self));
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->setTextCustomEditor__TextGoToLineWidget_SharedPainter_Callback(reinterpret_cast<VirtualTextCustomEditorTextGoToLineWidget::TextCustomEditor__TextGoToLineWidget_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__TextGoToLineWidget_InputMethodEvent(TextCustomEditor__TextGoToLineWidget* self, QInputMethodEvent* param1) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->inputMethodEvent(param1);
    } else {
        ((VirtualTextCustomEditorTextGoToLineWidget*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void TextCustomEditor__TextGoToLineWidget_SuperInputMethodEvent(TextCustomEditor__TextGoToLineWidget* self, QInputMethodEvent* param1) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->setTextCustomEditor__TextGoToLineWidget_InputMethodEvent_IsBase(true);
        vtextcustomeditortextgotolinewidget->inputMethodEvent(param1);
    } else {
        ((VirtualTextCustomEditorTextGoToLineWidget*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextGoToLineWidget_OnInputMethodEvent(TextCustomEditor__TextGoToLineWidget* self, intptr_t slot) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->setTextCustomEditor__TextGoToLineWidget_InputMethodEvent_Callback(reinterpret_cast<VirtualTextCustomEditorTextGoToLineWidget::TextCustomEditor__TextGoToLineWidget_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* TextCustomEditor__TextGoToLineWidget_InputMethodQuery(const TextCustomEditor__TextGoToLineWidget* self, int param1) {
    auto* vtextcustomeditortextgotolinewidget = const_cast<VirtualTextCustomEditorTextGoToLineWidget*>(dynamic_cast<const VirtualTextCustomEditorTextGoToLineWidget*>(self));
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        return new QVariant(vtextcustomeditortextgotolinewidget->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualTextCustomEditorTextGoToLineWidget*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* TextCustomEditor__TextGoToLineWidget_SuperInputMethodQuery(const TextCustomEditor__TextGoToLineWidget* self, int param1) {
    auto* vtextcustomeditortextgotolinewidget = const_cast<VirtualTextCustomEditorTextGoToLineWidget*>(dynamic_cast<const VirtualTextCustomEditorTextGoToLineWidget*>(self));
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->setTextCustomEditor__TextGoToLineWidget_InputMethodQuery_IsBase(true);
        return new QVariant(vtextcustomeditortextgotolinewidget->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualTextCustomEditorTextGoToLineWidget*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextGoToLineWidget_OnInputMethodQuery(const TextCustomEditor__TextGoToLineWidget* self, intptr_t slot) {
    auto* vtextcustomeditortextgotolinewidget = const_cast<VirtualTextCustomEditorTextGoToLineWidget*>(dynamic_cast<const VirtualTextCustomEditorTextGoToLineWidget*>(self));
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->setTextCustomEditor__TextGoToLineWidget_InputMethodQuery_Callback(reinterpret_cast<VirtualTextCustomEditorTextGoToLineWidget::TextCustomEditor__TextGoToLineWidget_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextCustomEditor__TextGoToLineWidget_FocusNextPrevChild(TextCustomEditor__TextGoToLineWidget* self, bool next) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        return vtextcustomeditortextgotolinewidget->focusNextPrevChild(next);
    } else {
        return ((VirtualTextCustomEditorTextGoToLineWidget*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool TextCustomEditor__TextGoToLineWidget_SuperFocusNextPrevChild(TextCustomEditor__TextGoToLineWidget* self, bool next) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->setTextCustomEditor__TextGoToLineWidget_FocusNextPrevChild_IsBase(true);
        return vtextcustomeditortextgotolinewidget->focusNextPrevChild(next);
    } else {
        return ((VirtualTextCustomEditorTextGoToLineWidget*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextGoToLineWidget_OnFocusNextPrevChild(TextCustomEditor__TextGoToLineWidget* self, intptr_t slot) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->setTextCustomEditor__TextGoToLineWidget_FocusNextPrevChild_Callback(reinterpret_cast<VirtualTextCustomEditorTextGoToLineWidget::TextCustomEditor__TextGoToLineWidget_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__TextGoToLineWidget_TimerEvent(TextCustomEditor__TextGoToLineWidget* self, QTimerEvent* event) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->timerEvent(event);
    } else {
        ((VirtualTextCustomEditorTextGoToLineWidget*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__TextGoToLineWidget_SuperTimerEvent(TextCustomEditor__TextGoToLineWidget* self, QTimerEvent* event) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->setTextCustomEditor__TextGoToLineWidget_TimerEvent_IsBase(true);
        vtextcustomeditortextgotolinewidget->timerEvent(event);
    } else {
        ((VirtualTextCustomEditorTextGoToLineWidget*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextGoToLineWidget_OnTimerEvent(TextCustomEditor__TextGoToLineWidget* self, intptr_t slot) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->setTextCustomEditor__TextGoToLineWidget_TimerEvent_Callback(reinterpret_cast<VirtualTextCustomEditorTextGoToLineWidget::TextCustomEditor__TextGoToLineWidget_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__TextGoToLineWidget_ChildEvent(TextCustomEditor__TextGoToLineWidget* self, QChildEvent* event) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->childEvent(event);
    } else {
        ((VirtualTextCustomEditorTextGoToLineWidget*)self)->childEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__TextGoToLineWidget_SuperChildEvent(TextCustomEditor__TextGoToLineWidget* self, QChildEvent* event) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->setTextCustomEditor__TextGoToLineWidget_ChildEvent_IsBase(true);
        vtextcustomeditortextgotolinewidget->childEvent(event);
    } else {
        ((VirtualTextCustomEditorTextGoToLineWidget*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextGoToLineWidget_OnChildEvent(TextCustomEditor__TextGoToLineWidget* self, intptr_t slot) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->setTextCustomEditor__TextGoToLineWidget_ChildEvent_Callback(reinterpret_cast<VirtualTextCustomEditorTextGoToLineWidget::TextCustomEditor__TextGoToLineWidget_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__TextGoToLineWidget_CustomEvent(TextCustomEditor__TextGoToLineWidget* self, QEvent* event) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->customEvent(event);
    } else {
        ((VirtualTextCustomEditorTextGoToLineWidget*)self)->customEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__TextGoToLineWidget_SuperCustomEvent(TextCustomEditor__TextGoToLineWidget* self, QEvent* event) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->setTextCustomEditor__TextGoToLineWidget_CustomEvent_IsBase(true);
        vtextcustomeditortextgotolinewidget->customEvent(event);
    } else {
        ((VirtualTextCustomEditorTextGoToLineWidget*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextGoToLineWidget_OnCustomEvent(TextCustomEditor__TextGoToLineWidget* self, intptr_t slot) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->setTextCustomEditor__TextGoToLineWidget_CustomEvent_Callback(reinterpret_cast<VirtualTextCustomEditorTextGoToLineWidget::TextCustomEditor__TextGoToLineWidget_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__TextGoToLineWidget_ConnectNotify(TextCustomEditor__TextGoToLineWidget* self, const QMetaMethod* signal) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->connectNotify(*signal);
    } else {
        ((VirtualTextCustomEditorTextGoToLineWidget*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void TextCustomEditor__TextGoToLineWidget_SuperConnectNotify(TextCustomEditor__TextGoToLineWidget* self, const QMetaMethod* signal) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->setTextCustomEditor__TextGoToLineWidget_ConnectNotify_IsBase(true);
        vtextcustomeditortextgotolinewidget->connectNotify(*signal);
    } else {
        ((VirtualTextCustomEditorTextGoToLineWidget*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextGoToLineWidget_OnConnectNotify(TextCustomEditor__TextGoToLineWidget* self, intptr_t slot) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->setTextCustomEditor__TextGoToLineWidget_ConnectNotify_Callback(reinterpret_cast<VirtualTextCustomEditorTextGoToLineWidget::TextCustomEditor__TextGoToLineWidget_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__TextGoToLineWidget_DisconnectNotify(TextCustomEditor__TextGoToLineWidget* self, const QMetaMethod* signal) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->disconnectNotify(*signal);
    } else {
        ((VirtualTextCustomEditorTextGoToLineWidget*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void TextCustomEditor__TextGoToLineWidget_SuperDisconnectNotify(TextCustomEditor__TextGoToLineWidget* self, const QMetaMethod* signal) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->setTextCustomEditor__TextGoToLineWidget_DisconnectNotify_IsBase(true);
        vtextcustomeditortextgotolinewidget->disconnectNotify(*signal);
    } else {
        ((VirtualTextCustomEditorTextGoToLineWidget*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextGoToLineWidget_OnDisconnectNotify(TextCustomEditor__TextGoToLineWidget* self, intptr_t slot) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->setTextCustomEditor__TextGoToLineWidget_DisconnectNotify_Callback(reinterpret_cast<VirtualTextCustomEditorTextGoToLineWidget::TextCustomEditor__TextGoToLineWidget_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__TextGoToLineWidget_UpdateMicroFocus(TextCustomEditor__TextGoToLineWidget* self) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->updateMicroFocus();
    } else {
        ((VirtualTextCustomEditorTextGoToLineWidget*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void TextCustomEditor__TextGoToLineWidget_SuperUpdateMicroFocus(TextCustomEditor__TextGoToLineWidget* self) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->setTextCustomEditor__TextGoToLineWidget_UpdateMicroFocus_IsBase(true);
        vtextcustomeditortextgotolinewidget->updateMicroFocus();
    } else {
        ((VirtualTextCustomEditorTextGoToLineWidget*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextGoToLineWidget_OnUpdateMicroFocus(TextCustomEditor__TextGoToLineWidget* self, intptr_t slot) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->setTextCustomEditor__TextGoToLineWidget_UpdateMicroFocus_Callback(reinterpret_cast<VirtualTextCustomEditorTextGoToLineWidget::TextCustomEditor__TextGoToLineWidget_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__TextGoToLineWidget_Create(TextCustomEditor__TextGoToLineWidget* self) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->create();
    } else {
        ((VirtualTextCustomEditorTextGoToLineWidget*)self)->create();
    }
}

// Base class handler implementation
void TextCustomEditor__TextGoToLineWidget_SuperCreate(TextCustomEditor__TextGoToLineWidget* self) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->setTextCustomEditor__TextGoToLineWidget_Create_IsBase(true);
        vtextcustomeditortextgotolinewidget->create();
    } else {
        ((VirtualTextCustomEditorTextGoToLineWidget*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextGoToLineWidget_OnCreate(TextCustomEditor__TextGoToLineWidget* self, intptr_t slot) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->setTextCustomEditor__TextGoToLineWidget_Create_Callback(reinterpret_cast<VirtualTextCustomEditorTextGoToLineWidget::TextCustomEditor__TextGoToLineWidget_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__TextGoToLineWidget_Destroy(TextCustomEditor__TextGoToLineWidget* self) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->destroy();
    } else {
        ((VirtualTextCustomEditorTextGoToLineWidget*)self)->destroy();
    }
}

// Base class handler implementation
void TextCustomEditor__TextGoToLineWidget_SuperDestroy(TextCustomEditor__TextGoToLineWidget* self) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->setTextCustomEditor__TextGoToLineWidget_Destroy_IsBase(true);
        vtextcustomeditortextgotolinewidget->destroy();
    } else {
        ((VirtualTextCustomEditorTextGoToLineWidget*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextGoToLineWidget_OnDestroy(TextCustomEditor__TextGoToLineWidget* self, intptr_t slot) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->setTextCustomEditor__TextGoToLineWidget_Destroy_Callback(reinterpret_cast<VirtualTextCustomEditorTextGoToLineWidget::TextCustomEditor__TextGoToLineWidget_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextCustomEditor__TextGoToLineWidget_FocusNextChild(TextCustomEditor__TextGoToLineWidget* self) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        return vtextcustomeditortextgotolinewidget->focusNextChild();
    } else {
        return ((VirtualTextCustomEditorTextGoToLineWidget*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool TextCustomEditor__TextGoToLineWidget_SuperFocusNextChild(TextCustomEditor__TextGoToLineWidget* self) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->setTextCustomEditor__TextGoToLineWidget_FocusNextChild_IsBase(true);
        return vtextcustomeditortextgotolinewidget->focusNextChild();
    } else {
        return ((VirtualTextCustomEditorTextGoToLineWidget*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextGoToLineWidget_OnFocusNextChild(TextCustomEditor__TextGoToLineWidget* self, intptr_t slot) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->setTextCustomEditor__TextGoToLineWidget_FocusNextChild_Callback(reinterpret_cast<VirtualTextCustomEditorTextGoToLineWidget::TextCustomEditor__TextGoToLineWidget_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextCustomEditor__TextGoToLineWidget_FocusPreviousChild(TextCustomEditor__TextGoToLineWidget* self) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        return vtextcustomeditortextgotolinewidget->focusPreviousChild();
    } else {
        return ((VirtualTextCustomEditorTextGoToLineWidget*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool TextCustomEditor__TextGoToLineWidget_SuperFocusPreviousChild(TextCustomEditor__TextGoToLineWidget* self) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->setTextCustomEditor__TextGoToLineWidget_FocusPreviousChild_IsBase(true);
        return vtextcustomeditortextgotolinewidget->focusPreviousChild();
    } else {
        return ((VirtualTextCustomEditorTextGoToLineWidget*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextGoToLineWidget_OnFocusPreviousChild(TextCustomEditor__TextGoToLineWidget* self, intptr_t slot) {
    auto* vtextcustomeditortextgotolinewidget = dynamic_cast<VirtualTextCustomEditorTextGoToLineWidget*>(self);
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->setTextCustomEditor__TextGoToLineWidget_FocusPreviousChild_Callback(reinterpret_cast<VirtualTextCustomEditorTextGoToLineWidget::TextCustomEditor__TextGoToLineWidget_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* TextCustomEditor__TextGoToLineWidget_Sender(const TextCustomEditor__TextGoToLineWidget* self) {
    auto* vtextcustomeditortextgotolinewidget = const_cast<VirtualTextCustomEditorTextGoToLineWidget*>(dynamic_cast<const VirtualTextCustomEditorTextGoToLineWidget*>(self));
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        return vtextcustomeditortextgotolinewidget->sender();
    } else {
        return ((VirtualTextCustomEditorTextGoToLineWidget*)self)->sender();
    }
}

// Base class handler implementation
QObject* TextCustomEditor__TextGoToLineWidget_SuperSender(const TextCustomEditor__TextGoToLineWidget* self) {
    auto* vtextcustomeditortextgotolinewidget = const_cast<VirtualTextCustomEditorTextGoToLineWidget*>(dynamic_cast<const VirtualTextCustomEditorTextGoToLineWidget*>(self));
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->setTextCustomEditor__TextGoToLineWidget_Sender_IsBase(true);
        return vtextcustomeditortextgotolinewidget->sender();
    } else {
        return ((VirtualTextCustomEditorTextGoToLineWidget*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextGoToLineWidget_OnSender(const TextCustomEditor__TextGoToLineWidget* self, intptr_t slot) {
    auto* vtextcustomeditortextgotolinewidget = const_cast<VirtualTextCustomEditorTextGoToLineWidget*>(dynamic_cast<const VirtualTextCustomEditorTextGoToLineWidget*>(self));
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->setTextCustomEditor__TextGoToLineWidget_Sender_Callback(reinterpret_cast<VirtualTextCustomEditorTextGoToLineWidget::TextCustomEditor__TextGoToLineWidget_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int TextCustomEditor__TextGoToLineWidget_SenderSignalIndex(const TextCustomEditor__TextGoToLineWidget* self) {
    auto* vtextcustomeditortextgotolinewidget = const_cast<VirtualTextCustomEditorTextGoToLineWidget*>(dynamic_cast<const VirtualTextCustomEditorTextGoToLineWidget*>(self));
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        return vtextcustomeditortextgotolinewidget->senderSignalIndex();
    } else {
        return ((VirtualTextCustomEditorTextGoToLineWidget*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int TextCustomEditor__TextGoToLineWidget_SuperSenderSignalIndex(const TextCustomEditor__TextGoToLineWidget* self) {
    auto* vtextcustomeditortextgotolinewidget = const_cast<VirtualTextCustomEditorTextGoToLineWidget*>(dynamic_cast<const VirtualTextCustomEditorTextGoToLineWidget*>(self));
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->setTextCustomEditor__TextGoToLineWidget_SenderSignalIndex_IsBase(true);
        return vtextcustomeditortextgotolinewidget->senderSignalIndex();
    } else {
        return ((VirtualTextCustomEditorTextGoToLineWidget*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextGoToLineWidget_OnSenderSignalIndex(const TextCustomEditor__TextGoToLineWidget* self, intptr_t slot) {
    auto* vtextcustomeditortextgotolinewidget = const_cast<VirtualTextCustomEditorTextGoToLineWidget*>(dynamic_cast<const VirtualTextCustomEditorTextGoToLineWidget*>(self));
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->setTextCustomEditor__TextGoToLineWidget_SenderSignalIndex_Callback(reinterpret_cast<VirtualTextCustomEditorTextGoToLineWidget::TextCustomEditor__TextGoToLineWidget_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int TextCustomEditor__TextGoToLineWidget_Receivers(const TextCustomEditor__TextGoToLineWidget* self, const char* signal) {
    auto* vtextcustomeditortextgotolinewidget = const_cast<VirtualTextCustomEditorTextGoToLineWidget*>(dynamic_cast<const VirtualTextCustomEditorTextGoToLineWidget*>(self));
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        return vtextcustomeditortextgotolinewidget->receivers(signal);
    } else {
        return ((VirtualTextCustomEditorTextGoToLineWidget*)self)->receivers(signal);
    }
}

// Base class handler implementation
int TextCustomEditor__TextGoToLineWidget_SuperReceivers(const TextCustomEditor__TextGoToLineWidget* self, const char* signal) {
    auto* vtextcustomeditortextgotolinewidget = const_cast<VirtualTextCustomEditorTextGoToLineWidget*>(dynamic_cast<const VirtualTextCustomEditorTextGoToLineWidget*>(self));
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->setTextCustomEditor__TextGoToLineWidget_Receivers_IsBase(true);
        return vtextcustomeditortextgotolinewidget->receivers(signal);
    } else {
        return ((VirtualTextCustomEditorTextGoToLineWidget*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextGoToLineWidget_OnReceivers(const TextCustomEditor__TextGoToLineWidget* self, intptr_t slot) {
    auto* vtextcustomeditortextgotolinewidget = const_cast<VirtualTextCustomEditorTextGoToLineWidget*>(dynamic_cast<const VirtualTextCustomEditorTextGoToLineWidget*>(self));
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->setTextCustomEditor__TextGoToLineWidget_Receivers_Callback(reinterpret_cast<VirtualTextCustomEditorTextGoToLineWidget::TextCustomEditor__TextGoToLineWidget_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextCustomEditor__TextGoToLineWidget_IsSignalConnected(const TextCustomEditor__TextGoToLineWidget* self, const QMetaMethod* signal) {
    auto* vtextcustomeditortextgotolinewidget = const_cast<VirtualTextCustomEditorTextGoToLineWidget*>(dynamic_cast<const VirtualTextCustomEditorTextGoToLineWidget*>(self));
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        return vtextcustomeditortextgotolinewidget->isSignalConnected(*signal);
    } else {
        return ((VirtualTextCustomEditorTextGoToLineWidget*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool TextCustomEditor__TextGoToLineWidget_SuperIsSignalConnected(const TextCustomEditor__TextGoToLineWidget* self, const QMetaMethod* signal) {
    auto* vtextcustomeditortextgotolinewidget = const_cast<VirtualTextCustomEditorTextGoToLineWidget*>(dynamic_cast<const VirtualTextCustomEditorTextGoToLineWidget*>(self));
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->setTextCustomEditor__TextGoToLineWidget_IsSignalConnected_IsBase(true);
        return vtextcustomeditortextgotolinewidget->isSignalConnected(*signal);
    } else {
        return ((VirtualTextCustomEditorTextGoToLineWidget*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextGoToLineWidget_OnIsSignalConnected(const TextCustomEditor__TextGoToLineWidget* self, intptr_t slot) {
    auto* vtextcustomeditortextgotolinewidget = const_cast<VirtualTextCustomEditorTextGoToLineWidget*>(dynamic_cast<const VirtualTextCustomEditorTextGoToLineWidget*>(self));
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->setTextCustomEditor__TextGoToLineWidget_IsSignalConnected_Callback(reinterpret_cast<VirtualTextCustomEditorTextGoToLineWidget::TextCustomEditor__TextGoToLineWidget_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double TextCustomEditor__TextGoToLineWidget_GetDecodedMetricF(const TextCustomEditor__TextGoToLineWidget* self, int metricA, int metricB) {
    auto* vtextcustomeditortextgotolinewidget = const_cast<VirtualTextCustomEditorTextGoToLineWidget*>(dynamic_cast<const VirtualTextCustomEditorTextGoToLineWidget*>(self));
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        return vtextcustomeditortextgotolinewidget->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualTextCustomEditorTextGoToLineWidget*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double TextCustomEditor__TextGoToLineWidget_SuperGetDecodedMetricF(const TextCustomEditor__TextGoToLineWidget* self, int metricA, int metricB) {
    auto* vtextcustomeditortextgotolinewidget = const_cast<VirtualTextCustomEditorTextGoToLineWidget*>(dynamic_cast<const VirtualTextCustomEditorTextGoToLineWidget*>(self));
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->setTextCustomEditor__TextGoToLineWidget_GetDecodedMetricF_IsBase(true);
        return vtextcustomeditortextgotolinewidget->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualTextCustomEditorTextGoToLineWidget*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__TextGoToLineWidget_OnGetDecodedMetricF(const TextCustomEditor__TextGoToLineWidget* self, intptr_t slot) {
    auto* vtextcustomeditortextgotolinewidget = const_cast<VirtualTextCustomEditorTextGoToLineWidget*>(dynamic_cast<const VirtualTextCustomEditorTextGoToLineWidget*>(self));
    if (vtextcustomeditortextgotolinewidget && vtextcustomeditortextgotolinewidget->isVirtualTextCustomEditorTextGoToLineWidget) {
        vtextcustomeditortextgotolinewidget->setTextCustomEditor__TextGoToLineWidget_GetDecodedMetricF_Callback(reinterpret_cast<VirtualTextCustomEditorTextGoToLineWidget::TextCustomEditor__TextGoToLineWidget_GetDecodedMetricF_Callback>(slot));
    }
}

void TextCustomEditor__TextGoToLineWidget_Delete(TextCustomEditor__TextGoToLineWidget* self) {
    delete self;
}
