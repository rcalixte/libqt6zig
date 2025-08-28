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
#include <QByteArray>
#include <cstring>
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
    auto* vsonnet__dictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnet__dictionarycombobox && vsonnet__dictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualSonnetDictionaryComboBox*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string Sonnet__DictionaryComboBox_Tr(const char* s) {
    QString _ret = Sonnet::DictionaryComboBox::tr(s);
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
    QString _ret = self->currentDictionaryName();
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
    QString _ret = self->currentDictionary();
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
    Sonnet::DictionaryComboBox::connect(self, &Sonnet::DictionaryComboBox::dictionaryChanged, [self, slotFunc](const QString& dictionary) {
        const QString dictionary_ret = dictionary;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray dictionary_b = dictionary_ret.toUtf8();
        const char* dictionary_str = static_cast<const char*>(malloc(dictionary_b.length() + 1));
        memcpy((void*)dictionary_str, dictionary_b.data(), dictionary_b.length());
        ((char*)dictionary_str)[dictionary_b.length()] = '\0';
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
    Sonnet::DictionaryComboBox::connect(self, &Sonnet::DictionaryComboBox::dictionaryNameChanged, [self, slotFunc](const QString& dictionaryName) {
        const QString dictionaryName_ret = dictionaryName;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray dictionaryName_b = dictionaryName_ret.toUtf8();
        const char* dictionaryName_str = static_cast<const char*>(malloc(dictionaryName_b.length() + 1));
        memcpy((void*)dictionaryName_str, dictionaryName_b.data(), dictionaryName_b.length());
        ((char*)dictionaryName_str)[dictionaryName_b.length()] = '\0';
        const char* sigval1 = dictionaryName_str;
        slotFunc(self, sigval1);
        libqt_free(dictionaryName_str);
    });
}

libqt_string Sonnet__DictionaryComboBox_Tr2(const char* s, const char* c) {
    QString _ret = Sonnet::DictionaryComboBox::tr(s, c);
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
    QString _ret = Sonnet::DictionaryComboBox::tr(s, c, static_cast<int>(n));
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
int Sonnet__DictionaryComboBox_QBaseMetacall(Sonnet__DictionaryComboBox* self, int param1, int param2, void** param3) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->setSonnet__DictionaryComboBox_Metacall_IsBase(true);
        return vsonnetdictionarycombobox->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->Sonnet::DictionaryComboBox::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__DictionaryComboBox_OnMetacall(Sonnet__DictionaryComboBox* self, intptr_t slot) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->setSonnet__DictionaryComboBox_Metacall_Callback(reinterpret_cast<VirtualSonnetDictionaryComboBox::Sonnet__DictionaryComboBox_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__DictionaryComboBox_SetModel(Sonnet__DictionaryComboBox* self, QAbstractItemModel* model) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->setModel(model);
    } else {
        self->Sonnet::DictionaryComboBox::setModel(model);
    }
}

// Base class handler implementation
void Sonnet__DictionaryComboBox_QBaseSetModel(Sonnet__DictionaryComboBox* self, QAbstractItemModel* model) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->setSonnet__DictionaryComboBox_SetModel_IsBase(true);
        vsonnetdictionarycombobox->setModel(model);
    } else {
        self->Sonnet::DictionaryComboBox::setModel(model);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__DictionaryComboBox_OnSetModel(Sonnet__DictionaryComboBox* self, intptr_t slot) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->setSonnet__DictionaryComboBox_SetModel_Callback(reinterpret_cast<VirtualSonnetDictionaryComboBox::Sonnet__DictionaryComboBox_SetModel_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* Sonnet__DictionaryComboBox_SizeHint(const Sonnet__DictionaryComboBox* self) {
    auto* vsonnetdictionarycombobox = const_cast<VirtualSonnetDictionaryComboBox*>(dynamic_cast<const VirtualSonnetDictionaryComboBox*>(self));
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        return new QSize(vsonnetdictionarycombobox->sizeHint());
    } else {
        return new QSize(((VirtualSonnetDictionaryComboBox*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* Sonnet__DictionaryComboBox_QBaseSizeHint(const Sonnet__DictionaryComboBox* self) {
    auto* vsonnetdictionarycombobox = const_cast<VirtualSonnetDictionaryComboBox*>(dynamic_cast<const VirtualSonnetDictionaryComboBox*>(self));
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->setSonnet__DictionaryComboBox_SizeHint_IsBase(true);
        return new QSize(vsonnetdictionarycombobox->sizeHint());
    } else {
        return new QSize(((VirtualSonnetDictionaryComboBox*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__DictionaryComboBox_OnSizeHint(const Sonnet__DictionaryComboBox* self, intptr_t slot) {
    auto* vsonnetdictionarycombobox = const_cast<VirtualSonnetDictionaryComboBox*>(dynamic_cast<const VirtualSonnetDictionaryComboBox*>(self));
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->setSonnet__DictionaryComboBox_SizeHint_Callback(reinterpret_cast<VirtualSonnetDictionaryComboBox::Sonnet__DictionaryComboBox_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* Sonnet__DictionaryComboBox_MinimumSizeHint(const Sonnet__DictionaryComboBox* self) {
    auto* vsonnetdictionarycombobox = const_cast<VirtualSonnetDictionaryComboBox*>(dynamic_cast<const VirtualSonnetDictionaryComboBox*>(self));
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        return new QSize(vsonnetdictionarycombobox->minimumSizeHint());
    } else {
        return new QSize(((VirtualSonnetDictionaryComboBox*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* Sonnet__DictionaryComboBox_QBaseMinimumSizeHint(const Sonnet__DictionaryComboBox* self) {
    auto* vsonnetdictionarycombobox = const_cast<VirtualSonnetDictionaryComboBox*>(dynamic_cast<const VirtualSonnetDictionaryComboBox*>(self));
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->setSonnet__DictionaryComboBox_MinimumSizeHint_IsBase(true);
        return new QSize(vsonnetdictionarycombobox->minimumSizeHint());
    } else {
        return new QSize(((VirtualSonnetDictionaryComboBox*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__DictionaryComboBox_OnMinimumSizeHint(const Sonnet__DictionaryComboBox* self, intptr_t slot) {
    auto* vsonnetdictionarycombobox = const_cast<VirtualSonnetDictionaryComboBox*>(dynamic_cast<const VirtualSonnetDictionaryComboBox*>(self));
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->setSonnet__DictionaryComboBox_MinimumSizeHint_Callback(reinterpret_cast<VirtualSonnetDictionaryComboBox::Sonnet__DictionaryComboBox_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__DictionaryComboBox_ShowPopup(Sonnet__DictionaryComboBox* self) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->showPopup();
    } else {
        self->Sonnet::DictionaryComboBox::showPopup();
    }
}

// Base class handler implementation
void Sonnet__DictionaryComboBox_QBaseShowPopup(Sonnet__DictionaryComboBox* self) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->setSonnet__DictionaryComboBox_ShowPopup_IsBase(true);
        vsonnetdictionarycombobox->showPopup();
    } else {
        self->Sonnet::DictionaryComboBox::showPopup();
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__DictionaryComboBox_OnShowPopup(Sonnet__DictionaryComboBox* self, intptr_t slot) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->setSonnet__DictionaryComboBox_ShowPopup_Callback(reinterpret_cast<VirtualSonnetDictionaryComboBox::Sonnet__DictionaryComboBox_ShowPopup_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__DictionaryComboBox_HidePopup(Sonnet__DictionaryComboBox* self) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->hidePopup();
    } else {
        self->Sonnet::DictionaryComboBox::hidePopup();
    }
}

// Base class handler implementation
void Sonnet__DictionaryComboBox_QBaseHidePopup(Sonnet__DictionaryComboBox* self) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->setSonnet__DictionaryComboBox_HidePopup_IsBase(true);
        vsonnetdictionarycombobox->hidePopup();
    } else {
        self->Sonnet::DictionaryComboBox::hidePopup();
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__DictionaryComboBox_OnHidePopup(Sonnet__DictionaryComboBox* self, intptr_t slot) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->setSonnet__DictionaryComboBox_HidePopup_Callback(reinterpret_cast<VirtualSonnetDictionaryComboBox::Sonnet__DictionaryComboBox_HidePopup_Callback>(slot));
    }
}

// Derived class handler implementation
bool Sonnet__DictionaryComboBox_Event(Sonnet__DictionaryComboBox* self, QEvent* event) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        return vsonnetdictionarycombobox->event(event);
    } else {
        return self->Sonnet::DictionaryComboBox::event(event);
    }
}

// Base class handler implementation
bool Sonnet__DictionaryComboBox_QBaseEvent(Sonnet__DictionaryComboBox* self, QEvent* event) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->setSonnet__DictionaryComboBox_Event_IsBase(true);
        return vsonnetdictionarycombobox->event(event);
    } else {
        return self->Sonnet::DictionaryComboBox::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__DictionaryComboBox_OnEvent(Sonnet__DictionaryComboBox* self, intptr_t slot) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->setSonnet__DictionaryComboBox_Event_Callback(reinterpret_cast<VirtualSonnetDictionaryComboBox::Sonnet__DictionaryComboBox_Event_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* Sonnet__DictionaryComboBox_InputMethodQuery(const Sonnet__DictionaryComboBox* self, int param1) {
    auto* vsonnetdictionarycombobox = const_cast<VirtualSonnetDictionaryComboBox*>(dynamic_cast<const VirtualSonnetDictionaryComboBox*>(self));
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        return new QVariant(vsonnetdictionarycombobox->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualSonnetDictionaryComboBox*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* Sonnet__DictionaryComboBox_QBaseInputMethodQuery(const Sonnet__DictionaryComboBox* self, int param1) {
    auto* vsonnetdictionarycombobox = const_cast<VirtualSonnetDictionaryComboBox*>(dynamic_cast<const VirtualSonnetDictionaryComboBox*>(self));
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->setSonnet__DictionaryComboBox_InputMethodQuery_IsBase(true);
        return new QVariant(vsonnetdictionarycombobox->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualSonnetDictionaryComboBox*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__DictionaryComboBox_OnInputMethodQuery(const Sonnet__DictionaryComboBox* self, intptr_t slot) {
    auto* vsonnetdictionarycombobox = const_cast<VirtualSonnetDictionaryComboBox*>(dynamic_cast<const VirtualSonnetDictionaryComboBox*>(self));
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->setSonnet__DictionaryComboBox_InputMethodQuery_Callback(reinterpret_cast<VirtualSonnetDictionaryComboBox::Sonnet__DictionaryComboBox_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__DictionaryComboBox_FocusInEvent(Sonnet__DictionaryComboBox* self, QFocusEvent* e) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->focusInEvent(e);
    } else {
        ((VirtualSonnetDictionaryComboBox*)self)->focusInEvent(e);
    }
}

// Base class handler implementation
void Sonnet__DictionaryComboBox_QBaseFocusInEvent(Sonnet__DictionaryComboBox* self, QFocusEvent* e) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->setSonnet__DictionaryComboBox_FocusInEvent_IsBase(true);
        vsonnetdictionarycombobox->focusInEvent(e);
    } else {
        ((VirtualSonnetDictionaryComboBox*)self)->focusInEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__DictionaryComboBox_OnFocusInEvent(Sonnet__DictionaryComboBox* self, intptr_t slot) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->setSonnet__DictionaryComboBox_FocusInEvent_Callback(reinterpret_cast<VirtualSonnetDictionaryComboBox::Sonnet__DictionaryComboBox_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__DictionaryComboBox_FocusOutEvent(Sonnet__DictionaryComboBox* self, QFocusEvent* e) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->focusOutEvent(e);
    } else {
        ((VirtualSonnetDictionaryComboBox*)self)->focusOutEvent(e);
    }
}

// Base class handler implementation
void Sonnet__DictionaryComboBox_QBaseFocusOutEvent(Sonnet__DictionaryComboBox* self, QFocusEvent* e) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->setSonnet__DictionaryComboBox_FocusOutEvent_IsBase(true);
        vsonnetdictionarycombobox->focusOutEvent(e);
    } else {
        ((VirtualSonnetDictionaryComboBox*)self)->focusOutEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__DictionaryComboBox_OnFocusOutEvent(Sonnet__DictionaryComboBox* self, intptr_t slot) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->setSonnet__DictionaryComboBox_FocusOutEvent_Callback(reinterpret_cast<VirtualSonnetDictionaryComboBox::Sonnet__DictionaryComboBox_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__DictionaryComboBox_ChangeEvent(Sonnet__DictionaryComboBox* self, QEvent* e) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->changeEvent(e);
    } else {
        ((VirtualSonnetDictionaryComboBox*)self)->changeEvent(e);
    }
}

// Base class handler implementation
void Sonnet__DictionaryComboBox_QBaseChangeEvent(Sonnet__DictionaryComboBox* self, QEvent* e) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->setSonnet__DictionaryComboBox_ChangeEvent_IsBase(true);
        vsonnetdictionarycombobox->changeEvent(e);
    } else {
        ((VirtualSonnetDictionaryComboBox*)self)->changeEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__DictionaryComboBox_OnChangeEvent(Sonnet__DictionaryComboBox* self, intptr_t slot) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->setSonnet__DictionaryComboBox_ChangeEvent_Callback(reinterpret_cast<VirtualSonnetDictionaryComboBox::Sonnet__DictionaryComboBox_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__DictionaryComboBox_ResizeEvent(Sonnet__DictionaryComboBox* self, QResizeEvent* e) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->resizeEvent(e);
    } else {
        ((VirtualSonnetDictionaryComboBox*)self)->resizeEvent(e);
    }
}

// Base class handler implementation
void Sonnet__DictionaryComboBox_QBaseResizeEvent(Sonnet__DictionaryComboBox* self, QResizeEvent* e) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->setSonnet__DictionaryComboBox_ResizeEvent_IsBase(true);
        vsonnetdictionarycombobox->resizeEvent(e);
    } else {
        ((VirtualSonnetDictionaryComboBox*)self)->resizeEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__DictionaryComboBox_OnResizeEvent(Sonnet__DictionaryComboBox* self, intptr_t slot) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->setSonnet__DictionaryComboBox_ResizeEvent_Callback(reinterpret_cast<VirtualSonnetDictionaryComboBox::Sonnet__DictionaryComboBox_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__DictionaryComboBox_PaintEvent(Sonnet__DictionaryComboBox* self, QPaintEvent* e) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->paintEvent(e);
    } else {
        ((VirtualSonnetDictionaryComboBox*)self)->paintEvent(e);
    }
}

// Base class handler implementation
void Sonnet__DictionaryComboBox_QBasePaintEvent(Sonnet__DictionaryComboBox* self, QPaintEvent* e) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->setSonnet__DictionaryComboBox_PaintEvent_IsBase(true);
        vsonnetdictionarycombobox->paintEvent(e);
    } else {
        ((VirtualSonnetDictionaryComboBox*)self)->paintEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__DictionaryComboBox_OnPaintEvent(Sonnet__DictionaryComboBox* self, intptr_t slot) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->setSonnet__DictionaryComboBox_PaintEvent_Callback(reinterpret_cast<VirtualSonnetDictionaryComboBox::Sonnet__DictionaryComboBox_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__DictionaryComboBox_ShowEvent(Sonnet__DictionaryComboBox* self, QShowEvent* e) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->showEvent(e);
    } else {
        ((VirtualSonnetDictionaryComboBox*)self)->showEvent(e);
    }
}

// Base class handler implementation
void Sonnet__DictionaryComboBox_QBaseShowEvent(Sonnet__DictionaryComboBox* self, QShowEvent* e) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->setSonnet__DictionaryComboBox_ShowEvent_IsBase(true);
        vsonnetdictionarycombobox->showEvent(e);
    } else {
        ((VirtualSonnetDictionaryComboBox*)self)->showEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__DictionaryComboBox_OnShowEvent(Sonnet__DictionaryComboBox* self, intptr_t slot) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->setSonnet__DictionaryComboBox_ShowEvent_Callback(reinterpret_cast<VirtualSonnetDictionaryComboBox::Sonnet__DictionaryComboBox_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__DictionaryComboBox_HideEvent(Sonnet__DictionaryComboBox* self, QHideEvent* e) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->hideEvent(e);
    } else {
        ((VirtualSonnetDictionaryComboBox*)self)->hideEvent(e);
    }
}

// Base class handler implementation
void Sonnet__DictionaryComboBox_QBaseHideEvent(Sonnet__DictionaryComboBox* self, QHideEvent* e) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->setSonnet__DictionaryComboBox_HideEvent_IsBase(true);
        vsonnetdictionarycombobox->hideEvent(e);
    } else {
        ((VirtualSonnetDictionaryComboBox*)self)->hideEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__DictionaryComboBox_OnHideEvent(Sonnet__DictionaryComboBox* self, intptr_t slot) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->setSonnet__DictionaryComboBox_HideEvent_Callback(reinterpret_cast<VirtualSonnetDictionaryComboBox::Sonnet__DictionaryComboBox_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__DictionaryComboBox_MousePressEvent(Sonnet__DictionaryComboBox* self, QMouseEvent* e) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->mousePressEvent(e);
    } else {
        ((VirtualSonnetDictionaryComboBox*)self)->mousePressEvent(e);
    }
}

// Base class handler implementation
void Sonnet__DictionaryComboBox_QBaseMousePressEvent(Sonnet__DictionaryComboBox* self, QMouseEvent* e) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->setSonnet__DictionaryComboBox_MousePressEvent_IsBase(true);
        vsonnetdictionarycombobox->mousePressEvent(e);
    } else {
        ((VirtualSonnetDictionaryComboBox*)self)->mousePressEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__DictionaryComboBox_OnMousePressEvent(Sonnet__DictionaryComboBox* self, intptr_t slot) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->setSonnet__DictionaryComboBox_MousePressEvent_Callback(reinterpret_cast<VirtualSonnetDictionaryComboBox::Sonnet__DictionaryComboBox_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__DictionaryComboBox_MouseReleaseEvent(Sonnet__DictionaryComboBox* self, QMouseEvent* e) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->mouseReleaseEvent(e);
    } else {
        ((VirtualSonnetDictionaryComboBox*)self)->mouseReleaseEvent(e);
    }
}

// Base class handler implementation
void Sonnet__DictionaryComboBox_QBaseMouseReleaseEvent(Sonnet__DictionaryComboBox* self, QMouseEvent* e) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->setSonnet__DictionaryComboBox_MouseReleaseEvent_IsBase(true);
        vsonnetdictionarycombobox->mouseReleaseEvent(e);
    } else {
        ((VirtualSonnetDictionaryComboBox*)self)->mouseReleaseEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__DictionaryComboBox_OnMouseReleaseEvent(Sonnet__DictionaryComboBox* self, intptr_t slot) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->setSonnet__DictionaryComboBox_MouseReleaseEvent_Callback(reinterpret_cast<VirtualSonnetDictionaryComboBox::Sonnet__DictionaryComboBox_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__DictionaryComboBox_KeyPressEvent(Sonnet__DictionaryComboBox* self, QKeyEvent* e) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->keyPressEvent(e);
    } else {
        ((VirtualSonnetDictionaryComboBox*)self)->keyPressEvent(e);
    }
}

// Base class handler implementation
void Sonnet__DictionaryComboBox_QBaseKeyPressEvent(Sonnet__DictionaryComboBox* self, QKeyEvent* e) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->setSonnet__DictionaryComboBox_KeyPressEvent_IsBase(true);
        vsonnetdictionarycombobox->keyPressEvent(e);
    } else {
        ((VirtualSonnetDictionaryComboBox*)self)->keyPressEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__DictionaryComboBox_OnKeyPressEvent(Sonnet__DictionaryComboBox* self, intptr_t slot) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->setSonnet__DictionaryComboBox_KeyPressEvent_Callback(reinterpret_cast<VirtualSonnetDictionaryComboBox::Sonnet__DictionaryComboBox_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__DictionaryComboBox_KeyReleaseEvent(Sonnet__DictionaryComboBox* self, QKeyEvent* e) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->keyReleaseEvent(e);
    } else {
        ((VirtualSonnetDictionaryComboBox*)self)->keyReleaseEvent(e);
    }
}

// Base class handler implementation
void Sonnet__DictionaryComboBox_QBaseKeyReleaseEvent(Sonnet__DictionaryComboBox* self, QKeyEvent* e) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->setSonnet__DictionaryComboBox_KeyReleaseEvent_IsBase(true);
        vsonnetdictionarycombobox->keyReleaseEvent(e);
    } else {
        ((VirtualSonnetDictionaryComboBox*)self)->keyReleaseEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__DictionaryComboBox_OnKeyReleaseEvent(Sonnet__DictionaryComboBox* self, intptr_t slot) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->setSonnet__DictionaryComboBox_KeyReleaseEvent_Callback(reinterpret_cast<VirtualSonnetDictionaryComboBox::Sonnet__DictionaryComboBox_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__DictionaryComboBox_WheelEvent(Sonnet__DictionaryComboBox* self, QWheelEvent* e) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->wheelEvent(e);
    } else {
        ((VirtualSonnetDictionaryComboBox*)self)->wheelEvent(e);
    }
}

// Base class handler implementation
void Sonnet__DictionaryComboBox_QBaseWheelEvent(Sonnet__DictionaryComboBox* self, QWheelEvent* e) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->setSonnet__DictionaryComboBox_WheelEvent_IsBase(true);
        vsonnetdictionarycombobox->wheelEvent(e);
    } else {
        ((VirtualSonnetDictionaryComboBox*)self)->wheelEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__DictionaryComboBox_OnWheelEvent(Sonnet__DictionaryComboBox* self, intptr_t slot) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->setSonnet__DictionaryComboBox_WheelEvent_Callback(reinterpret_cast<VirtualSonnetDictionaryComboBox::Sonnet__DictionaryComboBox_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__DictionaryComboBox_ContextMenuEvent(Sonnet__DictionaryComboBox* self, QContextMenuEvent* e) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->contextMenuEvent(e);
    } else {
        ((VirtualSonnetDictionaryComboBox*)self)->contextMenuEvent(e);
    }
}

// Base class handler implementation
void Sonnet__DictionaryComboBox_QBaseContextMenuEvent(Sonnet__DictionaryComboBox* self, QContextMenuEvent* e) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->setSonnet__DictionaryComboBox_ContextMenuEvent_IsBase(true);
        vsonnetdictionarycombobox->contextMenuEvent(e);
    } else {
        ((VirtualSonnetDictionaryComboBox*)self)->contextMenuEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__DictionaryComboBox_OnContextMenuEvent(Sonnet__DictionaryComboBox* self, intptr_t slot) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->setSonnet__DictionaryComboBox_ContextMenuEvent_Callback(reinterpret_cast<VirtualSonnetDictionaryComboBox::Sonnet__DictionaryComboBox_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__DictionaryComboBox_InputMethodEvent(Sonnet__DictionaryComboBox* self, QInputMethodEvent* param1) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->inputMethodEvent(param1);
    } else {
        ((VirtualSonnetDictionaryComboBox*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void Sonnet__DictionaryComboBox_QBaseInputMethodEvent(Sonnet__DictionaryComboBox* self, QInputMethodEvent* param1) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->setSonnet__DictionaryComboBox_InputMethodEvent_IsBase(true);
        vsonnetdictionarycombobox->inputMethodEvent(param1);
    } else {
        ((VirtualSonnetDictionaryComboBox*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__DictionaryComboBox_OnInputMethodEvent(Sonnet__DictionaryComboBox* self, intptr_t slot) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->setSonnet__DictionaryComboBox_InputMethodEvent_Callback(reinterpret_cast<VirtualSonnetDictionaryComboBox::Sonnet__DictionaryComboBox_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__DictionaryComboBox_InitStyleOption(const Sonnet__DictionaryComboBox* self, QStyleOptionComboBox* option) {
    auto* vsonnetdictionarycombobox = const_cast<VirtualSonnetDictionaryComboBox*>(dynamic_cast<const VirtualSonnetDictionaryComboBox*>(self));
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->initStyleOption(option);
    } else {
        ((VirtualSonnetDictionaryComboBox*)self)->initStyleOption(option);
    }
}

// Base class handler implementation
void Sonnet__DictionaryComboBox_QBaseInitStyleOption(const Sonnet__DictionaryComboBox* self, QStyleOptionComboBox* option) {
    auto* vsonnetdictionarycombobox = const_cast<VirtualSonnetDictionaryComboBox*>(dynamic_cast<const VirtualSonnetDictionaryComboBox*>(self));
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->setSonnet__DictionaryComboBox_InitStyleOption_IsBase(true);
        vsonnetdictionarycombobox->initStyleOption(option);
    } else {
        ((VirtualSonnetDictionaryComboBox*)self)->initStyleOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__DictionaryComboBox_OnInitStyleOption(const Sonnet__DictionaryComboBox* self, intptr_t slot) {
    auto* vsonnetdictionarycombobox = const_cast<VirtualSonnetDictionaryComboBox*>(dynamic_cast<const VirtualSonnetDictionaryComboBox*>(self));
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->setSonnet__DictionaryComboBox_InitStyleOption_Callback(reinterpret_cast<VirtualSonnetDictionaryComboBox::Sonnet__DictionaryComboBox_InitStyleOption_Callback>(slot));
    }
}

// Derived class handler implementation
int Sonnet__DictionaryComboBox_DevType(const Sonnet__DictionaryComboBox* self) {
    auto* vsonnetdictionarycombobox = const_cast<VirtualSonnetDictionaryComboBox*>(dynamic_cast<const VirtualSonnetDictionaryComboBox*>(self));
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        return vsonnetdictionarycombobox->devType();
    } else {
        return self->Sonnet::DictionaryComboBox::devType();
    }
}

// Base class handler implementation
int Sonnet__DictionaryComboBox_QBaseDevType(const Sonnet__DictionaryComboBox* self) {
    auto* vsonnetdictionarycombobox = const_cast<VirtualSonnetDictionaryComboBox*>(dynamic_cast<const VirtualSonnetDictionaryComboBox*>(self));
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->setSonnet__DictionaryComboBox_DevType_IsBase(true);
        return vsonnetdictionarycombobox->devType();
    } else {
        return self->Sonnet::DictionaryComboBox::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__DictionaryComboBox_OnDevType(const Sonnet__DictionaryComboBox* self, intptr_t slot) {
    auto* vsonnetdictionarycombobox = const_cast<VirtualSonnetDictionaryComboBox*>(dynamic_cast<const VirtualSonnetDictionaryComboBox*>(self));
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->setSonnet__DictionaryComboBox_DevType_Callback(reinterpret_cast<VirtualSonnetDictionaryComboBox::Sonnet__DictionaryComboBox_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__DictionaryComboBox_SetVisible(Sonnet__DictionaryComboBox* self, bool visible) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->setVisible(visible);
    } else {
        self->Sonnet::DictionaryComboBox::setVisible(visible);
    }
}

// Base class handler implementation
void Sonnet__DictionaryComboBox_QBaseSetVisible(Sonnet__DictionaryComboBox* self, bool visible) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->setSonnet__DictionaryComboBox_SetVisible_IsBase(true);
        vsonnetdictionarycombobox->setVisible(visible);
    } else {
        self->Sonnet::DictionaryComboBox::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__DictionaryComboBox_OnSetVisible(Sonnet__DictionaryComboBox* self, intptr_t slot) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->setSonnet__DictionaryComboBox_SetVisible_Callback(reinterpret_cast<VirtualSonnetDictionaryComboBox::Sonnet__DictionaryComboBox_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
int Sonnet__DictionaryComboBox_HeightForWidth(const Sonnet__DictionaryComboBox* self, int param1) {
    auto* vsonnetdictionarycombobox = const_cast<VirtualSonnetDictionaryComboBox*>(dynamic_cast<const VirtualSonnetDictionaryComboBox*>(self));
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        return vsonnetdictionarycombobox->heightForWidth(static_cast<int>(param1));
    } else {
        return self->Sonnet::DictionaryComboBox::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int Sonnet__DictionaryComboBox_QBaseHeightForWidth(const Sonnet__DictionaryComboBox* self, int param1) {
    auto* vsonnetdictionarycombobox = const_cast<VirtualSonnetDictionaryComboBox*>(dynamic_cast<const VirtualSonnetDictionaryComboBox*>(self));
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->setSonnet__DictionaryComboBox_HeightForWidth_IsBase(true);
        return vsonnetdictionarycombobox->heightForWidth(static_cast<int>(param1));
    } else {
        return self->Sonnet::DictionaryComboBox::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__DictionaryComboBox_OnHeightForWidth(const Sonnet__DictionaryComboBox* self, intptr_t slot) {
    auto* vsonnetdictionarycombobox = const_cast<VirtualSonnetDictionaryComboBox*>(dynamic_cast<const VirtualSonnetDictionaryComboBox*>(self));
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->setSonnet__DictionaryComboBox_HeightForWidth_Callback(reinterpret_cast<VirtualSonnetDictionaryComboBox::Sonnet__DictionaryComboBox_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool Sonnet__DictionaryComboBox_HasHeightForWidth(const Sonnet__DictionaryComboBox* self) {
    auto* vsonnetdictionarycombobox = const_cast<VirtualSonnetDictionaryComboBox*>(dynamic_cast<const VirtualSonnetDictionaryComboBox*>(self));
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        return vsonnetdictionarycombobox->hasHeightForWidth();
    } else {
        return self->Sonnet::DictionaryComboBox::hasHeightForWidth();
    }
}

// Base class handler implementation
bool Sonnet__DictionaryComboBox_QBaseHasHeightForWidth(const Sonnet__DictionaryComboBox* self) {
    auto* vsonnetdictionarycombobox = const_cast<VirtualSonnetDictionaryComboBox*>(dynamic_cast<const VirtualSonnetDictionaryComboBox*>(self));
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->setSonnet__DictionaryComboBox_HasHeightForWidth_IsBase(true);
        return vsonnetdictionarycombobox->hasHeightForWidth();
    } else {
        return self->Sonnet::DictionaryComboBox::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__DictionaryComboBox_OnHasHeightForWidth(const Sonnet__DictionaryComboBox* self, intptr_t slot) {
    auto* vsonnetdictionarycombobox = const_cast<VirtualSonnetDictionaryComboBox*>(dynamic_cast<const VirtualSonnetDictionaryComboBox*>(self));
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->setSonnet__DictionaryComboBox_HasHeightForWidth_Callback(reinterpret_cast<VirtualSonnetDictionaryComboBox::Sonnet__DictionaryComboBox_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* Sonnet__DictionaryComboBox_PaintEngine(const Sonnet__DictionaryComboBox* self) {
    auto* vsonnetdictionarycombobox = const_cast<VirtualSonnetDictionaryComboBox*>(dynamic_cast<const VirtualSonnetDictionaryComboBox*>(self));
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        return vsonnetdictionarycombobox->paintEngine();
    } else {
        return self->Sonnet::DictionaryComboBox::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* Sonnet__DictionaryComboBox_QBasePaintEngine(const Sonnet__DictionaryComboBox* self) {
    auto* vsonnetdictionarycombobox = const_cast<VirtualSonnetDictionaryComboBox*>(dynamic_cast<const VirtualSonnetDictionaryComboBox*>(self));
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->setSonnet__DictionaryComboBox_PaintEngine_IsBase(true);
        return vsonnetdictionarycombobox->paintEngine();
    } else {
        return self->Sonnet::DictionaryComboBox::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__DictionaryComboBox_OnPaintEngine(const Sonnet__DictionaryComboBox* self, intptr_t slot) {
    auto* vsonnetdictionarycombobox = const_cast<VirtualSonnetDictionaryComboBox*>(dynamic_cast<const VirtualSonnetDictionaryComboBox*>(self));
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->setSonnet__DictionaryComboBox_PaintEngine_Callback(reinterpret_cast<VirtualSonnetDictionaryComboBox::Sonnet__DictionaryComboBox_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__DictionaryComboBox_MouseDoubleClickEvent(Sonnet__DictionaryComboBox* self, QMouseEvent* event) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->mouseDoubleClickEvent(event);
    } else {
        ((VirtualSonnetDictionaryComboBox*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void Sonnet__DictionaryComboBox_QBaseMouseDoubleClickEvent(Sonnet__DictionaryComboBox* self, QMouseEvent* event) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->setSonnet__DictionaryComboBox_MouseDoubleClickEvent_IsBase(true);
        vsonnetdictionarycombobox->mouseDoubleClickEvent(event);
    } else {
        ((VirtualSonnetDictionaryComboBox*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__DictionaryComboBox_OnMouseDoubleClickEvent(Sonnet__DictionaryComboBox* self, intptr_t slot) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->setSonnet__DictionaryComboBox_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualSonnetDictionaryComboBox::Sonnet__DictionaryComboBox_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__DictionaryComboBox_MouseMoveEvent(Sonnet__DictionaryComboBox* self, QMouseEvent* event) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->mouseMoveEvent(event);
    } else {
        ((VirtualSonnetDictionaryComboBox*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void Sonnet__DictionaryComboBox_QBaseMouseMoveEvent(Sonnet__DictionaryComboBox* self, QMouseEvent* event) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->setSonnet__DictionaryComboBox_MouseMoveEvent_IsBase(true);
        vsonnetdictionarycombobox->mouseMoveEvent(event);
    } else {
        ((VirtualSonnetDictionaryComboBox*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__DictionaryComboBox_OnMouseMoveEvent(Sonnet__DictionaryComboBox* self, intptr_t slot) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->setSonnet__DictionaryComboBox_MouseMoveEvent_Callback(reinterpret_cast<VirtualSonnetDictionaryComboBox::Sonnet__DictionaryComboBox_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__DictionaryComboBox_EnterEvent(Sonnet__DictionaryComboBox* self, QEnterEvent* event) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->enterEvent(event);
    } else {
        ((VirtualSonnetDictionaryComboBox*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void Sonnet__DictionaryComboBox_QBaseEnterEvent(Sonnet__DictionaryComboBox* self, QEnterEvent* event) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->setSonnet__DictionaryComboBox_EnterEvent_IsBase(true);
        vsonnetdictionarycombobox->enterEvent(event);
    } else {
        ((VirtualSonnetDictionaryComboBox*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__DictionaryComboBox_OnEnterEvent(Sonnet__DictionaryComboBox* self, intptr_t slot) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->setSonnet__DictionaryComboBox_EnterEvent_Callback(reinterpret_cast<VirtualSonnetDictionaryComboBox::Sonnet__DictionaryComboBox_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__DictionaryComboBox_LeaveEvent(Sonnet__DictionaryComboBox* self, QEvent* event) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->leaveEvent(event);
    } else {
        ((VirtualSonnetDictionaryComboBox*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void Sonnet__DictionaryComboBox_QBaseLeaveEvent(Sonnet__DictionaryComboBox* self, QEvent* event) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->setSonnet__DictionaryComboBox_LeaveEvent_IsBase(true);
        vsonnetdictionarycombobox->leaveEvent(event);
    } else {
        ((VirtualSonnetDictionaryComboBox*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__DictionaryComboBox_OnLeaveEvent(Sonnet__DictionaryComboBox* self, intptr_t slot) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->setSonnet__DictionaryComboBox_LeaveEvent_Callback(reinterpret_cast<VirtualSonnetDictionaryComboBox::Sonnet__DictionaryComboBox_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__DictionaryComboBox_MoveEvent(Sonnet__DictionaryComboBox* self, QMoveEvent* event) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->moveEvent(event);
    } else {
        ((VirtualSonnetDictionaryComboBox*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void Sonnet__DictionaryComboBox_QBaseMoveEvent(Sonnet__DictionaryComboBox* self, QMoveEvent* event) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->setSonnet__DictionaryComboBox_MoveEvent_IsBase(true);
        vsonnetdictionarycombobox->moveEvent(event);
    } else {
        ((VirtualSonnetDictionaryComboBox*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__DictionaryComboBox_OnMoveEvent(Sonnet__DictionaryComboBox* self, intptr_t slot) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->setSonnet__DictionaryComboBox_MoveEvent_Callback(reinterpret_cast<VirtualSonnetDictionaryComboBox::Sonnet__DictionaryComboBox_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__DictionaryComboBox_CloseEvent(Sonnet__DictionaryComboBox* self, QCloseEvent* event) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->closeEvent(event);
    } else {
        ((VirtualSonnetDictionaryComboBox*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void Sonnet__DictionaryComboBox_QBaseCloseEvent(Sonnet__DictionaryComboBox* self, QCloseEvent* event) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->setSonnet__DictionaryComboBox_CloseEvent_IsBase(true);
        vsonnetdictionarycombobox->closeEvent(event);
    } else {
        ((VirtualSonnetDictionaryComboBox*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__DictionaryComboBox_OnCloseEvent(Sonnet__DictionaryComboBox* self, intptr_t slot) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->setSonnet__DictionaryComboBox_CloseEvent_Callback(reinterpret_cast<VirtualSonnetDictionaryComboBox::Sonnet__DictionaryComboBox_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__DictionaryComboBox_TabletEvent(Sonnet__DictionaryComboBox* self, QTabletEvent* event) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->tabletEvent(event);
    } else {
        ((VirtualSonnetDictionaryComboBox*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void Sonnet__DictionaryComboBox_QBaseTabletEvent(Sonnet__DictionaryComboBox* self, QTabletEvent* event) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->setSonnet__DictionaryComboBox_TabletEvent_IsBase(true);
        vsonnetdictionarycombobox->tabletEvent(event);
    } else {
        ((VirtualSonnetDictionaryComboBox*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__DictionaryComboBox_OnTabletEvent(Sonnet__DictionaryComboBox* self, intptr_t slot) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->setSonnet__DictionaryComboBox_TabletEvent_Callback(reinterpret_cast<VirtualSonnetDictionaryComboBox::Sonnet__DictionaryComboBox_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__DictionaryComboBox_ActionEvent(Sonnet__DictionaryComboBox* self, QActionEvent* event) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->actionEvent(event);
    } else {
        ((VirtualSonnetDictionaryComboBox*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void Sonnet__DictionaryComboBox_QBaseActionEvent(Sonnet__DictionaryComboBox* self, QActionEvent* event) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->setSonnet__DictionaryComboBox_ActionEvent_IsBase(true);
        vsonnetdictionarycombobox->actionEvent(event);
    } else {
        ((VirtualSonnetDictionaryComboBox*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__DictionaryComboBox_OnActionEvent(Sonnet__DictionaryComboBox* self, intptr_t slot) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->setSonnet__DictionaryComboBox_ActionEvent_Callback(reinterpret_cast<VirtualSonnetDictionaryComboBox::Sonnet__DictionaryComboBox_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__DictionaryComboBox_DragEnterEvent(Sonnet__DictionaryComboBox* self, QDragEnterEvent* event) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->dragEnterEvent(event);
    } else {
        ((VirtualSonnetDictionaryComboBox*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void Sonnet__DictionaryComboBox_QBaseDragEnterEvent(Sonnet__DictionaryComboBox* self, QDragEnterEvent* event) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->setSonnet__DictionaryComboBox_DragEnterEvent_IsBase(true);
        vsonnetdictionarycombobox->dragEnterEvent(event);
    } else {
        ((VirtualSonnetDictionaryComboBox*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__DictionaryComboBox_OnDragEnterEvent(Sonnet__DictionaryComboBox* self, intptr_t slot) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->setSonnet__DictionaryComboBox_DragEnterEvent_Callback(reinterpret_cast<VirtualSonnetDictionaryComboBox::Sonnet__DictionaryComboBox_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__DictionaryComboBox_DragMoveEvent(Sonnet__DictionaryComboBox* self, QDragMoveEvent* event) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->dragMoveEvent(event);
    } else {
        ((VirtualSonnetDictionaryComboBox*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void Sonnet__DictionaryComboBox_QBaseDragMoveEvent(Sonnet__DictionaryComboBox* self, QDragMoveEvent* event) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->setSonnet__DictionaryComboBox_DragMoveEvent_IsBase(true);
        vsonnetdictionarycombobox->dragMoveEvent(event);
    } else {
        ((VirtualSonnetDictionaryComboBox*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__DictionaryComboBox_OnDragMoveEvent(Sonnet__DictionaryComboBox* self, intptr_t slot) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->setSonnet__DictionaryComboBox_DragMoveEvent_Callback(reinterpret_cast<VirtualSonnetDictionaryComboBox::Sonnet__DictionaryComboBox_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__DictionaryComboBox_DragLeaveEvent(Sonnet__DictionaryComboBox* self, QDragLeaveEvent* event) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->dragLeaveEvent(event);
    } else {
        ((VirtualSonnetDictionaryComboBox*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void Sonnet__DictionaryComboBox_QBaseDragLeaveEvent(Sonnet__DictionaryComboBox* self, QDragLeaveEvent* event) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->setSonnet__DictionaryComboBox_DragLeaveEvent_IsBase(true);
        vsonnetdictionarycombobox->dragLeaveEvent(event);
    } else {
        ((VirtualSonnetDictionaryComboBox*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__DictionaryComboBox_OnDragLeaveEvent(Sonnet__DictionaryComboBox* self, intptr_t slot) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->setSonnet__DictionaryComboBox_DragLeaveEvent_Callback(reinterpret_cast<VirtualSonnetDictionaryComboBox::Sonnet__DictionaryComboBox_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__DictionaryComboBox_DropEvent(Sonnet__DictionaryComboBox* self, QDropEvent* event) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->dropEvent(event);
    } else {
        ((VirtualSonnetDictionaryComboBox*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void Sonnet__DictionaryComboBox_QBaseDropEvent(Sonnet__DictionaryComboBox* self, QDropEvent* event) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->setSonnet__DictionaryComboBox_DropEvent_IsBase(true);
        vsonnetdictionarycombobox->dropEvent(event);
    } else {
        ((VirtualSonnetDictionaryComboBox*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__DictionaryComboBox_OnDropEvent(Sonnet__DictionaryComboBox* self, intptr_t slot) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->setSonnet__DictionaryComboBox_DropEvent_Callback(reinterpret_cast<VirtualSonnetDictionaryComboBox::Sonnet__DictionaryComboBox_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool Sonnet__DictionaryComboBox_NativeEvent(Sonnet__DictionaryComboBox* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        return vsonnetdictionarycombobox->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualSonnetDictionaryComboBox*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool Sonnet__DictionaryComboBox_QBaseNativeEvent(Sonnet__DictionaryComboBox* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->setSonnet__DictionaryComboBox_NativeEvent_IsBase(true);
        return vsonnetdictionarycombobox->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualSonnetDictionaryComboBox*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__DictionaryComboBox_OnNativeEvent(Sonnet__DictionaryComboBox* self, intptr_t slot) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->setSonnet__DictionaryComboBox_NativeEvent_Callback(reinterpret_cast<VirtualSonnetDictionaryComboBox::Sonnet__DictionaryComboBox_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int Sonnet__DictionaryComboBox_Metric(const Sonnet__DictionaryComboBox* self, int param1) {
    auto* vsonnetdictionarycombobox = const_cast<VirtualSonnetDictionaryComboBox*>(dynamic_cast<const VirtualSonnetDictionaryComboBox*>(self));
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        return vsonnetdictionarycombobox->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualSonnetDictionaryComboBox*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int Sonnet__DictionaryComboBox_QBaseMetric(const Sonnet__DictionaryComboBox* self, int param1) {
    auto* vsonnetdictionarycombobox = const_cast<VirtualSonnetDictionaryComboBox*>(dynamic_cast<const VirtualSonnetDictionaryComboBox*>(self));
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->setSonnet__DictionaryComboBox_Metric_IsBase(true);
        return vsonnetdictionarycombobox->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualSonnetDictionaryComboBox*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__DictionaryComboBox_OnMetric(const Sonnet__DictionaryComboBox* self, intptr_t slot) {
    auto* vsonnetdictionarycombobox = const_cast<VirtualSonnetDictionaryComboBox*>(dynamic_cast<const VirtualSonnetDictionaryComboBox*>(self));
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->setSonnet__DictionaryComboBox_Metric_Callback(reinterpret_cast<VirtualSonnetDictionaryComboBox::Sonnet__DictionaryComboBox_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__DictionaryComboBox_InitPainter(const Sonnet__DictionaryComboBox* self, QPainter* painter) {
    auto* vsonnetdictionarycombobox = const_cast<VirtualSonnetDictionaryComboBox*>(dynamic_cast<const VirtualSonnetDictionaryComboBox*>(self));
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->initPainter(painter);
    } else {
        ((VirtualSonnetDictionaryComboBox*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void Sonnet__DictionaryComboBox_QBaseInitPainter(const Sonnet__DictionaryComboBox* self, QPainter* painter) {
    auto* vsonnetdictionarycombobox = const_cast<VirtualSonnetDictionaryComboBox*>(dynamic_cast<const VirtualSonnetDictionaryComboBox*>(self));
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->setSonnet__DictionaryComboBox_InitPainter_IsBase(true);
        vsonnetdictionarycombobox->initPainter(painter);
    } else {
        ((VirtualSonnetDictionaryComboBox*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__DictionaryComboBox_OnInitPainter(const Sonnet__DictionaryComboBox* self, intptr_t slot) {
    auto* vsonnetdictionarycombobox = const_cast<VirtualSonnetDictionaryComboBox*>(dynamic_cast<const VirtualSonnetDictionaryComboBox*>(self));
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->setSonnet__DictionaryComboBox_InitPainter_Callback(reinterpret_cast<VirtualSonnetDictionaryComboBox::Sonnet__DictionaryComboBox_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* Sonnet__DictionaryComboBox_Redirected(const Sonnet__DictionaryComboBox* self, QPoint* offset) {
    auto* vsonnetdictionarycombobox = const_cast<VirtualSonnetDictionaryComboBox*>(dynamic_cast<const VirtualSonnetDictionaryComboBox*>(self));
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        return vsonnetdictionarycombobox->redirected(offset);
    } else {
        return ((VirtualSonnetDictionaryComboBox*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* Sonnet__DictionaryComboBox_QBaseRedirected(const Sonnet__DictionaryComboBox* self, QPoint* offset) {
    auto* vsonnetdictionarycombobox = const_cast<VirtualSonnetDictionaryComboBox*>(dynamic_cast<const VirtualSonnetDictionaryComboBox*>(self));
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->setSonnet__DictionaryComboBox_Redirected_IsBase(true);
        return vsonnetdictionarycombobox->redirected(offset);
    } else {
        return ((VirtualSonnetDictionaryComboBox*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__DictionaryComboBox_OnRedirected(const Sonnet__DictionaryComboBox* self, intptr_t slot) {
    auto* vsonnetdictionarycombobox = const_cast<VirtualSonnetDictionaryComboBox*>(dynamic_cast<const VirtualSonnetDictionaryComboBox*>(self));
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->setSonnet__DictionaryComboBox_Redirected_Callback(reinterpret_cast<VirtualSonnetDictionaryComboBox::Sonnet__DictionaryComboBox_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* Sonnet__DictionaryComboBox_SharedPainter(const Sonnet__DictionaryComboBox* self) {
    auto* vsonnetdictionarycombobox = const_cast<VirtualSonnetDictionaryComboBox*>(dynamic_cast<const VirtualSonnetDictionaryComboBox*>(self));
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        return vsonnetdictionarycombobox->sharedPainter();
    } else {
        return ((VirtualSonnetDictionaryComboBox*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* Sonnet__DictionaryComboBox_QBaseSharedPainter(const Sonnet__DictionaryComboBox* self) {
    auto* vsonnetdictionarycombobox = const_cast<VirtualSonnetDictionaryComboBox*>(dynamic_cast<const VirtualSonnetDictionaryComboBox*>(self));
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->setSonnet__DictionaryComboBox_SharedPainter_IsBase(true);
        return vsonnetdictionarycombobox->sharedPainter();
    } else {
        return ((VirtualSonnetDictionaryComboBox*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__DictionaryComboBox_OnSharedPainter(const Sonnet__DictionaryComboBox* self, intptr_t slot) {
    auto* vsonnetdictionarycombobox = const_cast<VirtualSonnetDictionaryComboBox*>(dynamic_cast<const VirtualSonnetDictionaryComboBox*>(self));
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->setSonnet__DictionaryComboBox_SharedPainter_Callback(reinterpret_cast<VirtualSonnetDictionaryComboBox::Sonnet__DictionaryComboBox_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
bool Sonnet__DictionaryComboBox_FocusNextPrevChild(Sonnet__DictionaryComboBox* self, bool next) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        return vsonnetdictionarycombobox->focusNextPrevChild(next);
    } else {
        return ((VirtualSonnetDictionaryComboBox*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool Sonnet__DictionaryComboBox_QBaseFocusNextPrevChild(Sonnet__DictionaryComboBox* self, bool next) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->setSonnet__DictionaryComboBox_FocusNextPrevChild_IsBase(true);
        return vsonnetdictionarycombobox->focusNextPrevChild(next);
    } else {
        return ((VirtualSonnetDictionaryComboBox*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__DictionaryComboBox_OnFocusNextPrevChild(Sonnet__DictionaryComboBox* self, intptr_t slot) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->setSonnet__DictionaryComboBox_FocusNextPrevChild_Callback(reinterpret_cast<VirtualSonnetDictionaryComboBox::Sonnet__DictionaryComboBox_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool Sonnet__DictionaryComboBox_EventFilter(Sonnet__DictionaryComboBox* self, QObject* watched, QEvent* event) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        return vsonnetdictionarycombobox->eventFilter(watched, event);
    } else {
        return self->Sonnet::DictionaryComboBox::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool Sonnet__DictionaryComboBox_QBaseEventFilter(Sonnet__DictionaryComboBox* self, QObject* watched, QEvent* event) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->setSonnet__DictionaryComboBox_EventFilter_IsBase(true);
        return vsonnetdictionarycombobox->eventFilter(watched, event);
    } else {
        return self->Sonnet::DictionaryComboBox::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__DictionaryComboBox_OnEventFilter(Sonnet__DictionaryComboBox* self, intptr_t slot) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->setSonnet__DictionaryComboBox_EventFilter_Callback(reinterpret_cast<VirtualSonnetDictionaryComboBox::Sonnet__DictionaryComboBox_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__DictionaryComboBox_TimerEvent(Sonnet__DictionaryComboBox* self, QTimerEvent* event) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->timerEvent(event);
    } else {
        ((VirtualSonnetDictionaryComboBox*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void Sonnet__DictionaryComboBox_QBaseTimerEvent(Sonnet__DictionaryComboBox* self, QTimerEvent* event) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->setSonnet__DictionaryComboBox_TimerEvent_IsBase(true);
        vsonnetdictionarycombobox->timerEvent(event);
    } else {
        ((VirtualSonnetDictionaryComboBox*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__DictionaryComboBox_OnTimerEvent(Sonnet__DictionaryComboBox* self, intptr_t slot) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->setSonnet__DictionaryComboBox_TimerEvent_Callback(reinterpret_cast<VirtualSonnetDictionaryComboBox::Sonnet__DictionaryComboBox_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__DictionaryComboBox_ChildEvent(Sonnet__DictionaryComboBox* self, QChildEvent* event) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->childEvent(event);
    } else {
        ((VirtualSonnetDictionaryComboBox*)self)->childEvent(event);
    }
}

// Base class handler implementation
void Sonnet__DictionaryComboBox_QBaseChildEvent(Sonnet__DictionaryComboBox* self, QChildEvent* event) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->setSonnet__DictionaryComboBox_ChildEvent_IsBase(true);
        vsonnetdictionarycombobox->childEvent(event);
    } else {
        ((VirtualSonnetDictionaryComboBox*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__DictionaryComboBox_OnChildEvent(Sonnet__DictionaryComboBox* self, intptr_t slot) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->setSonnet__DictionaryComboBox_ChildEvent_Callback(reinterpret_cast<VirtualSonnetDictionaryComboBox::Sonnet__DictionaryComboBox_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__DictionaryComboBox_CustomEvent(Sonnet__DictionaryComboBox* self, QEvent* event) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->customEvent(event);
    } else {
        ((VirtualSonnetDictionaryComboBox*)self)->customEvent(event);
    }
}

// Base class handler implementation
void Sonnet__DictionaryComboBox_QBaseCustomEvent(Sonnet__DictionaryComboBox* self, QEvent* event) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->setSonnet__DictionaryComboBox_CustomEvent_IsBase(true);
        vsonnetdictionarycombobox->customEvent(event);
    } else {
        ((VirtualSonnetDictionaryComboBox*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__DictionaryComboBox_OnCustomEvent(Sonnet__DictionaryComboBox* self, intptr_t slot) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->setSonnet__DictionaryComboBox_CustomEvent_Callback(reinterpret_cast<VirtualSonnetDictionaryComboBox::Sonnet__DictionaryComboBox_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__DictionaryComboBox_ConnectNotify(Sonnet__DictionaryComboBox* self, const QMetaMethod* signal) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->connectNotify(*signal);
    } else {
        ((VirtualSonnetDictionaryComboBox*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void Sonnet__DictionaryComboBox_QBaseConnectNotify(Sonnet__DictionaryComboBox* self, const QMetaMethod* signal) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->setSonnet__DictionaryComboBox_ConnectNotify_IsBase(true);
        vsonnetdictionarycombobox->connectNotify(*signal);
    } else {
        ((VirtualSonnetDictionaryComboBox*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__DictionaryComboBox_OnConnectNotify(Sonnet__DictionaryComboBox* self, intptr_t slot) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->setSonnet__DictionaryComboBox_ConnectNotify_Callback(reinterpret_cast<VirtualSonnetDictionaryComboBox::Sonnet__DictionaryComboBox_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__DictionaryComboBox_DisconnectNotify(Sonnet__DictionaryComboBox* self, const QMetaMethod* signal) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->disconnectNotify(*signal);
    } else {
        ((VirtualSonnetDictionaryComboBox*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void Sonnet__DictionaryComboBox_QBaseDisconnectNotify(Sonnet__DictionaryComboBox* self, const QMetaMethod* signal) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->setSonnet__DictionaryComboBox_DisconnectNotify_IsBase(true);
        vsonnetdictionarycombobox->disconnectNotify(*signal);
    } else {
        ((VirtualSonnetDictionaryComboBox*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__DictionaryComboBox_OnDisconnectNotify(Sonnet__DictionaryComboBox* self, intptr_t slot) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->setSonnet__DictionaryComboBox_DisconnectNotify_Callback(reinterpret_cast<VirtualSonnetDictionaryComboBox::Sonnet__DictionaryComboBox_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__DictionaryComboBox_UpdateMicroFocus(Sonnet__DictionaryComboBox* self) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->updateMicroFocus();
    } else {
        ((VirtualSonnetDictionaryComboBox*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void Sonnet__DictionaryComboBox_QBaseUpdateMicroFocus(Sonnet__DictionaryComboBox* self) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->setSonnet__DictionaryComboBox_UpdateMicroFocus_IsBase(true);
        vsonnetdictionarycombobox->updateMicroFocus();
    } else {
        ((VirtualSonnetDictionaryComboBox*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__DictionaryComboBox_OnUpdateMicroFocus(Sonnet__DictionaryComboBox* self, intptr_t slot) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->setSonnet__DictionaryComboBox_UpdateMicroFocus_Callback(reinterpret_cast<VirtualSonnetDictionaryComboBox::Sonnet__DictionaryComboBox_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__DictionaryComboBox_Create(Sonnet__DictionaryComboBox* self) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->create();
    } else {
        ((VirtualSonnetDictionaryComboBox*)self)->create();
    }
}

// Base class handler implementation
void Sonnet__DictionaryComboBox_QBaseCreate(Sonnet__DictionaryComboBox* self) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->setSonnet__DictionaryComboBox_Create_IsBase(true);
        vsonnetdictionarycombobox->create();
    } else {
        ((VirtualSonnetDictionaryComboBox*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__DictionaryComboBox_OnCreate(Sonnet__DictionaryComboBox* self, intptr_t slot) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->setSonnet__DictionaryComboBox_Create_Callback(reinterpret_cast<VirtualSonnetDictionaryComboBox::Sonnet__DictionaryComboBox_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__DictionaryComboBox_Destroy(Sonnet__DictionaryComboBox* self) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->destroy();
    } else {
        ((VirtualSonnetDictionaryComboBox*)self)->destroy();
    }
}

// Base class handler implementation
void Sonnet__DictionaryComboBox_QBaseDestroy(Sonnet__DictionaryComboBox* self) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->setSonnet__DictionaryComboBox_Destroy_IsBase(true);
        vsonnetdictionarycombobox->destroy();
    } else {
        ((VirtualSonnetDictionaryComboBox*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__DictionaryComboBox_OnDestroy(Sonnet__DictionaryComboBox* self, intptr_t slot) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->setSonnet__DictionaryComboBox_Destroy_Callback(reinterpret_cast<VirtualSonnetDictionaryComboBox::Sonnet__DictionaryComboBox_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool Sonnet__DictionaryComboBox_FocusNextChild(Sonnet__DictionaryComboBox* self) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        return vsonnetdictionarycombobox->focusNextChild();
    } else {
        return ((VirtualSonnetDictionaryComboBox*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool Sonnet__DictionaryComboBox_QBaseFocusNextChild(Sonnet__DictionaryComboBox* self) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->setSonnet__DictionaryComboBox_FocusNextChild_IsBase(true);
        return vsonnetdictionarycombobox->focusNextChild();
    } else {
        return ((VirtualSonnetDictionaryComboBox*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__DictionaryComboBox_OnFocusNextChild(Sonnet__DictionaryComboBox* self, intptr_t slot) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->setSonnet__DictionaryComboBox_FocusNextChild_Callback(reinterpret_cast<VirtualSonnetDictionaryComboBox::Sonnet__DictionaryComboBox_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool Sonnet__DictionaryComboBox_FocusPreviousChild(Sonnet__DictionaryComboBox* self) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        return vsonnetdictionarycombobox->focusPreviousChild();
    } else {
        return ((VirtualSonnetDictionaryComboBox*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool Sonnet__DictionaryComboBox_QBaseFocusPreviousChild(Sonnet__DictionaryComboBox* self) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->setSonnet__DictionaryComboBox_FocusPreviousChild_IsBase(true);
        return vsonnetdictionarycombobox->focusPreviousChild();
    } else {
        return ((VirtualSonnetDictionaryComboBox*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__DictionaryComboBox_OnFocusPreviousChild(Sonnet__DictionaryComboBox* self, intptr_t slot) {
    auto* vsonnetdictionarycombobox = dynamic_cast<VirtualSonnetDictionaryComboBox*>(self);
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->setSonnet__DictionaryComboBox_FocusPreviousChild_Callback(reinterpret_cast<VirtualSonnetDictionaryComboBox::Sonnet__DictionaryComboBox_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* Sonnet__DictionaryComboBox_Sender(const Sonnet__DictionaryComboBox* self) {
    auto* vsonnetdictionarycombobox = const_cast<VirtualSonnetDictionaryComboBox*>(dynamic_cast<const VirtualSonnetDictionaryComboBox*>(self));
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        return vsonnetdictionarycombobox->sender();
    } else {
        return ((VirtualSonnetDictionaryComboBox*)self)->sender();
    }
}

// Base class handler implementation
QObject* Sonnet__DictionaryComboBox_QBaseSender(const Sonnet__DictionaryComboBox* self) {
    auto* vsonnetdictionarycombobox = const_cast<VirtualSonnetDictionaryComboBox*>(dynamic_cast<const VirtualSonnetDictionaryComboBox*>(self));
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->setSonnet__DictionaryComboBox_Sender_IsBase(true);
        return vsonnetdictionarycombobox->sender();
    } else {
        return ((VirtualSonnetDictionaryComboBox*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__DictionaryComboBox_OnSender(const Sonnet__DictionaryComboBox* self, intptr_t slot) {
    auto* vsonnetdictionarycombobox = const_cast<VirtualSonnetDictionaryComboBox*>(dynamic_cast<const VirtualSonnetDictionaryComboBox*>(self));
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->setSonnet__DictionaryComboBox_Sender_Callback(reinterpret_cast<VirtualSonnetDictionaryComboBox::Sonnet__DictionaryComboBox_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int Sonnet__DictionaryComboBox_SenderSignalIndex(const Sonnet__DictionaryComboBox* self) {
    auto* vsonnetdictionarycombobox = const_cast<VirtualSonnetDictionaryComboBox*>(dynamic_cast<const VirtualSonnetDictionaryComboBox*>(self));
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        return vsonnetdictionarycombobox->senderSignalIndex();
    } else {
        return ((VirtualSonnetDictionaryComboBox*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int Sonnet__DictionaryComboBox_QBaseSenderSignalIndex(const Sonnet__DictionaryComboBox* self) {
    auto* vsonnetdictionarycombobox = const_cast<VirtualSonnetDictionaryComboBox*>(dynamic_cast<const VirtualSonnetDictionaryComboBox*>(self));
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->setSonnet__DictionaryComboBox_SenderSignalIndex_IsBase(true);
        return vsonnetdictionarycombobox->senderSignalIndex();
    } else {
        return ((VirtualSonnetDictionaryComboBox*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__DictionaryComboBox_OnSenderSignalIndex(const Sonnet__DictionaryComboBox* self, intptr_t slot) {
    auto* vsonnetdictionarycombobox = const_cast<VirtualSonnetDictionaryComboBox*>(dynamic_cast<const VirtualSonnetDictionaryComboBox*>(self));
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->setSonnet__DictionaryComboBox_SenderSignalIndex_Callback(reinterpret_cast<VirtualSonnetDictionaryComboBox::Sonnet__DictionaryComboBox_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int Sonnet__DictionaryComboBox_Receivers(const Sonnet__DictionaryComboBox* self, const char* signal) {
    auto* vsonnetdictionarycombobox = const_cast<VirtualSonnetDictionaryComboBox*>(dynamic_cast<const VirtualSonnetDictionaryComboBox*>(self));
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        return vsonnetdictionarycombobox->receivers(signal);
    } else {
        return ((VirtualSonnetDictionaryComboBox*)self)->receivers(signal);
    }
}

// Base class handler implementation
int Sonnet__DictionaryComboBox_QBaseReceivers(const Sonnet__DictionaryComboBox* self, const char* signal) {
    auto* vsonnetdictionarycombobox = const_cast<VirtualSonnetDictionaryComboBox*>(dynamic_cast<const VirtualSonnetDictionaryComboBox*>(self));
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->setSonnet__DictionaryComboBox_Receivers_IsBase(true);
        return vsonnetdictionarycombobox->receivers(signal);
    } else {
        return ((VirtualSonnetDictionaryComboBox*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__DictionaryComboBox_OnReceivers(const Sonnet__DictionaryComboBox* self, intptr_t slot) {
    auto* vsonnetdictionarycombobox = const_cast<VirtualSonnetDictionaryComboBox*>(dynamic_cast<const VirtualSonnetDictionaryComboBox*>(self));
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->setSonnet__DictionaryComboBox_Receivers_Callback(reinterpret_cast<VirtualSonnetDictionaryComboBox::Sonnet__DictionaryComboBox_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool Sonnet__DictionaryComboBox_IsSignalConnected(const Sonnet__DictionaryComboBox* self, const QMetaMethod* signal) {
    auto* vsonnetdictionarycombobox = const_cast<VirtualSonnetDictionaryComboBox*>(dynamic_cast<const VirtualSonnetDictionaryComboBox*>(self));
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        return vsonnetdictionarycombobox->isSignalConnected(*signal);
    } else {
        return ((VirtualSonnetDictionaryComboBox*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool Sonnet__DictionaryComboBox_QBaseIsSignalConnected(const Sonnet__DictionaryComboBox* self, const QMetaMethod* signal) {
    auto* vsonnetdictionarycombobox = const_cast<VirtualSonnetDictionaryComboBox*>(dynamic_cast<const VirtualSonnetDictionaryComboBox*>(self));
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->setSonnet__DictionaryComboBox_IsSignalConnected_IsBase(true);
        return vsonnetdictionarycombobox->isSignalConnected(*signal);
    } else {
        return ((VirtualSonnetDictionaryComboBox*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__DictionaryComboBox_OnIsSignalConnected(const Sonnet__DictionaryComboBox* self, intptr_t slot) {
    auto* vsonnetdictionarycombobox = const_cast<VirtualSonnetDictionaryComboBox*>(dynamic_cast<const VirtualSonnetDictionaryComboBox*>(self));
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->setSonnet__DictionaryComboBox_IsSignalConnected_Callback(reinterpret_cast<VirtualSonnetDictionaryComboBox::Sonnet__DictionaryComboBox_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double Sonnet__DictionaryComboBox_GetDecodedMetricF(const Sonnet__DictionaryComboBox* self, int metricA, int metricB) {
    auto* vsonnetdictionarycombobox = const_cast<VirtualSonnetDictionaryComboBox*>(dynamic_cast<const VirtualSonnetDictionaryComboBox*>(self));
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        return vsonnetdictionarycombobox->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualSonnetDictionaryComboBox*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double Sonnet__DictionaryComboBox_QBaseGetDecodedMetricF(const Sonnet__DictionaryComboBox* self, int metricA, int metricB) {
    auto* vsonnetdictionarycombobox = const_cast<VirtualSonnetDictionaryComboBox*>(dynamic_cast<const VirtualSonnetDictionaryComboBox*>(self));
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->setSonnet__DictionaryComboBox_GetDecodedMetricF_IsBase(true);
        return vsonnetdictionarycombobox->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualSonnetDictionaryComboBox*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__DictionaryComboBox_OnGetDecodedMetricF(const Sonnet__DictionaryComboBox* self, intptr_t slot) {
    auto* vsonnetdictionarycombobox = const_cast<VirtualSonnetDictionaryComboBox*>(dynamic_cast<const VirtualSonnetDictionaryComboBox*>(self));
    if (vsonnetdictionarycombobox && vsonnetdictionarycombobox->isVirtualSonnetDictionaryComboBox) {
        vsonnetdictionarycombobox->setSonnet__DictionaryComboBox_GetDecodedMetricF_Callback(reinterpret_cast<VirtualSonnetDictionaryComboBox::Sonnet__DictionaryComboBox_GetDecodedMetricF_Callback>(slot));
    }
}

void Sonnet__DictionaryComboBox_Delete(Sonnet__DictionaryComboBox* self) {
    delete self;
}
