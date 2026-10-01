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
#include <QFont>
#include <QFontComboBox>
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
#include <qfontcombobox.h>
#include "libqfontcombobox.h"
#include "libqfontcombobox.hxx"

QFontComboBox* QFontComboBox_new(QWidget* parent) {
    return new VirtualQFontComboBox(parent);
}

QFontComboBox* QFontComboBox_new2() {
    return new VirtualQFontComboBox();
}

QMetaObject* QFontComboBox_MetaObject(const QFontComboBox* self) {
    return (QMetaObject*)self->metaObject();
}

void* QFontComboBox_Metacast(QFontComboBox* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QFontComboBox_Metacall(QFontComboBox* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QFontComboBox_Tr(const char* s) {
    auto _ret = QFontComboBox::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QFontComboBox_SetWritingSystem(QFontComboBox* self, int writingSystem) {
    self->setWritingSystem(static_cast<QFontDatabase::WritingSystem>(writingSystem));
}

int QFontComboBox_WritingSystem(const QFontComboBox* self) {
    return static_cast<int>(self->writingSystem());
}

void QFontComboBox_SetFontFilters(QFontComboBox* self, int filters) {
    self->setFontFilters(static_cast<QFontComboBox::FontFilters>(filters));
}

int QFontComboBox_FontFilters(const QFontComboBox* self) {
    return static_cast<int>(self->fontFilters());
}

QFont* QFontComboBox_CurrentFont(const QFontComboBox* self) {
    return new QFont(self->currentFont());
}

QSize* QFontComboBox_SizeHint(const QFontComboBox* self) {
    return new QSize(self->sizeHint());
}

void QFontComboBox_SetSampleTextForSystem(QFontComboBox* self, int writingSystem, const libqt_string sampleText) {
    QString sampleText_QString = QString::fromUtf8(sampleText.data, sampleText.len);
    self->setSampleTextForSystem(static_cast<QFontDatabase::WritingSystem>(writingSystem), sampleText_QString);
}

libqt_string QFontComboBox_SampleTextForSystem(const QFontComboBox* self, int writingSystem) {
    auto _ret = self->sampleTextForSystem(static_cast<QFontDatabase::WritingSystem>(writingSystem));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QFontComboBox_SetSampleTextForFont(QFontComboBox* self, const libqt_string fontFamily, const libqt_string sampleText) {
    QString fontFamily_QString = QString::fromUtf8(fontFamily.data, fontFamily.len);
    QString sampleText_QString = QString::fromUtf8(sampleText.data, sampleText.len);
    self->setSampleTextForFont(fontFamily_QString, sampleText_QString);
}

libqt_string QFontComboBox_SampleTextForFont(const QFontComboBox* self, const libqt_string fontFamily) {
    QString fontFamily_QString = QString::fromUtf8(fontFamily.data, fontFamily.len);
    auto _ret = self->sampleTextForFont(fontFamily_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QFontComboBox_SetDisplayFont(QFontComboBox* self, const libqt_string fontFamily, const QFont* font) {
    QString fontFamily_QString = QString::fromUtf8(fontFamily.data, fontFamily.len);
    self->setDisplayFont(fontFamily_QString, *font);
}

QFont* QFontComboBox_DisplayFont(const QFontComboBox* self, const libqt_string fontFamily) {
    QString fontFamily_QString = QString::fromUtf8(fontFamily.data, fontFamily.len);
    auto _ret = self->displayFont(fontFamily_QString);
    return _ret ? new QFont(*_ret) : nullptr;
}

void QFontComboBox_SetCurrentFont(QFontComboBox* self, const QFont* f) {
    self->setCurrentFont(*f);
}

void QFontComboBox_CurrentFontChanged(QFontComboBox* self, const QFont* f) {
    self->currentFontChanged(*f);
}

void QFontComboBox_Connect_CurrentFontChanged(QFontComboBox* self, intptr_t slot) {
    void (*slotFunc)(QFontComboBox*, QFont*) = reinterpret_cast<void (*)(QFontComboBox*, QFont*)>(slot);
    QFontComboBox::connect(self,
                           static_cast<void (QFontComboBox::*)(const QFont&)>(&QFontComboBox::currentFontChanged),
                           [self, slotFunc](const QFont& f) {
                               const QFont& f_ret = f;
                               // Cast returned reference into pointer
                               QFont* sigval1 = const_cast<QFont*>(&f_ret);
                               slotFunc(self, sigval1);
                           });
}

bool QFontComboBox_Event(QFontComboBox* self, QEvent* e) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox) {
        return vqfontcombobox->event(e);
    }
    qFatal("Error: Protected method QFontComboBox::event called without a directly constructed type");
}

libqt_string QFontComboBox_Tr2(const char* s, const char* c) {
    auto _ret = QFontComboBox::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QFontComboBox_Tr3(const char* s, const char* c, int n) {
    auto _ret = QFontComboBox::tr(s, c, static_cast<int>(n));
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
QMetaObject* QFontComboBox_SuperMetaObject(const QFontComboBox* self) {
    return (QMetaObject*)self->QFontComboBox::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnMetaObject(QFontComboBox* self, intptr_t slot) {
    if (auto* vqfontcombobox = const_cast<VirtualQFontComboBox*>(dynamic_cast<const VirtualQFontComboBox*>(self)))
        vqfontcombobox->qfontcombobox_metaobject_callback = reinterpret_cast<VirtualQFontComboBox::QFontComboBox_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QFontComboBox_SuperMetacast(QFontComboBox* self, const char* param1) {
    return self->QFontComboBox::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnMetacast(QFontComboBox* self, intptr_t slot) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self))
        vqfontcombobox->qfontcombobox_metacast_callback = reinterpret_cast<VirtualQFontComboBox::QFontComboBox_Metacast_Callback>(slot);
}

// Base class handler implementation
int QFontComboBox_SuperMetacall(QFontComboBox* self, int param1, int param2, void** param3) {
    return self->QFontComboBox::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnMetacall(QFontComboBox* self, intptr_t slot) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self))
        vqfontcombobox->qfontcombobox_metacall_callback = reinterpret_cast<VirtualQFontComboBox::QFontComboBox_Metacall_Callback>(slot);
}

// Base class handler implementation
QSize* QFontComboBox_SuperSizeHint(const QFontComboBox* self) {
    return new QSize(self->QFontComboBox::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnSizeHint(QFontComboBox* self, intptr_t slot) {
    if (auto* vqfontcombobox = const_cast<VirtualQFontComboBox*>(dynamic_cast<const VirtualQFontComboBox*>(self)))
        vqfontcombobox->qfontcombobox_sizehint_callback = reinterpret_cast<VirtualQFontComboBox::QFontComboBox_SizeHint_Callback>(slot);
}

// Base class handler implementation
bool QFontComboBox_SuperEvent(QFontComboBox* self, QEvent* e) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        return vqfontcombobox->QFontComboBox::event(e);
    } else
        qFatal("Error: Protected virtual method QFontComboBox::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnEvent(QFontComboBox* self, intptr_t slot) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self))
        vqfontcombobox->qfontcombobox_event_callback = reinterpret_cast<VirtualQFontComboBox::QFontComboBox_Event_Callback>(slot);
}

// Derived class handler implementation
void QFontComboBox_SetModel(QFontComboBox* self, QAbstractItemModel* model) {
    self->setModel(model);
}

// Base class handler implementation
void QFontComboBox_SuperSetModel(QFontComboBox* self, QAbstractItemModel* model) {
    self->QFontComboBox::setModel(model);
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnSetModel(QFontComboBox* self, intptr_t slot) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self))
        vqfontcombobox->qfontcombobox_setmodel_callback = reinterpret_cast<VirtualQFontComboBox::QFontComboBox_SetModel_Callback>(slot);
}

// Derived class handler implementation
QSize* QFontComboBox_MinimumSizeHint(const QFontComboBox* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* QFontComboBox_SuperMinimumSizeHint(const QFontComboBox* self) {
    return new QSize(self->QFontComboBox::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnMinimumSizeHint(QFontComboBox* self, intptr_t slot) {
    if (auto* vqfontcombobox = const_cast<VirtualQFontComboBox*>(dynamic_cast<const VirtualQFontComboBox*>(self)))
        vqfontcombobox->qfontcombobox_minimumsizehint_callback = reinterpret_cast<VirtualQFontComboBox::QFontComboBox_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
void QFontComboBox_ShowPopup(QFontComboBox* self) {
    self->showPopup();
}

// Base class handler implementation
void QFontComboBox_SuperShowPopup(QFontComboBox* self) {
    self->QFontComboBox::showPopup();
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnShowPopup(QFontComboBox* self, intptr_t slot) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self))
        vqfontcombobox->qfontcombobox_showpopup_callback = reinterpret_cast<VirtualQFontComboBox::QFontComboBox_ShowPopup_Callback>(slot);
}

// Derived class handler implementation
void QFontComboBox_HidePopup(QFontComboBox* self) {
    self->hidePopup();
}

// Base class handler implementation
void QFontComboBox_SuperHidePopup(QFontComboBox* self) {
    self->QFontComboBox::hidePopup();
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnHidePopup(QFontComboBox* self, intptr_t slot) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self))
        vqfontcombobox->qfontcombobox_hidepopup_callback = reinterpret_cast<VirtualQFontComboBox::QFontComboBox_HidePopup_Callback>(slot);
}

// Derived class handler implementation
QVariant* QFontComboBox_InputMethodQuery(const QFontComboBox* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* QFontComboBox_SuperInputMethodQuery(const QFontComboBox* self, int param1) {
    return new QVariant(self->QFontComboBox::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnInputMethodQuery(QFontComboBox* self, intptr_t slot) {
    if (auto* vqfontcombobox = const_cast<VirtualQFontComboBox*>(dynamic_cast<const VirtualQFontComboBox*>(self)))
        vqfontcombobox->qfontcombobox_inputmethodquery_callback = reinterpret_cast<VirtualQFontComboBox::QFontComboBox_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
void QFontComboBox_FocusInEvent(QFontComboBox* self, QFocusEvent* e) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox) {
        vqfontcombobox->focusInEvent(e);
    } else {
        qFatal("Error: Protected virtual method QFontComboBox::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFontComboBox_SuperFocusInEvent(QFontComboBox* self, QFocusEvent* e) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->QFontComboBox::focusInEvent(e);
    } else
        qFatal("Error: Protected virtual method QFontComboBox::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnFocusInEvent(QFontComboBox* self, intptr_t slot) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self))
        vqfontcombobox->qfontcombobox_focusinevent_callback = reinterpret_cast<VirtualQFontComboBox::QFontComboBox_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void QFontComboBox_FocusOutEvent(QFontComboBox* self, QFocusEvent* e) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox) {
        vqfontcombobox->focusOutEvent(e);
    } else {
        qFatal("Error: Protected virtual method QFontComboBox::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFontComboBox_SuperFocusOutEvent(QFontComboBox* self, QFocusEvent* e) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->QFontComboBox::focusOutEvent(e);
    } else
        qFatal("Error: Protected virtual method QFontComboBox::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnFocusOutEvent(QFontComboBox* self, intptr_t slot) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self))
        vqfontcombobox->qfontcombobox_focusoutevent_callback = reinterpret_cast<VirtualQFontComboBox::QFontComboBox_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void QFontComboBox_ChangeEvent(QFontComboBox* self, QEvent* e) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox) {
        vqfontcombobox->changeEvent(e);
    } else {
        qFatal("Error: Protected virtual method QFontComboBox::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFontComboBox_SuperChangeEvent(QFontComboBox* self, QEvent* e) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->QFontComboBox::changeEvent(e);
    } else
        qFatal("Error: Protected virtual method QFontComboBox::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnChangeEvent(QFontComboBox* self, intptr_t slot) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self))
        vqfontcombobox->qfontcombobox_changeevent_callback = reinterpret_cast<VirtualQFontComboBox::QFontComboBox_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
void QFontComboBox_ResizeEvent(QFontComboBox* self, QResizeEvent* e) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox) {
        vqfontcombobox->resizeEvent(e);
    } else {
        qFatal("Error: Protected virtual method QFontComboBox::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFontComboBox_SuperResizeEvent(QFontComboBox* self, QResizeEvent* e) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->QFontComboBox::resizeEvent(e);
    } else
        qFatal("Error: Protected virtual method QFontComboBox::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnResizeEvent(QFontComboBox* self, intptr_t slot) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self))
        vqfontcombobox->qfontcombobox_resizeevent_callback = reinterpret_cast<VirtualQFontComboBox::QFontComboBox_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void QFontComboBox_PaintEvent(QFontComboBox* self, QPaintEvent* e) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox) {
        vqfontcombobox->paintEvent(e);
    } else {
        qFatal("Error: Protected virtual method QFontComboBox::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFontComboBox_SuperPaintEvent(QFontComboBox* self, QPaintEvent* e) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->QFontComboBox::paintEvent(e);
    } else
        qFatal("Error: Protected virtual method QFontComboBox::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnPaintEvent(QFontComboBox* self, intptr_t slot) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self))
        vqfontcombobox->qfontcombobox_paintevent_callback = reinterpret_cast<VirtualQFontComboBox::QFontComboBox_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void QFontComboBox_ShowEvent(QFontComboBox* self, QShowEvent* e) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox) {
        vqfontcombobox->showEvent(e);
    } else {
        qFatal("Error: Protected virtual method QFontComboBox::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFontComboBox_SuperShowEvent(QFontComboBox* self, QShowEvent* e) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->QFontComboBox::showEvent(e);
    } else
        qFatal("Error: Protected virtual method QFontComboBox::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnShowEvent(QFontComboBox* self, intptr_t slot) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self))
        vqfontcombobox->qfontcombobox_showevent_callback = reinterpret_cast<VirtualQFontComboBox::QFontComboBox_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void QFontComboBox_HideEvent(QFontComboBox* self, QHideEvent* e) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox) {
        vqfontcombobox->hideEvent(e);
    } else {
        qFatal("Error: Protected virtual method QFontComboBox::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFontComboBox_SuperHideEvent(QFontComboBox* self, QHideEvent* e) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->QFontComboBox::hideEvent(e);
    } else
        qFatal("Error: Protected virtual method QFontComboBox::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnHideEvent(QFontComboBox* self, intptr_t slot) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self))
        vqfontcombobox->qfontcombobox_hideevent_callback = reinterpret_cast<VirtualQFontComboBox::QFontComboBox_HideEvent_Callback>(slot);
}

// Derived class handler implementation
void QFontComboBox_MousePressEvent(QFontComboBox* self, QMouseEvent* e) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox) {
        vqfontcombobox->mousePressEvent(e);
    } else {
        qFatal("Error: Protected virtual method QFontComboBox::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFontComboBox_SuperMousePressEvent(QFontComboBox* self, QMouseEvent* e) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->QFontComboBox::mousePressEvent(e);
    } else
        qFatal("Error: Protected virtual method QFontComboBox::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnMousePressEvent(QFontComboBox* self, intptr_t slot) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self))
        vqfontcombobox->qfontcombobox_mousepressevent_callback = reinterpret_cast<VirtualQFontComboBox::QFontComboBox_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void QFontComboBox_MouseReleaseEvent(QFontComboBox* self, QMouseEvent* e) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox) {
        vqfontcombobox->mouseReleaseEvent(e);
    } else {
        qFatal("Error: Protected virtual method QFontComboBox::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFontComboBox_SuperMouseReleaseEvent(QFontComboBox* self, QMouseEvent* e) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->QFontComboBox::mouseReleaseEvent(e);
    } else
        qFatal("Error: Protected virtual method QFontComboBox::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnMouseReleaseEvent(QFontComboBox* self, intptr_t slot) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self))
        vqfontcombobox->qfontcombobox_mousereleaseevent_callback = reinterpret_cast<VirtualQFontComboBox::QFontComboBox_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QFontComboBox_KeyPressEvent(QFontComboBox* self, QKeyEvent* e) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox) {
        vqfontcombobox->keyPressEvent(e);
    } else {
        qFatal("Error: Protected virtual method QFontComboBox::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFontComboBox_SuperKeyPressEvent(QFontComboBox* self, QKeyEvent* e) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->QFontComboBox::keyPressEvent(e);
    } else
        qFatal("Error: Protected virtual method QFontComboBox::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnKeyPressEvent(QFontComboBox* self, intptr_t slot) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self))
        vqfontcombobox->qfontcombobox_keypressevent_callback = reinterpret_cast<VirtualQFontComboBox::QFontComboBox_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void QFontComboBox_KeyReleaseEvent(QFontComboBox* self, QKeyEvent* e) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox) {
        vqfontcombobox->keyReleaseEvent(e);
    } else {
        qFatal("Error: Protected virtual method QFontComboBox::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFontComboBox_SuperKeyReleaseEvent(QFontComboBox* self, QKeyEvent* e) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->QFontComboBox::keyReleaseEvent(e);
    } else
        qFatal("Error: Protected virtual method QFontComboBox::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnKeyReleaseEvent(QFontComboBox* self, intptr_t slot) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self))
        vqfontcombobox->qfontcombobox_keyreleaseevent_callback = reinterpret_cast<VirtualQFontComboBox::QFontComboBox_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QFontComboBox_WheelEvent(QFontComboBox* self, QWheelEvent* e) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox) {
        vqfontcombobox->wheelEvent(e);
    } else {
        qFatal("Error: Protected virtual method QFontComboBox::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFontComboBox_SuperWheelEvent(QFontComboBox* self, QWheelEvent* e) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->QFontComboBox::wheelEvent(e);
    } else
        qFatal("Error: Protected virtual method QFontComboBox::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnWheelEvent(QFontComboBox* self, intptr_t slot) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self))
        vqfontcombobox->qfontcombobox_wheelevent_callback = reinterpret_cast<VirtualQFontComboBox::QFontComboBox_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void QFontComboBox_ContextMenuEvent(QFontComboBox* self, QContextMenuEvent* e) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox) {
        vqfontcombobox->contextMenuEvent(e);
    } else {
        qFatal("Error: Protected virtual method QFontComboBox::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFontComboBox_SuperContextMenuEvent(QFontComboBox* self, QContextMenuEvent* e) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->QFontComboBox::contextMenuEvent(e);
    } else
        qFatal("Error: Protected virtual method QFontComboBox::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnContextMenuEvent(QFontComboBox* self, intptr_t slot) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self))
        vqfontcombobox->qfontcombobox_contextmenuevent_callback = reinterpret_cast<VirtualQFontComboBox::QFontComboBox_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void QFontComboBox_InputMethodEvent(QFontComboBox* self, QInputMethodEvent* param1) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox) {
        vqfontcombobox->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QFontComboBox::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFontComboBox_SuperInputMethodEvent(QFontComboBox* self, QInputMethodEvent* param1) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->QFontComboBox::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method QFontComboBox::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnInputMethodEvent(QFontComboBox* self, intptr_t slot) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self))
        vqfontcombobox->qfontcombobox_inputmethodevent_callback = reinterpret_cast<VirtualQFontComboBox::QFontComboBox_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
void QFontComboBox_InitStyleOption(const QFontComboBox* self, QStyleOptionComboBox* option) {
    auto* vqfontcombobox = const_cast<VirtualQFontComboBox*>(dynamic_cast<const VirtualQFontComboBox*>(self));
    if (vqfontcombobox) {
        vqfontcombobox->initStyleOption(option);
    } else {
        qFatal("Error: Protected virtual method QFontComboBox::initStyleOption called without a directly constructed type");
    }
}

// Base class handler implementation
void QFontComboBox_SuperInitStyleOption(const QFontComboBox* self, QStyleOptionComboBox* option) {
    if (auto* vqfontcombobox = const_cast<VirtualQFontComboBox*>(dynamic_cast<const VirtualQFontComboBox*>(self))) {
        vqfontcombobox->QFontComboBox::initStyleOption(option);
    } else
        qFatal("Error: Protected virtual method QFontComboBox::initStyleOption called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnInitStyleOption(QFontComboBox* self, intptr_t slot) {
    if (auto* vqfontcombobox = const_cast<VirtualQFontComboBox*>(dynamic_cast<const VirtualQFontComboBox*>(self)))
        vqfontcombobox->qfontcombobox_initstyleoption_callback = reinterpret_cast<VirtualQFontComboBox::QFontComboBox_InitStyleOption_Callback>(slot);
}

// Derived class handler implementation
int QFontComboBox_DevType(const QFontComboBox* self) {
    return self->devType();
}

// Base class handler implementation
int QFontComboBox_SuperDevType(const QFontComboBox* self) {
    return self->QFontComboBox::devType();
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnDevType(QFontComboBox* self, intptr_t slot) {
    if (auto* vqfontcombobox = const_cast<VirtualQFontComboBox*>(dynamic_cast<const VirtualQFontComboBox*>(self)))
        vqfontcombobox->qfontcombobox_devtype_callback = reinterpret_cast<VirtualQFontComboBox::QFontComboBox_DevType_Callback>(slot);
}

// Derived class handler implementation
void QFontComboBox_SetVisible(QFontComboBox* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void QFontComboBox_SuperSetVisible(QFontComboBox* self, bool visible) {
    self->QFontComboBox::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnSetVisible(QFontComboBox* self, intptr_t slot) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self))
        vqfontcombobox->qfontcombobox_setvisible_callback = reinterpret_cast<VirtualQFontComboBox::QFontComboBox_SetVisible_Callback>(slot);
}

// Derived class handler implementation
int QFontComboBox_HeightForWidth(const QFontComboBox* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int QFontComboBox_SuperHeightForWidth(const QFontComboBox* self, int param1) {
    return self->QFontComboBox::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnHeightForWidth(QFontComboBox* self, intptr_t slot) {
    if (auto* vqfontcombobox = const_cast<VirtualQFontComboBox*>(dynamic_cast<const VirtualQFontComboBox*>(self)))
        vqfontcombobox->qfontcombobox_heightforwidth_callback = reinterpret_cast<VirtualQFontComboBox::QFontComboBox_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool QFontComboBox_HasHeightForWidth(const QFontComboBox* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool QFontComboBox_SuperHasHeightForWidth(const QFontComboBox* self) {
    return self->QFontComboBox::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnHasHeightForWidth(QFontComboBox* self, intptr_t slot) {
    if (auto* vqfontcombobox = const_cast<VirtualQFontComboBox*>(dynamic_cast<const VirtualQFontComboBox*>(self)))
        vqfontcombobox->qfontcombobox_hasheightforwidth_callback = reinterpret_cast<VirtualQFontComboBox::QFontComboBox_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* QFontComboBox_PaintEngine(const QFontComboBox* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* QFontComboBox_SuperPaintEngine(const QFontComboBox* self) {
    return self->QFontComboBox::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnPaintEngine(QFontComboBox* self, intptr_t slot) {
    if (auto* vqfontcombobox = const_cast<VirtualQFontComboBox*>(dynamic_cast<const VirtualQFontComboBox*>(self)))
        vqfontcombobox->qfontcombobox_paintengine_callback = reinterpret_cast<VirtualQFontComboBox::QFontComboBox_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
void QFontComboBox_MouseDoubleClickEvent(QFontComboBox* self, QMouseEvent* event) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox) {
        vqfontcombobox->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method QFontComboBox::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFontComboBox_SuperMouseDoubleClickEvent(QFontComboBox* self, QMouseEvent* event) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->QFontComboBox::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method QFontComboBox::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnMouseDoubleClickEvent(QFontComboBox* self, intptr_t slot) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self))
        vqfontcombobox->qfontcombobox_mousedoubleclickevent_callback = reinterpret_cast<VirtualQFontComboBox::QFontComboBox_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void QFontComboBox_MouseMoveEvent(QFontComboBox* self, QMouseEvent* event) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox) {
        vqfontcombobox->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QFontComboBox::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFontComboBox_SuperMouseMoveEvent(QFontComboBox* self, QMouseEvent* event) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->QFontComboBox::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QFontComboBox::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnMouseMoveEvent(QFontComboBox* self, intptr_t slot) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self))
        vqfontcombobox->qfontcombobox_mousemoveevent_callback = reinterpret_cast<VirtualQFontComboBox::QFontComboBox_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QFontComboBox_EnterEvent(QFontComboBox* self, QEnterEvent* event) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox) {
        vqfontcombobox->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QFontComboBox::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFontComboBox_SuperEnterEvent(QFontComboBox* self, QEnterEvent* event) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->QFontComboBox::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method QFontComboBox::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnEnterEvent(QFontComboBox* self, intptr_t slot) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self))
        vqfontcombobox->qfontcombobox_enterevent_callback = reinterpret_cast<VirtualQFontComboBox::QFontComboBox_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QFontComboBox_LeaveEvent(QFontComboBox* self, QEvent* event) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox) {
        vqfontcombobox->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QFontComboBox::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFontComboBox_SuperLeaveEvent(QFontComboBox* self, QEvent* event) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->QFontComboBox::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QFontComboBox::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnLeaveEvent(QFontComboBox* self, intptr_t slot) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self))
        vqfontcombobox->qfontcombobox_leaveevent_callback = reinterpret_cast<VirtualQFontComboBox::QFontComboBox_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QFontComboBox_MoveEvent(QFontComboBox* self, QMoveEvent* event) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox) {
        vqfontcombobox->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QFontComboBox::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFontComboBox_SuperMoveEvent(QFontComboBox* self, QMoveEvent* event) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->QFontComboBox::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method QFontComboBox::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnMoveEvent(QFontComboBox* self, intptr_t slot) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self))
        vqfontcombobox->qfontcombobox_moveevent_callback = reinterpret_cast<VirtualQFontComboBox::QFontComboBox_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QFontComboBox_CloseEvent(QFontComboBox* self, QCloseEvent* event) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox) {
        vqfontcombobox->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method QFontComboBox::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFontComboBox_SuperCloseEvent(QFontComboBox* self, QCloseEvent* event) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->QFontComboBox::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method QFontComboBox::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnCloseEvent(QFontComboBox* self, intptr_t slot) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self))
        vqfontcombobox->qfontcombobox_closeevent_callback = reinterpret_cast<VirtualQFontComboBox::QFontComboBox_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void QFontComboBox_TabletEvent(QFontComboBox* self, QTabletEvent* event) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox) {
        vqfontcombobox->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method QFontComboBox::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFontComboBox_SuperTabletEvent(QFontComboBox* self, QTabletEvent* event) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->QFontComboBox::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method QFontComboBox::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnTabletEvent(QFontComboBox* self, intptr_t slot) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self))
        vqfontcombobox->qfontcombobox_tabletevent_callback = reinterpret_cast<VirtualQFontComboBox::QFontComboBox_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void QFontComboBox_ActionEvent(QFontComboBox* self, QActionEvent* event) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox) {
        vqfontcombobox->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method QFontComboBox::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFontComboBox_SuperActionEvent(QFontComboBox* self, QActionEvent* event) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->QFontComboBox::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method QFontComboBox::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnActionEvent(QFontComboBox* self, intptr_t slot) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self))
        vqfontcombobox->qfontcombobox_actionevent_callback = reinterpret_cast<VirtualQFontComboBox::QFontComboBox_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void QFontComboBox_DragEnterEvent(QFontComboBox* self, QDragEnterEvent* event) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox) {
        vqfontcombobox->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QFontComboBox::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFontComboBox_SuperDragEnterEvent(QFontComboBox* self, QDragEnterEvent* event) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->QFontComboBox::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method QFontComboBox::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnDragEnterEvent(QFontComboBox* self, intptr_t slot) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self))
        vqfontcombobox->qfontcombobox_dragenterevent_callback = reinterpret_cast<VirtualQFontComboBox::QFontComboBox_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QFontComboBox_DragMoveEvent(QFontComboBox* self, QDragMoveEvent* event) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox) {
        vqfontcombobox->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QFontComboBox::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFontComboBox_SuperDragMoveEvent(QFontComboBox* self, QDragMoveEvent* event) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->QFontComboBox::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QFontComboBox::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnDragMoveEvent(QFontComboBox* self, intptr_t slot) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self))
        vqfontcombobox->qfontcombobox_dragmoveevent_callback = reinterpret_cast<VirtualQFontComboBox::QFontComboBox_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QFontComboBox_DragLeaveEvent(QFontComboBox* self, QDragLeaveEvent* event) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox) {
        vqfontcombobox->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QFontComboBox::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFontComboBox_SuperDragLeaveEvent(QFontComboBox* self, QDragLeaveEvent* event) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->QFontComboBox::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QFontComboBox::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnDragLeaveEvent(QFontComboBox* self, intptr_t slot) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self))
        vqfontcombobox->qfontcombobox_dragleaveevent_callback = reinterpret_cast<VirtualQFontComboBox::QFontComboBox_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QFontComboBox_DropEvent(QFontComboBox* self, QDropEvent* event) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox) {
        vqfontcombobox->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method QFontComboBox::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFontComboBox_SuperDropEvent(QFontComboBox* self, QDropEvent* event) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->QFontComboBox::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method QFontComboBox::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnDropEvent(QFontComboBox* self, intptr_t slot) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self))
        vqfontcombobox->qfontcombobox_dropevent_callback = reinterpret_cast<VirtualQFontComboBox::QFontComboBox_DropEvent_Callback>(slot);
}

// Derived class handler implementation
bool QFontComboBox_NativeEvent(QFontComboBox* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox) {
        return vqfontcombobox->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method QFontComboBox::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool QFontComboBox_SuperNativeEvent(QFontComboBox* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        return vqfontcombobox->QFontComboBox::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method QFontComboBox::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnNativeEvent(QFontComboBox* self, intptr_t slot) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self))
        vqfontcombobox->qfontcombobox_nativeevent_callback = reinterpret_cast<VirtualQFontComboBox::QFontComboBox_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
int QFontComboBox_Metric(const QFontComboBox* self, int param1) {
    auto* vqfontcombobox = const_cast<VirtualQFontComboBox*>(dynamic_cast<const VirtualQFontComboBox*>(self));
    if (vqfontcombobox) {
        return vqfontcombobox->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method QFontComboBox::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int QFontComboBox_SuperMetric(const QFontComboBox* self, int param1) {
    if (auto* vqfontcombobox = const_cast<VirtualQFontComboBox*>(dynamic_cast<const VirtualQFontComboBox*>(self))) {
        return vqfontcombobox->QFontComboBox::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method QFontComboBox::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnMetric(QFontComboBox* self, intptr_t slot) {
    if (auto* vqfontcombobox = const_cast<VirtualQFontComboBox*>(dynamic_cast<const VirtualQFontComboBox*>(self)))
        vqfontcombobox->qfontcombobox_metric_callback = reinterpret_cast<VirtualQFontComboBox::QFontComboBox_Metric_Callback>(slot);
}

// Derived class handler implementation
void QFontComboBox_InitPainter(const QFontComboBox* self, QPainter* painter) {
    auto* vqfontcombobox = const_cast<VirtualQFontComboBox*>(dynamic_cast<const VirtualQFontComboBox*>(self));
    if (vqfontcombobox) {
        vqfontcombobox->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method QFontComboBox::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void QFontComboBox_SuperInitPainter(const QFontComboBox* self, QPainter* painter) {
    if (auto* vqfontcombobox = const_cast<VirtualQFontComboBox*>(dynamic_cast<const VirtualQFontComboBox*>(self))) {
        vqfontcombobox->QFontComboBox::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method QFontComboBox::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnInitPainter(QFontComboBox* self, intptr_t slot) {
    if (auto* vqfontcombobox = const_cast<VirtualQFontComboBox*>(dynamic_cast<const VirtualQFontComboBox*>(self)))
        vqfontcombobox->qfontcombobox_initpainter_callback = reinterpret_cast<VirtualQFontComboBox::QFontComboBox_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* QFontComboBox_Redirected(const QFontComboBox* self, QPoint* offset) {
    auto* vqfontcombobox = const_cast<VirtualQFontComboBox*>(dynamic_cast<const VirtualQFontComboBox*>(self));
    if (vqfontcombobox) {
        return vqfontcombobox->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method QFontComboBox::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* QFontComboBox_SuperRedirected(const QFontComboBox* self, QPoint* offset) {
    if (auto* vqfontcombobox = const_cast<VirtualQFontComboBox*>(dynamic_cast<const VirtualQFontComboBox*>(self))) {
        return vqfontcombobox->QFontComboBox::redirected(offset);
    } else
        qFatal("Error: Protected virtual method QFontComboBox::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnRedirected(QFontComboBox* self, intptr_t slot) {
    if (auto* vqfontcombobox = const_cast<VirtualQFontComboBox*>(dynamic_cast<const VirtualQFontComboBox*>(self)))
        vqfontcombobox->qfontcombobox_redirected_callback = reinterpret_cast<VirtualQFontComboBox::QFontComboBox_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* QFontComboBox_SharedPainter(const QFontComboBox* self) {
    auto* vqfontcombobox = const_cast<VirtualQFontComboBox*>(dynamic_cast<const VirtualQFontComboBox*>(self));
    if (vqfontcombobox) {
        return vqfontcombobox->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method QFontComboBox::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* QFontComboBox_SuperSharedPainter(const QFontComboBox* self) {
    if (auto* vqfontcombobox = const_cast<VirtualQFontComboBox*>(dynamic_cast<const VirtualQFontComboBox*>(self))) {
        return vqfontcombobox->QFontComboBox::sharedPainter();
    } else
        qFatal("Error: Protected virtual method QFontComboBox::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnSharedPainter(QFontComboBox* self, intptr_t slot) {
    if (auto* vqfontcombobox = const_cast<VirtualQFontComboBox*>(dynamic_cast<const VirtualQFontComboBox*>(self)))
        vqfontcombobox->qfontcombobox_sharedpainter_callback = reinterpret_cast<VirtualQFontComboBox::QFontComboBox_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
bool QFontComboBox_FocusNextPrevChild(QFontComboBox* self, bool next) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox) {
        return vqfontcombobox->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method QFontComboBox::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool QFontComboBox_SuperFocusNextPrevChild(QFontComboBox* self, bool next) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        return vqfontcombobox->QFontComboBox::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method QFontComboBox::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnFocusNextPrevChild(QFontComboBox* self, intptr_t slot) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self))
        vqfontcombobox->qfontcombobox_focusnextprevchild_callback = reinterpret_cast<VirtualQFontComboBox::QFontComboBox_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
bool QFontComboBox_EventFilter(QFontComboBox* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QFontComboBox_SuperEventFilter(QFontComboBox* self, QObject* watched, QEvent* event) {
    return self->QFontComboBox::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnEventFilter(QFontComboBox* self, intptr_t slot) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self))
        vqfontcombobox->qfontcombobox_eventfilter_callback = reinterpret_cast<VirtualQFontComboBox::QFontComboBox_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QFontComboBox_TimerEvent(QFontComboBox* self, QTimerEvent* event) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox) {
        vqfontcombobox->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QFontComboBox::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFontComboBox_SuperTimerEvent(QFontComboBox* self, QTimerEvent* event) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->QFontComboBox::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QFontComboBox::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnTimerEvent(QFontComboBox* self, intptr_t slot) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self))
        vqfontcombobox->qfontcombobox_timerevent_callback = reinterpret_cast<VirtualQFontComboBox::QFontComboBox_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QFontComboBox_ChildEvent(QFontComboBox* self, QChildEvent* event) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox) {
        vqfontcombobox->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QFontComboBox::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFontComboBox_SuperChildEvent(QFontComboBox* self, QChildEvent* event) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->QFontComboBox::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QFontComboBox::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnChildEvent(QFontComboBox* self, intptr_t slot) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self))
        vqfontcombobox->qfontcombobox_childevent_callback = reinterpret_cast<VirtualQFontComboBox::QFontComboBox_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QFontComboBox_CustomEvent(QFontComboBox* self, QEvent* event) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox) {
        vqfontcombobox->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QFontComboBox::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFontComboBox_SuperCustomEvent(QFontComboBox* self, QEvent* event) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->QFontComboBox::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QFontComboBox::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnCustomEvent(QFontComboBox* self, intptr_t slot) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self))
        vqfontcombobox->qfontcombobox_customevent_callback = reinterpret_cast<VirtualQFontComboBox::QFontComboBox_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QFontComboBox_ConnectNotify(QFontComboBox* self, const QMetaMethod* signal) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox) {
        vqfontcombobox->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QFontComboBox::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QFontComboBox_SuperConnectNotify(QFontComboBox* self, const QMetaMethod* signal) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->QFontComboBox::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QFontComboBox::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnConnectNotify(QFontComboBox* self, intptr_t slot) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self))
        vqfontcombobox->qfontcombobox_connectnotify_callback = reinterpret_cast<VirtualQFontComboBox::QFontComboBox_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QFontComboBox_DisconnectNotify(QFontComboBox* self, const QMetaMethod* signal) {
    auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self);
    if (vqfontcombobox) {
        vqfontcombobox->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QFontComboBox::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QFontComboBox_SuperDisconnectNotify(QFontComboBox* self, const QMetaMethod* signal) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->QFontComboBox::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QFontComboBox::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFontComboBox_OnDisconnectNotify(QFontComboBox* self, intptr_t slot) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self))
        vqfontcombobox->qfontcombobox_disconnectnotify_callback = reinterpret_cast<VirtualQFontComboBox::QFontComboBox_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void QFontComboBox_UpdateMicroFocus(QFontComboBox* self) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->VirtualQFontComboBox::updateMicroFocus();
    } else
        qFatal("Error: Protected method QFontComboBox::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void QFontComboBox_Create(QFontComboBox* self) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->VirtualQFontComboBox::create();
    } else
        qFatal("Error: Protected method QFontComboBox::create called without a directly constructed type");
}

// Derived class protected handler implementation
void QFontComboBox_Destroy(QFontComboBox* self) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        vqfontcombobox->VirtualQFontComboBox::destroy();
    } else
        qFatal("Error: Protected method QFontComboBox::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool QFontComboBox_FocusNextChild(QFontComboBox* self) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        return vqfontcombobox->VirtualQFontComboBox::focusNextChild();
    } else
        qFatal("Error: Protected method QFontComboBox::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool QFontComboBox_FocusPreviousChild(QFontComboBox* self) {
    if (auto* vqfontcombobox = dynamic_cast<VirtualQFontComboBox*>(self)) {
        return vqfontcombobox->VirtualQFontComboBox::focusPreviousChild();
    } else
        qFatal("Error: Protected method QFontComboBox::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QFontComboBox_Sender(const QFontComboBox* self) {
    if (auto* vqfontcombobox = const_cast<VirtualQFontComboBox*>(dynamic_cast<const VirtualQFontComboBox*>(self))) {
        return vqfontcombobox->VirtualQFontComboBox::sender();
    } else
        qFatal("Error: Protected method QFontComboBox::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QFontComboBox_SenderSignalIndex(const QFontComboBox* self) {
    if (auto* vqfontcombobox = const_cast<VirtualQFontComboBox*>(dynamic_cast<const VirtualQFontComboBox*>(self))) {
        return vqfontcombobox->VirtualQFontComboBox::senderSignalIndex();
    } else
        qFatal("Error: Protected method QFontComboBox::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QFontComboBox_Receivers(const QFontComboBox* self, const char* signal) {
    if (auto* vqfontcombobox = const_cast<VirtualQFontComboBox*>(dynamic_cast<const VirtualQFontComboBox*>(self))) {
        return vqfontcombobox->VirtualQFontComboBox::receivers(signal);
    } else
        qFatal("Error: Protected method QFontComboBox::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QFontComboBox_IsSignalConnected(const QFontComboBox* self, const QMetaMethod* signal) {
    if (auto* vqfontcombobox = const_cast<VirtualQFontComboBox*>(dynamic_cast<const VirtualQFontComboBox*>(self))) {
        return vqfontcombobox->VirtualQFontComboBox::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QFontComboBox::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double QFontComboBox_GetDecodedMetricF(const QFontComboBox* self, int metricA, int metricB) {
    if (auto* vqfontcombobox = const_cast<VirtualQFontComboBox*>(dynamic_cast<const VirtualQFontComboBox*>(self))) {
        return vqfontcombobox->VirtualQFontComboBox::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method QFontComboBox::getDecodedMetricF called without a directly constructed type");
}

void QFontComboBox_Delete(QFontComboBox* self) {
    delete self;
}
