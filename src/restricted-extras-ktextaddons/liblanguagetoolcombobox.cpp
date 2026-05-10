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
#define WORKAROUND_INNER_CLASS_DEFINITION_TextGrammarCheck__LanguageToolComboBox
#include <languagetoolcombobox.h>
#include "liblanguagetoolcombobox.h"
#include "liblanguagetoolcombobox.hxx"

TextGrammarCheck__LanguageToolComboBox* TextGrammarCheck__LanguageToolComboBox_new(QWidget* parent) {
    return new VirtualTextGrammarCheckLanguageToolComboBox(parent);
}

TextGrammarCheck__LanguageToolComboBox* TextGrammarCheck__LanguageToolComboBox_new2() {
    return new VirtualTextGrammarCheckLanguageToolComboBox();
}

QMetaObject* TextGrammarCheck__LanguageToolComboBox_MetaObject(const TextGrammarCheck__LanguageToolComboBox* self) {
    auto* vtextgrammarcheck__languagetoolcombobox = dynamic_cast<const VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarcheck__languagetoolcombobox && vtextgrammarcheck__languagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        return (QMetaObject*)self->metaObject();
    } else {
        return (QMetaObject*)((VirtualTextGrammarCheckLanguageToolComboBox*)self)->metaObject();
    }
}

void* TextGrammarCheck__LanguageToolComboBox_Metacast(TextGrammarCheck__LanguageToolComboBox* self, const char* param1) {
    auto* vtextgrammarcheck__languagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarcheck__languagetoolcombobox && vtextgrammarcheck__languagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        return self->qt_metacast(param1);
    } else {
        return ((VirtualTextGrammarCheckLanguageToolComboBox*)self)->qt_metacast(param1);
    }
}

int TextGrammarCheck__LanguageToolComboBox_Metacall(TextGrammarCheck__LanguageToolComboBox* self, int param1, int param2, void** param3) {
    auto* vtextgrammarcheck__languagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarcheck__languagetoolcombobox && vtextgrammarcheck__languagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualTextGrammarCheckLanguageToolComboBox*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

void TextGrammarCheck__LanguageToolComboBox_SetLanguage(TextGrammarCheck__LanguageToolComboBox* self, const libqt_string str) {
    QString str_QString = QString::fromUtf8(str.data, str.len);
    self->setLanguage(str_QString);
}

libqt_string TextGrammarCheck__LanguageToolComboBox_Language(const TextGrammarCheck__LanguageToolComboBox* self) {
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

// Base class handler implementation
QMetaObject* TextGrammarCheck__LanguageToolComboBox_SuperMetaObject(const TextGrammarCheck__LanguageToolComboBox* self) {
    auto* vtextgrammarchecklanguagetoolcombobox = const_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolComboBox*>(self));
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->setTextGrammarCheck__LanguageToolComboBox_MetaObject_IsBase(true);
        return (QMetaObject*)vtextgrammarchecklanguagetoolcombobox->metaObject();
    } else {
        return (QMetaObject*)self->TextGrammarCheck::LanguageToolComboBox::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolComboBox_OnMetaObject(const TextGrammarCheck__LanguageToolComboBox* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolcombobox = const_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolComboBox*>(self));
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->setTextGrammarCheck__LanguageToolComboBox_MetaObject_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolComboBox::TextGrammarCheck__LanguageToolComboBox_MetaObject_Callback>(slot));
    }
}

// Base class handler implementation
void* TextGrammarCheck__LanguageToolComboBox_SuperMetacast(TextGrammarCheck__LanguageToolComboBox* self, const char* param1) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->setTextGrammarCheck__LanguageToolComboBox_Metacast_IsBase(true);
        return vtextgrammarchecklanguagetoolcombobox->qt_metacast(param1);
    } else {
        return self->TextGrammarCheck::LanguageToolComboBox::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolComboBox_OnMetacast(TextGrammarCheck__LanguageToolComboBox* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->setTextGrammarCheck__LanguageToolComboBox_Metacast_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolComboBox::TextGrammarCheck__LanguageToolComboBox_Metacast_Callback>(slot));
    }
}

// Base class handler implementation
int TextGrammarCheck__LanguageToolComboBox_SuperMetacall(TextGrammarCheck__LanguageToolComboBox* self, int param1, int param2, void** param3) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->setTextGrammarCheck__LanguageToolComboBox_Metacall_IsBase(true);
        return vtextgrammarchecklanguagetoolcombobox->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->TextGrammarCheck::LanguageToolComboBox::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolComboBox_OnMetacall(TextGrammarCheck__LanguageToolComboBox* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->setTextGrammarCheck__LanguageToolComboBox_Metacall_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolComboBox::TextGrammarCheck__LanguageToolComboBox_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolComboBox_SetModel(TextGrammarCheck__LanguageToolComboBox* self, QAbstractItemModel* model) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->setModel(model);
    } else {
        self->TextGrammarCheck::LanguageToolComboBox::setModel(model);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolComboBox_SuperSetModel(TextGrammarCheck__LanguageToolComboBox* self, QAbstractItemModel* model) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->setTextGrammarCheck__LanguageToolComboBox_SetModel_IsBase(true);
        vtextgrammarchecklanguagetoolcombobox->setModel(model);
    } else {
        self->TextGrammarCheck::LanguageToolComboBox::setModel(model);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolComboBox_OnSetModel(TextGrammarCheck__LanguageToolComboBox* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->setTextGrammarCheck__LanguageToolComboBox_SetModel_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolComboBox::TextGrammarCheck__LanguageToolComboBox_SetModel_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* TextGrammarCheck__LanguageToolComboBox_SizeHint(const TextGrammarCheck__LanguageToolComboBox* self) {
    auto* vtextgrammarchecklanguagetoolcombobox = const_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolComboBox*>(self));
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        return new QSize(vtextgrammarchecklanguagetoolcombobox->sizeHint());
    } else {
        return new QSize(((VirtualTextGrammarCheckLanguageToolComboBox*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* TextGrammarCheck__LanguageToolComboBox_SuperSizeHint(const TextGrammarCheck__LanguageToolComboBox* self) {
    auto* vtextgrammarchecklanguagetoolcombobox = const_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolComboBox*>(self));
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->setTextGrammarCheck__LanguageToolComboBox_SizeHint_IsBase(true);
        return new QSize(vtextgrammarchecklanguagetoolcombobox->sizeHint());
    } else {
        return new QSize(((VirtualTextGrammarCheckLanguageToolComboBox*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolComboBox_OnSizeHint(const TextGrammarCheck__LanguageToolComboBox* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolcombobox = const_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolComboBox*>(self));
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->setTextGrammarCheck__LanguageToolComboBox_SizeHint_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolComboBox::TextGrammarCheck__LanguageToolComboBox_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* TextGrammarCheck__LanguageToolComboBox_MinimumSizeHint(const TextGrammarCheck__LanguageToolComboBox* self) {
    auto* vtextgrammarchecklanguagetoolcombobox = const_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolComboBox*>(self));
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        return new QSize(vtextgrammarchecklanguagetoolcombobox->minimumSizeHint());
    } else {
        return new QSize(((VirtualTextGrammarCheckLanguageToolComboBox*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* TextGrammarCheck__LanguageToolComboBox_SuperMinimumSizeHint(const TextGrammarCheck__LanguageToolComboBox* self) {
    auto* vtextgrammarchecklanguagetoolcombobox = const_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolComboBox*>(self));
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->setTextGrammarCheck__LanguageToolComboBox_MinimumSizeHint_IsBase(true);
        return new QSize(vtextgrammarchecklanguagetoolcombobox->minimumSizeHint());
    } else {
        return new QSize(((VirtualTextGrammarCheckLanguageToolComboBox*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolComboBox_OnMinimumSizeHint(const TextGrammarCheck__LanguageToolComboBox* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolcombobox = const_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolComboBox*>(self));
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->setTextGrammarCheck__LanguageToolComboBox_MinimumSizeHint_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolComboBox::TextGrammarCheck__LanguageToolComboBox_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolComboBox_ShowPopup(TextGrammarCheck__LanguageToolComboBox* self) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->showPopup();
    } else {
        self->TextGrammarCheck::LanguageToolComboBox::showPopup();
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolComboBox_SuperShowPopup(TextGrammarCheck__LanguageToolComboBox* self) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->setTextGrammarCheck__LanguageToolComboBox_ShowPopup_IsBase(true);
        vtextgrammarchecklanguagetoolcombobox->showPopup();
    } else {
        self->TextGrammarCheck::LanguageToolComboBox::showPopup();
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolComboBox_OnShowPopup(TextGrammarCheck__LanguageToolComboBox* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->setTextGrammarCheck__LanguageToolComboBox_ShowPopup_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolComboBox::TextGrammarCheck__LanguageToolComboBox_ShowPopup_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolComboBox_HidePopup(TextGrammarCheck__LanguageToolComboBox* self) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->hidePopup();
    } else {
        self->TextGrammarCheck::LanguageToolComboBox::hidePopup();
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolComboBox_SuperHidePopup(TextGrammarCheck__LanguageToolComboBox* self) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->setTextGrammarCheck__LanguageToolComboBox_HidePopup_IsBase(true);
        vtextgrammarchecklanguagetoolcombobox->hidePopup();
    } else {
        self->TextGrammarCheck::LanguageToolComboBox::hidePopup();
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolComboBox_OnHidePopup(TextGrammarCheck__LanguageToolComboBox* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->setTextGrammarCheck__LanguageToolComboBox_HidePopup_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolComboBox::TextGrammarCheck__LanguageToolComboBox_HidePopup_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextGrammarCheck__LanguageToolComboBox_Event(TextGrammarCheck__LanguageToolComboBox* self, QEvent* event) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        return vtextgrammarchecklanguagetoolcombobox->event(event);
    } else {
        return self->TextGrammarCheck::LanguageToolComboBox::event(event);
    }
}

// Base class handler implementation
bool TextGrammarCheck__LanguageToolComboBox_SuperEvent(TextGrammarCheck__LanguageToolComboBox* self, QEvent* event) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->setTextGrammarCheck__LanguageToolComboBox_Event_IsBase(true);
        return vtextgrammarchecklanguagetoolcombobox->event(event);
    } else {
        return self->TextGrammarCheck::LanguageToolComboBox::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolComboBox_OnEvent(TextGrammarCheck__LanguageToolComboBox* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->setTextGrammarCheck__LanguageToolComboBox_Event_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolComboBox::TextGrammarCheck__LanguageToolComboBox_Event_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* TextGrammarCheck__LanguageToolComboBox_InputMethodQuery(const TextGrammarCheck__LanguageToolComboBox* self, int param1) {
    auto* vtextgrammarchecklanguagetoolcombobox = const_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolComboBox*>(self));
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        return new QVariant(vtextgrammarchecklanguagetoolcombobox->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualTextGrammarCheckLanguageToolComboBox*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* TextGrammarCheck__LanguageToolComboBox_SuperInputMethodQuery(const TextGrammarCheck__LanguageToolComboBox* self, int param1) {
    auto* vtextgrammarchecklanguagetoolcombobox = const_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolComboBox*>(self));
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->setTextGrammarCheck__LanguageToolComboBox_InputMethodQuery_IsBase(true);
        return new QVariant(vtextgrammarchecklanguagetoolcombobox->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualTextGrammarCheckLanguageToolComboBox*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolComboBox_OnInputMethodQuery(const TextGrammarCheck__LanguageToolComboBox* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolcombobox = const_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolComboBox*>(self));
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->setTextGrammarCheck__LanguageToolComboBox_InputMethodQuery_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolComboBox::TextGrammarCheck__LanguageToolComboBox_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolComboBox_FocusInEvent(TextGrammarCheck__LanguageToolComboBox* self, QFocusEvent* e) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->focusInEvent(e);
    } else {
        ((VirtualTextGrammarCheckLanguageToolComboBox*)self)->focusInEvent(e);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolComboBox_SuperFocusInEvent(TextGrammarCheck__LanguageToolComboBox* self, QFocusEvent* e) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->setTextGrammarCheck__LanguageToolComboBox_FocusInEvent_IsBase(true);
        vtextgrammarchecklanguagetoolcombobox->focusInEvent(e);
    } else {
        ((VirtualTextGrammarCheckLanguageToolComboBox*)self)->focusInEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolComboBox_OnFocusInEvent(TextGrammarCheck__LanguageToolComboBox* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->setTextGrammarCheck__LanguageToolComboBox_FocusInEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolComboBox::TextGrammarCheck__LanguageToolComboBox_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolComboBox_FocusOutEvent(TextGrammarCheck__LanguageToolComboBox* self, QFocusEvent* e) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->focusOutEvent(e);
    } else {
        ((VirtualTextGrammarCheckLanguageToolComboBox*)self)->focusOutEvent(e);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolComboBox_SuperFocusOutEvent(TextGrammarCheck__LanguageToolComboBox* self, QFocusEvent* e) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->setTextGrammarCheck__LanguageToolComboBox_FocusOutEvent_IsBase(true);
        vtextgrammarchecklanguagetoolcombobox->focusOutEvent(e);
    } else {
        ((VirtualTextGrammarCheckLanguageToolComboBox*)self)->focusOutEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolComboBox_OnFocusOutEvent(TextGrammarCheck__LanguageToolComboBox* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->setTextGrammarCheck__LanguageToolComboBox_FocusOutEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolComboBox::TextGrammarCheck__LanguageToolComboBox_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolComboBox_ChangeEvent(TextGrammarCheck__LanguageToolComboBox* self, QEvent* e) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->changeEvent(e);
    } else {
        ((VirtualTextGrammarCheckLanguageToolComboBox*)self)->changeEvent(e);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolComboBox_SuperChangeEvent(TextGrammarCheck__LanguageToolComboBox* self, QEvent* e) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->setTextGrammarCheck__LanguageToolComboBox_ChangeEvent_IsBase(true);
        vtextgrammarchecklanguagetoolcombobox->changeEvent(e);
    } else {
        ((VirtualTextGrammarCheckLanguageToolComboBox*)self)->changeEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolComboBox_OnChangeEvent(TextGrammarCheck__LanguageToolComboBox* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->setTextGrammarCheck__LanguageToolComboBox_ChangeEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolComboBox::TextGrammarCheck__LanguageToolComboBox_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolComboBox_ResizeEvent(TextGrammarCheck__LanguageToolComboBox* self, QResizeEvent* e) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->resizeEvent(e);
    } else {
        ((VirtualTextGrammarCheckLanguageToolComboBox*)self)->resizeEvent(e);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolComboBox_SuperResizeEvent(TextGrammarCheck__LanguageToolComboBox* self, QResizeEvent* e) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->setTextGrammarCheck__LanguageToolComboBox_ResizeEvent_IsBase(true);
        vtextgrammarchecklanguagetoolcombobox->resizeEvent(e);
    } else {
        ((VirtualTextGrammarCheckLanguageToolComboBox*)self)->resizeEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolComboBox_OnResizeEvent(TextGrammarCheck__LanguageToolComboBox* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->setTextGrammarCheck__LanguageToolComboBox_ResizeEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolComboBox::TextGrammarCheck__LanguageToolComboBox_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolComboBox_PaintEvent(TextGrammarCheck__LanguageToolComboBox* self, QPaintEvent* e) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->paintEvent(e);
    } else {
        ((VirtualTextGrammarCheckLanguageToolComboBox*)self)->paintEvent(e);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolComboBox_SuperPaintEvent(TextGrammarCheck__LanguageToolComboBox* self, QPaintEvent* e) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->setTextGrammarCheck__LanguageToolComboBox_PaintEvent_IsBase(true);
        vtextgrammarchecklanguagetoolcombobox->paintEvent(e);
    } else {
        ((VirtualTextGrammarCheckLanguageToolComboBox*)self)->paintEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolComboBox_OnPaintEvent(TextGrammarCheck__LanguageToolComboBox* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->setTextGrammarCheck__LanguageToolComboBox_PaintEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolComboBox::TextGrammarCheck__LanguageToolComboBox_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolComboBox_ShowEvent(TextGrammarCheck__LanguageToolComboBox* self, QShowEvent* e) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->showEvent(e);
    } else {
        ((VirtualTextGrammarCheckLanguageToolComboBox*)self)->showEvent(e);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolComboBox_SuperShowEvent(TextGrammarCheck__LanguageToolComboBox* self, QShowEvent* e) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->setTextGrammarCheck__LanguageToolComboBox_ShowEvent_IsBase(true);
        vtextgrammarchecklanguagetoolcombobox->showEvent(e);
    } else {
        ((VirtualTextGrammarCheckLanguageToolComboBox*)self)->showEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolComboBox_OnShowEvent(TextGrammarCheck__LanguageToolComboBox* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->setTextGrammarCheck__LanguageToolComboBox_ShowEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolComboBox::TextGrammarCheck__LanguageToolComboBox_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolComboBox_HideEvent(TextGrammarCheck__LanguageToolComboBox* self, QHideEvent* e) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->hideEvent(e);
    } else {
        ((VirtualTextGrammarCheckLanguageToolComboBox*)self)->hideEvent(e);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolComboBox_SuperHideEvent(TextGrammarCheck__LanguageToolComboBox* self, QHideEvent* e) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->setTextGrammarCheck__LanguageToolComboBox_HideEvent_IsBase(true);
        vtextgrammarchecklanguagetoolcombobox->hideEvent(e);
    } else {
        ((VirtualTextGrammarCheckLanguageToolComboBox*)self)->hideEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolComboBox_OnHideEvent(TextGrammarCheck__LanguageToolComboBox* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->setTextGrammarCheck__LanguageToolComboBox_HideEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolComboBox::TextGrammarCheck__LanguageToolComboBox_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolComboBox_MousePressEvent(TextGrammarCheck__LanguageToolComboBox* self, QMouseEvent* e) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->mousePressEvent(e);
    } else {
        ((VirtualTextGrammarCheckLanguageToolComboBox*)self)->mousePressEvent(e);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolComboBox_SuperMousePressEvent(TextGrammarCheck__LanguageToolComboBox* self, QMouseEvent* e) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->setTextGrammarCheck__LanguageToolComboBox_MousePressEvent_IsBase(true);
        vtextgrammarchecklanguagetoolcombobox->mousePressEvent(e);
    } else {
        ((VirtualTextGrammarCheckLanguageToolComboBox*)self)->mousePressEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolComboBox_OnMousePressEvent(TextGrammarCheck__LanguageToolComboBox* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->setTextGrammarCheck__LanguageToolComboBox_MousePressEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolComboBox::TextGrammarCheck__LanguageToolComboBox_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolComboBox_MouseReleaseEvent(TextGrammarCheck__LanguageToolComboBox* self, QMouseEvent* e) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->mouseReleaseEvent(e);
    } else {
        ((VirtualTextGrammarCheckLanguageToolComboBox*)self)->mouseReleaseEvent(e);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolComboBox_SuperMouseReleaseEvent(TextGrammarCheck__LanguageToolComboBox* self, QMouseEvent* e) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->setTextGrammarCheck__LanguageToolComboBox_MouseReleaseEvent_IsBase(true);
        vtextgrammarchecklanguagetoolcombobox->mouseReleaseEvent(e);
    } else {
        ((VirtualTextGrammarCheckLanguageToolComboBox*)self)->mouseReleaseEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolComboBox_OnMouseReleaseEvent(TextGrammarCheck__LanguageToolComboBox* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->setTextGrammarCheck__LanguageToolComboBox_MouseReleaseEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolComboBox::TextGrammarCheck__LanguageToolComboBox_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolComboBox_KeyPressEvent(TextGrammarCheck__LanguageToolComboBox* self, QKeyEvent* e) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->keyPressEvent(e);
    } else {
        ((VirtualTextGrammarCheckLanguageToolComboBox*)self)->keyPressEvent(e);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolComboBox_SuperKeyPressEvent(TextGrammarCheck__LanguageToolComboBox* self, QKeyEvent* e) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->setTextGrammarCheck__LanguageToolComboBox_KeyPressEvent_IsBase(true);
        vtextgrammarchecklanguagetoolcombobox->keyPressEvent(e);
    } else {
        ((VirtualTextGrammarCheckLanguageToolComboBox*)self)->keyPressEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolComboBox_OnKeyPressEvent(TextGrammarCheck__LanguageToolComboBox* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->setTextGrammarCheck__LanguageToolComboBox_KeyPressEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolComboBox::TextGrammarCheck__LanguageToolComboBox_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolComboBox_KeyReleaseEvent(TextGrammarCheck__LanguageToolComboBox* self, QKeyEvent* e) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->keyReleaseEvent(e);
    } else {
        ((VirtualTextGrammarCheckLanguageToolComboBox*)self)->keyReleaseEvent(e);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolComboBox_SuperKeyReleaseEvent(TextGrammarCheck__LanguageToolComboBox* self, QKeyEvent* e) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->setTextGrammarCheck__LanguageToolComboBox_KeyReleaseEvent_IsBase(true);
        vtextgrammarchecklanguagetoolcombobox->keyReleaseEvent(e);
    } else {
        ((VirtualTextGrammarCheckLanguageToolComboBox*)self)->keyReleaseEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolComboBox_OnKeyReleaseEvent(TextGrammarCheck__LanguageToolComboBox* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->setTextGrammarCheck__LanguageToolComboBox_KeyReleaseEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolComboBox::TextGrammarCheck__LanguageToolComboBox_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolComboBox_WheelEvent(TextGrammarCheck__LanguageToolComboBox* self, QWheelEvent* e) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->wheelEvent(e);
    } else {
        ((VirtualTextGrammarCheckLanguageToolComboBox*)self)->wheelEvent(e);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolComboBox_SuperWheelEvent(TextGrammarCheck__LanguageToolComboBox* self, QWheelEvent* e) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->setTextGrammarCheck__LanguageToolComboBox_WheelEvent_IsBase(true);
        vtextgrammarchecklanguagetoolcombobox->wheelEvent(e);
    } else {
        ((VirtualTextGrammarCheckLanguageToolComboBox*)self)->wheelEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolComboBox_OnWheelEvent(TextGrammarCheck__LanguageToolComboBox* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->setTextGrammarCheck__LanguageToolComboBox_WheelEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolComboBox::TextGrammarCheck__LanguageToolComboBox_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolComboBox_ContextMenuEvent(TextGrammarCheck__LanguageToolComboBox* self, QContextMenuEvent* e) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->contextMenuEvent(e);
    } else {
        ((VirtualTextGrammarCheckLanguageToolComboBox*)self)->contextMenuEvent(e);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolComboBox_SuperContextMenuEvent(TextGrammarCheck__LanguageToolComboBox* self, QContextMenuEvent* e) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->setTextGrammarCheck__LanguageToolComboBox_ContextMenuEvent_IsBase(true);
        vtextgrammarchecklanguagetoolcombobox->contextMenuEvent(e);
    } else {
        ((VirtualTextGrammarCheckLanguageToolComboBox*)self)->contextMenuEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolComboBox_OnContextMenuEvent(TextGrammarCheck__LanguageToolComboBox* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->setTextGrammarCheck__LanguageToolComboBox_ContextMenuEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolComboBox::TextGrammarCheck__LanguageToolComboBox_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolComboBox_InputMethodEvent(TextGrammarCheck__LanguageToolComboBox* self, QInputMethodEvent* param1) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->inputMethodEvent(param1);
    } else {
        ((VirtualTextGrammarCheckLanguageToolComboBox*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolComboBox_SuperInputMethodEvent(TextGrammarCheck__LanguageToolComboBox* self, QInputMethodEvent* param1) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->setTextGrammarCheck__LanguageToolComboBox_InputMethodEvent_IsBase(true);
        vtextgrammarchecklanguagetoolcombobox->inputMethodEvent(param1);
    } else {
        ((VirtualTextGrammarCheckLanguageToolComboBox*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolComboBox_OnInputMethodEvent(TextGrammarCheck__LanguageToolComboBox* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->setTextGrammarCheck__LanguageToolComboBox_InputMethodEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolComboBox::TextGrammarCheck__LanguageToolComboBox_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolComboBox_InitStyleOption(const TextGrammarCheck__LanguageToolComboBox* self, QStyleOptionComboBox* option) {
    auto* vtextgrammarchecklanguagetoolcombobox = const_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolComboBox*>(self));
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->initStyleOption(option);
    } else {
        ((VirtualTextGrammarCheckLanguageToolComboBox*)self)->initStyleOption(option);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolComboBox_SuperInitStyleOption(const TextGrammarCheck__LanguageToolComboBox* self, QStyleOptionComboBox* option) {
    auto* vtextgrammarchecklanguagetoolcombobox = const_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolComboBox*>(self));
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->setTextGrammarCheck__LanguageToolComboBox_InitStyleOption_IsBase(true);
        vtextgrammarchecklanguagetoolcombobox->initStyleOption(option);
    } else {
        ((VirtualTextGrammarCheckLanguageToolComboBox*)self)->initStyleOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolComboBox_OnInitStyleOption(const TextGrammarCheck__LanguageToolComboBox* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolcombobox = const_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolComboBox*>(self));
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->setTextGrammarCheck__LanguageToolComboBox_InitStyleOption_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolComboBox::TextGrammarCheck__LanguageToolComboBox_InitStyleOption_Callback>(slot));
    }
}

// Derived class handler implementation
int TextGrammarCheck__LanguageToolComboBox_DevType(const TextGrammarCheck__LanguageToolComboBox* self) {
    auto* vtextgrammarchecklanguagetoolcombobox = const_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolComboBox*>(self));
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        return vtextgrammarchecklanguagetoolcombobox->devType();
    } else {
        return self->TextGrammarCheck::LanguageToolComboBox::devType();
    }
}

// Base class handler implementation
int TextGrammarCheck__LanguageToolComboBox_SuperDevType(const TextGrammarCheck__LanguageToolComboBox* self) {
    auto* vtextgrammarchecklanguagetoolcombobox = const_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolComboBox*>(self));
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->setTextGrammarCheck__LanguageToolComboBox_DevType_IsBase(true);
        return vtextgrammarchecklanguagetoolcombobox->devType();
    } else {
        return self->TextGrammarCheck::LanguageToolComboBox::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolComboBox_OnDevType(const TextGrammarCheck__LanguageToolComboBox* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolcombobox = const_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolComboBox*>(self));
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->setTextGrammarCheck__LanguageToolComboBox_DevType_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolComboBox::TextGrammarCheck__LanguageToolComboBox_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolComboBox_SetVisible(TextGrammarCheck__LanguageToolComboBox* self, bool visible) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->setVisible(visible);
    } else {
        self->TextGrammarCheck::LanguageToolComboBox::setVisible(visible);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolComboBox_SuperSetVisible(TextGrammarCheck__LanguageToolComboBox* self, bool visible) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->setTextGrammarCheck__LanguageToolComboBox_SetVisible_IsBase(true);
        vtextgrammarchecklanguagetoolcombobox->setVisible(visible);
    } else {
        self->TextGrammarCheck::LanguageToolComboBox::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolComboBox_OnSetVisible(TextGrammarCheck__LanguageToolComboBox* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->setTextGrammarCheck__LanguageToolComboBox_SetVisible_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolComboBox::TextGrammarCheck__LanguageToolComboBox_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
int TextGrammarCheck__LanguageToolComboBox_HeightForWidth(const TextGrammarCheck__LanguageToolComboBox* self, int param1) {
    auto* vtextgrammarchecklanguagetoolcombobox = const_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolComboBox*>(self));
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        return vtextgrammarchecklanguagetoolcombobox->heightForWidth(static_cast<int>(param1));
    } else {
        return self->TextGrammarCheck::LanguageToolComboBox::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int TextGrammarCheck__LanguageToolComboBox_SuperHeightForWidth(const TextGrammarCheck__LanguageToolComboBox* self, int param1) {
    auto* vtextgrammarchecklanguagetoolcombobox = const_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolComboBox*>(self));
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->setTextGrammarCheck__LanguageToolComboBox_HeightForWidth_IsBase(true);
        return vtextgrammarchecklanguagetoolcombobox->heightForWidth(static_cast<int>(param1));
    } else {
        return self->TextGrammarCheck::LanguageToolComboBox::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolComboBox_OnHeightForWidth(const TextGrammarCheck__LanguageToolComboBox* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolcombobox = const_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolComboBox*>(self));
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->setTextGrammarCheck__LanguageToolComboBox_HeightForWidth_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolComboBox::TextGrammarCheck__LanguageToolComboBox_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextGrammarCheck__LanguageToolComboBox_HasHeightForWidth(const TextGrammarCheck__LanguageToolComboBox* self) {
    auto* vtextgrammarchecklanguagetoolcombobox = const_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolComboBox*>(self));
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        return vtextgrammarchecklanguagetoolcombobox->hasHeightForWidth();
    } else {
        return self->TextGrammarCheck::LanguageToolComboBox::hasHeightForWidth();
    }
}

// Base class handler implementation
bool TextGrammarCheck__LanguageToolComboBox_SuperHasHeightForWidth(const TextGrammarCheck__LanguageToolComboBox* self) {
    auto* vtextgrammarchecklanguagetoolcombobox = const_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolComboBox*>(self));
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->setTextGrammarCheck__LanguageToolComboBox_HasHeightForWidth_IsBase(true);
        return vtextgrammarchecklanguagetoolcombobox->hasHeightForWidth();
    } else {
        return self->TextGrammarCheck::LanguageToolComboBox::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolComboBox_OnHasHeightForWidth(const TextGrammarCheck__LanguageToolComboBox* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolcombobox = const_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolComboBox*>(self));
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->setTextGrammarCheck__LanguageToolComboBox_HasHeightForWidth_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolComboBox::TextGrammarCheck__LanguageToolComboBox_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* TextGrammarCheck__LanguageToolComboBox_PaintEngine(const TextGrammarCheck__LanguageToolComboBox* self) {
    auto* vtextgrammarchecklanguagetoolcombobox = const_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolComboBox*>(self));
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        return vtextgrammarchecklanguagetoolcombobox->paintEngine();
    } else {
        return self->TextGrammarCheck::LanguageToolComboBox::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* TextGrammarCheck__LanguageToolComboBox_SuperPaintEngine(const TextGrammarCheck__LanguageToolComboBox* self) {
    auto* vtextgrammarchecklanguagetoolcombobox = const_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolComboBox*>(self));
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->setTextGrammarCheck__LanguageToolComboBox_PaintEngine_IsBase(true);
        return vtextgrammarchecklanguagetoolcombobox->paintEngine();
    } else {
        return self->TextGrammarCheck::LanguageToolComboBox::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolComboBox_OnPaintEngine(const TextGrammarCheck__LanguageToolComboBox* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolcombobox = const_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolComboBox*>(self));
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->setTextGrammarCheck__LanguageToolComboBox_PaintEngine_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolComboBox::TextGrammarCheck__LanguageToolComboBox_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolComboBox_MouseDoubleClickEvent(TextGrammarCheck__LanguageToolComboBox* self, QMouseEvent* event) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->mouseDoubleClickEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolComboBox*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolComboBox_SuperMouseDoubleClickEvent(TextGrammarCheck__LanguageToolComboBox* self, QMouseEvent* event) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->setTextGrammarCheck__LanguageToolComboBox_MouseDoubleClickEvent_IsBase(true);
        vtextgrammarchecklanguagetoolcombobox->mouseDoubleClickEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolComboBox*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolComboBox_OnMouseDoubleClickEvent(TextGrammarCheck__LanguageToolComboBox* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->setTextGrammarCheck__LanguageToolComboBox_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolComboBox::TextGrammarCheck__LanguageToolComboBox_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolComboBox_MouseMoveEvent(TextGrammarCheck__LanguageToolComboBox* self, QMouseEvent* event) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->mouseMoveEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolComboBox*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolComboBox_SuperMouseMoveEvent(TextGrammarCheck__LanguageToolComboBox* self, QMouseEvent* event) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->setTextGrammarCheck__LanguageToolComboBox_MouseMoveEvent_IsBase(true);
        vtextgrammarchecklanguagetoolcombobox->mouseMoveEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolComboBox*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolComboBox_OnMouseMoveEvent(TextGrammarCheck__LanguageToolComboBox* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->setTextGrammarCheck__LanguageToolComboBox_MouseMoveEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolComboBox::TextGrammarCheck__LanguageToolComboBox_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolComboBox_EnterEvent(TextGrammarCheck__LanguageToolComboBox* self, QEnterEvent* event) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->enterEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolComboBox*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolComboBox_SuperEnterEvent(TextGrammarCheck__LanguageToolComboBox* self, QEnterEvent* event) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->setTextGrammarCheck__LanguageToolComboBox_EnterEvent_IsBase(true);
        vtextgrammarchecklanguagetoolcombobox->enterEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolComboBox*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolComboBox_OnEnterEvent(TextGrammarCheck__LanguageToolComboBox* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->setTextGrammarCheck__LanguageToolComboBox_EnterEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolComboBox::TextGrammarCheck__LanguageToolComboBox_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolComboBox_LeaveEvent(TextGrammarCheck__LanguageToolComboBox* self, QEvent* event) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->leaveEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolComboBox*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolComboBox_SuperLeaveEvent(TextGrammarCheck__LanguageToolComboBox* self, QEvent* event) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->setTextGrammarCheck__LanguageToolComboBox_LeaveEvent_IsBase(true);
        vtextgrammarchecklanguagetoolcombobox->leaveEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolComboBox*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolComboBox_OnLeaveEvent(TextGrammarCheck__LanguageToolComboBox* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->setTextGrammarCheck__LanguageToolComboBox_LeaveEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolComboBox::TextGrammarCheck__LanguageToolComboBox_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolComboBox_MoveEvent(TextGrammarCheck__LanguageToolComboBox* self, QMoveEvent* event) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->moveEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolComboBox*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolComboBox_SuperMoveEvent(TextGrammarCheck__LanguageToolComboBox* self, QMoveEvent* event) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->setTextGrammarCheck__LanguageToolComboBox_MoveEvent_IsBase(true);
        vtextgrammarchecklanguagetoolcombobox->moveEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolComboBox*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolComboBox_OnMoveEvent(TextGrammarCheck__LanguageToolComboBox* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->setTextGrammarCheck__LanguageToolComboBox_MoveEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolComboBox::TextGrammarCheck__LanguageToolComboBox_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolComboBox_CloseEvent(TextGrammarCheck__LanguageToolComboBox* self, QCloseEvent* event) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->closeEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolComboBox*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolComboBox_SuperCloseEvent(TextGrammarCheck__LanguageToolComboBox* self, QCloseEvent* event) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->setTextGrammarCheck__LanguageToolComboBox_CloseEvent_IsBase(true);
        vtextgrammarchecklanguagetoolcombobox->closeEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolComboBox*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolComboBox_OnCloseEvent(TextGrammarCheck__LanguageToolComboBox* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->setTextGrammarCheck__LanguageToolComboBox_CloseEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolComboBox::TextGrammarCheck__LanguageToolComboBox_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolComboBox_TabletEvent(TextGrammarCheck__LanguageToolComboBox* self, QTabletEvent* event) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->tabletEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolComboBox*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolComboBox_SuperTabletEvent(TextGrammarCheck__LanguageToolComboBox* self, QTabletEvent* event) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->setTextGrammarCheck__LanguageToolComboBox_TabletEvent_IsBase(true);
        vtextgrammarchecklanguagetoolcombobox->tabletEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolComboBox*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolComboBox_OnTabletEvent(TextGrammarCheck__LanguageToolComboBox* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->setTextGrammarCheck__LanguageToolComboBox_TabletEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolComboBox::TextGrammarCheck__LanguageToolComboBox_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolComboBox_ActionEvent(TextGrammarCheck__LanguageToolComboBox* self, QActionEvent* event) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->actionEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolComboBox*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolComboBox_SuperActionEvent(TextGrammarCheck__LanguageToolComboBox* self, QActionEvent* event) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->setTextGrammarCheck__LanguageToolComboBox_ActionEvent_IsBase(true);
        vtextgrammarchecklanguagetoolcombobox->actionEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolComboBox*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolComboBox_OnActionEvent(TextGrammarCheck__LanguageToolComboBox* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->setTextGrammarCheck__LanguageToolComboBox_ActionEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolComboBox::TextGrammarCheck__LanguageToolComboBox_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolComboBox_DragEnterEvent(TextGrammarCheck__LanguageToolComboBox* self, QDragEnterEvent* event) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->dragEnterEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolComboBox*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolComboBox_SuperDragEnterEvent(TextGrammarCheck__LanguageToolComboBox* self, QDragEnterEvent* event) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->setTextGrammarCheck__LanguageToolComboBox_DragEnterEvent_IsBase(true);
        vtextgrammarchecklanguagetoolcombobox->dragEnterEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolComboBox*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolComboBox_OnDragEnterEvent(TextGrammarCheck__LanguageToolComboBox* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->setTextGrammarCheck__LanguageToolComboBox_DragEnterEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolComboBox::TextGrammarCheck__LanguageToolComboBox_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolComboBox_DragMoveEvent(TextGrammarCheck__LanguageToolComboBox* self, QDragMoveEvent* event) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->dragMoveEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolComboBox*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolComboBox_SuperDragMoveEvent(TextGrammarCheck__LanguageToolComboBox* self, QDragMoveEvent* event) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->setTextGrammarCheck__LanguageToolComboBox_DragMoveEvent_IsBase(true);
        vtextgrammarchecklanguagetoolcombobox->dragMoveEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolComboBox*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolComboBox_OnDragMoveEvent(TextGrammarCheck__LanguageToolComboBox* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->setTextGrammarCheck__LanguageToolComboBox_DragMoveEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolComboBox::TextGrammarCheck__LanguageToolComboBox_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolComboBox_DragLeaveEvent(TextGrammarCheck__LanguageToolComboBox* self, QDragLeaveEvent* event) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->dragLeaveEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolComboBox*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolComboBox_SuperDragLeaveEvent(TextGrammarCheck__LanguageToolComboBox* self, QDragLeaveEvent* event) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->setTextGrammarCheck__LanguageToolComboBox_DragLeaveEvent_IsBase(true);
        vtextgrammarchecklanguagetoolcombobox->dragLeaveEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolComboBox*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolComboBox_OnDragLeaveEvent(TextGrammarCheck__LanguageToolComboBox* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->setTextGrammarCheck__LanguageToolComboBox_DragLeaveEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolComboBox::TextGrammarCheck__LanguageToolComboBox_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolComboBox_DropEvent(TextGrammarCheck__LanguageToolComboBox* self, QDropEvent* event) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->dropEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolComboBox*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolComboBox_SuperDropEvent(TextGrammarCheck__LanguageToolComboBox* self, QDropEvent* event) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->setTextGrammarCheck__LanguageToolComboBox_DropEvent_IsBase(true);
        vtextgrammarchecklanguagetoolcombobox->dropEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolComboBox*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolComboBox_OnDropEvent(TextGrammarCheck__LanguageToolComboBox* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->setTextGrammarCheck__LanguageToolComboBox_DropEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolComboBox::TextGrammarCheck__LanguageToolComboBox_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextGrammarCheck__LanguageToolComboBox_NativeEvent(TextGrammarCheck__LanguageToolComboBox* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        return vtextgrammarchecklanguagetoolcombobox->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualTextGrammarCheckLanguageToolComboBox*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool TextGrammarCheck__LanguageToolComboBox_SuperNativeEvent(TextGrammarCheck__LanguageToolComboBox* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->setTextGrammarCheck__LanguageToolComboBox_NativeEvent_IsBase(true);
        return vtextgrammarchecklanguagetoolcombobox->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualTextGrammarCheckLanguageToolComboBox*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolComboBox_OnNativeEvent(TextGrammarCheck__LanguageToolComboBox* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->setTextGrammarCheck__LanguageToolComboBox_NativeEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolComboBox::TextGrammarCheck__LanguageToolComboBox_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int TextGrammarCheck__LanguageToolComboBox_Metric(const TextGrammarCheck__LanguageToolComboBox* self, int param1) {
    auto* vtextgrammarchecklanguagetoolcombobox = const_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolComboBox*>(self));
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        return vtextgrammarchecklanguagetoolcombobox->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualTextGrammarCheckLanguageToolComboBox*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int TextGrammarCheck__LanguageToolComboBox_SuperMetric(const TextGrammarCheck__LanguageToolComboBox* self, int param1) {
    auto* vtextgrammarchecklanguagetoolcombobox = const_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolComboBox*>(self));
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->setTextGrammarCheck__LanguageToolComboBox_Metric_IsBase(true);
        return vtextgrammarchecklanguagetoolcombobox->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualTextGrammarCheckLanguageToolComboBox*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolComboBox_OnMetric(const TextGrammarCheck__LanguageToolComboBox* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolcombobox = const_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolComboBox*>(self));
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->setTextGrammarCheck__LanguageToolComboBox_Metric_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolComboBox::TextGrammarCheck__LanguageToolComboBox_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolComboBox_InitPainter(const TextGrammarCheck__LanguageToolComboBox* self, QPainter* painter) {
    auto* vtextgrammarchecklanguagetoolcombobox = const_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolComboBox*>(self));
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->initPainter(painter);
    } else {
        ((VirtualTextGrammarCheckLanguageToolComboBox*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolComboBox_SuperInitPainter(const TextGrammarCheck__LanguageToolComboBox* self, QPainter* painter) {
    auto* vtextgrammarchecklanguagetoolcombobox = const_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolComboBox*>(self));
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->setTextGrammarCheck__LanguageToolComboBox_InitPainter_IsBase(true);
        vtextgrammarchecklanguagetoolcombobox->initPainter(painter);
    } else {
        ((VirtualTextGrammarCheckLanguageToolComboBox*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolComboBox_OnInitPainter(const TextGrammarCheck__LanguageToolComboBox* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolcombobox = const_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolComboBox*>(self));
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->setTextGrammarCheck__LanguageToolComboBox_InitPainter_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolComboBox::TextGrammarCheck__LanguageToolComboBox_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* TextGrammarCheck__LanguageToolComboBox_Redirected(const TextGrammarCheck__LanguageToolComboBox* self, QPoint* offset) {
    auto* vtextgrammarchecklanguagetoolcombobox = const_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolComboBox*>(self));
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        return vtextgrammarchecklanguagetoolcombobox->redirected(offset);
    } else {
        return ((VirtualTextGrammarCheckLanguageToolComboBox*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* TextGrammarCheck__LanguageToolComboBox_SuperRedirected(const TextGrammarCheck__LanguageToolComboBox* self, QPoint* offset) {
    auto* vtextgrammarchecklanguagetoolcombobox = const_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolComboBox*>(self));
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->setTextGrammarCheck__LanguageToolComboBox_Redirected_IsBase(true);
        return vtextgrammarchecklanguagetoolcombobox->redirected(offset);
    } else {
        return ((VirtualTextGrammarCheckLanguageToolComboBox*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolComboBox_OnRedirected(const TextGrammarCheck__LanguageToolComboBox* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolcombobox = const_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolComboBox*>(self));
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->setTextGrammarCheck__LanguageToolComboBox_Redirected_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolComboBox::TextGrammarCheck__LanguageToolComboBox_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* TextGrammarCheck__LanguageToolComboBox_SharedPainter(const TextGrammarCheck__LanguageToolComboBox* self) {
    auto* vtextgrammarchecklanguagetoolcombobox = const_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolComboBox*>(self));
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        return vtextgrammarchecklanguagetoolcombobox->sharedPainter();
    } else {
        return ((VirtualTextGrammarCheckLanguageToolComboBox*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* TextGrammarCheck__LanguageToolComboBox_SuperSharedPainter(const TextGrammarCheck__LanguageToolComboBox* self) {
    auto* vtextgrammarchecklanguagetoolcombobox = const_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolComboBox*>(self));
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->setTextGrammarCheck__LanguageToolComboBox_SharedPainter_IsBase(true);
        return vtextgrammarchecklanguagetoolcombobox->sharedPainter();
    } else {
        return ((VirtualTextGrammarCheckLanguageToolComboBox*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolComboBox_OnSharedPainter(const TextGrammarCheck__LanguageToolComboBox* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolcombobox = const_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolComboBox*>(self));
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->setTextGrammarCheck__LanguageToolComboBox_SharedPainter_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolComboBox::TextGrammarCheck__LanguageToolComboBox_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextGrammarCheck__LanguageToolComboBox_FocusNextPrevChild(TextGrammarCheck__LanguageToolComboBox* self, bool next) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        return vtextgrammarchecklanguagetoolcombobox->focusNextPrevChild(next);
    } else {
        return ((VirtualTextGrammarCheckLanguageToolComboBox*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool TextGrammarCheck__LanguageToolComboBox_SuperFocusNextPrevChild(TextGrammarCheck__LanguageToolComboBox* self, bool next) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->setTextGrammarCheck__LanguageToolComboBox_FocusNextPrevChild_IsBase(true);
        return vtextgrammarchecklanguagetoolcombobox->focusNextPrevChild(next);
    } else {
        return ((VirtualTextGrammarCheckLanguageToolComboBox*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolComboBox_OnFocusNextPrevChild(TextGrammarCheck__LanguageToolComboBox* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->setTextGrammarCheck__LanguageToolComboBox_FocusNextPrevChild_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolComboBox::TextGrammarCheck__LanguageToolComboBox_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextGrammarCheck__LanguageToolComboBox_EventFilter(TextGrammarCheck__LanguageToolComboBox* self, QObject* watched, QEvent* event) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        return vtextgrammarchecklanguagetoolcombobox->eventFilter(watched, event);
    } else {
        return self->TextGrammarCheck::LanguageToolComboBox::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool TextGrammarCheck__LanguageToolComboBox_SuperEventFilter(TextGrammarCheck__LanguageToolComboBox* self, QObject* watched, QEvent* event) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->setTextGrammarCheck__LanguageToolComboBox_EventFilter_IsBase(true);
        return vtextgrammarchecklanguagetoolcombobox->eventFilter(watched, event);
    } else {
        return self->TextGrammarCheck::LanguageToolComboBox::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolComboBox_OnEventFilter(TextGrammarCheck__LanguageToolComboBox* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->setTextGrammarCheck__LanguageToolComboBox_EventFilter_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolComboBox::TextGrammarCheck__LanguageToolComboBox_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolComboBox_TimerEvent(TextGrammarCheck__LanguageToolComboBox* self, QTimerEvent* event) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->timerEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolComboBox*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolComboBox_SuperTimerEvent(TextGrammarCheck__LanguageToolComboBox* self, QTimerEvent* event) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->setTextGrammarCheck__LanguageToolComboBox_TimerEvent_IsBase(true);
        vtextgrammarchecklanguagetoolcombobox->timerEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolComboBox*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolComboBox_OnTimerEvent(TextGrammarCheck__LanguageToolComboBox* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->setTextGrammarCheck__LanguageToolComboBox_TimerEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolComboBox::TextGrammarCheck__LanguageToolComboBox_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolComboBox_ChildEvent(TextGrammarCheck__LanguageToolComboBox* self, QChildEvent* event) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->childEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolComboBox*)self)->childEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolComboBox_SuperChildEvent(TextGrammarCheck__LanguageToolComboBox* self, QChildEvent* event) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->setTextGrammarCheck__LanguageToolComboBox_ChildEvent_IsBase(true);
        vtextgrammarchecklanguagetoolcombobox->childEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolComboBox*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolComboBox_OnChildEvent(TextGrammarCheck__LanguageToolComboBox* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->setTextGrammarCheck__LanguageToolComboBox_ChildEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolComboBox::TextGrammarCheck__LanguageToolComboBox_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolComboBox_CustomEvent(TextGrammarCheck__LanguageToolComboBox* self, QEvent* event) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->customEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolComboBox*)self)->customEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolComboBox_SuperCustomEvent(TextGrammarCheck__LanguageToolComboBox* self, QEvent* event) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->setTextGrammarCheck__LanguageToolComboBox_CustomEvent_IsBase(true);
        vtextgrammarchecklanguagetoolcombobox->customEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolComboBox*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolComboBox_OnCustomEvent(TextGrammarCheck__LanguageToolComboBox* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->setTextGrammarCheck__LanguageToolComboBox_CustomEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolComboBox::TextGrammarCheck__LanguageToolComboBox_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolComboBox_ConnectNotify(TextGrammarCheck__LanguageToolComboBox* self, const QMetaMethod* signal) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->connectNotify(*signal);
    } else {
        ((VirtualTextGrammarCheckLanguageToolComboBox*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolComboBox_SuperConnectNotify(TextGrammarCheck__LanguageToolComboBox* self, const QMetaMethod* signal) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->setTextGrammarCheck__LanguageToolComboBox_ConnectNotify_IsBase(true);
        vtextgrammarchecklanguagetoolcombobox->connectNotify(*signal);
    } else {
        ((VirtualTextGrammarCheckLanguageToolComboBox*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolComboBox_OnConnectNotify(TextGrammarCheck__LanguageToolComboBox* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->setTextGrammarCheck__LanguageToolComboBox_ConnectNotify_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolComboBox::TextGrammarCheck__LanguageToolComboBox_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolComboBox_DisconnectNotify(TextGrammarCheck__LanguageToolComboBox* self, const QMetaMethod* signal) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->disconnectNotify(*signal);
    } else {
        ((VirtualTextGrammarCheckLanguageToolComboBox*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolComboBox_SuperDisconnectNotify(TextGrammarCheck__LanguageToolComboBox* self, const QMetaMethod* signal) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->setTextGrammarCheck__LanguageToolComboBox_DisconnectNotify_IsBase(true);
        vtextgrammarchecklanguagetoolcombobox->disconnectNotify(*signal);
    } else {
        ((VirtualTextGrammarCheckLanguageToolComboBox*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolComboBox_OnDisconnectNotify(TextGrammarCheck__LanguageToolComboBox* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->setTextGrammarCheck__LanguageToolComboBox_DisconnectNotify_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolComboBox::TextGrammarCheck__LanguageToolComboBox_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolComboBox_UpdateMicroFocus(TextGrammarCheck__LanguageToolComboBox* self) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->updateMicroFocus();
    } else {
        ((VirtualTextGrammarCheckLanguageToolComboBox*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolComboBox_SuperUpdateMicroFocus(TextGrammarCheck__LanguageToolComboBox* self) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->setTextGrammarCheck__LanguageToolComboBox_UpdateMicroFocus_IsBase(true);
        vtextgrammarchecklanguagetoolcombobox->updateMicroFocus();
    } else {
        ((VirtualTextGrammarCheckLanguageToolComboBox*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolComboBox_OnUpdateMicroFocus(TextGrammarCheck__LanguageToolComboBox* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->setTextGrammarCheck__LanguageToolComboBox_UpdateMicroFocus_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolComboBox::TextGrammarCheck__LanguageToolComboBox_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolComboBox_Create(TextGrammarCheck__LanguageToolComboBox* self) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->create();
    } else {
        ((VirtualTextGrammarCheckLanguageToolComboBox*)self)->create();
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolComboBox_SuperCreate(TextGrammarCheck__LanguageToolComboBox* self) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->setTextGrammarCheck__LanguageToolComboBox_Create_IsBase(true);
        vtextgrammarchecklanguagetoolcombobox->create();
    } else {
        ((VirtualTextGrammarCheckLanguageToolComboBox*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolComboBox_OnCreate(TextGrammarCheck__LanguageToolComboBox* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->setTextGrammarCheck__LanguageToolComboBox_Create_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolComboBox::TextGrammarCheck__LanguageToolComboBox_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolComboBox_Destroy(TextGrammarCheck__LanguageToolComboBox* self) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->destroy();
    } else {
        ((VirtualTextGrammarCheckLanguageToolComboBox*)self)->destroy();
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolComboBox_SuperDestroy(TextGrammarCheck__LanguageToolComboBox* self) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->setTextGrammarCheck__LanguageToolComboBox_Destroy_IsBase(true);
        vtextgrammarchecklanguagetoolcombobox->destroy();
    } else {
        ((VirtualTextGrammarCheckLanguageToolComboBox*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolComboBox_OnDestroy(TextGrammarCheck__LanguageToolComboBox* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->setTextGrammarCheck__LanguageToolComboBox_Destroy_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolComboBox::TextGrammarCheck__LanguageToolComboBox_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextGrammarCheck__LanguageToolComboBox_FocusNextChild(TextGrammarCheck__LanguageToolComboBox* self) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        return vtextgrammarchecklanguagetoolcombobox->focusNextChild();
    } else {
        return ((VirtualTextGrammarCheckLanguageToolComboBox*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool TextGrammarCheck__LanguageToolComboBox_SuperFocusNextChild(TextGrammarCheck__LanguageToolComboBox* self) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->setTextGrammarCheck__LanguageToolComboBox_FocusNextChild_IsBase(true);
        return vtextgrammarchecklanguagetoolcombobox->focusNextChild();
    } else {
        return ((VirtualTextGrammarCheckLanguageToolComboBox*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolComboBox_OnFocusNextChild(TextGrammarCheck__LanguageToolComboBox* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->setTextGrammarCheck__LanguageToolComboBox_FocusNextChild_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolComboBox::TextGrammarCheck__LanguageToolComboBox_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextGrammarCheck__LanguageToolComboBox_FocusPreviousChild(TextGrammarCheck__LanguageToolComboBox* self) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        return vtextgrammarchecklanguagetoolcombobox->focusPreviousChild();
    } else {
        return ((VirtualTextGrammarCheckLanguageToolComboBox*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool TextGrammarCheck__LanguageToolComboBox_SuperFocusPreviousChild(TextGrammarCheck__LanguageToolComboBox* self) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->setTextGrammarCheck__LanguageToolComboBox_FocusPreviousChild_IsBase(true);
        return vtextgrammarchecklanguagetoolcombobox->focusPreviousChild();
    } else {
        return ((VirtualTextGrammarCheckLanguageToolComboBox*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolComboBox_OnFocusPreviousChild(TextGrammarCheck__LanguageToolComboBox* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->setTextGrammarCheck__LanguageToolComboBox_FocusPreviousChild_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolComboBox::TextGrammarCheck__LanguageToolComboBox_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* TextGrammarCheck__LanguageToolComboBox_Sender(const TextGrammarCheck__LanguageToolComboBox* self) {
    auto* vtextgrammarchecklanguagetoolcombobox = const_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolComboBox*>(self));
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        return vtextgrammarchecklanguagetoolcombobox->sender();
    } else {
        return ((VirtualTextGrammarCheckLanguageToolComboBox*)self)->sender();
    }
}

// Base class handler implementation
QObject* TextGrammarCheck__LanguageToolComboBox_SuperSender(const TextGrammarCheck__LanguageToolComboBox* self) {
    auto* vtextgrammarchecklanguagetoolcombobox = const_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolComboBox*>(self));
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->setTextGrammarCheck__LanguageToolComboBox_Sender_IsBase(true);
        return vtextgrammarchecklanguagetoolcombobox->sender();
    } else {
        return ((VirtualTextGrammarCheckLanguageToolComboBox*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolComboBox_OnSender(const TextGrammarCheck__LanguageToolComboBox* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolcombobox = const_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolComboBox*>(self));
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->setTextGrammarCheck__LanguageToolComboBox_Sender_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolComboBox::TextGrammarCheck__LanguageToolComboBox_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int TextGrammarCheck__LanguageToolComboBox_SenderSignalIndex(const TextGrammarCheck__LanguageToolComboBox* self) {
    auto* vtextgrammarchecklanguagetoolcombobox = const_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolComboBox*>(self));
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        return vtextgrammarchecklanguagetoolcombobox->senderSignalIndex();
    } else {
        return ((VirtualTextGrammarCheckLanguageToolComboBox*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int TextGrammarCheck__LanguageToolComboBox_SuperSenderSignalIndex(const TextGrammarCheck__LanguageToolComboBox* self) {
    auto* vtextgrammarchecklanguagetoolcombobox = const_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolComboBox*>(self));
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->setTextGrammarCheck__LanguageToolComboBox_SenderSignalIndex_IsBase(true);
        return vtextgrammarchecklanguagetoolcombobox->senderSignalIndex();
    } else {
        return ((VirtualTextGrammarCheckLanguageToolComboBox*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolComboBox_OnSenderSignalIndex(const TextGrammarCheck__LanguageToolComboBox* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolcombobox = const_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolComboBox*>(self));
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->setTextGrammarCheck__LanguageToolComboBox_SenderSignalIndex_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolComboBox::TextGrammarCheck__LanguageToolComboBox_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int TextGrammarCheck__LanguageToolComboBox_Receivers(const TextGrammarCheck__LanguageToolComboBox* self, const char* signal) {
    auto* vtextgrammarchecklanguagetoolcombobox = const_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolComboBox*>(self));
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        return vtextgrammarchecklanguagetoolcombobox->receivers(signal);
    } else {
        return ((VirtualTextGrammarCheckLanguageToolComboBox*)self)->receivers(signal);
    }
}

// Base class handler implementation
int TextGrammarCheck__LanguageToolComboBox_SuperReceivers(const TextGrammarCheck__LanguageToolComboBox* self, const char* signal) {
    auto* vtextgrammarchecklanguagetoolcombobox = const_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolComboBox*>(self));
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->setTextGrammarCheck__LanguageToolComboBox_Receivers_IsBase(true);
        return vtextgrammarchecklanguagetoolcombobox->receivers(signal);
    } else {
        return ((VirtualTextGrammarCheckLanguageToolComboBox*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolComboBox_OnReceivers(const TextGrammarCheck__LanguageToolComboBox* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolcombobox = const_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolComboBox*>(self));
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->setTextGrammarCheck__LanguageToolComboBox_Receivers_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolComboBox::TextGrammarCheck__LanguageToolComboBox_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextGrammarCheck__LanguageToolComboBox_IsSignalConnected(const TextGrammarCheck__LanguageToolComboBox* self, const QMetaMethod* signal) {
    auto* vtextgrammarchecklanguagetoolcombobox = const_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolComboBox*>(self));
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        return vtextgrammarchecklanguagetoolcombobox->isSignalConnected(*signal);
    } else {
        return ((VirtualTextGrammarCheckLanguageToolComboBox*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool TextGrammarCheck__LanguageToolComboBox_SuperIsSignalConnected(const TextGrammarCheck__LanguageToolComboBox* self, const QMetaMethod* signal) {
    auto* vtextgrammarchecklanguagetoolcombobox = const_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolComboBox*>(self));
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->setTextGrammarCheck__LanguageToolComboBox_IsSignalConnected_IsBase(true);
        return vtextgrammarchecklanguagetoolcombobox->isSignalConnected(*signal);
    } else {
        return ((VirtualTextGrammarCheckLanguageToolComboBox*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolComboBox_OnIsSignalConnected(const TextGrammarCheck__LanguageToolComboBox* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolcombobox = const_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolComboBox*>(self));
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->setTextGrammarCheck__LanguageToolComboBox_IsSignalConnected_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolComboBox::TextGrammarCheck__LanguageToolComboBox_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double TextGrammarCheck__LanguageToolComboBox_GetDecodedMetricF(const TextGrammarCheck__LanguageToolComboBox* self, int metricA, int metricB) {
    auto* vtextgrammarchecklanguagetoolcombobox = const_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolComboBox*>(self));
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        return vtextgrammarchecklanguagetoolcombobox->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualTextGrammarCheckLanguageToolComboBox*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double TextGrammarCheck__LanguageToolComboBox_SuperGetDecodedMetricF(const TextGrammarCheck__LanguageToolComboBox* self, int metricA, int metricB) {
    auto* vtextgrammarchecklanguagetoolcombobox = const_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolComboBox*>(self));
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->setTextGrammarCheck__LanguageToolComboBox_GetDecodedMetricF_IsBase(true);
        return vtextgrammarchecklanguagetoolcombobox->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualTextGrammarCheckLanguageToolComboBox*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolComboBox_OnGetDecodedMetricF(const TextGrammarCheck__LanguageToolComboBox* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolcombobox = const_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolComboBox*>(self));
    if (vtextgrammarchecklanguagetoolcombobox && vtextgrammarchecklanguagetoolcombobox->isVirtualTextGrammarCheckLanguageToolComboBox) {
        vtextgrammarchecklanguagetoolcombobox->setTextGrammarCheck__LanguageToolComboBox_GetDecodedMetricF_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolComboBox::TextGrammarCheck__LanguageToolComboBox_GetDecodedMetricF_Callback>(slot));
    }
}

void TextGrammarCheck__LanguageToolComboBox_Delete(TextGrammarCheck__LanguageToolComboBox* self) {
    delete self;
}
