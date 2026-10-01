#include <KLanguageButton>
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
#include <klanguagebutton.h>
#include "libklanguagebutton.h"
#include "libklanguagebutton.hxx"

KLanguageButton* KLanguageButton_new(QWidget* parent) {
    return new VirtualKLanguageButton(parent);
}

KLanguageButton* KLanguageButton_new2() {
    return new VirtualKLanguageButton();
}

KLanguageButton* KLanguageButton_new3(const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualKLanguageButton(text_QString);
}

KLanguageButton* KLanguageButton_new4(const libqt_string text, QWidget* parent) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualKLanguageButton(text_QString, parent);
}

QMetaObject* KLanguageButton_MetaObject(const KLanguageButton* self) {
    return (QMetaObject*)self->metaObject();
}

void* KLanguageButton_Metacast(KLanguageButton* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KLanguageButton_Metacall(KLanguageButton* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KLanguageButton_Tr(const char* s) {
    auto _ret = KLanguageButton::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KLanguageButton_SetLocale(KLanguageButton* self, const libqt_string locale) {
    QString locale_QString = QString::fromUtf8(locale.data, locale.len);
    self->setLocale(locale_QString);
}

void KLanguageButton_SetText(KLanguageButton* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->setText(text_QString);
}

void KLanguageButton_ShowLanguageCodes(KLanguageButton* self, bool show) {
    self->showLanguageCodes(show);
}

void KLanguageButton_LoadAllLanguages(KLanguageButton* self) {
    self->loadAllLanguages();
}

void KLanguageButton_InsertLanguage(KLanguageButton* self, const libqt_string languageCode) {
    QString languageCode_QString = QString::fromUtf8(languageCode.data, languageCode.len);
    self->insertLanguage(languageCode_QString);
}

void KLanguageButton_InsertSeparator(KLanguageButton* self) {
    self->insertSeparator();
}

int KLanguageButton_Count(const KLanguageButton* self) {
    return self->count();
}

void KLanguageButton_Clear(KLanguageButton* self) {
    self->clear();
}

libqt_string KLanguageButton_Current(const KLanguageButton* self) {
    auto _ret = self->current();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool KLanguageButton_Contains(const KLanguageButton* self, const libqt_string languageCode) {
    QString languageCode_QString = QString::fromUtf8(languageCode.data, languageCode.len);
    return self->contains(languageCode_QString);
}

void KLanguageButton_SetCurrentItem(KLanguageButton* self, const libqt_string languageCode) {
    QString languageCode_QString = QString::fromUtf8(languageCode.data, languageCode.len);
    self->setCurrentItem(languageCode_QString);
}

void KLanguageButton_Activated(KLanguageButton* self, const libqt_string languageCode) {
    QString languageCode_QString = QString::fromUtf8(languageCode.data, languageCode.len);
    self->activated(languageCode_QString);
}

void KLanguageButton_Connect_Activated(KLanguageButton* self, intptr_t slot) {
    void (*slotFunc)(KLanguageButton*, const char*) = reinterpret_cast<void (*)(KLanguageButton*, const char*)>(slot);
    KLanguageButton::connect(self,
                             static_cast<void (KLanguageButton::*)(const QString&)>(&KLanguageButton::activated),
                             [self, slotFunc](const QString& languageCode) {
                                 const auto languageCode_ret = languageCode;
                                 // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                                 QByteArray languageCode_b = languageCode_ret.toUtf8();
                                 auto languageCode_str_len = languageCode_b.length();
                                 const char* languageCode_str = static_cast<const char*>(malloc(languageCode_str_len + 1));
                                 memcpy((void*)languageCode_str, languageCode_b.data(), languageCode_str_len);
                                 ((char*)languageCode_str)[languageCode_str_len] = '\0';
                                 const char* sigval1 = languageCode_str;
                                 slotFunc(self, sigval1);
                                 libqt_free(languageCode_str);
                             });
}

void KLanguageButton_Highlighted(KLanguageButton* self, const libqt_string languageCode) {
    QString languageCode_QString = QString::fromUtf8(languageCode.data, languageCode.len);
    self->highlighted(languageCode_QString);
}

void KLanguageButton_Connect_Highlighted(KLanguageButton* self, intptr_t slot) {
    void (*slotFunc)(KLanguageButton*, const char*) = reinterpret_cast<void (*)(KLanguageButton*, const char*)>(slot);
    KLanguageButton::connect(self,
                             static_cast<void (KLanguageButton::*)(const QString&)>(&KLanguageButton::highlighted),
                             [self, slotFunc](const QString& languageCode) {
                                 const auto languageCode_ret = languageCode;
                                 // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                                 QByteArray languageCode_b = languageCode_ret.toUtf8();
                                 auto languageCode_str_len = languageCode_b.length();
                                 const char* languageCode_str = static_cast<const char*>(malloc(languageCode_str_len + 1));
                                 memcpy((void*)languageCode_str, languageCode_b.data(), languageCode_str_len);
                                 ((char*)languageCode_str)[languageCode_str_len] = '\0';
                                 const char* sigval1 = languageCode_str;
                                 slotFunc(self, sigval1);
                                 libqt_free(languageCode_str);
                             });
}

libqt_string KLanguageButton_Tr2(const char* s, const char* c) {
    auto _ret = KLanguageButton::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KLanguageButton_Tr3(const char* s, const char* c, int n) {
    auto _ret = KLanguageButton::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KLanguageButton_InsertLanguage2(KLanguageButton* self, const libqt_string languageCode, const libqt_string name) {
    QString languageCode_QString = QString::fromUtf8(languageCode.data, languageCode.len);
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->insertLanguage(languageCode_QString, name_QString);
}

void KLanguageButton_InsertLanguage3(KLanguageButton* self, const libqt_string languageCode, const libqt_string name, int index) {
    QString languageCode_QString = QString::fromUtf8(languageCode.data, languageCode.len);
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->insertLanguage(languageCode_QString, name_QString, static_cast<int>(index));
}

void KLanguageButton_InsertSeparator1(KLanguageButton* self, int index) {
    self->insertSeparator(static_cast<int>(index));
}

// Base class handler implementation
QMetaObject* KLanguageButton_SuperMetaObject(const KLanguageButton* self) {
    return (QMetaObject*)self->KLanguageButton::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KLanguageButton_OnMetaObject(KLanguageButton* self, intptr_t slot) {
    if (auto* vklanguagebutton = const_cast<VirtualKLanguageButton*>(dynamic_cast<const VirtualKLanguageButton*>(self)))
        vklanguagebutton->klanguagebutton_metaobject_callback = reinterpret_cast<VirtualKLanguageButton::KLanguageButton_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KLanguageButton_SuperMetacast(KLanguageButton* self, const char* param1) {
    return self->KLanguageButton::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KLanguageButton_OnMetacast(KLanguageButton* self, intptr_t slot) {
    if (auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self))
        vklanguagebutton->klanguagebutton_metacast_callback = reinterpret_cast<VirtualKLanguageButton::KLanguageButton_Metacast_Callback>(slot);
}

// Base class handler implementation
int KLanguageButton_SuperMetacall(KLanguageButton* self, int param1, int param2, void** param3) {
    return self->KLanguageButton::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KLanguageButton_OnMetacall(KLanguageButton* self, intptr_t slot) {
    if (auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self))
        vklanguagebutton->klanguagebutton_metacall_callback = reinterpret_cast<VirtualKLanguageButton::KLanguageButton_Metacall_Callback>(slot);
}

// Derived class handler implementation
int KLanguageButton_DevType(const KLanguageButton* self) {
    return self->devType();
}

// Base class handler implementation
int KLanguageButton_SuperDevType(const KLanguageButton* self) {
    return self->KLanguageButton::devType();
}

// Auxiliary method to allow providing re-implementation
void KLanguageButton_OnDevType(KLanguageButton* self, intptr_t slot) {
    if (auto* vklanguagebutton = const_cast<VirtualKLanguageButton*>(dynamic_cast<const VirtualKLanguageButton*>(self)))
        vklanguagebutton->klanguagebutton_devtype_callback = reinterpret_cast<VirtualKLanguageButton::KLanguageButton_DevType_Callback>(slot);
}

// Derived class handler implementation
void KLanguageButton_SetVisible(KLanguageButton* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void KLanguageButton_SuperSetVisible(KLanguageButton* self, bool visible) {
    self->KLanguageButton::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void KLanguageButton_OnSetVisible(KLanguageButton* self, intptr_t slot) {
    if (auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self))
        vklanguagebutton->klanguagebutton_setvisible_callback = reinterpret_cast<VirtualKLanguageButton::KLanguageButton_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* KLanguageButton_SizeHint(const KLanguageButton* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* KLanguageButton_SuperSizeHint(const KLanguageButton* self) {
    return new QSize(self->KLanguageButton::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void KLanguageButton_OnSizeHint(KLanguageButton* self, intptr_t slot) {
    if (auto* vklanguagebutton = const_cast<VirtualKLanguageButton*>(dynamic_cast<const VirtualKLanguageButton*>(self)))
        vklanguagebutton->klanguagebutton_sizehint_callback = reinterpret_cast<VirtualKLanguageButton::KLanguageButton_SizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* KLanguageButton_MinimumSizeHint(const KLanguageButton* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* KLanguageButton_SuperMinimumSizeHint(const KLanguageButton* self) {
    return new QSize(self->KLanguageButton::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void KLanguageButton_OnMinimumSizeHint(KLanguageButton* self, intptr_t slot) {
    if (auto* vklanguagebutton = const_cast<VirtualKLanguageButton*>(dynamic_cast<const VirtualKLanguageButton*>(self)))
        vklanguagebutton->klanguagebutton_minimumsizehint_callback = reinterpret_cast<VirtualKLanguageButton::KLanguageButton_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
int KLanguageButton_HeightForWidth(const KLanguageButton* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int KLanguageButton_SuperHeightForWidth(const KLanguageButton* self, int param1) {
    return self->KLanguageButton::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void KLanguageButton_OnHeightForWidth(KLanguageButton* self, intptr_t slot) {
    if (auto* vklanguagebutton = const_cast<VirtualKLanguageButton*>(dynamic_cast<const VirtualKLanguageButton*>(self)))
        vklanguagebutton->klanguagebutton_heightforwidth_callback = reinterpret_cast<VirtualKLanguageButton::KLanguageButton_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool KLanguageButton_HasHeightForWidth(const KLanguageButton* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool KLanguageButton_SuperHasHeightForWidth(const KLanguageButton* self) {
    return self->KLanguageButton::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void KLanguageButton_OnHasHeightForWidth(KLanguageButton* self, intptr_t slot) {
    if (auto* vklanguagebutton = const_cast<VirtualKLanguageButton*>(dynamic_cast<const VirtualKLanguageButton*>(self)))
        vklanguagebutton->klanguagebutton_hasheightforwidth_callback = reinterpret_cast<VirtualKLanguageButton::KLanguageButton_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* KLanguageButton_PaintEngine(const KLanguageButton* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* KLanguageButton_SuperPaintEngine(const KLanguageButton* self) {
    return self->KLanguageButton::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void KLanguageButton_OnPaintEngine(KLanguageButton* self, intptr_t slot) {
    if (auto* vklanguagebutton = const_cast<VirtualKLanguageButton*>(dynamic_cast<const VirtualKLanguageButton*>(self)))
        vklanguagebutton->klanguagebutton_paintengine_callback = reinterpret_cast<VirtualKLanguageButton::KLanguageButton_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
bool KLanguageButton_Event(KLanguageButton* self, QEvent* event) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton) {
        return vklanguagebutton->event(event);
    } else {
        qFatal("Error: Protected virtual method KLanguageButton::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool KLanguageButton_SuperEvent(KLanguageButton* self, QEvent* event) {
    if (auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self)) {
        return vklanguagebutton->KLanguageButton::event(event);
    } else
        qFatal("Error: Protected virtual method KLanguageButton::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KLanguageButton_OnEvent(KLanguageButton* self, intptr_t slot) {
    if (auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self))
        vklanguagebutton->klanguagebutton_event_callback = reinterpret_cast<VirtualKLanguageButton::KLanguageButton_Event_Callback>(slot);
}

// Derived class handler implementation
void KLanguageButton_MousePressEvent(KLanguageButton* self, QMouseEvent* event) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton) {
        vklanguagebutton->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method KLanguageButton::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KLanguageButton_SuperMousePressEvent(KLanguageButton* self, QMouseEvent* event) {
    if (auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self)) {
        vklanguagebutton->KLanguageButton::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method KLanguageButton::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KLanguageButton_OnMousePressEvent(KLanguageButton* self, intptr_t slot) {
    if (auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self))
        vklanguagebutton->klanguagebutton_mousepressevent_callback = reinterpret_cast<VirtualKLanguageButton::KLanguageButton_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void KLanguageButton_MouseReleaseEvent(KLanguageButton* self, QMouseEvent* event) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton) {
        vklanguagebutton->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KLanguageButton::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KLanguageButton_SuperMouseReleaseEvent(KLanguageButton* self, QMouseEvent* event) {
    if (auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self)) {
        vklanguagebutton->KLanguageButton::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KLanguageButton::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KLanguageButton_OnMouseReleaseEvent(KLanguageButton* self, intptr_t slot) {
    if (auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self))
        vklanguagebutton->klanguagebutton_mousereleaseevent_callback = reinterpret_cast<VirtualKLanguageButton::KLanguageButton_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KLanguageButton_MouseDoubleClickEvent(KLanguageButton* self, QMouseEvent* event) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton) {
        vklanguagebutton->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method KLanguageButton::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KLanguageButton_SuperMouseDoubleClickEvent(KLanguageButton* self, QMouseEvent* event) {
    if (auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self)) {
        vklanguagebutton->KLanguageButton::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method KLanguageButton::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KLanguageButton_OnMouseDoubleClickEvent(KLanguageButton* self, intptr_t slot) {
    if (auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self))
        vklanguagebutton->klanguagebutton_mousedoubleclickevent_callback = reinterpret_cast<VirtualKLanguageButton::KLanguageButton_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void KLanguageButton_MouseMoveEvent(KLanguageButton* self, QMouseEvent* event) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton) {
        vklanguagebutton->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KLanguageButton::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KLanguageButton_SuperMouseMoveEvent(KLanguageButton* self, QMouseEvent* event) {
    if (auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self)) {
        vklanguagebutton->KLanguageButton::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KLanguageButton::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KLanguageButton_OnMouseMoveEvent(KLanguageButton* self, intptr_t slot) {
    if (auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self))
        vklanguagebutton->klanguagebutton_mousemoveevent_callback = reinterpret_cast<VirtualKLanguageButton::KLanguageButton_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KLanguageButton_WheelEvent(KLanguageButton* self, QWheelEvent* event) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton) {
        vklanguagebutton->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method KLanguageButton::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KLanguageButton_SuperWheelEvent(KLanguageButton* self, QWheelEvent* event) {
    if (auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self)) {
        vklanguagebutton->KLanguageButton::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method KLanguageButton::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KLanguageButton_OnWheelEvent(KLanguageButton* self, intptr_t slot) {
    if (auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self))
        vklanguagebutton->klanguagebutton_wheelevent_callback = reinterpret_cast<VirtualKLanguageButton::KLanguageButton_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void KLanguageButton_KeyPressEvent(KLanguageButton* self, QKeyEvent* event) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton) {
        vklanguagebutton->keyPressEvent(event);
    } else {
        qFatal("Error: Protected virtual method KLanguageButton::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KLanguageButton_SuperKeyPressEvent(KLanguageButton* self, QKeyEvent* event) {
    if (auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self)) {
        vklanguagebutton->KLanguageButton::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method KLanguageButton::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KLanguageButton_OnKeyPressEvent(KLanguageButton* self, intptr_t slot) {
    if (auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self))
        vklanguagebutton->klanguagebutton_keypressevent_callback = reinterpret_cast<VirtualKLanguageButton::KLanguageButton_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void KLanguageButton_KeyReleaseEvent(KLanguageButton* self, QKeyEvent* event) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton) {
        vklanguagebutton->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KLanguageButton::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KLanguageButton_SuperKeyReleaseEvent(KLanguageButton* self, QKeyEvent* event) {
    if (auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self)) {
        vklanguagebutton->KLanguageButton::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KLanguageButton::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KLanguageButton_OnKeyReleaseEvent(KLanguageButton* self, intptr_t slot) {
    if (auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self))
        vklanguagebutton->klanguagebutton_keyreleaseevent_callback = reinterpret_cast<VirtualKLanguageButton::KLanguageButton_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KLanguageButton_FocusInEvent(KLanguageButton* self, QFocusEvent* event) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton) {
        vklanguagebutton->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method KLanguageButton::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KLanguageButton_SuperFocusInEvent(KLanguageButton* self, QFocusEvent* event) {
    if (auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self)) {
        vklanguagebutton->KLanguageButton::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method KLanguageButton::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KLanguageButton_OnFocusInEvent(KLanguageButton* self, intptr_t slot) {
    if (auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self))
        vklanguagebutton->klanguagebutton_focusinevent_callback = reinterpret_cast<VirtualKLanguageButton::KLanguageButton_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void KLanguageButton_FocusOutEvent(KLanguageButton* self, QFocusEvent* event) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton) {
        vklanguagebutton->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method KLanguageButton::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KLanguageButton_SuperFocusOutEvent(KLanguageButton* self, QFocusEvent* event) {
    if (auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self)) {
        vklanguagebutton->KLanguageButton::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method KLanguageButton::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KLanguageButton_OnFocusOutEvent(KLanguageButton* self, intptr_t slot) {
    if (auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self))
        vklanguagebutton->klanguagebutton_focusoutevent_callback = reinterpret_cast<VirtualKLanguageButton::KLanguageButton_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void KLanguageButton_EnterEvent(KLanguageButton* self, QEnterEvent* event) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton) {
        vklanguagebutton->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KLanguageButton::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KLanguageButton_SuperEnterEvent(KLanguageButton* self, QEnterEvent* event) {
    if (auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self)) {
        vklanguagebutton->KLanguageButton::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method KLanguageButton::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KLanguageButton_OnEnterEvent(KLanguageButton* self, intptr_t slot) {
    if (auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self))
        vklanguagebutton->klanguagebutton_enterevent_callback = reinterpret_cast<VirtualKLanguageButton::KLanguageButton_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KLanguageButton_LeaveEvent(KLanguageButton* self, QEvent* event) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton) {
        vklanguagebutton->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KLanguageButton::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KLanguageButton_SuperLeaveEvent(KLanguageButton* self, QEvent* event) {
    if (auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self)) {
        vklanguagebutton->KLanguageButton::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KLanguageButton::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KLanguageButton_OnLeaveEvent(KLanguageButton* self, intptr_t slot) {
    if (auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self))
        vklanguagebutton->klanguagebutton_leaveevent_callback = reinterpret_cast<VirtualKLanguageButton::KLanguageButton_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KLanguageButton_PaintEvent(KLanguageButton* self, QPaintEvent* event) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton) {
        vklanguagebutton->paintEvent(event);
    } else {
        qFatal("Error: Protected virtual method KLanguageButton::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KLanguageButton_SuperPaintEvent(KLanguageButton* self, QPaintEvent* event) {
    if (auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self)) {
        vklanguagebutton->KLanguageButton::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method KLanguageButton::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KLanguageButton_OnPaintEvent(KLanguageButton* self, intptr_t slot) {
    if (auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self))
        vklanguagebutton->klanguagebutton_paintevent_callback = reinterpret_cast<VirtualKLanguageButton::KLanguageButton_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void KLanguageButton_MoveEvent(KLanguageButton* self, QMoveEvent* event) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton) {
        vklanguagebutton->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KLanguageButton::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KLanguageButton_SuperMoveEvent(KLanguageButton* self, QMoveEvent* event) {
    if (auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self)) {
        vklanguagebutton->KLanguageButton::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method KLanguageButton::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KLanguageButton_OnMoveEvent(KLanguageButton* self, intptr_t slot) {
    if (auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self))
        vklanguagebutton->klanguagebutton_moveevent_callback = reinterpret_cast<VirtualKLanguageButton::KLanguageButton_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KLanguageButton_ResizeEvent(KLanguageButton* self, QResizeEvent* event) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton) {
        vklanguagebutton->resizeEvent(event);
    } else {
        qFatal("Error: Protected virtual method KLanguageButton::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KLanguageButton_SuperResizeEvent(KLanguageButton* self, QResizeEvent* event) {
    if (auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self)) {
        vklanguagebutton->KLanguageButton::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method KLanguageButton::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KLanguageButton_OnResizeEvent(KLanguageButton* self, intptr_t slot) {
    if (auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self))
        vklanguagebutton->klanguagebutton_resizeevent_callback = reinterpret_cast<VirtualKLanguageButton::KLanguageButton_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void KLanguageButton_CloseEvent(KLanguageButton* self, QCloseEvent* event) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton) {
        vklanguagebutton->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method KLanguageButton::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KLanguageButton_SuperCloseEvent(KLanguageButton* self, QCloseEvent* event) {
    if (auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self)) {
        vklanguagebutton->KLanguageButton::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method KLanguageButton::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KLanguageButton_OnCloseEvent(KLanguageButton* self, intptr_t slot) {
    if (auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self))
        vklanguagebutton->klanguagebutton_closeevent_callback = reinterpret_cast<VirtualKLanguageButton::KLanguageButton_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void KLanguageButton_ContextMenuEvent(KLanguageButton* self, QContextMenuEvent* event) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton) {
        vklanguagebutton->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method KLanguageButton::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KLanguageButton_SuperContextMenuEvent(KLanguageButton* self, QContextMenuEvent* event) {
    if (auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self)) {
        vklanguagebutton->KLanguageButton::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method KLanguageButton::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KLanguageButton_OnContextMenuEvent(KLanguageButton* self, intptr_t slot) {
    if (auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self))
        vklanguagebutton->klanguagebutton_contextmenuevent_callback = reinterpret_cast<VirtualKLanguageButton::KLanguageButton_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void KLanguageButton_TabletEvent(KLanguageButton* self, QTabletEvent* event) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton) {
        vklanguagebutton->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method KLanguageButton::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KLanguageButton_SuperTabletEvent(KLanguageButton* self, QTabletEvent* event) {
    if (auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self)) {
        vklanguagebutton->KLanguageButton::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method KLanguageButton::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KLanguageButton_OnTabletEvent(KLanguageButton* self, intptr_t slot) {
    if (auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self))
        vklanguagebutton->klanguagebutton_tabletevent_callback = reinterpret_cast<VirtualKLanguageButton::KLanguageButton_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void KLanguageButton_ActionEvent(KLanguageButton* self, QActionEvent* event) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton) {
        vklanguagebutton->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method KLanguageButton::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KLanguageButton_SuperActionEvent(KLanguageButton* self, QActionEvent* event) {
    if (auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self)) {
        vklanguagebutton->KLanguageButton::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method KLanguageButton::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KLanguageButton_OnActionEvent(KLanguageButton* self, intptr_t slot) {
    if (auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self))
        vklanguagebutton->klanguagebutton_actionevent_callback = reinterpret_cast<VirtualKLanguageButton::KLanguageButton_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void KLanguageButton_DragEnterEvent(KLanguageButton* self, QDragEnterEvent* event) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton) {
        vklanguagebutton->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KLanguageButton::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KLanguageButton_SuperDragEnterEvent(KLanguageButton* self, QDragEnterEvent* event) {
    if (auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self)) {
        vklanguagebutton->KLanguageButton::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method KLanguageButton::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KLanguageButton_OnDragEnterEvent(KLanguageButton* self, intptr_t slot) {
    if (auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self))
        vklanguagebutton->klanguagebutton_dragenterevent_callback = reinterpret_cast<VirtualKLanguageButton::KLanguageButton_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KLanguageButton_DragMoveEvent(KLanguageButton* self, QDragMoveEvent* event) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton) {
        vklanguagebutton->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KLanguageButton::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KLanguageButton_SuperDragMoveEvent(KLanguageButton* self, QDragMoveEvent* event) {
    if (auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self)) {
        vklanguagebutton->KLanguageButton::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KLanguageButton::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KLanguageButton_OnDragMoveEvent(KLanguageButton* self, intptr_t slot) {
    if (auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self))
        vklanguagebutton->klanguagebutton_dragmoveevent_callback = reinterpret_cast<VirtualKLanguageButton::KLanguageButton_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KLanguageButton_DragLeaveEvent(KLanguageButton* self, QDragLeaveEvent* event) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton) {
        vklanguagebutton->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KLanguageButton::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KLanguageButton_SuperDragLeaveEvent(KLanguageButton* self, QDragLeaveEvent* event) {
    if (auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self)) {
        vklanguagebutton->KLanguageButton::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KLanguageButton::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KLanguageButton_OnDragLeaveEvent(KLanguageButton* self, intptr_t slot) {
    if (auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self))
        vklanguagebutton->klanguagebutton_dragleaveevent_callback = reinterpret_cast<VirtualKLanguageButton::KLanguageButton_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KLanguageButton_DropEvent(KLanguageButton* self, QDropEvent* event) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton) {
        vklanguagebutton->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method KLanguageButton::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KLanguageButton_SuperDropEvent(KLanguageButton* self, QDropEvent* event) {
    if (auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self)) {
        vklanguagebutton->KLanguageButton::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method KLanguageButton::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KLanguageButton_OnDropEvent(KLanguageButton* self, intptr_t slot) {
    if (auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self))
        vklanguagebutton->klanguagebutton_dropevent_callback = reinterpret_cast<VirtualKLanguageButton::KLanguageButton_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void KLanguageButton_ShowEvent(KLanguageButton* self, QShowEvent* event) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton) {
        vklanguagebutton->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method KLanguageButton::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KLanguageButton_SuperShowEvent(KLanguageButton* self, QShowEvent* event) {
    if (auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self)) {
        vklanguagebutton->KLanguageButton::showEvent(event);
    } else
        qFatal("Error: Protected virtual method KLanguageButton::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KLanguageButton_OnShowEvent(KLanguageButton* self, intptr_t slot) {
    if (auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self))
        vklanguagebutton->klanguagebutton_showevent_callback = reinterpret_cast<VirtualKLanguageButton::KLanguageButton_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void KLanguageButton_HideEvent(KLanguageButton* self, QHideEvent* event) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton) {
        vklanguagebutton->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method KLanguageButton::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KLanguageButton_SuperHideEvent(KLanguageButton* self, QHideEvent* event) {
    if (auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self)) {
        vklanguagebutton->KLanguageButton::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method KLanguageButton::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KLanguageButton_OnHideEvent(KLanguageButton* self, intptr_t slot) {
    if (auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self))
        vklanguagebutton->klanguagebutton_hideevent_callback = reinterpret_cast<VirtualKLanguageButton::KLanguageButton_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool KLanguageButton_NativeEvent(KLanguageButton* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton) {
        return vklanguagebutton->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method KLanguageButton::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool KLanguageButton_SuperNativeEvent(KLanguageButton* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self)) {
        return vklanguagebutton->KLanguageButton::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method KLanguageButton::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KLanguageButton_OnNativeEvent(KLanguageButton* self, intptr_t slot) {
    if (auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self))
        vklanguagebutton->klanguagebutton_nativeevent_callback = reinterpret_cast<VirtualKLanguageButton::KLanguageButton_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
void KLanguageButton_ChangeEvent(KLanguageButton* self, QEvent* param1) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton) {
        vklanguagebutton->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KLanguageButton::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KLanguageButton_SuperChangeEvent(KLanguageButton* self, QEvent* param1) {
    if (auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self)) {
        vklanguagebutton->KLanguageButton::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KLanguageButton::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KLanguageButton_OnChangeEvent(KLanguageButton* self, intptr_t slot) {
    if (auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self))
        vklanguagebutton->klanguagebutton_changeevent_callback = reinterpret_cast<VirtualKLanguageButton::KLanguageButton_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
int KLanguageButton_Metric(const KLanguageButton* self, int param1) {
    auto* vklanguagebutton = const_cast<VirtualKLanguageButton*>(dynamic_cast<const VirtualKLanguageButton*>(self));
    if (vklanguagebutton) {
        return vklanguagebutton->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method KLanguageButton::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int KLanguageButton_SuperMetric(const KLanguageButton* self, int param1) {
    if (auto* vklanguagebutton = const_cast<VirtualKLanguageButton*>(dynamic_cast<const VirtualKLanguageButton*>(self))) {
        return vklanguagebutton->KLanguageButton::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method KLanguageButton::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KLanguageButton_OnMetric(KLanguageButton* self, intptr_t slot) {
    if (auto* vklanguagebutton = const_cast<VirtualKLanguageButton*>(dynamic_cast<const VirtualKLanguageButton*>(self)))
        vklanguagebutton->klanguagebutton_metric_callback = reinterpret_cast<VirtualKLanguageButton::KLanguageButton_Metric_Callback>(slot);
}

// Derived class handler implementation
void KLanguageButton_InitPainter(const KLanguageButton* self, QPainter* painter) {
    auto* vklanguagebutton = const_cast<VirtualKLanguageButton*>(dynamic_cast<const VirtualKLanguageButton*>(self));
    if (vklanguagebutton) {
        vklanguagebutton->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method KLanguageButton::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void KLanguageButton_SuperInitPainter(const KLanguageButton* self, QPainter* painter) {
    if (auto* vklanguagebutton = const_cast<VirtualKLanguageButton*>(dynamic_cast<const VirtualKLanguageButton*>(self))) {
        vklanguagebutton->KLanguageButton::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method KLanguageButton::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KLanguageButton_OnInitPainter(KLanguageButton* self, intptr_t slot) {
    if (auto* vklanguagebutton = const_cast<VirtualKLanguageButton*>(dynamic_cast<const VirtualKLanguageButton*>(self)))
        vklanguagebutton->klanguagebutton_initpainter_callback = reinterpret_cast<VirtualKLanguageButton::KLanguageButton_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* KLanguageButton_Redirected(const KLanguageButton* self, QPoint* offset) {
    auto* vklanguagebutton = const_cast<VirtualKLanguageButton*>(dynamic_cast<const VirtualKLanguageButton*>(self));
    if (vklanguagebutton) {
        return vklanguagebutton->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method KLanguageButton::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* KLanguageButton_SuperRedirected(const KLanguageButton* self, QPoint* offset) {
    if (auto* vklanguagebutton = const_cast<VirtualKLanguageButton*>(dynamic_cast<const VirtualKLanguageButton*>(self))) {
        return vklanguagebutton->KLanguageButton::redirected(offset);
    } else
        qFatal("Error: Protected virtual method KLanguageButton::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KLanguageButton_OnRedirected(KLanguageButton* self, intptr_t slot) {
    if (auto* vklanguagebutton = const_cast<VirtualKLanguageButton*>(dynamic_cast<const VirtualKLanguageButton*>(self)))
        vklanguagebutton->klanguagebutton_redirected_callback = reinterpret_cast<VirtualKLanguageButton::KLanguageButton_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* KLanguageButton_SharedPainter(const KLanguageButton* self) {
    auto* vklanguagebutton = const_cast<VirtualKLanguageButton*>(dynamic_cast<const VirtualKLanguageButton*>(self));
    if (vklanguagebutton) {
        return vklanguagebutton->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method KLanguageButton::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* KLanguageButton_SuperSharedPainter(const KLanguageButton* self) {
    if (auto* vklanguagebutton = const_cast<VirtualKLanguageButton*>(dynamic_cast<const VirtualKLanguageButton*>(self))) {
        return vklanguagebutton->KLanguageButton::sharedPainter();
    } else
        qFatal("Error: Protected virtual method KLanguageButton::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KLanguageButton_OnSharedPainter(KLanguageButton* self, intptr_t slot) {
    if (auto* vklanguagebutton = const_cast<VirtualKLanguageButton*>(dynamic_cast<const VirtualKLanguageButton*>(self)))
        vklanguagebutton->klanguagebutton_sharedpainter_callback = reinterpret_cast<VirtualKLanguageButton::KLanguageButton_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void KLanguageButton_InputMethodEvent(KLanguageButton* self, QInputMethodEvent* param1) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton) {
        vklanguagebutton->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KLanguageButton::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KLanguageButton_SuperInputMethodEvent(KLanguageButton* self, QInputMethodEvent* param1) {
    if (auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self)) {
        vklanguagebutton->KLanguageButton::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method KLanguageButton::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KLanguageButton_OnInputMethodEvent(KLanguageButton* self, intptr_t slot) {
    if (auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self))
        vklanguagebutton->klanguagebutton_inputmethodevent_callback = reinterpret_cast<VirtualKLanguageButton::KLanguageButton_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* KLanguageButton_InputMethodQuery(const KLanguageButton* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* KLanguageButton_SuperInputMethodQuery(const KLanguageButton* self, int param1) {
    return new QVariant(self->KLanguageButton::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void KLanguageButton_OnInputMethodQuery(KLanguageButton* self, intptr_t slot) {
    if (auto* vklanguagebutton = const_cast<VirtualKLanguageButton*>(dynamic_cast<const VirtualKLanguageButton*>(self)))
        vklanguagebutton->klanguagebutton_inputmethodquery_callback = reinterpret_cast<VirtualKLanguageButton::KLanguageButton_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool KLanguageButton_FocusNextPrevChild(KLanguageButton* self, bool next) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton) {
        return vklanguagebutton->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method KLanguageButton::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool KLanguageButton_SuperFocusNextPrevChild(KLanguageButton* self, bool next) {
    if (auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self)) {
        return vklanguagebutton->KLanguageButton::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method KLanguageButton::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KLanguageButton_OnFocusNextPrevChild(KLanguageButton* self, intptr_t slot) {
    if (auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self))
        vklanguagebutton->klanguagebutton_focusnextprevchild_callback = reinterpret_cast<VirtualKLanguageButton::KLanguageButton_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
bool KLanguageButton_EventFilter(KLanguageButton* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KLanguageButton_SuperEventFilter(KLanguageButton* self, QObject* watched, QEvent* event) {
    return self->KLanguageButton::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KLanguageButton_OnEventFilter(KLanguageButton* self, intptr_t slot) {
    if (auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self))
        vklanguagebutton->klanguagebutton_eventfilter_callback = reinterpret_cast<VirtualKLanguageButton::KLanguageButton_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KLanguageButton_TimerEvent(KLanguageButton* self, QTimerEvent* event) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton) {
        vklanguagebutton->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KLanguageButton::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KLanguageButton_SuperTimerEvent(KLanguageButton* self, QTimerEvent* event) {
    if (auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self)) {
        vklanguagebutton->KLanguageButton::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KLanguageButton::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KLanguageButton_OnTimerEvent(KLanguageButton* self, intptr_t slot) {
    if (auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self))
        vklanguagebutton->klanguagebutton_timerevent_callback = reinterpret_cast<VirtualKLanguageButton::KLanguageButton_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KLanguageButton_ChildEvent(KLanguageButton* self, QChildEvent* event) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton) {
        vklanguagebutton->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KLanguageButton::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KLanguageButton_SuperChildEvent(KLanguageButton* self, QChildEvent* event) {
    if (auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self)) {
        vklanguagebutton->KLanguageButton::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KLanguageButton::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KLanguageButton_OnChildEvent(KLanguageButton* self, intptr_t slot) {
    if (auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self))
        vklanguagebutton->klanguagebutton_childevent_callback = reinterpret_cast<VirtualKLanguageButton::KLanguageButton_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KLanguageButton_CustomEvent(KLanguageButton* self, QEvent* event) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton) {
        vklanguagebutton->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KLanguageButton::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KLanguageButton_SuperCustomEvent(KLanguageButton* self, QEvent* event) {
    if (auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self)) {
        vklanguagebutton->KLanguageButton::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KLanguageButton::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KLanguageButton_OnCustomEvent(KLanguageButton* self, intptr_t slot) {
    if (auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self))
        vklanguagebutton->klanguagebutton_customevent_callback = reinterpret_cast<VirtualKLanguageButton::KLanguageButton_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KLanguageButton_ConnectNotify(KLanguageButton* self, const QMetaMethod* signal) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton) {
        vklanguagebutton->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KLanguageButton::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KLanguageButton_SuperConnectNotify(KLanguageButton* self, const QMetaMethod* signal) {
    if (auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self)) {
        vklanguagebutton->KLanguageButton::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KLanguageButton::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KLanguageButton_OnConnectNotify(KLanguageButton* self, intptr_t slot) {
    if (auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self))
        vklanguagebutton->klanguagebutton_connectnotify_callback = reinterpret_cast<VirtualKLanguageButton::KLanguageButton_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KLanguageButton_DisconnectNotify(KLanguageButton* self, const QMetaMethod* signal) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton) {
        vklanguagebutton->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KLanguageButton::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KLanguageButton_SuperDisconnectNotify(KLanguageButton* self, const QMetaMethod* signal) {
    if (auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self)) {
        vklanguagebutton->KLanguageButton::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KLanguageButton::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KLanguageButton_OnDisconnectNotify(KLanguageButton* self, intptr_t slot) {
    if (auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self))
        vklanguagebutton->klanguagebutton_disconnectnotify_callback = reinterpret_cast<VirtualKLanguageButton::KLanguageButton_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void KLanguageButton_UpdateMicroFocus(KLanguageButton* self) {
    if (auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self)) {
        vklanguagebutton->VirtualKLanguageButton::updateMicroFocus();
    } else
        qFatal("Error: Protected method KLanguageButton::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void KLanguageButton_Create(KLanguageButton* self) {
    if (auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self)) {
        vklanguagebutton->VirtualKLanguageButton::create();
    } else
        qFatal("Error: Protected method KLanguageButton::create called without a directly constructed type");
}

// Derived class protected handler implementation
void KLanguageButton_Destroy(KLanguageButton* self) {
    if (auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self)) {
        vklanguagebutton->VirtualKLanguageButton::destroy();
    } else
        qFatal("Error: Protected method KLanguageButton::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool KLanguageButton_FocusNextChild(KLanguageButton* self) {
    if (auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self)) {
        return vklanguagebutton->VirtualKLanguageButton::focusNextChild();
    } else
        qFatal("Error: Protected method KLanguageButton::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool KLanguageButton_FocusPreviousChild(KLanguageButton* self) {
    if (auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self)) {
        return vklanguagebutton->VirtualKLanguageButton::focusPreviousChild();
    } else
        qFatal("Error: Protected method KLanguageButton::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KLanguageButton_Sender(const KLanguageButton* self) {
    if (auto* vklanguagebutton = const_cast<VirtualKLanguageButton*>(dynamic_cast<const VirtualKLanguageButton*>(self))) {
        return vklanguagebutton->VirtualKLanguageButton::sender();
    } else
        qFatal("Error: Protected method KLanguageButton::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KLanguageButton_SenderSignalIndex(const KLanguageButton* self) {
    if (auto* vklanguagebutton = const_cast<VirtualKLanguageButton*>(dynamic_cast<const VirtualKLanguageButton*>(self))) {
        return vklanguagebutton->VirtualKLanguageButton::senderSignalIndex();
    } else
        qFatal("Error: Protected method KLanguageButton::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KLanguageButton_Receivers(const KLanguageButton* self, const char* signal) {
    if (auto* vklanguagebutton = const_cast<VirtualKLanguageButton*>(dynamic_cast<const VirtualKLanguageButton*>(self))) {
        return vklanguagebutton->VirtualKLanguageButton::receivers(signal);
    } else
        qFatal("Error: Protected method KLanguageButton::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KLanguageButton_IsSignalConnected(const KLanguageButton* self, const QMetaMethod* signal) {
    if (auto* vklanguagebutton = const_cast<VirtualKLanguageButton*>(dynamic_cast<const VirtualKLanguageButton*>(self))) {
        return vklanguagebutton->VirtualKLanguageButton::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KLanguageButton::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double KLanguageButton_GetDecodedMetricF(const KLanguageButton* self, int metricA, int metricB) {
    if (auto* vklanguagebutton = const_cast<VirtualKLanguageButton*>(dynamic_cast<const VirtualKLanguageButton*>(self))) {
        return vklanguagebutton->VirtualKLanguageButton::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method KLanguageButton::getDecodedMetricF called without a directly constructed type");
}

void KLanguageButton_Delete(KLanguageButton* self) {
    delete self;
}
