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
#define WORKAROUND_INNER_CLASS_DEFINITION_TextEditTextToSpeech__TextToSpeechInterface
#define WORKAROUND_INNER_CLASS_DEFINITION_TextEditTextToSpeech__TextToSpeechWidget
#include <texttospeechwidget.h>
#include "libtexttospeechwidget.h"
#include "libtexttospeechwidget.hxx"

TextEditTextToSpeech__TextToSpeechWidget* TextEditTextToSpeech__TextToSpeechWidget_new(QWidget* parent) {
    return new VirtualTextEditTextToSpeechTextToSpeechWidget(parent);
}

TextEditTextToSpeech__TextToSpeechWidget* TextEditTextToSpeech__TextToSpeechWidget_new2() {
    return new VirtualTextEditTextToSpeechTextToSpeechWidget();
}

QMetaObject* TextEditTextToSpeech__TextToSpeechWidget_MetaObject(const TextEditTextToSpeech__TextToSpeechWidget* self) {
    auto* vtextedittexttospeech__texttospeechwidget = dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeech__texttospeechwidget && vtextedittexttospeech__texttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        return (QMetaObject*)self->metaObject();
    } else {
        return (QMetaObject*)((VirtualTextEditTextToSpeechTextToSpeechWidget*)self)->metaObject();
    }
}

void* TextEditTextToSpeech__TextToSpeechWidget_Metacast(TextEditTextToSpeech__TextToSpeechWidget* self, const char* param1) {
    auto* vtextedittexttospeech__texttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeech__texttospeechwidget && vtextedittexttospeech__texttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        return self->qt_metacast(param1);
    } else {
        return ((VirtualTextEditTextToSpeechTextToSpeechWidget*)self)->qt_metacast(param1);
    }
}

int TextEditTextToSpeech__TextToSpeechWidget_Metacall(TextEditTextToSpeech__TextToSpeechWidget* self, int param1, int param2, void** param3) {
    auto* vtextedittexttospeech__texttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeech__texttospeechwidget && vtextedittexttospeech__texttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualTextEditTextToSpeechTextToSpeechWidget*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

int TextEditTextToSpeech__TextToSpeechWidget_State(const TextEditTextToSpeech__TextToSpeechWidget* self) {
    return static_cast<int>(self->state());
}

void TextEditTextToSpeech__TextToSpeechWidget_SetState(TextEditTextToSpeech__TextToSpeechWidget* self, int state) {
    self->setState(static_cast<TextEditTextToSpeech::TextToSpeechWidget::State>(state));
}

void TextEditTextToSpeech__TextToSpeechWidget_SetTextToSpeechInterface(TextEditTextToSpeech__TextToSpeechWidget* self, TextEditTextToSpeech__TextToSpeechInterface* interface) {
    self->setTextToSpeechInterface(interface);
}

bool TextEditTextToSpeech__TextToSpeechWidget_IsReady(const TextEditTextToSpeech__TextToSpeechWidget* self) {
    return self->isReady();
}

void TextEditTextToSpeech__TextToSpeechWidget_ShowWidget(TextEditTextToSpeech__TextToSpeechWidget* self) {
    self->showWidget();
}

void TextEditTextToSpeech__TextToSpeechWidget_Say(TextEditTextToSpeech__TextToSpeechWidget* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->say(text_QString);
}

void TextEditTextToSpeech__TextToSpeechWidget_SlotStateChanged(TextEditTextToSpeech__TextToSpeechWidget* self, int state) {
    self->slotStateChanged(static_cast<TextEditTextToSpeech::TextToSpeech::State>(state));
}

void TextEditTextToSpeech__TextToSpeechWidget_StateChanged(TextEditTextToSpeech__TextToSpeechWidget* self, int state) {
    self->stateChanged(static_cast<TextEditTextToSpeech::TextToSpeechWidget::State>(state));
}

void TextEditTextToSpeech__TextToSpeechWidget_Connect_StateChanged(TextEditTextToSpeech__TextToSpeechWidget* self, intptr_t slot) {
    void (*slotFunc)(TextEditTextToSpeech__TextToSpeechWidget*, int) = reinterpret_cast<void (*)(TextEditTextToSpeech__TextToSpeechWidget*, int)>(slot);
    TextEditTextToSpeech::TextToSpeechWidget::connect(self, &TextEditTextToSpeech::TextToSpeechWidget::stateChanged, [self, slotFunc](TextEditTextToSpeech::TextToSpeechWidget::State state) {
        int sigval1 = static_cast<int>(state);
        slotFunc(self, sigval1);
    });
}

void TextEditTextToSpeech__TextToSpeechWidget_ChangeVisibility(TextEditTextToSpeech__TextToSpeechWidget* self, bool state) {
    self->changeVisibility(state);
}

void TextEditTextToSpeech__TextToSpeechWidget_Connect_ChangeVisibility(TextEditTextToSpeech__TextToSpeechWidget* self, intptr_t slot) {
    void (*slotFunc)(TextEditTextToSpeech__TextToSpeechWidget*, bool) = reinterpret_cast<void (*)(TextEditTextToSpeech__TextToSpeechWidget*, bool)>(slot);
    TextEditTextToSpeech::TextToSpeechWidget::connect(self, &TextEditTextToSpeech::TextToSpeechWidget::changeVisibility, [self, slotFunc](bool state) {
        bool sigval1 = state;
        slotFunc(self, sigval1);
    });
}

// Base class handler implementation
QMetaObject* TextEditTextToSpeech__TextToSpeechWidget_SuperMetaObject(const TextEditTextToSpeech__TextToSpeechWidget* self) {
    auto* vtextedittexttospeechtexttospeechwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechWidget*>(self));
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->setTextEditTextToSpeech__TextToSpeechWidget_MetaObject_IsBase(true);
        return (QMetaObject*)vtextedittexttospeechtexttospeechwidget->metaObject();
    } else {
        return (QMetaObject*)self->TextEditTextToSpeech::TextToSpeechWidget::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechWidget_OnMetaObject(const TextEditTextToSpeech__TextToSpeechWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechWidget*>(self));
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->setTextEditTextToSpeech__TextToSpeechWidget_MetaObject_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechWidget::TextEditTextToSpeech__TextToSpeechWidget_MetaObject_Callback>(slot));
    }
}

// Base class handler implementation
void* TextEditTextToSpeech__TextToSpeechWidget_SuperMetacast(TextEditTextToSpeech__TextToSpeechWidget* self, const char* param1) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->setTextEditTextToSpeech__TextToSpeechWidget_Metacast_IsBase(true);
        return vtextedittexttospeechtexttospeechwidget->qt_metacast(param1);
    } else {
        return self->TextEditTextToSpeech::TextToSpeechWidget::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechWidget_OnMetacast(TextEditTextToSpeech__TextToSpeechWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->setTextEditTextToSpeech__TextToSpeechWidget_Metacast_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechWidget::TextEditTextToSpeech__TextToSpeechWidget_Metacast_Callback>(slot));
    }
}

// Base class handler implementation
int TextEditTextToSpeech__TextToSpeechWidget_SuperMetacall(TextEditTextToSpeech__TextToSpeechWidget* self, int param1, int param2, void** param3) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->setTextEditTextToSpeech__TextToSpeechWidget_Metacall_IsBase(true);
        return vtextedittexttospeechtexttospeechwidget->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->TextEditTextToSpeech::TextToSpeechWidget::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechWidget_OnMetacall(TextEditTextToSpeech__TextToSpeechWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->setTextEditTextToSpeech__TextToSpeechWidget_Metacall_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechWidget::TextEditTextToSpeech__TextToSpeechWidget_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
int TextEditTextToSpeech__TextToSpeechWidget_DevType(const TextEditTextToSpeech__TextToSpeechWidget* self) {
    auto* vtextedittexttospeechtexttospeechwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechWidget*>(self));
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        return vtextedittexttospeechtexttospeechwidget->devType();
    } else {
        return self->TextEditTextToSpeech::TextToSpeechWidget::devType();
    }
}

// Base class handler implementation
int TextEditTextToSpeech__TextToSpeechWidget_SuperDevType(const TextEditTextToSpeech__TextToSpeechWidget* self) {
    auto* vtextedittexttospeechtexttospeechwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechWidget*>(self));
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->setTextEditTextToSpeech__TextToSpeechWidget_DevType_IsBase(true);
        return vtextedittexttospeechtexttospeechwidget->devType();
    } else {
        return self->TextEditTextToSpeech::TextToSpeechWidget::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechWidget_OnDevType(const TextEditTextToSpeech__TextToSpeechWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechWidget*>(self));
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->setTextEditTextToSpeech__TextToSpeechWidget_DevType_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechWidget::TextEditTextToSpeech__TextToSpeechWidget_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechWidget_SetVisible(TextEditTextToSpeech__TextToSpeechWidget* self, bool visible) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->setVisible(visible);
    } else {
        self->TextEditTextToSpeech::TextToSpeechWidget::setVisible(visible);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechWidget_SuperSetVisible(TextEditTextToSpeech__TextToSpeechWidget* self, bool visible) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->setTextEditTextToSpeech__TextToSpeechWidget_SetVisible_IsBase(true);
        vtextedittexttospeechtexttospeechwidget->setVisible(visible);
    } else {
        self->TextEditTextToSpeech::TextToSpeechWidget::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechWidget_OnSetVisible(TextEditTextToSpeech__TextToSpeechWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->setTextEditTextToSpeech__TextToSpeechWidget_SetVisible_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechWidget::TextEditTextToSpeech__TextToSpeechWidget_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* TextEditTextToSpeech__TextToSpeechWidget_SizeHint(const TextEditTextToSpeech__TextToSpeechWidget* self) {
    auto* vtextedittexttospeechtexttospeechwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechWidget*>(self));
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        return new QSize(vtextedittexttospeechtexttospeechwidget->sizeHint());
    } else {
        return new QSize(((VirtualTextEditTextToSpeechTextToSpeechWidget*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* TextEditTextToSpeech__TextToSpeechWidget_SuperSizeHint(const TextEditTextToSpeech__TextToSpeechWidget* self) {
    auto* vtextedittexttospeechtexttospeechwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechWidget*>(self));
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->setTextEditTextToSpeech__TextToSpeechWidget_SizeHint_IsBase(true);
        return new QSize(vtextedittexttospeechtexttospeechwidget->sizeHint());
    } else {
        return new QSize(((VirtualTextEditTextToSpeechTextToSpeechWidget*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechWidget_OnSizeHint(const TextEditTextToSpeech__TextToSpeechWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechWidget*>(self));
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->setTextEditTextToSpeech__TextToSpeechWidget_SizeHint_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechWidget::TextEditTextToSpeech__TextToSpeechWidget_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* TextEditTextToSpeech__TextToSpeechWidget_MinimumSizeHint(const TextEditTextToSpeech__TextToSpeechWidget* self) {
    auto* vtextedittexttospeechtexttospeechwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechWidget*>(self));
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        return new QSize(vtextedittexttospeechtexttospeechwidget->minimumSizeHint());
    } else {
        return new QSize(((VirtualTextEditTextToSpeechTextToSpeechWidget*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* TextEditTextToSpeech__TextToSpeechWidget_SuperMinimumSizeHint(const TextEditTextToSpeech__TextToSpeechWidget* self) {
    auto* vtextedittexttospeechtexttospeechwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechWidget*>(self));
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->setTextEditTextToSpeech__TextToSpeechWidget_MinimumSizeHint_IsBase(true);
        return new QSize(vtextedittexttospeechtexttospeechwidget->minimumSizeHint());
    } else {
        return new QSize(((VirtualTextEditTextToSpeechTextToSpeechWidget*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechWidget_OnMinimumSizeHint(const TextEditTextToSpeech__TextToSpeechWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechWidget*>(self));
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->setTextEditTextToSpeech__TextToSpeechWidget_MinimumSizeHint_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechWidget::TextEditTextToSpeech__TextToSpeechWidget_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
int TextEditTextToSpeech__TextToSpeechWidget_HeightForWidth(const TextEditTextToSpeech__TextToSpeechWidget* self, int param1) {
    auto* vtextedittexttospeechtexttospeechwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechWidget*>(self));
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        return vtextedittexttospeechtexttospeechwidget->heightForWidth(static_cast<int>(param1));
    } else {
        return self->TextEditTextToSpeech::TextToSpeechWidget::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int TextEditTextToSpeech__TextToSpeechWidget_SuperHeightForWidth(const TextEditTextToSpeech__TextToSpeechWidget* self, int param1) {
    auto* vtextedittexttospeechtexttospeechwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechWidget*>(self));
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->setTextEditTextToSpeech__TextToSpeechWidget_HeightForWidth_IsBase(true);
        return vtextedittexttospeechtexttospeechwidget->heightForWidth(static_cast<int>(param1));
    } else {
        return self->TextEditTextToSpeech::TextToSpeechWidget::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechWidget_OnHeightForWidth(const TextEditTextToSpeech__TextToSpeechWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechWidget*>(self));
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->setTextEditTextToSpeech__TextToSpeechWidget_HeightForWidth_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechWidget::TextEditTextToSpeech__TextToSpeechWidget_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextEditTextToSpeech__TextToSpeechWidget_HasHeightForWidth(const TextEditTextToSpeech__TextToSpeechWidget* self) {
    auto* vtextedittexttospeechtexttospeechwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechWidget*>(self));
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        return vtextedittexttospeechtexttospeechwidget->hasHeightForWidth();
    } else {
        return self->TextEditTextToSpeech::TextToSpeechWidget::hasHeightForWidth();
    }
}

// Base class handler implementation
bool TextEditTextToSpeech__TextToSpeechWidget_SuperHasHeightForWidth(const TextEditTextToSpeech__TextToSpeechWidget* self) {
    auto* vtextedittexttospeechtexttospeechwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechWidget*>(self));
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->setTextEditTextToSpeech__TextToSpeechWidget_HasHeightForWidth_IsBase(true);
        return vtextedittexttospeechtexttospeechwidget->hasHeightForWidth();
    } else {
        return self->TextEditTextToSpeech::TextToSpeechWidget::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechWidget_OnHasHeightForWidth(const TextEditTextToSpeech__TextToSpeechWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechWidget*>(self));
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->setTextEditTextToSpeech__TextToSpeechWidget_HasHeightForWidth_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechWidget::TextEditTextToSpeech__TextToSpeechWidget_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* TextEditTextToSpeech__TextToSpeechWidget_PaintEngine(const TextEditTextToSpeech__TextToSpeechWidget* self) {
    auto* vtextedittexttospeechtexttospeechwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechWidget*>(self));
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        return vtextedittexttospeechtexttospeechwidget->paintEngine();
    } else {
        return self->TextEditTextToSpeech::TextToSpeechWidget::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* TextEditTextToSpeech__TextToSpeechWidget_SuperPaintEngine(const TextEditTextToSpeech__TextToSpeechWidget* self) {
    auto* vtextedittexttospeechtexttospeechwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechWidget*>(self));
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->setTextEditTextToSpeech__TextToSpeechWidget_PaintEngine_IsBase(true);
        return vtextedittexttospeechtexttospeechwidget->paintEngine();
    } else {
        return self->TextEditTextToSpeech::TextToSpeechWidget::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechWidget_OnPaintEngine(const TextEditTextToSpeech__TextToSpeechWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechWidget*>(self));
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->setTextEditTextToSpeech__TextToSpeechWidget_PaintEngine_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechWidget::TextEditTextToSpeech__TextToSpeechWidget_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextEditTextToSpeech__TextToSpeechWidget_Event(TextEditTextToSpeech__TextToSpeechWidget* self, QEvent* event) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        return vtextedittexttospeechtexttospeechwidget->event(event);
    } else {
        return ((VirtualTextEditTextToSpeechTextToSpeechWidget*)self)->event(event);
    }
}

// Base class handler implementation
bool TextEditTextToSpeech__TextToSpeechWidget_SuperEvent(TextEditTextToSpeech__TextToSpeechWidget* self, QEvent* event) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->setTextEditTextToSpeech__TextToSpeechWidget_Event_IsBase(true);
        return vtextedittexttospeechtexttospeechwidget->event(event);
    } else {
        return ((VirtualTextEditTextToSpeechTextToSpeechWidget*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechWidget_OnEvent(TextEditTextToSpeech__TextToSpeechWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->setTextEditTextToSpeech__TextToSpeechWidget_Event_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechWidget::TextEditTextToSpeech__TextToSpeechWidget_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechWidget_MousePressEvent(TextEditTextToSpeech__TextToSpeechWidget* self, QMouseEvent* event) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->mousePressEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechWidget*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechWidget_SuperMousePressEvent(TextEditTextToSpeech__TextToSpeechWidget* self, QMouseEvent* event) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->setTextEditTextToSpeech__TextToSpeechWidget_MousePressEvent_IsBase(true);
        vtextedittexttospeechtexttospeechwidget->mousePressEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechWidget*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechWidget_OnMousePressEvent(TextEditTextToSpeech__TextToSpeechWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->setTextEditTextToSpeech__TextToSpeechWidget_MousePressEvent_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechWidget::TextEditTextToSpeech__TextToSpeechWidget_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechWidget_MouseReleaseEvent(TextEditTextToSpeech__TextToSpeechWidget* self, QMouseEvent* event) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->mouseReleaseEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechWidget*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechWidget_SuperMouseReleaseEvent(TextEditTextToSpeech__TextToSpeechWidget* self, QMouseEvent* event) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->setTextEditTextToSpeech__TextToSpeechWidget_MouseReleaseEvent_IsBase(true);
        vtextedittexttospeechtexttospeechwidget->mouseReleaseEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechWidget*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechWidget_OnMouseReleaseEvent(TextEditTextToSpeech__TextToSpeechWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->setTextEditTextToSpeech__TextToSpeechWidget_MouseReleaseEvent_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechWidget::TextEditTextToSpeech__TextToSpeechWidget_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechWidget_MouseDoubleClickEvent(TextEditTextToSpeech__TextToSpeechWidget* self, QMouseEvent* event) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->mouseDoubleClickEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechWidget*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechWidget_SuperMouseDoubleClickEvent(TextEditTextToSpeech__TextToSpeechWidget* self, QMouseEvent* event) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->setTextEditTextToSpeech__TextToSpeechWidget_MouseDoubleClickEvent_IsBase(true);
        vtextedittexttospeechtexttospeechwidget->mouseDoubleClickEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechWidget*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechWidget_OnMouseDoubleClickEvent(TextEditTextToSpeech__TextToSpeechWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->setTextEditTextToSpeech__TextToSpeechWidget_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechWidget::TextEditTextToSpeech__TextToSpeechWidget_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechWidget_MouseMoveEvent(TextEditTextToSpeech__TextToSpeechWidget* self, QMouseEvent* event) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->mouseMoveEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechWidget*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechWidget_SuperMouseMoveEvent(TextEditTextToSpeech__TextToSpeechWidget* self, QMouseEvent* event) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->setTextEditTextToSpeech__TextToSpeechWidget_MouseMoveEvent_IsBase(true);
        vtextedittexttospeechtexttospeechwidget->mouseMoveEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechWidget*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechWidget_OnMouseMoveEvent(TextEditTextToSpeech__TextToSpeechWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->setTextEditTextToSpeech__TextToSpeechWidget_MouseMoveEvent_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechWidget::TextEditTextToSpeech__TextToSpeechWidget_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechWidget_WheelEvent(TextEditTextToSpeech__TextToSpeechWidget* self, QWheelEvent* event) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->wheelEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechWidget*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechWidget_SuperWheelEvent(TextEditTextToSpeech__TextToSpeechWidget* self, QWheelEvent* event) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->setTextEditTextToSpeech__TextToSpeechWidget_WheelEvent_IsBase(true);
        vtextedittexttospeechtexttospeechwidget->wheelEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechWidget*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechWidget_OnWheelEvent(TextEditTextToSpeech__TextToSpeechWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->setTextEditTextToSpeech__TextToSpeechWidget_WheelEvent_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechWidget::TextEditTextToSpeech__TextToSpeechWidget_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechWidget_KeyPressEvent(TextEditTextToSpeech__TextToSpeechWidget* self, QKeyEvent* event) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->keyPressEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechWidget*)self)->keyPressEvent(event);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechWidget_SuperKeyPressEvent(TextEditTextToSpeech__TextToSpeechWidget* self, QKeyEvent* event) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->setTextEditTextToSpeech__TextToSpeechWidget_KeyPressEvent_IsBase(true);
        vtextedittexttospeechtexttospeechwidget->keyPressEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechWidget*)self)->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechWidget_OnKeyPressEvent(TextEditTextToSpeech__TextToSpeechWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->setTextEditTextToSpeech__TextToSpeechWidget_KeyPressEvent_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechWidget::TextEditTextToSpeech__TextToSpeechWidget_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechWidget_KeyReleaseEvent(TextEditTextToSpeech__TextToSpeechWidget* self, QKeyEvent* event) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->keyReleaseEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechWidget*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechWidget_SuperKeyReleaseEvent(TextEditTextToSpeech__TextToSpeechWidget* self, QKeyEvent* event) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->setTextEditTextToSpeech__TextToSpeechWidget_KeyReleaseEvent_IsBase(true);
        vtextedittexttospeechtexttospeechwidget->keyReleaseEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechWidget*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechWidget_OnKeyReleaseEvent(TextEditTextToSpeech__TextToSpeechWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->setTextEditTextToSpeech__TextToSpeechWidget_KeyReleaseEvent_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechWidget::TextEditTextToSpeech__TextToSpeechWidget_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechWidget_FocusInEvent(TextEditTextToSpeech__TextToSpeechWidget* self, QFocusEvent* event) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->focusInEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechWidget*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechWidget_SuperFocusInEvent(TextEditTextToSpeech__TextToSpeechWidget* self, QFocusEvent* event) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->setTextEditTextToSpeech__TextToSpeechWidget_FocusInEvent_IsBase(true);
        vtextedittexttospeechtexttospeechwidget->focusInEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechWidget*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechWidget_OnFocusInEvent(TextEditTextToSpeech__TextToSpeechWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->setTextEditTextToSpeech__TextToSpeechWidget_FocusInEvent_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechWidget::TextEditTextToSpeech__TextToSpeechWidget_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechWidget_FocusOutEvent(TextEditTextToSpeech__TextToSpeechWidget* self, QFocusEvent* event) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->focusOutEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechWidget*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechWidget_SuperFocusOutEvent(TextEditTextToSpeech__TextToSpeechWidget* self, QFocusEvent* event) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->setTextEditTextToSpeech__TextToSpeechWidget_FocusOutEvent_IsBase(true);
        vtextedittexttospeechtexttospeechwidget->focusOutEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechWidget*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechWidget_OnFocusOutEvent(TextEditTextToSpeech__TextToSpeechWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->setTextEditTextToSpeech__TextToSpeechWidget_FocusOutEvent_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechWidget::TextEditTextToSpeech__TextToSpeechWidget_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechWidget_EnterEvent(TextEditTextToSpeech__TextToSpeechWidget* self, QEnterEvent* event) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->enterEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechWidget*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechWidget_SuperEnterEvent(TextEditTextToSpeech__TextToSpeechWidget* self, QEnterEvent* event) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->setTextEditTextToSpeech__TextToSpeechWidget_EnterEvent_IsBase(true);
        vtextedittexttospeechtexttospeechwidget->enterEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechWidget*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechWidget_OnEnterEvent(TextEditTextToSpeech__TextToSpeechWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->setTextEditTextToSpeech__TextToSpeechWidget_EnterEvent_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechWidget::TextEditTextToSpeech__TextToSpeechWidget_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechWidget_LeaveEvent(TextEditTextToSpeech__TextToSpeechWidget* self, QEvent* event) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->leaveEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechWidget*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechWidget_SuperLeaveEvent(TextEditTextToSpeech__TextToSpeechWidget* self, QEvent* event) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->setTextEditTextToSpeech__TextToSpeechWidget_LeaveEvent_IsBase(true);
        vtextedittexttospeechtexttospeechwidget->leaveEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechWidget*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechWidget_OnLeaveEvent(TextEditTextToSpeech__TextToSpeechWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->setTextEditTextToSpeech__TextToSpeechWidget_LeaveEvent_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechWidget::TextEditTextToSpeech__TextToSpeechWidget_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechWidget_PaintEvent(TextEditTextToSpeech__TextToSpeechWidget* self, QPaintEvent* event) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->paintEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechWidget*)self)->paintEvent(event);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechWidget_SuperPaintEvent(TextEditTextToSpeech__TextToSpeechWidget* self, QPaintEvent* event) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->setTextEditTextToSpeech__TextToSpeechWidget_PaintEvent_IsBase(true);
        vtextedittexttospeechtexttospeechwidget->paintEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechWidget*)self)->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechWidget_OnPaintEvent(TextEditTextToSpeech__TextToSpeechWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->setTextEditTextToSpeech__TextToSpeechWidget_PaintEvent_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechWidget::TextEditTextToSpeech__TextToSpeechWidget_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechWidget_MoveEvent(TextEditTextToSpeech__TextToSpeechWidget* self, QMoveEvent* event) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->moveEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechWidget*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechWidget_SuperMoveEvent(TextEditTextToSpeech__TextToSpeechWidget* self, QMoveEvent* event) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->setTextEditTextToSpeech__TextToSpeechWidget_MoveEvent_IsBase(true);
        vtextedittexttospeechtexttospeechwidget->moveEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechWidget*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechWidget_OnMoveEvent(TextEditTextToSpeech__TextToSpeechWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->setTextEditTextToSpeech__TextToSpeechWidget_MoveEvent_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechWidget::TextEditTextToSpeech__TextToSpeechWidget_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechWidget_ResizeEvent(TextEditTextToSpeech__TextToSpeechWidget* self, QResizeEvent* event) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->resizeEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechWidget*)self)->resizeEvent(event);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechWidget_SuperResizeEvent(TextEditTextToSpeech__TextToSpeechWidget* self, QResizeEvent* event) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->setTextEditTextToSpeech__TextToSpeechWidget_ResizeEvent_IsBase(true);
        vtextedittexttospeechtexttospeechwidget->resizeEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechWidget*)self)->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechWidget_OnResizeEvent(TextEditTextToSpeech__TextToSpeechWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->setTextEditTextToSpeech__TextToSpeechWidget_ResizeEvent_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechWidget::TextEditTextToSpeech__TextToSpeechWidget_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechWidget_CloseEvent(TextEditTextToSpeech__TextToSpeechWidget* self, QCloseEvent* event) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->closeEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechWidget*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechWidget_SuperCloseEvent(TextEditTextToSpeech__TextToSpeechWidget* self, QCloseEvent* event) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->setTextEditTextToSpeech__TextToSpeechWidget_CloseEvent_IsBase(true);
        vtextedittexttospeechtexttospeechwidget->closeEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechWidget*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechWidget_OnCloseEvent(TextEditTextToSpeech__TextToSpeechWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->setTextEditTextToSpeech__TextToSpeechWidget_CloseEvent_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechWidget::TextEditTextToSpeech__TextToSpeechWidget_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechWidget_ContextMenuEvent(TextEditTextToSpeech__TextToSpeechWidget* self, QContextMenuEvent* event) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->contextMenuEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechWidget*)self)->contextMenuEvent(event);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechWidget_SuperContextMenuEvent(TextEditTextToSpeech__TextToSpeechWidget* self, QContextMenuEvent* event) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->setTextEditTextToSpeech__TextToSpeechWidget_ContextMenuEvent_IsBase(true);
        vtextedittexttospeechtexttospeechwidget->contextMenuEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechWidget*)self)->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechWidget_OnContextMenuEvent(TextEditTextToSpeech__TextToSpeechWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->setTextEditTextToSpeech__TextToSpeechWidget_ContextMenuEvent_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechWidget::TextEditTextToSpeech__TextToSpeechWidget_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechWidget_TabletEvent(TextEditTextToSpeech__TextToSpeechWidget* self, QTabletEvent* event) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->tabletEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechWidget*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechWidget_SuperTabletEvent(TextEditTextToSpeech__TextToSpeechWidget* self, QTabletEvent* event) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->setTextEditTextToSpeech__TextToSpeechWidget_TabletEvent_IsBase(true);
        vtextedittexttospeechtexttospeechwidget->tabletEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechWidget*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechWidget_OnTabletEvent(TextEditTextToSpeech__TextToSpeechWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->setTextEditTextToSpeech__TextToSpeechWidget_TabletEvent_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechWidget::TextEditTextToSpeech__TextToSpeechWidget_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechWidget_ActionEvent(TextEditTextToSpeech__TextToSpeechWidget* self, QActionEvent* event) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->actionEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechWidget*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechWidget_SuperActionEvent(TextEditTextToSpeech__TextToSpeechWidget* self, QActionEvent* event) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->setTextEditTextToSpeech__TextToSpeechWidget_ActionEvent_IsBase(true);
        vtextedittexttospeechtexttospeechwidget->actionEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechWidget*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechWidget_OnActionEvent(TextEditTextToSpeech__TextToSpeechWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->setTextEditTextToSpeech__TextToSpeechWidget_ActionEvent_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechWidget::TextEditTextToSpeech__TextToSpeechWidget_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechWidget_DragEnterEvent(TextEditTextToSpeech__TextToSpeechWidget* self, QDragEnterEvent* event) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->dragEnterEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechWidget*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechWidget_SuperDragEnterEvent(TextEditTextToSpeech__TextToSpeechWidget* self, QDragEnterEvent* event) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->setTextEditTextToSpeech__TextToSpeechWidget_DragEnterEvent_IsBase(true);
        vtextedittexttospeechtexttospeechwidget->dragEnterEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechWidget*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechWidget_OnDragEnterEvent(TextEditTextToSpeech__TextToSpeechWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->setTextEditTextToSpeech__TextToSpeechWidget_DragEnterEvent_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechWidget::TextEditTextToSpeech__TextToSpeechWidget_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechWidget_DragMoveEvent(TextEditTextToSpeech__TextToSpeechWidget* self, QDragMoveEvent* event) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->dragMoveEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechWidget*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechWidget_SuperDragMoveEvent(TextEditTextToSpeech__TextToSpeechWidget* self, QDragMoveEvent* event) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->setTextEditTextToSpeech__TextToSpeechWidget_DragMoveEvent_IsBase(true);
        vtextedittexttospeechtexttospeechwidget->dragMoveEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechWidget*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechWidget_OnDragMoveEvent(TextEditTextToSpeech__TextToSpeechWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->setTextEditTextToSpeech__TextToSpeechWidget_DragMoveEvent_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechWidget::TextEditTextToSpeech__TextToSpeechWidget_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechWidget_DragLeaveEvent(TextEditTextToSpeech__TextToSpeechWidget* self, QDragLeaveEvent* event) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->dragLeaveEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechWidget*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechWidget_SuperDragLeaveEvent(TextEditTextToSpeech__TextToSpeechWidget* self, QDragLeaveEvent* event) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->setTextEditTextToSpeech__TextToSpeechWidget_DragLeaveEvent_IsBase(true);
        vtextedittexttospeechtexttospeechwidget->dragLeaveEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechWidget*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechWidget_OnDragLeaveEvent(TextEditTextToSpeech__TextToSpeechWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->setTextEditTextToSpeech__TextToSpeechWidget_DragLeaveEvent_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechWidget::TextEditTextToSpeech__TextToSpeechWidget_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechWidget_DropEvent(TextEditTextToSpeech__TextToSpeechWidget* self, QDropEvent* event) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->dropEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechWidget*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechWidget_SuperDropEvent(TextEditTextToSpeech__TextToSpeechWidget* self, QDropEvent* event) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->setTextEditTextToSpeech__TextToSpeechWidget_DropEvent_IsBase(true);
        vtextedittexttospeechtexttospeechwidget->dropEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechWidget*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechWidget_OnDropEvent(TextEditTextToSpeech__TextToSpeechWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->setTextEditTextToSpeech__TextToSpeechWidget_DropEvent_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechWidget::TextEditTextToSpeech__TextToSpeechWidget_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechWidget_ShowEvent(TextEditTextToSpeech__TextToSpeechWidget* self, QShowEvent* event) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->showEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechWidget*)self)->showEvent(event);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechWidget_SuperShowEvent(TextEditTextToSpeech__TextToSpeechWidget* self, QShowEvent* event) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->setTextEditTextToSpeech__TextToSpeechWidget_ShowEvent_IsBase(true);
        vtextedittexttospeechtexttospeechwidget->showEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechWidget*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechWidget_OnShowEvent(TextEditTextToSpeech__TextToSpeechWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->setTextEditTextToSpeech__TextToSpeechWidget_ShowEvent_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechWidget::TextEditTextToSpeech__TextToSpeechWidget_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechWidget_HideEvent(TextEditTextToSpeech__TextToSpeechWidget* self, QHideEvent* event) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->hideEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechWidget*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechWidget_SuperHideEvent(TextEditTextToSpeech__TextToSpeechWidget* self, QHideEvent* event) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->setTextEditTextToSpeech__TextToSpeechWidget_HideEvent_IsBase(true);
        vtextedittexttospeechtexttospeechwidget->hideEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechWidget*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechWidget_OnHideEvent(TextEditTextToSpeech__TextToSpeechWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->setTextEditTextToSpeech__TextToSpeechWidget_HideEvent_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechWidget::TextEditTextToSpeech__TextToSpeechWidget_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextEditTextToSpeech__TextToSpeechWidget_NativeEvent(TextEditTextToSpeech__TextToSpeechWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        return vtextedittexttospeechtexttospeechwidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualTextEditTextToSpeechTextToSpeechWidget*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool TextEditTextToSpeech__TextToSpeechWidget_SuperNativeEvent(TextEditTextToSpeech__TextToSpeechWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->setTextEditTextToSpeech__TextToSpeechWidget_NativeEvent_IsBase(true);
        return vtextedittexttospeechtexttospeechwidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualTextEditTextToSpeechTextToSpeechWidget*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechWidget_OnNativeEvent(TextEditTextToSpeech__TextToSpeechWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->setTextEditTextToSpeech__TextToSpeechWidget_NativeEvent_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechWidget::TextEditTextToSpeech__TextToSpeechWidget_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechWidget_ChangeEvent(TextEditTextToSpeech__TextToSpeechWidget* self, QEvent* param1) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->changeEvent(param1);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechWidget*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechWidget_SuperChangeEvent(TextEditTextToSpeech__TextToSpeechWidget* self, QEvent* param1) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->setTextEditTextToSpeech__TextToSpeechWidget_ChangeEvent_IsBase(true);
        vtextedittexttospeechtexttospeechwidget->changeEvent(param1);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechWidget*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechWidget_OnChangeEvent(TextEditTextToSpeech__TextToSpeechWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->setTextEditTextToSpeech__TextToSpeechWidget_ChangeEvent_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechWidget::TextEditTextToSpeech__TextToSpeechWidget_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int TextEditTextToSpeech__TextToSpeechWidget_Metric(const TextEditTextToSpeech__TextToSpeechWidget* self, int param1) {
    auto* vtextedittexttospeechtexttospeechwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechWidget*>(self));
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        return vtextedittexttospeechtexttospeechwidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualTextEditTextToSpeechTextToSpeechWidget*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int TextEditTextToSpeech__TextToSpeechWidget_SuperMetric(const TextEditTextToSpeech__TextToSpeechWidget* self, int param1) {
    auto* vtextedittexttospeechtexttospeechwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechWidget*>(self));
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->setTextEditTextToSpeech__TextToSpeechWidget_Metric_IsBase(true);
        return vtextedittexttospeechtexttospeechwidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualTextEditTextToSpeechTextToSpeechWidget*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechWidget_OnMetric(const TextEditTextToSpeech__TextToSpeechWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechWidget*>(self));
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->setTextEditTextToSpeech__TextToSpeechWidget_Metric_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechWidget::TextEditTextToSpeech__TextToSpeechWidget_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechWidget_InitPainter(const TextEditTextToSpeech__TextToSpeechWidget* self, QPainter* painter) {
    auto* vtextedittexttospeechtexttospeechwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechWidget*>(self));
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->initPainter(painter);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechWidget*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechWidget_SuperInitPainter(const TextEditTextToSpeech__TextToSpeechWidget* self, QPainter* painter) {
    auto* vtextedittexttospeechtexttospeechwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechWidget*>(self));
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->setTextEditTextToSpeech__TextToSpeechWidget_InitPainter_IsBase(true);
        vtextedittexttospeechtexttospeechwidget->initPainter(painter);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechWidget*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechWidget_OnInitPainter(const TextEditTextToSpeech__TextToSpeechWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechWidget*>(self));
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->setTextEditTextToSpeech__TextToSpeechWidget_InitPainter_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechWidget::TextEditTextToSpeech__TextToSpeechWidget_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* TextEditTextToSpeech__TextToSpeechWidget_Redirected(const TextEditTextToSpeech__TextToSpeechWidget* self, QPoint* offset) {
    auto* vtextedittexttospeechtexttospeechwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechWidget*>(self));
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        return vtextedittexttospeechtexttospeechwidget->redirected(offset);
    } else {
        return ((VirtualTextEditTextToSpeechTextToSpeechWidget*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* TextEditTextToSpeech__TextToSpeechWidget_SuperRedirected(const TextEditTextToSpeech__TextToSpeechWidget* self, QPoint* offset) {
    auto* vtextedittexttospeechtexttospeechwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechWidget*>(self));
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->setTextEditTextToSpeech__TextToSpeechWidget_Redirected_IsBase(true);
        return vtextedittexttospeechtexttospeechwidget->redirected(offset);
    } else {
        return ((VirtualTextEditTextToSpeechTextToSpeechWidget*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechWidget_OnRedirected(const TextEditTextToSpeech__TextToSpeechWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechWidget*>(self));
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->setTextEditTextToSpeech__TextToSpeechWidget_Redirected_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechWidget::TextEditTextToSpeech__TextToSpeechWidget_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* TextEditTextToSpeech__TextToSpeechWidget_SharedPainter(const TextEditTextToSpeech__TextToSpeechWidget* self) {
    auto* vtextedittexttospeechtexttospeechwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechWidget*>(self));
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        return vtextedittexttospeechtexttospeechwidget->sharedPainter();
    } else {
        return ((VirtualTextEditTextToSpeechTextToSpeechWidget*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* TextEditTextToSpeech__TextToSpeechWidget_SuperSharedPainter(const TextEditTextToSpeech__TextToSpeechWidget* self) {
    auto* vtextedittexttospeechtexttospeechwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechWidget*>(self));
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->setTextEditTextToSpeech__TextToSpeechWidget_SharedPainter_IsBase(true);
        return vtextedittexttospeechtexttospeechwidget->sharedPainter();
    } else {
        return ((VirtualTextEditTextToSpeechTextToSpeechWidget*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechWidget_OnSharedPainter(const TextEditTextToSpeech__TextToSpeechWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechWidget*>(self));
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->setTextEditTextToSpeech__TextToSpeechWidget_SharedPainter_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechWidget::TextEditTextToSpeech__TextToSpeechWidget_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechWidget_InputMethodEvent(TextEditTextToSpeech__TextToSpeechWidget* self, QInputMethodEvent* param1) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->inputMethodEvent(param1);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechWidget*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechWidget_SuperInputMethodEvent(TextEditTextToSpeech__TextToSpeechWidget* self, QInputMethodEvent* param1) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->setTextEditTextToSpeech__TextToSpeechWidget_InputMethodEvent_IsBase(true);
        vtextedittexttospeechtexttospeechwidget->inputMethodEvent(param1);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechWidget*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechWidget_OnInputMethodEvent(TextEditTextToSpeech__TextToSpeechWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->setTextEditTextToSpeech__TextToSpeechWidget_InputMethodEvent_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechWidget::TextEditTextToSpeech__TextToSpeechWidget_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* TextEditTextToSpeech__TextToSpeechWidget_InputMethodQuery(const TextEditTextToSpeech__TextToSpeechWidget* self, int param1) {
    auto* vtextedittexttospeechtexttospeechwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechWidget*>(self));
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        return new QVariant(vtextedittexttospeechtexttospeechwidget->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualTextEditTextToSpeechTextToSpeechWidget*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* TextEditTextToSpeech__TextToSpeechWidget_SuperInputMethodQuery(const TextEditTextToSpeech__TextToSpeechWidget* self, int param1) {
    auto* vtextedittexttospeechtexttospeechwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechWidget*>(self));
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->setTextEditTextToSpeech__TextToSpeechWidget_InputMethodQuery_IsBase(true);
        return new QVariant(vtextedittexttospeechtexttospeechwidget->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualTextEditTextToSpeechTextToSpeechWidget*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechWidget_OnInputMethodQuery(const TextEditTextToSpeech__TextToSpeechWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechWidget*>(self));
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->setTextEditTextToSpeech__TextToSpeechWidget_InputMethodQuery_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechWidget::TextEditTextToSpeech__TextToSpeechWidget_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextEditTextToSpeech__TextToSpeechWidget_FocusNextPrevChild(TextEditTextToSpeech__TextToSpeechWidget* self, bool next) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        return vtextedittexttospeechtexttospeechwidget->focusNextPrevChild(next);
    } else {
        return ((VirtualTextEditTextToSpeechTextToSpeechWidget*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool TextEditTextToSpeech__TextToSpeechWidget_SuperFocusNextPrevChild(TextEditTextToSpeech__TextToSpeechWidget* self, bool next) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->setTextEditTextToSpeech__TextToSpeechWidget_FocusNextPrevChild_IsBase(true);
        return vtextedittexttospeechtexttospeechwidget->focusNextPrevChild(next);
    } else {
        return ((VirtualTextEditTextToSpeechTextToSpeechWidget*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechWidget_OnFocusNextPrevChild(TextEditTextToSpeech__TextToSpeechWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->setTextEditTextToSpeech__TextToSpeechWidget_FocusNextPrevChild_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechWidget::TextEditTextToSpeech__TextToSpeechWidget_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextEditTextToSpeech__TextToSpeechWidget_EventFilter(TextEditTextToSpeech__TextToSpeechWidget* self, QObject* watched, QEvent* event) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        return vtextedittexttospeechtexttospeechwidget->eventFilter(watched, event);
    } else {
        return self->TextEditTextToSpeech::TextToSpeechWidget::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool TextEditTextToSpeech__TextToSpeechWidget_SuperEventFilter(TextEditTextToSpeech__TextToSpeechWidget* self, QObject* watched, QEvent* event) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->setTextEditTextToSpeech__TextToSpeechWidget_EventFilter_IsBase(true);
        return vtextedittexttospeechtexttospeechwidget->eventFilter(watched, event);
    } else {
        return self->TextEditTextToSpeech::TextToSpeechWidget::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechWidget_OnEventFilter(TextEditTextToSpeech__TextToSpeechWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->setTextEditTextToSpeech__TextToSpeechWidget_EventFilter_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechWidget::TextEditTextToSpeech__TextToSpeechWidget_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechWidget_TimerEvent(TextEditTextToSpeech__TextToSpeechWidget* self, QTimerEvent* event) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->timerEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechWidget*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechWidget_SuperTimerEvent(TextEditTextToSpeech__TextToSpeechWidget* self, QTimerEvent* event) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->setTextEditTextToSpeech__TextToSpeechWidget_TimerEvent_IsBase(true);
        vtextedittexttospeechtexttospeechwidget->timerEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechWidget*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechWidget_OnTimerEvent(TextEditTextToSpeech__TextToSpeechWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->setTextEditTextToSpeech__TextToSpeechWidget_TimerEvent_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechWidget::TextEditTextToSpeech__TextToSpeechWidget_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechWidget_ChildEvent(TextEditTextToSpeech__TextToSpeechWidget* self, QChildEvent* event) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->childEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechWidget*)self)->childEvent(event);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechWidget_SuperChildEvent(TextEditTextToSpeech__TextToSpeechWidget* self, QChildEvent* event) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->setTextEditTextToSpeech__TextToSpeechWidget_ChildEvent_IsBase(true);
        vtextedittexttospeechtexttospeechwidget->childEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechWidget*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechWidget_OnChildEvent(TextEditTextToSpeech__TextToSpeechWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->setTextEditTextToSpeech__TextToSpeechWidget_ChildEvent_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechWidget::TextEditTextToSpeech__TextToSpeechWidget_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechWidget_CustomEvent(TextEditTextToSpeech__TextToSpeechWidget* self, QEvent* event) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->customEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechWidget*)self)->customEvent(event);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechWidget_SuperCustomEvent(TextEditTextToSpeech__TextToSpeechWidget* self, QEvent* event) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->setTextEditTextToSpeech__TextToSpeechWidget_CustomEvent_IsBase(true);
        vtextedittexttospeechtexttospeechwidget->customEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechWidget*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechWidget_OnCustomEvent(TextEditTextToSpeech__TextToSpeechWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->setTextEditTextToSpeech__TextToSpeechWidget_CustomEvent_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechWidget::TextEditTextToSpeech__TextToSpeechWidget_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechWidget_ConnectNotify(TextEditTextToSpeech__TextToSpeechWidget* self, const QMetaMethod* signal) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->connectNotify(*signal);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechWidget*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechWidget_SuperConnectNotify(TextEditTextToSpeech__TextToSpeechWidget* self, const QMetaMethod* signal) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->setTextEditTextToSpeech__TextToSpeechWidget_ConnectNotify_IsBase(true);
        vtextedittexttospeechtexttospeechwidget->connectNotify(*signal);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechWidget*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechWidget_OnConnectNotify(TextEditTextToSpeech__TextToSpeechWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->setTextEditTextToSpeech__TextToSpeechWidget_ConnectNotify_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechWidget::TextEditTextToSpeech__TextToSpeechWidget_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechWidget_DisconnectNotify(TextEditTextToSpeech__TextToSpeechWidget* self, const QMetaMethod* signal) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->disconnectNotify(*signal);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechWidget*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechWidget_SuperDisconnectNotify(TextEditTextToSpeech__TextToSpeechWidget* self, const QMetaMethod* signal) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->setTextEditTextToSpeech__TextToSpeechWidget_DisconnectNotify_IsBase(true);
        vtextedittexttospeechtexttospeechwidget->disconnectNotify(*signal);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechWidget*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechWidget_OnDisconnectNotify(TextEditTextToSpeech__TextToSpeechWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->setTextEditTextToSpeech__TextToSpeechWidget_DisconnectNotify_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechWidget::TextEditTextToSpeech__TextToSpeechWidget_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechWidget_UpdateMicroFocus(TextEditTextToSpeech__TextToSpeechWidget* self) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->updateMicroFocus();
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechWidget*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechWidget_SuperUpdateMicroFocus(TextEditTextToSpeech__TextToSpeechWidget* self) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->setTextEditTextToSpeech__TextToSpeechWidget_UpdateMicroFocus_IsBase(true);
        vtextedittexttospeechtexttospeechwidget->updateMicroFocus();
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechWidget*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechWidget_OnUpdateMicroFocus(TextEditTextToSpeech__TextToSpeechWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->setTextEditTextToSpeech__TextToSpeechWidget_UpdateMicroFocus_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechWidget::TextEditTextToSpeech__TextToSpeechWidget_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechWidget_Create(TextEditTextToSpeech__TextToSpeechWidget* self) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->create();
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechWidget*)self)->create();
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechWidget_SuperCreate(TextEditTextToSpeech__TextToSpeechWidget* self) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->setTextEditTextToSpeech__TextToSpeechWidget_Create_IsBase(true);
        vtextedittexttospeechtexttospeechwidget->create();
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechWidget*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechWidget_OnCreate(TextEditTextToSpeech__TextToSpeechWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->setTextEditTextToSpeech__TextToSpeechWidget_Create_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechWidget::TextEditTextToSpeech__TextToSpeechWidget_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechWidget_Destroy(TextEditTextToSpeech__TextToSpeechWidget* self) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->destroy();
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechWidget*)self)->destroy();
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechWidget_SuperDestroy(TextEditTextToSpeech__TextToSpeechWidget* self) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->setTextEditTextToSpeech__TextToSpeechWidget_Destroy_IsBase(true);
        vtextedittexttospeechtexttospeechwidget->destroy();
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechWidget*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechWidget_OnDestroy(TextEditTextToSpeech__TextToSpeechWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->setTextEditTextToSpeech__TextToSpeechWidget_Destroy_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechWidget::TextEditTextToSpeech__TextToSpeechWidget_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextEditTextToSpeech__TextToSpeechWidget_FocusNextChild(TextEditTextToSpeech__TextToSpeechWidget* self) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        return vtextedittexttospeechtexttospeechwidget->focusNextChild();
    } else {
        return ((VirtualTextEditTextToSpeechTextToSpeechWidget*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool TextEditTextToSpeech__TextToSpeechWidget_SuperFocusNextChild(TextEditTextToSpeech__TextToSpeechWidget* self) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->setTextEditTextToSpeech__TextToSpeechWidget_FocusNextChild_IsBase(true);
        return vtextedittexttospeechtexttospeechwidget->focusNextChild();
    } else {
        return ((VirtualTextEditTextToSpeechTextToSpeechWidget*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechWidget_OnFocusNextChild(TextEditTextToSpeech__TextToSpeechWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->setTextEditTextToSpeech__TextToSpeechWidget_FocusNextChild_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechWidget::TextEditTextToSpeech__TextToSpeechWidget_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextEditTextToSpeech__TextToSpeechWidget_FocusPreviousChild(TextEditTextToSpeech__TextToSpeechWidget* self) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        return vtextedittexttospeechtexttospeechwidget->focusPreviousChild();
    } else {
        return ((VirtualTextEditTextToSpeechTextToSpeechWidget*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool TextEditTextToSpeech__TextToSpeechWidget_SuperFocusPreviousChild(TextEditTextToSpeech__TextToSpeechWidget* self) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->setTextEditTextToSpeech__TextToSpeechWidget_FocusPreviousChild_IsBase(true);
        return vtextedittexttospeechtexttospeechwidget->focusPreviousChild();
    } else {
        return ((VirtualTextEditTextToSpeechTextToSpeechWidget*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechWidget_OnFocusPreviousChild(TextEditTextToSpeech__TextToSpeechWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(self);
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->setTextEditTextToSpeech__TextToSpeechWidget_FocusPreviousChild_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechWidget::TextEditTextToSpeech__TextToSpeechWidget_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* TextEditTextToSpeech__TextToSpeechWidget_Sender(const TextEditTextToSpeech__TextToSpeechWidget* self) {
    auto* vtextedittexttospeechtexttospeechwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechWidget*>(self));
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        return vtextedittexttospeechtexttospeechwidget->sender();
    } else {
        return ((VirtualTextEditTextToSpeechTextToSpeechWidget*)self)->sender();
    }
}

// Base class handler implementation
QObject* TextEditTextToSpeech__TextToSpeechWidget_SuperSender(const TextEditTextToSpeech__TextToSpeechWidget* self) {
    auto* vtextedittexttospeechtexttospeechwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechWidget*>(self));
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->setTextEditTextToSpeech__TextToSpeechWidget_Sender_IsBase(true);
        return vtextedittexttospeechtexttospeechwidget->sender();
    } else {
        return ((VirtualTextEditTextToSpeechTextToSpeechWidget*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechWidget_OnSender(const TextEditTextToSpeech__TextToSpeechWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechWidget*>(self));
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->setTextEditTextToSpeech__TextToSpeechWidget_Sender_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechWidget::TextEditTextToSpeech__TextToSpeechWidget_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int TextEditTextToSpeech__TextToSpeechWidget_SenderSignalIndex(const TextEditTextToSpeech__TextToSpeechWidget* self) {
    auto* vtextedittexttospeechtexttospeechwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechWidget*>(self));
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        return vtextedittexttospeechtexttospeechwidget->senderSignalIndex();
    } else {
        return ((VirtualTextEditTextToSpeechTextToSpeechWidget*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int TextEditTextToSpeech__TextToSpeechWidget_SuperSenderSignalIndex(const TextEditTextToSpeech__TextToSpeechWidget* self) {
    auto* vtextedittexttospeechtexttospeechwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechWidget*>(self));
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->setTextEditTextToSpeech__TextToSpeechWidget_SenderSignalIndex_IsBase(true);
        return vtextedittexttospeechtexttospeechwidget->senderSignalIndex();
    } else {
        return ((VirtualTextEditTextToSpeechTextToSpeechWidget*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechWidget_OnSenderSignalIndex(const TextEditTextToSpeech__TextToSpeechWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechWidget*>(self));
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->setTextEditTextToSpeech__TextToSpeechWidget_SenderSignalIndex_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechWidget::TextEditTextToSpeech__TextToSpeechWidget_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int TextEditTextToSpeech__TextToSpeechWidget_Receivers(const TextEditTextToSpeech__TextToSpeechWidget* self, const char* signal) {
    auto* vtextedittexttospeechtexttospeechwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechWidget*>(self));
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        return vtextedittexttospeechtexttospeechwidget->receivers(signal);
    } else {
        return ((VirtualTextEditTextToSpeechTextToSpeechWidget*)self)->receivers(signal);
    }
}

// Base class handler implementation
int TextEditTextToSpeech__TextToSpeechWidget_SuperReceivers(const TextEditTextToSpeech__TextToSpeechWidget* self, const char* signal) {
    auto* vtextedittexttospeechtexttospeechwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechWidget*>(self));
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->setTextEditTextToSpeech__TextToSpeechWidget_Receivers_IsBase(true);
        return vtextedittexttospeechtexttospeechwidget->receivers(signal);
    } else {
        return ((VirtualTextEditTextToSpeechTextToSpeechWidget*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechWidget_OnReceivers(const TextEditTextToSpeech__TextToSpeechWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechWidget*>(self));
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->setTextEditTextToSpeech__TextToSpeechWidget_Receivers_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechWidget::TextEditTextToSpeech__TextToSpeechWidget_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextEditTextToSpeech__TextToSpeechWidget_IsSignalConnected(const TextEditTextToSpeech__TextToSpeechWidget* self, const QMetaMethod* signal) {
    auto* vtextedittexttospeechtexttospeechwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechWidget*>(self));
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        return vtextedittexttospeechtexttospeechwidget->isSignalConnected(*signal);
    } else {
        return ((VirtualTextEditTextToSpeechTextToSpeechWidget*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool TextEditTextToSpeech__TextToSpeechWidget_SuperIsSignalConnected(const TextEditTextToSpeech__TextToSpeechWidget* self, const QMetaMethod* signal) {
    auto* vtextedittexttospeechtexttospeechwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechWidget*>(self));
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->setTextEditTextToSpeech__TextToSpeechWidget_IsSignalConnected_IsBase(true);
        return vtextedittexttospeechtexttospeechwidget->isSignalConnected(*signal);
    } else {
        return ((VirtualTextEditTextToSpeechTextToSpeechWidget*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechWidget_OnIsSignalConnected(const TextEditTextToSpeech__TextToSpeechWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechWidget*>(self));
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->setTextEditTextToSpeech__TextToSpeechWidget_IsSignalConnected_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechWidget::TextEditTextToSpeech__TextToSpeechWidget_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double TextEditTextToSpeech__TextToSpeechWidget_GetDecodedMetricF(const TextEditTextToSpeech__TextToSpeechWidget* self, int metricA, int metricB) {
    auto* vtextedittexttospeechtexttospeechwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechWidget*>(self));
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        return vtextedittexttospeechtexttospeechwidget->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualTextEditTextToSpeechTextToSpeechWidget*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double TextEditTextToSpeech__TextToSpeechWidget_SuperGetDecodedMetricF(const TextEditTextToSpeech__TextToSpeechWidget* self, int metricA, int metricB) {
    auto* vtextedittexttospeechtexttospeechwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechWidget*>(self));
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->setTextEditTextToSpeech__TextToSpeechWidget_GetDecodedMetricF_IsBase(true);
        return vtextedittexttospeechtexttospeechwidget->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualTextEditTextToSpeechTextToSpeechWidget*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechWidget_OnGetDecodedMetricF(const TextEditTextToSpeech__TextToSpeechWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechWidget*>(self));
    if (vtextedittexttospeechtexttospeechwidget && vtextedittexttospeechtexttospeechwidget->isVirtualTextEditTextToSpeechTextToSpeechWidget) {
        vtextedittexttospeechtexttospeechwidget->setTextEditTextToSpeech__TextToSpeechWidget_GetDecodedMetricF_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechWidget::TextEditTextToSpeech__TextToSpeechWidget_GetDecodedMetricF_Callback>(slot));
    }
}

void TextEditTextToSpeech__TextToSpeechWidget_Delete(TextEditTextToSpeech__TextToSpeechWidget* self) {
    delete self;
}
