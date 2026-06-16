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
#define WORKAROUND_INNER_CLASS_DEFINITION_TextEmoticonsWidgets__EmoticonTextEditSelector
#include <emoticontexteditselector.h>
#include "libemoticontexteditselector.h"
#include "libemoticontexteditselector.hxx"

TextEmoticonsWidgets__EmoticonTextEditSelector* TextEmoticonsWidgets__EmoticonTextEditSelector_new(QWidget* parent) {
    return new VirtualTextEmoticonsWidgetsEmoticonTextEditSelector(parent);
}

TextEmoticonsWidgets__EmoticonTextEditSelector* TextEmoticonsWidgets__EmoticonTextEditSelector_new2() {
    return new VirtualTextEmoticonsWidgetsEmoticonTextEditSelector();
}

QMetaObject* TextEmoticonsWidgets__EmoticonTextEditSelector_MetaObject(const TextEmoticonsWidgets__EmoticonTextEditSelector* self) {
    return (QMetaObject*)self->metaObject();
}

void* TextEmoticonsWidgets__EmoticonTextEditSelector_Metacast(TextEmoticonsWidgets__EmoticonTextEditSelector* self, const char* param1) {
    return self->qt_metacast(param1);
}

int TextEmoticonsWidgets__EmoticonTextEditSelector_Metacall(TextEmoticonsWidgets__EmoticonTextEditSelector* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

void TextEmoticonsWidgets__EmoticonTextEditSelector_ForceLineEditFocus(TextEmoticonsWidgets__EmoticonTextEditSelector* self) {
    self->forceLineEditFocus();
}

void TextEmoticonsWidgets__EmoticonTextEditSelector_SetCustomEmojiSupport(TextEmoticonsWidgets__EmoticonTextEditSelector* self, bool b) {
    self->setCustomEmojiSupport(b);
}

bool TextEmoticonsWidgets__EmoticonTextEditSelector_CustomEmojiSupport(const TextEmoticonsWidgets__EmoticonTextEditSelector* self) {
    return self->customEmojiSupport();
}

void TextEmoticonsWidgets__EmoticonTextEditSelector_LoadEmoticons(TextEmoticonsWidgets__EmoticonTextEditSelector* self) {
    self->loadEmoticons();
}

void TextEmoticonsWidgets__EmoticonTextEditSelector_InsertEmoji(TextEmoticonsWidgets__EmoticonTextEditSelector* self, const libqt_string param1) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    self->insertEmoji(param1_QString);
}

void TextEmoticonsWidgets__EmoticonTextEditSelector_Connect_InsertEmoji(TextEmoticonsWidgets__EmoticonTextEditSelector* self, intptr_t slot) {
    void (*slotFunc)(TextEmoticonsWidgets__EmoticonTextEditSelector*, const char*) = reinterpret_cast<void (*)(TextEmoticonsWidgets__EmoticonTextEditSelector*, const char*)>(slot);
    TextEmoticonsWidgets::EmoticonTextEditSelector::connect(self, &TextEmoticonsWidgets::EmoticonTextEditSelector::insertEmoji, [self, slotFunc](const QString& param1) {
        const auto param1_ret = param1;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray param1_b = param1_ret.toUtf8();
        auto param1_str_len = param1_b.length();
        const char* param1_str = static_cast<const char*>(malloc(param1_str_len + 1));
        memcpy((void*)param1_str, param1_b.data(), param1_str_len);
        ((char*)param1_str)[param1_str_len] = '\0';
        const char* sigval1 = param1_str;
        slotFunc(self, sigval1);
        libqt_free(param1_str);
    });
}

void TextEmoticonsWidgets__EmoticonTextEditSelector_InsertEmojiIdentifier(TextEmoticonsWidgets__EmoticonTextEditSelector* self, const libqt_string param1) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    self->insertEmojiIdentifier(param1_QString);
}

void TextEmoticonsWidgets__EmoticonTextEditSelector_Connect_InsertEmojiIdentifier(TextEmoticonsWidgets__EmoticonTextEditSelector* self, intptr_t slot) {
    void (*slotFunc)(TextEmoticonsWidgets__EmoticonTextEditSelector*, const char*) = reinterpret_cast<void (*)(TextEmoticonsWidgets__EmoticonTextEditSelector*, const char*)>(slot);
    TextEmoticonsWidgets::EmoticonTextEditSelector::connect(self, &TextEmoticonsWidgets::EmoticonTextEditSelector::insertEmojiIdentifier, [self, slotFunc](const QString& param1) {
        const auto param1_ret = param1;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray param1_b = param1_ret.toUtf8();
        auto param1_str_len = param1_b.length();
        const char* param1_str = static_cast<const char*>(malloc(param1_str_len + 1));
        memcpy((void*)param1_str, param1_b.data(), param1_str_len);
        ((char*)param1_str)[param1_str_len] = '\0';
        const char* sigval1 = param1_str;
        slotFunc(self, sigval1);
        libqt_free(param1_str);
    });
}

// Base class handler implementation
QMetaObject* TextEmoticonsWidgets__EmoticonTextEditSelector_SuperMetaObject(const TextEmoticonsWidgets__EmoticonTextEditSelector* self) {
    auto* vtextemoticonswidgetsemoticontexteditselector = const_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(dynamic_cast<const VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self));
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->setTextEmoticonsWidgets__EmoticonTextEditSelector_MetaObject_IsBase(true);
        return (QMetaObject*)vtextemoticonswidgetsemoticontexteditselector->metaObject();
    } else {
        return (QMetaObject*)self->TextEmoticonsWidgets::EmoticonTextEditSelector::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_OnMetaObject(const TextEmoticonsWidgets__EmoticonTextEditSelector* self, intptr_t slot) {
    auto* vtextemoticonswidgetsemoticontexteditselector = const_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(dynamic_cast<const VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self));
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->setTextEmoticonsWidgets__EmoticonTextEditSelector_MetaObject_Callback(reinterpret_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector::TextEmoticonsWidgets__EmoticonTextEditSelector_MetaObject_Callback>(slot));
    }
}

// Base class handler implementation
void* TextEmoticonsWidgets__EmoticonTextEditSelector_SuperMetacast(TextEmoticonsWidgets__EmoticonTextEditSelector* self, const char* param1) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->setTextEmoticonsWidgets__EmoticonTextEditSelector_Metacast_IsBase(true);
        return vtextemoticonswidgetsemoticontexteditselector->qt_metacast(param1);
    } else {
        return self->TextEmoticonsWidgets::EmoticonTextEditSelector::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_OnMetacast(TextEmoticonsWidgets__EmoticonTextEditSelector* self, intptr_t slot) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->setTextEmoticonsWidgets__EmoticonTextEditSelector_Metacast_Callback(reinterpret_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector::TextEmoticonsWidgets__EmoticonTextEditSelector_Metacast_Callback>(slot));
    }
}

// Base class handler implementation
int TextEmoticonsWidgets__EmoticonTextEditSelector_SuperMetacall(TextEmoticonsWidgets__EmoticonTextEditSelector* self, int param1, int param2, void** param3) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->setTextEmoticonsWidgets__EmoticonTextEditSelector_Metacall_IsBase(true);
        return vtextemoticonswidgetsemoticontexteditselector->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->TextEmoticonsWidgets::EmoticonTextEditSelector::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_OnMetacall(TextEmoticonsWidgets__EmoticonTextEditSelector* self, intptr_t slot) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->setTextEmoticonsWidgets__EmoticonTextEditSelector_Metacall_Callback(reinterpret_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector::TextEmoticonsWidgets__EmoticonTextEditSelector_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
int TextEmoticonsWidgets__EmoticonTextEditSelector_DevType(const TextEmoticonsWidgets__EmoticonTextEditSelector* self) {
    auto* vtextemoticonswidgetsemoticontexteditselector = const_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(dynamic_cast<const VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self));
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        return vtextemoticonswidgetsemoticontexteditselector->devType();
    } else {
        return self->TextEmoticonsWidgets::EmoticonTextEditSelector::devType();
    }
}

// Base class handler implementation
int TextEmoticonsWidgets__EmoticonTextEditSelector_SuperDevType(const TextEmoticonsWidgets__EmoticonTextEditSelector* self) {
    auto* vtextemoticonswidgetsemoticontexteditselector = const_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(dynamic_cast<const VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self));
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->setTextEmoticonsWidgets__EmoticonTextEditSelector_DevType_IsBase(true);
        return vtextemoticonswidgetsemoticontexteditselector->devType();
    } else {
        return self->TextEmoticonsWidgets::EmoticonTextEditSelector::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_OnDevType(const TextEmoticonsWidgets__EmoticonTextEditSelector* self, intptr_t slot) {
    auto* vtextemoticonswidgetsemoticontexteditselector = const_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(dynamic_cast<const VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self));
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->setTextEmoticonsWidgets__EmoticonTextEditSelector_DevType_Callback(reinterpret_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector::TextEmoticonsWidgets__EmoticonTextEditSelector_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_SetVisible(TextEmoticonsWidgets__EmoticonTextEditSelector* self, bool visible) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->setVisible(visible);
    } else {
        self->TextEmoticonsWidgets::EmoticonTextEditSelector::setVisible(visible);
    }
}

// Base class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_SuperSetVisible(TextEmoticonsWidgets__EmoticonTextEditSelector* self, bool visible) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->setTextEmoticonsWidgets__EmoticonTextEditSelector_SetVisible_IsBase(true);
        vtextemoticonswidgetsemoticontexteditselector->setVisible(visible);
    } else {
        self->TextEmoticonsWidgets::EmoticonTextEditSelector::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_OnSetVisible(TextEmoticonsWidgets__EmoticonTextEditSelector* self, intptr_t slot) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->setTextEmoticonsWidgets__EmoticonTextEditSelector_SetVisible_Callback(reinterpret_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector::TextEmoticonsWidgets__EmoticonTextEditSelector_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* TextEmoticonsWidgets__EmoticonTextEditSelector_SizeHint(const TextEmoticonsWidgets__EmoticonTextEditSelector* self) {
    auto* vtextemoticonswidgetsemoticontexteditselector = const_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(dynamic_cast<const VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self));
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        return new QSize(vtextemoticonswidgetsemoticontexteditselector->sizeHint());
    } else {
        return new QSize(((VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* TextEmoticonsWidgets__EmoticonTextEditSelector_SuperSizeHint(const TextEmoticonsWidgets__EmoticonTextEditSelector* self) {
    auto* vtextemoticonswidgetsemoticontexteditselector = const_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(dynamic_cast<const VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self));
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->setTextEmoticonsWidgets__EmoticonTextEditSelector_SizeHint_IsBase(true);
        return new QSize(vtextemoticonswidgetsemoticontexteditselector->sizeHint());
    } else {
        return new QSize(((VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_OnSizeHint(const TextEmoticonsWidgets__EmoticonTextEditSelector* self, intptr_t slot) {
    auto* vtextemoticonswidgetsemoticontexteditselector = const_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(dynamic_cast<const VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self));
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->setTextEmoticonsWidgets__EmoticonTextEditSelector_SizeHint_Callback(reinterpret_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector::TextEmoticonsWidgets__EmoticonTextEditSelector_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* TextEmoticonsWidgets__EmoticonTextEditSelector_MinimumSizeHint(const TextEmoticonsWidgets__EmoticonTextEditSelector* self) {
    auto* vtextemoticonswidgetsemoticontexteditselector = const_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(dynamic_cast<const VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self));
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        return new QSize(vtextemoticonswidgetsemoticontexteditselector->minimumSizeHint());
    } else {
        return new QSize(((VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* TextEmoticonsWidgets__EmoticonTextEditSelector_SuperMinimumSizeHint(const TextEmoticonsWidgets__EmoticonTextEditSelector* self) {
    auto* vtextemoticonswidgetsemoticontexteditselector = const_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(dynamic_cast<const VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self));
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->setTextEmoticonsWidgets__EmoticonTextEditSelector_MinimumSizeHint_IsBase(true);
        return new QSize(vtextemoticonswidgetsemoticontexteditselector->minimumSizeHint());
    } else {
        return new QSize(((VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_OnMinimumSizeHint(const TextEmoticonsWidgets__EmoticonTextEditSelector* self, intptr_t slot) {
    auto* vtextemoticonswidgetsemoticontexteditselector = const_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(dynamic_cast<const VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self));
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->setTextEmoticonsWidgets__EmoticonTextEditSelector_MinimumSizeHint_Callback(reinterpret_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector::TextEmoticonsWidgets__EmoticonTextEditSelector_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
int TextEmoticonsWidgets__EmoticonTextEditSelector_HeightForWidth(const TextEmoticonsWidgets__EmoticonTextEditSelector* self, int param1) {
    auto* vtextemoticonswidgetsemoticontexteditselector = const_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(dynamic_cast<const VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self));
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        return vtextemoticonswidgetsemoticontexteditselector->heightForWidth(static_cast<int>(param1));
    } else {
        return self->TextEmoticonsWidgets::EmoticonTextEditSelector::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int TextEmoticonsWidgets__EmoticonTextEditSelector_SuperHeightForWidth(const TextEmoticonsWidgets__EmoticonTextEditSelector* self, int param1) {
    auto* vtextemoticonswidgetsemoticontexteditselector = const_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(dynamic_cast<const VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self));
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->setTextEmoticonsWidgets__EmoticonTextEditSelector_HeightForWidth_IsBase(true);
        return vtextemoticonswidgetsemoticontexteditselector->heightForWidth(static_cast<int>(param1));
    } else {
        return self->TextEmoticonsWidgets::EmoticonTextEditSelector::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_OnHeightForWidth(const TextEmoticonsWidgets__EmoticonTextEditSelector* self, intptr_t slot) {
    auto* vtextemoticonswidgetsemoticontexteditselector = const_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(dynamic_cast<const VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self));
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->setTextEmoticonsWidgets__EmoticonTextEditSelector_HeightForWidth_Callback(reinterpret_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector::TextEmoticonsWidgets__EmoticonTextEditSelector_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextEmoticonsWidgets__EmoticonTextEditSelector_HasHeightForWidth(const TextEmoticonsWidgets__EmoticonTextEditSelector* self) {
    auto* vtextemoticonswidgetsemoticontexteditselector = const_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(dynamic_cast<const VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self));
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        return vtextemoticonswidgetsemoticontexteditselector->hasHeightForWidth();
    } else {
        return self->TextEmoticonsWidgets::EmoticonTextEditSelector::hasHeightForWidth();
    }
}

// Base class handler implementation
bool TextEmoticonsWidgets__EmoticonTextEditSelector_SuperHasHeightForWidth(const TextEmoticonsWidgets__EmoticonTextEditSelector* self) {
    auto* vtextemoticonswidgetsemoticontexteditselector = const_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(dynamic_cast<const VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self));
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->setTextEmoticonsWidgets__EmoticonTextEditSelector_HasHeightForWidth_IsBase(true);
        return vtextemoticonswidgetsemoticontexteditselector->hasHeightForWidth();
    } else {
        return self->TextEmoticonsWidgets::EmoticonTextEditSelector::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_OnHasHeightForWidth(const TextEmoticonsWidgets__EmoticonTextEditSelector* self, intptr_t slot) {
    auto* vtextemoticonswidgetsemoticontexteditselector = const_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(dynamic_cast<const VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self));
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->setTextEmoticonsWidgets__EmoticonTextEditSelector_HasHeightForWidth_Callback(reinterpret_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector::TextEmoticonsWidgets__EmoticonTextEditSelector_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* TextEmoticonsWidgets__EmoticonTextEditSelector_PaintEngine(const TextEmoticonsWidgets__EmoticonTextEditSelector* self) {
    auto* vtextemoticonswidgetsemoticontexteditselector = const_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(dynamic_cast<const VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self));
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        return vtextemoticonswidgetsemoticontexteditselector->paintEngine();
    } else {
        return self->TextEmoticonsWidgets::EmoticonTextEditSelector::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* TextEmoticonsWidgets__EmoticonTextEditSelector_SuperPaintEngine(const TextEmoticonsWidgets__EmoticonTextEditSelector* self) {
    auto* vtextemoticonswidgetsemoticontexteditselector = const_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(dynamic_cast<const VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self));
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->setTextEmoticonsWidgets__EmoticonTextEditSelector_PaintEngine_IsBase(true);
        return vtextemoticonswidgetsemoticontexteditselector->paintEngine();
    } else {
        return self->TextEmoticonsWidgets::EmoticonTextEditSelector::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_OnPaintEngine(const TextEmoticonsWidgets__EmoticonTextEditSelector* self, intptr_t slot) {
    auto* vtextemoticonswidgetsemoticontexteditselector = const_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(dynamic_cast<const VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self));
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->setTextEmoticonsWidgets__EmoticonTextEditSelector_PaintEngine_Callback(reinterpret_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector::TextEmoticonsWidgets__EmoticonTextEditSelector_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextEmoticonsWidgets__EmoticonTextEditSelector_Event(TextEmoticonsWidgets__EmoticonTextEditSelector* self, QEvent* event) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        return vtextemoticonswidgetsemoticontexteditselector->event(event);
    } else {
        return ((VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*)self)->event(event);
    }
}

// Base class handler implementation
bool TextEmoticonsWidgets__EmoticonTextEditSelector_SuperEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, QEvent* event) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->setTextEmoticonsWidgets__EmoticonTextEditSelector_Event_IsBase(true);
        return vtextemoticonswidgetsemoticontexteditselector->event(event);
    } else {
        return ((VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_OnEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, intptr_t slot) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->setTextEmoticonsWidgets__EmoticonTextEditSelector_Event_Callback(reinterpret_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector::TextEmoticonsWidgets__EmoticonTextEditSelector_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_MousePressEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, QMouseEvent* event) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->mousePressEvent(event);
    } else {
        ((VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_SuperMousePressEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, QMouseEvent* event) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->setTextEmoticonsWidgets__EmoticonTextEditSelector_MousePressEvent_IsBase(true);
        vtextemoticonswidgetsemoticontexteditselector->mousePressEvent(event);
    } else {
        ((VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_OnMousePressEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, intptr_t slot) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->setTextEmoticonsWidgets__EmoticonTextEditSelector_MousePressEvent_Callback(reinterpret_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector::TextEmoticonsWidgets__EmoticonTextEditSelector_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_MouseReleaseEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, QMouseEvent* event) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->mouseReleaseEvent(event);
    } else {
        ((VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_SuperMouseReleaseEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, QMouseEvent* event) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->setTextEmoticonsWidgets__EmoticonTextEditSelector_MouseReleaseEvent_IsBase(true);
        vtextemoticonswidgetsemoticontexteditselector->mouseReleaseEvent(event);
    } else {
        ((VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_OnMouseReleaseEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, intptr_t slot) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->setTextEmoticonsWidgets__EmoticonTextEditSelector_MouseReleaseEvent_Callback(reinterpret_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector::TextEmoticonsWidgets__EmoticonTextEditSelector_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_MouseDoubleClickEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, QMouseEvent* event) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->mouseDoubleClickEvent(event);
    } else {
        ((VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_SuperMouseDoubleClickEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, QMouseEvent* event) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->setTextEmoticonsWidgets__EmoticonTextEditSelector_MouseDoubleClickEvent_IsBase(true);
        vtextemoticonswidgetsemoticontexteditselector->mouseDoubleClickEvent(event);
    } else {
        ((VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_OnMouseDoubleClickEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, intptr_t slot) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->setTextEmoticonsWidgets__EmoticonTextEditSelector_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector::TextEmoticonsWidgets__EmoticonTextEditSelector_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_MouseMoveEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, QMouseEvent* event) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->mouseMoveEvent(event);
    } else {
        ((VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_SuperMouseMoveEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, QMouseEvent* event) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->setTextEmoticonsWidgets__EmoticonTextEditSelector_MouseMoveEvent_IsBase(true);
        vtextemoticonswidgetsemoticontexteditselector->mouseMoveEvent(event);
    } else {
        ((VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_OnMouseMoveEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, intptr_t slot) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->setTextEmoticonsWidgets__EmoticonTextEditSelector_MouseMoveEvent_Callback(reinterpret_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector::TextEmoticonsWidgets__EmoticonTextEditSelector_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_WheelEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, QWheelEvent* event) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->wheelEvent(event);
    } else {
        ((VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_SuperWheelEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, QWheelEvent* event) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->setTextEmoticonsWidgets__EmoticonTextEditSelector_WheelEvent_IsBase(true);
        vtextemoticonswidgetsemoticontexteditselector->wheelEvent(event);
    } else {
        ((VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_OnWheelEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, intptr_t slot) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->setTextEmoticonsWidgets__EmoticonTextEditSelector_WheelEvent_Callback(reinterpret_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector::TextEmoticonsWidgets__EmoticonTextEditSelector_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_KeyPressEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, QKeyEvent* event) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->keyPressEvent(event);
    } else {
        ((VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*)self)->keyPressEvent(event);
    }
}

// Base class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_SuperKeyPressEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, QKeyEvent* event) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->setTextEmoticonsWidgets__EmoticonTextEditSelector_KeyPressEvent_IsBase(true);
        vtextemoticonswidgetsemoticontexteditselector->keyPressEvent(event);
    } else {
        ((VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*)self)->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_OnKeyPressEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, intptr_t slot) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->setTextEmoticonsWidgets__EmoticonTextEditSelector_KeyPressEvent_Callback(reinterpret_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector::TextEmoticonsWidgets__EmoticonTextEditSelector_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_KeyReleaseEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, QKeyEvent* event) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->keyReleaseEvent(event);
    } else {
        ((VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_SuperKeyReleaseEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, QKeyEvent* event) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->setTextEmoticonsWidgets__EmoticonTextEditSelector_KeyReleaseEvent_IsBase(true);
        vtextemoticonswidgetsemoticontexteditselector->keyReleaseEvent(event);
    } else {
        ((VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_OnKeyReleaseEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, intptr_t slot) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->setTextEmoticonsWidgets__EmoticonTextEditSelector_KeyReleaseEvent_Callback(reinterpret_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector::TextEmoticonsWidgets__EmoticonTextEditSelector_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_FocusInEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, QFocusEvent* event) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->focusInEvent(event);
    } else {
        ((VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_SuperFocusInEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, QFocusEvent* event) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->setTextEmoticonsWidgets__EmoticonTextEditSelector_FocusInEvent_IsBase(true);
        vtextemoticonswidgetsemoticontexteditselector->focusInEvent(event);
    } else {
        ((VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_OnFocusInEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, intptr_t slot) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->setTextEmoticonsWidgets__EmoticonTextEditSelector_FocusInEvent_Callback(reinterpret_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector::TextEmoticonsWidgets__EmoticonTextEditSelector_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_FocusOutEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, QFocusEvent* event) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->focusOutEvent(event);
    } else {
        ((VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_SuperFocusOutEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, QFocusEvent* event) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->setTextEmoticonsWidgets__EmoticonTextEditSelector_FocusOutEvent_IsBase(true);
        vtextemoticonswidgetsemoticontexteditselector->focusOutEvent(event);
    } else {
        ((VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_OnFocusOutEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, intptr_t slot) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->setTextEmoticonsWidgets__EmoticonTextEditSelector_FocusOutEvent_Callback(reinterpret_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector::TextEmoticonsWidgets__EmoticonTextEditSelector_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_EnterEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, QEnterEvent* event) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->enterEvent(event);
    } else {
        ((VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_SuperEnterEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, QEnterEvent* event) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->setTextEmoticonsWidgets__EmoticonTextEditSelector_EnterEvent_IsBase(true);
        vtextemoticonswidgetsemoticontexteditselector->enterEvent(event);
    } else {
        ((VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_OnEnterEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, intptr_t slot) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->setTextEmoticonsWidgets__EmoticonTextEditSelector_EnterEvent_Callback(reinterpret_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector::TextEmoticonsWidgets__EmoticonTextEditSelector_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_LeaveEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, QEvent* event) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->leaveEvent(event);
    } else {
        ((VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_SuperLeaveEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, QEvent* event) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->setTextEmoticonsWidgets__EmoticonTextEditSelector_LeaveEvent_IsBase(true);
        vtextemoticonswidgetsemoticontexteditselector->leaveEvent(event);
    } else {
        ((VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_OnLeaveEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, intptr_t slot) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->setTextEmoticonsWidgets__EmoticonTextEditSelector_LeaveEvent_Callback(reinterpret_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector::TextEmoticonsWidgets__EmoticonTextEditSelector_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_PaintEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, QPaintEvent* event) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->paintEvent(event);
    } else {
        ((VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*)self)->paintEvent(event);
    }
}

// Base class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_SuperPaintEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, QPaintEvent* event) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->setTextEmoticonsWidgets__EmoticonTextEditSelector_PaintEvent_IsBase(true);
        vtextemoticonswidgetsemoticontexteditselector->paintEvent(event);
    } else {
        ((VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*)self)->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_OnPaintEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, intptr_t slot) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->setTextEmoticonsWidgets__EmoticonTextEditSelector_PaintEvent_Callback(reinterpret_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector::TextEmoticonsWidgets__EmoticonTextEditSelector_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_MoveEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, QMoveEvent* event) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->moveEvent(event);
    } else {
        ((VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_SuperMoveEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, QMoveEvent* event) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->setTextEmoticonsWidgets__EmoticonTextEditSelector_MoveEvent_IsBase(true);
        vtextemoticonswidgetsemoticontexteditselector->moveEvent(event);
    } else {
        ((VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_OnMoveEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, intptr_t slot) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->setTextEmoticonsWidgets__EmoticonTextEditSelector_MoveEvent_Callback(reinterpret_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector::TextEmoticonsWidgets__EmoticonTextEditSelector_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_ResizeEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, QResizeEvent* event) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->resizeEvent(event);
    } else {
        ((VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*)self)->resizeEvent(event);
    }
}

// Base class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_SuperResizeEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, QResizeEvent* event) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->setTextEmoticonsWidgets__EmoticonTextEditSelector_ResizeEvent_IsBase(true);
        vtextemoticonswidgetsemoticontexteditselector->resizeEvent(event);
    } else {
        ((VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*)self)->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_OnResizeEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, intptr_t slot) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->setTextEmoticonsWidgets__EmoticonTextEditSelector_ResizeEvent_Callback(reinterpret_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector::TextEmoticonsWidgets__EmoticonTextEditSelector_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_CloseEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, QCloseEvent* event) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->closeEvent(event);
    } else {
        ((VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_SuperCloseEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, QCloseEvent* event) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->setTextEmoticonsWidgets__EmoticonTextEditSelector_CloseEvent_IsBase(true);
        vtextemoticonswidgetsemoticontexteditselector->closeEvent(event);
    } else {
        ((VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_OnCloseEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, intptr_t slot) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->setTextEmoticonsWidgets__EmoticonTextEditSelector_CloseEvent_Callback(reinterpret_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector::TextEmoticonsWidgets__EmoticonTextEditSelector_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_ContextMenuEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, QContextMenuEvent* event) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->contextMenuEvent(event);
    } else {
        ((VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*)self)->contextMenuEvent(event);
    }
}

// Base class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_SuperContextMenuEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, QContextMenuEvent* event) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->setTextEmoticonsWidgets__EmoticonTextEditSelector_ContextMenuEvent_IsBase(true);
        vtextemoticonswidgetsemoticontexteditselector->contextMenuEvent(event);
    } else {
        ((VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*)self)->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_OnContextMenuEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, intptr_t slot) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->setTextEmoticonsWidgets__EmoticonTextEditSelector_ContextMenuEvent_Callback(reinterpret_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector::TextEmoticonsWidgets__EmoticonTextEditSelector_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_TabletEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, QTabletEvent* event) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->tabletEvent(event);
    } else {
        ((VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_SuperTabletEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, QTabletEvent* event) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->setTextEmoticonsWidgets__EmoticonTextEditSelector_TabletEvent_IsBase(true);
        vtextemoticonswidgetsemoticontexteditselector->tabletEvent(event);
    } else {
        ((VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_OnTabletEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, intptr_t slot) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->setTextEmoticonsWidgets__EmoticonTextEditSelector_TabletEvent_Callback(reinterpret_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector::TextEmoticonsWidgets__EmoticonTextEditSelector_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_ActionEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, QActionEvent* event) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->actionEvent(event);
    } else {
        ((VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_SuperActionEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, QActionEvent* event) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->setTextEmoticonsWidgets__EmoticonTextEditSelector_ActionEvent_IsBase(true);
        vtextemoticonswidgetsemoticontexteditselector->actionEvent(event);
    } else {
        ((VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_OnActionEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, intptr_t slot) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->setTextEmoticonsWidgets__EmoticonTextEditSelector_ActionEvent_Callback(reinterpret_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector::TextEmoticonsWidgets__EmoticonTextEditSelector_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_DragEnterEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, QDragEnterEvent* event) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->dragEnterEvent(event);
    } else {
        ((VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_SuperDragEnterEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, QDragEnterEvent* event) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->setTextEmoticonsWidgets__EmoticonTextEditSelector_DragEnterEvent_IsBase(true);
        vtextemoticonswidgetsemoticontexteditselector->dragEnterEvent(event);
    } else {
        ((VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_OnDragEnterEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, intptr_t slot) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->setTextEmoticonsWidgets__EmoticonTextEditSelector_DragEnterEvent_Callback(reinterpret_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector::TextEmoticonsWidgets__EmoticonTextEditSelector_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_DragMoveEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, QDragMoveEvent* event) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->dragMoveEvent(event);
    } else {
        ((VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_SuperDragMoveEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, QDragMoveEvent* event) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->setTextEmoticonsWidgets__EmoticonTextEditSelector_DragMoveEvent_IsBase(true);
        vtextemoticonswidgetsemoticontexteditselector->dragMoveEvent(event);
    } else {
        ((VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_OnDragMoveEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, intptr_t slot) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->setTextEmoticonsWidgets__EmoticonTextEditSelector_DragMoveEvent_Callback(reinterpret_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector::TextEmoticonsWidgets__EmoticonTextEditSelector_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_DragLeaveEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, QDragLeaveEvent* event) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->dragLeaveEvent(event);
    } else {
        ((VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_SuperDragLeaveEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, QDragLeaveEvent* event) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->setTextEmoticonsWidgets__EmoticonTextEditSelector_DragLeaveEvent_IsBase(true);
        vtextemoticonswidgetsemoticontexteditselector->dragLeaveEvent(event);
    } else {
        ((VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_OnDragLeaveEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, intptr_t slot) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->setTextEmoticonsWidgets__EmoticonTextEditSelector_DragLeaveEvent_Callback(reinterpret_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector::TextEmoticonsWidgets__EmoticonTextEditSelector_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_DropEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, QDropEvent* event) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->dropEvent(event);
    } else {
        ((VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_SuperDropEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, QDropEvent* event) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->setTextEmoticonsWidgets__EmoticonTextEditSelector_DropEvent_IsBase(true);
        vtextemoticonswidgetsemoticontexteditselector->dropEvent(event);
    } else {
        ((VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_OnDropEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, intptr_t slot) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->setTextEmoticonsWidgets__EmoticonTextEditSelector_DropEvent_Callback(reinterpret_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector::TextEmoticonsWidgets__EmoticonTextEditSelector_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_ShowEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, QShowEvent* event) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->showEvent(event);
    } else {
        ((VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*)self)->showEvent(event);
    }
}

// Base class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_SuperShowEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, QShowEvent* event) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->setTextEmoticonsWidgets__EmoticonTextEditSelector_ShowEvent_IsBase(true);
        vtextemoticonswidgetsemoticontexteditselector->showEvent(event);
    } else {
        ((VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_OnShowEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, intptr_t slot) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->setTextEmoticonsWidgets__EmoticonTextEditSelector_ShowEvent_Callback(reinterpret_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector::TextEmoticonsWidgets__EmoticonTextEditSelector_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_HideEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, QHideEvent* event) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->hideEvent(event);
    } else {
        ((VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_SuperHideEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, QHideEvent* event) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->setTextEmoticonsWidgets__EmoticonTextEditSelector_HideEvent_IsBase(true);
        vtextemoticonswidgetsemoticontexteditselector->hideEvent(event);
    } else {
        ((VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_OnHideEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, intptr_t slot) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->setTextEmoticonsWidgets__EmoticonTextEditSelector_HideEvent_Callback(reinterpret_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector::TextEmoticonsWidgets__EmoticonTextEditSelector_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextEmoticonsWidgets__EmoticonTextEditSelector_NativeEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        return vtextemoticonswidgetsemoticontexteditselector->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool TextEmoticonsWidgets__EmoticonTextEditSelector_SuperNativeEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->setTextEmoticonsWidgets__EmoticonTextEditSelector_NativeEvent_IsBase(true);
        return vtextemoticonswidgetsemoticontexteditselector->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_OnNativeEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, intptr_t slot) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->setTextEmoticonsWidgets__EmoticonTextEditSelector_NativeEvent_Callback(reinterpret_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector::TextEmoticonsWidgets__EmoticonTextEditSelector_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_ChangeEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, QEvent* param1) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->changeEvent(param1);
    } else {
        ((VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_SuperChangeEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, QEvent* param1) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->setTextEmoticonsWidgets__EmoticonTextEditSelector_ChangeEvent_IsBase(true);
        vtextemoticonswidgetsemoticontexteditselector->changeEvent(param1);
    } else {
        ((VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_OnChangeEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, intptr_t slot) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->setTextEmoticonsWidgets__EmoticonTextEditSelector_ChangeEvent_Callback(reinterpret_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector::TextEmoticonsWidgets__EmoticonTextEditSelector_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int TextEmoticonsWidgets__EmoticonTextEditSelector_Metric(const TextEmoticonsWidgets__EmoticonTextEditSelector* self, int param1) {
    auto* vtextemoticonswidgetsemoticontexteditselector = const_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(dynamic_cast<const VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self));
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        return vtextemoticonswidgetsemoticontexteditselector->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int TextEmoticonsWidgets__EmoticonTextEditSelector_SuperMetric(const TextEmoticonsWidgets__EmoticonTextEditSelector* self, int param1) {
    auto* vtextemoticonswidgetsemoticontexteditselector = const_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(dynamic_cast<const VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self));
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->setTextEmoticonsWidgets__EmoticonTextEditSelector_Metric_IsBase(true);
        return vtextemoticonswidgetsemoticontexteditselector->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_OnMetric(const TextEmoticonsWidgets__EmoticonTextEditSelector* self, intptr_t slot) {
    auto* vtextemoticonswidgetsemoticontexteditselector = const_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(dynamic_cast<const VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self));
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->setTextEmoticonsWidgets__EmoticonTextEditSelector_Metric_Callback(reinterpret_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector::TextEmoticonsWidgets__EmoticonTextEditSelector_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_InitPainter(const TextEmoticonsWidgets__EmoticonTextEditSelector* self, QPainter* painter) {
    auto* vtextemoticonswidgetsemoticontexteditselector = const_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(dynamic_cast<const VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self));
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->initPainter(painter);
    } else {
        ((VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_SuperInitPainter(const TextEmoticonsWidgets__EmoticonTextEditSelector* self, QPainter* painter) {
    auto* vtextemoticonswidgetsemoticontexteditselector = const_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(dynamic_cast<const VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self));
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->setTextEmoticonsWidgets__EmoticonTextEditSelector_InitPainter_IsBase(true);
        vtextemoticonswidgetsemoticontexteditselector->initPainter(painter);
    } else {
        ((VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_OnInitPainter(const TextEmoticonsWidgets__EmoticonTextEditSelector* self, intptr_t slot) {
    auto* vtextemoticonswidgetsemoticontexteditselector = const_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(dynamic_cast<const VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self));
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->setTextEmoticonsWidgets__EmoticonTextEditSelector_InitPainter_Callback(reinterpret_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector::TextEmoticonsWidgets__EmoticonTextEditSelector_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* TextEmoticonsWidgets__EmoticonTextEditSelector_Redirected(const TextEmoticonsWidgets__EmoticonTextEditSelector* self, QPoint* offset) {
    auto* vtextemoticonswidgetsemoticontexteditselector = const_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(dynamic_cast<const VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self));
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        return vtextemoticonswidgetsemoticontexteditselector->redirected(offset);
    } else {
        return ((VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* TextEmoticonsWidgets__EmoticonTextEditSelector_SuperRedirected(const TextEmoticonsWidgets__EmoticonTextEditSelector* self, QPoint* offset) {
    auto* vtextemoticonswidgetsemoticontexteditselector = const_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(dynamic_cast<const VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self));
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->setTextEmoticonsWidgets__EmoticonTextEditSelector_Redirected_IsBase(true);
        return vtextemoticonswidgetsemoticontexteditselector->redirected(offset);
    } else {
        return ((VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_OnRedirected(const TextEmoticonsWidgets__EmoticonTextEditSelector* self, intptr_t slot) {
    auto* vtextemoticonswidgetsemoticontexteditselector = const_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(dynamic_cast<const VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self));
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->setTextEmoticonsWidgets__EmoticonTextEditSelector_Redirected_Callback(reinterpret_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector::TextEmoticonsWidgets__EmoticonTextEditSelector_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* TextEmoticonsWidgets__EmoticonTextEditSelector_SharedPainter(const TextEmoticonsWidgets__EmoticonTextEditSelector* self) {
    auto* vtextemoticonswidgetsemoticontexteditselector = const_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(dynamic_cast<const VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self));
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        return vtextemoticonswidgetsemoticontexteditselector->sharedPainter();
    } else {
        return ((VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* TextEmoticonsWidgets__EmoticonTextEditSelector_SuperSharedPainter(const TextEmoticonsWidgets__EmoticonTextEditSelector* self) {
    auto* vtextemoticonswidgetsemoticontexteditselector = const_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(dynamic_cast<const VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self));
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->setTextEmoticonsWidgets__EmoticonTextEditSelector_SharedPainter_IsBase(true);
        return vtextemoticonswidgetsemoticontexteditselector->sharedPainter();
    } else {
        return ((VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_OnSharedPainter(const TextEmoticonsWidgets__EmoticonTextEditSelector* self, intptr_t slot) {
    auto* vtextemoticonswidgetsemoticontexteditselector = const_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(dynamic_cast<const VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self));
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->setTextEmoticonsWidgets__EmoticonTextEditSelector_SharedPainter_Callback(reinterpret_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector::TextEmoticonsWidgets__EmoticonTextEditSelector_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_InputMethodEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, QInputMethodEvent* param1) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->inputMethodEvent(param1);
    } else {
        ((VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_SuperInputMethodEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, QInputMethodEvent* param1) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->setTextEmoticonsWidgets__EmoticonTextEditSelector_InputMethodEvent_IsBase(true);
        vtextemoticonswidgetsemoticontexteditselector->inputMethodEvent(param1);
    } else {
        ((VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_OnInputMethodEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, intptr_t slot) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->setTextEmoticonsWidgets__EmoticonTextEditSelector_InputMethodEvent_Callback(reinterpret_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector::TextEmoticonsWidgets__EmoticonTextEditSelector_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* TextEmoticonsWidgets__EmoticonTextEditSelector_InputMethodQuery(const TextEmoticonsWidgets__EmoticonTextEditSelector* self, int param1) {
    auto* vtextemoticonswidgetsemoticontexteditselector = const_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(dynamic_cast<const VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self));
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        return new QVariant(vtextemoticonswidgetsemoticontexteditselector->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* TextEmoticonsWidgets__EmoticonTextEditSelector_SuperInputMethodQuery(const TextEmoticonsWidgets__EmoticonTextEditSelector* self, int param1) {
    auto* vtextemoticonswidgetsemoticontexteditselector = const_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(dynamic_cast<const VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self));
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->setTextEmoticonsWidgets__EmoticonTextEditSelector_InputMethodQuery_IsBase(true);
        return new QVariant(vtextemoticonswidgetsemoticontexteditselector->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_OnInputMethodQuery(const TextEmoticonsWidgets__EmoticonTextEditSelector* self, intptr_t slot) {
    auto* vtextemoticonswidgetsemoticontexteditselector = const_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(dynamic_cast<const VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self));
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->setTextEmoticonsWidgets__EmoticonTextEditSelector_InputMethodQuery_Callback(reinterpret_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector::TextEmoticonsWidgets__EmoticonTextEditSelector_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextEmoticonsWidgets__EmoticonTextEditSelector_FocusNextPrevChild(TextEmoticonsWidgets__EmoticonTextEditSelector* self, bool next) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        return vtextemoticonswidgetsemoticontexteditselector->focusNextPrevChild(next);
    } else {
        return ((VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool TextEmoticonsWidgets__EmoticonTextEditSelector_SuperFocusNextPrevChild(TextEmoticonsWidgets__EmoticonTextEditSelector* self, bool next) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->setTextEmoticonsWidgets__EmoticonTextEditSelector_FocusNextPrevChild_IsBase(true);
        return vtextemoticonswidgetsemoticontexteditselector->focusNextPrevChild(next);
    } else {
        return ((VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_OnFocusNextPrevChild(TextEmoticonsWidgets__EmoticonTextEditSelector* self, intptr_t slot) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->setTextEmoticonsWidgets__EmoticonTextEditSelector_FocusNextPrevChild_Callback(reinterpret_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector::TextEmoticonsWidgets__EmoticonTextEditSelector_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextEmoticonsWidgets__EmoticonTextEditSelector_EventFilter(TextEmoticonsWidgets__EmoticonTextEditSelector* self, QObject* watched, QEvent* event) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        return vtextemoticonswidgetsemoticontexteditselector->eventFilter(watched, event);
    } else {
        return self->TextEmoticonsWidgets::EmoticonTextEditSelector::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool TextEmoticonsWidgets__EmoticonTextEditSelector_SuperEventFilter(TextEmoticonsWidgets__EmoticonTextEditSelector* self, QObject* watched, QEvent* event) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->setTextEmoticonsWidgets__EmoticonTextEditSelector_EventFilter_IsBase(true);
        return vtextemoticonswidgetsemoticontexteditselector->eventFilter(watched, event);
    } else {
        return self->TextEmoticonsWidgets::EmoticonTextEditSelector::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_OnEventFilter(TextEmoticonsWidgets__EmoticonTextEditSelector* self, intptr_t slot) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->setTextEmoticonsWidgets__EmoticonTextEditSelector_EventFilter_Callback(reinterpret_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector::TextEmoticonsWidgets__EmoticonTextEditSelector_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_TimerEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, QTimerEvent* event) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->timerEvent(event);
    } else {
        ((VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_SuperTimerEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, QTimerEvent* event) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->setTextEmoticonsWidgets__EmoticonTextEditSelector_TimerEvent_IsBase(true);
        vtextemoticonswidgetsemoticontexteditselector->timerEvent(event);
    } else {
        ((VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_OnTimerEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, intptr_t slot) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->setTextEmoticonsWidgets__EmoticonTextEditSelector_TimerEvent_Callback(reinterpret_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector::TextEmoticonsWidgets__EmoticonTextEditSelector_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_ChildEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, QChildEvent* event) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->childEvent(event);
    } else {
        ((VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*)self)->childEvent(event);
    }
}

// Base class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_SuperChildEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, QChildEvent* event) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->setTextEmoticonsWidgets__EmoticonTextEditSelector_ChildEvent_IsBase(true);
        vtextemoticonswidgetsemoticontexteditselector->childEvent(event);
    } else {
        ((VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_OnChildEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, intptr_t slot) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->setTextEmoticonsWidgets__EmoticonTextEditSelector_ChildEvent_Callback(reinterpret_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector::TextEmoticonsWidgets__EmoticonTextEditSelector_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_CustomEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, QEvent* event) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->customEvent(event);
    } else {
        ((VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*)self)->customEvent(event);
    }
}

// Base class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_SuperCustomEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, QEvent* event) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->setTextEmoticonsWidgets__EmoticonTextEditSelector_CustomEvent_IsBase(true);
        vtextemoticonswidgetsemoticontexteditselector->customEvent(event);
    } else {
        ((VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_OnCustomEvent(TextEmoticonsWidgets__EmoticonTextEditSelector* self, intptr_t slot) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->setTextEmoticonsWidgets__EmoticonTextEditSelector_CustomEvent_Callback(reinterpret_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector::TextEmoticonsWidgets__EmoticonTextEditSelector_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_ConnectNotify(TextEmoticonsWidgets__EmoticonTextEditSelector* self, const QMetaMethod* signal) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->connectNotify(*signal);
    } else {
        ((VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_SuperConnectNotify(TextEmoticonsWidgets__EmoticonTextEditSelector* self, const QMetaMethod* signal) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->setTextEmoticonsWidgets__EmoticonTextEditSelector_ConnectNotify_IsBase(true);
        vtextemoticonswidgetsemoticontexteditselector->connectNotify(*signal);
    } else {
        ((VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_OnConnectNotify(TextEmoticonsWidgets__EmoticonTextEditSelector* self, intptr_t slot) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->setTextEmoticonsWidgets__EmoticonTextEditSelector_ConnectNotify_Callback(reinterpret_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector::TextEmoticonsWidgets__EmoticonTextEditSelector_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_DisconnectNotify(TextEmoticonsWidgets__EmoticonTextEditSelector* self, const QMetaMethod* signal) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->disconnectNotify(*signal);
    } else {
        ((VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_SuperDisconnectNotify(TextEmoticonsWidgets__EmoticonTextEditSelector* self, const QMetaMethod* signal) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->setTextEmoticonsWidgets__EmoticonTextEditSelector_DisconnectNotify_IsBase(true);
        vtextemoticonswidgetsemoticontexteditselector->disconnectNotify(*signal);
    } else {
        ((VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_OnDisconnectNotify(TextEmoticonsWidgets__EmoticonTextEditSelector* self, intptr_t slot) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->setTextEmoticonsWidgets__EmoticonTextEditSelector_DisconnectNotify_Callback(reinterpret_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector::TextEmoticonsWidgets__EmoticonTextEditSelector_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_UpdateMicroFocus(TextEmoticonsWidgets__EmoticonTextEditSelector* self) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->updateMicroFocus();
    } else {
        ((VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_SuperUpdateMicroFocus(TextEmoticonsWidgets__EmoticonTextEditSelector* self) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->setTextEmoticonsWidgets__EmoticonTextEditSelector_UpdateMicroFocus_IsBase(true);
        vtextemoticonswidgetsemoticontexteditselector->updateMicroFocus();
    } else {
        ((VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_OnUpdateMicroFocus(TextEmoticonsWidgets__EmoticonTextEditSelector* self, intptr_t slot) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->setTextEmoticonsWidgets__EmoticonTextEditSelector_UpdateMicroFocus_Callback(reinterpret_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector::TextEmoticonsWidgets__EmoticonTextEditSelector_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_Create(TextEmoticonsWidgets__EmoticonTextEditSelector* self) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->create();
    } else {
        ((VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*)self)->create();
    }
}

// Base class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_SuperCreate(TextEmoticonsWidgets__EmoticonTextEditSelector* self) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->setTextEmoticonsWidgets__EmoticonTextEditSelector_Create_IsBase(true);
        vtextemoticonswidgetsemoticontexteditselector->create();
    } else {
        ((VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_OnCreate(TextEmoticonsWidgets__EmoticonTextEditSelector* self, intptr_t slot) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->setTextEmoticonsWidgets__EmoticonTextEditSelector_Create_Callback(reinterpret_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector::TextEmoticonsWidgets__EmoticonTextEditSelector_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_Destroy(TextEmoticonsWidgets__EmoticonTextEditSelector* self) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->destroy();
    } else {
        ((VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*)self)->destroy();
    }
}

// Base class handler implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_SuperDestroy(TextEmoticonsWidgets__EmoticonTextEditSelector* self) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->setTextEmoticonsWidgets__EmoticonTextEditSelector_Destroy_IsBase(true);
        vtextemoticonswidgetsemoticontexteditselector->destroy();
    } else {
        ((VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_OnDestroy(TextEmoticonsWidgets__EmoticonTextEditSelector* self, intptr_t slot) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->setTextEmoticonsWidgets__EmoticonTextEditSelector_Destroy_Callback(reinterpret_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector::TextEmoticonsWidgets__EmoticonTextEditSelector_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextEmoticonsWidgets__EmoticonTextEditSelector_FocusNextChild(TextEmoticonsWidgets__EmoticonTextEditSelector* self) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        return vtextemoticonswidgetsemoticontexteditselector->focusNextChild();
    } else {
        return ((VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool TextEmoticonsWidgets__EmoticonTextEditSelector_SuperFocusNextChild(TextEmoticonsWidgets__EmoticonTextEditSelector* self) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->setTextEmoticonsWidgets__EmoticonTextEditSelector_FocusNextChild_IsBase(true);
        return vtextemoticonswidgetsemoticontexteditselector->focusNextChild();
    } else {
        return ((VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_OnFocusNextChild(TextEmoticonsWidgets__EmoticonTextEditSelector* self, intptr_t slot) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->setTextEmoticonsWidgets__EmoticonTextEditSelector_FocusNextChild_Callback(reinterpret_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector::TextEmoticonsWidgets__EmoticonTextEditSelector_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextEmoticonsWidgets__EmoticonTextEditSelector_FocusPreviousChild(TextEmoticonsWidgets__EmoticonTextEditSelector* self) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        return vtextemoticonswidgetsemoticontexteditselector->focusPreviousChild();
    } else {
        return ((VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool TextEmoticonsWidgets__EmoticonTextEditSelector_SuperFocusPreviousChild(TextEmoticonsWidgets__EmoticonTextEditSelector* self) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->setTextEmoticonsWidgets__EmoticonTextEditSelector_FocusPreviousChild_IsBase(true);
        return vtextemoticonswidgetsemoticontexteditselector->focusPreviousChild();
    } else {
        return ((VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_OnFocusPreviousChild(TextEmoticonsWidgets__EmoticonTextEditSelector* self, intptr_t slot) {
    auto* vtextemoticonswidgetsemoticontexteditselector = dynamic_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self);
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->setTextEmoticonsWidgets__EmoticonTextEditSelector_FocusPreviousChild_Callback(reinterpret_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector::TextEmoticonsWidgets__EmoticonTextEditSelector_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* TextEmoticonsWidgets__EmoticonTextEditSelector_Sender(const TextEmoticonsWidgets__EmoticonTextEditSelector* self) {
    auto* vtextemoticonswidgetsemoticontexteditselector = const_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(dynamic_cast<const VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self));
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        return vtextemoticonswidgetsemoticontexteditselector->sender();
    } else {
        return ((VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*)self)->sender();
    }
}

// Base class handler implementation
QObject* TextEmoticonsWidgets__EmoticonTextEditSelector_SuperSender(const TextEmoticonsWidgets__EmoticonTextEditSelector* self) {
    auto* vtextemoticonswidgetsemoticontexteditselector = const_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(dynamic_cast<const VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self));
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->setTextEmoticonsWidgets__EmoticonTextEditSelector_Sender_IsBase(true);
        return vtextemoticonswidgetsemoticontexteditselector->sender();
    } else {
        return ((VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_OnSender(const TextEmoticonsWidgets__EmoticonTextEditSelector* self, intptr_t slot) {
    auto* vtextemoticonswidgetsemoticontexteditselector = const_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(dynamic_cast<const VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self));
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->setTextEmoticonsWidgets__EmoticonTextEditSelector_Sender_Callback(reinterpret_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector::TextEmoticonsWidgets__EmoticonTextEditSelector_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int TextEmoticonsWidgets__EmoticonTextEditSelector_SenderSignalIndex(const TextEmoticonsWidgets__EmoticonTextEditSelector* self) {
    auto* vtextemoticonswidgetsemoticontexteditselector = const_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(dynamic_cast<const VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self));
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        return vtextemoticonswidgetsemoticontexteditselector->senderSignalIndex();
    } else {
        return ((VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int TextEmoticonsWidgets__EmoticonTextEditSelector_SuperSenderSignalIndex(const TextEmoticonsWidgets__EmoticonTextEditSelector* self) {
    auto* vtextemoticonswidgetsemoticontexteditselector = const_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(dynamic_cast<const VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self));
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->setTextEmoticonsWidgets__EmoticonTextEditSelector_SenderSignalIndex_IsBase(true);
        return vtextemoticonswidgetsemoticontexteditselector->senderSignalIndex();
    } else {
        return ((VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_OnSenderSignalIndex(const TextEmoticonsWidgets__EmoticonTextEditSelector* self, intptr_t slot) {
    auto* vtextemoticonswidgetsemoticontexteditselector = const_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(dynamic_cast<const VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self));
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->setTextEmoticonsWidgets__EmoticonTextEditSelector_SenderSignalIndex_Callback(reinterpret_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector::TextEmoticonsWidgets__EmoticonTextEditSelector_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int TextEmoticonsWidgets__EmoticonTextEditSelector_Receivers(const TextEmoticonsWidgets__EmoticonTextEditSelector* self, const char* signal) {
    auto* vtextemoticonswidgetsemoticontexteditselector = const_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(dynamic_cast<const VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self));
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        return vtextemoticonswidgetsemoticontexteditselector->receivers(signal);
    } else {
        return ((VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*)self)->receivers(signal);
    }
}

// Base class handler implementation
int TextEmoticonsWidgets__EmoticonTextEditSelector_SuperReceivers(const TextEmoticonsWidgets__EmoticonTextEditSelector* self, const char* signal) {
    auto* vtextemoticonswidgetsemoticontexteditselector = const_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(dynamic_cast<const VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self));
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->setTextEmoticonsWidgets__EmoticonTextEditSelector_Receivers_IsBase(true);
        return vtextemoticonswidgetsemoticontexteditselector->receivers(signal);
    } else {
        return ((VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_OnReceivers(const TextEmoticonsWidgets__EmoticonTextEditSelector* self, intptr_t slot) {
    auto* vtextemoticonswidgetsemoticontexteditselector = const_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(dynamic_cast<const VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self));
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->setTextEmoticonsWidgets__EmoticonTextEditSelector_Receivers_Callback(reinterpret_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector::TextEmoticonsWidgets__EmoticonTextEditSelector_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextEmoticonsWidgets__EmoticonTextEditSelector_IsSignalConnected(const TextEmoticonsWidgets__EmoticonTextEditSelector* self, const QMetaMethod* signal) {
    auto* vtextemoticonswidgetsemoticontexteditselector = const_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(dynamic_cast<const VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self));
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        return vtextemoticonswidgetsemoticontexteditselector->isSignalConnected(*signal);
    } else {
        return ((VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool TextEmoticonsWidgets__EmoticonTextEditSelector_SuperIsSignalConnected(const TextEmoticonsWidgets__EmoticonTextEditSelector* self, const QMetaMethod* signal) {
    auto* vtextemoticonswidgetsemoticontexteditselector = const_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(dynamic_cast<const VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self));
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->setTextEmoticonsWidgets__EmoticonTextEditSelector_IsSignalConnected_IsBase(true);
        return vtextemoticonswidgetsemoticontexteditselector->isSignalConnected(*signal);
    } else {
        return ((VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_OnIsSignalConnected(const TextEmoticonsWidgets__EmoticonTextEditSelector* self, intptr_t slot) {
    auto* vtextemoticonswidgetsemoticontexteditselector = const_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(dynamic_cast<const VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self));
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->setTextEmoticonsWidgets__EmoticonTextEditSelector_IsSignalConnected_Callback(reinterpret_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector::TextEmoticonsWidgets__EmoticonTextEditSelector_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double TextEmoticonsWidgets__EmoticonTextEditSelector_GetDecodedMetricF(const TextEmoticonsWidgets__EmoticonTextEditSelector* self, int metricA, int metricB) {
    auto* vtextemoticonswidgetsemoticontexteditselector = const_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(dynamic_cast<const VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self));
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        return vtextemoticonswidgetsemoticontexteditselector->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double TextEmoticonsWidgets__EmoticonTextEditSelector_SuperGetDecodedMetricF(const TextEmoticonsWidgets__EmoticonTextEditSelector* self, int metricA, int metricB) {
    auto* vtextemoticonswidgetsemoticontexteditselector = const_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(dynamic_cast<const VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self));
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->setTextEmoticonsWidgets__EmoticonTextEditSelector_GetDecodedMetricF_IsBase(true);
        return vtextemoticonswidgetsemoticontexteditselector->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void TextEmoticonsWidgets__EmoticonTextEditSelector_OnGetDecodedMetricF(const TextEmoticonsWidgets__EmoticonTextEditSelector* self, intptr_t slot) {
    auto* vtextemoticonswidgetsemoticontexteditselector = const_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(dynamic_cast<const VirtualTextEmoticonsWidgetsEmoticonTextEditSelector*>(self));
    if (vtextemoticonswidgetsemoticontexteditselector && vtextemoticonswidgetsemoticontexteditselector->isVirtualTextEmoticonsWidgetsEmoticonTextEditSelector) {
        vtextemoticonswidgetsemoticontexteditselector->setTextEmoticonsWidgets__EmoticonTextEditSelector_GetDecodedMetricF_Callback(reinterpret_cast<VirtualTextEmoticonsWidgetsEmoticonTextEditSelector::TextEmoticonsWidgets__EmoticonTextEditSelector_GetDecodedMetricF_Callback>(slot));
    }
}

void TextEmoticonsWidgets__EmoticonTextEditSelector_Delete(TextEmoticonsWidgets__EmoticonTextEditSelector* self) {
    delete self;
}
