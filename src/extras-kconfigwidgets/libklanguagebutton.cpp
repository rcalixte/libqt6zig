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
#include <QByteArray>
#include <cstring>
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
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKLanguageButton*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KLanguageButton_Tr(const char* s) {
    QString _ret = KLanguageButton::tr(s);
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
    QString _ret = self->current();
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
    KLanguageButton::connect(self, &KLanguageButton::activated, [self, slotFunc](const QString& languageCode) {
        const QString languageCode_ret = languageCode;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray languageCode_b = languageCode_ret.toUtf8();
        const char* languageCode_str = static_cast<const char*>(malloc(languageCode_b.length() + 1));
        memcpy((void*)languageCode_str, languageCode_b.data(), languageCode_b.length());
        ((char*)languageCode_str)[languageCode_b.length()] = '\0';
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
    KLanguageButton::connect(self, &KLanguageButton::highlighted, [self, slotFunc](const QString& languageCode) {
        const QString languageCode_ret = languageCode;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray languageCode_b = languageCode_ret.toUtf8();
        const char* languageCode_str = static_cast<const char*>(malloc(languageCode_b.length() + 1));
        memcpy((void*)languageCode_str, languageCode_b.data(), languageCode_b.length());
        ((char*)languageCode_str)[languageCode_b.length()] = '\0';
        const char* sigval1 = languageCode_str;
        slotFunc(self, sigval1);
        libqt_free(languageCode_str);
    });
}

libqt_string KLanguageButton_Tr2(const char* s, const char* c) {
    QString _ret = KLanguageButton::tr(s, c);
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
    QString _ret = KLanguageButton::tr(s, c, static_cast<int>(n));
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
int KLanguageButton_QBaseMetacall(KLanguageButton* self, int param1, int param2, void** param3) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->setKLanguageButton_Metacall_IsBase(true);
        return vklanguagebutton->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KLanguageButton::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KLanguageButton_OnMetacall(KLanguageButton* self, intptr_t slot) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->setKLanguageButton_Metacall_Callback(reinterpret_cast<VirtualKLanguageButton::KLanguageButton_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
int KLanguageButton_DevType(const KLanguageButton* self) {
    auto* vklanguagebutton = const_cast<VirtualKLanguageButton*>(dynamic_cast<const VirtualKLanguageButton*>(self));
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        return vklanguagebutton->devType();
    } else {
        return self->KLanguageButton::devType();
    }
}

// Base class handler implementation
int KLanguageButton_QBaseDevType(const KLanguageButton* self) {
    auto* vklanguagebutton = const_cast<VirtualKLanguageButton*>(dynamic_cast<const VirtualKLanguageButton*>(self));
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->setKLanguageButton_DevType_IsBase(true);
        return vklanguagebutton->devType();
    } else {
        return self->KLanguageButton::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void KLanguageButton_OnDevType(const KLanguageButton* self, intptr_t slot) {
    auto* vklanguagebutton = const_cast<VirtualKLanguageButton*>(dynamic_cast<const VirtualKLanguageButton*>(self));
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->setKLanguageButton_DevType_Callback(reinterpret_cast<VirtualKLanguageButton::KLanguageButton_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void KLanguageButton_SetVisible(KLanguageButton* self, bool visible) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->setVisible(visible);
    } else {
        self->KLanguageButton::setVisible(visible);
    }
}

// Base class handler implementation
void KLanguageButton_QBaseSetVisible(KLanguageButton* self, bool visible) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->setKLanguageButton_SetVisible_IsBase(true);
        vklanguagebutton->setVisible(visible);
    } else {
        self->KLanguageButton::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void KLanguageButton_OnSetVisible(KLanguageButton* self, intptr_t slot) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->setKLanguageButton_SetVisible_Callback(reinterpret_cast<VirtualKLanguageButton::KLanguageButton_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KLanguageButton_SizeHint(const KLanguageButton* self) {
    auto* vklanguagebutton = const_cast<VirtualKLanguageButton*>(dynamic_cast<const VirtualKLanguageButton*>(self));
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        return new QSize(vklanguagebutton->sizeHint());
    } else {
        return new QSize(((VirtualKLanguageButton*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* KLanguageButton_QBaseSizeHint(const KLanguageButton* self) {
    auto* vklanguagebutton = const_cast<VirtualKLanguageButton*>(dynamic_cast<const VirtualKLanguageButton*>(self));
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->setKLanguageButton_SizeHint_IsBase(true);
        return new QSize(vklanguagebutton->sizeHint());
    } else {
        return new QSize(((VirtualKLanguageButton*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KLanguageButton_OnSizeHint(const KLanguageButton* self, intptr_t slot) {
    auto* vklanguagebutton = const_cast<VirtualKLanguageButton*>(dynamic_cast<const VirtualKLanguageButton*>(self));
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->setKLanguageButton_SizeHint_Callback(reinterpret_cast<VirtualKLanguageButton::KLanguageButton_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KLanguageButton_MinimumSizeHint(const KLanguageButton* self) {
    auto* vklanguagebutton = const_cast<VirtualKLanguageButton*>(dynamic_cast<const VirtualKLanguageButton*>(self));
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        return new QSize(vklanguagebutton->minimumSizeHint());
    } else {
        return new QSize(((VirtualKLanguageButton*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* KLanguageButton_QBaseMinimumSizeHint(const KLanguageButton* self) {
    auto* vklanguagebutton = const_cast<VirtualKLanguageButton*>(dynamic_cast<const VirtualKLanguageButton*>(self));
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->setKLanguageButton_MinimumSizeHint_IsBase(true);
        return new QSize(vklanguagebutton->minimumSizeHint());
    } else {
        return new QSize(((VirtualKLanguageButton*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KLanguageButton_OnMinimumSizeHint(const KLanguageButton* self, intptr_t slot) {
    auto* vklanguagebutton = const_cast<VirtualKLanguageButton*>(dynamic_cast<const VirtualKLanguageButton*>(self));
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->setKLanguageButton_MinimumSizeHint_Callback(reinterpret_cast<VirtualKLanguageButton::KLanguageButton_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
int KLanguageButton_HeightForWidth(const KLanguageButton* self, int param1) {
    auto* vklanguagebutton = const_cast<VirtualKLanguageButton*>(dynamic_cast<const VirtualKLanguageButton*>(self));
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        return vklanguagebutton->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KLanguageButton::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int KLanguageButton_QBaseHeightForWidth(const KLanguageButton* self, int param1) {
    auto* vklanguagebutton = const_cast<VirtualKLanguageButton*>(dynamic_cast<const VirtualKLanguageButton*>(self));
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->setKLanguageButton_HeightForWidth_IsBase(true);
        return vklanguagebutton->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KLanguageButton::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KLanguageButton_OnHeightForWidth(const KLanguageButton* self, intptr_t slot) {
    auto* vklanguagebutton = const_cast<VirtualKLanguageButton*>(dynamic_cast<const VirtualKLanguageButton*>(self));
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->setKLanguageButton_HeightForWidth_Callback(reinterpret_cast<VirtualKLanguageButton::KLanguageButton_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool KLanguageButton_HasHeightForWidth(const KLanguageButton* self) {
    auto* vklanguagebutton = const_cast<VirtualKLanguageButton*>(dynamic_cast<const VirtualKLanguageButton*>(self));
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        return vklanguagebutton->hasHeightForWidth();
    } else {
        return self->KLanguageButton::hasHeightForWidth();
    }
}

// Base class handler implementation
bool KLanguageButton_QBaseHasHeightForWidth(const KLanguageButton* self) {
    auto* vklanguagebutton = const_cast<VirtualKLanguageButton*>(dynamic_cast<const VirtualKLanguageButton*>(self));
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->setKLanguageButton_HasHeightForWidth_IsBase(true);
        return vklanguagebutton->hasHeightForWidth();
    } else {
        return self->KLanguageButton::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void KLanguageButton_OnHasHeightForWidth(const KLanguageButton* self, intptr_t slot) {
    auto* vklanguagebutton = const_cast<VirtualKLanguageButton*>(dynamic_cast<const VirtualKLanguageButton*>(self));
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->setKLanguageButton_HasHeightForWidth_Callback(reinterpret_cast<VirtualKLanguageButton::KLanguageButton_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* KLanguageButton_PaintEngine(const KLanguageButton* self) {
    auto* vklanguagebutton = const_cast<VirtualKLanguageButton*>(dynamic_cast<const VirtualKLanguageButton*>(self));
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        return vklanguagebutton->paintEngine();
    } else {
        return self->KLanguageButton::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* KLanguageButton_QBasePaintEngine(const KLanguageButton* self) {
    auto* vklanguagebutton = const_cast<VirtualKLanguageButton*>(dynamic_cast<const VirtualKLanguageButton*>(self));
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->setKLanguageButton_PaintEngine_IsBase(true);
        return vklanguagebutton->paintEngine();
    } else {
        return self->KLanguageButton::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void KLanguageButton_OnPaintEngine(const KLanguageButton* self, intptr_t slot) {
    auto* vklanguagebutton = const_cast<VirtualKLanguageButton*>(dynamic_cast<const VirtualKLanguageButton*>(self));
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->setKLanguageButton_PaintEngine_Callback(reinterpret_cast<VirtualKLanguageButton::KLanguageButton_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
bool KLanguageButton_Event(KLanguageButton* self, QEvent* event) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        return vklanguagebutton->event(event);
    } else {
        return ((VirtualKLanguageButton*)self)->event(event);
    }
}

// Base class handler implementation
bool KLanguageButton_QBaseEvent(KLanguageButton* self, QEvent* event) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->setKLanguageButton_Event_IsBase(true);
        return vklanguagebutton->event(event);
    } else {
        return ((VirtualKLanguageButton*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KLanguageButton_OnEvent(KLanguageButton* self, intptr_t slot) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->setKLanguageButton_Event_Callback(reinterpret_cast<VirtualKLanguageButton::KLanguageButton_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void KLanguageButton_MousePressEvent(KLanguageButton* self, QMouseEvent* event) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->mousePressEvent(event);
    } else {
        ((VirtualKLanguageButton*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void KLanguageButton_QBaseMousePressEvent(KLanguageButton* self, QMouseEvent* event) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->setKLanguageButton_MousePressEvent_IsBase(true);
        vklanguagebutton->mousePressEvent(event);
    } else {
        ((VirtualKLanguageButton*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KLanguageButton_OnMousePressEvent(KLanguageButton* self, intptr_t slot) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->setKLanguageButton_MousePressEvent_Callback(reinterpret_cast<VirtualKLanguageButton::KLanguageButton_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KLanguageButton_MouseReleaseEvent(KLanguageButton* self, QMouseEvent* event) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->mouseReleaseEvent(event);
    } else {
        ((VirtualKLanguageButton*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void KLanguageButton_QBaseMouseReleaseEvent(KLanguageButton* self, QMouseEvent* event) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->setKLanguageButton_MouseReleaseEvent_IsBase(true);
        vklanguagebutton->mouseReleaseEvent(event);
    } else {
        ((VirtualKLanguageButton*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KLanguageButton_OnMouseReleaseEvent(KLanguageButton* self, intptr_t slot) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->setKLanguageButton_MouseReleaseEvent_Callback(reinterpret_cast<VirtualKLanguageButton::KLanguageButton_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KLanguageButton_MouseDoubleClickEvent(KLanguageButton* self, QMouseEvent* event) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKLanguageButton*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void KLanguageButton_QBaseMouseDoubleClickEvent(KLanguageButton* self, QMouseEvent* event) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->setKLanguageButton_MouseDoubleClickEvent_IsBase(true);
        vklanguagebutton->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKLanguageButton*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KLanguageButton_OnMouseDoubleClickEvent(KLanguageButton* self, intptr_t slot) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->setKLanguageButton_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualKLanguageButton::KLanguageButton_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KLanguageButton_MouseMoveEvent(KLanguageButton* self, QMouseEvent* event) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->mouseMoveEvent(event);
    } else {
        ((VirtualKLanguageButton*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void KLanguageButton_QBaseMouseMoveEvent(KLanguageButton* self, QMouseEvent* event) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->setKLanguageButton_MouseMoveEvent_IsBase(true);
        vklanguagebutton->mouseMoveEvent(event);
    } else {
        ((VirtualKLanguageButton*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KLanguageButton_OnMouseMoveEvent(KLanguageButton* self, intptr_t slot) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->setKLanguageButton_MouseMoveEvent_Callback(reinterpret_cast<VirtualKLanguageButton::KLanguageButton_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KLanguageButton_WheelEvent(KLanguageButton* self, QWheelEvent* event) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->wheelEvent(event);
    } else {
        ((VirtualKLanguageButton*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void KLanguageButton_QBaseWheelEvent(KLanguageButton* self, QWheelEvent* event) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->setKLanguageButton_WheelEvent_IsBase(true);
        vklanguagebutton->wheelEvent(event);
    } else {
        ((VirtualKLanguageButton*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KLanguageButton_OnWheelEvent(KLanguageButton* self, intptr_t slot) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->setKLanguageButton_WheelEvent_Callback(reinterpret_cast<VirtualKLanguageButton::KLanguageButton_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KLanguageButton_KeyPressEvent(KLanguageButton* self, QKeyEvent* event) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->keyPressEvent(event);
    } else {
        ((VirtualKLanguageButton*)self)->keyPressEvent(event);
    }
}

// Base class handler implementation
void KLanguageButton_QBaseKeyPressEvent(KLanguageButton* self, QKeyEvent* event) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->setKLanguageButton_KeyPressEvent_IsBase(true);
        vklanguagebutton->keyPressEvent(event);
    } else {
        ((VirtualKLanguageButton*)self)->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KLanguageButton_OnKeyPressEvent(KLanguageButton* self, intptr_t slot) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->setKLanguageButton_KeyPressEvent_Callback(reinterpret_cast<VirtualKLanguageButton::KLanguageButton_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KLanguageButton_KeyReleaseEvent(KLanguageButton* self, QKeyEvent* event) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->keyReleaseEvent(event);
    } else {
        ((VirtualKLanguageButton*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void KLanguageButton_QBaseKeyReleaseEvent(KLanguageButton* self, QKeyEvent* event) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->setKLanguageButton_KeyReleaseEvent_IsBase(true);
        vklanguagebutton->keyReleaseEvent(event);
    } else {
        ((VirtualKLanguageButton*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KLanguageButton_OnKeyReleaseEvent(KLanguageButton* self, intptr_t slot) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->setKLanguageButton_KeyReleaseEvent_Callback(reinterpret_cast<VirtualKLanguageButton::KLanguageButton_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KLanguageButton_FocusInEvent(KLanguageButton* self, QFocusEvent* event) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->focusInEvent(event);
    } else {
        ((VirtualKLanguageButton*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void KLanguageButton_QBaseFocusInEvent(KLanguageButton* self, QFocusEvent* event) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->setKLanguageButton_FocusInEvent_IsBase(true);
        vklanguagebutton->focusInEvent(event);
    } else {
        ((VirtualKLanguageButton*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KLanguageButton_OnFocusInEvent(KLanguageButton* self, intptr_t slot) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->setKLanguageButton_FocusInEvent_Callback(reinterpret_cast<VirtualKLanguageButton::KLanguageButton_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KLanguageButton_FocusOutEvent(KLanguageButton* self, QFocusEvent* event) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->focusOutEvent(event);
    } else {
        ((VirtualKLanguageButton*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void KLanguageButton_QBaseFocusOutEvent(KLanguageButton* self, QFocusEvent* event) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->setKLanguageButton_FocusOutEvent_IsBase(true);
        vklanguagebutton->focusOutEvent(event);
    } else {
        ((VirtualKLanguageButton*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KLanguageButton_OnFocusOutEvent(KLanguageButton* self, intptr_t slot) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->setKLanguageButton_FocusOutEvent_Callback(reinterpret_cast<VirtualKLanguageButton::KLanguageButton_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KLanguageButton_EnterEvent(KLanguageButton* self, QEnterEvent* event) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->enterEvent(event);
    } else {
        ((VirtualKLanguageButton*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void KLanguageButton_QBaseEnterEvent(KLanguageButton* self, QEnterEvent* event) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->setKLanguageButton_EnterEvent_IsBase(true);
        vklanguagebutton->enterEvent(event);
    } else {
        ((VirtualKLanguageButton*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KLanguageButton_OnEnterEvent(KLanguageButton* self, intptr_t slot) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->setKLanguageButton_EnterEvent_Callback(reinterpret_cast<VirtualKLanguageButton::KLanguageButton_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KLanguageButton_LeaveEvent(KLanguageButton* self, QEvent* event) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->leaveEvent(event);
    } else {
        ((VirtualKLanguageButton*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void KLanguageButton_QBaseLeaveEvent(KLanguageButton* self, QEvent* event) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->setKLanguageButton_LeaveEvent_IsBase(true);
        vklanguagebutton->leaveEvent(event);
    } else {
        ((VirtualKLanguageButton*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KLanguageButton_OnLeaveEvent(KLanguageButton* self, intptr_t slot) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->setKLanguageButton_LeaveEvent_Callback(reinterpret_cast<VirtualKLanguageButton::KLanguageButton_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KLanguageButton_PaintEvent(KLanguageButton* self, QPaintEvent* event) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->paintEvent(event);
    } else {
        ((VirtualKLanguageButton*)self)->paintEvent(event);
    }
}

// Base class handler implementation
void KLanguageButton_QBasePaintEvent(KLanguageButton* self, QPaintEvent* event) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->setKLanguageButton_PaintEvent_IsBase(true);
        vklanguagebutton->paintEvent(event);
    } else {
        ((VirtualKLanguageButton*)self)->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KLanguageButton_OnPaintEvent(KLanguageButton* self, intptr_t slot) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->setKLanguageButton_PaintEvent_Callback(reinterpret_cast<VirtualKLanguageButton::KLanguageButton_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KLanguageButton_MoveEvent(KLanguageButton* self, QMoveEvent* event) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->moveEvent(event);
    } else {
        ((VirtualKLanguageButton*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void KLanguageButton_QBaseMoveEvent(KLanguageButton* self, QMoveEvent* event) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->setKLanguageButton_MoveEvent_IsBase(true);
        vklanguagebutton->moveEvent(event);
    } else {
        ((VirtualKLanguageButton*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KLanguageButton_OnMoveEvent(KLanguageButton* self, intptr_t slot) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->setKLanguageButton_MoveEvent_Callback(reinterpret_cast<VirtualKLanguageButton::KLanguageButton_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KLanguageButton_ResizeEvent(KLanguageButton* self, QResizeEvent* event) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->resizeEvent(event);
    } else {
        ((VirtualKLanguageButton*)self)->resizeEvent(event);
    }
}

// Base class handler implementation
void KLanguageButton_QBaseResizeEvent(KLanguageButton* self, QResizeEvent* event) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->setKLanguageButton_ResizeEvent_IsBase(true);
        vklanguagebutton->resizeEvent(event);
    } else {
        ((VirtualKLanguageButton*)self)->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KLanguageButton_OnResizeEvent(KLanguageButton* self, intptr_t slot) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->setKLanguageButton_ResizeEvent_Callback(reinterpret_cast<VirtualKLanguageButton::KLanguageButton_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KLanguageButton_CloseEvent(KLanguageButton* self, QCloseEvent* event) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->closeEvent(event);
    } else {
        ((VirtualKLanguageButton*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void KLanguageButton_QBaseCloseEvent(KLanguageButton* self, QCloseEvent* event) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->setKLanguageButton_CloseEvent_IsBase(true);
        vklanguagebutton->closeEvent(event);
    } else {
        ((VirtualKLanguageButton*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KLanguageButton_OnCloseEvent(KLanguageButton* self, intptr_t slot) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->setKLanguageButton_CloseEvent_Callback(reinterpret_cast<VirtualKLanguageButton::KLanguageButton_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KLanguageButton_ContextMenuEvent(KLanguageButton* self, QContextMenuEvent* event) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->contextMenuEvent(event);
    } else {
        ((VirtualKLanguageButton*)self)->contextMenuEvent(event);
    }
}

// Base class handler implementation
void KLanguageButton_QBaseContextMenuEvent(KLanguageButton* self, QContextMenuEvent* event) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->setKLanguageButton_ContextMenuEvent_IsBase(true);
        vklanguagebutton->contextMenuEvent(event);
    } else {
        ((VirtualKLanguageButton*)self)->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KLanguageButton_OnContextMenuEvent(KLanguageButton* self, intptr_t slot) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->setKLanguageButton_ContextMenuEvent_Callback(reinterpret_cast<VirtualKLanguageButton::KLanguageButton_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KLanguageButton_TabletEvent(KLanguageButton* self, QTabletEvent* event) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->tabletEvent(event);
    } else {
        ((VirtualKLanguageButton*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void KLanguageButton_QBaseTabletEvent(KLanguageButton* self, QTabletEvent* event) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->setKLanguageButton_TabletEvent_IsBase(true);
        vklanguagebutton->tabletEvent(event);
    } else {
        ((VirtualKLanguageButton*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KLanguageButton_OnTabletEvent(KLanguageButton* self, intptr_t slot) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->setKLanguageButton_TabletEvent_Callback(reinterpret_cast<VirtualKLanguageButton::KLanguageButton_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KLanguageButton_ActionEvent(KLanguageButton* self, QActionEvent* event) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->actionEvent(event);
    } else {
        ((VirtualKLanguageButton*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void KLanguageButton_QBaseActionEvent(KLanguageButton* self, QActionEvent* event) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->setKLanguageButton_ActionEvent_IsBase(true);
        vklanguagebutton->actionEvent(event);
    } else {
        ((VirtualKLanguageButton*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KLanguageButton_OnActionEvent(KLanguageButton* self, intptr_t slot) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->setKLanguageButton_ActionEvent_Callback(reinterpret_cast<VirtualKLanguageButton::KLanguageButton_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KLanguageButton_DragEnterEvent(KLanguageButton* self, QDragEnterEvent* event) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->dragEnterEvent(event);
    } else {
        ((VirtualKLanguageButton*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void KLanguageButton_QBaseDragEnterEvent(KLanguageButton* self, QDragEnterEvent* event) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->setKLanguageButton_DragEnterEvent_IsBase(true);
        vklanguagebutton->dragEnterEvent(event);
    } else {
        ((VirtualKLanguageButton*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KLanguageButton_OnDragEnterEvent(KLanguageButton* self, intptr_t slot) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->setKLanguageButton_DragEnterEvent_Callback(reinterpret_cast<VirtualKLanguageButton::KLanguageButton_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KLanguageButton_DragMoveEvent(KLanguageButton* self, QDragMoveEvent* event) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->dragMoveEvent(event);
    } else {
        ((VirtualKLanguageButton*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void KLanguageButton_QBaseDragMoveEvent(KLanguageButton* self, QDragMoveEvent* event) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->setKLanguageButton_DragMoveEvent_IsBase(true);
        vklanguagebutton->dragMoveEvent(event);
    } else {
        ((VirtualKLanguageButton*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KLanguageButton_OnDragMoveEvent(KLanguageButton* self, intptr_t slot) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->setKLanguageButton_DragMoveEvent_Callback(reinterpret_cast<VirtualKLanguageButton::KLanguageButton_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KLanguageButton_DragLeaveEvent(KLanguageButton* self, QDragLeaveEvent* event) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->dragLeaveEvent(event);
    } else {
        ((VirtualKLanguageButton*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void KLanguageButton_QBaseDragLeaveEvent(KLanguageButton* self, QDragLeaveEvent* event) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->setKLanguageButton_DragLeaveEvent_IsBase(true);
        vklanguagebutton->dragLeaveEvent(event);
    } else {
        ((VirtualKLanguageButton*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KLanguageButton_OnDragLeaveEvent(KLanguageButton* self, intptr_t slot) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->setKLanguageButton_DragLeaveEvent_Callback(reinterpret_cast<VirtualKLanguageButton::KLanguageButton_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KLanguageButton_DropEvent(KLanguageButton* self, QDropEvent* event) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->dropEvent(event);
    } else {
        ((VirtualKLanguageButton*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void KLanguageButton_QBaseDropEvent(KLanguageButton* self, QDropEvent* event) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->setKLanguageButton_DropEvent_IsBase(true);
        vklanguagebutton->dropEvent(event);
    } else {
        ((VirtualKLanguageButton*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KLanguageButton_OnDropEvent(KLanguageButton* self, intptr_t slot) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->setKLanguageButton_DropEvent_Callback(reinterpret_cast<VirtualKLanguageButton::KLanguageButton_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KLanguageButton_ShowEvent(KLanguageButton* self, QShowEvent* event) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->showEvent(event);
    } else {
        ((VirtualKLanguageButton*)self)->showEvent(event);
    }
}

// Base class handler implementation
void KLanguageButton_QBaseShowEvent(KLanguageButton* self, QShowEvent* event) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->setKLanguageButton_ShowEvent_IsBase(true);
        vklanguagebutton->showEvent(event);
    } else {
        ((VirtualKLanguageButton*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KLanguageButton_OnShowEvent(KLanguageButton* self, intptr_t slot) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->setKLanguageButton_ShowEvent_Callback(reinterpret_cast<VirtualKLanguageButton::KLanguageButton_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KLanguageButton_HideEvent(KLanguageButton* self, QHideEvent* event) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->hideEvent(event);
    } else {
        ((VirtualKLanguageButton*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void KLanguageButton_QBaseHideEvent(KLanguageButton* self, QHideEvent* event) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->setKLanguageButton_HideEvent_IsBase(true);
        vklanguagebutton->hideEvent(event);
    } else {
        ((VirtualKLanguageButton*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KLanguageButton_OnHideEvent(KLanguageButton* self, intptr_t slot) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->setKLanguageButton_HideEvent_Callback(reinterpret_cast<VirtualKLanguageButton::KLanguageButton_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KLanguageButton_NativeEvent(KLanguageButton* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        return vklanguagebutton->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKLanguageButton*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool KLanguageButton_QBaseNativeEvent(KLanguageButton* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->setKLanguageButton_NativeEvent_IsBase(true);
        return vklanguagebutton->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKLanguageButton*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void KLanguageButton_OnNativeEvent(KLanguageButton* self, intptr_t slot) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->setKLanguageButton_NativeEvent_Callback(reinterpret_cast<VirtualKLanguageButton::KLanguageButton_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KLanguageButton_ChangeEvent(KLanguageButton* self, QEvent* param1) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->changeEvent(param1);
    } else {
        ((VirtualKLanguageButton*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void KLanguageButton_QBaseChangeEvent(KLanguageButton* self, QEvent* param1) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->setKLanguageButton_ChangeEvent_IsBase(true);
        vklanguagebutton->changeEvent(param1);
    } else {
        ((VirtualKLanguageButton*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KLanguageButton_OnChangeEvent(KLanguageButton* self, intptr_t slot) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->setKLanguageButton_ChangeEvent_Callback(reinterpret_cast<VirtualKLanguageButton::KLanguageButton_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int KLanguageButton_Metric(const KLanguageButton* self, int param1) {
    auto* vklanguagebutton = const_cast<VirtualKLanguageButton*>(dynamic_cast<const VirtualKLanguageButton*>(self));
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        return vklanguagebutton->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKLanguageButton*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int KLanguageButton_QBaseMetric(const KLanguageButton* self, int param1) {
    auto* vklanguagebutton = const_cast<VirtualKLanguageButton*>(dynamic_cast<const VirtualKLanguageButton*>(self));
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->setKLanguageButton_Metric_IsBase(true);
        return vklanguagebutton->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKLanguageButton*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KLanguageButton_OnMetric(const KLanguageButton* self, intptr_t slot) {
    auto* vklanguagebutton = const_cast<VirtualKLanguageButton*>(dynamic_cast<const VirtualKLanguageButton*>(self));
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->setKLanguageButton_Metric_Callback(reinterpret_cast<VirtualKLanguageButton::KLanguageButton_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void KLanguageButton_InitPainter(const KLanguageButton* self, QPainter* painter) {
    auto* vklanguagebutton = const_cast<VirtualKLanguageButton*>(dynamic_cast<const VirtualKLanguageButton*>(self));
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->initPainter(painter);
    } else {
        ((VirtualKLanguageButton*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void KLanguageButton_QBaseInitPainter(const KLanguageButton* self, QPainter* painter) {
    auto* vklanguagebutton = const_cast<VirtualKLanguageButton*>(dynamic_cast<const VirtualKLanguageButton*>(self));
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->setKLanguageButton_InitPainter_IsBase(true);
        vklanguagebutton->initPainter(painter);
    } else {
        ((VirtualKLanguageButton*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void KLanguageButton_OnInitPainter(const KLanguageButton* self, intptr_t slot) {
    auto* vklanguagebutton = const_cast<VirtualKLanguageButton*>(dynamic_cast<const VirtualKLanguageButton*>(self));
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->setKLanguageButton_InitPainter_Callback(reinterpret_cast<VirtualKLanguageButton::KLanguageButton_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* KLanguageButton_Redirected(const KLanguageButton* self, QPoint* offset) {
    auto* vklanguagebutton = const_cast<VirtualKLanguageButton*>(dynamic_cast<const VirtualKLanguageButton*>(self));
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        return vklanguagebutton->redirected(offset);
    } else {
        return ((VirtualKLanguageButton*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* KLanguageButton_QBaseRedirected(const KLanguageButton* self, QPoint* offset) {
    auto* vklanguagebutton = const_cast<VirtualKLanguageButton*>(dynamic_cast<const VirtualKLanguageButton*>(self));
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->setKLanguageButton_Redirected_IsBase(true);
        return vklanguagebutton->redirected(offset);
    } else {
        return ((VirtualKLanguageButton*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void KLanguageButton_OnRedirected(const KLanguageButton* self, intptr_t slot) {
    auto* vklanguagebutton = const_cast<VirtualKLanguageButton*>(dynamic_cast<const VirtualKLanguageButton*>(self));
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->setKLanguageButton_Redirected_Callback(reinterpret_cast<VirtualKLanguageButton::KLanguageButton_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* KLanguageButton_SharedPainter(const KLanguageButton* self) {
    auto* vklanguagebutton = const_cast<VirtualKLanguageButton*>(dynamic_cast<const VirtualKLanguageButton*>(self));
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        return vklanguagebutton->sharedPainter();
    } else {
        return ((VirtualKLanguageButton*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* KLanguageButton_QBaseSharedPainter(const KLanguageButton* self) {
    auto* vklanguagebutton = const_cast<VirtualKLanguageButton*>(dynamic_cast<const VirtualKLanguageButton*>(self));
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->setKLanguageButton_SharedPainter_IsBase(true);
        return vklanguagebutton->sharedPainter();
    } else {
        return ((VirtualKLanguageButton*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void KLanguageButton_OnSharedPainter(const KLanguageButton* self, intptr_t slot) {
    auto* vklanguagebutton = const_cast<VirtualKLanguageButton*>(dynamic_cast<const VirtualKLanguageButton*>(self));
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->setKLanguageButton_SharedPainter_Callback(reinterpret_cast<VirtualKLanguageButton::KLanguageButton_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void KLanguageButton_InputMethodEvent(KLanguageButton* self, QInputMethodEvent* param1) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->inputMethodEvent(param1);
    } else {
        ((VirtualKLanguageButton*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void KLanguageButton_QBaseInputMethodEvent(KLanguageButton* self, QInputMethodEvent* param1) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->setKLanguageButton_InputMethodEvent_IsBase(true);
        vklanguagebutton->inputMethodEvent(param1);
    } else {
        ((VirtualKLanguageButton*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KLanguageButton_OnInputMethodEvent(KLanguageButton* self, intptr_t slot) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->setKLanguageButton_InputMethodEvent_Callback(reinterpret_cast<VirtualKLanguageButton::KLanguageButton_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* KLanguageButton_InputMethodQuery(const KLanguageButton* self, int param1) {
    auto* vklanguagebutton = const_cast<VirtualKLanguageButton*>(dynamic_cast<const VirtualKLanguageButton*>(self));
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        return new QVariant(vklanguagebutton->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKLanguageButton*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* KLanguageButton_QBaseInputMethodQuery(const KLanguageButton* self, int param1) {
    auto* vklanguagebutton = const_cast<VirtualKLanguageButton*>(dynamic_cast<const VirtualKLanguageButton*>(self));
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->setKLanguageButton_InputMethodQuery_IsBase(true);
        return new QVariant(vklanguagebutton->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKLanguageButton*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void KLanguageButton_OnInputMethodQuery(const KLanguageButton* self, intptr_t slot) {
    auto* vklanguagebutton = const_cast<VirtualKLanguageButton*>(dynamic_cast<const VirtualKLanguageButton*>(self));
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->setKLanguageButton_InputMethodQuery_Callback(reinterpret_cast<VirtualKLanguageButton::KLanguageButton_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool KLanguageButton_FocusNextPrevChild(KLanguageButton* self, bool next) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        return vklanguagebutton->focusNextPrevChild(next);
    } else {
        return ((VirtualKLanguageButton*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool KLanguageButton_QBaseFocusNextPrevChild(KLanguageButton* self, bool next) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->setKLanguageButton_FocusNextPrevChild_IsBase(true);
        return vklanguagebutton->focusNextPrevChild(next);
    } else {
        return ((VirtualKLanguageButton*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void KLanguageButton_OnFocusNextPrevChild(KLanguageButton* self, intptr_t slot) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->setKLanguageButton_FocusNextPrevChild_Callback(reinterpret_cast<VirtualKLanguageButton::KLanguageButton_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KLanguageButton_EventFilter(KLanguageButton* self, QObject* watched, QEvent* event) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        return vklanguagebutton->eventFilter(watched, event);
    } else {
        return self->KLanguageButton::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KLanguageButton_QBaseEventFilter(KLanguageButton* self, QObject* watched, QEvent* event) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->setKLanguageButton_EventFilter_IsBase(true);
        return vklanguagebutton->eventFilter(watched, event);
    } else {
        return self->KLanguageButton::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KLanguageButton_OnEventFilter(KLanguageButton* self, intptr_t slot) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->setKLanguageButton_EventFilter_Callback(reinterpret_cast<VirtualKLanguageButton::KLanguageButton_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KLanguageButton_TimerEvent(KLanguageButton* self, QTimerEvent* event) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->timerEvent(event);
    } else {
        ((VirtualKLanguageButton*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KLanguageButton_QBaseTimerEvent(KLanguageButton* self, QTimerEvent* event) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->setKLanguageButton_TimerEvent_IsBase(true);
        vklanguagebutton->timerEvent(event);
    } else {
        ((VirtualKLanguageButton*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KLanguageButton_OnTimerEvent(KLanguageButton* self, intptr_t slot) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->setKLanguageButton_TimerEvent_Callback(reinterpret_cast<VirtualKLanguageButton::KLanguageButton_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KLanguageButton_ChildEvent(KLanguageButton* self, QChildEvent* event) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->childEvent(event);
    } else {
        ((VirtualKLanguageButton*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KLanguageButton_QBaseChildEvent(KLanguageButton* self, QChildEvent* event) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->setKLanguageButton_ChildEvent_IsBase(true);
        vklanguagebutton->childEvent(event);
    } else {
        ((VirtualKLanguageButton*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KLanguageButton_OnChildEvent(KLanguageButton* self, intptr_t slot) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->setKLanguageButton_ChildEvent_Callback(reinterpret_cast<VirtualKLanguageButton::KLanguageButton_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KLanguageButton_CustomEvent(KLanguageButton* self, QEvent* event) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->customEvent(event);
    } else {
        ((VirtualKLanguageButton*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KLanguageButton_QBaseCustomEvent(KLanguageButton* self, QEvent* event) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->setKLanguageButton_CustomEvent_IsBase(true);
        vklanguagebutton->customEvent(event);
    } else {
        ((VirtualKLanguageButton*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KLanguageButton_OnCustomEvent(KLanguageButton* self, intptr_t slot) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->setKLanguageButton_CustomEvent_Callback(reinterpret_cast<VirtualKLanguageButton::KLanguageButton_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KLanguageButton_ConnectNotify(KLanguageButton* self, const QMetaMethod* signal) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->connectNotify(*signal);
    } else {
        ((VirtualKLanguageButton*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KLanguageButton_QBaseConnectNotify(KLanguageButton* self, const QMetaMethod* signal) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->setKLanguageButton_ConnectNotify_IsBase(true);
        vklanguagebutton->connectNotify(*signal);
    } else {
        ((VirtualKLanguageButton*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KLanguageButton_OnConnectNotify(KLanguageButton* self, intptr_t slot) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->setKLanguageButton_ConnectNotify_Callback(reinterpret_cast<VirtualKLanguageButton::KLanguageButton_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KLanguageButton_DisconnectNotify(KLanguageButton* self, const QMetaMethod* signal) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->disconnectNotify(*signal);
    } else {
        ((VirtualKLanguageButton*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KLanguageButton_QBaseDisconnectNotify(KLanguageButton* self, const QMetaMethod* signal) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->setKLanguageButton_DisconnectNotify_IsBase(true);
        vklanguagebutton->disconnectNotify(*signal);
    } else {
        ((VirtualKLanguageButton*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KLanguageButton_OnDisconnectNotify(KLanguageButton* self, intptr_t slot) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->setKLanguageButton_DisconnectNotify_Callback(reinterpret_cast<VirtualKLanguageButton::KLanguageButton_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KLanguageButton_UpdateMicroFocus(KLanguageButton* self) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->updateMicroFocus();
    } else {
        ((VirtualKLanguageButton*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void KLanguageButton_QBaseUpdateMicroFocus(KLanguageButton* self) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->setKLanguageButton_UpdateMicroFocus_IsBase(true);
        vklanguagebutton->updateMicroFocus();
    } else {
        ((VirtualKLanguageButton*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void KLanguageButton_OnUpdateMicroFocus(KLanguageButton* self, intptr_t slot) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->setKLanguageButton_UpdateMicroFocus_Callback(reinterpret_cast<VirtualKLanguageButton::KLanguageButton_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void KLanguageButton_Create(KLanguageButton* self) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->create();
    } else {
        ((VirtualKLanguageButton*)self)->create();
    }
}

// Base class handler implementation
void KLanguageButton_QBaseCreate(KLanguageButton* self) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->setKLanguageButton_Create_IsBase(true);
        vklanguagebutton->create();
    } else {
        ((VirtualKLanguageButton*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void KLanguageButton_OnCreate(KLanguageButton* self, intptr_t slot) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->setKLanguageButton_Create_Callback(reinterpret_cast<VirtualKLanguageButton::KLanguageButton_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void KLanguageButton_Destroy(KLanguageButton* self) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->destroy();
    } else {
        ((VirtualKLanguageButton*)self)->destroy();
    }
}

// Base class handler implementation
void KLanguageButton_QBaseDestroy(KLanguageButton* self) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->setKLanguageButton_Destroy_IsBase(true);
        vklanguagebutton->destroy();
    } else {
        ((VirtualKLanguageButton*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void KLanguageButton_OnDestroy(KLanguageButton* self, intptr_t slot) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->setKLanguageButton_Destroy_Callback(reinterpret_cast<VirtualKLanguageButton::KLanguageButton_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool KLanguageButton_FocusNextChild(KLanguageButton* self) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        return vklanguagebutton->focusNextChild();
    } else {
        return ((VirtualKLanguageButton*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool KLanguageButton_QBaseFocusNextChild(KLanguageButton* self) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->setKLanguageButton_FocusNextChild_IsBase(true);
        return vklanguagebutton->focusNextChild();
    } else {
        return ((VirtualKLanguageButton*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KLanguageButton_OnFocusNextChild(KLanguageButton* self, intptr_t slot) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->setKLanguageButton_FocusNextChild_Callback(reinterpret_cast<VirtualKLanguageButton::KLanguageButton_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KLanguageButton_FocusPreviousChild(KLanguageButton* self) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        return vklanguagebutton->focusPreviousChild();
    } else {
        return ((VirtualKLanguageButton*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool KLanguageButton_QBaseFocusPreviousChild(KLanguageButton* self) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->setKLanguageButton_FocusPreviousChild_IsBase(true);
        return vklanguagebutton->focusPreviousChild();
    } else {
        return ((VirtualKLanguageButton*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KLanguageButton_OnFocusPreviousChild(KLanguageButton* self, intptr_t slot) {
    auto* vklanguagebutton = dynamic_cast<VirtualKLanguageButton*>(self);
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->setKLanguageButton_FocusPreviousChild_Callback(reinterpret_cast<VirtualKLanguageButton::KLanguageButton_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KLanguageButton_Sender(const KLanguageButton* self) {
    auto* vklanguagebutton = const_cast<VirtualKLanguageButton*>(dynamic_cast<const VirtualKLanguageButton*>(self));
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        return vklanguagebutton->sender();
    } else {
        return ((VirtualKLanguageButton*)self)->sender();
    }
}

// Base class handler implementation
QObject* KLanguageButton_QBaseSender(const KLanguageButton* self) {
    auto* vklanguagebutton = const_cast<VirtualKLanguageButton*>(dynamic_cast<const VirtualKLanguageButton*>(self));
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->setKLanguageButton_Sender_IsBase(true);
        return vklanguagebutton->sender();
    } else {
        return ((VirtualKLanguageButton*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KLanguageButton_OnSender(const KLanguageButton* self, intptr_t slot) {
    auto* vklanguagebutton = const_cast<VirtualKLanguageButton*>(dynamic_cast<const VirtualKLanguageButton*>(self));
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->setKLanguageButton_Sender_Callback(reinterpret_cast<VirtualKLanguageButton::KLanguageButton_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KLanguageButton_SenderSignalIndex(const KLanguageButton* self) {
    auto* vklanguagebutton = const_cast<VirtualKLanguageButton*>(dynamic_cast<const VirtualKLanguageButton*>(self));
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        return vklanguagebutton->senderSignalIndex();
    } else {
        return ((VirtualKLanguageButton*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KLanguageButton_QBaseSenderSignalIndex(const KLanguageButton* self) {
    auto* vklanguagebutton = const_cast<VirtualKLanguageButton*>(dynamic_cast<const VirtualKLanguageButton*>(self));
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->setKLanguageButton_SenderSignalIndex_IsBase(true);
        return vklanguagebutton->senderSignalIndex();
    } else {
        return ((VirtualKLanguageButton*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KLanguageButton_OnSenderSignalIndex(const KLanguageButton* self, intptr_t slot) {
    auto* vklanguagebutton = const_cast<VirtualKLanguageButton*>(dynamic_cast<const VirtualKLanguageButton*>(self));
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->setKLanguageButton_SenderSignalIndex_Callback(reinterpret_cast<VirtualKLanguageButton::KLanguageButton_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KLanguageButton_Receivers(const KLanguageButton* self, const char* signal) {
    auto* vklanguagebutton = const_cast<VirtualKLanguageButton*>(dynamic_cast<const VirtualKLanguageButton*>(self));
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        return vklanguagebutton->receivers(signal);
    } else {
        return ((VirtualKLanguageButton*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KLanguageButton_QBaseReceivers(const KLanguageButton* self, const char* signal) {
    auto* vklanguagebutton = const_cast<VirtualKLanguageButton*>(dynamic_cast<const VirtualKLanguageButton*>(self));
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->setKLanguageButton_Receivers_IsBase(true);
        return vklanguagebutton->receivers(signal);
    } else {
        return ((VirtualKLanguageButton*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KLanguageButton_OnReceivers(const KLanguageButton* self, intptr_t slot) {
    auto* vklanguagebutton = const_cast<VirtualKLanguageButton*>(dynamic_cast<const VirtualKLanguageButton*>(self));
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->setKLanguageButton_Receivers_Callback(reinterpret_cast<VirtualKLanguageButton::KLanguageButton_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KLanguageButton_IsSignalConnected(const KLanguageButton* self, const QMetaMethod* signal) {
    auto* vklanguagebutton = const_cast<VirtualKLanguageButton*>(dynamic_cast<const VirtualKLanguageButton*>(self));
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        return vklanguagebutton->isSignalConnected(*signal);
    } else {
        return ((VirtualKLanguageButton*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KLanguageButton_QBaseIsSignalConnected(const KLanguageButton* self, const QMetaMethod* signal) {
    auto* vklanguagebutton = const_cast<VirtualKLanguageButton*>(dynamic_cast<const VirtualKLanguageButton*>(self));
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->setKLanguageButton_IsSignalConnected_IsBase(true);
        return vklanguagebutton->isSignalConnected(*signal);
    } else {
        return ((VirtualKLanguageButton*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KLanguageButton_OnIsSignalConnected(const KLanguageButton* self, intptr_t slot) {
    auto* vklanguagebutton = const_cast<VirtualKLanguageButton*>(dynamic_cast<const VirtualKLanguageButton*>(self));
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->setKLanguageButton_IsSignalConnected_Callback(reinterpret_cast<VirtualKLanguageButton::KLanguageButton_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double KLanguageButton_GetDecodedMetricF(const KLanguageButton* self, int metricA, int metricB) {
    auto* vklanguagebutton = const_cast<VirtualKLanguageButton*>(dynamic_cast<const VirtualKLanguageButton*>(self));
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        return vklanguagebutton->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKLanguageButton*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double KLanguageButton_QBaseGetDecodedMetricF(const KLanguageButton* self, int metricA, int metricB) {
    auto* vklanguagebutton = const_cast<VirtualKLanguageButton*>(dynamic_cast<const VirtualKLanguageButton*>(self));
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->setKLanguageButton_GetDecodedMetricF_IsBase(true);
        return vklanguagebutton->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKLanguageButton*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void KLanguageButton_OnGetDecodedMetricF(const KLanguageButton* self, intptr_t slot) {
    auto* vklanguagebutton = const_cast<VirtualKLanguageButton*>(dynamic_cast<const VirtualKLanguageButton*>(self));
    if (vklanguagebutton && vklanguagebutton->isVirtualKLanguageButton) {
        vklanguagebutton->setKLanguageButton_GetDecodedMetricF_Callback(reinterpret_cast<VirtualKLanguageButton::KLanguageButton_GetDecodedMetricF_Callback>(slot));
    }
}

void KLanguageButton_Delete(KLanguageButton* self) {
    delete self;
}
