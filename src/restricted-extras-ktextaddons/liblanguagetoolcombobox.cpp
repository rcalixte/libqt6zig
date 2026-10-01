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
    return (QMetaObject*)self->metaObject();
}

void* TextGrammarCheck__LanguageToolComboBox_Metacast(TextGrammarCheck__LanguageToolComboBox* self, const char* param1) {
    return self->qt_metacast(param1);
}

int TextGrammarCheck__LanguageToolComboBox_Metacall(TextGrammarCheck__LanguageToolComboBox* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string TextGrammarCheck__LanguageToolComboBox_Tr(const char* s) {
    auto _ret = TextGrammarCheck::LanguageToolComboBox::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void TextGrammarCheck__LanguageToolComboBox_SetLanguage(TextGrammarCheck__LanguageToolComboBox* self, const libqt_string str) {
    QString str_QString = QString::fromUtf8(str.data, str.len);
    self->setLanguage(str_QString);
}

libqt_string TextGrammarCheck__LanguageToolComboBox_Language(const TextGrammarCheck__LanguageToolComboBox* self) {
    auto _ret = self->language();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string TextGrammarCheck__LanguageToolComboBox_Tr2(const char* s, const char* c) {
    auto _ret = TextGrammarCheck::LanguageToolComboBox::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string TextGrammarCheck__LanguageToolComboBox_Tr3(const char* s, const char* c, int n) {
    auto _ret = TextGrammarCheck::LanguageToolComboBox::tr(s, c, static_cast<int>(n));
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
    return (QMetaObject*)self->TextGrammarCheck::LanguageToolComboBox::metaObject();
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolComboBox_OnMetaObject(TextGrammarCheck__LanguageToolComboBox* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolcombobox = const_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolComboBox*>(self)))
        vtextgrammarchecklanguagetoolcombobox->textgrammarcheck__languagetoolcombobox_metaobject_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolComboBox::TextGrammarCheck__LanguageToolComboBox_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* TextGrammarCheck__LanguageToolComboBox_SuperMetacast(TextGrammarCheck__LanguageToolComboBox* self, const char* param1) {
    return self->TextGrammarCheck::LanguageToolComboBox::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolComboBox_OnMetacast(TextGrammarCheck__LanguageToolComboBox* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self))
        vtextgrammarchecklanguagetoolcombobox->textgrammarcheck__languagetoolcombobox_metacast_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolComboBox::TextGrammarCheck__LanguageToolComboBox_Metacast_Callback>(slot);
}

// Base class handler implementation
int TextGrammarCheck__LanguageToolComboBox_SuperMetacall(TextGrammarCheck__LanguageToolComboBox* self, int param1, int param2, void** param3) {
    return self->TextGrammarCheck::LanguageToolComboBox::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolComboBox_OnMetacall(TextGrammarCheck__LanguageToolComboBox* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self))
        vtextgrammarchecklanguagetoolcombobox->textgrammarcheck__languagetoolcombobox_metacall_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolComboBox::TextGrammarCheck__LanguageToolComboBox_Metacall_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolComboBox_SetModel(TextGrammarCheck__LanguageToolComboBox* self, QAbstractItemModel* model) {
    self->setModel(model);
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolComboBox_SuperSetModel(TextGrammarCheck__LanguageToolComboBox* self, QAbstractItemModel* model) {
    self->TextGrammarCheck::LanguageToolComboBox::setModel(model);
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolComboBox_OnSetModel(TextGrammarCheck__LanguageToolComboBox* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self))
        vtextgrammarchecklanguagetoolcombobox->textgrammarcheck__languagetoolcombobox_setmodel_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolComboBox::TextGrammarCheck__LanguageToolComboBox_SetModel_Callback>(slot);
}

// Derived class handler implementation
QSize* TextGrammarCheck__LanguageToolComboBox_SizeHint(const TextGrammarCheck__LanguageToolComboBox* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* TextGrammarCheck__LanguageToolComboBox_SuperSizeHint(const TextGrammarCheck__LanguageToolComboBox* self) {
    return new QSize(self->TextGrammarCheck::LanguageToolComboBox::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolComboBox_OnSizeHint(TextGrammarCheck__LanguageToolComboBox* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolcombobox = const_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolComboBox*>(self)))
        vtextgrammarchecklanguagetoolcombobox->textgrammarcheck__languagetoolcombobox_sizehint_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolComboBox::TextGrammarCheck__LanguageToolComboBox_SizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* TextGrammarCheck__LanguageToolComboBox_MinimumSizeHint(const TextGrammarCheck__LanguageToolComboBox* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* TextGrammarCheck__LanguageToolComboBox_SuperMinimumSizeHint(const TextGrammarCheck__LanguageToolComboBox* self) {
    return new QSize(self->TextGrammarCheck::LanguageToolComboBox::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolComboBox_OnMinimumSizeHint(TextGrammarCheck__LanguageToolComboBox* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolcombobox = const_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolComboBox*>(self)))
        vtextgrammarchecklanguagetoolcombobox->textgrammarcheck__languagetoolcombobox_minimumsizehint_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolComboBox::TextGrammarCheck__LanguageToolComboBox_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolComboBox_ShowPopup(TextGrammarCheck__LanguageToolComboBox* self) {
    self->showPopup();
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolComboBox_SuperShowPopup(TextGrammarCheck__LanguageToolComboBox* self) {
    self->TextGrammarCheck::LanguageToolComboBox::showPopup();
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolComboBox_OnShowPopup(TextGrammarCheck__LanguageToolComboBox* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self))
        vtextgrammarchecklanguagetoolcombobox->textgrammarcheck__languagetoolcombobox_showpopup_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolComboBox::TextGrammarCheck__LanguageToolComboBox_ShowPopup_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolComboBox_HidePopup(TextGrammarCheck__LanguageToolComboBox* self) {
    self->hidePopup();
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolComboBox_SuperHidePopup(TextGrammarCheck__LanguageToolComboBox* self) {
    self->TextGrammarCheck::LanguageToolComboBox::hidePopup();
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolComboBox_OnHidePopup(TextGrammarCheck__LanguageToolComboBox* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self))
        vtextgrammarchecklanguagetoolcombobox->textgrammarcheck__languagetoolcombobox_hidepopup_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolComboBox::TextGrammarCheck__LanguageToolComboBox_HidePopup_Callback>(slot);
}

// Derived class handler implementation
bool TextGrammarCheck__LanguageToolComboBox_Event(TextGrammarCheck__LanguageToolComboBox* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool TextGrammarCheck__LanguageToolComboBox_SuperEvent(TextGrammarCheck__LanguageToolComboBox* self, QEvent* event) {
    return self->TextGrammarCheck::LanguageToolComboBox::event(event);
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolComboBox_OnEvent(TextGrammarCheck__LanguageToolComboBox* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self))
        vtextgrammarchecklanguagetoolcombobox->textgrammarcheck__languagetoolcombobox_event_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolComboBox::TextGrammarCheck__LanguageToolComboBox_Event_Callback>(slot);
}

// Derived class handler implementation
QVariant* TextGrammarCheck__LanguageToolComboBox_InputMethodQuery(const TextGrammarCheck__LanguageToolComboBox* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* TextGrammarCheck__LanguageToolComboBox_SuperInputMethodQuery(const TextGrammarCheck__LanguageToolComboBox* self, int param1) {
    return new QVariant(self->TextGrammarCheck::LanguageToolComboBox::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolComboBox_OnInputMethodQuery(TextGrammarCheck__LanguageToolComboBox* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolcombobox = const_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolComboBox*>(self)))
        vtextgrammarchecklanguagetoolcombobox->textgrammarcheck__languagetoolcombobox_inputmethodquery_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolComboBox::TextGrammarCheck__LanguageToolComboBox_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolComboBox_FocusInEvent(TextGrammarCheck__LanguageToolComboBox* self, QFocusEvent* e) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox) {
        vtextgrammarchecklanguagetoolcombobox->focusInEvent(e);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolComboBox::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolComboBox_SuperFocusInEvent(TextGrammarCheck__LanguageToolComboBox* self, QFocusEvent* e) {
    if (auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self)) {
        vtextgrammarchecklanguagetoolcombobox->TextGrammarCheck::LanguageToolComboBox::focusInEvent(e);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolComboBox::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolComboBox_OnFocusInEvent(TextGrammarCheck__LanguageToolComboBox* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self))
        vtextgrammarchecklanguagetoolcombobox->textgrammarcheck__languagetoolcombobox_focusinevent_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolComboBox::TextGrammarCheck__LanguageToolComboBox_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolComboBox_FocusOutEvent(TextGrammarCheck__LanguageToolComboBox* self, QFocusEvent* e) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox) {
        vtextgrammarchecklanguagetoolcombobox->focusOutEvent(e);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolComboBox::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolComboBox_SuperFocusOutEvent(TextGrammarCheck__LanguageToolComboBox* self, QFocusEvent* e) {
    if (auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self)) {
        vtextgrammarchecklanguagetoolcombobox->TextGrammarCheck::LanguageToolComboBox::focusOutEvent(e);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolComboBox::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolComboBox_OnFocusOutEvent(TextGrammarCheck__LanguageToolComboBox* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self))
        vtextgrammarchecklanguagetoolcombobox->textgrammarcheck__languagetoolcombobox_focusoutevent_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolComboBox::TextGrammarCheck__LanguageToolComboBox_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolComboBox_ChangeEvent(TextGrammarCheck__LanguageToolComboBox* self, QEvent* e) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox) {
        vtextgrammarchecklanguagetoolcombobox->changeEvent(e);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolComboBox::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolComboBox_SuperChangeEvent(TextGrammarCheck__LanguageToolComboBox* self, QEvent* e) {
    if (auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self)) {
        vtextgrammarchecklanguagetoolcombobox->TextGrammarCheck::LanguageToolComboBox::changeEvent(e);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolComboBox::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolComboBox_OnChangeEvent(TextGrammarCheck__LanguageToolComboBox* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self))
        vtextgrammarchecklanguagetoolcombobox->textgrammarcheck__languagetoolcombobox_changeevent_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolComboBox::TextGrammarCheck__LanguageToolComboBox_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolComboBox_ResizeEvent(TextGrammarCheck__LanguageToolComboBox* self, QResizeEvent* e) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox) {
        vtextgrammarchecklanguagetoolcombobox->resizeEvent(e);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolComboBox::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolComboBox_SuperResizeEvent(TextGrammarCheck__LanguageToolComboBox* self, QResizeEvent* e) {
    if (auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self)) {
        vtextgrammarchecklanguagetoolcombobox->TextGrammarCheck::LanguageToolComboBox::resizeEvent(e);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolComboBox::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolComboBox_OnResizeEvent(TextGrammarCheck__LanguageToolComboBox* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self))
        vtextgrammarchecklanguagetoolcombobox->textgrammarcheck__languagetoolcombobox_resizeevent_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolComboBox::TextGrammarCheck__LanguageToolComboBox_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolComboBox_PaintEvent(TextGrammarCheck__LanguageToolComboBox* self, QPaintEvent* e) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox) {
        vtextgrammarchecklanguagetoolcombobox->paintEvent(e);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolComboBox::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolComboBox_SuperPaintEvent(TextGrammarCheck__LanguageToolComboBox* self, QPaintEvent* e) {
    if (auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self)) {
        vtextgrammarchecklanguagetoolcombobox->TextGrammarCheck::LanguageToolComboBox::paintEvent(e);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolComboBox::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolComboBox_OnPaintEvent(TextGrammarCheck__LanguageToolComboBox* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self))
        vtextgrammarchecklanguagetoolcombobox->textgrammarcheck__languagetoolcombobox_paintevent_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolComboBox::TextGrammarCheck__LanguageToolComboBox_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolComboBox_ShowEvent(TextGrammarCheck__LanguageToolComboBox* self, QShowEvent* e) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox) {
        vtextgrammarchecklanguagetoolcombobox->showEvent(e);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolComboBox::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolComboBox_SuperShowEvent(TextGrammarCheck__LanguageToolComboBox* self, QShowEvent* e) {
    if (auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self)) {
        vtextgrammarchecklanguagetoolcombobox->TextGrammarCheck::LanguageToolComboBox::showEvent(e);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolComboBox::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolComboBox_OnShowEvent(TextGrammarCheck__LanguageToolComboBox* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self))
        vtextgrammarchecklanguagetoolcombobox->textgrammarcheck__languagetoolcombobox_showevent_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolComboBox::TextGrammarCheck__LanguageToolComboBox_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolComboBox_HideEvent(TextGrammarCheck__LanguageToolComboBox* self, QHideEvent* e) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox) {
        vtextgrammarchecklanguagetoolcombobox->hideEvent(e);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolComboBox::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolComboBox_SuperHideEvent(TextGrammarCheck__LanguageToolComboBox* self, QHideEvent* e) {
    if (auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self)) {
        vtextgrammarchecklanguagetoolcombobox->TextGrammarCheck::LanguageToolComboBox::hideEvent(e);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolComboBox::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolComboBox_OnHideEvent(TextGrammarCheck__LanguageToolComboBox* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self))
        vtextgrammarchecklanguagetoolcombobox->textgrammarcheck__languagetoolcombobox_hideevent_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolComboBox::TextGrammarCheck__LanguageToolComboBox_HideEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolComboBox_MousePressEvent(TextGrammarCheck__LanguageToolComboBox* self, QMouseEvent* e) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox) {
        vtextgrammarchecklanguagetoolcombobox->mousePressEvent(e);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolComboBox::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolComboBox_SuperMousePressEvent(TextGrammarCheck__LanguageToolComboBox* self, QMouseEvent* e) {
    if (auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self)) {
        vtextgrammarchecklanguagetoolcombobox->TextGrammarCheck::LanguageToolComboBox::mousePressEvent(e);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolComboBox::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolComboBox_OnMousePressEvent(TextGrammarCheck__LanguageToolComboBox* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self))
        vtextgrammarchecklanguagetoolcombobox->textgrammarcheck__languagetoolcombobox_mousepressevent_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolComboBox::TextGrammarCheck__LanguageToolComboBox_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolComboBox_MouseReleaseEvent(TextGrammarCheck__LanguageToolComboBox* self, QMouseEvent* e) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox) {
        vtextgrammarchecklanguagetoolcombobox->mouseReleaseEvent(e);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolComboBox::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolComboBox_SuperMouseReleaseEvent(TextGrammarCheck__LanguageToolComboBox* self, QMouseEvent* e) {
    if (auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self)) {
        vtextgrammarchecklanguagetoolcombobox->TextGrammarCheck::LanguageToolComboBox::mouseReleaseEvent(e);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolComboBox::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolComboBox_OnMouseReleaseEvent(TextGrammarCheck__LanguageToolComboBox* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self))
        vtextgrammarchecklanguagetoolcombobox->textgrammarcheck__languagetoolcombobox_mousereleaseevent_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolComboBox::TextGrammarCheck__LanguageToolComboBox_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolComboBox_KeyPressEvent(TextGrammarCheck__LanguageToolComboBox* self, QKeyEvent* e) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox) {
        vtextgrammarchecklanguagetoolcombobox->keyPressEvent(e);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolComboBox::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolComboBox_SuperKeyPressEvent(TextGrammarCheck__LanguageToolComboBox* self, QKeyEvent* e) {
    if (auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self)) {
        vtextgrammarchecklanguagetoolcombobox->TextGrammarCheck::LanguageToolComboBox::keyPressEvent(e);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolComboBox::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolComboBox_OnKeyPressEvent(TextGrammarCheck__LanguageToolComboBox* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self))
        vtextgrammarchecklanguagetoolcombobox->textgrammarcheck__languagetoolcombobox_keypressevent_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolComboBox::TextGrammarCheck__LanguageToolComboBox_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolComboBox_KeyReleaseEvent(TextGrammarCheck__LanguageToolComboBox* self, QKeyEvent* e) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox) {
        vtextgrammarchecklanguagetoolcombobox->keyReleaseEvent(e);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolComboBox::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolComboBox_SuperKeyReleaseEvent(TextGrammarCheck__LanguageToolComboBox* self, QKeyEvent* e) {
    if (auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self)) {
        vtextgrammarchecklanguagetoolcombobox->TextGrammarCheck::LanguageToolComboBox::keyReleaseEvent(e);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolComboBox::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolComboBox_OnKeyReleaseEvent(TextGrammarCheck__LanguageToolComboBox* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self))
        vtextgrammarchecklanguagetoolcombobox->textgrammarcheck__languagetoolcombobox_keyreleaseevent_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolComboBox::TextGrammarCheck__LanguageToolComboBox_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolComboBox_WheelEvent(TextGrammarCheck__LanguageToolComboBox* self, QWheelEvent* e) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox) {
        vtextgrammarchecklanguagetoolcombobox->wheelEvent(e);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolComboBox::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolComboBox_SuperWheelEvent(TextGrammarCheck__LanguageToolComboBox* self, QWheelEvent* e) {
    if (auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self)) {
        vtextgrammarchecklanguagetoolcombobox->TextGrammarCheck::LanguageToolComboBox::wheelEvent(e);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolComboBox::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolComboBox_OnWheelEvent(TextGrammarCheck__LanguageToolComboBox* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self))
        vtextgrammarchecklanguagetoolcombobox->textgrammarcheck__languagetoolcombobox_wheelevent_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolComboBox::TextGrammarCheck__LanguageToolComboBox_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolComboBox_ContextMenuEvent(TextGrammarCheck__LanguageToolComboBox* self, QContextMenuEvent* e) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox) {
        vtextgrammarchecklanguagetoolcombobox->contextMenuEvent(e);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolComboBox::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolComboBox_SuperContextMenuEvent(TextGrammarCheck__LanguageToolComboBox* self, QContextMenuEvent* e) {
    if (auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self)) {
        vtextgrammarchecklanguagetoolcombobox->TextGrammarCheck::LanguageToolComboBox::contextMenuEvent(e);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolComboBox::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolComboBox_OnContextMenuEvent(TextGrammarCheck__LanguageToolComboBox* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self))
        vtextgrammarchecklanguagetoolcombobox->textgrammarcheck__languagetoolcombobox_contextmenuevent_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolComboBox::TextGrammarCheck__LanguageToolComboBox_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolComboBox_InputMethodEvent(TextGrammarCheck__LanguageToolComboBox* self, QInputMethodEvent* param1) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox) {
        vtextgrammarchecklanguagetoolcombobox->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolComboBox::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolComboBox_SuperInputMethodEvent(TextGrammarCheck__LanguageToolComboBox* self, QInputMethodEvent* param1) {
    if (auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self)) {
        vtextgrammarchecklanguagetoolcombobox->TextGrammarCheck::LanguageToolComboBox::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolComboBox::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolComboBox_OnInputMethodEvent(TextGrammarCheck__LanguageToolComboBox* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self))
        vtextgrammarchecklanguagetoolcombobox->textgrammarcheck__languagetoolcombobox_inputmethodevent_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolComboBox::TextGrammarCheck__LanguageToolComboBox_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolComboBox_InitStyleOption(const TextGrammarCheck__LanguageToolComboBox* self, QStyleOptionComboBox* option) {
    auto* vtextgrammarchecklanguagetoolcombobox = const_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolComboBox*>(self));
    if (vtextgrammarchecklanguagetoolcombobox) {
        vtextgrammarchecklanguagetoolcombobox->initStyleOption(option);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolComboBox::initStyleOption called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolComboBox_SuperInitStyleOption(const TextGrammarCheck__LanguageToolComboBox* self, QStyleOptionComboBox* option) {
    if (auto* vtextgrammarchecklanguagetoolcombobox = const_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolComboBox*>(self))) {
        vtextgrammarchecklanguagetoolcombobox->TextGrammarCheck::LanguageToolComboBox::initStyleOption(option);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolComboBox::initStyleOption called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolComboBox_OnInitStyleOption(TextGrammarCheck__LanguageToolComboBox* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolcombobox = const_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolComboBox*>(self)))
        vtextgrammarchecklanguagetoolcombobox->textgrammarcheck__languagetoolcombobox_initstyleoption_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolComboBox::TextGrammarCheck__LanguageToolComboBox_InitStyleOption_Callback>(slot);
}

// Derived class handler implementation
int TextGrammarCheck__LanguageToolComboBox_DevType(const TextGrammarCheck__LanguageToolComboBox* self) {
    return self->devType();
}

// Base class handler implementation
int TextGrammarCheck__LanguageToolComboBox_SuperDevType(const TextGrammarCheck__LanguageToolComboBox* self) {
    return self->TextGrammarCheck::LanguageToolComboBox::devType();
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolComboBox_OnDevType(TextGrammarCheck__LanguageToolComboBox* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolcombobox = const_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolComboBox*>(self)))
        vtextgrammarchecklanguagetoolcombobox->textgrammarcheck__languagetoolcombobox_devtype_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolComboBox::TextGrammarCheck__LanguageToolComboBox_DevType_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolComboBox_SetVisible(TextGrammarCheck__LanguageToolComboBox* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolComboBox_SuperSetVisible(TextGrammarCheck__LanguageToolComboBox* self, bool visible) {
    self->TextGrammarCheck::LanguageToolComboBox::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolComboBox_OnSetVisible(TextGrammarCheck__LanguageToolComboBox* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self))
        vtextgrammarchecklanguagetoolcombobox->textgrammarcheck__languagetoolcombobox_setvisible_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolComboBox::TextGrammarCheck__LanguageToolComboBox_SetVisible_Callback>(slot);
}

// Derived class handler implementation
int TextGrammarCheck__LanguageToolComboBox_HeightForWidth(const TextGrammarCheck__LanguageToolComboBox* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int TextGrammarCheck__LanguageToolComboBox_SuperHeightForWidth(const TextGrammarCheck__LanguageToolComboBox* self, int param1) {
    return self->TextGrammarCheck::LanguageToolComboBox::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolComboBox_OnHeightForWidth(TextGrammarCheck__LanguageToolComboBox* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolcombobox = const_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolComboBox*>(self)))
        vtextgrammarchecklanguagetoolcombobox->textgrammarcheck__languagetoolcombobox_heightforwidth_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolComboBox::TextGrammarCheck__LanguageToolComboBox_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool TextGrammarCheck__LanguageToolComboBox_HasHeightForWidth(const TextGrammarCheck__LanguageToolComboBox* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool TextGrammarCheck__LanguageToolComboBox_SuperHasHeightForWidth(const TextGrammarCheck__LanguageToolComboBox* self) {
    return self->TextGrammarCheck::LanguageToolComboBox::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolComboBox_OnHasHeightForWidth(TextGrammarCheck__LanguageToolComboBox* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolcombobox = const_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolComboBox*>(self)))
        vtextgrammarchecklanguagetoolcombobox->textgrammarcheck__languagetoolcombobox_hasheightforwidth_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolComboBox::TextGrammarCheck__LanguageToolComboBox_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* TextGrammarCheck__LanguageToolComboBox_PaintEngine(const TextGrammarCheck__LanguageToolComboBox* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* TextGrammarCheck__LanguageToolComboBox_SuperPaintEngine(const TextGrammarCheck__LanguageToolComboBox* self) {
    return self->TextGrammarCheck::LanguageToolComboBox::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolComboBox_OnPaintEngine(TextGrammarCheck__LanguageToolComboBox* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolcombobox = const_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolComboBox*>(self)))
        vtextgrammarchecklanguagetoolcombobox->textgrammarcheck__languagetoolcombobox_paintengine_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolComboBox::TextGrammarCheck__LanguageToolComboBox_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolComboBox_MouseDoubleClickEvent(TextGrammarCheck__LanguageToolComboBox* self, QMouseEvent* event) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox) {
        vtextgrammarchecklanguagetoolcombobox->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolComboBox::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolComboBox_SuperMouseDoubleClickEvent(TextGrammarCheck__LanguageToolComboBox* self, QMouseEvent* event) {
    if (auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self)) {
        vtextgrammarchecklanguagetoolcombobox->TextGrammarCheck::LanguageToolComboBox::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolComboBox::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolComboBox_OnMouseDoubleClickEvent(TextGrammarCheck__LanguageToolComboBox* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self))
        vtextgrammarchecklanguagetoolcombobox->textgrammarcheck__languagetoolcombobox_mousedoubleclickevent_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolComboBox::TextGrammarCheck__LanguageToolComboBox_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolComboBox_MouseMoveEvent(TextGrammarCheck__LanguageToolComboBox* self, QMouseEvent* event) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox) {
        vtextgrammarchecklanguagetoolcombobox->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolComboBox::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolComboBox_SuperMouseMoveEvent(TextGrammarCheck__LanguageToolComboBox* self, QMouseEvent* event) {
    if (auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self)) {
        vtextgrammarchecklanguagetoolcombobox->TextGrammarCheck::LanguageToolComboBox::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolComboBox::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolComboBox_OnMouseMoveEvent(TextGrammarCheck__LanguageToolComboBox* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self))
        vtextgrammarchecklanguagetoolcombobox->textgrammarcheck__languagetoolcombobox_mousemoveevent_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolComboBox::TextGrammarCheck__LanguageToolComboBox_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolComboBox_EnterEvent(TextGrammarCheck__LanguageToolComboBox* self, QEnterEvent* event) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox) {
        vtextgrammarchecklanguagetoolcombobox->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolComboBox::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolComboBox_SuperEnterEvent(TextGrammarCheck__LanguageToolComboBox* self, QEnterEvent* event) {
    if (auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self)) {
        vtextgrammarchecklanguagetoolcombobox->TextGrammarCheck::LanguageToolComboBox::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolComboBox::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolComboBox_OnEnterEvent(TextGrammarCheck__LanguageToolComboBox* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self))
        vtextgrammarchecklanguagetoolcombobox->textgrammarcheck__languagetoolcombobox_enterevent_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolComboBox::TextGrammarCheck__LanguageToolComboBox_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolComboBox_LeaveEvent(TextGrammarCheck__LanguageToolComboBox* self, QEvent* event) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox) {
        vtextgrammarchecklanguagetoolcombobox->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolComboBox::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolComboBox_SuperLeaveEvent(TextGrammarCheck__LanguageToolComboBox* self, QEvent* event) {
    if (auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self)) {
        vtextgrammarchecklanguagetoolcombobox->TextGrammarCheck::LanguageToolComboBox::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolComboBox::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolComboBox_OnLeaveEvent(TextGrammarCheck__LanguageToolComboBox* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self))
        vtextgrammarchecklanguagetoolcombobox->textgrammarcheck__languagetoolcombobox_leaveevent_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolComboBox::TextGrammarCheck__LanguageToolComboBox_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolComboBox_MoveEvent(TextGrammarCheck__LanguageToolComboBox* self, QMoveEvent* event) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox) {
        vtextgrammarchecklanguagetoolcombobox->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolComboBox::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolComboBox_SuperMoveEvent(TextGrammarCheck__LanguageToolComboBox* self, QMoveEvent* event) {
    if (auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self)) {
        vtextgrammarchecklanguagetoolcombobox->TextGrammarCheck::LanguageToolComboBox::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolComboBox::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolComboBox_OnMoveEvent(TextGrammarCheck__LanguageToolComboBox* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self))
        vtextgrammarchecklanguagetoolcombobox->textgrammarcheck__languagetoolcombobox_moveevent_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolComboBox::TextGrammarCheck__LanguageToolComboBox_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolComboBox_CloseEvent(TextGrammarCheck__LanguageToolComboBox* self, QCloseEvent* event) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox) {
        vtextgrammarchecklanguagetoolcombobox->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolComboBox::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolComboBox_SuperCloseEvent(TextGrammarCheck__LanguageToolComboBox* self, QCloseEvent* event) {
    if (auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self)) {
        vtextgrammarchecklanguagetoolcombobox->TextGrammarCheck::LanguageToolComboBox::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolComboBox::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolComboBox_OnCloseEvent(TextGrammarCheck__LanguageToolComboBox* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self))
        vtextgrammarchecklanguagetoolcombobox->textgrammarcheck__languagetoolcombobox_closeevent_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolComboBox::TextGrammarCheck__LanguageToolComboBox_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolComboBox_TabletEvent(TextGrammarCheck__LanguageToolComboBox* self, QTabletEvent* event) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox) {
        vtextgrammarchecklanguagetoolcombobox->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolComboBox::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolComboBox_SuperTabletEvent(TextGrammarCheck__LanguageToolComboBox* self, QTabletEvent* event) {
    if (auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self)) {
        vtextgrammarchecklanguagetoolcombobox->TextGrammarCheck::LanguageToolComboBox::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolComboBox::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolComboBox_OnTabletEvent(TextGrammarCheck__LanguageToolComboBox* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self))
        vtextgrammarchecklanguagetoolcombobox->textgrammarcheck__languagetoolcombobox_tabletevent_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolComboBox::TextGrammarCheck__LanguageToolComboBox_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolComboBox_ActionEvent(TextGrammarCheck__LanguageToolComboBox* self, QActionEvent* event) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox) {
        vtextgrammarchecklanguagetoolcombobox->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolComboBox::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolComboBox_SuperActionEvent(TextGrammarCheck__LanguageToolComboBox* self, QActionEvent* event) {
    if (auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self)) {
        vtextgrammarchecklanguagetoolcombobox->TextGrammarCheck::LanguageToolComboBox::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolComboBox::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolComboBox_OnActionEvent(TextGrammarCheck__LanguageToolComboBox* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self))
        vtextgrammarchecklanguagetoolcombobox->textgrammarcheck__languagetoolcombobox_actionevent_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolComboBox::TextGrammarCheck__LanguageToolComboBox_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolComboBox_DragEnterEvent(TextGrammarCheck__LanguageToolComboBox* self, QDragEnterEvent* event) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox) {
        vtextgrammarchecklanguagetoolcombobox->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolComboBox::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolComboBox_SuperDragEnterEvent(TextGrammarCheck__LanguageToolComboBox* self, QDragEnterEvent* event) {
    if (auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self)) {
        vtextgrammarchecklanguagetoolcombobox->TextGrammarCheck::LanguageToolComboBox::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolComboBox::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolComboBox_OnDragEnterEvent(TextGrammarCheck__LanguageToolComboBox* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self))
        vtextgrammarchecklanguagetoolcombobox->textgrammarcheck__languagetoolcombobox_dragenterevent_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolComboBox::TextGrammarCheck__LanguageToolComboBox_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolComboBox_DragMoveEvent(TextGrammarCheck__LanguageToolComboBox* self, QDragMoveEvent* event) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox) {
        vtextgrammarchecklanguagetoolcombobox->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolComboBox::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolComboBox_SuperDragMoveEvent(TextGrammarCheck__LanguageToolComboBox* self, QDragMoveEvent* event) {
    if (auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self)) {
        vtextgrammarchecklanguagetoolcombobox->TextGrammarCheck::LanguageToolComboBox::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolComboBox::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolComboBox_OnDragMoveEvent(TextGrammarCheck__LanguageToolComboBox* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self))
        vtextgrammarchecklanguagetoolcombobox->textgrammarcheck__languagetoolcombobox_dragmoveevent_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolComboBox::TextGrammarCheck__LanguageToolComboBox_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolComboBox_DragLeaveEvent(TextGrammarCheck__LanguageToolComboBox* self, QDragLeaveEvent* event) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox) {
        vtextgrammarchecklanguagetoolcombobox->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolComboBox::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolComboBox_SuperDragLeaveEvent(TextGrammarCheck__LanguageToolComboBox* self, QDragLeaveEvent* event) {
    if (auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self)) {
        vtextgrammarchecklanguagetoolcombobox->TextGrammarCheck::LanguageToolComboBox::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolComboBox::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolComboBox_OnDragLeaveEvent(TextGrammarCheck__LanguageToolComboBox* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self))
        vtextgrammarchecklanguagetoolcombobox->textgrammarcheck__languagetoolcombobox_dragleaveevent_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolComboBox::TextGrammarCheck__LanguageToolComboBox_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolComboBox_DropEvent(TextGrammarCheck__LanguageToolComboBox* self, QDropEvent* event) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox) {
        vtextgrammarchecklanguagetoolcombobox->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolComboBox::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolComboBox_SuperDropEvent(TextGrammarCheck__LanguageToolComboBox* self, QDropEvent* event) {
    if (auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self)) {
        vtextgrammarchecklanguagetoolcombobox->TextGrammarCheck::LanguageToolComboBox::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolComboBox::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolComboBox_OnDropEvent(TextGrammarCheck__LanguageToolComboBox* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self))
        vtextgrammarchecklanguagetoolcombobox->textgrammarcheck__languagetoolcombobox_dropevent_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolComboBox::TextGrammarCheck__LanguageToolComboBox_DropEvent_Callback>(slot);
}

// Derived class handler implementation
bool TextGrammarCheck__LanguageToolComboBox_NativeEvent(TextGrammarCheck__LanguageToolComboBox* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox) {
        return vtextgrammarchecklanguagetoolcombobox->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolComboBox::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool TextGrammarCheck__LanguageToolComboBox_SuperNativeEvent(TextGrammarCheck__LanguageToolComboBox* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self)) {
        return vtextgrammarchecklanguagetoolcombobox->TextGrammarCheck::LanguageToolComboBox::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolComboBox::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolComboBox_OnNativeEvent(TextGrammarCheck__LanguageToolComboBox* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self))
        vtextgrammarchecklanguagetoolcombobox->textgrammarcheck__languagetoolcombobox_nativeevent_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolComboBox::TextGrammarCheck__LanguageToolComboBox_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
int TextGrammarCheck__LanguageToolComboBox_Metric(const TextGrammarCheck__LanguageToolComboBox* self, int param1) {
    auto* vtextgrammarchecklanguagetoolcombobox = const_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolComboBox*>(self));
    if (vtextgrammarchecklanguagetoolcombobox) {
        return vtextgrammarchecklanguagetoolcombobox->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolComboBox::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int TextGrammarCheck__LanguageToolComboBox_SuperMetric(const TextGrammarCheck__LanguageToolComboBox* self, int param1) {
    if (auto* vtextgrammarchecklanguagetoolcombobox = const_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolComboBox*>(self))) {
        return vtextgrammarchecklanguagetoolcombobox->TextGrammarCheck::LanguageToolComboBox::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolComboBox::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolComboBox_OnMetric(TextGrammarCheck__LanguageToolComboBox* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolcombobox = const_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolComboBox*>(self)))
        vtextgrammarchecklanguagetoolcombobox->textgrammarcheck__languagetoolcombobox_metric_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolComboBox::TextGrammarCheck__LanguageToolComboBox_Metric_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolComboBox_InitPainter(const TextGrammarCheck__LanguageToolComboBox* self, QPainter* painter) {
    auto* vtextgrammarchecklanguagetoolcombobox = const_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolComboBox*>(self));
    if (vtextgrammarchecklanguagetoolcombobox) {
        vtextgrammarchecklanguagetoolcombobox->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolComboBox::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolComboBox_SuperInitPainter(const TextGrammarCheck__LanguageToolComboBox* self, QPainter* painter) {
    if (auto* vtextgrammarchecklanguagetoolcombobox = const_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolComboBox*>(self))) {
        vtextgrammarchecklanguagetoolcombobox->TextGrammarCheck::LanguageToolComboBox::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolComboBox::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolComboBox_OnInitPainter(TextGrammarCheck__LanguageToolComboBox* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolcombobox = const_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolComboBox*>(self)))
        vtextgrammarchecklanguagetoolcombobox->textgrammarcheck__languagetoolcombobox_initpainter_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolComboBox::TextGrammarCheck__LanguageToolComboBox_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* TextGrammarCheck__LanguageToolComboBox_Redirected(const TextGrammarCheck__LanguageToolComboBox* self, QPoint* offset) {
    auto* vtextgrammarchecklanguagetoolcombobox = const_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolComboBox*>(self));
    if (vtextgrammarchecklanguagetoolcombobox) {
        return vtextgrammarchecklanguagetoolcombobox->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolComboBox::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* TextGrammarCheck__LanguageToolComboBox_SuperRedirected(const TextGrammarCheck__LanguageToolComboBox* self, QPoint* offset) {
    if (auto* vtextgrammarchecklanguagetoolcombobox = const_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolComboBox*>(self))) {
        return vtextgrammarchecklanguagetoolcombobox->TextGrammarCheck::LanguageToolComboBox::redirected(offset);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolComboBox::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolComboBox_OnRedirected(TextGrammarCheck__LanguageToolComboBox* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolcombobox = const_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolComboBox*>(self)))
        vtextgrammarchecklanguagetoolcombobox->textgrammarcheck__languagetoolcombobox_redirected_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolComboBox::TextGrammarCheck__LanguageToolComboBox_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* TextGrammarCheck__LanguageToolComboBox_SharedPainter(const TextGrammarCheck__LanguageToolComboBox* self) {
    auto* vtextgrammarchecklanguagetoolcombobox = const_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolComboBox*>(self));
    if (vtextgrammarchecklanguagetoolcombobox) {
        return vtextgrammarchecklanguagetoolcombobox->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolComboBox::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* TextGrammarCheck__LanguageToolComboBox_SuperSharedPainter(const TextGrammarCheck__LanguageToolComboBox* self) {
    if (auto* vtextgrammarchecklanguagetoolcombobox = const_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolComboBox*>(self))) {
        return vtextgrammarchecklanguagetoolcombobox->TextGrammarCheck::LanguageToolComboBox::sharedPainter();
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolComboBox::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolComboBox_OnSharedPainter(TextGrammarCheck__LanguageToolComboBox* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolcombobox = const_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolComboBox*>(self)))
        vtextgrammarchecklanguagetoolcombobox->textgrammarcheck__languagetoolcombobox_sharedpainter_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolComboBox::TextGrammarCheck__LanguageToolComboBox_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
bool TextGrammarCheck__LanguageToolComboBox_FocusNextPrevChild(TextGrammarCheck__LanguageToolComboBox* self, bool next) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox) {
        return vtextgrammarchecklanguagetoolcombobox->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolComboBox::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool TextGrammarCheck__LanguageToolComboBox_SuperFocusNextPrevChild(TextGrammarCheck__LanguageToolComboBox* self, bool next) {
    if (auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self)) {
        return vtextgrammarchecklanguagetoolcombobox->TextGrammarCheck::LanguageToolComboBox::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolComboBox::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolComboBox_OnFocusNextPrevChild(TextGrammarCheck__LanguageToolComboBox* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self))
        vtextgrammarchecklanguagetoolcombobox->textgrammarcheck__languagetoolcombobox_focusnextprevchild_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolComboBox::TextGrammarCheck__LanguageToolComboBox_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
bool TextGrammarCheck__LanguageToolComboBox_EventFilter(TextGrammarCheck__LanguageToolComboBox* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool TextGrammarCheck__LanguageToolComboBox_SuperEventFilter(TextGrammarCheck__LanguageToolComboBox* self, QObject* watched, QEvent* event) {
    return self->TextGrammarCheck::LanguageToolComboBox::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolComboBox_OnEventFilter(TextGrammarCheck__LanguageToolComboBox* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self))
        vtextgrammarchecklanguagetoolcombobox->textgrammarcheck__languagetoolcombobox_eventfilter_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolComboBox::TextGrammarCheck__LanguageToolComboBox_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolComboBox_TimerEvent(TextGrammarCheck__LanguageToolComboBox* self, QTimerEvent* event) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox) {
        vtextgrammarchecklanguagetoolcombobox->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolComboBox::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolComboBox_SuperTimerEvent(TextGrammarCheck__LanguageToolComboBox* self, QTimerEvent* event) {
    if (auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self)) {
        vtextgrammarchecklanguagetoolcombobox->TextGrammarCheck::LanguageToolComboBox::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolComboBox::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolComboBox_OnTimerEvent(TextGrammarCheck__LanguageToolComboBox* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self))
        vtextgrammarchecklanguagetoolcombobox->textgrammarcheck__languagetoolcombobox_timerevent_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolComboBox::TextGrammarCheck__LanguageToolComboBox_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolComboBox_ChildEvent(TextGrammarCheck__LanguageToolComboBox* self, QChildEvent* event) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox) {
        vtextgrammarchecklanguagetoolcombobox->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolComboBox::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolComboBox_SuperChildEvent(TextGrammarCheck__LanguageToolComboBox* self, QChildEvent* event) {
    if (auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self)) {
        vtextgrammarchecklanguagetoolcombobox->TextGrammarCheck::LanguageToolComboBox::childEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolComboBox::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolComboBox_OnChildEvent(TextGrammarCheck__LanguageToolComboBox* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self))
        vtextgrammarchecklanguagetoolcombobox->textgrammarcheck__languagetoolcombobox_childevent_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolComboBox::TextGrammarCheck__LanguageToolComboBox_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolComboBox_CustomEvent(TextGrammarCheck__LanguageToolComboBox* self, QEvent* event) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox) {
        vtextgrammarchecklanguagetoolcombobox->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolComboBox::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolComboBox_SuperCustomEvent(TextGrammarCheck__LanguageToolComboBox* self, QEvent* event) {
    if (auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self)) {
        vtextgrammarchecklanguagetoolcombobox->TextGrammarCheck::LanguageToolComboBox::customEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolComboBox::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolComboBox_OnCustomEvent(TextGrammarCheck__LanguageToolComboBox* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self))
        vtextgrammarchecklanguagetoolcombobox->textgrammarcheck__languagetoolcombobox_customevent_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolComboBox::TextGrammarCheck__LanguageToolComboBox_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolComboBox_ConnectNotify(TextGrammarCheck__LanguageToolComboBox* self, const QMetaMethod* signal) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox) {
        vtextgrammarchecklanguagetoolcombobox->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolComboBox::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolComboBox_SuperConnectNotify(TextGrammarCheck__LanguageToolComboBox* self, const QMetaMethod* signal) {
    if (auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self)) {
        vtextgrammarchecklanguagetoolcombobox->TextGrammarCheck::LanguageToolComboBox::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolComboBox::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolComboBox_OnConnectNotify(TextGrammarCheck__LanguageToolComboBox* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self))
        vtextgrammarchecklanguagetoolcombobox->textgrammarcheck__languagetoolcombobox_connectnotify_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolComboBox::TextGrammarCheck__LanguageToolComboBox_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolComboBox_DisconnectNotify(TextGrammarCheck__LanguageToolComboBox* self, const QMetaMethod* signal) {
    auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self);
    if (vtextgrammarchecklanguagetoolcombobox) {
        vtextgrammarchecklanguagetoolcombobox->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolComboBox::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolComboBox_SuperDisconnectNotify(TextGrammarCheck__LanguageToolComboBox* self, const QMetaMethod* signal) {
    if (auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self)) {
        vtextgrammarchecklanguagetoolcombobox->TextGrammarCheck::LanguageToolComboBox::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolComboBox::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolComboBox_OnDisconnectNotify(TextGrammarCheck__LanguageToolComboBox* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self))
        vtextgrammarchecklanguagetoolcombobox->textgrammarcheck__languagetoolcombobox_disconnectnotify_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolComboBox::TextGrammarCheck__LanguageToolComboBox_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void TextGrammarCheck__LanguageToolComboBox_UpdateMicroFocus(TextGrammarCheck__LanguageToolComboBox* self) {
    if (auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self)) {
        vtextgrammarchecklanguagetoolcombobox->VirtualTextGrammarCheckLanguageToolComboBox::updateMicroFocus();
    } else
        qFatal("Error: Protected method TextGrammarCheck::LanguageToolComboBox::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void TextGrammarCheck__LanguageToolComboBox_Create(TextGrammarCheck__LanguageToolComboBox* self) {
    if (auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self)) {
        vtextgrammarchecklanguagetoolcombobox->VirtualTextGrammarCheckLanguageToolComboBox::create();
    } else
        qFatal("Error: Protected method TextGrammarCheck::LanguageToolComboBox::create called without a directly constructed type");
}

// Derived class protected handler implementation
void TextGrammarCheck__LanguageToolComboBox_Destroy(TextGrammarCheck__LanguageToolComboBox* self) {
    if (auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self)) {
        vtextgrammarchecklanguagetoolcombobox->VirtualTextGrammarCheckLanguageToolComboBox::destroy();
    } else
        qFatal("Error: Protected method TextGrammarCheck::LanguageToolComboBox::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool TextGrammarCheck__LanguageToolComboBox_FocusNextChild(TextGrammarCheck__LanguageToolComboBox* self) {
    if (auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self)) {
        return vtextgrammarchecklanguagetoolcombobox->VirtualTextGrammarCheckLanguageToolComboBox::focusNextChild();
    } else
        qFatal("Error: Protected method TextGrammarCheck::LanguageToolComboBox::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool TextGrammarCheck__LanguageToolComboBox_FocusPreviousChild(TextGrammarCheck__LanguageToolComboBox* self) {
    if (auto* vtextgrammarchecklanguagetoolcombobox = dynamic_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(self)) {
        return vtextgrammarchecklanguagetoolcombobox->VirtualTextGrammarCheckLanguageToolComboBox::focusPreviousChild();
    } else
        qFatal("Error: Protected method TextGrammarCheck::LanguageToolComboBox::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* TextGrammarCheck__LanguageToolComboBox_Sender(const TextGrammarCheck__LanguageToolComboBox* self) {
    if (auto* vtextgrammarchecklanguagetoolcombobox = const_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolComboBox*>(self))) {
        return vtextgrammarchecklanguagetoolcombobox->VirtualTextGrammarCheckLanguageToolComboBox::sender();
    } else
        qFatal("Error: Protected method TextGrammarCheck::LanguageToolComboBox::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int TextGrammarCheck__LanguageToolComboBox_SenderSignalIndex(const TextGrammarCheck__LanguageToolComboBox* self) {
    if (auto* vtextgrammarchecklanguagetoolcombobox = const_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolComboBox*>(self))) {
        return vtextgrammarchecklanguagetoolcombobox->VirtualTextGrammarCheckLanguageToolComboBox::senderSignalIndex();
    } else
        qFatal("Error: Protected method TextGrammarCheck::LanguageToolComboBox::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int TextGrammarCheck__LanguageToolComboBox_Receivers(const TextGrammarCheck__LanguageToolComboBox* self, const char* signal) {
    if (auto* vtextgrammarchecklanguagetoolcombobox = const_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolComboBox*>(self))) {
        return vtextgrammarchecklanguagetoolcombobox->VirtualTextGrammarCheckLanguageToolComboBox::receivers(signal);
    } else
        qFatal("Error: Protected method TextGrammarCheck::LanguageToolComboBox::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool TextGrammarCheck__LanguageToolComboBox_IsSignalConnected(const TextGrammarCheck__LanguageToolComboBox* self, const QMetaMethod* signal) {
    if (auto* vtextgrammarchecklanguagetoolcombobox = const_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolComboBox*>(self))) {
        return vtextgrammarchecklanguagetoolcombobox->VirtualTextGrammarCheckLanguageToolComboBox::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method TextGrammarCheck::LanguageToolComboBox::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double TextGrammarCheck__LanguageToolComboBox_GetDecodedMetricF(const TextGrammarCheck__LanguageToolComboBox* self, int metricA, int metricB) {
    if (auto* vtextgrammarchecklanguagetoolcombobox = const_cast<VirtualTextGrammarCheckLanguageToolComboBox*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolComboBox*>(self))) {
        return vtextgrammarchecklanguagetoolcombobox->VirtualTextGrammarCheckLanguageToolComboBox::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method TextGrammarCheck::LanguageToolComboBox::getDecodedMetricF called without a directly constructed type");
}

void TextGrammarCheck__LanguageToolComboBox_Delete(TextGrammarCheck__LanguageToolComboBox* self) {
    delete self;
}
