#include <KColorCombo>
#include <QAbstractItemModel>
#include <QActionEvent>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QColor>
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
#include <QList>
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
#include <kcolorcombo.h>
#include "libkcolorcombo.h"
#include "libkcolorcombo.hxx"

KColorCombo* KColorCombo_new(QWidget* parent) {
    return new VirtualKColorCombo(parent);
}

KColorCombo* KColorCombo_new2() {
    return new VirtualKColorCombo();
}

QMetaObject* KColorCombo_MetaObject(const KColorCombo* self) {
    return (QMetaObject*)self->metaObject();
}

void* KColorCombo_Metacast(KColorCombo* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KColorCombo_Metacall(KColorCombo* self, int param1, int param2, void** param3) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKColorCombo*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void KColorCombo_OnMetacall(KColorCombo* self, intptr_t slot) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->setKColorCombo_Metacall_Callback(reinterpret_cast<VirtualKColorCombo::KColorCombo_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int KColorCombo_QBaseMetacall(KColorCombo* self, int param1, int param2, void** param3) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->setKColorCombo_Metacall_IsBase(true);
        return vkcolorcombo->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKColorCombo*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KColorCombo_Tr(const char* s) {
    QString _ret = KColorCombo::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KColorCombo_SetColor(KColorCombo* self, const QColor* col) {
    self->setColor(*col);
}

QColor* KColorCombo_Color(const KColorCombo* self) {
    return new QColor(self->color());
}

bool KColorCombo_IsCustomColor(const KColorCombo* self) {
    return self->isCustomColor();
}

void KColorCombo_SetColors(KColorCombo* self, const libqt_list /* of QColor* */ colors) {
    QList<QColor> colors_QList;
    colors_QList.reserve(colors.len);
    QColor** colors_arr = static_cast<QColor**>(colors.data);
    for (size_t i = 0; i < colors.len; ++i) {
        colors_QList.push_back(*(colors_arr[i]));
    }
    self->setColors(colors_QList);
}

libqt_list /* of QColor* */ KColorCombo_Colors(const KColorCombo* self) {
    QList<QColor> _ret = self->colors();
    // Convert QList<> from C++ memory to manually-managed C memory
    QColor** _arr = static_cast<QColor**>(malloc(sizeof(QColor*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QColor(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void KColorCombo_ShowEmptyList(KColorCombo* self) {
    self->showEmptyList();
}

void KColorCombo_Activated(KColorCombo* self, const QColor* col) {
    self->activated(*col);
}

void KColorCombo_Connect_Activated(KColorCombo* self, intptr_t slot) {
    void (*slotFunc)(KColorCombo*, QColor*) = reinterpret_cast<void (*)(KColorCombo*, QColor*)>(slot);
    KColorCombo::connect(self, &KColorCombo::activated, [self, slotFunc](const QColor& col) {
        const QColor& col_ret = col;
        // Cast returned reference into pointer
        QColor* sigval1 = const_cast<QColor*>(&col_ret);
        slotFunc(self, sigval1);
    });
}

void KColorCombo_Highlighted(KColorCombo* self, const QColor* col) {
    self->highlighted(*col);
}

void KColorCombo_Connect_Highlighted(KColorCombo* self, intptr_t slot) {
    void (*slotFunc)(KColorCombo*, QColor*) = reinterpret_cast<void (*)(KColorCombo*, QColor*)>(slot);
    KColorCombo::connect(self, &KColorCombo::highlighted, [self, slotFunc](const QColor& col) {
        const QColor& col_ret = col;
        // Cast returned reference into pointer
        QColor* sigval1 = const_cast<QColor*>(&col_ret);
        slotFunc(self, sigval1);
    });
}

libqt_string KColorCombo_Tr2(const char* s, const char* c) {
    QString _ret = KColorCombo::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KColorCombo_Tr3(const char* s, const char* c, int n) {
    QString _ret = KColorCombo::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Derived class handler implementation
void KColorCombo_PaintEvent(KColorCombo* self, QPaintEvent* event) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->paintEvent(event);
    } else {
        ((VirtualKColorCombo*)self)->paintEvent(event);
    }
}

// Base class handler implementation
void KColorCombo_QBasePaintEvent(KColorCombo* self, QPaintEvent* event) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->setKColorCombo_PaintEvent_IsBase(true);
        vkcolorcombo->paintEvent(event);
    } else {
        ((VirtualKColorCombo*)self)->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KColorCombo_OnPaintEvent(KColorCombo* self, intptr_t slot) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->setKColorCombo_PaintEvent_Callback(reinterpret_cast<VirtualKColorCombo::KColorCombo_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KColorCombo_SetModel(KColorCombo* self, QAbstractItemModel* model) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->setModel(model);
    } else {
        self->KColorCombo::setModel(model);
    }
}

// Base class handler implementation
void KColorCombo_QBaseSetModel(KColorCombo* self, QAbstractItemModel* model) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->setKColorCombo_SetModel_IsBase(true);
        vkcolorcombo->setModel(model);
    } else {
        self->KColorCombo::setModel(model);
    }
}

// Auxiliary method to allow providing re-implementation
void KColorCombo_OnSetModel(KColorCombo* self, intptr_t slot) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->setKColorCombo_SetModel_Callback(reinterpret_cast<VirtualKColorCombo::KColorCombo_SetModel_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KColorCombo_SizeHint(const KColorCombo* self) {
    auto* vkcolorcombo = const_cast<VirtualKColorCombo*>(dynamic_cast<const VirtualKColorCombo*>(self));
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        return new QSize(vkcolorcombo->sizeHint());
    } else {
        return new QSize(((VirtualKColorCombo*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* KColorCombo_QBaseSizeHint(const KColorCombo* self) {
    auto* vkcolorcombo = const_cast<VirtualKColorCombo*>(dynamic_cast<const VirtualKColorCombo*>(self));
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->setKColorCombo_SizeHint_IsBase(true);
        return new QSize(vkcolorcombo->sizeHint());
    } else {
        return new QSize(((VirtualKColorCombo*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KColorCombo_OnSizeHint(const KColorCombo* self, intptr_t slot) {
    auto* vkcolorcombo = const_cast<VirtualKColorCombo*>(dynamic_cast<const VirtualKColorCombo*>(self));
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->setKColorCombo_SizeHint_Callback(reinterpret_cast<VirtualKColorCombo::KColorCombo_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KColorCombo_MinimumSizeHint(const KColorCombo* self) {
    auto* vkcolorcombo = const_cast<VirtualKColorCombo*>(dynamic_cast<const VirtualKColorCombo*>(self));
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        return new QSize(vkcolorcombo->minimumSizeHint());
    } else {
        return new QSize(((VirtualKColorCombo*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* KColorCombo_QBaseMinimumSizeHint(const KColorCombo* self) {
    auto* vkcolorcombo = const_cast<VirtualKColorCombo*>(dynamic_cast<const VirtualKColorCombo*>(self));
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->setKColorCombo_MinimumSizeHint_IsBase(true);
        return new QSize(vkcolorcombo->minimumSizeHint());
    } else {
        return new QSize(((VirtualKColorCombo*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KColorCombo_OnMinimumSizeHint(const KColorCombo* self, intptr_t slot) {
    auto* vkcolorcombo = const_cast<VirtualKColorCombo*>(dynamic_cast<const VirtualKColorCombo*>(self));
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->setKColorCombo_MinimumSizeHint_Callback(reinterpret_cast<VirtualKColorCombo::KColorCombo_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void KColorCombo_ShowPopup(KColorCombo* self) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->showPopup();
    } else {
        self->KColorCombo::showPopup();
    }
}

// Base class handler implementation
void KColorCombo_QBaseShowPopup(KColorCombo* self) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->setKColorCombo_ShowPopup_IsBase(true);
        vkcolorcombo->showPopup();
    } else {
        self->KColorCombo::showPopup();
    }
}

// Auxiliary method to allow providing re-implementation
void KColorCombo_OnShowPopup(KColorCombo* self, intptr_t slot) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->setKColorCombo_ShowPopup_Callback(reinterpret_cast<VirtualKColorCombo::KColorCombo_ShowPopup_Callback>(slot));
    }
}

// Derived class handler implementation
void KColorCombo_HidePopup(KColorCombo* self) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->hidePopup();
    } else {
        self->KColorCombo::hidePopup();
    }
}

// Base class handler implementation
void KColorCombo_QBaseHidePopup(KColorCombo* self) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->setKColorCombo_HidePopup_IsBase(true);
        vkcolorcombo->hidePopup();
    } else {
        self->KColorCombo::hidePopup();
    }
}

// Auxiliary method to allow providing re-implementation
void KColorCombo_OnHidePopup(KColorCombo* self, intptr_t slot) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->setKColorCombo_HidePopup_Callback(reinterpret_cast<VirtualKColorCombo::KColorCombo_HidePopup_Callback>(slot));
    }
}

// Derived class handler implementation
bool KColorCombo_Event(KColorCombo* self, QEvent* event) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        return vkcolorcombo->event(event);
    } else {
        return self->KColorCombo::event(event);
    }
}

// Base class handler implementation
bool KColorCombo_QBaseEvent(KColorCombo* self, QEvent* event) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->setKColorCombo_Event_IsBase(true);
        return vkcolorcombo->event(event);
    } else {
        return self->KColorCombo::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KColorCombo_OnEvent(KColorCombo* self, intptr_t slot) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->setKColorCombo_Event_Callback(reinterpret_cast<VirtualKColorCombo::KColorCombo_Event_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* KColorCombo_InputMethodQuery(const KColorCombo* self, int param1) {
    auto* vkcolorcombo = const_cast<VirtualKColorCombo*>(dynamic_cast<const VirtualKColorCombo*>(self));
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        return new QVariant(vkcolorcombo->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKColorCombo*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* KColorCombo_QBaseInputMethodQuery(const KColorCombo* self, int param1) {
    auto* vkcolorcombo = const_cast<VirtualKColorCombo*>(dynamic_cast<const VirtualKColorCombo*>(self));
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->setKColorCombo_InputMethodQuery_IsBase(true);
        return new QVariant(vkcolorcombo->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKColorCombo*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void KColorCombo_OnInputMethodQuery(const KColorCombo* self, intptr_t slot) {
    auto* vkcolorcombo = const_cast<VirtualKColorCombo*>(dynamic_cast<const VirtualKColorCombo*>(self));
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->setKColorCombo_InputMethodQuery_Callback(reinterpret_cast<VirtualKColorCombo::KColorCombo_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
void KColorCombo_FocusInEvent(KColorCombo* self, QFocusEvent* e) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->focusInEvent(e);
    } else {
        ((VirtualKColorCombo*)self)->focusInEvent(e);
    }
}

// Base class handler implementation
void KColorCombo_QBaseFocusInEvent(KColorCombo* self, QFocusEvent* e) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->setKColorCombo_FocusInEvent_IsBase(true);
        vkcolorcombo->focusInEvent(e);
    } else {
        ((VirtualKColorCombo*)self)->focusInEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KColorCombo_OnFocusInEvent(KColorCombo* self, intptr_t slot) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->setKColorCombo_FocusInEvent_Callback(reinterpret_cast<VirtualKColorCombo::KColorCombo_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KColorCombo_FocusOutEvent(KColorCombo* self, QFocusEvent* e) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->focusOutEvent(e);
    } else {
        ((VirtualKColorCombo*)self)->focusOutEvent(e);
    }
}

// Base class handler implementation
void KColorCombo_QBaseFocusOutEvent(KColorCombo* self, QFocusEvent* e) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->setKColorCombo_FocusOutEvent_IsBase(true);
        vkcolorcombo->focusOutEvent(e);
    } else {
        ((VirtualKColorCombo*)self)->focusOutEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KColorCombo_OnFocusOutEvent(KColorCombo* self, intptr_t slot) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->setKColorCombo_FocusOutEvent_Callback(reinterpret_cast<VirtualKColorCombo::KColorCombo_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KColorCombo_ChangeEvent(KColorCombo* self, QEvent* e) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->changeEvent(e);
    } else {
        ((VirtualKColorCombo*)self)->changeEvent(e);
    }
}

// Base class handler implementation
void KColorCombo_QBaseChangeEvent(KColorCombo* self, QEvent* e) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->setKColorCombo_ChangeEvent_IsBase(true);
        vkcolorcombo->changeEvent(e);
    } else {
        ((VirtualKColorCombo*)self)->changeEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KColorCombo_OnChangeEvent(KColorCombo* self, intptr_t slot) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->setKColorCombo_ChangeEvent_Callback(reinterpret_cast<VirtualKColorCombo::KColorCombo_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KColorCombo_ResizeEvent(KColorCombo* self, QResizeEvent* e) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->resizeEvent(e);
    } else {
        ((VirtualKColorCombo*)self)->resizeEvent(e);
    }
}

// Base class handler implementation
void KColorCombo_QBaseResizeEvent(KColorCombo* self, QResizeEvent* e) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->setKColorCombo_ResizeEvent_IsBase(true);
        vkcolorcombo->resizeEvent(e);
    } else {
        ((VirtualKColorCombo*)self)->resizeEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KColorCombo_OnResizeEvent(KColorCombo* self, intptr_t slot) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->setKColorCombo_ResizeEvent_Callback(reinterpret_cast<VirtualKColorCombo::KColorCombo_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KColorCombo_ShowEvent(KColorCombo* self, QShowEvent* e) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->showEvent(e);
    } else {
        ((VirtualKColorCombo*)self)->showEvent(e);
    }
}

// Base class handler implementation
void KColorCombo_QBaseShowEvent(KColorCombo* self, QShowEvent* e) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->setKColorCombo_ShowEvent_IsBase(true);
        vkcolorcombo->showEvent(e);
    } else {
        ((VirtualKColorCombo*)self)->showEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KColorCombo_OnShowEvent(KColorCombo* self, intptr_t slot) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->setKColorCombo_ShowEvent_Callback(reinterpret_cast<VirtualKColorCombo::KColorCombo_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KColorCombo_HideEvent(KColorCombo* self, QHideEvent* e) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->hideEvent(e);
    } else {
        ((VirtualKColorCombo*)self)->hideEvent(e);
    }
}

// Base class handler implementation
void KColorCombo_QBaseHideEvent(KColorCombo* self, QHideEvent* e) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->setKColorCombo_HideEvent_IsBase(true);
        vkcolorcombo->hideEvent(e);
    } else {
        ((VirtualKColorCombo*)self)->hideEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KColorCombo_OnHideEvent(KColorCombo* self, intptr_t slot) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->setKColorCombo_HideEvent_Callback(reinterpret_cast<VirtualKColorCombo::KColorCombo_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KColorCombo_MousePressEvent(KColorCombo* self, QMouseEvent* e) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->mousePressEvent(e);
    } else {
        ((VirtualKColorCombo*)self)->mousePressEvent(e);
    }
}

// Base class handler implementation
void KColorCombo_QBaseMousePressEvent(KColorCombo* self, QMouseEvent* e) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->setKColorCombo_MousePressEvent_IsBase(true);
        vkcolorcombo->mousePressEvent(e);
    } else {
        ((VirtualKColorCombo*)self)->mousePressEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KColorCombo_OnMousePressEvent(KColorCombo* self, intptr_t slot) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->setKColorCombo_MousePressEvent_Callback(reinterpret_cast<VirtualKColorCombo::KColorCombo_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KColorCombo_MouseReleaseEvent(KColorCombo* self, QMouseEvent* e) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->mouseReleaseEvent(e);
    } else {
        ((VirtualKColorCombo*)self)->mouseReleaseEvent(e);
    }
}

// Base class handler implementation
void KColorCombo_QBaseMouseReleaseEvent(KColorCombo* self, QMouseEvent* e) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->setKColorCombo_MouseReleaseEvent_IsBase(true);
        vkcolorcombo->mouseReleaseEvent(e);
    } else {
        ((VirtualKColorCombo*)self)->mouseReleaseEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KColorCombo_OnMouseReleaseEvent(KColorCombo* self, intptr_t slot) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->setKColorCombo_MouseReleaseEvent_Callback(reinterpret_cast<VirtualKColorCombo::KColorCombo_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KColorCombo_KeyPressEvent(KColorCombo* self, QKeyEvent* e) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->keyPressEvent(e);
    } else {
        ((VirtualKColorCombo*)self)->keyPressEvent(e);
    }
}

// Base class handler implementation
void KColorCombo_QBaseKeyPressEvent(KColorCombo* self, QKeyEvent* e) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->setKColorCombo_KeyPressEvent_IsBase(true);
        vkcolorcombo->keyPressEvent(e);
    } else {
        ((VirtualKColorCombo*)self)->keyPressEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KColorCombo_OnKeyPressEvent(KColorCombo* self, intptr_t slot) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->setKColorCombo_KeyPressEvent_Callback(reinterpret_cast<VirtualKColorCombo::KColorCombo_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KColorCombo_KeyReleaseEvent(KColorCombo* self, QKeyEvent* e) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->keyReleaseEvent(e);
    } else {
        ((VirtualKColorCombo*)self)->keyReleaseEvent(e);
    }
}

// Base class handler implementation
void KColorCombo_QBaseKeyReleaseEvent(KColorCombo* self, QKeyEvent* e) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->setKColorCombo_KeyReleaseEvent_IsBase(true);
        vkcolorcombo->keyReleaseEvent(e);
    } else {
        ((VirtualKColorCombo*)self)->keyReleaseEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KColorCombo_OnKeyReleaseEvent(KColorCombo* self, intptr_t slot) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->setKColorCombo_KeyReleaseEvent_Callback(reinterpret_cast<VirtualKColorCombo::KColorCombo_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KColorCombo_WheelEvent(KColorCombo* self, QWheelEvent* e) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->wheelEvent(e);
    } else {
        ((VirtualKColorCombo*)self)->wheelEvent(e);
    }
}

// Base class handler implementation
void KColorCombo_QBaseWheelEvent(KColorCombo* self, QWheelEvent* e) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->setKColorCombo_WheelEvent_IsBase(true);
        vkcolorcombo->wheelEvent(e);
    } else {
        ((VirtualKColorCombo*)self)->wheelEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KColorCombo_OnWheelEvent(KColorCombo* self, intptr_t slot) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->setKColorCombo_WheelEvent_Callback(reinterpret_cast<VirtualKColorCombo::KColorCombo_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KColorCombo_ContextMenuEvent(KColorCombo* self, QContextMenuEvent* e) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->contextMenuEvent(e);
    } else {
        ((VirtualKColorCombo*)self)->contextMenuEvent(e);
    }
}

// Base class handler implementation
void KColorCombo_QBaseContextMenuEvent(KColorCombo* self, QContextMenuEvent* e) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->setKColorCombo_ContextMenuEvent_IsBase(true);
        vkcolorcombo->contextMenuEvent(e);
    } else {
        ((VirtualKColorCombo*)self)->contextMenuEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KColorCombo_OnContextMenuEvent(KColorCombo* self, intptr_t slot) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->setKColorCombo_ContextMenuEvent_Callback(reinterpret_cast<VirtualKColorCombo::KColorCombo_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KColorCombo_InputMethodEvent(KColorCombo* self, QInputMethodEvent* param1) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->inputMethodEvent(param1);
    } else {
        ((VirtualKColorCombo*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void KColorCombo_QBaseInputMethodEvent(KColorCombo* self, QInputMethodEvent* param1) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->setKColorCombo_InputMethodEvent_IsBase(true);
        vkcolorcombo->inputMethodEvent(param1);
    } else {
        ((VirtualKColorCombo*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KColorCombo_OnInputMethodEvent(KColorCombo* self, intptr_t slot) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->setKColorCombo_InputMethodEvent_Callback(reinterpret_cast<VirtualKColorCombo::KColorCombo_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KColorCombo_InitStyleOption(const KColorCombo* self, QStyleOptionComboBox* option) {
    auto* vkcolorcombo = const_cast<VirtualKColorCombo*>(dynamic_cast<const VirtualKColorCombo*>(self));
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->initStyleOption(option);
    } else {
        ((VirtualKColorCombo*)self)->initStyleOption(option);
    }
}

// Base class handler implementation
void KColorCombo_QBaseInitStyleOption(const KColorCombo* self, QStyleOptionComboBox* option) {
    auto* vkcolorcombo = const_cast<VirtualKColorCombo*>(dynamic_cast<const VirtualKColorCombo*>(self));
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->setKColorCombo_InitStyleOption_IsBase(true);
        vkcolorcombo->initStyleOption(option);
    } else {
        ((VirtualKColorCombo*)self)->initStyleOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void KColorCombo_OnInitStyleOption(const KColorCombo* self, intptr_t slot) {
    auto* vkcolorcombo = const_cast<VirtualKColorCombo*>(dynamic_cast<const VirtualKColorCombo*>(self));
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->setKColorCombo_InitStyleOption_Callback(reinterpret_cast<VirtualKColorCombo::KColorCombo_InitStyleOption_Callback>(slot));
    }
}

// Derived class handler implementation
int KColorCombo_DevType(const KColorCombo* self) {
    auto* vkcolorcombo = const_cast<VirtualKColorCombo*>(dynamic_cast<const VirtualKColorCombo*>(self));
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        return vkcolorcombo->devType();
    } else {
        return self->KColorCombo::devType();
    }
}

// Base class handler implementation
int KColorCombo_QBaseDevType(const KColorCombo* self) {
    auto* vkcolorcombo = const_cast<VirtualKColorCombo*>(dynamic_cast<const VirtualKColorCombo*>(self));
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->setKColorCombo_DevType_IsBase(true);
        return vkcolorcombo->devType();
    } else {
        return self->KColorCombo::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void KColorCombo_OnDevType(const KColorCombo* self, intptr_t slot) {
    auto* vkcolorcombo = const_cast<VirtualKColorCombo*>(dynamic_cast<const VirtualKColorCombo*>(self));
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->setKColorCombo_DevType_Callback(reinterpret_cast<VirtualKColorCombo::KColorCombo_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void KColorCombo_SetVisible(KColorCombo* self, bool visible) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->setVisible(visible);
    } else {
        self->KColorCombo::setVisible(visible);
    }
}

// Base class handler implementation
void KColorCombo_QBaseSetVisible(KColorCombo* self, bool visible) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->setKColorCombo_SetVisible_IsBase(true);
        vkcolorcombo->setVisible(visible);
    } else {
        self->KColorCombo::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void KColorCombo_OnSetVisible(KColorCombo* self, intptr_t slot) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->setKColorCombo_SetVisible_Callback(reinterpret_cast<VirtualKColorCombo::KColorCombo_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
int KColorCombo_HeightForWidth(const KColorCombo* self, int param1) {
    auto* vkcolorcombo = const_cast<VirtualKColorCombo*>(dynamic_cast<const VirtualKColorCombo*>(self));
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        return vkcolorcombo->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KColorCombo::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int KColorCombo_QBaseHeightForWidth(const KColorCombo* self, int param1) {
    auto* vkcolorcombo = const_cast<VirtualKColorCombo*>(dynamic_cast<const VirtualKColorCombo*>(self));
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->setKColorCombo_HeightForWidth_IsBase(true);
        return vkcolorcombo->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KColorCombo::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KColorCombo_OnHeightForWidth(const KColorCombo* self, intptr_t slot) {
    auto* vkcolorcombo = const_cast<VirtualKColorCombo*>(dynamic_cast<const VirtualKColorCombo*>(self));
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->setKColorCombo_HeightForWidth_Callback(reinterpret_cast<VirtualKColorCombo::KColorCombo_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool KColorCombo_HasHeightForWidth(const KColorCombo* self) {
    auto* vkcolorcombo = const_cast<VirtualKColorCombo*>(dynamic_cast<const VirtualKColorCombo*>(self));
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        return vkcolorcombo->hasHeightForWidth();
    } else {
        return self->KColorCombo::hasHeightForWidth();
    }
}

// Base class handler implementation
bool KColorCombo_QBaseHasHeightForWidth(const KColorCombo* self) {
    auto* vkcolorcombo = const_cast<VirtualKColorCombo*>(dynamic_cast<const VirtualKColorCombo*>(self));
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->setKColorCombo_HasHeightForWidth_IsBase(true);
        return vkcolorcombo->hasHeightForWidth();
    } else {
        return self->KColorCombo::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void KColorCombo_OnHasHeightForWidth(const KColorCombo* self, intptr_t slot) {
    auto* vkcolorcombo = const_cast<VirtualKColorCombo*>(dynamic_cast<const VirtualKColorCombo*>(self));
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->setKColorCombo_HasHeightForWidth_Callback(reinterpret_cast<VirtualKColorCombo::KColorCombo_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* KColorCombo_PaintEngine(const KColorCombo* self) {
    auto* vkcolorcombo = const_cast<VirtualKColorCombo*>(dynamic_cast<const VirtualKColorCombo*>(self));
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        return vkcolorcombo->paintEngine();
    } else {
        return self->KColorCombo::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* KColorCombo_QBasePaintEngine(const KColorCombo* self) {
    auto* vkcolorcombo = const_cast<VirtualKColorCombo*>(dynamic_cast<const VirtualKColorCombo*>(self));
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->setKColorCombo_PaintEngine_IsBase(true);
        return vkcolorcombo->paintEngine();
    } else {
        return self->KColorCombo::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void KColorCombo_OnPaintEngine(const KColorCombo* self, intptr_t slot) {
    auto* vkcolorcombo = const_cast<VirtualKColorCombo*>(dynamic_cast<const VirtualKColorCombo*>(self));
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->setKColorCombo_PaintEngine_Callback(reinterpret_cast<VirtualKColorCombo::KColorCombo_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void KColorCombo_MouseDoubleClickEvent(KColorCombo* self, QMouseEvent* event) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKColorCombo*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void KColorCombo_QBaseMouseDoubleClickEvent(KColorCombo* self, QMouseEvent* event) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->setKColorCombo_MouseDoubleClickEvent_IsBase(true);
        vkcolorcombo->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKColorCombo*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KColorCombo_OnMouseDoubleClickEvent(KColorCombo* self, intptr_t slot) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->setKColorCombo_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualKColorCombo::KColorCombo_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KColorCombo_MouseMoveEvent(KColorCombo* self, QMouseEvent* event) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->mouseMoveEvent(event);
    } else {
        ((VirtualKColorCombo*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void KColorCombo_QBaseMouseMoveEvent(KColorCombo* self, QMouseEvent* event) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->setKColorCombo_MouseMoveEvent_IsBase(true);
        vkcolorcombo->mouseMoveEvent(event);
    } else {
        ((VirtualKColorCombo*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KColorCombo_OnMouseMoveEvent(KColorCombo* self, intptr_t slot) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->setKColorCombo_MouseMoveEvent_Callback(reinterpret_cast<VirtualKColorCombo::KColorCombo_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KColorCombo_EnterEvent(KColorCombo* self, QEnterEvent* event) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->enterEvent(event);
    } else {
        ((VirtualKColorCombo*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void KColorCombo_QBaseEnterEvent(KColorCombo* self, QEnterEvent* event) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->setKColorCombo_EnterEvent_IsBase(true);
        vkcolorcombo->enterEvent(event);
    } else {
        ((VirtualKColorCombo*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KColorCombo_OnEnterEvent(KColorCombo* self, intptr_t slot) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->setKColorCombo_EnterEvent_Callback(reinterpret_cast<VirtualKColorCombo::KColorCombo_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KColorCombo_LeaveEvent(KColorCombo* self, QEvent* event) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->leaveEvent(event);
    } else {
        ((VirtualKColorCombo*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void KColorCombo_QBaseLeaveEvent(KColorCombo* self, QEvent* event) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->setKColorCombo_LeaveEvent_IsBase(true);
        vkcolorcombo->leaveEvent(event);
    } else {
        ((VirtualKColorCombo*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KColorCombo_OnLeaveEvent(KColorCombo* self, intptr_t slot) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->setKColorCombo_LeaveEvent_Callback(reinterpret_cast<VirtualKColorCombo::KColorCombo_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KColorCombo_MoveEvent(KColorCombo* self, QMoveEvent* event) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->moveEvent(event);
    } else {
        ((VirtualKColorCombo*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void KColorCombo_QBaseMoveEvent(KColorCombo* self, QMoveEvent* event) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->setKColorCombo_MoveEvent_IsBase(true);
        vkcolorcombo->moveEvent(event);
    } else {
        ((VirtualKColorCombo*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KColorCombo_OnMoveEvent(KColorCombo* self, intptr_t slot) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->setKColorCombo_MoveEvent_Callback(reinterpret_cast<VirtualKColorCombo::KColorCombo_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KColorCombo_CloseEvent(KColorCombo* self, QCloseEvent* event) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->closeEvent(event);
    } else {
        ((VirtualKColorCombo*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void KColorCombo_QBaseCloseEvent(KColorCombo* self, QCloseEvent* event) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->setKColorCombo_CloseEvent_IsBase(true);
        vkcolorcombo->closeEvent(event);
    } else {
        ((VirtualKColorCombo*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KColorCombo_OnCloseEvent(KColorCombo* self, intptr_t slot) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->setKColorCombo_CloseEvent_Callback(reinterpret_cast<VirtualKColorCombo::KColorCombo_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KColorCombo_TabletEvent(KColorCombo* self, QTabletEvent* event) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->tabletEvent(event);
    } else {
        ((VirtualKColorCombo*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void KColorCombo_QBaseTabletEvent(KColorCombo* self, QTabletEvent* event) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->setKColorCombo_TabletEvent_IsBase(true);
        vkcolorcombo->tabletEvent(event);
    } else {
        ((VirtualKColorCombo*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KColorCombo_OnTabletEvent(KColorCombo* self, intptr_t slot) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->setKColorCombo_TabletEvent_Callback(reinterpret_cast<VirtualKColorCombo::KColorCombo_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KColorCombo_ActionEvent(KColorCombo* self, QActionEvent* event) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->actionEvent(event);
    } else {
        ((VirtualKColorCombo*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void KColorCombo_QBaseActionEvent(KColorCombo* self, QActionEvent* event) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->setKColorCombo_ActionEvent_IsBase(true);
        vkcolorcombo->actionEvent(event);
    } else {
        ((VirtualKColorCombo*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KColorCombo_OnActionEvent(KColorCombo* self, intptr_t slot) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->setKColorCombo_ActionEvent_Callback(reinterpret_cast<VirtualKColorCombo::KColorCombo_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KColorCombo_DragEnterEvent(KColorCombo* self, QDragEnterEvent* event) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->dragEnterEvent(event);
    } else {
        ((VirtualKColorCombo*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void KColorCombo_QBaseDragEnterEvent(KColorCombo* self, QDragEnterEvent* event) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->setKColorCombo_DragEnterEvent_IsBase(true);
        vkcolorcombo->dragEnterEvent(event);
    } else {
        ((VirtualKColorCombo*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KColorCombo_OnDragEnterEvent(KColorCombo* self, intptr_t slot) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->setKColorCombo_DragEnterEvent_Callback(reinterpret_cast<VirtualKColorCombo::KColorCombo_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KColorCombo_DragMoveEvent(KColorCombo* self, QDragMoveEvent* event) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->dragMoveEvent(event);
    } else {
        ((VirtualKColorCombo*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void KColorCombo_QBaseDragMoveEvent(KColorCombo* self, QDragMoveEvent* event) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->setKColorCombo_DragMoveEvent_IsBase(true);
        vkcolorcombo->dragMoveEvent(event);
    } else {
        ((VirtualKColorCombo*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KColorCombo_OnDragMoveEvent(KColorCombo* self, intptr_t slot) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->setKColorCombo_DragMoveEvent_Callback(reinterpret_cast<VirtualKColorCombo::KColorCombo_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KColorCombo_DragLeaveEvent(KColorCombo* self, QDragLeaveEvent* event) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->dragLeaveEvent(event);
    } else {
        ((VirtualKColorCombo*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void KColorCombo_QBaseDragLeaveEvent(KColorCombo* self, QDragLeaveEvent* event) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->setKColorCombo_DragLeaveEvent_IsBase(true);
        vkcolorcombo->dragLeaveEvent(event);
    } else {
        ((VirtualKColorCombo*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KColorCombo_OnDragLeaveEvent(KColorCombo* self, intptr_t slot) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->setKColorCombo_DragLeaveEvent_Callback(reinterpret_cast<VirtualKColorCombo::KColorCombo_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KColorCombo_DropEvent(KColorCombo* self, QDropEvent* event) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->dropEvent(event);
    } else {
        ((VirtualKColorCombo*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void KColorCombo_QBaseDropEvent(KColorCombo* self, QDropEvent* event) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->setKColorCombo_DropEvent_IsBase(true);
        vkcolorcombo->dropEvent(event);
    } else {
        ((VirtualKColorCombo*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KColorCombo_OnDropEvent(KColorCombo* self, intptr_t slot) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->setKColorCombo_DropEvent_Callback(reinterpret_cast<VirtualKColorCombo::KColorCombo_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KColorCombo_NativeEvent(KColorCombo* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        return vkcolorcombo->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKColorCombo*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool KColorCombo_QBaseNativeEvent(KColorCombo* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->setKColorCombo_NativeEvent_IsBase(true);
        return vkcolorcombo->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKColorCombo*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void KColorCombo_OnNativeEvent(KColorCombo* self, intptr_t slot) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->setKColorCombo_NativeEvent_Callback(reinterpret_cast<VirtualKColorCombo::KColorCombo_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int KColorCombo_Metric(const KColorCombo* self, int param1) {
    auto* vkcolorcombo = const_cast<VirtualKColorCombo*>(dynamic_cast<const VirtualKColorCombo*>(self));
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        return vkcolorcombo->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKColorCombo*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int KColorCombo_QBaseMetric(const KColorCombo* self, int param1) {
    auto* vkcolorcombo = const_cast<VirtualKColorCombo*>(dynamic_cast<const VirtualKColorCombo*>(self));
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->setKColorCombo_Metric_IsBase(true);
        return vkcolorcombo->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKColorCombo*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KColorCombo_OnMetric(const KColorCombo* self, intptr_t slot) {
    auto* vkcolorcombo = const_cast<VirtualKColorCombo*>(dynamic_cast<const VirtualKColorCombo*>(self));
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->setKColorCombo_Metric_Callback(reinterpret_cast<VirtualKColorCombo::KColorCombo_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void KColorCombo_InitPainter(const KColorCombo* self, QPainter* painter) {
    auto* vkcolorcombo = const_cast<VirtualKColorCombo*>(dynamic_cast<const VirtualKColorCombo*>(self));
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->initPainter(painter);
    } else {
        ((VirtualKColorCombo*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void KColorCombo_QBaseInitPainter(const KColorCombo* self, QPainter* painter) {
    auto* vkcolorcombo = const_cast<VirtualKColorCombo*>(dynamic_cast<const VirtualKColorCombo*>(self));
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->setKColorCombo_InitPainter_IsBase(true);
        vkcolorcombo->initPainter(painter);
    } else {
        ((VirtualKColorCombo*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void KColorCombo_OnInitPainter(const KColorCombo* self, intptr_t slot) {
    auto* vkcolorcombo = const_cast<VirtualKColorCombo*>(dynamic_cast<const VirtualKColorCombo*>(self));
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->setKColorCombo_InitPainter_Callback(reinterpret_cast<VirtualKColorCombo::KColorCombo_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* KColorCombo_Redirected(const KColorCombo* self, QPoint* offset) {
    auto* vkcolorcombo = const_cast<VirtualKColorCombo*>(dynamic_cast<const VirtualKColorCombo*>(self));
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        return vkcolorcombo->redirected(offset);
    } else {
        return ((VirtualKColorCombo*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* KColorCombo_QBaseRedirected(const KColorCombo* self, QPoint* offset) {
    auto* vkcolorcombo = const_cast<VirtualKColorCombo*>(dynamic_cast<const VirtualKColorCombo*>(self));
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->setKColorCombo_Redirected_IsBase(true);
        return vkcolorcombo->redirected(offset);
    } else {
        return ((VirtualKColorCombo*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void KColorCombo_OnRedirected(const KColorCombo* self, intptr_t slot) {
    auto* vkcolorcombo = const_cast<VirtualKColorCombo*>(dynamic_cast<const VirtualKColorCombo*>(self));
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->setKColorCombo_Redirected_Callback(reinterpret_cast<VirtualKColorCombo::KColorCombo_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* KColorCombo_SharedPainter(const KColorCombo* self) {
    auto* vkcolorcombo = const_cast<VirtualKColorCombo*>(dynamic_cast<const VirtualKColorCombo*>(self));
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        return vkcolorcombo->sharedPainter();
    } else {
        return ((VirtualKColorCombo*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* KColorCombo_QBaseSharedPainter(const KColorCombo* self) {
    auto* vkcolorcombo = const_cast<VirtualKColorCombo*>(dynamic_cast<const VirtualKColorCombo*>(self));
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->setKColorCombo_SharedPainter_IsBase(true);
        return vkcolorcombo->sharedPainter();
    } else {
        return ((VirtualKColorCombo*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void KColorCombo_OnSharedPainter(const KColorCombo* self, intptr_t slot) {
    auto* vkcolorcombo = const_cast<VirtualKColorCombo*>(dynamic_cast<const VirtualKColorCombo*>(self));
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->setKColorCombo_SharedPainter_Callback(reinterpret_cast<VirtualKColorCombo::KColorCombo_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
bool KColorCombo_FocusNextPrevChild(KColorCombo* self, bool next) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        return vkcolorcombo->focusNextPrevChild(next);
    } else {
        return ((VirtualKColorCombo*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool KColorCombo_QBaseFocusNextPrevChild(KColorCombo* self, bool next) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->setKColorCombo_FocusNextPrevChild_IsBase(true);
        return vkcolorcombo->focusNextPrevChild(next);
    } else {
        return ((VirtualKColorCombo*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void KColorCombo_OnFocusNextPrevChild(KColorCombo* self, intptr_t slot) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->setKColorCombo_FocusNextPrevChild_Callback(reinterpret_cast<VirtualKColorCombo::KColorCombo_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KColorCombo_EventFilter(KColorCombo* self, QObject* watched, QEvent* event) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        return vkcolorcombo->eventFilter(watched, event);
    } else {
        return self->KColorCombo::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KColorCombo_QBaseEventFilter(KColorCombo* self, QObject* watched, QEvent* event) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->setKColorCombo_EventFilter_IsBase(true);
        return vkcolorcombo->eventFilter(watched, event);
    } else {
        return self->KColorCombo::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KColorCombo_OnEventFilter(KColorCombo* self, intptr_t slot) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->setKColorCombo_EventFilter_Callback(reinterpret_cast<VirtualKColorCombo::KColorCombo_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KColorCombo_TimerEvent(KColorCombo* self, QTimerEvent* event) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->timerEvent(event);
    } else {
        ((VirtualKColorCombo*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KColorCombo_QBaseTimerEvent(KColorCombo* self, QTimerEvent* event) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->setKColorCombo_TimerEvent_IsBase(true);
        vkcolorcombo->timerEvent(event);
    } else {
        ((VirtualKColorCombo*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KColorCombo_OnTimerEvent(KColorCombo* self, intptr_t slot) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->setKColorCombo_TimerEvent_Callback(reinterpret_cast<VirtualKColorCombo::KColorCombo_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KColorCombo_ChildEvent(KColorCombo* self, QChildEvent* event) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->childEvent(event);
    } else {
        ((VirtualKColorCombo*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KColorCombo_QBaseChildEvent(KColorCombo* self, QChildEvent* event) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->setKColorCombo_ChildEvent_IsBase(true);
        vkcolorcombo->childEvent(event);
    } else {
        ((VirtualKColorCombo*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KColorCombo_OnChildEvent(KColorCombo* self, intptr_t slot) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->setKColorCombo_ChildEvent_Callback(reinterpret_cast<VirtualKColorCombo::KColorCombo_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KColorCombo_CustomEvent(KColorCombo* self, QEvent* event) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->customEvent(event);
    } else {
        ((VirtualKColorCombo*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KColorCombo_QBaseCustomEvent(KColorCombo* self, QEvent* event) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->setKColorCombo_CustomEvent_IsBase(true);
        vkcolorcombo->customEvent(event);
    } else {
        ((VirtualKColorCombo*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KColorCombo_OnCustomEvent(KColorCombo* self, intptr_t slot) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->setKColorCombo_CustomEvent_Callback(reinterpret_cast<VirtualKColorCombo::KColorCombo_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KColorCombo_ConnectNotify(KColorCombo* self, const QMetaMethod* signal) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->connectNotify(*signal);
    } else {
        ((VirtualKColorCombo*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KColorCombo_QBaseConnectNotify(KColorCombo* self, const QMetaMethod* signal) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->setKColorCombo_ConnectNotify_IsBase(true);
        vkcolorcombo->connectNotify(*signal);
    } else {
        ((VirtualKColorCombo*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KColorCombo_OnConnectNotify(KColorCombo* self, intptr_t slot) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->setKColorCombo_ConnectNotify_Callback(reinterpret_cast<VirtualKColorCombo::KColorCombo_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KColorCombo_DisconnectNotify(KColorCombo* self, const QMetaMethod* signal) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->disconnectNotify(*signal);
    } else {
        ((VirtualKColorCombo*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KColorCombo_QBaseDisconnectNotify(KColorCombo* self, const QMetaMethod* signal) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->setKColorCombo_DisconnectNotify_IsBase(true);
        vkcolorcombo->disconnectNotify(*signal);
    } else {
        ((VirtualKColorCombo*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KColorCombo_OnDisconnectNotify(KColorCombo* self, intptr_t slot) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->setKColorCombo_DisconnectNotify_Callback(reinterpret_cast<VirtualKColorCombo::KColorCombo_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KColorCombo_UpdateMicroFocus(KColorCombo* self) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->updateMicroFocus();
    } else {
        ((VirtualKColorCombo*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void KColorCombo_QBaseUpdateMicroFocus(KColorCombo* self) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->setKColorCombo_UpdateMicroFocus_IsBase(true);
        vkcolorcombo->updateMicroFocus();
    } else {
        ((VirtualKColorCombo*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void KColorCombo_OnUpdateMicroFocus(KColorCombo* self, intptr_t slot) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->setKColorCombo_UpdateMicroFocus_Callback(reinterpret_cast<VirtualKColorCombo::KColorCombo_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void KColorCombo_Create(KColorCombo* self) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->create();
    } else {
        ((VirtualKColorCombo*)self)->create();
    }
}

// Base class handler implementation
void KColorCombo_QBaseCreate(KColorCombo* self) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->setKColorCombo_Create_IsBase(true);
        vkcolorcombo->create();
    } else {
        ((VirtualKColorCombo*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void KColorCombo_OnCreate(KColorCombo* self, intptr_t slot) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->setKColorCombo_Create_Callback(reinterpret_cast<VirtualKColorCombo::KColorCombo_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void KColorCombo_Destroy(KColorCombo* self) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->destroy();
    } else {
        ((VirtualKColorCombo*)self)->destroy();
    }
}

// Base class handler implementation
void KColorCombo_QBaseDestroy(KColorCombo* self) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->setKColorCombo_Destroy_IsBase(true);
        vkcolorcombo->destroy();
    } else {
        ((VirtualKColorCombo*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void KColorCombo_OnDestroy(KColorCombo* self, intptr_t slot) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->setKColorCombo_Destroy_Callback(reinterpret_cast<VirtualKColorCombo::KColorCombo_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool KColorCombo_FocusNextChild(KColorCombo* self) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        return vkcolorcombo->focusNextChild();
    } else {
        return ((VirtualKColorCombo*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool KColorCombo_QBaseFocusNextChild(KColorCombo* self) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->setKColorCombo_FocusNextChild_IsBase(true);
        return vkcolorcombo->focusNextChild();
    } else {
        return ((VirtualKColorCombo*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KColorCombo_OnFocusNextChild(KColorCombo* self, intptr_t slot) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->setKColorCombo_FocusNextChild_Callback(reinterpret_cast<VirtualKColorCombo::KColorCombo_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KColorCombo_FocusPreviousChild(KColorCombo* self) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        return vkcolorcombo->focusPreviousChild();
    } else {
        return ((VirtualKColorCombo*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool KColorCombo_QBaseFocusPreviousChild(KColorCombo* self) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->setKColorCombo_FocusPreviousChild_IsBase(true);
        return vkcolorcombo->focusPreviousChild();
    } else {
        return ((VirtualKColorCombo*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KColorCombo_OnFocusPreviousChild(KColorCombo* self, intptr_t slot) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->setKColorCombo_FocusPreviousChild_Callback(reinterpret_cast<VirtualKColorCombo::KColorCombo_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KColorCombo_Sender(const KColorCombo* self) {
    auto* vkcolorcombo = const_cast<VirtualKColorCombo*>(dynamic_cast<const VirtualKColorCombo*>(self));
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        return vkcolorcombo->sender();
    } else {
        return ((VirtualKColorCombo*)self)->sender();
    }
}

// Base class handler implementation
QObject* KColorCombo_QBaseSender(const KColorCombo* self) {
    auto* vkcolorcombo = const_cast<VirtualKColorCombo*>(dynamic_cast<const VirtualKColorCombo*>(self));
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->setKColorCombo_Sender_IsBase(true);
        return vkcolorcombo->sender();
    } else {
        return ((VirtualKColorCombo*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KColorCombo_OnSender(const KColorCombo* self, intptr_t slot) {
    auto* vkcolorcombo = const_cast<VirtualKColorCombo*>(dynamic_cast<const VirtualKColorCombo*>(self));
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->setKColorCombo_Sender_Callback(reinterpret_cast<VirtualKColorCombo::KColorCombo_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KColorCombo_SenderSignalIndex(const KColorCombo* self) {
    auto* vkcolorcombo = const_cast<VirtualKColorCombo*>(dynamic_cast<const VirtualKColorCombo*>(self));
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        return vkcolorcombo->senderSignalIndex();
    } else {
        return ((VirtualKColorCombo*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KColorCombo_QBaseSenderSignalIndex(const KColorCombo* self) {
    auto* vkcolorcombo = const_cast<VirtualKColorCombo*>(dynamic_cast<const VirtualKColorCombo*>(self));
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->setKColorCombo_SenderSignalIndex_IsBase(true);
        return vkcolorcombo->senderSignalIndex();
    } else {
        return ((VirtualKColorCombo*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KColorCombo_OnSenderSignalIndex(const KColorCombo* self, intptr_t slot) {
    auto* vkcolorcombo = const_cast<VirtualKColorCombo*>(dynamic_cast<const VirtualKColorCombo*>(self));
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->setKColorCombo_SenderSignalIndex_Callback(reinterpret_cast<VirtualKColorCombo::KColorCombo_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KColorCombo_Receivers(const KColorCombo* self, const char* signal) {
    auto* vkcolorcombo = const_cast<VirtualKColorCombo*>(dynamic_cast<const VirtualKColorCombo*>(self));
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        return vkcolorcombo->receivers(signal);
    } else {
        return ((VirtualKColorCombo*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KColorCombo_QBaseReceivers(const KColorCombo* self, const char* signal) {
    auto* vkcolorcombo = const_cast<VirtualKColorCombo*>(dynamic_cast<const VirtualKColorCombo*>(self));
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->setKColorCombo_Receivers_IsBase(true);
        return vkcolorcombo->receivers(signal);
    } else {
        return ((VirtualKColorCombo*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KColorCombo_OnReceivers(const KColorCombo* self, intptr_t slot) {
    auto* vkcolorcombo = const_cast<VirtualKColorCombo*>(dynamic_cast<const VirtualKColorCombo*>(self));
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->setKColorCombo_Receivers_Callback(reinterpret_cast<VirtualKColorCombo::KColorCombo_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KColorCombo_IsSignalConnected(const KColorCombo* self, const QMetaMethod* signal) {
    auto* vkcolorcombo = const_cast<VirtualKColorCombo*>(dynamic_cast<const VirtualKColorCombo*>(self));
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        return vkcolorcombo->isSignalConnected(*signal);
    } else {
        return ((VirtualKColorCombo*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KColorCombo_QBaseIsSignalConnected(const KColorCombo* self, const QMetaMethod* signal) {
    auto* vkcolorcombo = const_cast<VirtualKColorCombo*>(dynamic_cast<const VirtualKColorCombo*>(self));
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->setKColorCombo_IsSignalConnected_IsBase(true);
        return vkcolorcombo->isSignalConnected(*signal);
    } else {
        return ((VirtualKColorCombo*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KColorCombo_OnIsSignalConnected(const KColorCombo* self, intptr_t slot) {
    auto* vkcolorcombo = const_cast<VirtualKColorCombo*>(dynamic_cast<const VirtualKColorCombo*>(self));
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->setKColorCombo_IsSignalConnected_Callback(reinterpret_cast<VirtualKColorCombo::KColorCombo_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double KColorCombo_GetDecodedMetricF(const KColorCombo* self, int metricA, int metricB) {
    auto* vkcolorcombo = const_cast<VirtualKColorCombo*>(dynamic_cast<const VirtualKColorCombo*>(self));
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        return vkcolorcombo->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKColorCombo*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double KColorCombo_QBaseGetDecodedMetricF(const KColorCombo* self, int metricA, int metricB) {
    auto* vkcolorcombo = const_cast<VirtualKColorCombo*>(dynamic_cast<const VirtualKColorCombo*>(self));
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->setKColorCombo_GetDecodedMetricF_IsBase(true);
        return vkcolorcombo->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKColorCombo*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void KColorCombo_OnGetDecodedMetricF(const KColorCombo* self, intptr_t slot) {
    auto* vkcolorcombo = const_cast<VirtualKColorCombo*>(dynamic_cast<const VirtualKColorCombo*>(self));
    if (vkcolorcombo && vkcolorcombo->isVirtualKColorCombo) {
        vkcolorcombo->setKColorCombo_GetDecodedMetricF_Callback(reinterpret_cast<VirtualKColorCombo::KColorCombo_GetDecodedMetricF_Callback>(slot));
    }
}

void KColorCombo_Delete(KColorCombo* self) {
    delete self;
}
