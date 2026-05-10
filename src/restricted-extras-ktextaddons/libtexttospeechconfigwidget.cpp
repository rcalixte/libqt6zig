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
#define WORKAROUND_INNER_CLASS_DEFINITION_TextEditTextToSpeech__TextToSpeechConfigWidget
#include <texttospeechconfigwidget.h>
#include "libtexttospeechconfigwidget.h"
#include "libtexttospeechconfigwidget.hxx"

TextEditTextToSpeech__TextToSpeechConfigWidget* TextEditTextToSpeech__TextToSpeechConfigWidget_new(QWidget* parent) {
    return new VirtualTextEditTextToSpeechTextToSpeechConfigWidget(parent);
}

TextEditTextToSpeech__TextToSpeechConfigWidget* TextEditTextToSpeech__TextToSpeechConfigWidget_new2() {
    return new VirtualTextEditTextToSpeechTextToSpeechConfigWidget();
}

QMetaObject* TextEditTextToSpeech__TextToSpeechConfigWidget_MetaObject(const TextEditTextToSpeech__TextToSpeechConfigWidget* self) {
    auto* vtextedittexttospeech__texttospeechconfigwidget = dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeech__texttospeechconfigwidget && vtextedittexttospeech__texttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        return (QMetaObject*)self->metaObject();
    } else {
        return (QMetaObject*)((VirtualTextEditTextToSpeechTextToSpeechConfigWidget*)self)->metaObject();
    }
}

void* TextEditTextToSpeech__TextToSpeechConfigWidget_Metacast(TextEditTextToSpeech__TextToSpeechConfigWidget* self, const char* param1) {
    auto* vtextedittexttospeech__texttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeech__texttospeechconfigwidget && vtextedittexttospeech__texttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        return self->qt_metacast(param1);
    } else {
        return ((VirtualTextEditTextToSpeechTextToSpeechConfigWidget*)self)->qt_metacast(param1);
    }
}

int TextEditTextToSpeech__TextToSpeechConfigWidget_Metacall(TextEditTextToSpeech__TextToSpeechConfigWidget* self, int param1, int param2, void** param3) {
    auto* vtextedittexttospeech__texttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeech__texttospeechconfigwidget && vtextedittexttospeech__texttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualTextEditTextToSpeechTextToSpeechConfigWidget*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

void TextEditTextToSpeech__TextToSpeechConfigWidget_InitializeSettings(TextEditTextToSpeech__TextToSpeechConfigWidget* self) {
    self->initializeSettings();
}

void TextEditTextToSpeech__TextToSpeechConfigWidget_WriteConfig(TextEditTextToSpeech__TextToSpeechConfigWidget* self) {
    self->writeConfig();
}

void TextEditTextToSpeech__TextToSpeechConfigWidget_ReadConfig(TextEditTextToSpeech__TextToSpeechConfigWidget* self) {
    self->readConfig();
}

void TextEditTextToSpeech__TextToSpeechConfigWidget_RestoreDefaults(TextEditTextToSpeech__TextToSpeechConfigWidget* self) {
    self->restoreDefaults();
}

void TextEditTextToSpeech__TextToSpeechConfigWidget_ConfigChanged(TextEditTextToSpeech__TextToSpeechConfigWidget* self, bool state) {
    self->configChanged(state);
}

void TextEditTextToSpeech__TextToSpeechConfigWidget_Connect_ConfigChanged(TextEditTextToSpeech__TextToSpeechConfigWidget* self, intptr_t slot) {
    void (*slotFunc)(TextEditTextToSpeech__TextToSpeechConfigWidget*, bool) = reinterpret_cast<void (*)(TextEditTextToSpeech__TextToSpeechConfigWidget*, bool)>(slot);
    TextEditTextToSpeech::TextToSpeechConfigWidget::connect(self, &TextEditTextToSpeech::TextToSpeechConfigWidget::configChanged, [self, slotFunc](bool state) {
        bool sigval1 = state;
        slotFunc(self, sigval1);
    });
}

// Base class handler implementation
QMetaObject* TextEditTextToSpeech__TextToSpeechConfigWidget_SuperMetaObject(const TextEditTextToSpeech__TextToSpeechConfigWidget* self) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self));
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->setTextEditTextToSpeech__TextToSpeechConfigWidget_MetaObject_IsBase(true);
        return (QMetaObject*)vtextedittexttospeechtexttospeechconfigwidget->metaObject();
    } else {
        return (QMetaObject*)self->TextEditTextToSpeech::TextToSpeechConfigWidget::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_OnMetaObject(const TextEditTextToSpeech__TextToSpeechConfigWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self));
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->setTextEditTextToSpeech__TextToSpeechConfigWidget_MetaObject_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget::TextEditTextToSpeech__TextToSpeechConfigWidget_MetaObject_Callback>(slot));
    }
}

// Base class handler implementation
void* TextEditTextToSpeech__TextToSpeechConfigWidget_SuperMetacast(TextEditTextToSpeech__TextToSpeechConfigWidget* self, const char* param1) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->setTextEditTextToSpeech__TextToSpeechConfigWidget_Metacast_IsBase(true);
        return vtextedittexttospeechtexttospeechconfigwidget->qt_metacast(param1);
    } else {
        return self->TextEditTextToSpeech::TextToSpeechConfigWidget::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_OnMetacast(TextEditTextToSpeech__TextToSpeechConfigWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->setTextEditTextToSpeech__TextToSpeechConfigWidget_Metacast_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget::TextEditTextToSpeech__TextToSpeechConfigWidget_Metacast_Callback>(slot));
    }
}

// Base class handler implementation
int TextEditTextToSpeech__TextToSpeechConfigWidget_SuperMetacall(TextEditTextToSpeech__TextToSpeechConfigWidget* self, int param1, int param2, void** param3) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->setTextEditTextToSpeech__TextToSpeechConfigWidget_Metacall_IsBase(true);
        return vtextedittexttospeechtexttospeechconfigwidget->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->TextEditTextToSpeech::TextToSpeechConfigWidget::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_OnMetacall(TextEditTextToSpeech__TextToSpeechConfigWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->setTextEditTextToSpeech__TextToSpeechConfigWidget_Metacall_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget::TextEditTextToSpeech__TextToSpeechConfigWidget_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
int TextEditTextToSpeech__TextToSpeechConfigWidget_DevType(const TextEditTextToSpeech__TextToSpeechConfigWidget* self) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self));
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        return vtextedittexttospeechtexttospeechconfigwidget->devType();
    } else {
        return self->TextEditTextToSpeech::TextToSpeechConfigWidget::devType();
    }
}

// Base class handler implementation
int TextEditTextToSpeech__TextToSpeechConfigWidget_SuperDevType(const TextEditTextToSpeech__TextToSpeechConfigWidget* self) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self));
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->setTextEditTextToSpeech__TextToSpeechConfigWidget_DevType_IsBase(true);
        return vtextedittexttospeechtexttospeechconfigwidget->devType();
    } else {
        return self->TextEditTextToSpeech::TextToSpeechConfigWidget::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_OnDevType(const TextEditTextToSpeech__TextToSpeechConfigWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self));
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->setTextEditTextToSpeech__TextToSpeechConfigWidget_DevType_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget::TextEditTextToSpeech__TextToSpeechConfigWidget_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_SetVisible(TextEditTextToSpeech__TextToSpeechConfigWidget* self, bool visible) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->setVisible(visible);
    } else {
        self->TextEditTextToSpeech::TextToSpeechConfigWidget::setVisible(visible);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_SuperSetVisible(TextEditTextToSpeech__TextToSpeechConfigWidget* self, bool visible) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->setTextEditTextToSpeech__TextToSpeechConfigWidget_SetVisible_IsBase(true);
        vtextedittexttospeechtexttospeechconfigwidget->setVisible(visible);
    } else {
        self->TextEditTextToSpeech::TextToSpeechConfigWidget::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_OnSetVisible(TextEditTextToSpeech__TextToSpeechConfigWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->setTextEditTextToSpeech__TextToSpeechConfigWidget_SetVisible_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget::TextEditTextToSpeech__TextToSpeechConfigWidget_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* TextEditTextToSpeech__TextToSpeechConfigWidget_SizeHint(const TextEditTextToSpeech__TextToSpeechConfigWidget* self) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self));
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        return new QSize(vtextedittexttospeechtexttospeechconfigwidget->sizeHint());
    } else {
        return new QSize(((VirtualTextEditTextToSpeechTextToSpeechConfigWidget*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* TextEditTextToSpeech__TextToSpeechConfigWidget_SuperSizeHint(const TextEditTextToSpeech__TextToSpeechConfigWidget* self) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self));
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->setTextEditTextToSpeech__TextToSpeechConfigWidget_SizeHint_IsBase(true);
        return new QSize(vtextedittexttospeechtexttospeechconfigwidget->sizeHint());
    } else {
        return new QSize(((VirtualTextEditTextToSpeechTextToSpeechConfigWidget*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_OnSizeHint(const TextEditTextToSpeech__TextToSpeechConfigWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self));
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->setTextEditTextToSpeech__TextToSpeechConfigWidget_SizeHint_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget::TextEditTextToSpeech__TextToSpeechConfigWidget_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* TextEditTextToSpeech__TextToSpeechConfigWidget_MinimumSizeHint(const TextEditTextToSpeech__TextToSpeechConfigWidget* self) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self));
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        return new QSize(vtextedittexttospeechtexttospeechconfigwidget->minimumSizeHint());
    } else {
        return new QSize(((VirtualTextEditTextToSpeechTextToSpeechConfigWidget*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* TextEditTextToSpeech__TextToSpeechConfigWidget_SuperMinimumSizeHint(const TextEditTextToSpeech__TextToSpeechConfigWidget* self) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self));
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->setTextEditTextToSpeech__TextToSpeechConfigWidget_MinimumSizeHint_IsBase(true);
        return new QSize(vtextedittexttospeechtexttospeechconfigwidget->minimumSizeHint());
    } else {
        return new QSize(((VirtualTextEditTextToSpeechTextToSpeechConfigWidget*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_OnMinimumSizeHint(const TextEditTextToSpeech__TextToSpeechConfigWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self));
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->setTextEditTextToSpeech__TextToSpeechConfigWidget_MinimumSizeHint_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget::TextEditTextToSpeech__TextToSpeechConfigWidget_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
int TextEditTextToSpeech__TextToSpeechConfigWidget_HeightForWidth(const TextEditTextToSpeech__TextToSpeechConfigWidget* self, int param1) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self));
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        return vtextedittexttospeechtexttospeechconfigwidget->heightForWidth(static_cast<int>(param1));
    } else {
        return self->TextEditTextToSpeech::TextToSpeechConfigWidget::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int TextEditTextToSpeech__TextToSpeechConfigWidget_SuperHeightForWidth(const TextEditTextToSpeech__TextToSpeechConfigWidget* self, int param1) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self));
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->setTextEditTextToSpeech__TextToSpeechConfigWidget_HeightForWidth_IsBase(true);
        return vtextedittexttospeechtexttospeechconfigwidget->heightForWidth(static_cast<int>(param1));
    } else {
        return self->TextEditTextToSpeech::TextToSpeechConfigWidget::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_OnHeightForWidth(const TextEditTextToSpeech__TextToSpeechConfigWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self));
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->setTextEditTextToSpeech__TextToSpeechConfigWidget_HeightForWidth_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget::TextEditTextToSpeech__TextToSpeechConfigWidget_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextEditTextToSpeech__TextToSpeechConfigWidget_HasHeightForWidth(const TextEditTextToSpeech__TextToSpeechConfigWidget* self) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self));
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        return vtextedittexttospeechtexttospeechconfigwidget->hasHeightForWidth();
    } else {
        return self->TextEditTextToSpeech::TextToSpeechConfigWidget::hasHeightForWidth();
    }
}

// Base class handler implementation
bool TextEditTextToSpeech__TextToSpeechConfigWidget_SuperHasHeightForWidth(const TextEditTextToSpeech__TextToSpeechConfigWidget* self) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self));
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->setTextEditTextToSpeech__TextToSpeechConfigWidget_HasHeightForWidth_IsBase(true);
        return vtextedittexttospeechtexttospeechconfigwidget->hasHeightForWidth();
    } else {
        return self->TextEditTextToSpeech::TextToSpeechConfigWidget::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_OnHasHeightForWidth(const TextEditTextToSpeech__TextToSpeechConfigWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self));
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->setTextEditTextToSpeech__TextToSpeechConfigWidget_HasHeightForWidth_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget::TextEditTextToSpeech__TextToSpeechConfigWidget_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* TextEditTextToSpeech__TextToSpeechConfigWidget_PaintEngine(const TextEditTextToSpeech__TextToSpeechConfigWidget* self) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self));
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        return vtextedittexttospeechtexttospeechconfigwidget->paintEngine();
    } else {
        return self->TextEditTextToSpeech::TextToSpeechConfigWidget::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* TextEditTextToSpeech__TextToSpeechConfigWidget_SuperPaintEngine(const TextEditTextToSpeech__TextToSpeechConfigWidget* self) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self));
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->setTextEditTextToSpeech__TextToSpeechConfigWidget_PaintEngine_IsBase(true);
        return vtextedittexttospeechtexttospeechconfigwidget->paintEngine();
    } else {
        return self->TextEditTextToSpeech::TextToSpeechConfigWidget::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_OnPaintEngine(const TextEditTextToSpeech__TextToSpeechConfigWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self));
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->setTextEditTextToSpeech__TextToSpeechConfigWidget_PaintEngine_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget::TextEditTextToSpeech__TextToSpeechConfigWidget_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextEditTextToSpeech__TextToSpeechConfigWidget_Event(TextEditTextToSpeech__TextToSpeechConfigWidget* self, QEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        return vtextedittexttospeechtexttospeechconfigwidget->event(event);
    } else {
        return ((VirtualTextEditTextToSpeechTextToSpeechConfigWidget*)self)->event(event);
    }
}

// Base class handler implementation
bool TextEditTextToSpeech__TextToSpeechConfigWidget_SuperEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, QEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->setTextEditTextToSpeech__TextToSpeechConfigWidget_Event_IsBase(true);
        return vtextedittexttospeechtexttospeechconfigwidget->event(event);
    } else {
        return ((VirtualTextEditTextToSpeechTextToSpeechConfigWidget*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_OnEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->setTextEditTextToSpeech__TextToSpeechConfigWidget_Event_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget::TextEditTextToSpeech__TextToSpeechConfigWidget_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_MousePressEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, QMouseEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->mousePressEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigWidget*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_SuperMousePressEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, QMouseEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->setTextEditTextToSpeech__TextToSpeechConfigWidget_MousePressEvent_IsBase(true);
        vtextedittexttospeechtexttospeechconfigwidget->mousePressEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigWidget*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_OnMousePressEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->setTextEditTextToSpeech__TextToSpeechConfigWidget_MousePressEvent_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget::TextEditTextToSpeech__TextToSpeechConfigWidget_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_MouseReleaseEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, QMouseEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->mouseReleaseEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigWidget*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_SuperMouseReleaseEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, QMouseEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->setTextEditTextToSpeech__TextToSpeechConfigWidget_MouseReleaseEvent_IsBase(true);
        vtextedittexttospeechtexttospeechconfigwidget->mouseReleaseEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigWidget*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_OnMouseReleaseEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->setTextEditTextToSpeech__TextToSpeechConfigWidget_MouseReleaseEvent_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget::TextEditTextToSpeech__TextToSpeechConfigWidget_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_MouseDoubleClickEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, QMouseEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->mouseDoubleClickEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigWidget*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_SuperMouseDoubleClickEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, QMouseEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->setTextEditTextToSpeech__TextToSpeechConfigWidget_MouseDoubleClickEvent_IsBase(true);
        vtextedittexttospeechtexttospeechconfigwidget->mouseDoubleClickEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigWidget*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_OnMouseDoubleClickEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->setTextEditTextToSpeech__TextToSpeechConfigWidget_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget::TextEditTextToSpeech__TextToSpeechConfigWidget_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_MouseMoveEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, QMouseEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->mouseMoveEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigWidget*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_SuperMouseMoveEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, QMouseEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->setTextEditTextToSpeech__TextToSpeechConfigWidget_MouseMoveEvent_IsBase(true);
        vtextedittexttospeechtexttospeechconfigwidget->mouseMoveEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigWidget*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_OnMouseMoveEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->setTextEditTextToSpeech__TextToSpeechConfigWidget_MouseMoveEvent_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget::TextEditTextToSpeech__TextToSpeechConfigWidget_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_WheelEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, QWheelEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->wheelEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigWidget*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_SuperWheelEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, QWheelEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->setTextEditTextToSpeech__TextToSpeechConfigWidget_WheelEvent_IsBase(true);
        vtextedittexttospeechtexttospeechconfigwidget->wheelEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigWidget*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_OnWheelEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->setTextEditTextToSpeech__TextToSpeechConfigWidget_WheelEvent_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget::TextEditTextToSpeech__TextToSpeechConfigWidget_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_KeyPressEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, QKeyEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->keyPressEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigWidget*)self)->keyPressEvent(event);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_SuperKeyPressEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, QKeyEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->setTextEditTextToSpeech__TextToSpeechConfigWidget_KeyPressEvent_IsBase(true);
        vtextedittexttospeechtexttospeechconfigwidget->keyPressEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigWidget*)self)->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_OnKeyPressEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->setTextEditTextToSpeech__TextToSpeechConfigWidget_KeyPressEvent_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget::TextEditTextToSpeech__TextToSpeechConfigWidget_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_KeyReleaseEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, QKeyEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->keyReleaseEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigWidget*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_SuperKeyReleaseEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, QKeyEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->setTextEditTextToSpeech__TextToSpeechConfigWidget_KeyReleaseEvent_IsBase(true);
        vtextedittexttospeechtexttospeechconfigwidget->keyReleaseEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigWidget*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_OnKeyReleaseEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->setTextEditTextToSpeech__TextToSpeechConfigWidget_KeyReleaseEvent_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget::TextEditTextToSpeech__TextToSpeechConfigWidget_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_FocusInEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, QFocusEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->focusInEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigWidget*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_SuperFocusInEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, QFocusEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->setTextEditTextToSpeech__TextToSpeechConfigWidget_FocusInEvent_IsBase(true);
        vtextedittexttospeechtexttospeechconfigwidget->focusInEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigWidget*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_OnFocusInEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->setTextEditTextToSpeech__TextToSpeechConfigWidget_FocusInEvent_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget::TextEditTextToSpeech__TextToSpeechConfigWidget_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_FocusOutEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, QFocusEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->focusOutEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigWidget*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_SuperFocusOutEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, QFocusEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->setTextEditTextToSpeech__TextToSpeechConfigWidget_FocusOutEvent_IsBase(true);
        vtextedittexttospeechtexttospeechconfigwidget->focusOutEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigWidget*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_OnFocusOutEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->setTextEditTextToSpeech__TextToSpeechConfigWidget_FocusOutEvent_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget::TextEditTextToSpeech__TextToSpeechConfigWidget_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_EnterEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, QEnterEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->enterEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigWidget*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_SuperEnterEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, QEnterEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->setTextEditTextToSpeech__TextToSpeechConfigWidget_EnterEvent_IsBase(true);
        vtextedittexttospeechtexttospeechconfigwidget->enterEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigWidget*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_OnEnterEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->setTextEditTextToSpeech__TextToSpeechConfigWidget_EnterEvent_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget::TextEditTextToSpeech__TextToSpeechConfigWidget_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_LeaveEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, QEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->leaveEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigWidget*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_SuperLeaveEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, QEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->setTextEditTextToSpeech__TextToSpeechConfigWidget_LeaveEvent_IsBase(true);
        vtextedittexttospeechtexttospeechconfigwidget->leaveEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigWidget*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_OnLeaveEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->setTextEditTextToSpeech__TextToSpeechConfigWidget_LeaveEvent_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget::TextEditTextToSpeech__TextToSpeechConfigWidget_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_PaintEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, QPaintEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->paintEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigWidget*)self)->paintEvent(event);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_SuperPaintEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, QPaintEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->setTextEditTextToSpeech__TextToSpeechConfigWidget_PaintEvent_IsBase(true);
        vtextedittexttospeechtexttospeechconfigwidget->paintEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigWidget*)self)->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_OnPaintEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->setTextEditTextToSpeech__TextToSpeechConfigWidget_PaintEvent_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget::TextEditTextToSpeech__TextToSpeechConfigWidget_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_MoveEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, QMoveEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->moveEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigWidget*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_SuperMoveEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, QMoveEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->setTextEditTextToSpeech__TextToSpeechConfigWidget_MoveEvent_IsBase(true);
        vtextedittexttospeechtexttospeechconfigwidget->moveEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigWidget*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_OnMoveEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->setTextEditTextToSpeech__TextToSpeechConfigWidget_MoveEvent_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget::TextEditTextToSpeech__TextToSpeechConfigWidget_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_ResizeEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, QResizeEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->resizeEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigWidget*)self)->resizeEvent(event);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_SuperResizeEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, QResizeEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->setTextEditTextToSpeech__TextToSpeechConfigWidget_ResizeEvent_IsBase(true);
        vtextedittexttospeechtexttospeechconfigwidget->resizeEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigWidget*)self)->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_OnResizeEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->setTextEditTextToSpeech__TextToSpeechConfigWidget_ResizeEvent_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget::TextEditTextToSpeech__TextToSpeechConfigWidget_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_CloseEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, QCloseEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->closeEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigWidget*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_SuperCloseEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, QCloseEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->setTextEditTextToSpeech__TextToSpeechConfigWidget_CloseEvent_IsBase(true);
        vtextedittexttospeechtexttospeechconfigwidget->closeEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigWidget*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_OnCloseEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->setTextEditTextToSpeech__TextToSpeechConfigWidget_CloseEvent_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget::TextEditTextToSpeech__TextToSpeechConfigWidget_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_ContextMenuEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, QContextMenuEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->contextMenuEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigWidget*)self)->contextMenuEvent(event);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_SuperContextMenuEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, QContextMenuEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->setTextEditTextToSpeech__TextToSpeechConfigWidget_ContextMenuEvent_IsBase(true);
        vtextedittexttospeechtexttospeechconfigwidget->contextMenuEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigWidget*)self)->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_OnContextMenuEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->setTextEditTextToSpeech__TextToSpeechConfigWidget_ContextMenuEvent_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget::TextEditTextToSpeech__TextToSpeechConfigWidget_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_TabletEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, QTabletEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->tabletEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigWidget*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_SuperTabletEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, QTabletEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->setTextEditTextToSpeech__TextToSpeechConfigWidget_TabletEvent_IsBase(true);
        vtextedittexttospeechtexttospeechconfigwidget->tabletEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigWidget*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_OnTabletEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->setTextEditTextToSpeech__TextToSpeechConfigWidget_TabletEvent_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget::TextEditTextToSpeech__TextToSpeechConfigWidget_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_ActionEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, QActionEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->actionEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigWidget*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_SuperActionEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, QActionEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->setTextEditTextToSpeech__TextToSpeechConfigWidget_ActionEvent_IsBase(true);
        vtextedittexttospeechtexttospeechconfigwidget->actionEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigWidget*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_OnActionEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->setTextEditTextToSpeech__TextToSpeechConfigWidget_ActionEvent_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget::TextEditTextToSpeech__TextToSpeechConfigWidget_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_DragEnterEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, QDragEnterEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->dragEnterEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigWidget*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_SuperDragEnterEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, QDragEnterEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->setTextEditTextToSpeech__TextToSpeechConfigWidget_DragEnterEvent_IsBase(true);
        vtextedittexttospeechtexttospeechconfigwidget->dragEnterEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigWidget*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_OnDragEnterEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->setTextEditTextToSpeech__TextToSpeechConfigWidget_DragEnterEvent_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget::TextEditTextToSpeech__TextToSpeechConfigWidget_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_DragMoveEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, QDragMoveEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->dragMoveEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigWidget*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_SuperDragMoveEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, QDragMoveEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->setTextEditTextToSpeech__TextToSpeechConfigWidget_DragMoveEvent_IsBase(true);
        vtextedittexttospeechtexttospeechconfigwidget->dragMoveEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigWidget*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_OnDragMoveEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->setTextEditTextToSpeech__TextToSpeechConfigWidget_DragMoveEvent_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget::TextEditTextToSpeech__TextToSpeechConfigWidget_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_DragLeaveEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, QDragLeaveEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->dragLeaveEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigWidget*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_SuperDragLeaveEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, QDragLeaveEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->setTextEditTextToSpeech__TextToSpeechConfigWidget_DragLeaveEvent_IsBase(true);
        vtextedittexttospeechtexttospeechconfigwidget->dragLeaveEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigWidget*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_OnDragLeaveEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->setTextEditTextToSpeech__TextToSpeechConfigWidget_DragLeaveEvent_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget::TextEditTextToSpeech__TextToSpeechConfigWidget_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_DropEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, QDropEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->dropEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigWidget*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_SuperDropEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, QDropEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->setTextEditTextToSpeech__TextToSpeechConfigWidget_DropEvent_IsBase(true);
        vtextedittexttospeechtexttospeechconfigwidget->dropEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigWidget*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_OnDropEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->setTextEditTextToSpeech__TextToSpeechConfigWidget_DropEvent_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget::TextEditTextToSpeech__TextToSpeechConfigWidget_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_ShowEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, QShowEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->showEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigWidget*)self)->showEvent(event);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_SuperShowEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, QShowEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->setTextEditTextToSpeech__TextToSpeechConfigWidget_ShowEvent_IsBase(true);
        vtextedittexttospeechtexttospeechconfigwidget->showEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigWidget*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_OnShowEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->setTextEditTextToSpeech__TextToSpeechConfigWidget_ShowEvent_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget::TextEditTextToSpeech__TextToSpeechConfigWidget_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_HideEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, QHideEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->hideEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigWidget*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_SuperHideEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, QHideEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->setTextEditTextToSpeech__TextToSpeechConfigWidget_HideEvent_IsBase(true);
        vtextedittexttospeechtexttospeechconfigwidget->hideEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigWidget*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_OnHideEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->setTextEditTextToSpeech__TextToSpeechConfigWidget_HideEvent_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget::TextEditTextToSpeech__TextToSpeechConfigWidget_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextEditTextToSpeech__TextToSpeechConfigWidget_NativeEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        return vtextedittexttospeechtexttospeechconfigwidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualTextEditTextToSpeechTextToSpeechConfigWidget*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool TextEditTextToSpeech__TextToSpeechConfigWidget_SuperNativeEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->setTextEditTextToSpeech__TextToSpeechConfigWidget_NativeEvent_IsBase(true);
        return vtextedittexttospeechtexttospeechconfigwidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualTextEditTextToSpeechTextToSpeechConfigWidget*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_OnNativeEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->setTextEditTextToSpeech__TextToSpeechConfigWidget_NativeEvent_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget::TextEditTextToSpeech__TextToSpeechConfigWidget_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_ChangeEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, QEvent* param1) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->changeEvent(param1);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigWidget*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_SuperChangeEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, QEvent* param1) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->setTextEditTextToSpeech__TextToSpeechConfigWidget_ChangeEvent_IsBase(true);
        vtextedittexttospeechtexttospeechconfigwidget->changeEvent(param1);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigWidget*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_OnChangeEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->setTextEditTextToSpeech__TextToSpeechConfigWidget_ChangeEvent_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget::TextEditTextToSpeech__TextToSpeechConfigWidget_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int TextEditTextToSpeech__TextToSpeechConfigWidget_Metric(const TextEditTextToSpeech__TextToSpeechConfigWidget* self, int param1) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self));
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        return vtextedittexttospeechtexttospeechconfigwidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualTextEditTextToSpeechTextToSpeechConfigWidget*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int TextEditTextToSpeech__TextToSpeechConfigWidget_SuperMetric(const TextEditTextToSpeech__TextToSpeechConfigWidget* self, int param1) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self));
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->setTextEditTextToSpeech__TextToSpeechConfigWidget_Metric_IsBase(true);
        return vtextedittexttospeechtexttospeechconfigwidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualTextEditTextToSpeechTextToSpeechConfigWidget*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_OnMetric(const TextEditTextToSpeech__TextToSpeechConfigWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self));
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->setTextEditTextToSpeech__TextToSpeechConfigWidget_Metric_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget::TextEditTextToSpeech__TextToSpeechConfigWidget_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_InitPainter(const TextEditTextToSpeech__TextToSpeechConfigWidget* self, QPainter* painter) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self));
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->initPainter(painter);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigWidget*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_SuperInitPainter(const TextEditTextToSpeech__TextToSpeechConfigWidget* self, QPainter* painter) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self));
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->setTextEditTextToSpeech__TextToSpeechConfigWidget_InitPainter_IsBase(true);
        vtextedittexttospeechtexttospeechconfigwidget->initPainter(painter);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigWidget*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_OnInitPainter(const TextEditTextToSpeech__TextToSpeechConfigWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self));
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->setTextEditTextToSpeech__TextToSpeechConfigWidget_InitPainter_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget::TextEditTextToSpeech__TextToSpeechConfigWidget_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* TextEditTextToSpeech__TextToSpeechConfigWidget_Redirected(const TextEditTextToSpeech__TextToSpeechConfigWidget* self, QPoint* offset) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self));
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        return vtextedittexttospeechtexttospeechconfigwidget->redirected(offset);
    } else {
        return ((VirtualTextEditTextToSpeechTextToSpeechConfigWidget*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* TextEditTextToSpeech__TextToSpeechConfigWidget_SuperRedirected(const TextEditTextToSpeech__TextToSpeechConfigWidget* self, QPoint* offset) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self));
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->setTextEditTextToSpeech__TextToSpeechConfigWidget_Redirected_IsBase(true);
        return vtextedittexttospeechtexttospeechconfigwidget->redirected(offset);
    } else {
        return ((VirtualTextEditTextToSpeechTextToSpeechConfigWidget*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_OnRedirected(const TextEditTextToSpeech__TextToSpeechConfigWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self));
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->setTextEditTextToSpeech__TextToSpeechConfigWidget_Redirected_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget::TextEditTextToSpeech__TextToSpeechConfigWidget_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* TextEditTextToSpeech__TextToSpeechConfigWidget_SharedPainter(const TextEditTextToSpeech__TextToSpeechConfigWidget* self) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self));
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        return vtextedittexttospeechtexttospeechconfigwidget->sharedPainter();
    } else {
        return ((VirtualTextEditTextToSpeechTextToSpeechConfigWidget*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* TextEditTextToSpeech__TextToSpeechConfigWidget_SuperSharedPainter(const TextEditTextToSpeech__TextToSpeechConfigWidget* self) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self));
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->setTextEditTextToSpeech__TextToSpeechConfigWidget_SharedPainter_IsBase(true);
        return vtextedittexttospeechtexttospeechconfigwidget->sharedPainter();
    } else {
        return ((VirtualTextEditTextToSpeechTextToSpeechConfigWidget*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_OnSharedPainter(const TextEditTextToSpeech__TextToSpeechConfigWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self));
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->setTextEditTextToSpeech__TextToSpeechConfigWidget_SharedPainter_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget::TextEditTextToSpeech__TextToSpeechConfigWidget_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_InputMethodEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, QInputMethodEvent* param1) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->inputMethodEvent(param1);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigWidget*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_SuperInputMethodEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, QInputMethodEvent* param1) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->setTextEditTextToSpeech__TextToSpeechConfigWidget_InputMethodEvent_IsBase(true);
        vtextedittexttospeechtexttospeechconfigwidget->inputMethodEvent(param1);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigWidget*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_OnInputMethodEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->setTextEditTextToSpeech__TextToSpeechConfigWidget_InputMethodEvent_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget::TextEditTextToSpeech__TextToSpeechConfigWidget_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* TextEditTextToSpeech__TextToSpeechConfigWidget_InputMethodQuery(const TextEditTextToSpeech__TextToSpeechConfigWidget* self, int param1) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self));
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        return new QVariant(vtextedittexttospeechtexttospeechconfigwidget->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualTextEditTextToSpeechTextToSpeechConfigWidget*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* TextEditTextToSpeech__TextToSpeechConfigWidget_SuperInputMethodQuery(const TextEditTextToSpeech__TextToSpeechConfigWidget* self, int param1) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self));
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->setTextEditTextToSpeech__TextToSpeechConfigWidget_InputMethodQuery_IsBase(true);
        return new QVariant(vtextedittexttospeechtexttospeechconfigwidget->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualTextEditTextToSpeechTextToSpeechConfigWidget*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_OnInputMethodQuery(const TextEditTextToSpeech__TextToSpeechConfigWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self));
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->setTextEditTextToSpeech__TextToSpeechConfigWidget_InputMethodQuery_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget::TextEditTextToSpeech__TextToSpeechConfigWidget_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextEditTextToSpeech__TextToSpeechConfigWidget_FocusNextPrevChild(TextEditTextToSpeech__TextToSpeechConfigWidget* self, bool next) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        return vtextedittexttospeechtexttospeechconfigwidget->focusNextPrevChild(next);
    } else {
        return ((VirtualTextEditTextToSpeechTextToSpeechConfigWidget*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool TextEditTextToSpeech__TextToSpeechConfigWidget_SuperFocusNextPrevChild(TextEditTextToSpeech__TextToSpeechConfigWidget* self, bool next) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->setTextEditTextToSpeech__TextToSpeechConfigWidget_FocusNextPrevChild_IsBase(true);
        return vtextedittexttospeechtexttospeechconfigwidget->focusNextPrevChild(next);
    } else {
        return ((VirtualTextEditTextToSpeechTextToSpeechConfigWidget*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_OnFocusNextPrevChild(TextEditTextToSpeech__TextToSpeechConfigWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->setTextEditTextToSpeech__TextToSpeechConfigWidget_FocusNextPrevChild_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget::TextEditTextToSpeech__TextToSpeechConfigWidget_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextEditTextToSpeech__TextToSpeechConfigWidget_EventFilter(TextEditTextToSpeech__TextToSpeechConfigWidget* self, QObject* watched, QEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        return vtextedittexttospeechtexttospeechconfigwidget->eventFilter(watched, event);
    } else {
        return self->TextEditTextToSpeech::TextToSpeechConfigWidget::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool TextEditTextToSpeech__TextToSpeechConfigWidget_SuperEventFilter(TextEditTextToSpeech__TextToSpeechConfigWidget* self, QObject* watched, QEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->setTextEditTextToSpeech__TextToSpeechConfigWidget_EventFilter_IsBase(true);
        return vtextedittexttospeechtexttospeechconfigwidget->eventFilter(watched, event);
    } else {
        return self->TextEditTextToSpeech::TextToSpeechConfigWidget::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_OnEventFilter(TextEditTextToSpeech__TextToSpeechConfigWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->setTextEditTextToSpeech__TextToSpeechConfigWidget_EventFilter_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget::TextEditTextToSpeech__TextToSpeechConfigWidget_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_TimerEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, QTimerEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->timerEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigWidget*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_SuperTimerEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, QTimerEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->setTextEditTextToSpeech__TextToSpeechConfigWidget_TimerEvent_IsBase(true);
        vtextedittexttospeechtexttospeechconfigwidget->timerEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigWidget*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_OnTimerEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->setTextEditTextToSpeech__TextToSpeechConfigWidget_TimerEvent_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget::TextEditTextToSpeech__TextToSpeechConfigWidget_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_ChildEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, QChildEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->childEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigWidget*)self)->childEvent(event);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_SuperChildEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, QChildEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->setTextEditTextToSpeech__TextToSpeechConfigWidget_ChildEvent_IsBase(true);
        vtextedittexttospeechtexttospeechconfigwidget->childEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigWidget*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_OnChildEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->setTextEditTextToSpeech__TextToSpeechConfigWidget_ChildEvent_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget::TextEditTextToSpeech__TextToSpeechConfigWidget_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_CustomEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, QEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->customEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigWidget*)self)->customEvent(event);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_SuperCustomEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, QEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->setTextEditTextToSpeech__TextToSpeechConfigWidget_CustomEvent_IsBase(true);
        vtextedittexttospeechtexttospeechconfigwidget->customEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigWidget*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_OnCustomEvent(TextEditTextToSpeech__TextToSpeechConfigWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->setTextEditTextToSpeech__TextToSpeechConfigWidget_CustomEvent_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget::TextEditTextToSpeech__TextToSpeechConfigWidget_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_ConnectNotify(TextEditTextToSpeech__TextToSpeechConfigWidget* self, const QMetaMethod* signal) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->connectNotify(*signal);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigWidget*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_SuperConnectNotify(TextEditTextToSpeech__TextToSpeechConfigWidget* self, const QMetaMethod* signal) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->setTextEditTextToSpeech__TextToSpeechConfigWidget_ConnectNotify_IsBase(true);
        vtextedittexttospeechtexttospeechconfigwidget->connectNotify(*signal);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigWidget*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_OnConnectNotify(TextEditTextToSpeech__TextToSpeechConfigWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->setTextEditTextToSpeech__TextToSpeechConfigWidget_ConnectNotify_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget::TextEditTextToSpeech__TextToSpeechConfigWidget_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_DisconnectNotify(TextEditTextToSpeech__TextToSpeechConfigWidget* self, const QMetaMethod* signal) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->disconnectNotify(*signal);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigWidget*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_SuperDisconnectNotify(TextEditTextToSpeech__TextToSpeechConfigWidget* self, const QMetaMethod* signal) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->setTextEditTextToSpeech__TextToSpeechConfigWidget_DisconnectNotify_IsBase(true);
        vtextedittexttospeechtexttospeechconfigwidget->disconnectNotify(*signal);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigWidget*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_OnDisconnectNotify(TextEditTextToSpeech__TextToSpeechConfigWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->setTextEditTextToSpeech__TextToSpeechConfigWidget_DisconnectNotify_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget::TextEditTextToSpeech__TextToSpeechConfigWidget_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_UpdateMicroFocus(TextEditTextToSpeech__TextToSpeechConfigWidget* self) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->updateMicroFocus();
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigWidget*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_SuperUpdateMicroFocus(TextEditTextToSpeech__TextToSpeechConfigWidget* self) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->setTextEditTextToSpeech__TextToSpeechConfigWidget_UpdateMicroFocus_IsBase(true);
        vtextedittexttospeechtexttospeechconfigwidget->updateMicroFocus();
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigWidget*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_OnUpdateMicroFocus(TextEditTextToSpeech__TextToSpeechConfigWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->setTextEditTextToSpeech__TextToSpeechConfigWidget_UpdateMicroFocus_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget::TextEditTextToSpeech__TextToSpeechConfigWidget_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_Create(TextEditTextToSpeech__TextToSpeechConfigWidget* self) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->create();
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigWidget*)self)->create();
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_SuperCreate(TextEditTextToSpeech__TextToSpeechConfigWidget* self) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->setTextEditTextToSpeech__TextToSpeechConfigWidget_Create_IsBase(true);
        vtextedittexttospeechtexttospeechconfigwidget->create();
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigWidget*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_OnCreate(TextEditTextToSpeech__TextToSpeechConfigWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->setTextEditTextToSpeech__TextToSpeechConfigWidget_Create_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget::TextEditTextToSpeech__TextToSpeechConfigWidget_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_Destroy(TextEditTextToSpeech__TextToSpeechConfigWidget* self) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->destroy();
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigWidget*)self)->destroy();
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_SuperDestroy(TextEditTextToSpeech__TextToSpeechConfigWidget* self) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->setTextEditTextToSpeech__TextToSpeechConfigWidget_Destroy_IsBase(true);
        vtextedittexttospeechtexttospeechconfigwidget->destroy();
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigWidget*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_OnDestroy(TextEditTextToSpeech__TextToSpeechConfigWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->setTextEditTextToSpeech__TextToSpeechConfigWidget_Destroy_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget::TextEditTextToSpeech__TextToSpeechConfigWidget_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextEditTextToSpeech__TextToSpeechConfigWidget_FocusNextChild(TextEditTextToSpeech__TextToSpeechConfigWidget* self) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        return vtextedittexttospeechtexttospeechconfigwidget->focusNextChild();
    } else {
        return ((VirtualTextEditTextToSpeechTextToSpeechConfigWidget*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool TextEditTextToSpeech__TextToSpeechConfigWidget_SuperFocusNextChild(TextEditTextToSpeech__TextToSpeechConfigWidget* self) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->setTextEditTextToSpeech__TextToSpeechConfigWidget_FocusNextChild_IsBase(true);
        return vtextedittexttospeechtexttospeechconfigwidget->focusNextChild();
    } else {
        return ((VirtualTextEditTextToSpeechTextToSpeechConfigWidget*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_OnFocusNextChild(TextEditTextToSpeech__TextToSpeechConfigWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->setTextEditTextToSpeech__TextToSpeechConfigWidget_FocusNextChild_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget::TextEditTextToSpeech__TextToSpeechConfigWidget_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextEditTextToSpeech__TextToSpeechConfigWidget_FocusPreviousChild(TextEditTextToSpeech__TextToSpeechConfigWidget* self) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        return vtextedittexttospeechtexttospeechconfigwidget->focusPreviousChild();
    } else {
        return ((VirtualTextEditTextToSpeechTextToSpeechConfigWidget*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool TextEditTextToSpeech__TextToSpeechConfigWidget_SuperFocusPreviousChild(TextEditTextToSpeech__TextToSpeechConfigWidget* self) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->setTextEditTextToSpeech__TextToSpeechConfigWidget_FocusPreviousChild_IsBase(true);
        return vtextedittexttospeechtexttospeechconfigwidget->focusPreviousChild();
    } else {
        return ((VirtualTextEditTextToSpeechTextToSpeechConfigWidget*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_OnFocusPreviousChild(TextEditTextToSpeech__TextToSpeechConfigWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self);
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->setTextEditTextToSpeech__TextToSpeechConfigWidget_FocusPreviousChild_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget::TextEditTextToSpeech__TextToSpeechConfigWidget_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* TextEditTextToSpeech__TextToSpeechConfigWidget_Sender(const TextEditTextToSpeech__TextToSpeechConfigWidget* self) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self));
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        return vtextedittexttospeechtexttospeechconfigwidget->sender();
    } else {
        return ((VirtualTextEditTextToSpeechTextToSpeechConfigWidget*)self)->sender();
    }
}

// Base class handler implementation
QObject* TextEditTextToSpeech__TextToSpeechConfigWidget_SuperSender(const TextEditTextToSpeech__TextToSpeechConfigWidget* self) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self));
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->setTextEditTextToSpeech__TextToSpeechConfigWidget_Sender_IsBase(true);
        return vtextedittexttospeechtexttospeechconfigwidget->sender();
    } else {
        return ((VirtualTextEditTextToSpeechTextToSpeechConfigWidget*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_OnSender(const TextEditTextToSpeech__TextToSpeechConfigWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self));
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->setTextEditTextToSpeech__TextToSpeechConfigWidget_Sender_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget::TextEditTextToSpeech__TextToSpeechConfigWidget_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int TextEditTextToSpeech__TextToSpeechConfigWidget_SenderSignalIndex(const TextEditTextToSpeech__TextToSpeechConfigWidget* self) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self));
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        return vtextedittexttospeechtexttospeechconfigwidget->senderSignalIndex();
    } else {
        return ((VirtualTextEditTextToSpeechTextToSpeechConfigWidget*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int TextEditTextToSpeech__TextToSpeechConfigWidget_SuperSenderSignalIndex(const TextEditTextToSpeech__TextToSpeechConfigWidget* self) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self));
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->setTextEditTextToSpeech__TextToSpeechConfigWidget_SenderSignalIndex_IsBase(true);
        return vtextedittexttospeechtexttospeechconfigwidget->senderSignalIndex();
    } else {
        return ((VirtualTextEditTextToSpeechTextToSpeechConfigWidget*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_OnSenderSignalIndex(const TextEditTextToSpeech__TextToSpeechConfigWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self));
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->setTextEditTextToSpeech__TextToSpeechConfigWidget_SenderSignalIndex_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget::TextEditTextToSpeech__TextToSpeechConfigWidget_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int TextEditTextToSpeech__TextToSpeechConfigWidget_Receivers(const TextEditTextToSpeech__TextToSpeechConfigWidget* self, const char* signal) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self));
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        return vtextedittexttospeechtexttospeechconfigwidget->receivers(signal);
    } else {
        return ((VirtualTextEditTextToSpeechTextToSpeechConfigWidget*)self)->receivers(signal);
    }
}

// Base class handler implementation
int TextEditTextToSpeech__TextToSpeechConfigWidget_SuperReceivers(const TextEditTextToSpeech__TextToSpeechConfigWidget* self, const char* signal) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self));
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->setTextEditTextToSpeech__TextToSpeechConfigWidget_Receivers_IsBase(true);
        return vtextedittexttospeechtexttospeechconfigwidget->receivers(signal);
    } else {
        return ((VirtualTextEditTextToSpeechTextToSpeechConfigWidget*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_OnReceivers(const TextEditTextToSpeech__TextToSpeechConfigWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self));
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->setTextEditTextToSpeech__TextToSpeechConfigWidget_Receivers_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget::TextEditTextToSpeech__TextToSpeechConfigWidget_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextEditTextToSpeech__TextToSpeechConfigWidget_IsSignalConnected(const TextEditTextToSpeech__TextToSpeechConfigWidget* self, const QMetaMethod* signal) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self));
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        return vtextedittexttospeechtexttospeechconfigwidget->isSignalConnected(*signal);
    } else {
        return ((VirtualTextEditTextToSpeechTextToSpeechConfigWidget*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool TextEditTextToSpeech__TextToSpeechConfigWidget_SuperIsSignalConnected(const TextEditTextToSpeech__TextToSpeechConfigWidget* self, const QMetaMethod* signal) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self));
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->setTextEditTextToSpeech__TextToSpeechConfigWidget_IsSignalConnected_IsBase(true);
        return vtextedittexttospeechtexttospeechconfigwidget->isSignalConnected(*signal);
    } else {
        return ((VirtualTextEditTextToSpeechTextToSpeechConfigWidget*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_OnIsSignalConnected(const TextEditTextToSpeech__TextToSpeechConfigWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self));
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->setTextEditTextToSpeech__TextToSpeechConfigWidget_IsSignalConnected_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget::TextEditTextToSpeech__TextToSpeechConfigWidget_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double TextEditTextToSpeech__TextToSpeechConfigWidget_GetDecodedMetricF(const TextEditTextToSpeech__TextToSpeechConfigWidget* self, int metricA, int metricB) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self));
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        return vtextedittexttospeechtexttospeechconfigwidget->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualTextEditTextToSpeechTextToSpeechConfigWidget*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double TextEditTextToSpeech__TextToSpeechConfigWidget_SuperGetDecodedMetricF(const TextEditTextToSpeech__TextToSpeechConfigWidget* self, int metricA, int metricB) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self));
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->setTextEditTextToSpeech__TextToSpeechConfigWidget_GetDecodedMetricF_IsBase(true);
        return vtextedittexttospeechtexttospeechconfigwidget->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualTextEditTextToSpeechTextToSpeechConfigWidget*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigWidget_OnGetDecodedMetricF(const TextEditTextToSpeech__TextToSpeechConfigWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechconfigwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigWidget*>(self));
    if (vtextedittexttospeechtexttospeechconfigwidget && vtextedittexttospeechtexttospeechconfigwidget->isVirtualTextEditTextToSpeechTextToSpeechConfigWidget) {
        vtextedittexttospeechtexttospeechconfigwidget->setTextEditTextToSpeech__TextToSpeechConfigWidget_GetDecodedMetricF_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigWidget::TextEditTextToSpeech__TextToSpeechConfigWidget_GetDecodedMetricF_Callback>(slot));
    }
}

void TextEditTextToSpeech__TextToSpeechConfigWidget_Delete(TextEditTextToSpeech__TextToSpeechConfigWidget* self) {
    delete self;
}
