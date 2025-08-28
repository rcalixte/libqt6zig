#include <KUrlLabel>
#include <QActionEvent>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QColor>
#include <QContextMenuEvent>
#include <QCursor>
#include <QDragEnterEvent>
#include <QDragLeaveEvent>
#include <QDragMoveEvent>
#include <QDropEvent>
#include <QEnterEvent>
#include <QEvent>
#include <QFocusEvent>
#include <QFont>
#include <QFrame>
#include <QHideEvent>
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QLabel>
#include <QMetaMethod>
#include <QMetaObject>
#include <QMouseEvent>
#include <QMoveEvent>
#include <QObject>
#include <QPaintDevice>
#include <QPaintEngine>
#include <QPaintEvent>
#include <QPainter>
#include <QPixmap>
#include <QPoint>
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyleOptionFrame>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <kurllabel.h>
#include "libkurllabel.h"
#include "libkurllabel.hxx"

KUrlLabel* KUrlLabel_new(QWidget* parent) {
    return new VirtualKUrlLabel(parent);
}

KUrlLabel* KUrlLabel_new2() {
    return new VirtualKUrlLabel();
}

KUrlLabel* KUrlLabel_new3(const libqt_string url) {
    QString url_QString = QString::fromUtf8(url.data, url.len);
    return new VirtualKUrlLabel(url_QString);
}

KUrlLabel* KUrlLabel_new4(const libqt_string url, const libqt_string text) {
    QString url_QString = QString::fromUtf8(url.data, url.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualKUrlLabel(url_QString, text_QString);
}

KUrlLabel* KUrlLabel_new5(const libqt_string url, const libqt_string text, QWidget* parent) {
    QString url_QString = QString::fromUtf8(url.data, url.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualKUrlLabel(url_QString, text_QString, parent);
}

QMetaObject* KUrlLabel_MetaObject(const KUrlLabel* self) {
    return (QMetaObject*)self->metaObject();
}

void* KUrlLabel_Metacast(KUrlLabel* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KUrlLabel_Metacall(KUrlLabel* self, int param1, int param2, void** param3) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKUrlLabel*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KUrlLabel_Tr(const char* s) {
    QString _ret = KUrlLabel::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KUrlLabel_Url(const KUrlLabel* self) {
    QString _ret = self->url();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KUrlLabel_TipText(const KUrlLabel* self) {
    QString _ret = self->tipText();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool KUrlLabel_UseTips(const KUrlLabel* self) {
    return self->useTips();
}

bool KUrlLabel_UseCursor(const KUrlLabel* self) {
    return self->useCursor();
}

bool KUrlLabel_IsGlowEnabled(const KUrlLabel* self) {
    return self->isGlowEnabled();
}

bool KUrlLabel_IsFloatEnabled(const KUrlLabel* self) {
    return self->isFloatEnabled();
}

QPixmap* KUrlLabel_AlternatePixmap(const KUrlLabel* self) {
    return (QPixmap*)self->alternatePixmap();
}

void KUrlLabel_SetUnderline(KUrlLabel* self) {
    self->setUnderline();
}

void KUrlLabel_SetUrl(KUrlLabel* self, const libqt_string url) {
    QString url_QString = QString::fromUtf8(url.data, url.len);
    self->setUrl(url_QString);
}

void KUrlLabel_SetFont(KUrlLabel* self, const QFont* font) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        self->setFont(*font);
    } else {
        ((VirtualKUrlLabel*)self)->setFont(*font);
    }
}

void KUrlLabel_SetUseTips(KUrlLabel* self) {
    self->setUseTips();
}

void KUrlLabel_SetTipText(KUrlLabel* self, const libqt_string tip) {
    QString tip_QString = QString::fromUtf8(tip.data, tip.len);
    self->setTipText(tip_QString);
}

void KUrlLabel_SetHighlightedColor(KUrlLabel* self, const QColor* highcolor) {
    self->setHighlightedColor(*highcolor);
}

void KUrlLabel_SetHighlightedColor2(KUrlLabel* self, const libqt_string highcolor) {
    QString highcolor_QString = QString::fromUtf8(highcolor.data, highcolor.len);
    self->setHighlightedColor(highcolor_QString);
}

void KUrlLabel_SetSelectedColor(KUrlLabel* self, const QColor* color) {
    self->setSelectedColor(*color);
}

void KUrlLabel_SetSelectedColor2(KUrlLabel* self, const libqt_string color) {
    QString color_QString = QString::fromUtf8(color.data, color.len);
    self->setSelectedColor(color_QString);
}

void KUrlLabel_SetUseCursor(KUrlLabel* self, bool on) {
    self->setUseCursor(on);
}

void KUrlLabel_SetGlowEnabled(KUrlLabel* self) {
    self->setGlowEnabled();
}

void KUrlLabel_SetFloatEnabled(KUrlLabel* self) {
    self->setFloatEnabled();
}

void KUrlLabel_SetAlternatePixmap(KUrlLabel* self, const QPixmap* pixmap) {
    self->setAlternatePixmap(*pixmap);
}

void KUrlLabel_EnteredUrl(KUrlLabel* self) {
    self->enteredUrl();
}

void KUrlLabel_Connect_EnteredUrl(KUrlLabel* self, intptr_t slot) {
    void (*slotFunc)(KUrlLabel*) = reinterpret_cast<void (*)(KUrlLabel*)>(slot);
    KUrlLabel::connect(self, &KUrlLabel::enteredUrl, [self, slotFunc]() {
        slotFunc(self);
    });
}

void KUrlLabel_LeftUrl(KUrlLabel* self) {
    self->leftUrl();
}

void KUrlLabel_Connect_LeftUrl(KUrlLabel* self, intptr_t slot) {
    void (*slotFunc)(KUrlLabel*) = reinterpret_cast<void (*)(KUrlLabel*)>(slot);
    KUrlLabel::connect(self, &KUrlLabel::leftUrl, [self, slotFunc]() {
        slotFunc(self);
    });
}

void KUrlLabel_LeftClickedUrl(KUrlLabel* self) {
    self->leftClickedUrl();
}

void KUrlLabel_Connect_LeftClickedUrl(KUrlLabel* self, intptr_t slot) {
    void (*slotFunc)(KUrlLabel*) = reinterpret_cast<void (*)(KUrlLabel*)>(slot);
    KUrlLabel::connect(self, &KUrlLabel::leftClickedUrl, [self, slotFunc]() {
        slotFunc(self);
    });
}

void KUrlLabel_RightClickedUrl(KUrlLabel* self) {
    self->rightClickedUrl();
}

void KUrlLabel_Connect_RightClickedUrl(KUrlLabel* self, intptr_t slot) {
    void (*slotFunc)(KUrlLabel*) = reinterpret_cast<void (*)(KUrlLabel*)>(slot);
    KUrlLabel::connect(self, &KUrlLabel::rightClickedUrl, [self, slotFunc]() {
        slotFunc(self);
    });
}

void KUrlLabel_MiddleClickedUrl(KUrlLabel* self) {
    self->middleClickedUrl();
}

void KUrlLabel_Connect_MiddleClickedUrl(KUrlLabel* self, intptr_t slot) {
    void (*slotFunc)(KUrlLabel*) = reinterpret_cast<void (*)(KUrlLabel*)>(slot);
    KUrlLabel::connect(self, &KUrlLabel::middleClickedUrl, [self, slotFunc]() {
        slotFunc(self);
    });
}

void KUrlLabel_MouseReleaseEvent(KUrlLabel* self, QMouseEvent* param1) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->mouseReleaseEvent(param1);
    }
}

void KUrlLabel_EnterEvent(KUrlLabel* self, QEnterEvent* event) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->enterEvent(event);
    }
}

void KUrlLabel_LeaveEvent(KUrlLabel* self, QEvent* param1) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->leaveEvent(param1);
    }
}

bool KUrlLabel_Event(KUrlLabel* self, QEvent* param1) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        return vkurllabel->event(param1);
    }
    return {};
}

libqt_string KUrlLabel_Tr2(const char* s, const char* c) {
    QString _ret = KUrlLabel::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KUrlLabel_Tr3(const char* s, const char* c, int n) {
    QString _ret = KUrlLabel::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KUrlLabel_SetUnderline1(KUrlLabel* self, bool on) {
    self->setUnderline(on);
}

void KUrlLabel_SetUseTips1(KUrlLabel* self, bool on) {
    self->setUseTips(on);
}

void KUrlLabel_SetUseCursor2(KUrlLabel* self, bool on, QCursor* cursor) {
    self->setUseCursor(on, cursor);
}

void KUrlLabel_SetGlowEnabled1(KUrlLabel* self, bool glow) {
    self->setGlowEnabled(glow);
}

void KUrlLabel_SetFloatEnabled1(KUrlLabel* self, bool do_float) {
    self->setFloatEnabled(do_float);
}

// Base class handler implementation
int KUrlLabel_QBaseMetacall(KUrlLabel* self, int param1, int param2, void** param3) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->setKUrlLabel_Metacall_IsBase(true);
        return vkurllabel->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KUrlLabel::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlLabel_OnMetacall(KUrlLabel* self, intptr_t slot) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->setKUrlLabel_Metacall_Callback(reinterpret_cast<VirtualKUrlLabel::KUrlLabel_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
void KUrlLabel_QBaseSetFont(KUrlLabel* self, const QFont* font) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->setKUrlLabel_SetFont_IsBase(true);
        vkurllabel->setFont(*font);
    } else {
        self->KUrlLabel::setFont(*font);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlLabel_OnSetFont(KUrlLabel* self, intptr_t slot) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->setKUrlLabel_SetFont_Callback(reinterpret_cast<VirtualKUrlLabel::KUrlLabel_SetFont_Callback>(slot));
    }
}

// Base class handler implementation
void KUrlLabel_QBaseMouseReleaseEvent(KUrlLabel* self, QMouseEvent* param1) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->setKUrlLabel_MouseReleaseEvent_IsBase(true);
        vkurllabel->mouseReleaseEvent(param1);
    } else {
        ((VirtualKUrlLabel*)self)->mouseReleaseEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlLabel_OnMouseReleaseEvent(KUrlLabel* self, intptr_t slot) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->setKUrlLabel_MouseReleaseEvent_Callback(reinterpret_cast<VirtualKUrlLabel::KUrlLabel_MouseReleaseEvent_Callback>(slot));
    }
}

// Base class handler implementation
void KUrlLabel_QBaseEnterEvent(KUrlLabel* self, QEnterEvent* event) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->setKUrlLabel_EnterEvent_IsBase(true);
        vkurllabel->enterEvent(event);
    } else {
        ((VirtualKUrlLabel*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlLabel_OnEnterEvent(KUrlLabel* self, intptr_t slot) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->setKUrlLabel_EnterEvent_Callback(reinterpret_cast<VirtualKUrlLabel::KUrlLabel_EnterEvent_Callback>(slot));
    }
}

// Base class handler implementation
void KUrlLabel_QBaseLeaveEvent(KUrlLabel* self, QEvent* param1) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->setKUrlLabel_LeaveEvent_IsBase(true);
        vkurllabel->leaveEvent(param1);
    } else {
        ((VirtualKUrlLabel*)self)->leaveEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlLabel_OnLeaveEvent(KUrlLabel* self, intptr_t slot) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->setKUrlLabel_LeaveEvent_Callback(reinterpret_cast<VirtualKUrlLabel::KUrlLabel_LeaveEvent_Callback>(slot));
    }
}

// Base class handler implementation
bool KUrlLabel_QBaseEvent(KUrlLabel* self, QEvent* param1) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->setKUrlLabel_Event_IsBase(true);
        return vkurllabel->event(param1);
    } else {
        return ((VirtualKUrlLabel*)self)->event(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlLabel_OnEvent(KUrlLabel* self, intptr_t slot) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->setKUrlLabel_Event_Callback(reinterpret_cast<VirtualKUrlLabel::KUrlLabel_Event_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KUrlLabel_SizeHint(const KUrlLabel* self) {
    auto* vkurllabel = const_cast<VirtualKUrlLabel*>(dynamic_cast<const VirtualKUrlLabel*>(self));
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        return new QSize(vkurllabel->sizeHint());
    } else {
        return new QSize(((VirtualKUrlLabel*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* KUrlLabel_QBaseSizeHint(const KUrlLabel* self) {
    auto* vkurllabel = const_cast<VirtualKUrlLabel*>(dynamic_cast<const VirtualKUrlLabel*>(self));
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->setKUrlLabel_SizeHint_IsBase(true);
        return new QSize(vkurllabel->sizeHint());
    } else {
        return new QSize(((VirtualKUrlLabel*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlLabel_OnSizeHint(const KUrlLabel* self, intptr_t slot) {
    auto* vkurllabel = const_cast<VirtualKUrlLabel*>(dynamic_cast<const VirtualKUrlLabel*>(self));
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->setKUrlLabel_SizeHint_Callback(reinterpret_cast<VirtualKUrlLabel::KUrlLabel_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KUrlLabel_MinimumSizeHint(const KUrlLabel* self) {
    auto* vkurllabel = const_cast<VirtualKUrlLabel*>(dynamic_cast<const VirtualKUrlLabel*>(self));
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        return new QSize(vkurllabel->minimumSizeHint());
    } else {
        return new QSize(((VirtualKUrlLabel*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* KUrlLabel_QBaseMinimumSizeHint(const KUrlLabel* self) {
    auto* vkurllabel = const_cast<VirtualKUrlLabel*>(dynamic_cast<const VirtualKUrlLabel*>(self));
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->setKUrlLabel_MinimumSizeHint_IsBase(true);
        return new QSize(vkurllabel->minimumSizeHint());
    } else {
        return new QSize(((VirtualKUrlLabel*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlLabel_OnMinimumSizeHint(const KUrlLabel* self, intptr_t slot) {
    auto* vkurllabel = const_cast<VirtualKUrlLabel*>(dynamic_cast<const VirtualKUrlLabel*>(self));
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->setKUrlLabel_MinimumSizeHint_Callback(reinterpret_cast<VirtualKUrlLabel::KUrlLabel_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
int KUrlLabel_HeightForWidth(const KUrlLabel* self, int param1) {
    auto* vkurllabel = const_cast<VirtualKUrlLabel*>(dynamic_cast<const VirtualKUrlLabel*>(self));
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        return vkurllabel->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KUrlLabel::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int KUrlLabel_QBaseHeightForWidth(const KUrlLabel* self, int param1) {
    auto* vkurllabel = const_cast<VirtualKUrlLabel*>(dynamic_cast<const VirtualKUrlLabel*>(self));
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->setKUrlLabel_HeightForWidth_IsBase(true);
        return vkurllabel->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KUrlLabel::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlLabel_OnHeightForWidth(const KUrlLabel* self, intptr_t slot) {
    auto* vkurllabel = const_cast<VirtualKUrlLabel*>(dynamic_cast<const VirtualKUrlLabel*>(self));
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->setKUrlLabel_HeightForWidth_Callback(reinterpret_cast<VirtualKUrlLabel::KUrlLabel_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlLabel_KeyPressEvent(KUrlLabel* self, QKeyEvent* ev) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->keyPressEvent(ev);
    } else {
        ((VirtualKUrlLabel*)self)->keyPressEvent(ev);
    }
}

// Base class handler implementation
void KUrlLabel_QBaseKeyPressEvent(KUrlLabel* self, QKeyEvent* ev) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->setKUrlLabel_KeyPressEvent_IsBase(true);
        vkurllabel->keyPressEvent(ev);
    } else {
        ((VirtualKUrlLabel*)self)->keyPressEvent(ev);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlLabel_OnKeyPressEvent(KUrlLabel* self, intptr_t slot) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->setKUrlLabel_KeyPressEvent_Callback(reinterpret_cast<VirtualKUrlLabel::KUrlLabel_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlLabel_PaintEvent(KUrlLabel* self, QPaintEvent* param1) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->paintEvent(param1);
    } else {
        ((VirtualKUrlLabel*)self)->paintEvent(param1);
    }
}

// Base class handler implementation
void KUrlLabel_QBasePaintEvent(KUrlLabel* self, QPaintEvent* param1) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->setKUrlLabel_PaintEvent_IsBase(true);
        vkurllabel->paintEvent(param1);
    } else {
        ((VirtualKUrlLabel*)self)->paintEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlLabel_OnPaintEvent(KUrlLabel* self, intptr_t slot) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->setKUrlLabel_PaintEvent_Callback(reinterpret_cast<VirtualKUrlLabel::KUrlLabel_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlLabel_ChangeEvent(KUrlLabel* self, QEvent* param1) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->changeEvent(param1);
    } else {
        ((VirtualKUrlLabel*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void KUrlLabel_QBaseChangeEvent(KUrlLabel* self, QEvent* param1) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->setKUrlLabel_ChangeEvent_IsBase(true);
        vkurllabel->changeEvent(param1);
    } else {
        ((VirtualKUrlLabel*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlLabel_OnChangeEvent(KUrlLabel* self, intptr_t slot) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->setKUrlLabel_ChangeEvent_Callback(reinterpret_cast<VirtualKUrlLabel::KUrlLabel_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlLabel_MousePressEvent(KUrlLabel* self, QMouseEvent* ev) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->mousePressEvent(ev);
    } else {
        ((VirtualKUrlLabel*)self)->mousePressEvent(ev);
    }
}

// Base class handler implementation
void KUrlLabel_QBaseMousePressEvent(KUrlLabel* self, QMouseEvent* ev) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->setKUrlLabel_MousePressEvent_IsBase(true);
        vkurllabel->mousePressEvent(ev);
    } else {
        ((VirtualKUrlLabel*)self)->mousePressEvent(ev);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlLabel_OnMousePressEvent(KUrlLabel* self, intptr_t slot) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->setKUrlLabel_MousePressEvent_Callback(reinterpret_cast<VirtualKUrlLabel::KUrlLabel_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlLabel_MouseMoveEvent(KUrlLabel* self, QMouseEvent* ev) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->mouseMoveEvent(ev);
    } else {
        ((VirtualKUrlLabel*)self)->mouseMoveEvent(ev);
    }
}

// Base class handler implementation
void KUrlLabel_QBaseMouseMoveEvent(KUrlLabel* self, QMouseEvent* ev) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->setKUrlLabel_MouseMoveEvent_IsBase(true);
        vkurllabel->mouseMoveEvent(ev);
    } else {
        ((VirtualKUrlLabel*)self)->mouseMoveEvent(ev);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlLabel_OnMouseMoveEvent(KUrlLabel* self, intptr_t slot) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->setKUrlLabel_MouseMoveEvent_Callback(reinterpret_cast<VirtualKUrlLabel::KUrlLabel_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlLabel_ContextMenuEvent(KUrlLabel* self, QContextMenuEvent* ev) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->contextMenuEvent(ev);
    } else {
        ((VirtualKUrlLabel*)self)->contextMenuEvent(ev);
    }
}

// Base class handler implementation
void KUrlLabel_QBaseContextMenuEvent(KUrlLabel* self, QContextMenuEvent* ev) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->setKUrlLabel_ContextMenuEvent_IsBase(true);
        vkurllabel->contextMenuEvent(ev);
    } else {
        ((VirtualKUrlLabel*)self)->contextMenuEvent(ev);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlLabel_OnContextMenuEvent(KUrlLabel* self, intptr_t slot) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->setKUrlLabel_ContextMenuEvent_Callback(reinterpret_cast<VirtualKUrlLabel::KUrlLabel_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlLabel_FocusInEvent(KUrlLabel* self, QFocusEvent* ev) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->focusInEvent(ev);
    } else {
        ((VirtualKUrlLabel*)self)->focusInEvent(ev);
    }
}

// Base class handler implementation
void KUrlLabel_QBaseFocusInEvent(KUrlLabel* self, QFocusEvent* ev) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->setKUrlLabel_FocusInEvent_IsBase(true);
        vkurllabel->focusInEvent(ev);
    } else {
        ((VirtualKUrlLabel*)self)->focusInEvent(ev);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlLabel_OnFocusInEvent(KUrlLabel* self, intptr_t slot) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->setKUrlLabel_FocusInEvent_Callback(reinterpret_cast<VirtualKUrlLabel::KUrlLabel_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlLabel_FocusOutEvent(KUrlLabel* self, QFocusEvent* ev) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->focusOutEvent(ev);
    } else {
        ((VirtualKUrlLabel*)self)->focusOutEvent(ev);
    }
}

// Base class handler implementation
void KUrlLabel_QBaseFocusOutEvent(KUrlLabel* self, QFocusEvent* ev) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->setKUrlLabel_FocusOutEvent_IsBase(true);
        vkurllabel->focusOutEvent(ev);
    } else {
        ((VirtualKUrlLabel*)self)->focusOutEvent(ev);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlLabel_OnFocusOutEvent(KUrlLabel* self, intptr_t slot) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->setKUrlLabel_FocusOutEvent_Callback(reinterpret_cast<VirtualKUrlLabel::KUrlLabel_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KUrlLabel_FocusNextPrevChild(KUrlLabel* self, bool next) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        return vkurllabel->focusNextPrevChild(next);
    } else {
        return ((VirtualKUrlLabel*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool KUrlLabel_QBaseFocusNextPrevChild(KUrlLabel* self, bool next) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->setKUrlLabel_FocusNextPrevChild_IsBase(true);
        return vkurllabel->focusNextPrevChild(next);
    } else {
        return ((VirtualKUrlLabel*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlLabel_OnFocusNextPrevChild(KUrlLabel* self, intptr_t slot) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->setKUrlLabel_FocusNextPrevChild_Callback(reinterpret_cast<VirtualKUrlLabel::KUrlLabel_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlLabel_InitStyleOption(const KUrlLabel* self, QStyleOptionFrame* option) {
    auto* vkurllabel = const_cast<VirtualKUrlLabel*>(dynamic_cast<const VirtualKUrlLabel*>(self));
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->initStyleOption(option);
    } else {
        ((VirtualKUrlLabel*)self)->initStyleOption(option);
    }
}

// Base class handler implementation
void KUrlLabel_QBaseInitStyleOption(const KUrlLabel* self, QStyleOptionFrame* option) {
    auto* vkurllabel = const_cast<VirtualKUrlLabel*>(dynamic_cast<const VirtualKUrlLabel*>(self));
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->setKUrlLabel_InitStyleOption_IsBase(true);
        vkurllabel->initStyleOption(option);
    } else {
        ((VirtualKUrlLabel*)self)->initStyleOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlLabel_OnInitStyleOption(const KUrlLabel* self, intptr_t slot) {
    auto* vkurllabel = const_cast<VirtualKUrlLabel*>(dynamic_cast<const VirtualKUrlLabel*>(self));
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->setKUrlLabel_InitStyleOption_Callback(reinterpret_cast<VirtualKUrlLabel::KUrlLabel_InitStyleOption_Callback>(slot));
    }
}

// Derived class handler implementation
int KUrlLabel_DevType(const KUrlLabel* self) {
    auto* vkurllabel = const_cast<VirtualKUrlLabel*>(dynamic_cast<const VirtualKUrlLabel*>(self));
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        return vkurllabel->devType();
    } else {
        return self->KUrlLabel::devType();
    }
}

// Base class handler implementation
int KUrlLabel_QBaseDevType(const KUrlLabel* self) {
    auto* vkurllabel = const_cast<VirtualKUrlLabel*>(dynamic_cast<const VirtualKUrlLabel*>(self));
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->setKUrlLabel_DevType_IsBase(true);
        return vkurllabel->devType();
    } else {
        return self->KUrlLabel::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlLabel_OnDevType(const KUrlLabel* self, intptr_t slot) {
    auto* vkurllabel = const_cast<VirtualKUrlLabel*>(dynamic_cast<const VirtualKUrlLabel*>(self));
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->setKUrlLabel_DevType_Callback(reinterpret_cast<VirtualKUrlLabel::KUrlLabel_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlLabel_SetVisible(KUrlLabel* self, bool visible) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->setVisible(visible);
    } else {
        self->KUrlLabel::setVisible(visible);
    }
}

// Base class handler implementation
void KUrlLabel_QBaseSetVisible(KUrlLabel* self, bool visible) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->setKUrlLabel_SetVisible_IsBase(true);
        vkurllabel->setVisible(visible);
    } else {
        self->KUrlLabel::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlLabel_OnSetVisible(KUrlLabel* self, intptr_t slot) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->setKUrlLabel_SetVisible_Callback(reinterpret_cast<VirtualKUrlLabel::KUrlLabel_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
bool KUrlLabel_HasHeightForWidth(const KUrlLabel* self) {
    auto* vkurllabel = const_cast<VirtualKUrlLabel*>(dynamic_cast<const VirtualKUrlLabel*>(self));
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        return vkurllabel->hasHeightForWidth();
    } else {
        return self->KUrlLabel::hasHeightForWidth();
    }
}

// Base class handler implementation
bool KUrlLabel_QBaseHasHeightForWidth(const KUrlLabel* self) {
    auto* vkurllabel = const_cast<VirtualKUrlLabel*>(dynamic_cast<const VirtualKUrlLabel*>(self));
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->setKUrlLabel_HasHeightForWidth_IsBase(true);
        return vkurllabel->hasHeightForWidth();
    } else {
        return self->KUrlLabel::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlLabel_OnHasHeightForWidth(const KUrlLabel* self, intptr_t slot) {
    auto* vkurllabel = const_cast<VirtualKUrlLabel*>(dynamic_cast<const VirtualKUrlLabel*>(self));
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->setKUrlLabel_HasHeightForWidth_Callback(reinterpret_cast<VirtualKUrlLabel::KUrlLabel_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* KUrlLabel_PaintEngine(const KUrlLabel* self) {
    auto* vkurllabel = const_cast<VirtualKUrlLabel*>(dynamic_cast<const VirtualKUrlLabel*>(self));
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        return vkurllabel->paintEngine();
    } else {
        return self->KUrlLabel::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* KUrlLabel_QBasePaintEngine(const KUrlLabel* self) {
    auto* vkurllabel = const_cast<VirtualKUrlLabel*>(dynamic_cast<const VirtualKUrlLabel*>(self));
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->setKUrlLabel_PaintEngine_IsBase(true);
        return vkurllabel->paintEngine();
    } else {
        return self->KUrlLabel::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlLabel_OnPaintEngine(const KUrlLabel* self, intptr_t slot) {
    auto* vkurllabel = const_cast<VirtualKUrlLabel*>(dynamic_cast<const VirtualKUrlLabel*>(self));
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->setKUrlLabel_PaintEngine_Callback(reinterpret_cast<VirtualKUrlLabel::KUrlLabel_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlLabel_MouseDoubleClickEvent(KUrlLabel* self, QMouseEvent* event) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKUrlLabel*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void KUrlLabel_QBaseMouseDoubleClickEvent(KUrlLabel* self, QMouseEvent* event) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->setKUrlLabel_MouseDoubleClickEvent_IsBase(true);
        vkurllabel->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKUrlLabel*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlLabel_OnMouseDoubleClickEvent(KUrlLabel* self, intptr_t slot) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->setKUrlLabel_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualKUrlLabel::KUrlLabel_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlLabel_WheelEvent(KUrlLabel* self, QWheelEvent* event) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->wheelEvent(event);
    } else {
        ((VirtualKUrlLabel*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void KUrlLabel_QBaseWheelEvent(KUrlLabel* self, QWheelEvent* event) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->setKUrlLabel_WheelEvent_IsBase(true);
        vkurllabel->wheelEvent(event);
    } else {
        ((VirtualKUrlLabel*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlLabel_OnWheelEvent(KUrlLabel* self, intptr_t slot) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->setKUrlLabel_WheelEvent_Callback(reinterpret_cast<VirtualKUrlLabel::KUrlLabel_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlLabel_KeyReleaseEvent(KUrlLabel* self, QKeyEvent* event) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->keyReleaseEvent(event);
    } else {
        ((VirtualKUrlLabel*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void KUrlLabel_QBaseKeyReleaseEvent(KUrlLabel* self, QKeyEvent* event) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->setKUrlLabel_KeyReleaseEvent_IsBase(true);
        vkurllabel->keyReleaseEvent(event);
    } else {
        ((VirtualKUrlLabel*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlLabel_OnKeyReleaseEvent(KUrlLabel* self, intptr_t slot) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->setKUrlLabel_KeyReleaseEvent_Callback(reinterpret_cast<VirtualKUrlLabel::KUrlLabel_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlLabel_MoveEvent(KUrlLabel* self, QMoveEvent* event) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->moveEvent(event);
    } else {
        ((VirtualKUrlLabel*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void KUrlLabel_QBaseMoveEvent(KUrlLabel* self, QMoveEvent* event) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->setKUrlLabel_MoveEvent_IsBase(true);
        vkurllabel->moveEvent(event);
    } else {
        ((VirtualKUrlLabel*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlLabel_OnMoveEvent(KUrlLabel* self, intptr_t slot) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->setKUrlLabel_MoveEvent_Callback(reinterpret_cast<VirtualKUrlLabel::KUrlLabel_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlLabel_ResizeEvent(KUrlLabel* self, QResizeEvent* event) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->resizeEvent(event);
    } else {
        ((VirtualKUrlLabel*)self)->resizeEvent(event);
    }
}

// Base class handler implementation
void KUrlLabel_QBaseResizeEvent(KUrlLabel* self, QResizeEvent* event) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->setKUrlLabel_ResizeEvent_IsBase(true);
        vkurllabel->resizeEvent(event);
    } else {
        ((VirtualKUrlLabel*)self)->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlLabel_OnResizeEvent(KUrlLabel* self, intptr_t slot) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->setKUrlLabel_ResizeEvent_Callback(reinterpret_cast<VirtualKUrlLabel::KUrlLabel_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlLabel_CloseEvent(KUrlLabel* self, QCloseEvent* event) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->closeEvent(event);
    } else {
        ((VirtualKUrlLabel*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void KUrlLabel_QBaseCloseEvent(KUrlLabel* self, QCloseEvent* event) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->setKUrlLabel_CloseEvent_IsBase(true);
        vkurllabel->closeEvent(event);
    } else {
        ((VirtualKUrlLabel*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlLabel_OnCloseEvent(KUrlLabel* self, intptr_t slot) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->setKUrlLabel_CloseEvent_Callback(reinterpret_cast<VirtualKUrlLabel::KUrlLabel_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlLabel_TabletEvent(KUrlLabel* self, QTabletEvent* event) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->tabletEvent(event);
    } else {
        ((VirtualKUrlLabel*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void KUrlLabel_QBaseTabletEvent(KUrlLabel* self, QTabletEvent* event) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->setKUrlLabel_TabletEvent_IsBase(true);
        vkurllabel->tabletEvent(event);
    } else {
        ((VirtualKUrlLabel*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlLabel_OnTabletEvent(KUrlLabel* self, intptr_t slot) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->setKUrlLabel_TabletEvent_Callback(reinterpret_cast<VirtualKUrlLabel::KUrlLabel_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlLabel_ActionEvent(KUrlLabel* self, QActionEvent* event) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->actionEvent(event);
    } else {
        ((VirtualKUrlLabel*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void KUrlLabel_QBaseActionEvent(KUrlLabel* self, QActionEvent* event) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->setKUrlLabel_ActionEvent_IsBase(true);
        vkurllabel->actionEvent(event);
    } else {
        ((VirtualKUrlLabel*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlLabel_OnActionEvent(KUrlLabel* self, intptr_t slot) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->setKUrlLabel_ActionEvent_Callback(reinterpret_cast<VirtualKUrlLabel::KUrlLabel_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlLabel_DragEnterEvent(KUrlLabel* self, QDragEnterEvent* event) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->dragEnterEvent(event);
    } else {
        ((VirtualKUrlLabel*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void KUrlLabel_QBaseDragEnterEvent(KUrlLabel* self, QDragEnterEvent* event) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->setKUrlLabel_DragEnterEvent_IsBase(true);
        vkurllabel->dragEnterEvent(event);
    } else {
        ((VirtualKUrlLabel*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlLabel_OnDragEnterEvent(KUrlLabel* self, intptr_t slot) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->setKUrlLabel_DragEnterEvent_Callback(reinterpret_cast<VirtualKUrlLabel::KUrlLabel_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlLabel_DragMoveEvent(KUrlLabel* self, QDragMoveEvent* event) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->dragMoveEvent(event);
    } else {
        ((VirtualKUrlLabel*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void KUrlLabel_QBaseDragMoveEvent(KUrlLabel* self, QDragMoveEvent* event) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->setKUrlLabel_DragMoveEvent_IsBase(true);
        vkurllabel->dragMoveEvent(event);
    } else {
        ((VirtualKUrlLabel*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlLabel_OnDragMoveEvent(KUrlLabel* self, intptr_t slot) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->setKUrlLabel_DragMoveEvent_Callback(reinterpret_cast<VirtualKUrlLabel::KUrlLabel_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlLabel_DragLeaveEvent(KUrlLabel* self, QDragLeaveEvent* event) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->dragLeaveEvent(event);
    } else {
        ((VirtualKUrlLabel*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void KUrlLabel_QBaseDragLeaveEvent(KUrlLabel* self, QDragLeaveEvent* event) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->setKUrlLabel_DragLeaveEvent_IsBase(true);
        vkurllabel->dragLeaveEvent(event);
    } else {
        ((VirtualKUrlLabel*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlLabel_OnDragLeaveEvent(KUrlLabel* self, intptr_t slot) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->setKUrlLabel_DragLeaveEvent_Callback(reinterpret_cast<VirtualKUrlLabel::KUrlLabel_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlLabel_DropEvent(KUrlLabel* self, QDropEvent* event) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->dropEvent(event);
    } else {
        ((VirtualKUrlLabel*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void KUrlLabel_QBaseDropEvent(KUrlLabel* self, QDropEvent* event) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->setKUrlLabel_DropEvent_IsBase(true);
        vkurllabel->dropEvent(event);
    } else {
        ((VirtualKUrlLabel*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlLabel_OnDropEvent(KUrlLabel* self, intptr_t slot) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->setKUrlLabel_DropEvent_Callback(reinterpret_cast<VirtualKUrlLabel::KUrlLabel_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlLabel_ShowEvent(KUrlLabel* self, QShowEvent* event) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->showEvent(event);
    } else {
        ((VirtualKUrlLabel*)self)->showEvent(event);
    }
}

// Base class handler implementation
void KUrlLabel_QBaseShowEvent(KUrlLabel* self, QShowEvent* event) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->setKUrlLabel_ShowEvent_IsBase(true);
        vkurllabel->showEvent(event);
    } else {
        ((VirtualKUrlLabel*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlLabel_OnShowEvent(KUrlLabel* self, intptr_t slot) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->setKUrlLabel_ShowEvent_Callback(reinterpret_cast<VirtualKUrlLabel::KUrlLabel_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlLabel_HideEvent(KUrlLabel* self, QHideEvent* event) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->hideEvent(event);
    } else {
        ((VirtualKUrlLabel*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void KUrlLabel_QBaseHideEvent(KUrlLabel* self, QHideEvent* event) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->setKUrlLabel_HideEvent_IsBase(true);
        vkurllabel->hideEvent(event);
    } else {
        ((VirtualKUrlLabel*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlLabel_OnHideEvent(KUrlLabel* self, intptr_t slot) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->setKUrlLabel_HideEvent_Callback(reinterpret_cast<VirtualKUrlLabel::KUrlLabel_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KUrlLabel_NativeEvent(KUrlLabel* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        return vkurllabel->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKUrlLabel*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool KUrlLabel_QBaseNativeEvent(KUrlLabel* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->setKUrlLabel_NativeEvent_IsBase(true);
        return vkurllabel->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKUrlLabel*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlLabel_OnNativeEvent(KUrlLabel* self, intptr_t slot) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->setKUrlLabel_NativeEvent_Callback(reinterpret_cast<VirtualKUrlLabel::KUrlLabel_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int KUrlLabel_Metric(const KUrlLabel* self, int param1) {
    auto* vkurllabel = const_cast<VirtualKUrlLabel*>(dynamic_cast<const VirtualKUrlLabel*>(self));
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        return vkurllabel->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKUrlLabel*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int KUrlLabel_QBaseMetric(const KUrlLabel* self, int param1) {
    auto* vkurllabel = const_cast<VirtualKUrlLabel*>(dynamic_cast<const VirtualKUrlLabel*>(self));
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->setKUrlLabel_Metric_IsBase(true);
        return vkurllabel->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKUrlLabel*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlLabel_OnMetric(const KUrlLabel* self, intptr_t slot) {
    auto* vkurllabel = const_cast<VirtualKUrlLabel*>(dynamic_cast<const VirtualKUrlLabel*>(self));
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->setKUrlLabel_Metric_Callback(reinterpret_cast<VirtualKUrlLabel::KUrlLabel_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlLabel_InitPainter(const KUrlLabel* self, QPainter* painter) {
    auto* vkurllabel = const_cast<VirtualKUrlLabel*>(dynamic_cast<const VirtualKUrlLabel*>(self));
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->initPainter(painter);
    } else {
        ((VirtualKUrlLabel*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void KUrlLabel_QBaseInitPainter(const KUrlLabel* self, QPainter* painter) {
    auto* vkurllabel = const_cast<VirtualKUrlLabel*>(dynamic_cast<const VirtualKUrlLabel*>(self));
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->setKUrlLabel_InitPainter_IsBase(true);
        vkurllabel->initPainter(painter);
    } else {
        ((VirtualKUrlLabel*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlLabel_OnInitPainter(const KUrlLabel* self, intptr_t slot) {
    auto* vkurllabel = const_cast<VirtualKUrlLabel*>(dynamic_cast<const VirtualKUrlLabel*>(self));
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->setKUrlLabel_InitPainter_Callback(reinterpret_cast<VirtualKUrlLabel::KUrlLabel_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* KUrlLabel_Redirected(const KUrlLabel* self, QPoint* offset) {
    auto* vkurllabel = const_cast<VirtualKUrlLabel*>(dynamic_cast<const VirtualKUrlLabel*>(self));
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        return vkurllabel->redirected(offset);
    } else {
        return ((VirtualKUrlLabel*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* KUrlLabel_QBaseRedirected(const KUrlLabel* self, QPoint* offset) {
    auto* vkurllabel = const_cast<VirtualKUrlLabel*>(dynamic_cast<const VirtualKUrlLabel*>(self));
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->setKUrlLabel_Redirected_IsBase(true);
        return vkurllabel->redirected(offset);
    } else {
        return ((VirtualKUrlLabel*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlLabel_OnRedirected(const KUrlLabel* self, intptr_t slot) {
    auto* vkurllabel = const_cast<VirtualKUrlLabel*>(dynamic_cast<const VirtualKUrlLabel*>(self));
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->setKUrlLabel_Redirected_Callback(reinterpret_cast<VirtualKUrlLabel::KUrlLabel_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* KUrlLabel_SharedPainter(const KUrlLabel* self) {
    auto* vkurllabel = const_cast<VirtualKUrlLabel*>(dynamic_cast<const VirtualKUrlLabel*>(self));
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        return vkurllabel->sharedPainter();
    } else {
        return ((VirtualKUrlLabel*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* KUrlLabel_QBaseSharedPainter(const KUrlLabel* self) {
    auto* vkurllabel = const_cast<VirtualKUrlLabel*>(dynamic_cast<const VirtualKUrlLabel*>(self));
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->setKUrlLabel_SharedPainter_IsBase(true);
        return vkurllabel->sharedPainter();
    } else {
        return ((VirtualKUrlLabel*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlLabel_OnSharedPainter(const KUrlLabel* self, intptr_t slot) {
    auto* vkurllabel = const_cast<VirtualKUrlLabel*>(dynamic_cast<const VirtualKUrlLabel*>(self));
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->setKUrlLabel_SharedPainter_Callback(reinterpret_cast<VirtualKUrlLabel::KUrlLabel_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlLabel_InputMethodEvent(KUrlLabel* self, QInputMethodEvent* param1) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->inputMethodEvent(param1);
    } else {
        ((VirtualKUrlLabel*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void KUrlLabel_QBaseInputMethodEvent(KUrlLabel* self, QInputMethodEvent* param1) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->setKUrlLabel_InputMethodEvent_IsBase(true);
        vkurllabel->inputMethodEvent(param1);
    } else {
        ((VirtualKUrlLabel*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlLabel_OnInputMethodEvent(KUrlLabel* self, intptr_t slot) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->setKUrlLabel_InputMethodEvent_Callback(reinterpret_cast<VirtualKUrlLabel::KUrlLabel_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* KUrlLabel_InputMethodQuery(const KUrlLabel* self, int param1) {
    auto* vkurllabel = const_cast<VirtualKUrlLabel*>(dynamic_cast<const VirtualKUrlLabel*>(self));
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        return new QVariant(vkurllabel->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKUrlLabel*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* KUrlLabel_QBaseInputMethodQuery(const KUrlLabel* self, int param1) {
    auto* vkurllabel = const_cast<VirtualKUrlLabel*>(dynamic_cast<const VirtualKUrlLabel*>(self));
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->setKUrlLabel_InputMethodQuery_IsBase(true);
        return new QVariant(vkurllabel->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKUrlLabel*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlLabel_OnInputMethodQuery(const KUrlLabel* self, intptr_t slot) {
    auto* vkurllabel = const_cast<VirtualKUrlLabel*>(dynamic_cast<const VirtualKUrlLabel*>(self));
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->setKUrlLabel_InputMethodQuery_Callback(reinterpret_cast<VirtualKUrlLabel::KUrlLabel_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool KUrlLabel_EventFilter(KUrlLabel* self, QObject* watched, QEvent* event) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        return vkurllabel->eventFilter(watched, event);
    } else {
        return self->KUrlLabel::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KUrlLabel_QBaseEventFilter(KUrlLabel* self, QObject* watched, QEvent* event) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->setKUrlLabel_EventFilter_IsBase(true);
        return vkurllabel->eventFilter(watched, event);
    } else {
        return self->KUrlLabel::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlLabel_OnEventFilter(KUrlLabel* self, intptr_t slot) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->setKUrlLabel_EventFilter_Callback(reinterpret_cast<VirtualKUrlLabel::KUrlLabel_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlLabel_TimerEvent(KUrlLabel* self, QTimerEvent* event) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->timerEvent(event);
    } else {
        ((VirtualKUrlLabel*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KUrlLabel_QBaseTimerEvent(KUrlLabel* self, QTimerEvent* event) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->setKUrlLabel_TimerEvent_IsBase(true);
        vkurllabel->timerEvent(event);
    } else {
        ((VirtualKUrlLabel*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlLabel_OnTimerEvent(KUrlLabel* self, intptr_t slot) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->setKUrlLabel_TimerEvent_Callback(reinterpret_cast<VirtualKUrlLabel::KUrlLabel_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlLabel_ChildEvent(KUrlLabel* self, QChildEvent* event) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->childEvent(event);
    } else {
        ((VirtualKUrlLabel*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KUrlLabel_QBaseChildEvent(KUrlLabel* self, QChildEvent* event) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->setKUrlLabel_ChildEvent_IsBase(true);
        vkurllabel->childEvent(event);
    } else {
        ((VirtualKUrlLabel*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlLabel_OnChildEvent(KUrlLabel* self, intptr_t slot) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->setKUrlLabel_ChildEvent_Callback(reinterpret_cast<VirtualKUrlLabel::KUrlLabel_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlLabel_CustomEvent(KUrlLabel* self, QEvent* event) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->customEvent(event);
    } else {
        ((VirtualKUrlLabel*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KUrlLabel_QBaseCustomEvent(KUrlLabel* self, QEvent* event) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->setKUrlLabel_CustomEvent_IsBase(true);
        vkurllabel->customEvent(event);
    } else {
        ((VirtualKUrlLabel*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlLabel_OnCustomEvent(KUrlLabel* self, intptr_t slot) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->setKUrlLabel_CustomEvent_Callback(reinterpret_cast<VirtualKUrlLabel::KUrlLabel_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlLabel_ConnectNotify(KUrlLabel* self, const QMetaMethod* signal) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->connectNotify(*signal);
    } else {
        ((VirtualKUrlLabel*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KUrlLabel_QBaseConnectNotify(KUrlLabel* self, const QMetaMethod* signal) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->setKUrlLabel_ConnectNotify_IsBase(true);
        vkurllabel->connectNotify(*signal);
    } else {
        ((VirtualKUrlLabel*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlLabel_OnConnectNotify(KUrlLabel* self, intptr_t slot) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->setKUrlLabel_ConnectNotify_Callback(reinterpret_cast<VirtualKUrlLabel::KUrlLabel_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlLabel_DisconnectNotify(KUrlLabel* self, const QMetaMethod* signal) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->disconnectNotify(*signal);
    } else {
        ((VirtualKUrlLabel*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KUrlLabel_QBaseDisconnectNotify(KUrlLabel* self, const QMetaMethod* signal) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->setKUrlLabel_DisconnectNotify_IsBase(true);
        vkurllabel->disconnectNotify(*signal);
    } else {
        ((VirtualKUrlLabel*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlLabel_OnDisconnectNotify(KUrlLabel* self, intptr_t slot) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->setKUrlLabel_DisconnectNotify_Callback(reinterpret_cast<VirtualKUrlLabel::KUrlLabel_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlLabel_DrawFrame(KUrlLabel* self, QPainter* param1) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->drawFrame(param1);
    } else {
        ((VirtualKUrlLabel*)self)->drawFrame(param1);
    }
}

// Base class handler implementation
void KUrlLabel_QBaseDrawFrame(KUrlLabel* self, QPainter* param1) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->setKUrlLabel_DrawFrame_IsBase(true);
        vkurllabel->drawFrame(param1);
    } else {
        ((VirtualKUrlLabel*)self)->drawFrame(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlLabel_OnDrawFrame(KUrlLabel* self, intptr_t slot) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->setKUrlLabel_DrawFrame_Callback(reinterpret_cast<VirtualKUrlLabel::KUrlLabel_DrawFrame_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlLabel_UpdateMicroFocus(KUrlLabel* self) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->updateMicroFocus();
    } else {
        ((VirtualKUrlLabel*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void KUrlLabel_QBaseUpdateMicroFocus(KUrlLabel* self) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->setKUrlLabel_UpdateMicroFocus_IsBase(true);
        vkurllabel->updateMicroFocus();
    } else {
        ((VirtualKUrlLabel*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlLabel_OnUpdateMicroFocus(KUrlLabel* self, intptr_t slot) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->setKUrlLabel_UpdateMicroFocus_Callback(reinterpret_cast<VirtualKUrlLabel::KUrlLabel_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlLabel_Create(KUrlLabel* self) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->create();
    } else {
        ((VirtualKUrlLabel*)self)->create();
    }
}

// Base class handler implementation
void KUrlLabel_QBaseCreate(KUrlLabel* self) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->setKUrlLabel_Create_IsBase(true);
        vkurllabel->create();
    } else {
        ((VirtualKUrlLabel*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlLabel_OnCreate(KUrlLabel* self, intptr_t slot) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->setKUrlLabel_Create_Callback(reinterpret_cast<VirtualKUrlLabel::KUrlLabel_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlLabel_Destroy(KUrlLabel* self) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->destroy();
    } else {
        ((VirtualKUrlLabel*)self)->destroy();
    }
}

// Base class handler implementation
void KUrlLabel_QBaseDestroy(KUrlLabel* self) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->setKUrlLabel_Destroy_IsBase(true);
        vkurllabel->destroy();
    } else {
        ((VirtualKUrlLabel*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlLabel_OnDestroy(KUrlLabel* self, intptr_t slot) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->setKUrlLabel_Destroy_Callback(reinterpret_cast<VirtualKUrlLabel::KUrlLabel_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool KUrlLabel_FocusNextChild(KUrlLabel* self) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        return vkurllabel->focusNextChild();
    } else {
        return ((VirtualKUrlLabel*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool KUrlLabel_QBaseFocusNextChild(KUrlLabel* self) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->setKUrlLabel_FocusNextChild_IsBase(true);
        return vkurllabel->focusNextChild();
    } else {
        return ((VirtualKUrlLabel*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlLabel_OnFocusNextChild(KUrlLabel* self, intptr_t slot) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->setKUrlLabel_FocusNextChild_Callback(reinterpret_cast<VirtualKUrlLabel::KUrlLabel_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KUrlLabel_FocusPreviousChild(KUrlLabel* self) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        return vkurllabel->focusPreviousChild();
    } else {
        return ((VirtualKUrlLabel*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool KUrlLabel_QBaseFocusPreviousChild(KUrlLabel* self) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->setKUrlLabel_FocusPreviousChild_IsBase(true);
        return vkurllabel->focusPreviousChild();
    } else {
        return ((VirtualKUrlLabel*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlLabel_OnFocusPreviousChild(KUrlLabel* self, intptr_t slot) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->setKUrlLabel_FocusPreviousChild_Callback(reinterpret_cast<VirtualKUrlLabel::KUrlLabel_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KUrlLabel_Sender(const KUrlLabel* self) {
    auto* vkurllabel = const_cast<VirtualKUrlLabel*>(dynamic_cast<const VirtualKUrlLabel*>(self));
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        return vkurllabel->sender();
    } else {
        return ((VirtualKUrlLabel*)self)->sender();
    }
}

// Base class handler implementation
QObject* KUrlLabel_QBaseSender(const KUrlLabel* self) {
    auto* vkurllabel = const_cast<VirtualKUrlLabel*>(dynamic_cast<const VirtualKUrlLabel*>(self));
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->setKUrlLabel_Sender_IsBase(true);
        return vkurllabel->sender();
    } else {
        return ((VirtualKUrlLabel*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlLabel_OnSender(const KUrlLabel* self, intptr_t slot) {
    auto* vkurllabel = const_cast<VirtualKUrlLabel*>(dynamic_cast<const VirtualKUrlLabel*>(self));
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->setKUrlLabel_Sender_Callback(reinterpret_cast<VirtualKUrlLabel::KUrlLabel_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KUrlLabel_SenderSignalIndex(const KUrlLabel* self) {
    auto* vkurllabel = const_cast<VirtualKUrlLabel*>(dynamic_cast<const VirtualKUrlLabel*>(self));
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        return vkurllabel->senderSignalIndex();
    } else {
        return ((VirtualKUrlLabel*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KUrlLabel_QBaseSenderSignalIndex(const KUrlLabel* self) {
    auto* vkurllabel = const_cast<VirtualKUrlLabel*>(dynamic_cast<const VirtualKUrlLabel*>(self));
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->setKUrlLabel_SenderSignalIndex_IsBase(true);
        return vkurllabel->senderSignalIndex();
    } else {
        return ((VirtualKUrlLabel*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlLabel_OnSenderSignalIndex(const KUrlLabel* self, intptr_t slot) {
    auto* vkurllabel = const_cast<VirtualKUrlLabel*>(dynamic_cast<const VirtualKUrlLabel*>(self));
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->setKUrlLabel_SenderSignalIndex_Callback(reinterpret_cast<VirtualKUrlLabel::KUrlLabel_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KUrlLabel_Receivers(const KUrlLabel* self, const char* signal) {
    auto* vkurllabel = const_cast<VirtualKUrlLabel*>(dynamic_cast<const VirtualKUrlLabel*>(self));
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        return vkurllabel->receivers(signal);
    } else {
        return ((VirtualKUrlLabel*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KUrlLabel_QBaseReceivers(const KUrlLabel* self, const char* signal) {
    auto* vkurllabel = const_cast<VirtualKUrlLabel*>(dynamic_cast<const VirtualKUrlLabel*>(self));
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->setKUrlLabel_Receivers_IsBase(true);
        return vkurllabel->receivers(signal);
    } else {
        return ((VirtualKUrlLabel*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlLabel_OnReceivers(const KUrlLabel* self, intptr_t slot) {
    auto* vkurllabel = const_cast<VirtualKUrlLabel*>(dynamic_cast<const VirtualKUrlLabel*>(self));
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->setKUrlLabel_Receivers_Callback(reinterpret_cast<VirtualKUrlLabel::KUrlLabel_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KUrlLabel_IsSignalConnected(const KUrlLabel* self, const QMetaMethod* signal) {
    auto* vkurllabel = const_cast<VirtualKUrlLabel*>(dynamic_cast<const VirtualKUrlLabel*>(self));
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        return vkurllabel->isSignalConnected(*signal);
    } else {
        return ((VirtualKUrlLabel*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KUrlLabel_QBaseIsSignalConnected(const KUrlLabel* self, const QMetaMethod* signal) {
    auto* vkurllabel = const_cast<VirtualKUrlLabel*>(dynamic_cast<const VirtualKUrlLabel*>(self));
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->setKUrlLabel_IsSignalConnected_IsBase(true);
        return vkurllabel->isSignalConnected(*signal);
    } else {
        return ((VirtualKUrlLabel*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlLabel_OnIsSignalConnected(const KUrlLabel* self, intptr_t slot) {
    auto* vkurllabel = const_cast<VirtualKUrlLabel*>(dynamic_cast<const VirtualKUrlLabel*>(self));
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->setKUrlLabel_IsSignalConnected_Callback(reinterpret_cast<VirtualKUrlLabel::KUrlLabel_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double KUrlLabel_GetDecodedMetricF(const KUrlLabel* self, int metricA, int metricB) {
    auto* vkurllabel = const_cast<VirtualKUrlLabel*>(dynamic_cast<const VirtualKUrlLabel*>(self));
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        return vkurllabel->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKUrlLabel*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double KUrlLabel_QBaseGetDecodedMetricF(const KUrlLabel* self, int metricA, int metricB) {
    auto* vkurllabel = const_cast<VirtualKUrlLabel*>(dynamic_cast<const VirtualKUrlLabel*>(self));
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->setKUrlLabel_GetDecodedMetricF_IsBase(true);
        return vkurllabel->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKUrlLabel*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlLabel_OnGetDecodedMetricF(const KUrlLabel* self, intptr_t slot) {
    auto* vkurllabel = const_cast<VirtualKUrlLabel*>(dynamic_cast<const VirtualKUrlLabel*>(self));
    if (vkurllabel && vkurllabel->isVirtualKUrlLabel) {
        vkurllabel->setKUrlLabel_GetDecodedMetricF_Callback(reinterpret_cast<VirtualKUrlLabel::KUrlLabel_GetDecodedMetricF_Callback>(slot));
    }
}

void KUrlLabel_Delete(KUrlLabel* self) {
    delete self;
}
