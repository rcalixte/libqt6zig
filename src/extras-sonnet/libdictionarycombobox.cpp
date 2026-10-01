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
#define WORKAROUND_INNER_CLASS_DEFINITION_Sonnet__DictionaryComboBox
#include <dictionarycombobox.h>
#include "libdictionarycombobox.h"
#include "libdictionarycombobox.hxx"

Sonnet__DictionaryComboBox* Sonnet__DictionaryComboBox_new(QWidget* parent) {
    return new VirtualSonnetDictionaryComboBox(parent);
}

Sonnet__DictionaryComboBox* Sonnet__DictionaryComboBox_new2() {
    return new VirtualSonnetDictionaryComboBox();
}

QMetaObject* Sonnet__DictionaryComboBox_MetaObject(const Sonnet__DictionaryComboBox* self) {
    return (QMetaObject*)self->metaObject();
}

void* Sonnet__DictionaryComboBox_Metacast(Sonnet__DictionaryComboBox* self, const char* param1) {
    return self->qt_metacast(param1);
}

int Sonnet__DictionaryComboBox_Metacall(Sonnet__DictionaryComboBox* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string Sonnet__DictionaryComboBox_Tr(const char* s) {
    auto _ret = Sonnet::DictionaryComboBox::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void Sonnet__DictionaryComboBox_ReloadCombo(Sonnet__DictionaryComboBox* self) {
    self->reloadCombo();
}

libqt_string Sonnet__DictionaryComboBox_CurrentDictionaryName(const Sonnet__DictionaryComboBox* self) {
    auto _ret = self->currentDictionaryName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string Sonnet__DictionaryComboBox_CurrentDictionary(const Sonnet__DictionaryComboBox* self) {
    auto _ret = self->currentDictionary();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void Sonnet__DictionaryComboBox_SetCurrentByDictionaryName(Sonnet__DictionaryComboBox* self, const libqt_string dictionaryName) {
    QString dictionaryName_QString = QString::fromUtf8(dictionaryName.data, dictionaryName.len);
    self->setCurrentByDictionaryName(dictionaryName_QString);
}

bool Sonnet__DictionaryComboBox_AssignByDictionnary(Sonnet__DictionaryComboBox* self, const libqt_string dictionary) {
    QString dictionary_QString = QString::fromUtf8(dictionary.data, dictionary.len);
    return self->assignByDictionnary(dictionary_QString);
}

bool Sonnet__DictionaryComboBox_AssignDictionnaryName(Sonnet__DictionaryComboBox* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return self->assignDictionnaryName(name_QString);
}

void Sonnet__DictionaryComboBox_SetCurrentByDictionary(Sonnet__DictionaryComboBox* self, const libqt_string dictionary) {
    QString dictionary_QString = QString::fromUtf8(dictionary.data, dictionary.len);
    self->setCurrentByDictionary(dictionary_QString);
}

void Sonnet__DictionaryComboBox_DictionaryChanged(Sonnet__DictionaryComboBox* self, const libqt_string dictionary) {
    QString dictionary_QString = QString::fromUtf8(dictionary.data, dictionary.len);
    self->dictionaryChanged(dictionary_QString);
}

void Sonnet__DictionaryComboBox_Connect_DictionaryChanged(Sonnet__DictionaryComboBox* self, intptr_t slot) {
    void (*slotFunc)(Sonnet__DictionaryComboBox*, const char*) = reinterpret_cast<void (*)(Sonnet__DictionaryComboBox*, const char*)>(slot);
    Sonnet::DictionaryComboBox::connect(self,
                                        static_cast<void (Sonnet::DictionaryComboBox::*)(const QString&)>(&Sonnet::DictionaryComboBox::dictionaryChanged),
                                        [self, slotFunc](const QString& dictionary) {
                                            const auto dictionary_ret = dictionary;
                                            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                                            QByteArray dictionary_b = dictionary_ret.toUtf8();
                                            auto dictionary_str_len = dictionary_b.length();
                                            const char* dictionary_str = static_cast<const char*>(malloc(dictionary_str_len + 1));
                                            memcpy((void*)dictionary_str, dictionary_b.data(), dictionary_str_len);
                                            ((char*)dictionary_str)[dictionary_str_len] = '\0';
                                            const char* sigval1 = dictionary_str;
                                            slotFunc(self, sigval1);
                                            libqt_free(dictionary_str);
                                        });
}

void Sonnet__DictionaryComboBox_DictionaryNameChanged(Sonnet__DictionaryComboBox* self, const libqt_string dictionaryName) {
    QString dictionaryName_QString = QString::fromUtf8(dictionaryName.data, dictionaryName.len);
    self->dictionaryNameChanged(dictionaryName_QString);
}

void Sonnet__DictionaryComboBox_Connect_DictionaryNameChanged(Sonnet__DictionaryComboBox* self, intptr_t slot) {
    void (*slotFunc)(Sonnet__DictionaryComboBox*, const char*) = reinterpret_cast<void (*)(Sonnet__DictionaryComboBox*, const char*)>(slot);
    Sonnet::DictionaryComboBox::connect(self,
                                        static_cast<void (Sonnet::DictionaryComboBox::*)(const QString&)>(&Sonnet::DictionaryComboBox::dictionaryNameChanged),
                                        [self, slotFunc](const QString& dictionaryName) {
                                            const auto dictionaryName_ret = dictionaryName;
                                            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                                            QByteArray dictionaryName_b = dictionaryName_ret.toUtf8();
                                            auto dictionaryName_str_len = dictionaryName_b.length();
                                            const char* dictionaryName_str = static_cast<const char*>(malloc(dictionaryName_str_len + 1));
                                            memcpy((void*)dictionaryName_str, dictionaryName_b.data(), dictionaryName_str_len);
                                            ((char*)dictionaryName_str)[dictionaryName_str_len] = '\0';
                                            const char* sigval1 = dictionaryName_str;
                                            slotFunc(self, sigval1);
                                            libqt_free(dictionaryName_str);
                                        });
}

libqt_string Sonnet__DictionaryComboBox_Tr2(const char* s, const char* c) {
    auto _ret = Sonnet::DictionaryComboBox::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string Sonnet__DictionaryComboBox_Tr3(const char* s, const char* c, int n) {
    auto _ret = Sonnet::DictionaryComboBox::tr(s, c, static_cast<int>(n));
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
QMetaObject* Sonnet__DictionaryComboBox_SuperMetaObject(const Sonnet__DictionaryComboBox* self) {
    return (QMetaObject*)self->Sonnet::DictionaryComboBox::metaObject();
}

// Auxiliary method to allow providing re-implementation
void Sonnet__DictionaryComboBox_OnMetaObject(Sonnet__DictionaryComboBox* self, intptr_t slot) {
    if (auto* vsonnetdictionarycombobox = const_cast<VirtualSonnetDictionaryComboBox*>(dynamic_cast<const VirtualSonnetDictionaryComboBox*>(self)))
        vsonnetdictionarycombobox->sonnet__dictionarycombobox_metaobject_callback = reinterpret_cast<VirtualSonnetDictionaryComboBox::Sonnet__DictionaryComboBox_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* Sonnet__DictionaryComboBox_SuperMetacast(Sonnet__DictionaryComboBox* self, const char* param1) {
    return self->Sonnet::DictionaryComboBox::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void Sonnet__DictionaryComboBox_OnMetacast(Sonnet__DictionaryComboBox* self, intptr_t slot) {
    if (auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self))
        vsonnetdictionarycombobox->sonnet__dictionarycombobox_metacast_callback = reinterpret_cast<VirtualSonnetDictionaryComboBox::Sonnet__DictionaryComboBox_Metacast_Callback>(slot);
}

// Base class handler implementation
int Sonnet__DictionaryComboBox_SuperMetacall(Sonnet__DictionaryComboBox* self, int param1, int param2, void** param3) {
    return self->Sonnet::DictionaryComboBox::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void Sonnet__DictionaryComboBox_OnMetacall(Sonnet__DictionaryComboBox* self, intptr_t slot) {
    if (auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self))
        vsonnetdictionarycombobox->sonnet__dictionarycombobox_metacall_callback = reinterpret_cast<VirtualSonnetDictionaryComboBox::Sonnet__DictionaryComboBox_Metacall_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__DictionaryComboBox_SetModel(Sonnet__DictionaryComboBox* self, QAbstractItemModel* model) {
    self->setModel(model);
}

// Base class handler implementation
void Sonnet__DictionaryComboBox_SuperSetModel(Sonnet__DictionaryComboBox* self, QAbstractItemModel* model) {
    self->Sonnet::DictionaryComboBox::setModel(model);
}

// Auxiliary method to allow providing re-implementation
void Sonnet__DictionaryComboBox_OnSetModel(Sonnet__DictionaryComboBox* self, intptr_t slot) {
    if (auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self))
        vsonnetdictionarycombobox->sonnet__dictionarycombobox_setmodel_callback = reinterpret_cast<VirtualSonnetDictionaryComboBox::Sonnet__DictionaryComboBox_SetModel_Callback>(slot);
}

// Derived class handler implementation
QSize* Sonnet__DictionaryComboBox_SizeHint(const Sonnet__DictionaryComboBox* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* Sonnet__DictionaryComboBox_SuperSizeHint(const Sonnet__DictionaryComboBox* self) {
    return new QSize(self->Sonnet::DictionaryComboBox::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void Sonnet__DictionaryComboBox_OnSizeHint(Sonnet__DictionaryComboBox* self, intptr_t slot) {
    if (auto* vsonnetdictionarycombobox = const_cast<VirtualSonnetDictionaryComboBox*>(dynamic_cast<const VirtualSonnetDictionaryComboBox*>(self)))
        vsonnetdictionarycombobox->sonnet__dictionarycombobox_sizehint_callback = reinterpret_cast<VirtualSonnetDictionaryComboBox::Sonnet__DictionaryComboBox_SizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* Sonnet__DictionaryComboBox_MinimumSizeHint(const Sonnet__DictionaryComboBox* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* Sonnet__DictionaryComboBox_SuperMinimumSizeHint(const Sonnet__DictionaryComboBox* self) {
    return new QSize(self->Sonnet::DictionaryComboBox::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void Sonnet__DictionaryComboBox_OnMinimumSizeHint(Sonnet__DictionaryComboBox* self, intptr_t slot) {
    if (auto* vsonnetdictionarycombobox = const_cast<VirtualSonnetDictionaryComboBox*>(dynamic_cast<const VirtualSonnetDictionaryComboBox*>(self)))
        vsonnetdictionarycombobox->sonnet__dictionarycombobox_minimumsizehint_callback = reinterpret_cast<VirtualSonnetDictionaryComboBox::Sonnet__DictionaryComboBox_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__DictionaryComboBox_ShowPopup(Sonnet__DictionaryComboBox* self) {
    self->showPopup();
}

// Base class handler implementation
void Sonnet__DictionaryComboBox_SuperShowPopup(Sonnet__DictionaryComboBox* self) {
    self->Sonnet::DictionaryComboBox::showPopup();
}

// Auxiliary method to allow providing re-implementation
void Sonnet__DictionaryComboBox_OnShowPopup(Sonnet__DictionaryComboBox* self, intptr_t slot) {
    if (auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self))
        vsonnetdictionarycombobox->sonnet__dictionarycombobox_showpopup_callback = reinterpret_cast<VirtualSonnetDictionaryComboBox::Sonnet__DictionaryComboBox_ShowPopup_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__DictionaryComboBox_HidePopup(Sonnet__DictionaryComboBox* self) {
    self->hidePopup();
}

// Base class handler implementation
void Sonnet__DictionaryComboBox_SuperHidePopup(Sonnet__DictionaryComboBox* self) {
    self->Sonnet::DictionaryComboBox::hidePopup();
}

// Auxiliary method to allow providing re-implementation
void Sonnet__DictionaryComboBox_OnHidePopup(Sonnet__DictionaryComboBox* self, intptr_t slot) {
    if (auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self))
        vsonnetdictionarycombobox->sonnet__dictionarycombobox_hidepopup_callback = reinterpret_cast<VirtualSonnetDictionaryComboBox::Sonnet__DictionaryComboBox_HidePopup_Callback>(slot);
}

// Derived class handler implementation
bool Sonnet__DictionaryComboBox_Event(Sonnet__DictionaryComboBox* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool Sonnet__DictionaryComboBox_SuperEvent(Sonnet__DictionaryComboBox* self, QEvent* event) {
    return self->Sonnet::DictionaryComboBox::event(event);
}

// Auxiliary method to allow providing re-implementation
void Sonnet__DictionaryComboBox_OnEvent(Sonnet__DictionaryComboBox* self, intptr_t slot) {
    if (auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self))
        vsonnetdictionarycombobox->sonnet__dictionarycombobox_event_callback = reinterpret_cast<VirtualSonnetDictionaryComboBox::Sonnet__DictionaryComboBox_Event_Callback>(slot);
}

// Derived class handler implementation
QVariant* Sonnet__DictionaryComboBox_InputMethodQuery(const Sonnet__DictionaryComboBox* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* Sonnet__DictionaryComboBox_SuperInputMethodQuery(const Sonnet__DictionaryComboBox* self, int param1) {
    return new QVariant(self->Sonnet::DictionaryComboBox::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void Sonnet__DictionaryComboBox_OnInputMethodQuery(Sonnet__DictionaryComboBox* self, intptr_t slot) {
    if (auto* vsonnetdictionarycombobox = const_cast<VirtualSonnetDictionaryComboBox*>(dynamic_cast<const VirtualSonnetDictionaryComboBox*>(self)))
        vsonnetdictionarycombobox->sonnet__dictionarycombobox_inputmethodquery_callback = reinterpret_cast<VirtualSonnetDictionaryComboBox::Sonnet__DictionaryComboBox_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__DictionaryComboBox_FocusInEvent(Sonnet__DictionaryComboBox* self, QFocusEvent* e) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox) {
        vsonnetdictionarycombobox->focusInEvent(e);
    } else {
        qFatal("Error: Protected virtual method Sonnet::DictionaryComboBox::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__DictionaryComboBox_SuperFocusInEvent(Sonnet__DictionaryComboBox* self, QFocusEvent* e) {
    if (auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self)) {
        vsonnetdictionarycombobox->Sonnet::DictionaryComboBox::focusInEvent(e);
    } else
        qFatal("Error: Protected virtual method Sonnet::DictionaryComboBox::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__DictionaryComboBox_OnFocusInEvent(Sonnet__DictionaryComboBox* self, intptr_t slot) {
    if (auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self))
        vsonnetdictionarycombobox->sonnet__dictionarycombobox_focusinevent_callback = reinterpret_cast<VirtualSonnetDictionaryComboBox::Sonnet__DictionaryComboBox_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__DictionaryComboBox_FocusOutEvent(Sonnet__DictionaryComboBox* self, QFocusEvent* e) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox) {
        vsonnetdictionarycombobox->focusOutEvent(e);
    } else {
        qFatal("Error: Protected virtual method Sonnet::DictionaryComboBox::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__DictionaryComboBox_SuperFocusOutEvent(Sonnet__DictionaryComboBox* self, QFocusEvent* e) {
    if (auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self)) {
        vsonnetdictionarycombobox->Sonnet::DictionaryComboBox::focusOutEvent(e);
    } else
        qFatal("Error: Protected virtual method Sonnet::DictionaryComboBox::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__DictionaryComboBox_OnFocusOutEvent(Sonnet__DictionaryComboBox* self, intptr_t slot) {
    if (auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self))
        vsonnetdictionarycombobox->sonnet__dictionarycombobox_focusoutevent_callback = reinterpret_cast<VirtualSonnetDictionaryComboBox::Sonnet__DictionaryComboBox_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__DictionaryComboBox_ChangeEvent(Sonnet__DictionaryComboBox* self, QEvent* e) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox) {
        vsonnetdictionarycombobox->changeEvent(e);
    } else {
        qFatal("Error: Protected virtual method Sonnet::DictionaryComboBox::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__DictionaryComboBox_SuperChangeEvent(Sonnet__DictionaryComboBox* self, QEvent* e) {
    if (auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self)) {
        vsonnetdictionarycombobox->Sonnet::DictionaryComboBox::changeEvent(e);
    } else
        qFatal("Error: Protected virtual method Sonnet::DictionaryComboBox::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__DictionaryComboBox_OnChangeEvent(Sonnet__DictionaryComboBox* self, intptr_t slot) {
    if (auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self))
        vsonnetdictionarycombobox->sonnet__dictionarycombobox_changeevent_callback = reinterpret_cast<VirtualSonnetDictionaryComboBox::Sonnet__DictionaryComboBox_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__DictionaryComboBox_ResizeEvent(Sonnet__DictionaryComboBox* self, QResizeEvent* e) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox) {
        vsonnetdictionarycombobox->resizeEvent(e);
    } else {
        qFatal("Error: Protected virtual method Sonnet::DictionaryComboBox::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__DictionaryComboBox_SuperResizeEvent(Sonnet__DictionaryComboBox* self, QResizeEvent* e) {
    if (auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self)) {
        vsonnetdictionarycombobox->Sonnet::DictionaryComboBox::resizeEvent(e);
    } else
        qFatal("Error: Protected virtual method Sonnet::DictionaryComboBox::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__DictionaryComboBox_OnResizeEvent(Sonnet__DictionaryComboBox* self, intptr_t slot) {
    if (auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self))
        vsonnetdictionarycombobox->sonnet__dictionarycombobox_resizeevent_callback = reinterpret_cast<VirtualSonnetDictionaryComboBox::Sonnet__DictionaryComboBox_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__DictionaryComboBox_PaintEvent(Sonnet__DictionaryComboBox* self, QPaintEvent* e) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox) {
        vsonnetdictionarycombobox->paintEvent(e);
    } else {
        qFatal("Error: Protected virtual method Sonnet::DictionaryComboBox::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__DictionaryComboBox_SuperPaintEvent(Sonnet__DictionaryComboBox* self, QPaintEvent* e) {
    if (auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self)) {
        vsonnetdictionarycombobox->Sonnet::DictionaryComboBox::paintEvent(e);
    } else
        qFatal("Error: Protected virtual method Sonnet::DictionaryComboBox::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__DictionaryComboBox_OnPaintEvent(Sonnet__DictionaryComboBox* self, intptr_t slot) {
    if (auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self))
        vsonnetdictionarycombobox->sonnet__dictionarycombobox_paintevent_callback = reinterpret_cast<VirtualSonnetDictionaryComboBox::Sonnet__DictionaryComboBox_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__DictionaryComboBox_ShowEvent(Sonnet__DictionaryComboBox* self, QShowEvent* e) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox) {
        vsonnetdictionarycombobox->showEvent(e);
    } else {
        qFatal("Error: Protected virtual method Sonnet::DictionaryComboBox::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__DictionaryComboBox_SuperShowEvent(Sonnet__DictionaryComboBox* self, QShowEvent* e) {
    if (auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self)) {
        vsonnetdictionarycombobox->Sonnet::DictionaryComboBox::showEvent(e);
    } else
        qFatal("Error: Protected virtual method Sonnet::DictionaryComboBox::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__DictionaryComboBox_OnShowEvent(Sonnet__DictionaryComboBox* self, intptr_t slot) {
    if (auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self))
        vsonnetdictionarycombobox->sonnet__dictionarycombobox_showevent_callback = reinterpret_cast<VirtualSonnetDictionaryComboBox::Sonnet__DictionaryComboBox_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__DictionaryComboBox_HideEvent(Sonnet__DictionaryComboBox* self, QHideEvent* e) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox) {
        vsonnetdictionarycombobox->hideEvent(e);
    } else {
        qFatal("Error: Protected virtual method Sonnet::DictionaryComboBox::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__DictionaryComboBox_SuperHideEvent(Sonnet__DictionaryComboBox* self, QHideEvent* e) {
    if (auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self)) {
        vsonnetdictionarycombobox->Sonnet::DictionaryComboBox::hideEvent(e);
    } else
        qFatal("Error: Protected virtual method Sonnet::DictionaryComboBox::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__DictionaryComboBox_OnHideEvent(Sonnet__DictionaryComboBox* self, intptr_t slot) {
    if (auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self))
        vsonnetdictionarycombobox->sonnet__dictionarycombobox_hideevent_callback = reinterpret_cast<VirtualSonnetDictionaryComboBox::Sonnet__DictionaryComboBox_HideEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__DictionaryComboBox_MousePressEvent(Sonnet__DictionaryComboBox* self, QMouseEvent* e) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox) {
        vsonnetdictionarycombobox->mousePressEvent(e);
    } else {
        qFatal("Error: Protected virtual method Sonnet::DictionaryComboBox::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__DictionaryComboBox_SuperMousePressEvent(Sonnet__DictionaryComboBox* self, QMouseEvent* e) {
    if (auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self)) {
        vsonnetdictionarycombobox->Sonnet::DictionaryComboBox::mousePressEvent(e);
    } else
        qFatal("Error: Protected virtual method Sonnet::DictionaryComboBox::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__DictionaryComboBox_OnMousePressEvent(Sonnet__DictionaryComboBox* self, intptr_t slot) {
    if (auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self))
        vsonnetdictionarycombobox->sonnet__dictionarycombobox_mousepressevent_callback = reinterpret_cast<VirtualSonnetDictionaryComboBox::Sonnet__DictionaryComboBox_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__DictionaryComboBox_MouseReleaseEvent(Sonnet__DictionaryComboBox* self, QMouseEvent* e) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox) {
        vsonnetdictionarycombobox->mouseReleaseEvent(e);
    } else {
        qFatal("Error: Protected virtual method Sonnet::DictionaryComboBox::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__DictionaryComboBox_SuperMouseReleaseEvent(Sonnet__DictionaryComboBox* self, QMouseEvent* e) {
    if (auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self)) {
        vsonnetdictionarycombobox->Sonnet::DictionaryComboBox::mouseReleaseEvent(e);
    } else
        qFatal("Error: Protected virtual method Sonnet::DictionaryComboBox::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__DictionaryComboBox_OnMouseReleaseEvent(Sonnet__DictionaryComboBox* self, intptr_t slot) {
    if (auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self))
        vsonnetdictionarycombobox->sonnet__dictionarycombobox_mousereleaseevent_callback = reinterpret_cast<VirtualSonnetDictionaryComboBox::Sonnet__DictionaryComboBox_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__DictionaryComboBox_KeyPressEvent(Sonnet__DictionaryComboBox* self, QKeyEvent* e) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox) {
        vsonnetdictionarycombobox->keyPressEvent(e);
    } else {
        qFatal("Error: Protected virtual method Sonnet::DictionaryComboBox::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__DictionaryComboBox_SuperKeyPressEvent(Sonnet__DictionaryComboBox* self, QKeyEvent* e) {
    if (auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self)) {
        vsonnetdictionarycombobox->Sonnet::DictionaryComboBox::keyPressEvent(e);
    } else
        qFatal("Error: Protected virtual method Sonnet::DictionaryComboBox::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__DictionaryComboBox_OnKeyPressEvent(Sonnet__DictionaryComboBox* self, intptr_t slot) {
    if (auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self))
        vsonnetdictionarycombobox->sonnet__dictionarycombobox_keypressevent_callback = reinterpret_cast<VirtualSonnetDictionaryComboBox::Sonnet__DictionaryComboBox_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__DictionaryComboBox_KeyReleaseEvent(Sonnet__DictionaryComboBox* self, QKeyEvent* e) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox) {
        vsonnetdictionarycombobox->keyReleaseEvent(e);
    } else {
        qFatal("Error: Protected virtual method Sonnet::DictionaryComboBox::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__DictionaryComboBox_SuperKeyReleaseEvent(Sonnet__DictionaryComboBox* self, QKeyEvent* e) {
    if (auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self)) {
        vsonnetdictionarycombobox->Sonnet::DictionaryComboBox::keyReleaseEvent(e);
    } else
        qFatal("Error: Protected virtual method Sonnet::DictionaryComboBox::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__DictionaryComboBox_OnKeyReleaseEvent(Sonnet__DictionaryComboBox* self, intptr_t slot) {
    if (auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self))
        vsonnetdictionarycombobox->sonnet__dictionarycombobox_keyreleaseevent_callback = reinterpret_cast<VirtualSonnetDictionaryComboBox::Sonnet__DictionaryComboBox_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__DictionaryComboBox_WheelEvent(Sonnet__DictionaryComboBox* self, QWheelEvent* e) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox) {
        vsonnetdictionarycombobox->wheelEvent(e);
    } else {
        qFatal("Error: Protected virtual method Sonnet::DictionaryComboBox::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__DictionaryComboBox_SuperWheelEvent(Sonnet__DictionaryComboBox* self, QWheelEvent* e) {
    if (auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self)) {
        vsonnetdictionarycombobox->Sonnet::DictionaryComboBox::wheelEvent(e);
    } else
        qFatal("Error: Protected virtual method Sonnet::DictionaryComboBox::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__DictionaryComboBox_OnWheelEvent(Sonnet__DictionaryComboBox* self, intptr_t slot) {
    if (auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self))
        vsonnetdictionarycombobox->sonnet__dictionarycombobox_wheelevent_callback = reinterpret_cast<VirtualSonnetDictionaryComboBox::Sonnet__DictionaryComboBox_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__DictionaryComboBox_ContextMenuEvent(Sonnet__DictionaryComboBox* self, QContextMenuEvent* e) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox) {
        vsonnetdictionarycombobox->contextMenuEvent(e);
    } else {
        qFatal("Error: Protected virtual method Sonnet::DictionaryComboBox::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__DictionaryComboBox_SuperContextMenuEvent(Sonnet__DictionaryComboBox* self, QContextMenuEvent* e) {
    if (auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self)) {
        vsonnetdictionarycombobox->Sonnet::DictionaryComboBox::contextMenuEvent(e);
    } else
        qFatal("Error: Protected virtual method Sonnet::DictionaryComboBox::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__DictionaryComboBox_OnContextMenuEvent(Sonnet__DictionaryComboBox* self, intptr_t slot) {
    if (auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self))
        vsonnetdictionarycombobox->sonnet__dictionarycombobox_contextmenuevent_callback = reinterpret_cast<VirtualSonnetDictionaryComboBox::Sonnet__DictionaryComboBox_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__DictionaryComboBox_InputMethodEvent(Sonnet__DictionaryComboBox* self, QInputMethodEvent* param1) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox) {
        vsonnetdictionarycombobox->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method Sonnet::DictionaryComboBox::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__DictionaryComboBox_SuperInputMethodEvent(Sonnet__DictionaryComboBox* self, QInputMethodEvent* param1) {
    if (auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self)) {
        vsonnetdictionarycombobox->Sonnet::DictionaryComboBox::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method Sonnet::DictionaryComboBox::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__DictionaryComboBox_OnInputMethodEvent(Sonnet__DictionaryComboBox* self, intptr_t slot) {
    if (auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self))
        vsonnetdictionarycombobox->sonnet__dictionarycombobox_inputmethodevent_callback = reinterpret_cast<VirtualSonnetDictionaryComboBox::Sonnet__DictionaryComboBox_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__DictionaryComboBox_InitStyleOption(const Sonnet__DictionaryComboBox* self, QStyleOptionComboBox* option) {
    auto* vsonnetdictionarycombobox = const_cast<VirtualSonnetDictionaryComboBox*>(dynamic_cast<const VirtualSonnetDictionaryComboBox*>(self));
    if (vsonnetdictionarycombobox) {
        vsonnetdictionarycombobox->initStyleOption(option);
    } else {
        qFatal("Error: Protected virtual method Sonnet::DictionaryComboBox::initStyleOption called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__DictionaryComboBox_SuperInitStyleOption(const Sonnet__DictionaryComboBox* self, QStyleOptionComboBox* option) {
    if (auto* vsonnetdictionarycombobox = const_cast<VirtualSonnetDictionaryComboBox*>(dynamic_cast<const VirtualSonnetDictionaryComboBox*>(self))) {
        vsonnetdictionarycombobox->Sonnet::DictionaryComboBox::initStyleOption(option);
    } else
        qFatal("Error: Protected virtual method Sonnet::DictionaryComboBox::initStyleOption called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__DictionaryComboBox_OnInitStyleOption(Sonnet__DictionaryComboBox* self, intptr_t slot) {
    if (auto* vsonnetdictionarycombobox = const_cast<VirtualSonnetDictionaryComboBox*>(dynamic_cast<const VirtualSonnetDictionaryComboBox*>(self)))
        vsonnetdictionarycombobox->sonnet__dictionarycombobox_initstyleoption_callback = reinterpret_cast<VirtualSonnetDictionaryComboBox::Sonnet__DictionaryComboBox_InitStyleOption_Callback>(slot);
}

// Derived class handler implementation
int Sonnet__DictionaryComboBox_DevType(const Sonnet__DictionaryComboBox* self) {
    return self->devType();
}

// Base class handler implementation
int Sonnet__DictionaryComboBox_SuperDevType(const Sonnet__DictionaryComboBox* self) {
    return self->Sonnet::DictionaryComboBox::devType();
}

// Auxiliary method to allow providing re-implementation
void Sonnet__DictionaryComboBox_OnDevType(Sonnet__DictionaryComboBox* self, intptr_t slot) {
    if (auto* vsonnetdictionarycombobox = const_cast<VirtualSonnetDictionaryComboBox*>(dynamic_cast<const VirtualSonnetDictionaryComboBox*>(self)))
        vsonnetdictionarycombobox->sonnet__dictionarycombobox_devtype_callback = reinterpret_cast<VirtualSonnetDictionaryComboBox::Sonnet__DictionaryComboBox_DevType_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__DictionaryComboBox_SetVisible(Sonnet__DictionaryComboBox* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void Sonnet__DictionaryComboBox_SuperSetVisible(Sonnet__DictionaryComboBox* self, bool visible) {
    self->Sonnet::DictionaryComboBox::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void Sonnet__DictionaryComboBox_OnSetVisible(Sonnet__DictionaryComboBox* self, intptr_t slot) {
    if (auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self))
        vsonnetdictionarycombobox->sonnet__dictionarycombobox_setvisible_callback = reinterpret_cast<VirtualSonnetDictionaryComboBox::Sonnet__DictionaryComboBox_SetVisible_Callback>(slot);
}

// Derived class handler implementation
int Sonnet__DictionaryComboBox_HeightForWidth(const Sonnet__DictionaryComboBox* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int Sonnet__DictionaryComboBox_SuperHeightForWidth(const Sonnet__DictionaryComboBox* self, int param1) {
    return self->Sonnet::DictionaryComboBox::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void Sonnet__DictionaryComboBox_OnHeightForWidth(Sonnet__DictionaryComboBox* self, intptr_t slot) {
    if (auto* vsonnetdictionarycombobox = const_cast<VirtualSonnetDictionaryComboBox*>(dynamic_cast<const VirtualSonnetDictionaryComboBox*>(self)))
        vsonnetdictionarycombobox->sonnet__dictionarycombobox_heightforwidth_callback = reinterpret_cast<VirtualSonnetDictionaryComboBox::Sonnet__DictionaryComboBox_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool Sonnet__DictionaryComboBox_HasHeightForWidth(const Sonnet__DictionaryComboBox* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool Sonnet__DictionaryComboBox_SuperHasHeightForWidth(const Sonnet__DictionaryComboBox* self) {
    return self->Sonnet::DictionaryComboBox::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void Sonnet__DictionaryComboBox_OnHasHeightForWidth(Sonnet__DictionaryComboBox* self, intptr_t slot) {
    if (auto* vsonnetdictionarycombobox = const_cast<VirtualSonnetDictionaryComboBox*>(dynamic_cast<const VirtualSonnetDictionaryComboBox*>(self)))
        vsonnetdictionarycombobox->sonnet__dictionarycombobox_hasheightforwidth_callback = reinterpret_cast<VirtualSonnetDictionaryComboBox::Sonnet__DictionaryComboBox_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* Sonnet__DictionaryComboBox_PaintEngine(const Sonnet__DictionaryComboBox* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* Sonnet__DictionaryComboBox_SuperPaintEngine(const Sonnet__DictionaryComboBox* self) {
    return self->Sonnet::DictionaryComboBox::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void Sonnet__DictionaryComboBox_OnPaintEngine(Sonnet__DictionaryComboBox* self, intptr_t slot) {
    if (auto* vsonnetdictionarycombobox = const_cast<VirtualSonnetDictionaryComboBox*>(dynamic_cast<const VirtualSonnetDictionaryComboBox*>(self)))
        vsonnetdictionarycombobox->sonnet__dictionarycombobox_paintengine_callback = reinterpret_cast<VirtualSonnetDictionaryComboBox::Sonnet__DictionaryComboBox_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__DictionaryComboBox_MouseDoubleClickEvent(Sonnet__DictionaryComboBox* self, QMouseEvent* event) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox) {
        vsonnetdictionarycombobox->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method Sonnet::DictionaryComboBox::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__DictionaryComboBox_SuperMouseDoubleClickEvent(Sonnet__DictionaryComboBox* self, QMouseEvent* event) {
    if (auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self)) {
        vsonnetdictionarycombobox->Sonnet::DictionaryComboBox::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method Sonnet::DictionaryComboBox::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__DictionaryComboBox_OnMouseDoubleClickEvent(Sonnet__DictionaryComboBox* self, intptr_t slot) {
    if (auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self))
        vsonnetdictionarycombobox->sonnet__dictionarycombobox_mousedoubleclickevent_callback = reinterpret_cast<VirtualSonnetDictionaryComboBox::Sonnet__DictionaryComboBox_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__DictionaryComboBox_MouseMoveEvent(Sonnet__DictionaryComboBox* self, QMouseEvent* event) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox) {
        vsonnetdictionarycombobox->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method Sonnet::DictionaryComboBox::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__DictionaryComboBox_SuperMouseMoveEvent(Sonnet__DictionaryComboBox* self, QMouseEvent* event) {
    if (auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self)) {
        vsonnetdictionarycombobox->Sonnet::DictionaryComboBox::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method Sonnet::DictionaryComboBox::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__DictionaryComboBox_OnMouseMoveEvent(Sonnet__DictionaryComboBox* self, intptr_t slot) {
    if (auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self))
        vsonnetdictionarycombobox->sonnet__dictionarycombobox_mousemoveevent_callback = reinterpret_cast<VirtualSonnetDictionaryComboBox::Sonnet__DictionaryComboBox_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__DictionaryComboBox_EnterEvent(Sonnet__DictionaryComboBox* self, QEnterEvent* event) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox) {
        vsonnetdictionarycombobox->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method Sonnet::DictionaryComboBox::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__DictionaryComboBox_SuperEnterEvent(Sonnet__DictionaryComboBox* self, QEnterEvent* event) {
    if (auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self)) {
        vsonnetdictionarycombobox->Sonnet::DictionaryComboBox::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method Sonnet::DictionaryComboBox::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__DictionaryComboBox_OnEnterEvent(Sonnet__DictionaryComboBox* self, intptr_t slot) {
    if (auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self))
        vsonnetdictionarycombobox->sonnet__dictionarycombobox_enterevent_callback = reinterpret_cast<VirtualSonnetDictionaryComboBox::Sonnet__DictionaryComboBox_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__DictionaryComboBox_LeaveEvent(Sonnet__DictionaryComboBox* self, QEvent* event) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox) {
        vsonnetdictionarycombobox->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method Sonnet::DictionaryComboBox::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__DictionaryComboBox_SuperLeaveEvent(Sonnet__DictionaryComboBox* self, QEvent* event) {
    if (auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self)) {
        vsonnetdictionarycombobox->Sonnet::DictionaryComboBox::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method Sonnet::DictionaryComboBox::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__DictionaryComboBox_OnLeaveEvent(Sonnet__DictionaryComboBox* self, intptr_t slot) {
    if (auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self))
        vsonnetdictionarycombobox->sonnet__dictionarycombobox_leaveevent_callback = reinterpret_cast<VirtualSonnetDictionaryComboBox::Sonnet__DictionaryComboBox_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__DictionaryComboBox_MoveEvent(Sonnet__DictionaryComboBox* self, QMoveEvent* event) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox) {
        vsonnetdictionarycombobox->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method Sonnet::DictionaryComboBox::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__DictionaryComboBox_SuperMoveEvent(Sonnet__DictionaryComboBox* self, QMoveEvent* event) {
    if (auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self)) {
        vsonnetdictionarycombobox->Sonnet::DictionaryComboBox::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method Sonnet::DictionaryComboBox::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__DictionaryComboBox_OnMoveEvent(Sonnet__DictionaryComboBox* self, intptr_t slot) {
    if (auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self))
        vsonnetdictionarycombobox->sonnet__dictionarycombobox_moveevent_callback = reinterpret_cast<VirtualSonnetDictionaryComboBox::Sonnet__DictionaryComboBox_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__DictionaryComboBox_CloseEvent(Sonnet__DictionaryComboBox* self, QCloseEvent* event) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox) {
        vsonnetdictionarycombobox->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method Sonnet::DictionaryComboBox::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__DictionaryComboBox_SuperCloseEvent(Sonnet__DictionaryComboBox* self, QCloseEvent* event) {
    if (auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self)) {
        vsonnetdictionarycombobox->Sonnet::DictionaryComboBox::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method Sonnet::DictionaryComboBox::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__DictionaryComboBox_OnCloseEvent(Sonnet__DictionaryComboBox* self, intptr_t slot) {
    if (auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self))
        vsonnetdictionarycombobox->sonnet__dictionarycombobox_closeevent_callback = reinterpret_cast<VirtualSonnetDictionaryComboBox::Sonnet__DictionaryComboBox_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__DictionaryComboBox_TabletEvent(Sonnet__DictionaryComboBox* self, QTabletEvent* event) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox) {
        vsonnetdictionarycombobox->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method Sonnet::DictionaryComboBox::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__DictionaryComboBox_SuperTabletEvent(Sonnet__DictionaryComboBox* self, QTabletEvent* event) {
    if (auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self)) {
        vsonnetdictionarycombobox->Sonnet::DictionaryComboBox::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method Sonnet::DictionaryComboBox::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__DictionaryComboBox_OnTabletEvent(Sonnet__DictionaryComboBox* self, intptr_t slot) {
    if (auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self))
        vsonnetdictionarycombobox->sonnet__dictionarycombobox_tabletevent_callback = reinterpret_cast<VirtualSonnetDictionaryComboBox::Sonnet__DictionaryComboBox_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__DictionaryComboBox_ActionEvent(Sonnet__DictionaryComboBox* self, QActionEvent* event) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox) {
        vsonnetdictionarycombobox->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method Sonnet::DictionaryComboBox::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__DictionaryComboBox_SuperActionEvent(Sonnet__DictionaryComboBox* self, QActionEvent* event) {
    if (auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self)) {
        vsonnetdictionarycombobox->Sonnet::DictionaryComboBox::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method Sonnet::DictionaryComboBox::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__DictionaryComboBox_OnActionEvent(Sonnet__DictionaryComboBox* self, intptr_t slot) {
    if (auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self))
        vsonnetdictionarycombobox->sonnet__dictionarycombobox_actionevent_callback = reinterpret_cast<VirtualSonnetDictionaryComboBox::Sonnet__DictionaryComboBox_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__DictionaryComboBox_DragEnterEvent(Sonnet__DictionaryComboBox* self, QDragEnterEvent* event) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox) {
        vsonnetdictionarycombobox->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method Sonnet::DictionaryComboBox::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__DictionaryComboBox_SuperDragEnterEvent(Sonnet__DictionaryComboBox* self, QDragEnterEvent* event) {
    if (auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self)) {
        vsonnetdictionarycombobox->Sonnet::DictionaryComboBox::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method Sonnet::DictionaryComboBox::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__DictionaryComboBox_OnDragEnterEvent(Sonnet__DictionaryComboBox* self, intptr_t slot) {
    if (auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self))
        vsonnetdictionarycombobox->sonnet__dictionarycombobox_dragenterevent_callback = reinterpret_cast<VirtualSonnetDictionaryComboBox::Sonnet__DictionaryComboBox_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__DictionaryComboBox_DragMoveEvent(Sonnet__DictionaryComboBox* self, QDragMoveEvent* event) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox) {
        vsonnetdictionarycombobox->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method Sonnet::DictionaryComboBox::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__DictionaryComboBox_SuperDragMoveEvent(Sonnet__DictionaryComboBox* self, QDragMoveEvent* event) {
    if (auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self)) {
        vsonnetdictionarycombobox->Sonnet::DictionaryComboBox::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method Sonnet::DictionaryComboBox::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__DictionaryComboBox_OnDragMoveEvent(Sonnet__DictionaryComboBox* self, intptr_t slot) {
    if (auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self))
        vsonnetdictionarycombobox->sonnet__dictionarycombobox_dragmoveevent_callback = reinterpret_cast<VirtualSonnetDictionaryComboBox::Sonnet__DictionaryComboBox_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__DictionaryComboBox_DragLeaveEvent(Sonnet__DictionaryComboBox* self, QDragLeaveEvent* event) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox) {
        vsonnetdictionarycombobox->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method Sonnet::DictionaryComboBox::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__DictionaryComboBox_SuperDragLeaveEvent(Sonnet__DictionaryComboBox* self, QDragLeaveEvent* event) {
    if (auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self)) {
        vsonnetdictionarycombobox->Sonnet::DictionaryComboBox::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method Sonnet::DictionaryComboBox::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__DictionaryComboBox_OnDragLeaveEvent(Sonnet__DictionaryComboBox* self, intptr_t slot) {
    if (auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self))
        vsonnetdictionarycombobox->sonnet__dictionarycombobox_dragleaveevent_callback = reinterpret_cast<VirtualSonnetDictionaryComboBox::Sonnet__DictionaryComboBox_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__DictionaryComboBox_DropEvent(Sonnet__DictionaryComboBox* self, QDropEvent* event) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox) {
        vsonnetdictionarycombobox->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method Sonnet::DictionaryComboBox::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__DictionaryComboBox_SuperDropEvent(Sonnet__DictionaryComboBox* self, QDropEvent* event) {
    if (auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self)) {
        vsonnetdictionarycombobox->Sonnet::DictionaryComboBox::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method Sonnet::DictionaryComboBox::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__DictionaryComboBox_OnDropEvent(Sonnet__DictionaryComboBox* self, intptr_t slot) {
    if (auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self))
        vsonnetdictionarycombobox->sonnet__dictionarycombobox_dropevent_callback = reinterpret_cast<VirtualSonnetDictionaryComboBox::Sonnet__DictionaryComboBox_DropEvent_Callback>(slot);
}

// Derived class handler implementation
bool Sonnet__DictionaryComboBox_NativeEvent(Sonnet__DictionaryComboBox* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox) {
        return vsonnetdictionarycombobox->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method Sonnet::DictionaryComboBox::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool Sonnet__DictionaryComboBox_SuperNativeEvent(Sonnet__DictionaryComboBox* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self)) {
        return vsonnetdictionarycombobox->Sonnet::DictionaryComboBox::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method Sonnet::DictionaryComboBox::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__DictionaryComboBox_OnNativeEvent(Sonnet__DictionaryComboBox* self, intptr_t slot) {
    if (auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self))
        vsonnetdictionarycombobox->sonnet__dictionarycombobox_nativeevent_callback = reinterpret_cast<VirtualSonnetDictionaryComboBox::Sonnet__DictionaryComboBox_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
int Sonnet__DictionaryComboBox_Metric(const Sonnet__DictionaryComboBox* self, int param1) {
    auto* vsonnetdictionarycombobox = const_cast<VirtualSonnetDictionaryComboBox*>(dynamic_cast<const VirtualSonnetDictionaryComboBox*>(self));
    if (vsonnetdictionarycombobox) {
        return vsonnetdictionarycombobox->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method Sonnet::DictionaryComboBox::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int Sonnet__DictionaryComboBox_SuperMetric(const Sonnet__DictionaryComboBox* self, int param1) {
    if (auto* vsonnetdictionarycombobox = const_cast<VirtualSonnetDictionaryComboBox*>(dynamic_cast<const VirtualSonnetDictionaryComboBox*>(self))) {
        return vsonnetdictionarycombobox->Sonnet::DictionaryComboBox::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method Sonnet::DictionaryComboBox::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__DictionaryComboBox_OnMetric(Sonnet__DictionaryComboBox* self, intptr_t slot) {
    if (auto* vsonnetdictionarycombobox = const_cast<VirtualSonnetDictionaryComboBox*>(dynamic_cast<const VirtualSonnetDictionaryComboBox*>(self)))
        vsonnetdictionarycombobox->sonnet__dictionarycombobox_metric_callback = reinterpret_cast<VirtualSonnetDictionaryComboBox::Sonnet__DictionaryComboBox_Metric_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__DictionaryComboBox_InitPainter(const Sonnet__DictionaryComboBox* self, QPainter* painter) {
    auto* vsonnetdictionarycombobox = const_cast<VirtualSonnetDictionaryComboBox*>(dynamic_cast<const VirtualSonnetDictionaryComboBox*>(self));
    if (vsonnetdictionarycombobox) {
        vsonnetdictionarycombobox->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method Sonnet::DictionaryComboBox::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__DictionaryComboBox_SuperInitPainter(const Sonnet__DictionaryComboBox* self, QPainter* painter) {
    if (auto* vsonnetdictionarycombobox = const_cast<VirtualSonnetDictionaryComboBox*>(dynamic_cast<const VirtualSonnetDictionaryComboBox*>(self))) {
        vsonnetdictionarycombobox->Sonnet::DictionaryComboBox::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method Sonnet::DictionaryComboBox::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__DictionaryComboBox_OnInitPainter(Sonnet__DictionaryComboBox* self, intptr_t slot) {
    if (auto* vsonnetdictionarycombobox = const_cast<VirtualSonnetDictionaryComboBox*>(dynamic_cast<const VirtualSonnetDictionaryComboBox*>(self)))
        vsonnetdictionarycombobox->sonnet__dictionarycombobox_initpainter_callback = reinterpret_cast<VirtualSonnetDictionaryComboBox::Sonnet__DictionaryComboBox_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* Sonnet__DictionaryComboBox_Redirected(const Sonnet__DictionaryComboBox* self, QPoint* offset) {
    auto* vsonnetdictionarycombobox = const_cast<VirtualSonnetDictionaryComboBox*>(dynamic_cast<const VirtualSonnetDictionaryComboBox*>(self));
    if (vsonnetdictionarycombobox) {
        return vsonnetdictionarycombobox->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method Sonnet::DictionaryComboBox::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* Sonnet__DictionaryComboBox_SuperRedirected(const Sonnet__DictionaryComboBox* self, QPoint* offset) {
    if (auto* vsonnetdictionarycombobox = const_cast<VirtualSonnetDictionaryComboBox*>(dynamic_cast<const VirtualSonnetDictionaryComboBox*>(self))) {
        return vsonnetdictionarycombobox->Sonnet::DictionaryComboBox::redirected(offset);
    } else
        qFatal("Error: Protected virtual method Sonnet::DictionaryComboBox::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__DictionaryComboBox_OnRedirected(Sonnet__DictionaryComboBox* self, intptr_t slot) {
    if (auto* vsonnetdictionarycombobox = const_cast<VirtualSonnetDictionaryComboBox*>(dynamic_cast<const VirtualSonnetDictionaryComboBox*>(self)))
        vsonnetdictionarycombobox->sonnet__dictionarycombobox_redirected_callback = reinterpret_cast<VirtualSonnetDictionaryComboBox::Sonnet__DictionaryComboBox_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* Sonnet__DictionaryComboBox_SharedPainter(const Sonnet__DictionaryComboBox* self) {
    auto* vsonnetdictionarycombobox = const_cast<VirtualSonnetDictionaryComboBox*>(dynamic_cast<const VirtualSonnetDictionaryComboBox*>(self));
    if (vsonnetdictionarycombobox) {
        return vsonnetdictionarycombobox->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method Sonnet::DictionaryComboBox::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* Sonnet__DictionaryComboBox_SuperSharedPainter(const Sonnet__DictionaryComboBox* self) {
    if (auto* vsonnetdictionarycombobox = const_cast<VirtualSonnetDictionaryComboBox*>(dynamic_cast<const VirtualSonnetDictionaryComboBox*>(self))) {
        return vsonnetdictionarycombobox->Sonnet::DictionaryComboBox::sharedPainter();
    } else
        qFatal("Error: Protected virtual method Sonnet::DictionaryComboBox::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__DictionaryComboBox_OnSharedPainter(Sonnet__DictionaryComboBox* self, intptr_t slot) {
    if (auto* vsonnetdictionarycombobox = const_cast<VirtualSonnetDictionaryComboBox*>(dynamic_cast<const VirtualSonnetDictionaryComboBox*>(self)))
        vsonnetdictionarycombobox->sonnet__dictionarycombobox_sharedpainter_callback = reinterpret_cast<VirtualSonnetDictionaryComboBox::Sonnet__DictionaryComboBox_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
bool Sonnet__DictionaryComboBox_FocusNextPrevChild(Sonnet__DictionaryComboBox* self, bool next) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox) {
        return vsonnetdictionarycombobox->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method Sonnet::DictionaryComboBox::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool Sonnet__DictionaryComboBox_SuperFocusNextPrevChild(Sonnet__DictionaryComboBox* self, bool next) {
    if (auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self)) {
        return vsonnetdictionarycombobox->Sonnet::DictionaryComboBox::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method Sonnet::DictionaryComboBox::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__DictionaryComboBox_OnFocusNextPrevChild(Sonnet__DictionaryComboBox* self, intptr_t slot) {
    if (auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self))
        vsonnetdictionarycombobox->sonnet__dictionarycombobox_focusnextprevchild_callback = reinterpret_cast<VirtualSonnetDictionaryComboBox::Sonnet__DictionaryComboBox_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
bool Sonnet__DictionaryComboBox_EventFilter(Sonnet__DictionaryComboBox* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool Sonnet__DictionaryComboBox_SuperEventFilter(Sonnet__DictionaryComboBox* self, QObject* watched, QEvent* event) {
    return self->Sonnet::DictionaryComboBox::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void Sonnet__DictionaryComboBox_OnEventFilter(Sonnet__DictionaryComboBox* self, intptr_t slot) {
    if (auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self))
        vsonnetdictionarycombobox->sonnet__dictionarycombobox_eventfilter_callback = reinterpret_cast<VirtualSonnetDictionaryComboBox::Sonnet__DictionaryComboBox_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__DictionaryComboBox_TimerEvent(Sonnet__DictionaryComboBox* self, QTimerEvent* event) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox) {
        vsonnetdictionarycombobox->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method Sonnet::DictionaryComboBox::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__DictionaryComboBox_SuperTimerEvent(Sonnet__DictionaryComboBox* self, QTimerEvent* event) {
    if (auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self)) {
        vsonnetdictionarycombobox->Sonnet::DictionaryComboBox::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method Sonnet::DictionaryComboBox::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__DictionaryComboBox_OnTimerEvent(Sonnet__DictionaryComboBox* self, intptr_t slot) {
    if (auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self))
        vsonnetdictionarycombobox->sonnet__dictionarycombobox_timerevent_callback = reinterpret_cast<VirtualSonnetDictionaryComboBox::Sonnet__DictionaryComboBox_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__DictionaryComboBox_ChildEvent(Sonnet__DictionaryComboBox* self, QChildEvent* event) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox) {
        vsonnetdictionarycombobox->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method Sonnet::DictionaryComboBox::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__DictionaryComboBox_SuperChildEvent(Sonnet__DictionaryComboBox* self, QChildEvent* event) {
    if (auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self)) {
        vsonnetdictionarycombobox->Sonnet::DictionaryComboBox::childEvent(event);
    } else
        qFatal("Error: Protected virtual method Sonnet::DictionaryComboBox::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__DictionaryComboBox_OnChildEvent(Sonnet__DictionaryComboBox* self, intptr_t slot) {
    if (auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self))
        vsonnetdictionarycombobox->sonnet__dictionarycombobox_childevent_callback = reinterpret_cast<VirtualSonnetDictionaryComboBox::Sonnet__DictionaryComboBox_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__DictionaryComboBox_CustomEvent(Sonnet__DictionaryComboBox* self, QEvent* event) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox) {
        vsonnetdictionarycombobox->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method Sonnet::DictionaryComboBox::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__DictionaryComboBox_SuperCustomEvent(Sonnet__DictionaryComboBox* self, QEvent* event) {
    if (auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self)) {
        vsonnetdictionarycombobox->Sonnet::DictionaryComboBox::customEvent(event);
    } else
        qFatal("Error: Protected virtual method Sonnet::DictionaryComboBox::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__DictionaryComboBox_OnCustomEvent(Sonnet__DictionaryComboBox* self, intptr_t slot) {
    if (auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self))
        vsonnetdictionarycombobox->sonnet__dictionarycombobox_customevent_callback = reinterpret_cast<VirtualSonnetDictionaryComboBox::Sonnet__DictionaryComboBox_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__DictionaryComboBox_ConnectNotify(Sonnet__DictionaryComboBox* self, const QMetaMethod* signal) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox) {
        vsonnetdictionarycombobox->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method Sonnet::DictionaryComboBox::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__DictionaryComboBox_SuperConnectNotify(Sonnet__DictionaryComboBox* self, const QMetaMethod* signal) {
    if (auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self)) {
        vsonnetdictionarycombobox->Sonnet::DictionaryComboBox::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method Sonnet::DictionaryComboBox::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__DictionaryComboBox_OnConnectNotify(Sonnet__DictionaryComboBox* self, intptr_t slot) {
    if (auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self))
        vsonnetdictionarycombobox->sonnet__dictionarycombobox_connectnotify_callback = reinterpret_cast<VirtualSonnetDictionaryComboBox::Sonnet__DictionaryComboBox_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__DictionaryComboBox_DisconnectNotify(Sonnet__DictionaryComboBox* self, const QMetaMethod* signal) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox) {
        vsonnetdictionarycombobox->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method Sonnet::DictionaryComboBox::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__DictionaryComboBox_SuperDisconnectNotify(Sonnet__DictionaryComboBox* self, const QMetaMethod* signal) {
    if (auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self)) {
        vsonnetdictionarycombobox->Sonnet::DictionaryComboBox::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method Sonnet::DictionaryComboBox::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__DictionaryComboBox_OnDisconnectNotify(Sonnet__DictionaryComboBox* self, intptr_t slot) {
    if (auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self))
        vsonnetdictionarycombobox->sonnet__dictionarycombobox_disconnectnotify_callback = reinterpret_cast<VirtualSonnetDictionaryComboBox::Sonnet__DictionaryComboBox_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void Sonnet__DictionaryComboBox_UpdateMicroFocus(Sonnet__DictionaryComboBox* self) {
    if (auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self)) {
        vsonnetdictionarycombobox->VirtualSonnetDictionaryComboBox::updateMicroFocus();
    } else
        qFatal("Error: Protected method Sonnet::DictionaryComboBox::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void Sonnet__DictionaryComboBox_Create(Sonnet__DictionaryComboBox* self) {
    if (auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self)) {
        vsonnetdictionarycombobox->VirtualSonnetDictionaryComboBox::create();
    } else
        qFatal("Error: Protected method Sonnet::DictionaryComboBox::create called without a directly constructed type");
}

// Derived class protected handler implementation
void Sonnet__DictionaryComboBox_Destroy(Sonnet__DictionaryComboBox* self) {
    if (auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self)) {
        vsonnetdictionarycombobox->VirtualSonnetDictionaryComboBox::destroy();
    } else
        qFatal("Error: Protected method Sonnet::DictionaryComboBox::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool Sonnet__DictionaryComboBox_FocusNextChild(Sonnet__DictionaryComboBox* self) {
    if (auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self)) {
        return vsonnetdictionarycombobox->VirtualSonnetDictionaryComboBox::focusNextChild();
    } else
        qFatal("Error: Protected method Sonnet::DictionaryComboBox::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool Sonnet__DictionaryComboBox_FocusPreviousChild(Sonnet__DictionaryComboBox* self) {
    if (auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self)) {
        return vsonnetdictionarycombobox->VirtualSonnetDictionaryComboBox::focusPreviousChild();
    } else
        qFatal("Error: Protected method Sonnet::DictionaryComboBox::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* Sonnet__DictionaryComboBox_Sender(const Sonnet__DictionaryComboBox* self) {
    if (auto* vsonnetdictionarycombobox = const_cast<VirtualSonnetDictionaryComboBox*>(dynamic_cast<const VirtualSonnetDictionaryComboBox*>(self))) {
        return vsonnetdictionarycombobox->VirtualSonnetDictionaryComboBox::sender();
    } else
        qFatal("Error: Protected method Sonnet::DictionaryComboBox::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int Sonnet__DictionaryComboBox_SenderSignalIndex(const Sonnet__DictionaryComboBox* self) {
    if (auto* vsonnetdictionarycombobox = const_cast<VirtualSonnetDictionaryComboBox*>(dynamic_cast<const VirtualSonnetDictionaryComboBox*>(self))) {
        return vsonnetdictionarycombobox->VirtualSonnetDictionaryComboBox::senderSignalIndex();
    } else
        qFatal("Error: Protected method Sonnet::DictionaryComboBox::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int Sonnet__DictionaryComboBox_Receivers(const Sonnet__DictionaryComboBox* self, const char* signal) {
    if (auto* vsonnetdictionarycombobox = const_cast<VirtualSonnetDictionaryComboBox*>(dynamic_cast<const VirtualSonnetDictionaryComboBox*>(self))) {
        return vsonnetdictionarycombobox->VirtualSonnetDictionaryComboBox::receivers(signal);
    } else
        qFatal("Error: Protected method Sonnet::DictionaryComboBox::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool Sonnet__DictionaryComboBox_IsSignalConnected(const Sonnet__DictionaryComboBox* self, const QMetaMethod* signal) {
    if (auto* vsonnetdictionarycombobox = const_cast<VirtualSonnetDictionaryComboBox*>(dynamic_cast<const VirtualSonnetDictionaryComboBox*>(self))) {
        return vsonnetdictionarycombobox->VirtualSonnetDictionaryComboBox::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method Sonnet::DictionaryComboBox::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double Sonnet__DictionaryComboBox_GetDecodedMetricF(const Sonnet__DictionaryComboBox* self, int metricA, int metricB) {
    if (auto* vsonnetdictionarycombobox = const_cast<VirtualSonnetDictionaryComboBox*>(dynamic_cast<const VirtualSonnetDictionaryComboBox*>(self))) {
        return vsonnetdictionarycombobox->VirtualSonnetDictionaryComboBox::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method Sonnet::DictionaryComboBox::getDecodedMetricF called without a directly constructed type");
}

void Sonnet__DictionaryComboBox_Delete(Sonnet__DictionaryComboBox* self) {
    delete self;
}
