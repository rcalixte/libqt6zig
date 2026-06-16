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
#define WORKAROUND_INNER_CLASS_DEFINITION_TextEditTextToSpeech__TextToSpeechContainerWidget
#include <texttospeechcontainerwidget.h>
#include "libtexttospeechcontainerwidget.h"
#include "libtexttospeechcontainerwidget.hxx"

TextEditTextToSpeech__TextToSpeechContainerWidget* TextEditTextToSpeech__TextToSpeechContainerWidget_new(QWidget* parent) {
    return new VirtualTextEditTextToSpeechTextToSpeechContainerWidget(parent);
}

TextEditTextToSpeech__TextToSpeechContainerWidget* TextEditTextToSpeech__TextToSpeechContainerWidget_new2() {
    return new VirtualTextEditTextToSpeechTextToSpeechContainerWidget();
}

QMetaObject* TextEditTextToSpeech__TextToSpeechContainerWidget_MetaObject(const TextEditTextToSpeech__TextToSpeechContainerWidget* self) {
    return (QMetaObject*)self->metaObject();
}

void* TextEditTextToSpeech__TextToSpeechContainerWidget_Metacast(TextEditTextToSpeech__TextToSpeechContainerWidget* self, const char* param1) {
    return self->qt_metacast(param1);
}

int TextEditTextToSpeech__TextToSpeechContainerWidget_Metacall(TextEditTextToSpeech__TextToSpeechContainerWidget* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

void TextEditTextToSpeech__TextToSpeechContainerWidget_Say(TextEditTextToSpeech__TextToSpeechContainerWidget* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->say(text_QString);
}

// Base class handler implementation
QMetaObject* TextEditTextToSpeech__TextToSpeechContainerWidget_SuperMetaObject(const TextEditTextToSpeech__TextToSpeechContainerWidget* self) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self));
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->setTextEditTextToSpeech__TextToSpeechContainerWidget_MetaObject_IsBase(true);
        return (QMetaObject*)vtextedittexttospeechtexttospeechcontainerwidget->metaObject();
    } else {
        return (QMetaObject*)self->TextEditTextToSpeech::TextToSpeechContainerWidget::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_OnMetaObject(const TextEditTextToSpeech__TextToSpeechContainerWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self));
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->setTextEditTextToSpeech__TextToSpeechContainerWidget_MetaObject_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget::TextEditTextToSpeech__TextToSpeechContainerWidget_MetaObject_Callback>(slot));
    }
}

// Base class handler implementation
void* TextEditTextToSpeech__TextToSpeechContainerWidget_SuperMetacast(TextEditTextToSpeech__TextToSpeechContainerWidget* self, const char* param1) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->setTextEditTextToSpeech__TextToSpeechContainerWidget_Metacast_IsBase(true);
        return vtextedittexttospeechtexttospeechcontainerwidget->qt_metacast(param1);
    } else {
        return self->TextEditTextToSpeech::TextToSpeechContainerWidget::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_OnMetacast(TextEditTextToSpeech__TextToSpeechContainerWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->setTextEditTextToSpeech__TextToSpeechContainerWidget_Metacast_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget::TextEditTextToSpeech__TextToSpeechContainerWidget_Metacast_Callback>(slot));
    }
}

// Base class handler implementation
int TextEditTextToSpeech__TextToSpeechContainerWidget_SuperMetacall(TextEditTextToSpeech__TextToSpeechContainerWidget* self, int param1, int param2, void** param3) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->setTextEditTextToSpeech__TextToSpeechContainerWidget_Metacall_IsBase(true);
        return vtextedittexttospeechtexttospeechcontainerwidget->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->TextEditTextToSpeech::TextToSpeechContainerWidget::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_OnMetacall(TextEditTextToSpeech__TextToSpeechContainerWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->setTextEditTextToSpeech__TextToSpeechContainerWidget_Metacall_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget::TextEditTextToSpeech__TextToSpeechContainerWidget_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
int TextEditTextToSpeech__TextToSpeechContainerWidget_DevType(const TextEditTextToSpeech__TextToSpeechContainerWidget* self) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self));
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        return vtextedittexttospeechtexttospeechcontainerwidget->devType();
    } else {
        return self->TextEditTextToSpeech::TextToSpeechContainerWidget::devType();
    }
}

// Base class handler implementation
int TextEditTextToSpeech__TextToSpeechContainerWidget_SuperDevType(const TextEditTextToSpeech__TextToSpeechContainerWidget* self) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self));
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->setTextEditTextToSpeech__TextToSpeechContainerWidget_DevType_IsBase(true);
        return vtextedittexttospeechtexttospeechcontainerwidget->devType();
    } else {
        return self->TextEditTextToSpeech::TextToSpeechContainerWidget::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_OnDevType(const TextEditTextToSpeech__TextToSpeechContainerWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self));
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->setTextEditTextToSpeech__TextToSpeechContainerWidget_DevType_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget::TextEditTextToSpeech__TextToSpeechContainerWidget_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_SetVisible(TextEditTextToSpeech__TextToSpeechContainerWidget* self, bool visible) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->setVisible(visible);
    } else {
        self->TextEditTextToSpeech::TextToSpeechContainerWidget::setVisible(visible);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_SuperSetVisible(TextEditTextToSpeech__TextToSpeechContainerWidget* self, bool visible) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->setTextEditTextToSpeech__TextToSpeechContainerWidget_SetVisible_IsBase(true);
        vtextedittexttospeechtexttospeechcontainerwidget->setVisible(visible);
    } else {
        self->TextEditTextToSpeech::TextToSpeechContainerWidget::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_OnSetVisible(TextEditTextToSpeech__TextToSpeechContainerWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->setTextEditTextToSpeech__TextToSpeechContainerWidget_SetVisible_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget::TextEditTextToSpeech__TextToSpeechContainerWidget_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* TextEditTextToSpeech__TextToSpeechContainerWidget_SizeHint(const TextEditTextToSpeech__TextToSpeechContainerWidget* self) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self));
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        return new QSize(vtextedittexttospeechtexttospeechcontainerwidget->sizeHint());
    } else {
        return new QSize(((VirtualTextEditTextToSpeechTextToSpeechContainerWidget*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* TextEditTextToSpeech__TextToSpeechContainerWidget_SuperSizeHint(const TextEditTextToSpeech__TextToSpeechContainerWidget* self) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self));
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->setTextEditTextToSpeech__TextToSpeechContainerWidget_SizeHint_IsBase(true);
        return new QSize(vtextedittexttospeechtexttospeechcontainerwidget->sizeHint());
    } else {
        return new QSize(((VirtualTextEditTextToSpeechTextToSpeechContainerWidget*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_OnSizeHint(const TextEditTextToSpeech__TextToSpeechContainerWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self));
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->setTextEditTextToSpeech__TextToSpeechContainerWidget_SizeHint_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget::TextEditTextToSpeech__TextToSpeechContainerWidget_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* TextEditTextToSpeech__TextToSpeechContainerWidget_MinimumSizeHint(const TextEditTextToSpeech__TextToSpeechContainerWidget* self) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self));
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        return new QSize(vtextedittexttospeechtexttospeechcontainerwidget->minimumSizeHint());
    } else {
        return new QSize(((VirtualTextEditTextToSpeechTextToSpeechContainerWidget*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* TextEditTextToSpeech__TextToSpeechContainerWidget_SuperMinimumSizeHint(const TextEditTextToSpeech__TextToSpeechContainerWidget* self) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self));
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->setTextEditTextToSpeech__TextToSpeechContainerWidget_MinimumSizeHint_IsBase(true);
        return new QSize(vtextedittexttospeechtexttospeechcontainerwidget->minimumSizeHint());
    } else {
        return new QSize(((VirtualTextEditTextToSpeechTextToSpeechContainerWidget*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_OnMinimumSizeHint(const TextEditTextToSpeech__TextToSpeechContainerWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self));
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->setTextEditTextToSpeech__TextToSpeechContainerWidget_MinimumSizeHint_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget::TextEditTextToSpeech__TextToSpeechContainerWidget_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
int TextEditTextToSpeech__TextToSpeechContainerWidget_HeightForWidth(const TextEditTextToSpeech__TextToSpeechContainerWidget* self, int param1) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self));
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        return vtextedittexttospeechtexttospeechcontainerwidget->heightForWidth(static_cast<int>(param1));
    } else {
        return self->TextEditTextToSpeech::TextToSpeechContainerWidget::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int TextEditTextToSpeech__TextToSpeechContainerWidget_SuperHeightForWidth(const TextEditTextToSpeech__TextToSpeechContainerWidget* self, int param1) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self));
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->setTextEditTextToSpeech__TextToSpeechContainerWidget_HeightForWidth_IsBase(true);
        return vtextedittexttospeechtexttospeechcontainerwidget->heightForWidth(static_cast<int>(param1));
    } else {
        return self->TextEditTextToSpeech::TextToSpeechContainerWidget::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_OnHeightForWidth(const TextEditTextToSpeech__TextToSpeechContainerWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self));
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->setTextEditTextToSpeech__TextToSpeechContainerWidget_HeightForWidth_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget::TextEditTextToSpeech__TextToSpeechContainerWidget_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextEditTextToSpeech__TextToSpeechContainerWidget_HasHeightForWidth(const TextEditTextToSpeech__TextToSpeechContainerWidget* self) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self));
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        return vtextedittexttospeechtexttospeechcontainerwidget->hasHeightForWidth();
    } else {
        return self->TextEditTextToSpeech::TextToSpeechContainerWidget::hasHeightForWidth();
    }
}

// Base class handler implementation
bool TextEditTextToSpeech__TextToSpeechContainerWidget_SuperHasHeightForWidth(const TextEditTextToSpeech__TextToSpeechContainerWidget* self) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self));
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->setTextEditTextToSpeech__TextToSpeechContainerWidget_HasHeightForWidth_IsBase(true);
        return vtextedittexttospeechtexttospeechcontainerwidget->hasHeightForWidth();
    } else {
        return self->TextEditTextToSpeech::TextToSpeechContainerWidget::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_OnHasHeightForWidth(const TextEditTextToSpeech__TextToSpeechContainerWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self));
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->setTextEditTextToSpeech__TextToSpeechContainerWidget_HasHeightForWidth_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget::TextEditTextToSpeech__TextToSpeechContainerWidget_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* TextEditTextToSpeech__TextToSpeechContainerWidget_PaintEngine(const TextEditTextToSpeech__TextToSpeechContainerWidget* self) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self));
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        return vtextedittexttospeechtexttospeechcontainerwidget->paintEngine();
    } else {
        return self->TextEditTextToSpeech::TextToSpeechContainerWidget::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* TextEditTextToSpeech__TextToSpeechContainerWidget_SuperPaintEngine(const TextEditTextToSpeech__TextToSpeechContainerWidget* self) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self));
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->setTextEditTextToSpeech__TextToSpeechContainerWidget_PaintEngine_IsBase(true);
        return vtextedittexttospeechtexttospeechcontainerwidget->paintEngine();
    } else {
        return self->TextEditTextToSpeech::TextToSpeechContainerWidget::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_OnPaintEngine(const TextEditTextToSpeech__TextToSpeechContainerWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self));
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->setTextEditTextToSpeech__TextToSpeechContainerWidget_PaintEngine_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget::TextEditTextToSpeech__TextToSpeechContainerWidget_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextEditTextToSpeech__TextToSpeechContainerWidget_Event(TextEditTextToSpeech__TextToSpeechContainerWidget* self, QEvent* event) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        return vtextedittexttospeechtexttospeechcontainerwidget->event(event);
    } else {
        return ((VirtualTextEditTextToSpeechTextToSpeechContainerWidget*)self)->event(event);
    }
}

// Base class handler implementation
bool TextEditTextToSpeech__TextToSpeechContainerWidget_SuperEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, QEvent* event) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->setTextEditTextToSpeech__TextToSpeechContainerWidget_Event_IsBase(true);
        return vtextedittexttospeechtexttospeechcontainerwidget->event(event);
    } else {
        return ((VirtualTextEditTextToSpeechTextToSpeechContainerWidget*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_OnEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->setTextEditTextToSpeech__TextToSpeechContainerWidget_Event_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget::TextEditTextToSpeech__TextToSpeechContainerWidget_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_MousePressEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, QMouseEvent* event) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->mousePressEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechContainerWidget*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_SuperMousePressEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, QMouseEvent* event) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->setTextEditTextToSpeech__TextToSpeechContainerWidget_MousePressEvent_IsBase(true);
        vtextedittexttospeechtexttospeechcontainerwidget->mousePressEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechContainerWidget*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_OnMousePressEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->setTextEditTextToSpeech__TextToSpeechContainerWidget_MousePressEvent_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget::TextEditTextToSpeech__TextToSpeechContainerWidget_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_MouseReleaseEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, QMouseEvent* event) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->mouseReleaseEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechContainerWidget*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_SuperMouseReleaseEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, QMouseEvent* event) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->setTextEditTextToSpeech__TextToSpeechContainerWidget_MouseReleaseEvent_IsBase(true);
        vtextedittexttospeechtexttospeechcontainerwidget->mouseReleaseEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechContainerWidget*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_OnMouseReleaseEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->setTextEditTextToSpeech__TextToSpeechContainerWidget_MouseReleaseEvent_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget::TextEditTextToSpeech__TextToSpeechContainerWidget_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_MouseDoubleClickEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, QMouseEvent* event) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->mouseDoubleClickEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechContainerWidget*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_SuperMouseDoubleClickEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, QMouseEvent* event) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->setTextEditTextToSpeech__TextToSpeechContainerWidget_MouseDoubleClickEvent_IsBase(true);
        vtextedittexttospeechtexttospeechcontainerwidget->mouseDoubleClickEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechContainerWidget*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_OnMouseDoubleClickEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->setTextEditTextToSpeech__TextToSpeechContainerWidget_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget::TextEditTextToSpeech__TextToSpeechContainerWidget_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_MouseMoveEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, QMouseEvent* event) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->mouseMoveEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechContainerWidget*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_SuperMouseMoveEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, QMouseEvent* event) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->setTextEditTextToSpeech__TextToSpeechContainerWidget_MouseMoveEvent_IsBase(true);
        vtextedittexttospeechtexttospeechcontainerwidget->mouseMoveEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechContainerWidget*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_OnMouseMoveEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->setTextEditTextToSpeech__TextToSpeechContainerWidget_MouseMoveEvent_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget::TextEditTextToSpeech__TextToSpeechContainerWidget_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_WheelEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, QWheelEvent* event) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->wheelEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechContainerWidget*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_SuperWheelEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, QWheelEvent* event) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->setTextEditTextToSpeech__TextToSpeechContainerWidget_WheelEvent_IsBase(true);
        vtextedittexttospeechtexttospeechcontainerwidget->wheelEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechContainerWidget*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_OnWheelEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->setTextEditTextToSpeech__TextToSpeechContainerWidget_WheelEvent_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget::TextEditTextToSpeech__TextToSpeechContainerWidget_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_KeyPressEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, QKeyEvent* event) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->keyPressEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechContainerWidget*)self)->keyPressEvent(event);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_SuperKeyPressEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, QKeyEvent* event) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->setTextEditTextToSpeech__TextToSpeechContainerWidget_KeyPressEvent_IsBase(true);
        vtextedittexttospeechtexttospeechcontainerwidget->keyPressEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechContainerWidget*)self)->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_OnKeyPressEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->setTextEditTextToSpeech__TextToSpeechContainerWidget_KeyPressEvent_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget::TextEditTextToSpeech__TextToSpeechContainerWidget_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_KeyReleaseEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, QKeyEvent* event) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->keyReleaseEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechContainerWidget*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_SuperKeyReleaseEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, QKeyEvent* event) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->setTextEditTextToSpeech__TextToSpeechContainerWidget_KeyReleaseEvent_IsBase(true);
        vtextedittexttospeechtexttospeechcontainerwidget->keyReleaseEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechContainerWidget*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_OnKeyReleaseEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->setTextEditTextToSpeech__TextToSpeechContainerWidget_KeyReleaseEvent_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget::TextEditTextToSpeech__TextToSpeechContainerWidget_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_FocusInEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, QFocusEvent* event) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->focusInEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechContainerWidget*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_SuperFocusInEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, QFocusEvent* event) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->setTextEditTextToSpeech__TextToSpeechContainerWidget_FocusInEvent_IsBase(true);
        vtextedittexttospeechtexttospeechcontainerwidget->focusInEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechContainerWidget*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_OnFocusInEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->setTextEditTextToSpeech__TextToSpeechContainerWidget_FocusInEvent_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget::TextEditTextToSpeech__TextToSpeechContainerWidget_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_FocusOutEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, QFocusEvent* event) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->focusOutEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechContainerWidget*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_SuperFocusOutEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, QFocusEvent* event) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->setTextEditTextToSpeech__TextToSpeechContainerWidget_FocusOutEvent_IsBase(true);
        vtextedittexttospeechtexttospeechcontainerwidget->focusOutEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechContainerWidget*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_OnFocusOutEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->setTextEditTextToSpeech__TextToSpeechContainerWidget_FocusOutEvent_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget::TextEditTextToSpeech__TextToSpeechContainerWidget_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_EnterEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, QEnterEvent* event) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->enterEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechContainerWidget*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_SuperEnterEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, QEnterEvent* event) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->setTextEditTextToSpeech__TextToSpeechContainerWidget_EnterEvent_IsBase(true);
        vtextedittexttospeechtexttospeechcontainerwidget->enterEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechContainerWidget*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_OnEnterEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->setTextEditTextToSpeech__TextToSpeechContainerWidget_EnterEvent_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget::TextEditTextToSpeech__TextToSpeechContainerWidget_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_LeaveEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, QEvent* event) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->leaveEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechContainerWidget*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_SuperLeaveEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, QEvent* event) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->setTextEditTextToSpeech__TextToSpeechContainerWidget_LeaveEvent_IsBase(true);
        vtextedittexttospeechtexttospeechcontainerwidget->leaveEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechContainerWidget*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_OnLeaveEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->setTextEditTextToSpeech__TextToSpeechContainerWidget_LeaveEvent_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget::TextEditTextToSpeech__TextToSpeechContainerWidget_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_PaintEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, QPaintEvent* event) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->paintEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechContainerWidget*)self)->paintEvent(event);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_SuperPaintEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, QPaintEvent* event) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->setTextEditTextToSpeech__TextToSpeechContainerWidget_PaintEvent_IsBase(true);
        vtextedittexttospeechtexttospeechcontainerwidget->paintEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechContainerWidget*)self)->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_OnPaintEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->setTextEditTextToSpeech__TextToSpeechContainerWidget_PaintEvent_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget::TextEditTextToSpeech__TextToSpeechContainerWidget_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_MoveEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, QMoveEvent* event) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->moveEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechContainerWidget*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_SuperMoveEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, QMoveEvent* event) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->setTextEditTextToSpeech__TextToSpeechContainerWidget_MoveEvent_IsBase(true);
        vtextedittexttospeechtexttospeechcontainerwidget->moveEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechContainerWidget*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_OnMoveEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->setTextEditTextToSpeech__TextToSpeechContainerWidget_MoveEvent_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget::TextEditTextToSpeech__TextToSpeechContainerWidget_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_ResizeEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, QResizeEvent* event) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->resizeEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechContainerWidget*)self)->resizeEvent(event);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_SuperResizeEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, QResizeEvent* event) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->setTextEditTextToSpeech__TextToSpeechContainerWidget_ResizeEvent_IsBase(true);
        vtextedittexttospeechtexttospeechcontainerwidget->resizeEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechContainerWidget*)self)->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_OnResizeEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->setTextEditTextToSpeech__TextToSpeechContainerWidget_ResizeEvent_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget::TextEditTextToSpeech__TextToSpeechContainerWidget_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_CloseEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, QCloseEvent* event) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->closeEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechContainerWidget*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_SuperCloseEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, QCloseEvent* event) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->setTextEditTextToSpeech__TextToSpeechContainerWidget_CloseEvent_IsBase(true);
        vtextedittexttospeechtexttospeechcontainerwidget->closeEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechContainerWidget*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_OnCloseEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->setTextEditTextToSpeech__TextToSpeechContainerWidget_CloseEvent_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget::TextEditTextToSpeech__TextToSpeechContainerWidget_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_ContextMenuEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, QContextMenuEvent* event) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->contextMenuEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechContainerWidget*)self)->contextMenuEvent(event);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_SuperContextMenuEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, QContextMenuEvent* event) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->setTextEditTextToSpeech__TextToSpeechContainerWidget_ContextMenuEvent_IsBase(true);
        vtextedittexttospeechtexttospeechcontainerwidget->contextMenuEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechContainerWidget*)self)->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_OnContextMenuEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->setTextEditTextToSpeech__TextToSpeechContainerWidget_ContextMenuEvent_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget::TextEditTextToSpeech__TextToSpeechContainerWidget_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_TabletEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, QTabletEvent* event) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->tabletEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechContainerWidget*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_SuperTabletEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, QTabletEvent* event) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->setTextEditTextToSpeech__TextToSpeechContainerWidget_TabletEvent_IsBase(true);
        vtextedittexttospeechtexttospeechcontainerwidget->tabletEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechContainerWidget*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_OnTabletEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->setTextEditTextToSpeech__TextToSpeechContainerWidget_TabletEvent_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget::TextEditTextToSpeech__TextToSpeechContainerWidget_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_ActionEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, QActionEvent* event) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->actionEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechContainerWidget*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_SuperActionEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, QActionEvent* event) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->setTextEditTextToSpeech__TextToSpeechContainerWidget_ActionEvent_IsBase(true);
        vtextedittexttospeechtexttospeechcontainerwidget->actionEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechContainerWidget*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_OnActionEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->setTextEditTextToSpeech__TextToSpeechContainerWidget_ActionEvent_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget::TextEditTextToSpeech__TextToSpeechContainerWidget_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_DragEnterEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, QDragEnterEvent* event) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->dragEnterEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechContainerWidget*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_SuperDragEnterEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, QDragEnterEvent* event) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->setTextEditTextToSpeech__TextToSpeechContainerWidget_DragEnterEvent_IsBase(true);
        vtextedittexttospeechtexttospeechcontainerwidget->dragEnterEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechContainerWidget*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_OnDragEnterEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->setTextEditTextToSpeech__TextToSpeechContainerWidget_DragEnterEvent_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget::TextEditTextToSpeech__TextToSpeechContainerWidget_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_DragMoveEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, QDragMoveEvent* event) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->dragMoveEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechContainerWidget*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_SuperDragMoveEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, QDragMoveEvent* event) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->setTextEditTextToSpeech__TextToSpeechContainerWidget_DragMoveEvent_IsBase(true);
        vtextedittexttospeechtexttospeechcontainerwidget->dragMoveEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechContainerWidget*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_OnDragMoveEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->setTextEditTextToSpeech__TextToSpeechContainerWidget_DragMoveEvent_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget::TextEditTextToSpeech__TextToSpeechContainerWidget_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_DragLeaveEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, QDragLeaveEvent* event) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->dragLeaveEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechContainerWidget*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_SuperDragLeaveEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, QDragLeaveEvent* event) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->setTextEditTextToSpeech__TextToSpeechContainerWidget_DragLeaveEvent_IsBase(true);
        vtextedittexttospeechtexttospeechcontainerwidget->dragLeaveEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechContainerWidget*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_OnDragLeaveEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->setTextEditTextToSpeech__TextToSpeechContainerWidget_DragLeaveEvent_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget::TextEditTextToSpeech__TextToSpeechContainerWidget_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_DropEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, QDropEvent* event) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->dropEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechContainerWidget*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_SuperDropEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, QDropEvent* event) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->setTextEditTextToSpeech__TextToSpeechContainerWidget_DropEvent_IsBase(true);
        vtextedittexttospeechtexttospeechcontainerwidget->dropEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechContainerWidget*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_OnDropEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->setTextEditTextToSpeech__TextToSpeechContainerWidget_DropEvent_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget::TextEditTextToSpeech__TextToSpeechContainerWidget_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_ShowEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, QShowEvent* event) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->showEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechContainerWidget*)self)->showEvent(event);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_SuperShowEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, QShowEvent* event) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->setTextEditTextToSpeech__TextToSpeechContainerWidget_ShowEvent_IsBase(true);
        vtextedittexttospeechtexttospeechcontainerwidget->showEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechContainerWidget*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_OnShowEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->setTextEditTextToSpeech__TextToSpeechContainerWidget_ShowEvent_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget::TextEditTextToSpeech__TextToSpeechContainerWidget_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_HideEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, QHideEvent* event) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->hideEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechContainerWidget*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_SuperHideEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, QHideEvent* event) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->setTextEditTextToSpeech__TextToSpeechContainerWidget_HideEvent_IsBase(true);
        vtextedittexttospeechtexttospeechcontainerwidget->hideEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechContainerWidget*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_OnHideEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->setTextEditTextToSpeech__TextToSpeechContainerWidget_HideEvent_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget::TextEditTextToSpeech__TextToSpeechContainerWidget_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextEditTextToSpeech__TextToSpeechContainerWidget_NativeEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        return vtextedittexttospeechtexttospeechcontainerwidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualTextEditTextToSpeechTextToSpeechContainerWidget*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool TextEditTextToSpeech__TextToSpeechContainerWidget_SuperNativeEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->setTextEditTextToSpeech__TextToSpeechContainerWidget_NativeEvent_IsBase(true);
        return vtextedittexttospeechtexttospeechcontainerwidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualTextEditTextToSpeechTextToSpeechContainerWidget*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_OnNativeEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->setTextEditTextToSpeech__TextToSpeechContainerWidget_NativeEvent_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget::TextEditTextToSpeech__TextToSpeechContainerWidget_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_ChangeEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, QEvent* param1) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->changeEvent(param1);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechContainerWidget*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_SuperChangeEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, QEvent* param1) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->setTextEditTextToSpeech__TextToSpeechContainerWidget_ChangeEvent_IsBase(true);
        vtextedittexttospeechtexttospeechcontainerwidget->changeEvent(param1);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechContainerWidget*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_OnChangeEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->setTextEditTextToSpeech__TextToSpeechContainerWidget_ChangeEvent_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget::TextEditTextToSpeech__TextToSpeechContainerWidget_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int TextEditTextToSpeech__TextToSpeechContainerWidget_Metric(const TextEditTextToSpeech__TextToSpeechContainerWidget* self, int param1) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self));
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        return vtextedittexttospeechtexttospeechcontainerwidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualTextEditTextToSpeechTextToSpeechContainerWidget*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int TextEditTextToSpeech__TextToSpeechContainerWidget_SuperMetric(const TextEditTextToSpeech__TextToSpeechContainerWidget* self, int param1) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self));
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->setTextEditTextToSpeech__TextToSpeechContainerWidget_Metric_IsBase(true);
        return vtextedittexttospeechtexttospeechcontainerwidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualTextEditTextToSpeechTextToSpeechContainerWidget*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_OnMetric(const TextEditTextToSpeech__TextToSpeechContainerWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self));
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->setTextEditTextToSpeech__TextToSpeechContainerWidget_Metric_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget::TextEditTextToSpeech__TextToSpeechContainerWidget_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_InitPainter(const TextEditTextToSpeech__TextToSpeechContainerWidget* self, QPainter* painter) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self));
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->initPainter(painter);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechContainerWidget*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_SuperInitPainter(const TextEditTextToSpeech__TextToSpeechContainerWidget* self, QPainter* painter) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self));
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->setTextEditTextToSpeech__TextToSpeechContainerWidget_InitPainter_IsBase(true);
        vtextedittexttospeechtexttospeechcontainerwidget->initPainter(painter);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechContainerWidget*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_OnInitPainter(const TextEditTextToSpeech__TextToSpeechContainerWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self));
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->setTextEditTextToSpeech__TextToSpeechContainerWidget_InitPainter_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget::TextEditTextToSpeech__TextToSpeechContainerWidget_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* TextEditTextToSpeech__TextToSpeechContainerWidget_Redirected(const TextEditTextToSpeech__TextToSpeechContainerWidget* self, QPoint* offset) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self));
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        return vtextedittexttospeechtexttospeechcontainerwidget->redirected(offset);
    } else {
        return ((VirtualTextEditTextToSpeechTextToSpeechContainerWidget*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* TextEditTextToSpeech__TextToSpeechContainerWidget_SuperRedirected(const TextEditTextToSpeech__TextToSpeechContainerWidget* self, QPoint* offset) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self));
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->setTextEditTextToSpeech__TextToSpeechContainerWidget_Redirected_IsBase(true);
        return vtextedittexttospeechtexttospeechcontainerwidget->redirected(offset);
    } else {
        return ((VirtualTextEditTextToSpeechTextToSpeechContainerWidget*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_OnRedirected(const TextEditTextToSpeech__TextToSpeechContainerWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self));
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->setTextEditTextToSpeech__TextToSpeechContainerWidget_Redirected_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget::TextEditTextToSpeech__TextToSpeechContainerWidget_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* TextEditTextToSpeech__TextToSpeechContainerWidget_SharedPainter(const TextEditTextToSpeech__TextToSpeechContainerWidget* self) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self));
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        return vtextedittexttospeechtexttospeechcontainerwidget->sharedPainter();
    } else {
        return ((VirtualTextEditTextToSpeechTextToSpeechContainerWidget*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* TextEditTextToSpeech__TextToSpeechContainerWidget_SuperSharedPainter(const TextEditTextToSpeech__TextToSpeechContainerWidget* self) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self));
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->setTextEditTextToSpeech__TextToSpeechContainerWidget_SharedPainter_IsBase(true);
        return vtextedittexttospeechtexttospeechcontainerwidget->sharedPainter();
    } else {
        return ((VirtualTextEditTextToSpeechTextToSpeechContainerWidget*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_OnSharedPainter(const TextEditTextToSpeech__TextToSpeechContainerWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self));
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->setTextEditTextToSpeech__TextToSpeechContainerWidget_SharedPainter_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget::TextEditTextToSpeech__TextToSpeechContainerWidget_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_InputMethodEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, QInputMethodEvent* param1) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->inputMethodEvent(param1);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechContainerWidget*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_SuperInputMethodEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, QInputMethodEvent* param1) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->setTextEditTextToSpeech__TextToSpeechContainerWidget_InputMethodEvent_IsBase(true);
        vtextedittexttospeechtexttospeechcontainerwidget->inputMethodEvent(param1);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechContainerWidget*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_OnInputMethodEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->setTextEditTextToSpeech__TextToSpeechContainerWidget_InputMethodEvent_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget::TextEditTextToSpeech__TextToSpeechContainerWidget_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* TextEditTextToSpeech__TextToSpeechContainerWidget_InputMethodQuery(const TextEditTextToSpeech__TextToSpeechContainerWidget* self, int param1) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self));
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        return new QVariant(vtextedittexttospeechtexttospeechcontainerwidget->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualTextEditTextToSpeechTextToSpeechContainerWidget*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* TextEditTextToSpeech__TextToSpeechContainerWidget_SuperInputMethodQuery(const TextEditTextToSpeech__TextToSpeechContainerWidget* self, int param1) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self));
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->setTextEditTextToSpeech__TextToSpeechContainerWidget_InputMethodQuery_IsBase(true);
        return new QVariant(vtextedittexttospeechtexttospeechcontainerwidget->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualTextEditTextToSpeechTextToSpeechContainerWidget*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_OnInputMethodQuery(const TextEditTextToSpeech__TextToSpeechContainerWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self));
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->setTextEditTextToSpeech__TextToSpeechContainerWidget_InputMethodQuery_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget::TextEditTextToSpeech__TextToSpeechContainerWidget_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextEditTextToSpeech__TextToSpeechContainerWidget_FocusNextPrevChild(TextEditTextToSpeech__TextToSpeechContainerWidget* self, bool next) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        return vtextedittexttospeechtexttospeechcontainerwidget->focusNextPrevChild(next);
    } else {
        return ((VirtualTextEditTextToSpeechTextToSpeechContainerWidget*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool TextEditTextToSpeech__TextToSpeechContainerWidget_SuperFocusNextPrevChild(TextEditTextToSpeech__TextToSpeechContainerWidget* self, bool next) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->setTextEditTextToSpeech__TextToSpeechContainerWidget_FocusNextPrevChild_IsBase(true);
        return vtextedittexttospeechtexttospeechcontainerwidget->focusNextPrevChild(next);
    } else {
        return ((VirtualTextEditTextToSpeechTextToSpeechContainerWidget*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_OnFocusNextPrevChild(TextEditTextToSpeech__TextToSpeechContainerWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->setTextEditTextToSpeech__TextToSpeechContainerWidget_FocusNextPrevChild_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget::TextEditTextToSpeech__TextToSpeechContainerWidget_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextEditTextToSpeech__TextToSpeechContainerWidget_EventFilter(TextEditTextToSpeech__TextToSpeechContainerWidget* self, QObject* watched, QEvent* event) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        return vtextedittexttospeechtexttospeechcontainerwidget->eventFilter(watched, event);
    } else {
        return self->TextEditTextToSpeech::TextToSpeechContainerWidget::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool TextEditTextToSpeech__TextToSpeechContainerWidget_SuperEventFilter(TextEditTextToSpeech__TextToSpeechContainerWidget* self, QObject* watched, QEvent* event) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->setTextEditTextToSpeech__TextToSpeechContainerWidget_EventFilter_IsBase(true);
        return vtextedittexttospeechtexttospeechcontainerwidget->eventFilter(watched, event);
    } else {
        return self->TextEditTextToSpeech::TextToSpeechContainerWidget::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_OnEventFilter(TextEditTextToSpeech__TextToSpeechContainerWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->setTextEditTextToSpeech__TextToSpeechContainerWidget_EventFilter_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget::TextEditTextToSpeech__TextToSpeechContainerWidget_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_TimerEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, QTimerEvent* event) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->timerEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechContainerWidget*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_SuperTimerEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, QTimerEvent* event) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->setTextEditTextToSpeech__TextToSpeechContainerWidget_TimerEvent_IsBase(true);
        vtextedittexttospeechtexttospeechcontainerwidget->timerEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechContainerWidget*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_OnTimerEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->setTextEditTextToSpeech__TextToSpeechContainerWidget_TimerEvent_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget::TextEditTextToSpeech__TextToSpeechContainerWidget_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_ChildEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, QChildEvent* event) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->childEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechContainerWidget*)self)->childEvent(event);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_SuperChildEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, QChildEvent* event) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->setTextEditTextToSpeech__TextToSpeechContainerWidget_ChildEvent_IsBase(true);
        vtextedittexttospeechtexttospeechcontainerwidget->childEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechContainerWidget*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_OnChildEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->setTextEditTextToSpeech__TextToSpeechContainerWidget_ChildEvent_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget::TextEditTextToSpeech__TextToSpeechContainerWidget_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_CustomEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, QEvent* event) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->customEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechContainerWidget*)self)->customEvent(event);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_SuperCustomEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, QEvent* event) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->setTextEditTextToSpeech__TextToSpeechContainerWidget_CustomEvent_IsBase(true);
        vtextedittexttospeechtexttospeechcontainerwidget->customEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechContainerWidget*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_OnCustomEvent(TextEditTextToSpeech__TextToSpeechContainerWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->setTextEditTextToSpeech__TextToSpeechContainerWidget_CustomEvent_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget::TextEditTextToSpeech__TextToSpeechContainerWidget_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_ConnectNotify(TextEditTextToSpeech__TextToSpeechContainerWidget* self, const QMetaMethod* signal) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->connectNotify(*signal);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechContainerWidget*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_SuperConnectNotify(TextEditTextToSpeech__TextToSpeechContainerWidget* self, const QMetaMethod* signal) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->setTextEditTextToSpeech__TextToSpeechContainerWidget_ConnectNotify_IsBase(true);
        vtextedittexttospeechtexttospeechcontainerwidget->connectNotify(*signal);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechContainerWidget*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_OnConnectNotify(TextEditTextToSpeech__TextToSpeechContainerWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->setTextEditTextToSpeech__TextToSpeechContainerWidget_ConnectNotify_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget::TextEditTextToSpeech__TextToSpeechContainerWidget_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_DisconnectNotify(TextEditTextToSpeech__TextToSpeechContainerWidget* self, const QMetaMethod* signal) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->disconnectNotify(*signal);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechContainerWidget*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_SuperDisconnectNotify(TextEditTextToSpeech__TextToSpeechContainerWidget* self, const QMetaMethod* signal) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->setTextEditTextToSpeech__TextToSpeechContainerWidget_DisconnectNotify_IsBase(true);
        vtextedittexttospeechtexttospeechcontainerwidget->disconnectNotify(*signal);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechContainerWidget*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_OnDisconnectNotify(TextEditTextToSpeech__TextToSpeechContainerWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->setTextEditTextToSpeech__TextToSpeechContainerWidget_DisconnectNotify_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget::TextEditTextToSpeech__TextToSpeechContainerWidget_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_UpdateMicroFocus(TextEditTextToSpeech__TextToSpeechContainerWidget* self) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->updateMicroFocus();
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechContainerWidget*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_SuperUpdateMicroFocus(TextEditTextToSpeech__TextToSpeechContainerWidget* self) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->setTextEditTextToSpeech__TextToSpeechContainerWidget_UpdateMicroFocus_IsBase(true);
        vtextedittexttospeechtexttospeechcontainerwidget->updateMicroFocus();
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechContainerWidget*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_OnUpdateMicroFocus(TextEditTextToSpeech__TextToSpeechContainerWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->setTextEditTextToSpeech__TextToSpeechContainerWidget_UpdateMicroFocus_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget::TextEditTextToSpeech__TextToSpeechContainerWidget_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_Create(TextEditTextToSpeech__TextToSpeechContainerWidget* self) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->create();
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechContainerWidget*)self)->create();
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_SuperCreate(TextEditTextToSpeech__TextToSpeechContainerWidget* self) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->setTextEditTextToSpeech__TextToSpeechContainerWidget_Create_IsBase(true);
        vtextedittexttospeechtexttospeechcontainerwidget->create();
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechContainerWidget*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_OnCreate(TextEditTextToSpeech__TextToSpeechContainerWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->setTextEditTextToSpeech__TextToSpeechContainerWidget_Create_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget::TextEditTextToSpeech__TextToSpeechContainerWidget_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_Destroy(TextEditTextToSpeech__TextToSpeechContainerWidget* self) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->destroy();
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechContainerWidget*)self)->destroy();
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_SuperDestroy(TextEditTextToSpeech__TextToSpeechContainerWidget* self) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->setTextEditTextToSpeech__TextToSpeechContainerWidget_Destroy_IsBase(true);
        vtextedittexttospeechtexttospeechcontainerwidget->destroy();
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechContainerWidget*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_OnDestroy(TextEditTextToSpeech__TextToSpeechContainerWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->setTextEditTextToSpeech__TextToSpeechContainerWidget_Destroy_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget::TextEditTextToSpeech__TextToSpeechContainerWidget_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextEditTextToSpeech__TextToSpeechContainerWidget_FocusNextChild(TextEditTextToSpeech__TextToSpeechContainerWidget* self) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        return vtextedittexttospeechtexttospeechcontainerwidget->focusNextChild();
    } else {
        return ((VirtualTextEditTextToSpeechTextToSpeechContainerWidget*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool TextEditTextToSpeech__TextToSpeechContainerWidget_SuperFocusNextChild(TextEditTextToSpeech__TextToSpeechContainerWidget* self) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->setTextEditTextToSpeech__TextToSpeechContainerWidget_FocusNextChild_IsBase(true);
        return vtextedittexttospeechtexttospeechcontainerwidget->focusNextChild();
    } else {
        return ((VirtualTextEditTextToSpeechTextToSpeechContainerWidget*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_OnFocusNextChild(TextEditTextToSpeech__TextToSpeechContainerWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->setTextEditTextToSpeech__TextToSpeechContainerWidget_FocusNextChild_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget::TextEditTextToSpeech__TextToSpeechContainerWidget_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextEditTextToSpeech__TextToSpeechContainerWidget_FocusPreviousChild(TextEditTextToSpeech__TextToSpeechContainerWidget* self) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        return vtextedittexttospeechtexttospeechcontainerwidget->focusPreviousChild();
    } else {
        return ((VirtualTextEditTextToSpeechTextToSpeechContainerWidget*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool TextEditTextToSpeech__TextToSpeechContainerWidget_SuperFocusPreviousChild(TextEditTextToSpeech__TextToSpeechContainerWidget* self) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->setTextEditTextToSpeech__TextToSpeechContainerWidget_FocusPreviousChild_IsBase(true);
        return vtextedittexttospeechtexttospeechcontainerwidget->focusPreviousChild();
    } else {
        return ((VirtualTextEditTextToSpeechTextToSpeechContainerWidget*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_OnFocusPreviousChild(TextEditTextToSpeech__TextToSpeechContainerWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self);
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->setTextEditTextToSpeech__TextToSpeechContainerWidget_FocusPreviousChild_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget::TextEditTextToSpeech__TextToSpeechContainerWidget_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* TextEditTextToSpeech__TextToSpeechContainerWidget_Sender(const TextEditTextToSpeech__TextToSpeechContainerWidget* self) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self));
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        return vtextedittexttospeechtexttospeechcontainerwidget->sender();
    } else {
        return ((VirtualTextEditTextToSpeechTextToSpeechContainerWidget*)self)->sender();
    }
}

// Base class handler implementation
QObject* TextEditTextToSpeech__TextToSpeechContainerWidget_SuperSender(const TextEditTextToSpeech__TextToSpeechContainerWidget* self) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self));
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->setTextEditTextToSpeech__TextToSpeechContainerWidget_Sender_IsBase(true);
        return vtextedittexttospeechtexttospeechcontainerwidget->sender();
    } else {
        return ((VirtualTextEditTextToSpeechTextToSpeechContainerWidget*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_OnSender(const TextEditTextToSpeech__TextToSpeechContainerWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self));
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->setTextEditTextToSpeech__TextToSpeechContainerWidget_Sender_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget::TextEditTextToSpeech__TextToSpeechContainerWidget_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int TextEditTextToSpeech__TextToSpeechContainerWidget_SenderSignalIndex(const TextEditTextToSpeech__TextToSpeechContainerWidget* self) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self));
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        return vtextedittexttospeechtexttospeechcontainerwidget->senderSignalIndex();
    } else {
        return ((VirtualTextEditTextToSpeechTextToSpeechContainerWidget*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int TextEditTextToSpeech__TextToSpeechContainerWidget_SuperSenderSignalIndex(const TextEditTextToSpeech__TextToSpeechContainerWidget* self) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self));
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->setTextEditTextToSpeech__TextToSpeechContainerWidget_SenderSignalIndex_IsBase(true);
        return vtextedittexttospeechtexttospeechcontainerwidget->senderSignalIndex();
    } else {
        return ((VirtualTextEditTextToSpeechTextToSpeechContainerWidget*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_OnSenderSignalIndex(const TextEditTextToSpeech__TextToSpeechContainerWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self));
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->setTextEditTextToSpeech__TextToSpeechContainerWidget_SenderSignalIndex_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget::TextEditTextToSpeech__TextToSpeechContainerWidget_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int TextEditTextToSpeech__TextToSpeechContainerWidget_Receivers(const TextEditTextToSpeech__TextToSpeechContainerWidget* self, const char* signal) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self));
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        return vtextedittexttospeechtexttospeechcontainerwidget->receivers(signal);
    } else {
        return ((VirtualTextEditTextToSpeechTextToSpeechContainerWidget*)self)->receivers(signal);
    }
}

// Base class handler implementation
int TextEditTextToSpeech__TextToSpeechContainerWidget_SuperReceivers(const TextEditTextToSpeech__TextToSpeechContainerWidget* self, const char* signal) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self));
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->setTextEditTextToSpeech__TextToSpeechContainerWidget_Receivers_IsBase(true);
        return vtextedittexttospeechtexttospeechcontainerwidget->receivers(signal);
    } else {
        return ((VirtualTextEditTextToSpeechTextToSpeechContainerWidget*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_OnReceivers(const TextEditTextToSpeech__TextToSpeechContainerWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self));
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->setTextEditTextToSpeech__TextToSpeechContainerWidget_Receivers_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget::TextEditTextToSpeech__TextToSpeechContainerWidget_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextEditTextToSpeech__TextToSpeechContainerWidget_IsSignalConnected(const TextEditTextToSpeech__TextToSpeechContainerWidget* self, const QMetaMethod* signal) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self));
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        return vtextedittexttospeechtexttospeechcontainerwidget->isSignalConnected(*signal);
    } else {
        return ((VirtualTextEditTextToSpeechTextToSpeechContainerWidget*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool TextEditTextToSpeech__TextToSpeechContainerWidget_SuperIsSignalConnected(const TextEditTextToSpeech__TextToSpeechContainerWidget* self, const QMetaMethod* signal) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self));
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->setTextEditTextToSpeech__TextToSpeechContainerWidget_IsSignalConnected_IsBase(true);
        return vtextedittexttospeechtexttospeechcontainerwidget->isSignalConnected(*signal);
    } else {
        return ((VirtualTextEditTextToSpeechTextToSpeechContainerWidget*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_OnIsSignalConnected(const TextEditTextToSpeech__TextToSpeechContainerWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self));
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->setTextEditTextToSpeech__TextToSpeechContainerWidget_IsSignalConnected_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget::TextEditTextToSpeech__TextToSpeechContainerWidget_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double TextEditTextToSpeech__TextToSpeechContainerWidget_GetDecodedMetricF(const TextEditTextToSpeech__TextToSpeechContainerWidget* self, int metricA, int metricB) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self));
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        return vtextedittexttospeechtexttospeechcontainerwidget->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualTextEditTextToSpeechTextToSpeechContainerWidget*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double TextEditTextToSpeech__TextToSpeechContainerWidget_SuperGetDecodedMetricF(const TextEditTextToSpeech__TextToSpeechContainerWidget* self, int metricA, int metricB) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self));
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->setTextEditTextToSpeech__TextToSpeechContainerWidget_GetDecodedMetricF_IsBase(true);
        return vtextedittexttospeechtexttospeechcontainerwidget->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualTextEditTextToSpeechTextToSpeechContainerWidget*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechContainerWidget_OnGetDecodedMetricF(const TextEditTextToSpeech__TextToSpeechContainerWidget* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechcontainerwidget = const_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechContainerWidget*>(self));
    if (vtextedittexttospeechtexttospeechcontainerwidget && vtextedittexttospeechtexttospeechcontainerwidget->isVirtualTextEditTextToSpeechTextToSpeechContainerWidget) {
        vtextedittexttospeechtexttospeechcontainerwidget->setTextEditTextToSpeech__TextToSpeechContainerWidget_GetDecodedMetricF_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechContainerWidget::TextEditTextToSpeech__TextToSpeechContainerWidget_GetDecodedMetricF_Callback>(slot));
    }
}

void TextEditTextToSpeech__TextToSpeechContainerWidget_Delete(TextEditTextToSpeech__TextToSpeechContainerWidget* self) {
    delete self;
}
