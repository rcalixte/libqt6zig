#include <QAbstractItemModel>
#include <QActionEvent>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QComboBox>
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
#include <QStyleOptionComboBox>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#define WORKAROUND_INNER_CLASS_DEFINITION_TextAutoCorrectionWidgets__AutoCorrectionLanguage
#include <autocorrectionlanguage.h>
#include "libautocorrectionlanguage.h"
#include "libautocorrectionlanguage.hxx"

TextAutoCorrectionWidgets__AutoCorrectionLanguage* TextAutoCorrectionWidgets__AutoCorrectionLanguage_new(QWidget* parent) {
    return new VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage(parent);
}

libqt_string TextAutoCorrectionWidgets__AutoCorrectionLanguage_Language(const TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, int index) {
    QString _ret = self->language(static_cast<int>(index));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string TextAutoCorrectionWidgets__AutoCorrectionLanguage_Language2(const TextAutoCorrectionWidgets__AutoCorrectionLanguage* self) {
    QString _ret = self->language();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void TextAutoCorrectionWidgets__AutoCorrectionLanguage_SetLanguage(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, const libqt_string language) {
    QString language_QString = QString::fromUtf8(language.data, language.len);
    self->setLanguage(language_QString);
}

// Derived class handler implementation
QMetaObject* TextAutoCorrectionWidgets__AutoCorrectionLanguage_MetaObject(const TextAutoCorrectionWidgets__AutoCorrectionLanguage* self) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self));
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        return (QMetaObject*)vtextautocorrectionwidgetsautocorrectionlanguage->metaObject();
    } else {
        return (QMetaObject*)self->TextAutoCorrectionWidgets::AutoCorrectionLanguage::metaObject();
    }
}

// Base class handler implementation
QMetaObject* TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperMetaObject(const TextAutoCorrectionWidgets__AutoCorrectionLanguage* self) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self));
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->setTextAutoCorrectionWidgets__AutoCorrectionLanguage_MetaObject_IsBase(true);
        return (QMetaObject*)vtextautocorrectionwidgetsautocorrectionlanguage->metaObject();
    } else {
        return (QMetaObject*)self->TextAutoCorrectionWidgets::AutoCorrectionLanguage::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnMetaObject(const TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self));
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->setTextAutoCorrectionWidgets__AutoCorrectionLanguage_MetaObject_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage::TextAutoCorrectionWidgets__AutoCorrectionLanguage_MetaObject_Callback>(slot));
    }
}

// Derived class handler implementation
void* TextAutoCorrectionWidgets__AutoCorrectionLanguage_Metacast(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, const char* param1) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        return vtextautocorrectionwidgetsautocorrectionlanguage->qt_metacast(param1);
    } else {
        return self->TextAutoCorrectionWidgets::AutoCorrectionLanguage::qt_metacast(param1);
    }
}

// Base class handler implementation
void* TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperMetacast(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, const char* param1) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->setTextAutoCorrectionWidgets__AutoCorrectionLanguage_Metacast_IsBase(true);
        return vtextautocorrectionwidgetsautocorrectionlanguage->qt_metacast(param1);
    } else {
        return self->TextAutoCorrectionWidgets::AutoCorrectionLanguage::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnMetacast(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->setTextAutoCorrectionWidgets__AutoCorrectionLanguage_Metacast_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage::TextAutoCorrectionWidgets__AutoCorrectionLanguage_Metacast_Callback>(slot));
    }
}

// Derived class handler implementation
int TextAutoCorrectionWidgets__AutoCorrectionLanguage_Metacall(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, int param1, int param2, void** param3) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        return vtextautocorrectionwidgetsautocorrectionlanguage->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->TextAutoCorrectionWidgets::AutoCorrectionLanguage::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Base class handler implementation
int TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperMetacall(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, int param1, int param2, void** param3) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->setTextAutoCorrectionWidgets__AutoCorrectionLanguage_Metacall_IsBase(true);
        return vtextautocorrectionwidgetsautocorrectionlanguage->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->TextAutoCorrectionWidgets::AutoCorrectionLanguage::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnMetacall(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->setTextAutoCorrectionWidgets__AutoCorrectionLanguage_Metacall_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage::TextAutoCorrectionWidgets__AutoCorrectionLanguage_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_SetModel(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QAbstractItemModel* model) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->setModel(model);
    } else {
        self->TextAutoCorrectionWidgets::AutoCorrectionLanguage::setModel(model);
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperSetModel(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QAbstractItemModel* model) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->setTextAutoCorrectionWidgets__AutoCorrectionLanguage_SetModel_IsBase(true);
        vtextautocorrectionwidgetsautocorrectionlanguage->setModel(model);
    } else {
        self->TextAutoCorrectionWidgets::AutoCorrectionLanguage::setModel(model);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnSetModel(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->setTextAutoCorrectionWidgets__AutoCorrectionLanguage_SetModel_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage::TextAutoCorrectionWidgets__AutoCorrectionLanguage_SetModel_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* TextAutoCorrectionWidgets__AutoCorrectionLanguage_SizeHint(const TextAutoCorrectionWidgets__AutoCorrectionLanguage* self) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self));
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        return new QSize(vtextautocorrectionwidgetsautocorrectionlanguage->sizeHint());
    } else {
        return new QSize(((VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperSizeHint(const TextAutoCorrectionWidgets__AutoCorrectionLanguage* self) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self));
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->setTextAutoCorrectionWidgets__AutoCorrectionLanguage_SizeHint_IsBase(true);
        return new QSize(vtextautocorrectionwidgetsautocorrectionlanguage->sizeHint());
    } else {
        return new QSize(((VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnSizeHint(const TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self));
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->setTextAutoCorrectionWidgets__AutoCorrectionLanguage_SizeHint_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage::TextAutoCorrectionWidgets__AutoCorrectionLanguage_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* TextAutoCorrectionWidgets__AutoCorrectionLanguage_MinimumSizeHint(const TextAutoCorrectionWidgets__AutoCorrectionLanguage* self) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self));
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        return new QSize(vtextautocorrectionwidgetsautocorrectionlanguage->minimumSizeHint());
    } else {
        return new QSize(((VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperMinimumSizeHint(const TextAutoCorrectionWidgets__AutoCorrectionLanguage* self) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self));
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->setTextAutoCorrectionWidgets__AutoCorrectionLanguage_MinimumSizeHint_IsBase(true);
        return new QSize(vtextautocorrectionwidgetsautocorrectionlanguage->minimumSizeHint());
    } else {
        return new QSize(((VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnMinimumSizeHint(const TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self));
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->setTextAutoCorrectionWidgets__AutoCorrectionLanguage_MinimumSizeHint_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage::TextAutoCorrectionWidgets__AutoCorrectionLanguage_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_ShowPopup(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->showPopup();
    } else {
        self->TextAutoCorrectionWidgets::AutoCorrectionLanguage::showPopup();
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperShowPopup(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->setTextAutoCorrectionWidgets__AutoCorrectionLanguage_ShowPopup_IsBase(true);
        vtextautocorrectionwidgetsautocorrectionlanguage->showPopup();
    } else {
        self->TextAutoCorrectionWidgets::AutoCorrectionLanguage::showPopup();
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnShowPopup(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->setTextAutoCorrectionWidgets__AutoCorrectionLanguage_ShowPopup_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage::TextAutoCorrectionWidgets__AutoCorrectionLanguage_ShowPopup_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_HidePopup(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->hidePopup();
    } else {
        self->TextAutoCorrectionWidgets::AutoCorrectionLanguage::hidePopup();
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperHidePopup(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->setTextAutoCorrectionWidgets__AutoCorrectionLanguage_HidePopup_IsBase(true);
        vtextautocorrectionwidgetsautocorrectionlanguage->hidePopup();
    } else {
        self->TextAutoCorrectionWidgets::AutoCorrectionLanguage::hidePopup();
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnHidePopup(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->setTextAutoCorrectionWidgets__AutoCorrectionLanguage_HidePopup_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage::TextAutoCorrectionWidgets__AutoCorrectionLanguage_HidePopup_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextAutoCorrectionWidgets__AutoCorrectionLanguage_Event(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        return vtextautocorrectionwidgetsautocorrectionlanguage->event(event);
    } else {
        return self->TextAutoCorrectionWidgets::AutoCorrectionLanguage::event(event);
    }
}

// Base class handler implementation
bool TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->setTextAutoCorrectionWidgets__AutoCorrectionLanguage_Event_IsBase(true);
        return vtextautocorrectionwidgetsautocorrectionlanguage->event(event);
    } else {
        return self->TextAutoCorrectionWidgets::AutoCorrectionLanguage::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->setTextAutoCorrectionWidgets__AutoCorrectionLanguage_Event_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage::TextAutoCorrectionWidgets__AutoCorrectionLanguage_Event_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* TextAutoCorrectionWidgets__AutoCorrectionLanguage_InputMethodQuery(const TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, int param1) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self));
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        return new QVariant(vtextautocorrectionwidgetsautocorrectionlanguage->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperInputMethodQuery(const TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, int param1) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self));
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->setTextAutoCorrectionWidgets__AutoCorrectionLanguage_InputMethodQuery_IsBase(true);
        return new QVariant(vtextautocorrectionwidgetsautocorrectionlanguage->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnInputMethodQuery(const TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self));
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->setTextAutoCorrectionWidgets__AutoCorrectionLanguage_InputMethodQuery_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage::TextAutoCorrectionWidgets__AutoCorrectionLanguage_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_FocusInEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QFocusEvent* e) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->focusInEvent(e);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*)self)->focusInEvent(e);
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperFocusInEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QFocusEvent* e) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->setTextAutoCorrectionWidgets__AutoCorrectionLanguage_FocusInEvent_IsBase(true);
        vtextautocorrectionwidgetsautocorrectionlanguage->focusInEvent(e);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*)self)->focusInEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnFocusInEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->setTextAutoCorrectionWidgets__AutoCorrectionLanguage_FocusInEvent_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage::TextAutoCorrectionWidgets__AutoCorrectionLanguage_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_FocusOutEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QFocusEvent* e) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->focusOutEvent(e);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*)self)->focusOutEvent(e);
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperFocusOutEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QFocusEvent* e) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->setTextAutoCorrectionWidgets__AutoCorrectionLanguage_FocusOutEvent_IsBase(true);
        vtextautocorrectionwidgetsautocorrectionlanguage->focusOutEvent(e);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*)self)->focusOutEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnFocusOutEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->setTextAutoCorrectionWidgets__AutoCorrectionLanguage_FocusOutEvent_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage::TextAutoCorrectionWidgets__AutoCorrectionLanguage_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_ChangeEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QEvent* e) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->changeEvent(e);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*)self)->changeEvent(e);
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperChangeEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QEvent* e) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->setTextAutoCorrectionWidgets__AutoCorrectionLanguage_ChangeEvent_IsBase(true);
        vtextautocorrectionwidgetsautocorrectionlanguage->changeEvent(e);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*)self)->changeEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnChangeEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->setTextAutoCorrectionWidgets__AutoCorrectionLanguage_ChangeEvent_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage::TextAutoCorrectionWidgets__AutoCorrectionLanguage_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_ResizeEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QResizeEvent* e) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->resizeEvent(e);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*)self)->resizeEvent(e);
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperResizeEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QResizeEvent* e) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->setTextAutoCorrectionWidgets__AutoCorrectionLanguage_ResizeEvent_IsBase(true);
        vtextautocorrectionwidgetsautocorrectionlanguage->resizeEvent(e);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*)self)->resizeEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnResizeEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->setTextAutoCorrectionWidgets__AutoCorrectionLanguage_ResizeEvent_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage::TextAutoCorrectionWidgets__AutoCorrectionLanguage_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_PaintEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QPaintEvent* e) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->paintEvent(e);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*)self)->paintEvent(e);
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperPaintEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QPaintEvent* e) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->setTextAutoCorrectionWidgets__AutoCorrectionLanguage_PaintEvent_IsBase(true);
        vtextautocorrectionwidgetsautocorrectionlanguage->paintEvent(e);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*)self)->paintEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnPaintEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->setTextAutoCorrectionWidgets__AutoCorrectionLanguage_PaintEvent_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage::TextAutoCorrectionWidgets__AutoCorrectionLanguage_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_ShowEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QShowEvent* e) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->showEvent(e);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*)self)->showEvent(e);
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperShowEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QShowEvent* e) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->setTextAutoCorrectionWidgets__AutoCorrectionLanguage_ShowEvent_IsBase(true);
        vtextautocorrectionwidgetsautocorrectionlanguage->showEvent(e);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*)self)->showEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnShowEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->setTextAutoCorrectionWidgets__AutoCorrectionLanguage_ShowEvent_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage::TextAutoCorrectionWidgets__AutoCorrectionLanguage_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_HideEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QHideEvent* e) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->hideEvent(e);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*)self)->hideEvent(e);
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperHideEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QHideEvent* e) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->setTextAutoCorrectionWidgets__AutoCorrectionLanguage_HideEvent_IsBase(true);
        vtextautocorrectionwidgetsautocorrectionlanguage->hideEvent(e);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*)self)->hideEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnHideEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->setTextAutoCorrectionWidgets__AutoCorrectionLanguage_HideEvent_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage::TextAutoCorrectionWidgets__AutoCorrectionLanguage_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_MousePressEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QMouseEvent* e) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->mousePressEvent(e);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*)self)->mousePressEvent(e);
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperMousePressEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QMouseEvent* e) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->setTextAutoCorrectionWidgets__AutoCorrectionLanguage_MousePressEvent_IsBase(true);
        vtextautocorrectionwidgetsautocorrectionlanguage->mousePressEvent(e);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*)self)->mousePressEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnMousePressEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->setTextAutoCorrectionWidgets__AutoCorrectionLanguage_MousePressEvent_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage::TextAutoCorrectionWidgets__AutoCorrectionLanguage_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_MouseReleaseEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QMouseEvent* e) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->mouseReleaseEvent(e);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*)self)->mouseReleaseEvent(e);
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperMouseReleaseEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QMouseEvent* e) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->setTextAutoCorrectionWidgets__AutoCorrectionLanguage_MouseReleaseEvent_IsBase(true);
        vtextautocorrectionwidgetsautocorrectionlanguage->mouseReleaseEvent(e);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*)self)->mouseReleaseEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnMouseReleaseEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->setTextAutoCorrectionWidgets__AutoCorrectionLanguage_MouseReleaseEvent_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage::TextAutoCorrectionWidgets__AutoCorrectionLanguage_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_KeyPressEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QKeyEvent* e) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->keyPressEvent(e);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*)self)->keyPressEvent(e);
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperKeyPressEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QKeyEvent* e) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->setTextAutoCorrectionWidgets__AutoCorrectionLanguage_KeyPressEvent_IsBase(true);
        vtextautocorrectionwidgetsautocorrectionlanguage->keyPressEvent(e);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*)self)->keyPressEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnKeyPressEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->setTextAutoCorrectionWidgets__AutoCorrectionLanguage_KeyPressEvent_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage::TextAutoCorrectionWidgets__AutoCorrectionLanguage_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_KeyReleaseEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QKeyEvent* e) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->keyReleaseEvent(e);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*)self)->keyReleaseEvent(e);
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperKeyReleaseEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QKeyEvent* e) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->setTextAutoCorrectionWidgets__AutoCorrectionLanguage_KeyReleaseEvent_IsBase(true);
        vtextautocorrectionwidgetsautocorrectionlanguage->keyReleaseEvent(e);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*)self)->keyReleaseEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnKeyReleaseEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->setTextAutoCorrectionWidgets__AutoCorrectionLanguage_KeyReleaseEvent_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage::TextAutoCorrectionWidgets__AutoCorrectionLanguage_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_WheelEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QWheelEvent* e) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->wheelEvent(e);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*)self)->wheelEvent(e);
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperWheelEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QWheelEvent* e) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->setTextAutoCorrectionWidgets__AutoCorrectionLanguage_WheelEvent_IsBase(true);
        vtextautocorrectionwidgetsautocorrectionlanguage->wheelEvent(e);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*)self)->wheelEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnWheelEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->setTextAutoCorrectionWidgets__AutoCorrectionLanguage_WheelEvent_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage::TextAutoCorrectionWidgets__AutoCorrectionLanguage_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_ContextMenuEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QContextMenuEvent* e) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->contextMenuEvent(e);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*)self)->contextMenuEvent(e);
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperContextMenuEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QContextMenuEvent* e) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->setTextAutoCorrectionWidgets__AutoCorrectionLanguage_ContextMenuEvent_IsBase(true);
        vtextautocorrectionwidgetsautocorrectionlanguage->contextMenuEvent(e);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*)self)->contextMenuEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnContextMenuEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->setTextAutoCorrectionWidgets__AutoCorrectionLanguage_ContextMenuEvent_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage::TextAutoCorrectionWidgets__AutoCorrectionLanguage_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_InputMethodEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QInputMethodEvent* param1) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->inputMethodEvent(param1);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperInputMethodEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QInputMethodEvent* param1) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->setTextAutoCorrectionWidgets__AutoCorrectionLanguage_InputMethodEvent_IsBase(true);
        vtextautocorrectionwidgetsautocorrectionlanguage->inputMethodEvent(param1);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnInputMethodEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->setTextAutoCorrectionWidgets__AutoCorrectionLanguage_InputMethodEvent_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage::TextAutoCorrectionWidgets__AutoCorrectionLanguage_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_InitStyleOption(const TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QStyleOptionComboBox* option) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self));
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->initStyleOption(option);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*)self)->initStyleOption(option);
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperInitStyleOption(const TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QStyleOptionComboBox* option) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self));
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->setTextAutoCorrectionWidgets__AutoCorrectionLanguage_InitStyleOption_IsBase(true);
        vtextautocorrectionwidgetsautocorrectionlanguage->initStyleOption(option);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*)self)->initStyleOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnInitStyleOption(const TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self));
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->setTextAutoCorrectionWidgets__AutoCorrectionLanguage_InitStyleOption_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage::TextAutoCorrectionWidgets__AutoCorrectionLanguage_InitStyleOption_Callback>(slot));
    }
}

// Derived class handler implementation
int TextAutoCorrectionWidgets__AutoCorrectionLanguage_DevType(const TextAutoCorrectionWidgets__AutoCorrectionLanguage* self) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self));
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        return vtextautocorrectionwidgetsautocorrectionlanguage->devType();
    } else {
        return self->TextAutoCorrectionWidgets::AutoCorrectionLanguage::devType();
    }
}

// Base class handler implementation
int TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperDevType(const TextAutoCorrectionWidgets__AutoCorrectionLanguage* self) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self));
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->setTextAutoCorrectionWidgets__AutoCorrectionLanguage_DevType_IsBase(true);
        return vtextautocorrectionwidgetsautocorrectionlanguage->devType();
    } else {
        return self->TextAutoCorrectionWidgets::AutoCorrectionLanguage::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnDevType(const TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self));
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->setTextAutoCorrectionWidgets__AutoCorrectionLanguage_DevType_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage::TextAutoCorrectionWidgets__AutoCorrectionLanguage_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_SetVisible(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, bool visible) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->setVisible(visible);
    } else {
        self->TextAutoCorrectionWidgets::AutoCorrectionLanguage::setVisible(visible);
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperSetVisible(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, bool visible) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->setTextAutoCorrectionWidgets__AutoCorrectionLanguage_SetVisible_IsBase(true);
        vtextautocorrectionwidgetsautocorrectionlanguage->setVisible(visible);
    } else {
        self->TextAutoCorrectionWidgets::AutoCorrectionLanguage::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnSetVisible(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->setTextAutoCorrectionWidgets__AutoCorrectionLanguage_SetVisible_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage::TextAutoCorrectionWidgets__AutoCorrectionLanguage_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
int TextAutoCorrectionWidgets__AutoCorrectionLanguage_HeightForWidth(const TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, int param1) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self));
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        return vtextautocorrectionwidgetsautocorrectionlanguage->heightForWidth(static_cast<int>(param1));
    } else {
        return self->TextAutoCorrectionWidgets::AutoCorrectionLanguage::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperHeightForWidth(const TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, int param1) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self));
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->setTextAutoCorrectionWidgets__AutoCorrectionLanguage_HeightForWidth_IsBase(true);
        return vtextautocorrectionwidgetsautocorrectionlanguage->heightForWidth(static_cast<int>(param1));
    } else {
        return self->TextAutoCorrectionWidgets::AutoCorrectionLanguage::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnHeightForWidth(const TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self));
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->setTextAutoCorrectionWidgets__AutoCorrectionLanguage_HeightForWidth_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage::TextAutoCorrectionWidgets__AutoCorrectionLanguage_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextAutoCorrectionWidgets__AutoCorrectionLanguage_HasHeightForWidth(const TextAutoCorrectionWidgets__AutoCorrectionLanguage* self) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self));
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        return vtextautocorrectionwidgetsautocorrectionlanguage->hasHeightForWidth();
    } else {
        return self->TextAutoCorrectionWidgets::AutoCorrectionLanguage::hasHeightForWidth();
    }
}

// Base class handler implementation
bool TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperHasHeightForWidth(const TextAutoCorrectionWidgets__AutoCorrectionLanguage* self) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self));
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->setTextAutoCorrectionWidgets__AutoCorrectionLanguage_HasHeightForWidth_IsBase(true);
        return vtextautocorrectionwidgetsautocorrectionlanguage->hasHeightForWidth();
    } else {
        return self->TextAutoCorrectionWidgets::AutoCorrectionLanguage::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnHasHeightForWidth(const TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self));
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->setTextAutoCorrectionWidgets__AutoCorrectionLanguage_HasHeightForWidth_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage::TextAutoCorrectionWidgets__AutoCorrectionLanguage_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* TextAutoCorrectionWidgets__AutoCorrectionLanguage_PaintEngine(const TextAutoCorrectionWidgets__AutoCorrectionLanguage* self) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self));
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        return vtextautocorrectionwidgetsautocorrectionlanguage->paintEngine();
    } else {
        return self->TextAutoCorrectionWidgets::AutoCorrectionLanguage::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperPaintEngine(const TextAutoCorrectionWidgets__AutoCorrectionLanguage* self) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self));
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->setTextAutoCorrectionWidgets__AutoCorrectionLanguage_PaintEngine_IsBase(true);
        return vtextautocorrectionwidgetsautocorrectionlanguage->paintEngine();
    } else {
        return self->TextAutoCorrectionWidgets::AutoCorrectionLanguage::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnPaintEngine(const TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self));
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->setTextAutoCorrectionWidgets__AutoCorrectionLanguage_PaintEngine_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage::TextAutoCorrectionWidgets__AutoCorrectionLanguage_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_MouseDoubleClickEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QMouseEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->mouseDoubleClickEvent(event);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperMouseDoubleClickEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QMouseEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->setTextAutoCorrectionWidgets__AutoCorrectionLanguage_MouseDoubleClickEvent_IsBase(true);
        vtextautocorrectionwidgetsautocorrectionlanguage->mouseDoubleClickEvent(event);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnMouseDoubleClickEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->setTextAutoCorrectionWidgets__AutoCorrectionLanguage_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage::TextAutoCorrectionWidgets__AutoCorrectionLanguage_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_MouseMoveEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QMouseEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->mouseMoveEvent(event);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperMouseMoveEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QMouseEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->setTextAutoCorrectionWidgets__AutoCorrectionLanguage_MouseMoveEvent_IsBase(true);
        vtextautocorrectionwidgetsautocorrectionlanguage->mouseMoveEvent(event);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnMouseMoveEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->setTextAutoCorrectionWidgets__AutoCorrectionLanguage_MouseMoveEvent_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage::TextAutoCorrectionWidgets__AutoCorrectionLanguage_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_EnterEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QEnterEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->enterEvent(event);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperEnterEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QEnterEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->setTextAutoCorrectionWidgets__AutoCorrectionLanguage_EnterEvent_IsBase(true);
        vtextautocorrectionwidgetsautocorrectionlanguage->enterEvent(event);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnEnterEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->setTextAutoCorrectionWidgets__AutoCorrectionLanguage_EnterEvent_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage::TextAutoCorrectionWidgets__AutoCorrectionLanguage_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_LeaveEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->leaveEvent(event);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperLeaveEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->setTextAutoCorrectionWidgets__AutoCorrectionLanguage_LeaveEvent_IsBase(true);
        vtextautocorrectionwidgetsautocorrectionlanguage->leaveEvent(event);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnLeaveEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->setTextAutoCorrectionWidgets__AutoCorrectionLanguage_LeaveEvent_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage::TextAutoCorrectionWidgets__AutoCorrectionLanguage_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_MoveEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QMoveEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->moveEvent(event);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperMoveEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QMoveEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->setTextAutoCorrectionWidgets__AutoCorrectionLanguage_MoveEvent_IsBase(true);
        vtextautocorrectionwidgetsautocorrectionlanguage->moveEvent(event);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnMoveEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->setTextAutoCorrectionWidgets__AutoCorrectionLanguage_MoveEvent_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage::TextAutoCorrectionWidgets__AutoCorrectionLanguage_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_CloseEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QCloseEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->closeEvent(event);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperCloseEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QCloseEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->setTextAutoCorrectionWidgets__AutoCorrectionLanguage_CloseEvent_IsBase(true);
        vtextautocorrectionwidgetsautocorrectionlanguage->closeEvent(event);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnCloseEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->setTextAutoCorrectionWidgets__AutoCorrectionLanguage_CloseEvent_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage::TextAutoCorrectionWidgets__AutoCorrectionLanguage_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_TabletEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QTabletEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->tabletEvent(event);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperTabletEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QTabletEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->setTextAutoCorrectionWidgets__AutoCorrectionLanguage_TabletEvent_IsBase(true);
        vtextautocorrectionwidgetsautocorrectionlanguage->tabletEvent(event);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnTabletEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->setTextAutoCorrectionWidgets__AutoCorrectionLanguage_TabletEvent_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage::TextAutoCorrectionWidgets__AutoCorrectionLanguage_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_ActionEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QActionEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->actionEvent(event);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperActionEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QActionEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->setTextAutoCorrectionWidgets__AutoCorrectionLanguage_ActionEvent_IsBase(true);
        vtextautocorrectionwidgetsautocorrectionlanguage->actionEvent(event);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnActionEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->setTextAutoCorrectionWidgets__AutoCorrectionLanguage_ActionEvent_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage::TextAutoCorrectionWidgets__AutoCorrectionLanguage_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_DragEnterEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QDragEnterEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->dragEnterEvent(event);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperDragEnterEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QDragEnterEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->setTextAutoCorrectionWidgets__AutoCorrectionLanguage_DragEnterEvent_IsBase(true);
        vtextautocorrectionwidgetsautocorrectionlanguage->dragEnterEvent(event);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnDragEnterEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->setTextAutoCorrectionWidgets__AutoCorrectionLanguage_DragEnterEvent_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage::TextAutoCorrectionWidgets__AutoCorrectionLanguage_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_DragMoveEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QDragMoveEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->dragMoveEvent(event);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperDragMoveEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QDragMoveEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->setTextAutoCorrectionWidgets__AutoCorrectionLanguage_DragMoveEvent_IsBase(true);
        vtextautocorrectionwidgetsautocorrectionlanguage->dragMoveEvent(event);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnDragMoveEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->setTextAutoCorrectionWidgets__AutoCorrectionLanguage_DragMoveEvent_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage::TextAutoCorrectionWidgets__AutoCorrectionLanguage_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_DragLeaveEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QDragLeaveEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->dragLeaveEvent(event);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperDragLeaveEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QDragLeaveEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->setTextAutoCorrectionWidgets__AutoCorrectionLanguage_DragLeaveEvent_IsBase(true);
        vtextautocorrectionwidgetsautocorrectionlanguage->dragLeaveEvent(event);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnDragLeaveEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->setTextAutoCorrectionWidgets__AutoCorrectionLanguage_DragLeaveEvent_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage::TextAutoCorrectionWidgets__AutoCorrectionLanguage_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_DropEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QDropEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->dropEvent(event);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperDropEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QDropEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->setTextAutoCorrectionWidgets__AutoCorrectionLanguage_DropEvent_IsBase(true);
        vtextautocorrectionwidgetsautocorrectionlanguage->dropEvent(event);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnDropEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->setTextAutoCorrectionWidgets__AutoCorrectionLanguage_DropEvent_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage::TextAutoCorrectionWidgets__AutoCorrectionLanguage_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextAutoCorrectionWidgets__AutoCorrectionLanguage_NativeEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        return vtextautocorrectionwidgetsautocorrectionlanguage->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperNativeEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->setTextAutoCorrectionWidgets__AutoCorrectionLanguage_NativeEvent_IsBase(true);
        return vtextautocorrectionwidgetsautocorrectionlanguage->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnNativeEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->setTextAutoCorrectionWidgets__AutoCorrectionLanguage_NativeEvent_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage::TextAutoCorrectionWidgets__AutoCorrectionLanguage_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int TextAutoCorrectionWidgets__AutoCorrectionLanguage_Metric(const TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, int param1) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self));
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        return vtextautocorrectionwidgetsautocorrectionlanguage->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperMetric(const TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, int param1) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self));
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->setTextAutoCorrectionWidgets__AutoCorrectionLanguage_Metric_IsBase(true);
        return vtextautocorrectionwidgetsautocorrectionlanguage->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnMetric(const TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self));
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->setTextAutoCorrectionWidgets__AutoCorrectionLanguage_Metric_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage::TextAutoCorrectionWidgets__AutoCorrectionLanguage_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_InitPainter(const TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QPainter* painter) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self));
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->initPainter(painter);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperInitPainter(const TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QPainter* painter) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self));
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->setTextAutoCorrectionWidgets__AutoCorrectionLanguage_InitPainter_IsBase(true);
        vtextautocorrectionwidgetsautocorrectionlanguage->initPainter(painter);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnInitPainter(const TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self));
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->setTextAutoCorrectionWidgets__AutoCorrectionLanguage_InitPainter_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage::TextAutoCorrectionWidgets__AutoCorrectionLanguage_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* TextAutoCorrectionWidgets__AutoCorrectionLanguage_Redirected(const TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QPoint* offset) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self));
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        return vtextautocorrectionwidgetsautocorrectionlanguage->redirected(offset);
    } else {
        return ((VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperRedirected(const TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QPoint* offset) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self));
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->setTextAutoCorrectionWidgets__AutoCorrectionLanguage_Redirected_IsBase(true);
        return vtextautocorrectionwidgetsautocorrectionlanguage->redirected(offset);
    } else {
        return ((VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnRedirected(const TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self));
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->setTextAutoCorrectionWidgets__AutoCorrectionLanguage_Redirected_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage::TextAutoCorrectionWidgets__AutoCorrectionLanguage_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* TextAutoCorrectionWidgets__AutoCorrectionLanguage_SharedPainter(const TextAutoCorrectionWidgets__AutoCorrectionLanguage* self) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self));
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        return vtextautocorrectionwidgetsautocorrectionlanguage->sharedPainter();
    } else {
        return ((VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperSharedPainter(const TextAutoCorrectionWidgets__AutoCorrectionLanguage* self) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self));
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->setTextAutoCorrectionWidgets__AutoCorrectionLanguage_SharedPainter_IsBase(true);
        return vtextautocorrectionwidgetsautocorrectionlanguage->sharedPainter();
    } else {
        return ((VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnSharedPainter(const TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self));
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->setTextAutoCorrectionWidgets__AutoCorrectionLanguage_SharedPainter_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage::TextAutoCorrectionWidgets__AutoCorrectionLanguage_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextAutoCorrectionWidgets__AutoCorrectionLanguage_FocusNextPrevChild(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, bool next) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        return vtextautocorrectionwidgetsautocorrectionlanguage->focusNextPrevChild(next);
    } else {
        return ((VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperFocusNextPrevChild(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, bool next) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->setTextAutoCorrectionWidgets__AutoCorrectionLanguage_FocusNextPrevChild_IsBase(true);
        return vtextautocorrectionwidgetsautocorrectionlanguage->focusNextPrevChild(next);
    } else {
        return ((VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnFocusNextPrevChild(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->setTextAutoCorrectionWidgets__AutoCorrectionLanguage_FocusNextPrevChild_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage::TextAutoCorrectionWidgets__AutoCorrectionLanguage_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextAutoCorrectionWidgets__AutoCorrectionLanguage_EventFilter(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QObject* watched, QEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        return vtextautocorrectionwidgetsautocorrectionlanguage->eventFilter(watched, event);
    } else {
        return self->TextAutoCorrectionWidgets::AutoCorrectionLanguage::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperEventFilter(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QObject* watched, QEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->setTextAutoCorrectionWidgets__AutoCorrectionLanguage_EventFilter_IsBase(true);
        return vtextautocorrectionwidgetsautocorrectionlanguage->eventFilter(watched, event);
    } else {
        return self->TextAutoCorrectionWidgets::AutoCorrectionLanguage::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnEventFilter(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->setTextAutoCorrectionWidgets__AutoCorrectionLanguage_EventFilter_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage::TextAutoCorrectionWidgets__AutoCorrectionLanguage_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_TimerEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QTimerEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->timerEvent(event);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperTimerEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QTimerEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->setTextAutoCorrectionWidgets__AutoCorrectionLanguage_TimerEvent_IsBase(true);
        vtextautocorrectionwidgetsautocorrectionlanguage->timerEvent(event);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnTimerEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->setTextAutoCorrectionWidgets__AutoCorrectionLanguage_TimerEvent_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage::TextAutoCorrectionWidgets__AutoCorrectionLanguage_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_ChildEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QChildEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->childEvent(event);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*)self)->childEvent(event);
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperChildEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QChildEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->setTextAutoCorrectionWidgets__AutoCorrectionLanguage_ChildEvent_IsBase(true);
        vtextautocorrectionwidgetsautocorrectionlanguage->childEvent(event);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnChildEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->setTextAutoCorrectionWidgets__AutoCorrectionLanguage_ChildEvent_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage::TextAutoCorrectionWidgets__AutoCorrectionLanguage_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_CustomEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->customEvent(event);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*)self)->customEvent(event);
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperCustomEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->setTextAutoCorrectionWidgets__AutoCorrectionLanguage_CustomEvent_IsBase(true);
        vtextautocorrectionwidgetsautocorrectionlanguage->customEvent(event);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnCustomEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->setTextAutoCorrectionWidgets__AutoCorrectionLanguage_CustomEvent_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage::TextAutoCorrectionWidgets__AutoCorrectionLanguage_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_ConnectNotify(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, const QMetaMethod* signal) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->connectNotify(*signal);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperConnectNotify(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, const QMetaMethod* signal) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->setTextAutoCorrectionWidgets__AutoCorrectionLanguage_ConnectNotify_IsBase(true);
        vtextautocorrectionwidgetsautocorrectionlanguage->connectNotify(*signal);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnConnectNotify(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->setTextAutoCorrectionWidgets__AutoCorrectionLanguage_ConnectNotify_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage::TextAutoCorrectionWidgets__AutoCorrectionLanguage_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_DisconnectNotify(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, const QMetaMethod* signal) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->disconnectNotify(*signal);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperDisconnectNotify(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, const QMetaMethod* signal) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->setTextAutoCorrectionWidgets__AutoCorrectionLanguage_DisconnectNotify_IsBase(true);
        vtextautocorrectionwidgetsautocorrectionlanguage->disconnectNotify(*signal);
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnDisconnectNotify(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->setTextAutoCorrectionWidgets__AutoCorrectionLanguage_DisconnectNotify_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage::TextAutoCorrectionWidgets__AutoCorrectionLanguage_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_UpdateMicroFocus(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->updateMicroFocus();
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperUpdateMicroFocus(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->setTextAutoCorrectionWidgets__AutoCorrectionLanguage_UpdateMicroFocus_IsBase(true);
        vtextautocorrectionwidgetsautocorrectionlanguage->updateMicroFocus();
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnUpdateMicroFocus(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->setTextAutoCorrectionWidgets__AutoCorrectionLanguage_UpdateMicroFocus_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage::TextAutoCorrectionWidgets__AutoCorrectionLanguage_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_Create(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->create();
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*)self)->create();
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperCreate(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->setTextAutoCorrectionWidgets__AutoCorrectionLanguage_Create_IsBase(true);
        vtextautocorrectionwidgetsautocorrectionlanguage->create();
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnCreate(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->setTextAutoCorrectionWidgets__AutoCorrectionLanguage_Create_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage::TextAutoCorrectionWidgets__AutoCorrectionLanguage_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_Destroy(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->destroy();
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*)self)->destroy();
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperDestroy(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->setTextAutoCorrectionWidgets__AutoCorrectionLanguage_Destroy_IsBase(true);
        vtextautocorrectionwidgetsautocorrectionlanguage->destroy();
    } else {
        ((VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnDestroy(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->setTextAutoCorrectionWidgets__AutoCorrectionLanguage_Destroy_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage::TextAutoCorrectionWidgets__AutoCorrectionLanguage_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextAutoCorrectionWidgets__AutoCorrectionLanguage_FocusNextChild(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        return vtextautocorrectionwidgetsautocorrectionlanguage->focusNextChild();
    } else {
        return ((VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperFocusNextChild(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->setTextAutoCorrectionWidgets__AutoCorrectionLanguage_FocusNextChild_IsBase(true);
        return vtextautocorrectionwidgetsautocorrectionlanguage->focusNextChild();
    } else {
        return ((VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnFocusNextChild(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->setTextAutoCorrectionWidgets__AutoCorrectionLanguage_FocusNextChild_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage::TextAutoCorrectionWidgets__AutoCorrectionLanguage_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextAutoCorrectionWidgets__AutoCorrectionLanguage_FocusPreviousChild(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        return vtextautocorrectionwidgetsautocorrectionlanguage->focusPreviousChild();
    } else {
        return ((VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperFocusPreviousChild(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->setTextAutoCorrectionWidgets__AutoCorrectionLanguage_FocusPreviousChild_IsBase(true);
        return vtextautocorrectionwidgetsautocorrectionlanguage->focusPreviousChild();
    } else {
        return ((VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnFocusPreviousChild(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->setTextAutoCorrectionWidgets__AutoCorrectionLanguage_FocusPreviousChild_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage::TextAutoCorrectionWidgets__AutoCorrectionLanguage_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* TextAutoCorrectionWidgets__AutoCorrectionLanguage_Sender(const TextAutoCorrectionWidgets__AutoCorrectionLanguage* self) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self));
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        return vtextautocorrectionwidgetsautocorrectionlanguage->sender();
    } else {
        return ((VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*)self)->sender();
    }
}

// Base class handler implementation
QObject* TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperSender(const TextAutoCorrectionWidgets__AutoCorrectionLanguage* self) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self));
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->setTextAutoCorrectionWidgets__AutoCorrectionLanguage_Sender_IsBase(true);
        return vtextautocorrectionwidgetsautocorrectionlanguage->sender();
    } else {
        return ((VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnSender(const TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self));
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->setTextAutoCorrectionWidgets__AutoCorrectionLanguage_Sender_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage::TextAutoCorrectionWidgets__AutoCorrectionLanguage_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int TextAutoCorrectionWidgets__AutoCorrectionLanguage_SenderSignalIndex(const TextAutoCorrectionWidgets__AutoCorrectionLanguage* self) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self));
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        return vtextautocorrectionwidgetsautocorrectionlanguage->senderSignalIndex();
    } else {
        return ((VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperSenderSignalIndex(const TextAutoCorrectionWidgets__AutoCorrectionLanguage* self) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self));
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->setTextAutoCorrectionWidgets__AutoCorrectionLanguage_SenderSignalIndex_IsBase(true);
        return vtextautocorrectionwidgetsautocorrectionlanguage->senderSignalIndex();
    } else {
        return ((VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnSenderSignalIndex(const TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self));
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->setTextAutoCorrectionWidgets__AutoCorrectionLanguage_SenderSignalIndex_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage::TextAutoCorrectionWidgets__AutoCorrectionLanguage_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int TextAutoCorrectionWidgets__AutoCorrectionLanguage_Receivers(const TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, const char* signal) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self));
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        return vtextautocorrectionwidgetsautocorrectionlanguage->receivers(signal);
    } else {
        return ((VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*)self)->receivers(signal);
    }
}

// Base class handler implementation
int TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperReceivers(const TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, const char* signal) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self));
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->setTextAutoCorrectionWidgets__AutoCorrectionLanguage_Receivers_IsBase(true);
        return vtextautocorrectionwidgetsautocorrectionlanguage->receivers(signal);
    } else {
        return ((VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnReceivers(const TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self));
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->setTextAutoCorrectionWidgets__AutoCorrectionLanguage_Receivers_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage::TextAutoCorrectionWidgets__AutoCorrectionLanguage_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextAutoCorrectionWidgets__AutoCorrectionLanguage_IsSignalConnected(const TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, const QMetaMethod* signal) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self));
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        return vtextautocorrectionwidgetsautocorrectionlanguage->isSignalConnected(*signal);
    } else {
        return ((VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperIsSignalConnected(const TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, const QMetaMethod* signal) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self));
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->setTextAutoCorrectionWidgets__AutoCorrectionLanguage_IsSignalConnected_IsBase(true);
        return vtextautocorrectionwidgetsautocorrectionlanguage->isSignalConnected(*signal);
    } else {
        return ((VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnIsSignalConnected(const TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self));
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->setTextAutoCorrectionWidgets__AutoCorrectionLanguage_IsSignalConnected_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage::TextAutoCorrectionWidgets__AutoCorrectionLanguage_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double TextAutoCorrectionWidgets__AutoCorrectionLanguage_GetDecodedMetricF(const TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, int metricA, int metricB) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self));
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        return vtextautocorrectionwidgetsautocorrectionlanguage->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperGetDecodedMetricF(const TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, int metricA, int metricB) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self));
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->setTextAutoCorrectionWidgets__AutoCorrectionLanguage_GetDecodedMetricF_IsBase(true);
        return vtextautocorrectionwidgetsautocorrectionlanguage->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnGetDecodedMetricF(const TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, intptr_t slot) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self));
    if (vtextautocorrectionwidgetsautocorrectionlanguage && vtextautocorrectionwidgetsautocorrectionlanguage->isVirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->setTextAutoCorrectionWidgets__AutoCorrectionLanguage_GetDecodedMetricF_Callback(reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage::TextAutoCorrectionWidgets__AutoCorrectionLanguage_GetDecodedMetricF_Callback>(slot));
    }
}

void TextAutoCorrectionWidgets__AutoCorrectionLanguage_Delete(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self) {
    delete self;
}
