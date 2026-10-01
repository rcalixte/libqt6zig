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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KColorCombo_Tr(const char* s) {
    auto _ret = KColorCombo::tr(s);
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
    QColor** _arr = static_cast<QColor**>(malloc(sizeof(QColor*) * (_ret.size())));
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
    KColorCombo::connect(self,
                         static_cast<void (KColorCombo::*)(const QColor&)>(&KColorCombo::activated),
                         [self, slotFunc](const QColor& col) {
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
    KColorCombo::connect(self,
                         static_cast<void (KColorCombo::*)(const QColor&)>(&KColorCombo::highlighted),
                         [self, slotFunc](const QColor& col) {
                             const QColor& col_ret = col;
                             // Cast returned reference into pointer
                             QColor* sigval1 = const_cast<QColor*>(&col_ret);
                             slotFunc(self, sigval1);
                         });
}

void KColorCombo_PaintEvent(KColorCombo* self, QPaintEvent* event) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo) {
        vkcolorcombo->paintEvent(event);
    }
}

libqt_string KColorCombo_Tr2(const char* s, const char* c) {
    auto _ret = KColorCombo::tr(s, c);
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
    auto _ret = KColorCombo::tr(s, c, static_cast<int>(n));
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
QMetaObject* KColorCombo_SuperMetaObject(const KColorCombo* self) {
    return (QMetaObject*)self->KColorCombo::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KColorCombo_OnMetaObject(KColorCombo* self, intptr_t slot) {
    if (auto* vkcolorcombo = const_cast<VirtualKColorCombo*>(dynamic_cast<const VirtualKColorCombo*>(self)))
        vkcolorcombo->kcolorcombo_metaobject_callback = reinterpret_cast<VirtualKColorCombo::KColorCombo_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KColorCombo_SuperMetacast(KColorCombo* self, const char* param1) {
    return self->KColorCombo::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KColorCombo_OnMetacast(KColorCombo* self, intptr_t slot) {
    if (auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self))
        vkcolorcombo->kcolorcombo_metacast_callback = reinterpret_cast<VirtualKColorCombo::KColorCombo_Metacast_Callback>(slot);
}

// Base class handler implementation
int KColorCombo_SuperMetacall(KColorCombo* self, int param1, int param2, void** param3) {
    return self->KColorCombo::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KColorCombo_OnMetacall(KColorCombo* self, intptr_t slot) {
    if (auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self))
        vkcolorcombo->kcolorcombo_metacall_callback = reinterpret_cast<VirtualKColorCombo::KColorCombo_Metacall_Callback>(slot);
}

// Base class handler implementation
void KColorCombo_SuperPaintEvent(KColorCombo* self, QPaintEvent* event) {
    if (auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self)) {
        vkcolorcombo->KColorCombo::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method KColorCombo::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KColorCombo_OnPaintEvent(KColorCombo* self, intptr_t slot) {
    if (auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self))
        vkcolorcombo->kcolorcombo_paintevent_callback = reinterpret_cast<VirtualKColorCombo::KColorCombo_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void KColorCombo_SetModel(KColorCombo* self, QAbstractItemModel* model) {
    self->setModel(model);
}

// Base class handler implementation
void KColorCombo_SuperSetModel(KColorCombo* self, QAbstractItemModel* model) {
    self->KColorCombo::setModel(model);
}

// Auxiliary method to allow providing re-implementation
void KColorCombo_OnSetModel(KColorCombo* self, intptr_t slot) {
    if (auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self))
        vkcolorcombo->kcolorcombo_setmodel_callback = reinterpret_cast<VirtualKColorCombo::KColorCombo_SetModel_Callback>(slot);
}

// Derived class handler implementation
QSize* KColorCombo_SizeHint(const KColorCombo* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* KColorCombo_SuperSizeHint(const KColorCombo* self) {
    return new QSize(self->KColorCombo::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void KColorCombo_OnSizeHint(KColorCombo* self, intptr_t slot) {
    if (auto* vkcolorcombo = const_cast<VirtualKColorCombo*>(dynamic_cast<const VirtualKColorCombo*>(self)))
        vkcolorcombo->kcolorcombo_sizehint_callback = reinterpret_cast<VirtualKColorCombo::KColorCombo_SizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* KColorCombo_MinimumSizeHint(const KColorCombo* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* KColorCombo_SuperMinimumSizeHint(const KColorCombo* self) {
    return new QSize(self->KColorCombo::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void KColorCombo_OnMinimumSizeHint(KColorCombo* self, intptr_t slot) {
    if (auto* vkcolorcombo = const_cast<VirtualKColorCombo*>(dynamic_cast<const VirtualKColorCombo*>(self)))
        vkcolorcombo->kcolorcombo_minimumsizehint_callback = reinterpret_cast<VirtualKColorCombo::KColorCombo_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
void KColorCombo_ShowPopup(KColorCombo* self) {
    self->showPopup();
}

// Base class handler implementation
void KColorCombo_SuperShowPopup(KColorCombo* self) {
    self->KColorCombo::showPopup();
}

// Auxiliary method to allow providing re-implementation
void KColorCombo_OnShowPopup(KColorCombo* self, intptr_t slot) {
    if (auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self))
        vkcolorcombo->kcolorcombo_showpopup_callback = reinterpret_cast<VirtualKColorCombo::KColorCombo_ShowPopup_Callback>(slot);
}

// Derived class handler implementation
void KColorCombo_HidePopup(KColorCombo* self) {
    self->hidePopup();
}

// Base class handler implementation
void KColorCombo_SuperHidePopup(KColorCombo* self) {
    self->KColorCombo::hidePopup();
}

// Auxiliary method to allow providing re-implementation
void KColorCombo_OnHidePopup(KColorCombo* self, intptr_t slot) {
    if (auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self))
        vkcolorcombo->kcolorcombo_hidepopup_callback = reinterpret_cast<VirtualKColorCombo::KColorCombo_HidePopup_Callback>(slot);
}

// Derived class handler implementation
bool KColorCombo_Event(KColorCombo* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool KColorCombo_SuperEvent(KColorCombo* self, QEvent* event) {
    return self->KColorCombo::event(event);
}

// Auxiliary method to allow providing re-implementation
void KColorCombo_OnEvent(KColorCombo* self, intptr_t slot) {
    if (auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self))
        vkcolorcombo->kcolorcombo_event_callback = reinterpret_cast<VirtualKColorCombo::KColorCombo_Event_Callback>(slot);
}

// Derived class handler implementation
QVariant* KColorCombo_InputMethodQuery(const KColorCombo* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* KColorCombo_SuperInputMethodQuery(const KColorCombo* self, int param1) {
    return new QVariant(self->KColorCombo::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void KColorCombo_OnInputMethodQuery(KColorCombo* self, intptr_t slot) {
    if (auto* vkcolorcombo = const_cast<VirtualKColorCombo*>(dynamic_cast<const VirtualKColorCombo*>(self)))
        vkcolorcombo->kcolorcombo_inputmethodquery_callback = reinterpret_cast<VirtualKColorCombo::KColorCombo_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
void KColorCombo_FocusInEvent(KColorCombo* self, QFocusEvent* e) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo) {
        vkcolorcombo->focusInEvent(e);
    } else {
        qFatal("Error: Protected virtual method KColorCombo::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KColorCombo_SuperFocusInEvent(KColorCombo* self, QFocusEvent* e) {
    if (auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self)) {
        vkcolorcombo->KColorCombo::focusInEvent(e);
    } else
        qFatal("Error: Protected virtual method KColorCombo::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KColorCombo_OnFocusInEvent(KColorCombo* self, intptr_t slot) {
    if (auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self))
        vkcolorcombo->kcolorcombo_focusinevent_callback = reinterpret_cast<VirtualKColorCombo::KColorCombo_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void KColorCombo_FocusOutEvent(KColorCombo* self, QFocusEvent* e) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo) {
        vkcolorcombo->focusOutEvent(e);
    } else {
        qFatal("Error: Protected virtual method KColorCombo::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KColorCombo_SuperFocusOutEvent(KColorCombo* self, QFocusEvent* e) {
    if (auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self)) {
        vkcolorcombo->KColorCombo::focusOutEvent(e);
    } else
        qFatal("Error: Protected virtual method KColorCombo::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KColorCombo_OnFocusOutEvent(KColorCombo* self, intptr_t slot) {
    if (auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self))
        vkcolorcombo->kcolorcombo_focusoutevent_callback = reinterpret_cast<VirtualKColorCombo::KColorCombo_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void KColorCombo_ChangeEvent(KColorCombo* self, QEvent* e) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo) {
        vkcolorcombo->changeEvent(e);
    } else {
        qFatal("Error: Protected virtual method KColorCombo::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KColorCombo_SuperChangeEvent(KColorCombo* self, QEvent* e) {
    if (auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self)) {
        vkcolorcombo->KColorCombo::changeEvent(e);
    } else
        qFatal("Error: Protected virtual method KColorCombo::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KColorCombo_OnChangeEvent(KColorCombo* self, intptr_t slot) {
    if (auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self))
        vkcolorcombo->kcolorcombo_changeevent_callback = reinterpret_cast<VirtualKColorCombo::KColorCombo_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
void KColorCombo_ResizeEvent(KColorCombo* self, QResizeEvent* e) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo) {
        vkcolorcombo->resizeEvent(e);
    } else {
        qFatal("Error: Protected virtual method KColorCombo::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KColorCombo_SuperResizeEvent(KColorCombo* self, QResizeEvent* e) {
    if (auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self)) {
        vkcolorcombo->KColorCombo::resizeEvent(e);
    } else
        qFatal("Error: Protected virtual method KColorCombo::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KColorCombo_OnResizeEvent(KColorCombo* self, intptr_t slot) {
    if (auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self))
        vkcolorcombo->kcolorcombo_resizeevent_callback = reinterpret_cast<VirtualKColorCombo::KColorCombo_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void KColorCombo_ShowEvent(KColorCombo* self, QShowEvent* e) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo) {
        vkcolorcombo->showEvent(e);
    } else {
        qFatal("Error: Protected virtual method KColorCombo::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KColorCombo_SuperShowEvent(KColorCombo* self, QShowEvent* e) {
    if (auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self)) {
        vkcolorcombo->KColorCombo::showEvent(e);
    } else
        qFatal("Error: Protected virtual method KColorCombo::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KColorCombo_OnShowEvent(KColorCombo* self, intptr_t slot) {
    if (auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self))
        vkcolorcombo->kcolorcombo_showevent_callback = reinterpret_cast<VirtualKColorCombo::KColorCombo_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void KColorCombo_HideEvent(KColorCombo* self, QHideEvent* e) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo) {
        vkcolorcombo->hideEvent(e);
    } else {
        qFatal("Error: Protected virtual method KColorCombo::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KColorCombo_SuperHideEvent(KColorCombo* self, QHideEvent* e) {
    if (auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self)) {
        vkcolorcombo->KColorCombo::hideEvent(e);
    } else
        qFatal("Error: Protected virtual method KColorCombo::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KColorCombo_OnHideEvent(KColorCombo* self, intptr_t slot) {
    if (auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self))
        vkcolorcombo->kcolorcombo_hideevent_callback = reinterpret_cast<VirtualKColorCombo::KColorCombo_HideEvent_Callback>(slot);
}

// Derived class handler implementation
void KColorCombo_MousePressEvent(KColorCombo* self, QMouseEvent* e) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo) {
        vkcolorcombo->mousePressEvent(e);
    } else {
        qFatal("Error: Protected virtual method KColorCombo::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KColorCombo_SuperMousePressEvent(KColorCombo* self, QMouseEvent* e) {
    if (auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self)) {
        vkcolorcombo->KColorCombo::mousePressEvent(e);
    } else
        qFatal("Error: Protected virtual method KColorCombo::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KColorCombo_OnMousePressEvent(KColorCombo* self, intptr_t slot) {
    if (auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self))
        vkcolorcombo->kcolorcombo_mousepressevent_callback = reinterpret_cast<VirtualKColorCombo::KColorCombo_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void KColorCombo_MouseReleaseEvent(KColorCombo* self, QMouseEvent* e) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo) {
        vkcolorcombo->mouseReleaseEvent(e);
    } else {
        qFatal("Error: Protected virtual method KColorCombo::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KColorCombo_SuperMouseReleaseEvent(KColorCombo* self, QMouseEvent* e) {
    if (auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self)) {
        vkcolorcombo->KColorCombo::mouseReleaseEvent(e);
    } else
        qFatal("Error: Protected virtual method KColorCombo::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KColorCombo_OnMouseReleaseEvent(KColorCombo* self, intptr_t slot) {
    if (auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self))
        vkcolorcombo->kcolorcombo_mousereleaseevent_callback = reinterpret_cast<VirtualKColorCombo::KColorCombo_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KColorCombo_KeyPressEvent(KColorCombo* self, QKeyEvent* e) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo) {
        vkcolorcombo->keyPressEvent(e);
    } else {
        qFatal("Error: Protected virtual method KColorCombo::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KColorCombo_SuperKeyPressEvent(KColorCombo* self, QKeyEvent* e) {
    if (auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self)) {
        vkcolorcombo->KColorCombo::keyPressEvent(e);
    } else
        qFatal("Error: Protected virtual method KColorCombo::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KColorCombo_OnKeyPressEvent(KColorCombo* self, intptr_t slot) {
    if (auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self))
        vkcolorcombo->kcolorcombo_keypressevent_callback = reinterpret_cast<VirtualKColorCombo::KColorCombo_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void KColorCombo_KeyReleaseEvent(KColorCombo* self, QKeyEvent* e) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo) {
        vkcolorcombo->keyReleaseEvent(e);
    } else {
        qFatal("Error: Protected virtual method KColorCombo::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KColorCombo_SuperKeyReleaseEvent(KColorCombo* self, QKeyEvent* e) {
    if (auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self)) {
        vkcolorcombo->KColorCombo::keyReleaseEvent(e);
    } else
        qFatal("Error: Protected virtual method KColorCombo::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KColorCombo_OnKeyReleaseEvent(KColorCombo* self, intptr_t slot) {
    if (auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self))
        vkcolorcombo->kcolorcombo_keyreleaseevent_callback = reinterpret_cast<VirtualKColorCombo::KColorCombo_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KColorCombo_WheelEvent(KColorCombo* self, QWheelEvent* e) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo) {
        vkcolorcombo->wheelEvent(e);
    } else {
        qFatal("Error: Protected virtual method KColorCombo::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KColorCombo_SuperWheelEvent(KColorCombo* self, QWheelEvent* e) {
    if (auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self)) {
        vkcolorcombo->KColorCombo::wheelEvent(e);
    } else
        qFatal("Error: Protected virtual method KColorCombo::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KColorCombo_OnWheelEvent(KColorCombo* self, intptr_t slot) {
    if (auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self))
        vkcolorcombo->kcolorcombo_wheelevent_callback = reinterpret_cast<VirtualKColorCombo::KColorCombo_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void KColorCombo_ContextMenuEvent(KColorCombo* self, QContextMenuEvent* e) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo) {
        vkcolorcombo->contextMenuEvent(e);
    } else {
        qFatal("Error: Protected virtual method KColorCombo::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KColorCombo_SuperContextMenuEvent(KColorCombo* self, QContextMenuEvent* e) {
    if (auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self)) {
        vkcolorcombo->KColorCombo::contextMenuEvent(e);
    } else
        qFatal("Error: Protected virtual method KColorCombo::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KColorCombo_OnContextMenuEvent(KColorCombo* self, intptr_t slot) {
    if (auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self))
        vkcolorcombo->kcolorcombo_contextmenuevent_callback = reinterpret_cast<VirtualKColorCombo::KColorCombo_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void KColorCombo_InputMethodEvent(KColorCombo* self, QInputMethodEvent* param1) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo) {
        vkcolorcombo->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KColorCombo::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KColorCombo_SuperInputMethodEvent(KColorCombo* self, QInputMethodEvent* param1) {
    if (auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self)) {
        vkcolorcombo->KColorCombo::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method KColorCombo::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KColorCombo_OnInputMethodEvent(KColorCombo* self, intptr_t slot) {
    if (auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self))
        vkcolorcombo->kcolorcombo_inputmethodevent_callback = reinterpret_cast<VirtualKColorCombo::KColorCombo_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
void KColorCombo_InitStyleOption(const KColorCombo* self, QStyleOptionComboBox* option) {
    auto* vkcolorcombo = const_cast<VirtualKColorCombo*>(dynamic_cast<const VirtualKColorCombo*>(self));
    if (vkcolorcombo) {
        vkcolorcombo->initStyleOption(option);
    } else {
        qFatal("Error: Protected virtual method KColorCombo::initStyleOption called without a directly constructed type");
    }
}

// Base class handler implementation
void KColorCombo_SuperInitStyleOption(const KColorCombo* self, QStyleOptionComboBox* option) {
    if (auto* vkcolorcombo = const_cast<VirtualKColorCombo*>(dynamic_cast<const VirtualKColorCombo*>(self))) {
        vkcolorcombo->KColorCombo::initStyleOption(option);
    } else
        qFatal("Error: Protected virtual method KColorCombo::initStyleOption called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KColorCombo_OnInitStyleOption(KColorCombo* self, intptr_t slot) {
    if (auto* vkcolorcombo = const_cast<VirtualKColorCombo*>(dynamic_cast<const VirtualKColorCombo*>(self)))
        vkcolorcombo->kcolorcombo_initstyleoption_callback = reinterpret_cast<VirtualKColorCombo::KColorCombo_InitStyleOption_Callback>(slot);
}

// Derived class handler implementation
int KColorCombo_DevType(const KColorCombo* self) {
    return self->devType();
}

// Base class handler implementation
int KColorCombo_SuperDevType(const KColorCombo* self) {
    return self->KColorCombo::devType();
}

// Auxiliary method to allow providing re-implementation
void KColorCombo_OnDevType(KColorCombo* self, intptr_t slot) {
    if (auto* vkcolorcombo = const_cast<VirtualKColorCombo*>(dynamic_cast<const VirtualKColorCombo*>(self)))
        vkcolorcombo->kcolorcombo_devtype_callback = reinterpret_cast<VirtualKColorCombo::KColorCombo_DevType_Callback>(slot);
}

// Derived class handler implementation
void KColorCombo_SetVisible(KColorCombo* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void KColorCombo_SuperSetVisible(KColorCombo* self, bool visible) {
    self->KColorCombo::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void KColorCombo_OnSetVisible(KColorCombo* self, intptr_t slot) {
    if (auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self))
        vkcolorcombo->kcolorcombo_setvisible_callback = reinterpret_cast<VirtualKColorCombo::KColorCombo_SetVisible_Callback>(slot);
}

// Derived class handler implementation
int KColorCombo_HeightForWidth(const KColorCombo* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int KColorCombo_SuperHeightForWidth(const KColorCombo* self, int param1) {
    return self->KColorCombo::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void KColorCombo_OnHeightForWidth(KColorCombo* self, intptr_t slot) {
    if (auto* vkcolorcombo = const_cast<VirtualKColorCombo*>(dynamic_cast<const VirtualKColorCombo*>(self)))
        vkcolorcombo->kcolorcombo_heightforwidth_callback = reinterpret_cast<VirtualKColorCombo::KColorCombo_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool KColorCombo_HasHeightForWidth(const KColorCombo* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool KColorCombo_SuperHasHeightForWidth(const KColorCombo* self) {
    return self->KColorCombo::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void KColorCombo_OnHasHeightForWidth(KColorCombo* self, intptr_t slot) {
    if (auto* vkcolorcombo = const_cast<VirtualKColorCombo*>(dynamic_cast<const VirtualKColorCombo*>(self)))
        vkcolorcombo->kcolorcombo_hasheightforwidth_callback = reinterpret_cast<VirtualKColorCombo::KColorCombo_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* KColorCombo_PaintEngine(const KColorCombo* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* KColorCombo_SuperPaintEngine(const KColorCombo* self) {
    return self->KColorCombo::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void KColorCombo_OnPaintEngine(KColorCombo* self, intptr_t slot) {
    if (auto* vkcolorcombo = const_cast<VirtualKColorCombo*>(dynamic_cast<const VirtualKColorCombo*>(self)))
        vkcolorcombo->kcolorcombo_paintengine_callback = reinterpret_cast<VirtualKColorCombo::KColorCombo_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
void KColorCombo_MouseDoubleClickEvent(KColorCombo* self, QMouseEvent* event) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo) {
        vkcolorcombo->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method KColorCombo::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KColorCombo_SuperMouseDoubleClickEvent(KColorCombo* self, QMouseEvent* event) {
    if (auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self)) {
        vkcolorcombo->KColorCombo::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method KColorCombo::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KColorCombo_OnMouseDoubleClickEvent(KColorCombo* self, intptr_t slot) {
    if (auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self))
        vkcolorcombo->kcolorcombo_mousedoubleclickevent_callback = reinterpret_cast<VirtualKColorCombo::KColorCombo_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void KColorCombo_MouseMoveEvent(KColorCombo* self, QMouseEvent* event) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo) {
        vkcolorcombo->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KColorCombo::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KColorCombo_SuperMouseMoveEvent(KColorCombo* self, QMouseEvent* event) {
    if (auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self)) {
        vkcolorcombo->KColorCombo::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KColorCombo::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KColorCombo_OnMouseMoveEvent(KColorCombo* self, intptr_t slot) {
    if (auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self))
        vkcolorcombo->kcolorcombo_mousemoveevent_callback = reinterpret_cast<VirtualKColorCombo::KColorCombo_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KColorCombo_EnterEvent(KColorCombo* self, QEnterEvent* event) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo) {
        vkcolorcombo->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KColorCombo::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KColorCombo_SuperEnterEvent(KColorCombo* self, QEnterEvent* event) {
    if (auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self)) {
        vkcolorcombo->KColorCombo::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method KColorCombo::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KColorCombo_OnEnterEvent(KColorCombo* self, intptr_t slot) {
    if (auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self))
        vkcolorcombo->kcolorcombo_enterevent_callback = reinterpret_cast<VirtualKColorCombo::KColorCombo_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KColorCombo_LeaveEvent(KColorCombo* self, QEvent* event) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo) {
        vkcolorcombo->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KColorCombo::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KColorCombo_SuperLeaveEvent(KColorCombo* self, QEvent* event) {
    if (auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self)) {
        vkcolorcombo->KColorCombo::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KColorCombo::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KColorCombo_OnLeaveEvent(KColorCombo* self, intptr_t slot) {
    if (auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self))
        vkcolorcombo->kcolorcombo_leaveevent_callback = reinterpret_cast<VirtualKColorCombo::KColorCombo_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KColorCombo_MoveEvent(KColorCombo* self, QMoveEvent* event) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo) {
        vkcolorcombo->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KColorCombo::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KColorCombo_SuperMoveEvent(KColorCombo* self, QMoveEvent* event) {
    if (auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self)) {
        vkcolorcombo->KColorCombo::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method KColorCombo::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KColorCombo_OnMoveEvent(KColorCombo* self, intptr_t slot) {
    if (auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self))
        vkcolorcombo->kcolorcombo_moveevent_callback = reinterpret_cast<VirtualKColorCombo::KColorCombo_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KColorCombo_CloseEvent(KColorCombo* self, QCloseEvent* event) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo) {
        vkcolorcombo->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method KColorCombo::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KColorCombo_SuperCloseEvent(KColorCombo* self, QCloseEvent* event) {
    if (auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self)) {
        vkcolorcombo->KColorCombo::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method KColorCombo::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KColorCombo_OnCloseEvent(KColorCombo* self, intptr_t slot) {
    if (auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self))
        vkcolorcombo->kcolorcombo_closeevent_callback = reinterpret_cast<VirtualKColorCombo::KColorCombo_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void KColorCombo_TabletEvent(KColorCombo* self, QTabletEvent* event) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo) {
        vkcolorcombo->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method KColorCombo::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KColorCombo_SuperTabletEvent(KColorCombo* self, QTabletEvent* event) {
    if (auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self)) {
        vkcolorcombo->KColorCombo::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method KColorCombo::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KColorCombo_OnTabletEvent(KColorCombo* self, intptr_t slot) {
    if (auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self))
        vkcolorcombo->kcolorcombo_tabletevent_callback = reinterpret_cast<VirtualKColorCombo::KColorCombo_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void KColorCombo_ActionEvent(KColorCombo* self, QActionEvent* event) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo) {
        vkcolorcombo->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method KColorCombo::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KColorCombo_SuperActionEvent(KColorCombo* self, QActionEvent* event) {
    if (auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self)) {
        vkcolorcombo->KColorCombo::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method KColorCombo::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KColorCombo_OnActionEvent(KColorCombo* self, intptr_t slot) {
    if (auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self))
        vkcolorcombo->kcolorcombo_actionevent_callback = reinterpret_cast<VirtualKColorCombo::KColorCombo_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void KColorCombo_DragEnterEvent(KColorCombo* self, QDragEnterEvent* event) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo) {
        vkcolorcombo->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KColorCombo::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KColorCombo_SuperDragEnterEvent(KColorCombo* self, QDragEnterEvent* event) {
    if (auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self)) {
        vkcolorcombo->KColorCombo::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method KColorCombo::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KColorCombo_OnDragEnterEvent(KColorCombo* self, intptr_t slot) {
    if (auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self))
        vkcolorcombo->kcolorcombo_dragenterevent_callback = reinterpret_cast<VirtualKColorCombo::KColorCombo_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KColorCombo_DragMoveEvent(KColorCombo* self, QDragMoveEvent* event) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo) {
        vkcolorcombo->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KColorCombo::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KColorCombo_SuperDragMoveEvent(KColorCombo* self, QDragMoveEvent* event) {
    if (auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self)) {
        vkcolorcombo->KColorCombo::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KColorCombo::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KColorCombo_OnDragMoveEvent(KColorCombo* self, intptr_t slot) {
    if (auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self))
        vkcolorcombo->kcolorcombo_dragmoveevent_callback = reinterpret_cast<VirtualKColorCombo::KColorCombo_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KColorCombo_DragLeaveEvent(KColorCombo* self, QDragLeaveEvent* event) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo) {
        vkcolorcombo->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KColorCombo::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KColorCombo_SuperDragLeaveEvent(KColorCombo* self, QDragLeaveEvent* event) {
    if (auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self)) {
        vkcolorcombo->KColorCombo::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KColorCombo::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KColorCombo_OnDragLeaveEvent(KColorCombo* self, intptr_t slot) {
    if (auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self))
        vkcolorcombo->kcolorcombo_dragleaveevent_callback = reinterpret_cast<VirtualKColorCombo::KColorCombo_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KColorCombo_DropEvent(KColorCombo* self, QDropEvent* event) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo) {
        vkcolorcombo->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method KColorCombo::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KColorCombo_SuperDropEvent(KColorCombo* self, QDropEvent* event) {
    if (auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self)) {
        vkcolorcombo->KColorCombo::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method KColorCombo::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KColorCombo_OnDropEvent(KColorCombo* self, intptr_t slot) {
    if (auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self))
        vkcolorcombo->kcolorcombo_dropevent_callback = reinterpret_cast<VirtualKColorCombo::KColorCombo_DropEvent_Callback>(slot);
}

// Derived class handler implementation
bool KColorCombo_NativeEvent(KColorCombo* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo) {
        return vkcolorcombo->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method KColorCombo::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool KColorCombo_SuperNativeEvent(KColorCombo* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self)) {
        return vkcolorcombo->KColorCombo::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method KColorCombo::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KColorCombo_OnNativeEvent(KColorCombo* self, intptr_t slot) {
    if (auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self))
        vkcolorcombo->kcolorcombo_nativeevent_callback = reinterpret_cast<VirtualKColorCombo::KColorCombo_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
int KColorCombo_Metric(const KColorCombo* self, int param1) {
    auto* vkcolorcombo = const_cast<VirtualKColorCombo*>(dynamic_cast<const VirtualKColorCombo*>(self));
    if (vkcolorcombo) {
        return vkcolorcombo->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method KColorCombo::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int KColorCombo_SuperMetric(const KColorCombo* self, int param1) {
    if (auto* vkcolorcombo = const_cast<VirtualKColorCombo*>(dynamic_cast<const VirtualKColorCombo*>(self))) {
        return vkcolorcombo->KColorCombo::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method KColorCombo::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KColorCombo_OnMetric(KColorCombo* self, intptr_t slot) {
    if (auto* vkcolorcombo = const_cast<VirtualKColorCombo*>(dynamic_cast<const VirtualKColorCombo*>(self)))
        vkcolorcombo->kcolorcombo_metric_callback = reinterpret_cast<VirtualKColorCombo::KColorCombo_Metric_Callback>(slot);
}

// Derived class handler implementation
void KColorCombo_InitPainter(const KColorCombo* self, QPainter* painter) {
    auto* vkcolorcombo = const_cast<VirtualKColorCombo*>(dynamic_cast<const VirtualKColorCombo*>(self));
    if (vkcolorcombo) {
        vkcolorcombo->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method KColorCombo::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void KColorCombo_SuperInitPainter(const KColorCombo* self, QPainter* painter) {
    if (auto* vkcolorcombo = const_cast<VirtualKColorCombo*>(dynamic_cast<const VirtualKColorCombo*>(self))) {
        vkcolorcombo->KColorCombo::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method KColorCombo::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KColorCombo_OnInitPainter(KColorCombo* self, intptr_t slot) {
    if (auto* vkcolorcombo = const_cast<VirtualKColorCombo*>(dynamic_cast<const VirtualKColorCombo*>(self)))
        vkcolorcombo->kcolorcombo_initpainter_callback = reinterpret_cast<VirtualKColorCombo::KColorCombo_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* KColorCombo_Redirected(const KColorCombo* self, QPoint* offset) {
    auto* vkcolorcombo = const_cast<VirtualKColorCombo*>(dynamic_cast<const VirtualKColorCombo*>(self));
    if (vkcolorcombo) {
        return vkcolorcombo->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method KColorCombo::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* KColorCombo_SuperRedirected(const KColorCombo* self, QPoint* offset) {
    if (auto* vkcolorcombo = const_cast<VirtualKColorCombo*>(dynamic_cast<const VirtualKColorCombo*>(self))) {
        return vkcolorcombo->KColorCombo::redirected(offset);
    } else
        qFatal("Error: Protected virtual method KColorCombo::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KColorCombo_OnRedirected(KColorCombo* self, intptr_t slot) {
    if (auto* vkcolorcombo = const_cast<VirtualKColorCombo*>(dynamic_cast<const VirtualKColorCombo*>(self)))
        vkcolorcombo->kcolorcombo_redirected_callback = reinterpret_cast<VirtualKColorCombo::KColorCombo_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* KColorCombo_SharedPainter(const KColorCombo* self) {
    auto* vkcolorcombo = const_cast<VirtualKColorCombo*>(dynamic_cast<const VirtualKColorCombo*>(self));
    if (vkcolorcombo) {
        return vkcolorcombo->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method KColorCombo::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* KColorCombo_SuperSharedPainter(const KColorCombo* self) {
    if (auto* vkcolorcombo = const_cast<VirtualKColorCombo*>(dynamic_cast<const VirtualKColorCombo*>(self))) {
        return vkcolorcombo->KColorCombo::sharedPainter();
    } else
        qFatal("Error: Protected virtual method KColorCombo::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KColorCombo_OnSharedPainter(KColorCombo* self, intptr_t slot) {
    if (auto* vkcolorcombo = const_cast<VirtualKColorCombo*>(dynamic_cast<const VirtualKColorCombo*>(self)))
        vkcolorcombo->kcolorcombo_sharedpainter_callback = reinterpret_cast<VirtualKColorCombo::KColorCombo_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
bool KColorCombo_FocusNextPrevChild(KColorCombo* self, bool next) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo) {
        return vkcolorcombo->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method KColorCombo::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool KColorCombo_SuperFocusNextPrevChild(KColorCombo* self, bool next) {
    if (auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self)) {
        return vkcolorcombo->KColorCombo::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method KColorCombo::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KColorCombo_OnFocusNextPrevChild(KColorCombo* self, intptr_t slot) {
    if (auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self))
        vkcolorcombo->kcolorcombo_focusnextprevchild_callback = reinterpret_cast<VirtualKColorCombo::KColorCombo_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
bool KColorCombo_EventFilter(KColorCombo* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KColorCombo_SuperEventFilter(KColorCombo* self, QObject* watched, QEvent* event) {
    return self->KColorCombo::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KColorCombo_OnEventFilter(KColorCombo* self, intptr_t slot) {
    if (auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self))
        vkcolorcombo->kcolorcombo_eventfilter_callback = reinterpret_cast<VirtualKColorCombo::KColorCombo_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KColorCombo_TimerEvent(KColorCombo* self, QTimerEvent* event) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo) {
        vkcolorcombo->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KColorCombo::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KColorCombo_SuperTimerEvent(KColorCombo* self, QTimerEvent* event) {
    if (auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self)) {
        vkcolorcombo->KColorCombo::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KColorCombo::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KColorCombo_OnTimerEvent(KColorCombo* self, intptr_t slot) {
    if (auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self))
        vkcolorcombo->kcolorcombo_timerevent_callback = reinterpret_cast<VirtualKColorCombo::KColorCombo_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KColorCombo_ChildEvent(KColorCombo* self, QChildEvent* event) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo) {
        vkcolorcombo->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KColorCombo::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KColorCombo_SuperChildEvent(KColorCombo* self, QChildEvent* event) {
    if (auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self)) {
        vkcolorcombo->KColorCombo::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KColorCombo::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KColorCombo_OnChildEvent(KColorCombo* self, intptr_t slot) {
    if (auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self))
        vkcolorcombo->kcolorcombo_childevent_callback = reinterpret_cast<VirtualKColorCombo::KColorCombo_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KColorCombo_CustomEvent(KColorCombo* self, QEvent* event) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo) {
        vkcolorcombo->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KColorCombo::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KColorCombo_SuperCustomEvent(KColorCombo* self, QEvent* event) {
    if (auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self)) {
        vkcolorcombo->KColorCombo::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KColorCombo::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KColorCombo_OnCustomEvent(KColorCombo* self, intptr_t slot) {
    if (auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self))
        vkcolorcombo->kcolorcombo_customevent_callback = reinterpret_cast<VirtualKColorCombo::KColorCombo_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KColorCombo_ConnectNotify(KColorCombo* self, const QMetaMethod* signal) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo) {
        vkcolorcombo->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KColorCombo::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KColorCombo_SuperConnectNotify(KColorCombo* self, const QMetaMethod* signal) {
    if (auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self)) {
        vkcolorcombo->KColorCombo::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KColorCombo::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KColorCombo_OnConnectNotify(KColorCombo* self, intptr_t slot) {
    if (auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self))
        vkcolorcombo->kcolorcombo_connectnotify_callback = reinterpret_cast<VirtualKColorCombo::KColorCombo_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KColorCombo_DisconnectNotify(KColorCombo* self, const QMetaMethod* signal) {
    auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self);
    if (vkcolorcombo) {
        vkcolorcombo->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KColorCombo::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KColorCombo_SuperDisconnectNotify(KColorCombo* self, const QMetaMethod* signal) {
    if (auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self)) {
        vkcolorcombo->KColorCombo::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KColorCombo::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KColorCombo_OnDisconnectNotify(KColorCombo* self, intptr_t slot) {
    if (auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self))
        vkcolorcombo->kcolorcombo_disconnectnotify_callback = reinterpret_cast<VirtualKColorCombo::KColorCombo_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void KColorCombo_UpdateMicroFocus(KColorCombo* self) {
    if (auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self)) {
        vkcolorcombo->VirtualKColorCombo::updateMicroFocus();
    } else
        qFatal("Error: Protected method KColorCombo::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void KColorCombo_Create(KColorCombo* self) {
    if (auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self)) {
        vkcolorcombo->VirtualKColorCombo::create();
    } else
        qFatal("Error: Protected method KColorCombo::create called without a directly constructed type");
}

// Derived class protected handler implementation
void KColorCombo_Destroy(KColorCombo* self) {
    if (auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self)) {
        vkcolorcombo->VirtualKColorCombo::destroy();
    } else
        qFatal("Error: Protected method KColorCombo::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool KColorCombo_FocusNextChild(KColorCombo* self) {
    if (auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self)) {
        return vkcolorcombo->VirtualKColorCombo::focusNextChild();
    } else
        qFatal("Error: Protected method KColorCombo::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool KColorCombo_FocusPreviousChild(KColorCombo* self) {
    if (auto* vkcolorcombo = dynamic_cast<VirtualKColorCombo*>(self)) {
        return vkcolorcombo->VirtualKColorCombo::focusPreviousChild();
    } else
        qFatal("Error: Protected method KColorCombo::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KColorCombo_Sender(const KColorCombo* self) {
    if (auto* vkcolorcombo = const_cast<VirtualKColorCombo*>(dynamic_cast<const VirtualKColorCombo*>(self))) {
        return vkcolorcombo->VirtualKColorCombo::sender();
    } else
        qFatal("Error: Protected method KColorCombo::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KColorCombo_SenderSignalIndex(const KColorCombo* self) {
    if (auto* vkcolorcombo = const_cast<VirtualKColorCombo*>(dynamic_cast<const VirtualKColorCombo*>(self))) {
        return vkcolorcombo->VirtualKColorCombo::senderSignalIndex();
    } else
        qFatal("Error: Protected method KColorCombo::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KColorCombo_Receivers(const KColorCombo* self, const char* signal) {
    if (auto* vkcolorcombo = const_cast<VirtualKColorCombo*>(dynamic_cast<const VirtualKColorCombo*>(self))) {
        return vkcolorcombo->VirtualKColorCombo::receivers(signal);
    } else
        qFatal("Error: Protected method KColorCombo::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KColorCombo_IsSignalConnected(const KColorCombo* self, const QMetaMethod* signal) {
    if (auto* vkcolorcombo = const_cast<VirtualKColorCombo*>(dynamic_cast<const VirtualKColorCombo*>(self))) {
        return vkcolorcombo->VirtualKColorCombo::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KColorCombo::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double KColorCombo_GetDecodedMetricF(const KColorCombo* self, int metricA, int metricB) {
    if (auto* vkcolorcombo = const_cast<VirtualKColorCombo*>(dynamic_cast<const VirtualKColorCombo*>(self))) {
        return vkcolorcombo->VirtualKColorCombo::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method KColorCombo::getDecodedMetricF called without a directly constructed type");
}

void KColorCombo_Delete(KColorCombo* self) {
    delete self;
}
