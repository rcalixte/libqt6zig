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
    auto _ret = self->language(static_cast<int>(index));
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

void TextAutoCorrectionWidgets__AutoCorrectionLanguage_SetLanguage(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, const libqt_string language) {
    QString language_QString = QString::fromUtf8(language.data, language.len);
    self->setLanguage(language_QString);
}

// Derived class handler implementation
QMetaObject* TextAutoCorrectionWidgets__AutoCorrectionLanguage_MetaObject(const TextAutoCorrectionWidgets__AutoCorrectionLanguage* self) {
    return (QMetaObject*)self->metaObject();
}

// Base class handler implementation
QMetaObject* TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperMetaObject(const TextAutoCorrectionWidgets__AutoCorrectionLanguage* self) {
    return (QMetaObject*)self->TextAutoCorrectionWidgets::AutoCorrectionLanguage::metaObject();
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnMetaObject(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectionlanguage = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self)))
        vtextautocorrectionwidgetsautocorrectionlanguage->textautocorrectionwidgets__autocorrectionlanguage_metaobject_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage::TextAutoCorrectionWidgets__AutoCorrectionLanguage_MetaObject_Callback>(slot);
}

// Derived class handler implementation
void* TextAutoCorrectionWidgets__AutoCorrectionLanguage_Metacast(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, const char* param1) {
    return self->qt_metacast(param1);
}

// Base class handler implementation
void* TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperMetacast(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, const char* param1) {
    return self->TextAutoCorrectionWidgets::AutoCorrectionLanguage::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnMetacast(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self))
        vtextautocorrectionwidgetsautocorrectionlanguage->textautocorrectionwidgets__autocorrectionlanguage_metacast_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage::TextAutoCorrectionWidgets__AutoCorrectionLanguage_Metacast_Callback>(slot);
}

// Derived class handler implementation
int TextAutoCorrectionWidgets__AutoCorrectionLanguage_Metacall(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Base class handler implementation
int TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperMetacall(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, int param1, int param2, void** param3) {
    return self->TextAutoCorrectionWidgets::AutoCorrectionLanguage::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnMetacall(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self))
        vtextautocorrectionwidgetsautocorrectionlanguage->textautocorrectionwidgets__autocorrectionlanguage_metacall_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage::TextAutoCorrectionWidgets__AutoCorrectionLanguage_Metacall_Callback>(slot);
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_SetModel(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QAbstractItemModel* model) {
    self->setModel(model);
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperSetModel(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QAbstractItemModel* model) {
    self->TextAutoCorrectionWidgets::AutoCorrectionLanguage::setModel(model);
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnSetModel(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self))
        vtextautocorrectionwidgetsautocorrectionlanguage->textautocorrectionwidgets__autocorrectionlanguage_setmodel_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage::TextAutoCorrectionWidgets__AutoCorrectionLanguage_SetModel_Callback>(slot);
}

// Derived class handler implementation
QSize* TextAutoCorrectionWidgets__AutoCorrectionLanguage_SizeHint(const TextAutoCorrectionWidgets__AutoCorrectionLanguage* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperSizeHint(const TextAutoCorrectionWidgets__AutoCorrectionLanguage* self) {
    return new QSize(self->TextAutoCorrectionWidgets::AutoCorrectionLanguage::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnSizeHint(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectionlanguage = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self)))
        vtextautocorrectionwidgetsautocorrectionlanguage->textautocorrectionwidgets__autocorrectionlanguage_sizehint_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage::TextAutoCorrectionWidgets__AutoCorrectionLanguage_SizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* TextAutoCorrectionWidgets__AutoCorrectionLanguage_MinimumSizeHint(const TextAutoCorrectionWidgets__AutoCorrectionLanguage* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperMinimumSizeHint(const TextAutoCorrectionWidgets__AutoCorrectionLanguage* self) {
    return new QSize(self->TextAutoCorrectionWidgets::AutoCorrectionLanguage::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnMinimumSizeHint(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectionlanguage = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self)))
        vtextautocorrectionwidgetsautocorrectionlanguage->textautocorrectionwidgets__autocorrectionlanguage_minimumsizehint_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage::TextAutoCorrectionWidgets__AutoCorrectionLanguage_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_ShowPopup(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self) {
    self->showPopup();
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperShowPopup(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self) {
    self->TextAutoCorrectionWidgets::AutoCorrectionLanguage::showPopup();
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnShowPopup(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self))
        vtextautocorrectionwidgetsautocorrectionlanguage->textautocorrectionwidgets__autocorrectionlanguage_showpopup_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage::TextAutoCorrectionWidgets__AutoCorrectionLanguage_ShowPopup_Callback>(slot);
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_HidePopup(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self) {
    self->hidePopup();
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperHidePopup(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self) {
    self->TextAutoCorrectionWidgets::AutoCorrectionLanguage::hidePopup();
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnHidePopup(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self))
        vtextautocorrectionwidgetsautocorrectionlanguage->textautocorrectionwidgets__autocorrectionlanguage_hidepopup_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage::TextAutoCorrectionWidgets__AutoCorrectionLanguage_HidePopup_Callback>(slot);
}

// Derived class handler implementation
bool TextAutoCorrectionWidgets__AutoCorrectionLanguage_Event(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QEvent* event) {
    return self->TextAutoCorrectionWidgets::AutoCorrectionLanguage::event(event);
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self))
        vtextautocorrectionwidgetsautocorrectionlanguage->textautocorrectionwidgets__autocorrectionlanguage_event_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage::TextAutoCorrectionWidgets__AutoCorrectionLanguage_Event_Callback>(slot);
}

// Derived class handler implementation
QVariant* TextAutoCorrectionWidgets__AutoCorrectionLanguage_InputMethodQuery(const TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperInputMethodQuery(const TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, int param1) {
    return new QVariant(self->TextAutoCorrectionWidgets::AutoCorrectionLanguage::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnInputMethodQuery(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectionlanguage = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self)))
        vtextautocorrectionwidgetsautocorrectionlanguage->textautocorrectionwidgets__autocorrectionlanguage_inputmethodquery_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage::TextAutoCorrectionWidgets__AutoCorrectionLanguage_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_FocusInEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QFocusEvent* e) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->focusInEvent(e);
    } else {
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionLanguage::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperFocusInEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QFocusEvent* e) {
    if (auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self)) {
        vtextautocorrectionwidgetsautocorrectionlanguage->TextAutoCorrectionWidgets::AutoCorrectionLanguage::focusInEvent(e);
    } else
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionLanguage::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnFocusInEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self))
        vtextautocorrectionwidgetsautocorrectionlanguage->textautocorrectionwidgets__autocorrectionlanguage_focusinevent_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage::TextAutoCorrectionWidgets__AutoCorrectionLanguage_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_FocusOutEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QFocusEvent* e) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->focusOutEvent(e);
    } else {
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionLanguage::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperFocusOutEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QFocusEvent* e) {
    if (auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self)) {
        vtextautocorrectionwidgetsautocorrectionlanguage->TextAutoCorrectionWidgets::AutoCorrectionLanguage::focusOutEvent(e);
    } else
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionLanguage::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnFocusOutEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self))
        vtextautocorrectionwidgetsautocorrectionlanguage->textautocorrectionwidgets__autocorrectionlanguage_focusoutevent_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage::TextAutoCorrectionWidgets__AutoCorrectionLanguage_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_ChangeEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QEvent* e) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->changeEvent(e);
    } else {
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionLanguage::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperChangeEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QEvent* e) {
    if (auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self)) {
        vtextautocorrectionwidgetsautocorrectionlanguage->TextAutoCorrectionWidgets::AutoCorrectionLanguage::changeEvent(e);
    } else
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionLanguage::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnChangeEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self))
        vtextautocorrectionwidgetsautocorrectionlanguage->textautocorrectionwidgets__autocorrectionlanguage_changeevent_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage::TextAutoCorrectionWidgets__AutoCorrectionLanguage_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_ResizeEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QResizeEvent* e) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->resizeEvent(e);
    } else {
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionLanguage::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperResizeEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QResizeEvent* e) {
    if (auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self)) {
        vtextautocorrectionwidgetsautocorrectionlanguage->TextAutoCorrectionWidgets::AutoCorrectionLanguage::resizeEvent(e);
    } else
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionLanguage::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnResizeEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self))
        vtextautocorrectionwidgetsautocorrectionlanguage->textautocorrectionwidgets__autocorrectionlanguage_resizeevent_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage::TextAutoCorrectionWidgets__AutoCorrectionLanguage_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_PaintEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QPaintEvent* e) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->paintEvent(e);
    } else {
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionLanguage::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperPaintEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QPaintEvent* e) {
    if (auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self)) {
        vtextautocorrectionwidgetsautocorrectionlanguage->TextAutoCorrectionWidgets::AutoCorrectionLanguage::paintEvent(e);
    } else
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionLanguage::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnPaintEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self))
        vtextautocorrectionwidgetsautocorrectionlanguage->textautocorrectionwidgets__autocorrectionlanguage_paintevent_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage::TextAutoCorrectionWidgets__AutoCorrectionLanguage_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_ShowEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QShowEvent* e) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->showEvent(e);
    } else {
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionLanguage::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperShowEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QShowEvent* e) {
    if (auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self)) {
        vtextautocorrectionwidgetsautocorrectionlanguage->TextAutoCorrectionWidgets::AutoCorrectionLanguage::showEvent(e);
    } else
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionLanguage::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnShowEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self))
        vtextautocorrectionwidgetsautocorrectionlanguage->textautocorrectionwidgets__autocorrectionlanguage_showevent_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage::TextAutoCorrectionWidgets__AutoCorrectionLanguage_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_HideEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QHideEvent* e) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->hideEvent(e);
    } else {
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionLanguage::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperHideEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QHideEvent* e) {
    if (auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self)) {
        vtextautocorrectionwidgetsautocorrectionlanguage->TextAutoCorrectionWidgets::AutoCorrectionLanguage::hideEvent(e);
    } else
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionLanguage::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnHideEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self))
        vtextautocorrectionwidgetsautocorrectionlanguage->textautocorrectionwidgets__autocorrectionlanguage_hideevent_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage::TextAutoCorrectionWidgets__AutoCorrectionLanguage_HideEvent_Callback>(slot);
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_MousePressEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QMouseEvent* e) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->mousePressEvent(e);
    } else {
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionLanguage::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperMousePressEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QMouseEvent* e) {
    if (auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self)) {
        vtextautocorrectionwidgetsautocorrectionlanguage->TextAutoCorrectionWidgets::AutoCorrectionLanguage::mousePressEvent(e);
    } else
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionLanguage::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnMousePressEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self))
        vtextautocorrectionwidgetsautocorrectionlanguage->textautocorrectionwidgets__autocorrectionlanguage_mousepressevent_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage::TextAutoCorrectionWidgets__AutoCorrectionLanguage_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_MouseReleaseEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QMouseEvent* e) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->mouseReleaseEvent(e);
    } else {
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionLanguage::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperMouseReleaseEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QMouseEvent* e) {
    if (auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self)) {
        vtextautocorrectionwidgetsautocorrectionlanguage->TextAutoCorrectionWidgets::AutoCorrectionLanguage::mouseReleaseEvent(e);
    } else
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionLanguage::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnMouseReleaseEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self))
        vtextautocorrectionwidgetsautocorrectionlanguage->textautocorrectionwidgets__autocorrectionlanguage_mousereleaseevent_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage::TextAutoCorrectionWidgets__AutoCorrectionLanguage_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_KeyPressEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QKeyEvent* e) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->keyPressEvent(e);
    } else {
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionLanguage::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperKeyPressEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QKeyEvent* e) {
    if (auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self)) {
        vtextautocorrectionwidgetsautocorrectionlanguage->TextAutoCorrectionWidgets::AutoCorrectionLanguage::keyPressEvent(e);
    } else
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionLanguage::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnKeyPressEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self))
        vtextautocorrectionwidgetsautocorrectionlanguage->textautocorrectionwidgets__autocorrectionlanguage_keypressevent_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage::TextAutoCorrectionWidgets__AutoCorrectionLanguage_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_KeyReleaseEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QKeyEvent* e) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->keyReleaseEvent(e);
    } else {
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionLanguage::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperKeyReleaseEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QKeyEvent* e) {
    if (auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self)) {
        vtextautocorrectionwidgetsautocorrectionlanguage->TextAutoCorrectionWidgets::AutoCorrectionLanguage::keyReleaseEvent(e);
    } else
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionLanguage::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnKeyReleaseEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self))
        vtextautocorrectionwidgetsautocorrectionlanguage->textautocorrectionwidgets__autocorrectionlanguage_keyreleaseevent_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage::TextAutoCorrectionWidgets__AutoCorrectionLanguage_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_WheelEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QWheelEvent* e) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->wheelEvent(e);
    } else {
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionLanguage::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperWheelEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QWheelEvent* e) {
    if (auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self)) {
        vtextautocorrectionwidgetsautocorrectionlanguage->TextAutoCorrectionWidgets::AutoCorrectionLanguage::wheelEvent(e);
    } else
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionLanguage::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnWheelEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self))
        vtextautocorrectionwidgetsautocorrectionlanguage->textautocorrectionwidgets__autocorrectionlanguage_wheelevent_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage::TextAutoCorrectionWidgets__AutoCorrectionLanguage_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_ContextMenuEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QContextMenuEvent* e) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->contextMenuEvent(e);
    } else {
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionLanguage::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperContextMenuEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QContextMenuEvent* e) {
    if (auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self)) {
        vtextautocorrectionwidgetsautocorrectionlanguage->TextAutoCorrectionWidgets::AutoCorrectionLanguage::contextMenuEvent(e);
    } else
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionLanguage::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnContextMenuEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self))
        vtextautocorrectionwidgetsautocorrectionlanguage->textautocorrectionwidgets__autocorrectionlanguage_contextmenuevent_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage::TextAutoCorrectionWidgets__AutoCorrectionLanguage_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_InputMethodEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QInputMethodEvent* param1) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionLanguage::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperInputMethodEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QInputMethodEvent* param1) {
    if (auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self)) {
        vtextautocorrectionwidgetsautocorrectionlanguage->TextAutoCorrectionWidgets::AutoCorrectionLanguage::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionLanguage::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnInputMethodEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self))
        vtextautocorrectionwidgetsautocorrectionlanguage->textautocorrectionwidgets__autocorrectionlanguage_inputmethodevent_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage::TextAutoCorrectionWidgets__AutoCorrectionLanguage_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_InitStyleOption(const TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QStyleOptionComboBox* option) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self));
    if (vtextautocorrectionwidgetsautocorrectionlanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->initStyleOption(option);
    } else {
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionLanguage::initStyleOption called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperInitStyleOption(const TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QStyleOptionComboBox* option) {
    if (auto* vtextautocorrectionwidgetsautocorrectionlanguage = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self))) {
        vtextautocorrectionwidgetsautocorrectionlanguage->TextAutoCorrectionWidgets::AutoCorrectionLanguage::initStyleOption(option);
    } else
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionLanguage::initStyleOption called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnInitStyleOption(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectionlanguage = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self)))
        vtextautocorrectionwidgetsautocorrectionlanguage->textautocorrectionwidgets__autocorrectionlanguage_initstyleoption_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage::TextAutoCorrectionWidgets__AutoCorrectionLanguage_InitStyleOption_Callback>(slot);
}

// Derived class handler implementation
int TextAutoCorrectionWidgets__AutoCorrectionLanguage_DevType(const TextAutoCorrectionWidgets__AutoCorrectionLanguage* self) {
    return self->devType();
}

// Base class handler implementation
int TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperDevType(const TextAutoCorrectionWidgets__AutoCorrectionLanguage* self) {
    return self->TextAutoCorrectionWidgets::AutoCorrectionLanguage::devType();
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnDevType(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectionlanguage = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self)))
        vtextautocorrectionwidgetsautocorrectionlanguage->textautocorrectionwidgets__autocorrectionlanguage_devtype_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage::TextAutoCorrectionWidgets__AutoCorrectionLanguage_DevType_Callback>(slot);
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_SetVisible(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperSetVisible(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, bool visible) {
    self->TextAutoCorrectionWidgets::AutoCorrectionLanguage::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnSetVisible(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self))
        vtextautocorrectionwidgetsautocorrectionlanguage->textautocorrectionwidgets__autocorrectionlanguage_setvisible_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage::TextAutoCorrectionWidgets__AutoCorrectionLanguage_SetVisible_Callback>(slot);
}

// Derived class handler implementation
int TextAutoCorrectionWidgets__AutoCorrectionLanguage_HeightForWidth(const TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperHeightForWidth(const TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, int param1) {
    return self->TextAutoCorrectionWidgets::AutoCorrectionLanguage::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnHeightForWidth(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectionlanguage = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self)))
        vtextautocorrectionwidgetsautocorrectionlanguage->textautocorrectionwidgets__autocorrectionlanguage_heightforwidth_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage::TextAutoCorrectionWidgets__AutoCorrectionLanguage_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool TextAutoCorrectionWidgets__AutoCorrectionLanguage_HasHeightForWidth(const TextAutoCorrectionWidgets__AutoCorrectionLanguage* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperHasHeightForWidth(const TextAutoCorrectionWidgets__AutoCorrectionLanguage* self) {
    return self->TextAutoCorrectionWidgets::AutoCorrectionLanguage::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnHasHeightForWidth(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectionlanguage = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self)))
        vtextautocorrectionwidgetsautocorrectionlanguage->textautocorrectionwidgets__autocorrectionlanguage_hasheightforwidth_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage::TextAutoCorrectionWidgets__AutoCorrectionLanguage_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* TextAutoCorrectionWidgets__AutoCorrectionLanguage_PaintEngine(const TextAutoCorrectionWidgets__AutoCorrectionLanguage* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperPaintEngine(const TextAutoCorrectionWidgets__AutoCorrectionLanguage* self) {
    return self->TextAutoCorrectionWidgets::AutoCorrectionLanguage::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnPaintEngine(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectionlanguage = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self)))
        vtextautocorrectionwidgetsautocorrectionlanguage->textautocorrectionwidgets__autocorrectionlanguage_paintengine_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage::TextAutoCorrectionWidgets__AutoCorrectionLanguage_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_MouseDoubleClickEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QMouseEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionLanguage::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperMouseDoubleClickEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QMouseEvent* event) {
    if (auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self)) {
        vtextautocorrectionwidgetsautocorrectionlanguage->TextAutoCorrectionWidgets::AutoCorrectionLanguage::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionLanguage::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnMouseDoubleClickEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self))
        vtextautocorrectionwidgetsautocorrectionlanguage->textautocorrectionwidgets__autocorrectionlanguage_mousedoubleclickevent_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage::TextAutoCorrectionWidgets__AutoCorrectionLanguage_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_MouseMoveEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QMouseEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionLanguage::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperMouseMoveEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QMouseEvent* event) {
    if (auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self)) {
        vtextautocorrectionwidgetsautocorrectionlanguage->TextAutoCorrectionWidgets::AutoCorrectionLanguage::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionLanguage::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnMouseMoveEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self))
        vtextautocorrectionwidgetsautocorrectionlanguage->textautocorrectionwidgets__autocorrectionlanguage_mousemoveevent_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage::TextAutoCorrectionWidgets__AutoCorrectionLanguage_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_EnterEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QEnterEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionLanguage::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperEnterEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QEnterEvent* event) {
    if (auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self)) {
        vtextautocorrectionwidgetsautocorrectionlanguage->TextAutoCorrectionWidgets::AutoCorrectionLanguage::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionLanguage::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnEnterEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self))
        vtextautocorrectionwidgetsautocorrectionlanguage->textautocorrectionwidgets__autocorrectionlanguage_enterevent_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage::TextAutoCorrectionWidgets__AutoCorrectionLanguage_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_LeaveEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionLanguage::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperLeaveEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QEvent* event) {
    if (auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self)) {
        vtextautocorrectionwidgetsautocorrectionlanguage->TextAutoCorrectionWidgets::AutoCorrectionLanguage::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionLanguage::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnLeaveEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self))
        vtextautocorrectionwidgetsautocorrectionlanguage->textautocorrectionwidgets__autocorrectionlanguage_leaveevent_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage::TextAutoCorrectionWidgets__AutoCorrectionLanguage_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_MoveEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QMoveEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionLanguage::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperMoveEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QMoveEvent* event) {
    if (auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self)) {
        vtextautocorrectionwidgetsautocorrectionlanguage->TextAutoCorrectionWidgets::AutoCorrectionLanguage::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionLanguage::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnMoveEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self))
        vtextautocorrectionwidgetsautocorrectionlanguage->textautocorrectionwidgets__autocorrectionlanguage_moveevent_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage::TextAutoCorrectionWidgets__AutoCorrectionLanguage_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_CloseEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QCloseEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionLanguage::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperCloseEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QCloseEvent* event) {
    if (auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self)) {
        vtextautocorrectionwidgetsautocorrectionlanguage->TextAutoCorrectionWidgets::AutoCorrectionLanguage::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionLanguage::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnCloseEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self))
        vtextautocorrectionwidgetsautocorrectionlanguage->textautocorrectionwidgets__autocorrectionlanguage_closeevent_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage::TextAutoCorrectionWidgets__AutoCorrectionLanguage_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_TabletEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QTabletEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionLanguage::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperTabletEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QTabletEvent* event) {
    if (auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self)) {
        vtextautocorrectionwidgetsautocorrectionlanguage->TextAutoCorrectionWidgets::AutoCorrectionLanguage::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionLanguage::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnTabletEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self))
        vtextautocorrectionwidgetsautocorrectionlanguage->textautocorrectionwidgets__autocorrectionlanguage_tabletevent_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage::TextAutoCorrectionWidgets__AutoCorrectionLanguage_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_ActionEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QActionEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionLanguage::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperActionEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QActionEvent* event) {
    if (auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self)) {
        vtextautocorrectionwidgetsautocorrectionlanguage->TextAutoCorrectionWidgets::AutoCorrectionLanguage::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionLanguage::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnActionEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self))
        vtextautocorrectionwidgetsautocorrectionlanguage->textautocorrectionwidgets__autocorrectionlanguage_actionevent_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage::TextAutoCorrectionWidgets__AutoCorrectionLanguage_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_DragEnterEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QDragEnterEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionLanguage::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperDragEnterEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QDragEnterEvent* event) {
    if (auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self)) {
        vtextautocorrectionwidgetsautocorrectionlanguage->TextAutoCorrectionWidgets::AutoCorrectionLanguage::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionLanguage::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnDragEnterEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self))
        vtextautocorrectionwidgetsautocorrectionlanguage->textautocorrectionwidgets__autocorrectionlanguage_dragenterevent_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage::TextAutoCorrectionWidgets__AutoCorrectionLanguage_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_DragMoveEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QDragMoveEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionLanguage::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperDragMoveEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QDragMoveEvent* event) {
    if (auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self)) {
        vtextautocorrectionwidgetsautocorrectionlanguage->TextAutoCorrectionWidgets::AutoCorrectionLanguage::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionLanguage::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnDragMoveEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self))
        vtextautocorrectionwidgetsautocorrectionlanguage->textautocorrectionwidgets__autocorrectionlanguage_dragmoveevent_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage::TextAutoCorrectionWidgets__AutoCorrectionLanguage_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_DragLeaveEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QDragLeaveEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionLanguage::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperDragLeaveEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QDragLeaveEvent* event) {
    if (auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self)) {
        vtextautocorrectionwidgetsautocorrectionlanguage->TextAutoCorrectionWidgets::AutoCorrectionLanguage::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionLanguage::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnDragLeaveEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self))
        vtextautocorrectionwidgetsautocorrectionlanguage->textautocorrectionwidgets__autocorrectionlanguage_dragleaveevent_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage::TextAutoCorrectionWidgets__AutoCorrectionLanguage_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_DropEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QDropEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionLanguage::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperDropEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QDropEvent* event) {
    if (auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self)) {
        vtextautocorrectionwidgetsautocorrectionlanguage->TextAutoCorrectionWidgets::AutoCorrectionLanguage::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionLanguage::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnDropEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self))
        vtextautocorrectionwidgetsautocorrectionlanguage->textautocorrectionwidgets__autocorrectionlanguage_dropevent_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage::TextAutoCorrectionWidgets__AutoCorrectionLanguage_DropEvent_Callback>(slot);
}

// Derived class handler implementation
bool TextAutoCorrectionWidgets__AutoCorrectionLanguage_NativeEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage) {
        return vtextautocorrectionwidgetsautocorrectionlanguage->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionLanguage::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperNativeEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self)) {
        return vtextautocorrectionwidgetsautocorrectionlanguage->TextAutoCorrectionWidgets::AutoCorrectionLanguage::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionLanguage::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnNativeEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self))
        vtextautocorrectionwidgetsautocorrectionlanguage->textautocorrectionwidgets__autocorrectionlanguage_nativeevent_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage::TextAutoCorrectionWidgets__AutoCorrectionLanguage_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
int TextAutoCorrectionWidgets__AutoCorrectionLanguage_Metric(const TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, int param1) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self));
    if (vtextautocorrectionwidgetsautocorrectionlanguage) {
        return vtextautocorrectionwidgetsautocorrectionlanguage->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionLanguage::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperMetric(const TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, int param1) {
    if (auto* vtextautocorrectionwidgetsautocorrectionlanguage = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self))) {
        return vtextautocorrectionwidgetsautocorrectionlanguage->TextAutoCorrectionWidgets::AutoCorrectionLanguage::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionLanguage::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnMetric(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectionlanguage = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self)))
        vtextautocorrectionwidgetsautocorrectionlanguage->textautocorrectionwidgets__autocorrectionlanguage_metric_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage::TextAutoCorrectionWidgets__AutoCorrectionLanguage_Metric_Callback>(slot);
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_InitPainter(const TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QPainter* painter) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self));
    if (vtextautocorrectionwidgetsautocorrectionlanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionLanguage::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperInitPainter(const TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QPainter* painter) {
    if (auto* vtextautocorrectionwidgetsautocorrectionlanguage = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self))) {
        vtextautocorrectionwidgetsautocorrectionlanguage->TextAutoCorrectionWidgets::AutoCorrectionLanguage::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionLanguage::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnInitPainter(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectionlanguage = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self)))
        vtextautocorrectionwidgetsautocorrectionlanguage->textautocorrectionwidgets__autocorrectionlanguage_initpainter_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage::TextAutoCorrectionWidgets__AutoCorrectionLanguage_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* TextAutoCorrectionWidgets__AutoCorrectionLanguage_Redirected(const TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QPoint* offset) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self));
    if (vtextautocorrectionwidgetsautocorrectionlanguage) {
        return vtextautocorrectionwidgetsautocorrectionlanguage->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionLanguage::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperRedirected(const TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QPoint* offset) {
    if (auto* vtextautocorrectionwidgetsautocorrectionlanguage = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self))) {
        return vtextautocorrectionwidgetsautocorrectionlanguage->TextAutoCorrectionWidgets::AutoCorrectionLanguage::redirected(offset);
    } else
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionLanguage::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnRedirected(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectionlanguage = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self)))
        vtextautocorrectionwidgetsautocorrectionlanguage->textautocorrectionwidgets__autocorrectionlanguage_redirected_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage::TextAutoCorrectionWidgets__AutoCorrectionLanguage_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* TextAutoCorrectionWidgets__AutoCorrectionLanguage_SharedPainter(const TextAutoCorrectionWidgets__AutoCorrectionLanguage* self) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self));
    if (vtextautocorrectionwidgetsautocorrectionlanguage) {
        return vtextautocorrectionwidgetsautocorrectionlanguage->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionLanguage::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperSharedPainter(const TextAutoCorrectionWidgets__AutoCorrectionLanguage* self) {
    if (auto* vtextautocorrectionwidgetsautocorrectionlanguage = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self))) {
        return vtextautocorrectionwidgetsautocorrectionlanguage->TextAutoCorrectionWidgets::AutoCorrectionLanguage::sharedPainter();
    } else
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionLanguage::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnSharedPainter(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectionlanguage = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self)))
        vtextautocorrectionwidgetsautocorrectionlanguage->textautocorrectionwidgets__autocorrectionlanguage_sharedpainter_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage::TextAutoCorrectionWidgets__AutoCorrectionLanguage_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
bool TextAutoCorrectionWidgets__AutoCorrectionLanguage_FocusNextPrevChild(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, bool next) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage) {
        return vtextautocorrectionwidgetsautocorrectionlanguage->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionLanguage::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperFocusNextPrevChild(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, bool next) {
    if (auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self)) {
        return vtextautocorrectionwidgetsautocorrectionlanguage->TextAutoCorrectionWidgets::AutoCorrectionLanguage::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionLanguage::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnFocusNextPrevChild(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self))
        vtextautocorrectionwidgetsautocorrectionlanguage->textautocorrectionwidgets__autocorrectionlanguage_focusnextprevchild_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage::TextAutoCorrectionWidgets__AutoCorrectionLanguage_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
bool TextAutoCorrectionWidgets__AutoCorrectionLanguage_EventFilter(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperEventFilter(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QObject* watched, QEvent* event) {
    return self->TextAutoCorrectionWidgets::AutoCorrectionLanguage::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnEventFilter(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self))
        vtextautocorrectionwidgetsautocorrectionlanguage->textautocorrectionwidgets__autocorrectionlanguage_eventfilter_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage::TextAutoCorrectionWidgets__AutoCorrectionLanguage_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_TimerEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QTimerEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionLanguage::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperTimerEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QTimerEvent* event) {
    if (auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self)) {
        vtextautocorrectionwidgetsautocorrectionlanguage->TextAutoCorrectionWidgets::AutoCorrectionLanguage::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionLanguage::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnTimerEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self))
        vtextautocorrectionwidgetsautocorrectionlanguage->textautocorrectionwidgets__autocorrectionlanguage_timerevent_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage::TextAutoCorrectionWidgets__AutoCorrectionLanguage_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_ChildEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QChildEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionLanguage::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperChildEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QChildEvent* event) {
    if (auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self)) {
        vtextautocorrectionwidgetsautocorrectionlanguage->TextAutoCorrectionWidgets::AutoCorrectionLanguage::childEvent(event);
    } else
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionLanguage::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnChildEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self))
        vtextautocorrectionwidgetsautocorrectionlanguage->textautocorrectionwidgets__autocorrectionlanguage_childevent_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage::TextAutoCorrectionWidgets__AutoCorrectionLanguage_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_CustomEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QEvent* event) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionLanguage::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperCustomEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, QEvent* event) {
    if (auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self)) {
        vtextautocorrectionwidgetsautocorrectionlanguage->TextAutoCorrectionWidgets::AutoCorrectionLanguage::customEvent(event);
    } else
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionLanguage::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnCustomEvent(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self))
        vtextautocorrectionwidgetsautocorrectionlanguage->textautocorrectionwidgets__autocorrectionlanguage_customevent_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage::TextAutoCorrectionWidgets__AutoCorrectionLanguage_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_ConnectNotify(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, const QMetaMethod* signal) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionLanguage::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperConnectNotify(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, const QMetaMethod* signal) {
    if (auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self)) {
        vtextautocorrectionwidgetsautocorrectionlanguage->TextAutoCorrectionWidgets::AutoCorrectionLanguage::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionLanguage::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnConnectNotify(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self))
        vtextautocorrectionwidgetsautocorrectionlanguage->textautocorrectionwidgets__autocorrectionlanguage_connectnotify_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage::TextAutoCorrectionWidgets__AutoCorrectionLanguage_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_DisconnectNotify(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, const QMetaMethod* signal) {
    auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self);
    if (vtextautocorrectionwidgetsautocorrectionlanguage) {
        vtextautocorrectionwidgetsautocorrectionlanguage->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionLanguage::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_SuperDisconnectNotify(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, const QMetaMethod* signal) {
    if (auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self)) {
        vtextautocorrectionwidgetsautocorrectionlanguage->TextAutoCorrectionWidgets::AutoCorrectionLanguage::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method TextAutoCorrectionWidgets::AutoCorrectionLanguage::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_OnDisconnectNotify(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, intptr_t slot) {
    if (auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self))
        vtextautocorrectionwidgetsautocorrectionlanguage->textautocorrectionwidgets__autocorrectionlanguage_disconnectnotify_callback = reinterpret_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage::TextAutoCorrectionWidgets__AutoCorrectionLanguage_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_UpdateMicroFocus(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self) {
    if (auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self)) {
        vtextautocorrectionwidgetsautocorrectionlanguage->VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage::updateMicroFocus();
    } else
        qFatal("Error: Protected method TextAutoCorrectionWidgets::AutoCorrectionLanguage::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_Create(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self) {
    if (auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self)) {
        vtextautocorrectionwidgetsautocorrectionlanguage->VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage::create();
    } else
        qFatal("Error: Protected method TextAutoCorrectionWidgets::AutoCorrectionLanguage::create called without a directly constructed type");
}

// Derived class protected handler implementation
void TextAutoCorrectionWidgets__AutoCorrectionLanguage_Destroy(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self) {
    if (auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self)) {
        vtextautocorrectionwidgetsautocorrectionlanguage->VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage::destroy();
    } else
        qFatal("Error: Protected method TextAutoCorrectionWidgets::AutoCorrectionLanguage::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool TextAutoCorrectionWidgets__AutoCorrectionLanguage_FocusNextChild(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self) {
    if (auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self)) {
        return vtextautocorrectionwidgetsautocorrectionlanguage->VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage::focusNextChild();
    } else
        qFatal("Error: Protected method TextAutoCorrectionWidgets::AutoCorrectionLanguage::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool TextAutoCorrectionWidgets__AutoCorrectionLanguage_FocusPreviousChild(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self) {
    if (auto* vtextautocorrectionwidgetsautocorrectionlanguage = dynamic_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self)) {
        return vtextautocorrectionwidgetsautocorrectionlanguage->VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage::focusPreviousChild();
    } else
        qFatal("Error: Protected method TextAutoCorrectionWidgets::AutoCorrectionLanguage::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* TextAutoCorrectionWidgets__AutoCorrectionLanguage_Sender(const TextAutoCorrectionWidgets__AutoCorrectionLanguage* self) {
    if (auto* vtextautocorrectionwidgetsautocorrectionlanguage = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self))) {
        return vtextautocorrectionwidgetsautocorrectionlanguage->VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage::sender();
    } else
        qFatal("Error: Protected method TextAutoCorrectionWidgets::AutoCorrectionLanguage::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int TextAutoCorrectionWidgets__AutoCorrectionLanguage_SenderSignalIndex(const TextAutoCorrectionWidgets__AutoCorrectionLanguage* self) {
    if (auto* vtextautocorrectionwidgetsautocorrectionlanguage = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self))) {
        return vtextautocorrectionwidgetsautocorrectionlanguage->VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage::senderSignalIndex();
    } else
        qFatal("Error: Protected method TextAutoCorrectionWidgets::AutoCorrectionLanguage::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int TextAutoCorrectionWidgets__AutoCorrectionLanguage_Receivers(const TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, const char* signal) {
    if (auto* vtextautocorrectionwidgetsautocorrectionlanguage = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self))) {
        return vtextautocorrectionwidgetsautocorrectionlanguage->VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage::receivers(signal);
    } else
        qFatal("Error: Protected method TextAutoCorrectionWidgets::AutoCorrectionLanguage::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool TextAutoCorrectionWidgets__AutoCorrectionLanguage_IsSignalConnected(const TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, const QMetaMethod* signal) {
    if (auto* vtextautocorrectionwidgetsautocorrectionlanguage = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self))) {
        return vtextautocorrectionwidgetsautocorrectionlanguage->VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method TextAutoCorrectionWidgets::AutoCorrectionLanguage::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double TextAutoCorrectionWidgets__AutoCorrectionLanguage_GetDecodedMetricF(const TextAutoCorrectionWidgets__AutoCorrectionLanguage* self, int metricA, int metricB) {
    if (auto* vtextautocorrectionwidgetsautocorrectionlanguage = const_cast<VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(dynamic_cast<const VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage*>(self))) {
        return vtextautocorrectionwidgetsautocorrectionlanguage->VirtualTextAutoCorrectionWidgetsAutoCorrectionLanguage::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method TextAutoCorrectionWidgets::AutoCorrectionLanguage::getDecodedMetricF called without a directly constructed type");
}

void TextAutoCorrectionWidgets__AutoCorrectionLanguage_Delete(TextAutoCorrectionWidgets__AutoCorrectionLanguage* self) {
    delete self;
}
