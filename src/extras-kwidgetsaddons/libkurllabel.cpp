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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KUrlLabel_Tr(const char* s) {
    auto _ret = KUrlLabel::tr(s);
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
    auto _ret = self->url();
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
    auto _ret = self->tipText();
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
    self->setFont(*font);
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
    KUrlLabel::connect(self,
                       static_cast<void (KUrlLabel::*)()>(&KUrlLabel::enteredUrl),
                       [self, slotFunc]() {
                           slotFunc(self);
                       });
}

void KUrlLabel_LeftUrl(KUrlLabel* self) {
    self->leftUrl();
}

void KUrlLabel_Connect_LeftUrl(KUrlLabel* self, intptr_t slot) {
    void (*slotFunc)(KUrlLabel*) = reinterpret_cast<void (*)(KUrlLabel*)>(slot);
    KUrlLabel::connect(self,
                       static_cast<void (KUrlLabel::*)()>(&KUrlLabel::leftUrl),
                       [self, slotFunc]() {
                           slotFunc(self);
                       });
}

void KUrlLabel_LeftClickedUrl(KUrlLabel* self) {
    self->leftClickedUrl();
}

void KUrlLabel_Connect_LeftClickedUrl(KUrlLabel* self, intptr_t slot) {
    void (*slotFunc)(KUrlLabel*) = reinterpret_cast<void (*)(KUrlLabel*)>(slot);
    KUrlLabel::connect(self,
                       static_cast<void (KUrlLabel::*)()>(&KUrlLabel::leftClickedUrl),
                       [self, slotFunc]() {
                           slotFunc(self);
                       });
}

void KUrlLabel_RightClickedUrl(KUrlLabel* self) {
    self->rightClickedUrl();
}

void KUrlLabel_Connect_RightClickedUrl(KUrlLabel* self, intptr_t slot) {
    void (*slotFunc)(KUrlLabel*) = reinterpret_cast<void (*)(KUrlLabel*)>(slot);
    KUrlLabel::connect(self,
                       static_cast<void (KUrlLabel::*)()>(&KUrlLabel::rightClickedUrl),
                       [self, slotFunc]() {
                           slotFunc(self);
                       });
}

void KUrlLabel_MiddleClickedUrl(KUrlLabel* self) {
    self->middleClickedUrl();
}

void KUrlLabel_Connect_MiddleClickedUrl(KUrlLabel* self, intptr_t slot) {
    void (*slotFunc)(KUrlLabel*) = reinterpret_cast<void (*)(KUrlLabel*)>(slot);
    KUrlLabel::connect(self,
                       static_cast<void (KUrlLabel::*)()>(&KUrlLabel::middleClickedUrl),
                       [self, slotFunc]() {
                           slotFunc(self);
                       });
}

void KUrlLabel_MouseReleaseEvent(KUrlLabel* self, QMouseEvent* param1) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel) {
        vkurllabel->mouseReleaseEvent(param1);
    }
}

void KUrlLabel_EnterEvent(KUrlLabel* self, QEnterEvent* event) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel) {
        vkurllabel->enterEvent(event);
    }
}

void KUrlLabel_LeaveEvent(KUrlLabel* self, QEvent* param1) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel) {
        vkurllabel->leaveEvent(param1);
    }
}

bool KUrlLabel_Event(KUrlLabel* self, QEvent* param1) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel) {
        return vkurllabel->event(param1);
    }
    qFatal("Error: Protected method KUrlLabel::event called without a directly constructed type");
}

libqt_string KUrlLabel_Tr2(const char* s, const char* c) {
    auto _ret = KUrlLabel::tr(s, c);
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
    auto _ret = KUrlLabel::tr(s, c, static_cast<int>(n));
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
QMetaObject* KUrlLabel_SuperMetaObject(const KUrlLabel* self) {
    return (QMetaObject*)self->KUrlLabel::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KUrlLabel_OnMetaObject(KUrlLabel* self, intptr_t slot) {
    if (auto* vkurllabel = const_cast<VirtualKUrlLabel*>(dynamic_cast<const VirtualKUrlLabel*>(self)))
        vkurllabel->kurllabel_metaobject_callback = reinterpret_cast<VirtualKUrlLabel::KUrlLabel_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KUrlLabel_SuperMetacast(KUrlLabel* self, const char* param1) {
    return self->KUrlLabel::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KUrlLabel_OnMetacast(KUrlLabel* self, intptr_t slot) {
    if (auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self))
        vkurllabel->kurllabel_metacast_callback = reinterpret_cast<VirtualKUrlLabel::KUrlLabel_Metacast_Callback>(slot);
}

// Base class handler implementation
int KUrlLabel_SuperMetacall(KUrlLabel* self, int param1, int param2, void** param3) {
    return self->KUrlLabel::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KUrlLabel_OnMetacall(KUrlLabel* self, intptr_t slot) {
    if (auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self))
        vkurllabel->kurllabel_metacall_callback = reinterpret_cast<VirtualKUrlLabel::KUrlLabel_Metacall_Callback>(slot);
}

// Base class handler implementation
void KUrlLabel_SuperSetFont(KUrlLabel* self, const QFont* font) {
    self->KUrlLabel::setFont(*font);
}

// Auxiliary method to allow providing re-implementation
void KUrlLabel_OnSetFont(KUrlLabel* self, intptr_t slot) {
    if (auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self))
        vkurllabel->kurllabel_setfont_callback = reinterpret_cast<VirtualKUrlLabel::KUrlLabel_SetFont_Callback>(slot);
}

// Base class handler implementation
void KUrlLabel_SuperMouseReleaseEvent(KUrlLabel* self, QMouseEvent* param1) {
    if (auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self)) {
        vkurllabel->KUrlLabel::mouseReleaseEvent(param1);
    } else
        qFatal("Error: Protected virtual method KUrlLabel::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlLabel_OnMouseReleaseEvent(KUrlLabel* self, intptr_t slot) {
    if (auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self))
        vkurllabel->kurllabel_mousereleaseevent_callback = reinterpret_cast<VirtualKUrlLabel::KUrlLabel_MouseReleaseEvent_Callback>(slot);
}

// Base class handler implementation
void KUrlLabel_SuperEnterEvent(KUrlLabel* self, QEnterEvent* event) {
    if (auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self)) {
        vkurllabel->KUrlLabel::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method KUrlLabel::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlLabel_OnEnterEvent(KUrlLabel* self, intptr_t slot) {
    if (auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self))
        vkurllabel->kurllabel_enterevent_callback = reinterpret_cast<VirtualKUrlLabel::KUrlLabel_EnterEvent_Callback>(slot);
}

// Base class handler implementation
void KUrlLabel_SuperLeaveEvent(KUrlLabel* self, QEvent* param1) {
    if (auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self)) {
        vkurllabel->KUrlLabel::leaveEvent(param1);
    } else
        qFatal("Error: Protected virtual method KUrlLabel::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlLabel_OnLeaveEvent(KUrlLabel* self, intptr_t slot) {
    if (auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self))
        vkurllabel->kurllabel_leaveevent_callback = reinterpret_cast<VirtualKUrlLabel::KUrlLabel_LeaveEvent_Callback>(slot);
}

// Base class handler implementation
bool KUrlLabel_SuperEvent(KUrlLabel* self, QEvent* param1) {
    if (auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self)) {
        return vkurllabel->KUrlLabel::event(param1);
    } else
        qFatal("Error: Protected virtual method KUrlLabel::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlLabel_OnEvent(KUrlLabel* self, intptr_t slot) {
    if (auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self))
        vkurllabel->kurllabel_event_callback = reinterpret_cast<VirtualKUrlLabel::KUrlLabel_Event_Callback>(slot);
}

// Derived class handler implementation
QSize* KUrlLabel_SizeHint(const KUrlLabel* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* KUrlLabel_SuperSizeHint(const KUrlLabel* self) {
    return new QSize(self->KUrlLabel::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void KUrlLabel_OnSizeHint(KUrlLabel* self, intptr_t slot) {
    if (auto* vkurllabel = const_cast<VirtualKUrlLabel*>(dynamic_cast<const VirtualKUrlLabel*>(self)))
        vkurllabel->kurllabel_sizehint_callback = reinterpret_cast<VirtualKUrlLabel::KUrlLabel_SizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* KUrlLabel_MinimumSizeHint(const KUrlLabel* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* KUrlLabel_SuperMinimumSizeHint(const KUrlLabel* self) {
    return new QSize(self->KUrlLabel::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void KUrlLabel_OnMinimumSizeHint(KUrlLabel* self, intptr_t slot) {
    if (auto* vkurllabel = const_cast<VirtualKUrlLabel*>(dynamic_cast<const VirtualKUrlLabel*>(self)))
        vkurllabel->kurllabel_minimumsizehint_callback = reinterpret_cast<VirtualKUrlLabel::KUrlLabel_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
int KUrlLabel_HeightForWidth(const KUrlLabel* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int KUrlLabel_SuperHeightForWidth(const KUrlLabel* self, int param1) {
    return self->KUrlLabel::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void KUrlLabel_OnHeightForWidth(KUrlLabel* self, intptr_t slot) {
    if (auto* vkurllabel = const_cast<VirtualKUrlLabel*>(dynamic_cast<const VirtualKUrlLabel*>(self)))
        vkurllabel->kurllabel_heightforwidth_callback = reinterpret_cast<VirtualKUrlLabel::KUrlLabel_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
void KUrlLabel_KeyPressEvent(KUrlLabel* self, QKeyEvent* ev) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel) {
        vkurllabel->keyPressEvent(ev);
    } else {
        qFatal("Error: Protected virtual method KUrlLabel::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlLabel_SuperKeyPressEvent(KUrlLabel* self, QKeyEvent* ev) {
    if (auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self)) {
        vkurllabel->KUrlLabel::keyPressEvent(ev);
    } else
        qFatal("Error: Protected virtual method KUrlLabel::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlLabel_OnKeyPressEvent(KUrlLabel* self, intptr_t slot) {
    if (auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self))
        vkurllabel->kurllabel_keypressevent_callback = reinterpret_cast<VirtualKUrlLabel::KUrlLabel_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlLabel_PaintEvent(KUrlLabel* self, QPaintEvent* param1) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel) {
        vkurllabel->paintEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KUrlLabel::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlLabel_SuperPaintEvent(KUrlLabel* self, QPaintEvent* param1) {
    if (auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self)) {
        vkurllabel->KUrlLabel::paintEvent(param1);
    } else
        qFatal("Error: Protected virtual method KUrlLabel::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlLabel_OnPaintEvent(KUrlLabel* self, intptr_t slot) {
    if (auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self))
        vkurllabel->kurllabel_paintevent_callback = reinterpret_cast<VirtualKUrlLabel::KUrlLabel_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlLabel_ChangeEvent(KUrlLabel* self, QEvent* param1) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel) {
        vkurllabel->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KUrlLabel::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlLabel_SuperChangeEvent(KUrlLabel* self, QEvent* param1) {
    if (auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self)) {
        vkurllabel->KUrlLabel::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KUrlLabel::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlLabel_OnChangeEvent(KUrlLabel* self, intptr_t slot) {
    if (auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self))
        vkurllabel->kurllabel_changeevent_callback = reinterpret_cast<VirtualKUrlLabel::KUrlLabel_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlLabel_MousePressEvent(KUrlLabel* self, QMouseEvent* ev) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel) {
        vkurllabel->mousePressEvent(ev);
    } else {
        qFatal("Error: Protected virtual method KUrlLabel::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlLabel_SuperMousePressEvent(KUrlLabel* self, QMouseEvent* ev) {
    if (auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self)) {
        vkurllabel->KUrlLabel::mousePressEvent(ev);
    } else
        qFatal("Error: Protected virtual method KUrlLabel::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlLabel_OnMousePressEvent(KUrlLabel* self, intptr_t slot) {
    if (auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self))
        vkurllabel->kurllabel_mousepressevent_callback = reinterpret_cast<VirtualKUrlLabel::KUrlLabel_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlLabel_MouseMoveEvent(KUrlLabel* self, QMouseEvent* ev) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel) {
        vkurllabel->mouseMoveEvent(ev);
    } else {
        qFatal("Error: Protected virtual method KUrlLabel::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlLabel_SuperMouseMoveEvent(KUrlLabel* self, QMouseEvent* ev) {
    if (auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self)) {
        vkurllabel->KUrlLabel::mouseMoveEvent(ev);
    } else
        qFatal("Error: Protected virtual method KUrlLabel::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlLabel_OnMouseMoveEvent(KUrlLabel* self, intptr_t slot) {
    if (auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self))
        vkurllabel->kurllabel_mousemoveevent_callback = reinterpret_cast<VirtualKUrlLabel::KUrlLabel_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlLabel_ContextMenuEvent(KUrlLabel* self, QContextMenuEvent* ev) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel) {
        vkurllabel->contextMenuEvent(ev);
    } else {
        qFatal("Error: Protected virtual method KUrlLabel::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlLabel_SuperContextMenuEvent(KUrlLabel* self, QContextMenuEvent* ev) {
    if (auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self)) {
        vkurllabel->KUrlLabel::contextMenuEvent(ev);
    } else
        qFatal("Error: Protected virtual method KUrlLabel::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlLabel_OnContextMenuEvent(KUrlLabel* self, intptr_t slot) {
    if (auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self))
        vkurllabel->kurllabel_contextmenuevent_callback = reinterpret_cast<VirtualKUrlLabel::KUrlLabel_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlLabel_FocusInEvent(KUrlLabel* self, QFocusEvent* ev) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel) {
        vkurllabel->focusInEvent(ev);
    } else {
        qFatal("Error: Protected virtual method KUrlLabel::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlLabel_SuperFocusInEvent(KUrlLabel* self, QFocusEvent* ev) {
    if (auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self)) {
        vkurllabel->KUrlLabel::focusInEvent(ev);
    } else
        qFatal("Error: Protected virtual method KUrlLabel::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlLabel_OnFocusInEvent(KUrlLabel* self, intptr_t slot) {
    if (auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self))
        vkurllabel->kurllabel_focusinevent_callback = reinterpret_cast<VirtualKUrlLabel::KUrlLabel_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlLabel_FocusOutEvent(KUrlLabel* self, QFocusEvent* ev) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel) {
        vkurllabel->focusOutEvent(ev);
    } else {
        qFatal("Error: Protected virtual method KUrlLabel::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlLabel_SuperFocusOutEvent(KUrlLabel* self, QFocusEvent* ev) {
    if (auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self)) {
        vkurllabel->KUrlLabel::focusOutEvent(ev);
    } else
        qFatal("Error: Protected virtual method KUrlLabel::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlLabel_OnFocusOutEvent(KUrlLabel* self, intptr_t slot) {
    if (auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self))
        vkurllabel->kurllabel_focusoutevent_callback = reinterpret_cast<VirtualKUrlLabel::KUrlLabel_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
bool KUrlLabel_FocusNextPrevChild(KUrlLabel* self, bool next) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel) {
        return vkurllabel->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method KUrlLabel::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool KUrlLabel_SuperFocusNextPrevChild(KUrlLabel* self, bool next) {
    if (auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self)) {
        return vkurllabel->KUrlLabel::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method KUrlLabel::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlLabel_OnFocusNextPrevChild(KUrlLabel* self, intptr_t slot) {
    if (auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self))
        vkurllabel->kurllabel_focusnextprevchild_callback = reinterpret_cast<VirtualKUrlLabel::KUrlLabel_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
void KUrlLabel_InitStyleOption(const KUrlLabel* self, QStyleOptionFrame* option) {
    auto* vkurllabel = const_cast<VirtualKUrlLabel*>(dynamic_cast<const VirtualKUrlLabel*>(self));
    if (vkurllabel) {
        vkurllabel->initStyleOption(option);
    } else {
        qFatal("Error: Protected virtual method KUrlLabel::initStyleOption called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlLabel_SuperInitStyleOption(const KUrlLabel* self, QStyleOptionFrame* option) {
    if (auto* vkurllabel = const_cast<VirtualKUrlLabel*>(dynamic_cast<const VirtualKUrlLabel*>(self))) {
        vkurllabel->KUrlLabel::initStyleOption(option);
    } else
        qFatal("Error: Protected virtual method KUrlLabel::initStyleOption called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlLabel_OnInitStyleOption(KUrlLabel* self, intptr_t slot) {
    if (auto* vkurllabel = const_cast<VirtualKUrlLabel*>(dynamic_cast<const VirtualKUrlLabel*>(self)))
        vkurllabel->kurllabel_initstyleoption_callback = reinterpret_cast<VirtualKUrlLabel::KUrlLabel_InitStyleOption_Callback>(slot);
}

// Derived class handler implementation
int KUrlLabel_DevType(const KUrlLabel* self) {
    return self->devType();
}

// Base class handler implementation
int KUrlLabel_SuperDevType(const KUrlLabel* self) {
    return self->KUrlLabel::devType();
}

// Auxiliary method to allow providing re-implementation
void KUrlLabel_OnDevType(KUrlLabel* self, intptr_t slot) {
    if (auto* vkurllabel = const_cast<VirtualKUrlLabel*>(dynamic_cast<const VirtualKUrlLabel*>(self)))
        vkurllabel->kurllabel_devtype_callback = reinterpret_cast<VirtualKUrlLabel::KUrlLabel_DevType_Callback>(slot);
}

// Derived class handler implementation
void KUrlLabel_SetVisible(KUrlLabel* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void KUrlLabel_SuperSetVisible(KUrlLabel* self, bool visible) {
    self->KUrlLabel::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void KUrlLabel_OnSetVisible(KUrlLabel* self, intptr_t slot) {
    if (auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self))
        vkurllabel->kurllabel_setvisible_callback = reinterpret_cast<VirtualKUrlLabel::KUrlLabel_SetVisible_Callback>(slot);
}

// Derived class handler implementation
bool KUrlLabel_HasHeightForWidth(const KUrlLabel* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool KUrlLabel_SuperHasHeightForWidth(const KUrlLabel* self) {
    return self->KUrlLabel::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void KUrlLabel_OnHasHeightForWidth(KUrlLabel* self, intptr_t slot) {
    if (auto* vkurllabel = const_cast<VirtualKUrlLabel*>(dynamic_cast<const VirtualKUrlLabel*>(self)))
        vkurllabel->kurllabel_hasheightforwidth_callback = reinterpret_cast<VirtualKUrlLabel::KUrlLabel_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* KUrlLabel_PaintEngine(const KUrlLabel* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* KUrlLabel_SuperPaintEngine(const KUrlLabel* self) {
    return self->KUrlLabel::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void KUrlLabel_OnPaintEngine(KUrlLabel* self, intptr_t slot) {
    if (auto* vkurllabel = const_cast<VirtualKUrlLabel*>(dynamic_cast<const VirtualKUrlLabel*>(self)))
        vkurllabel->kurllabel_paintengine_callback = reinterpret_cast<VirtualKUrlLabel::KUrlLabel_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
void KUrlLabel_MouseDoubleClickEvent(KUrlLabel* self, QMouseEvent* event) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel) {
        vkurllabel->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method KUrlLabel::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlLabel_SuperMouseDoubleClickEvent(KUrlLabel* self, QMouseEvent* event) {
    if (auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self)) {
        vkurllabel->KUrlLabel::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method KUrlLabel::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlLabel_OnMouseDoubleClickEvent(KUrlLabel* self, intptr_t slot) {
    if (auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self))
        vkurllabel->kurllabel_mousedoubleclickevent_callback = reinterpret_cast<VirtualKUrlLabel::KUrlLabel_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlLabel_WheelEvent(KUrlLabel* self, QWheelEvent* event) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel) {
        vkurllabel->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method KUrlLabel::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlLabel_SuperWheelEvent(KUrlLabel* self, QWheelEvent* event) {
    if (auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self)) {
        vkurllabel->KUrlLabel::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method KUrlLabel::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlLabel_OnWheelEvent(KUrlLabel* self, intptr_t slot) {
    if (auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self))
        vkurllabel->kurllabel_wheelevent_callback = reinterpret_cast<VirtualKUrlLabel::KUrlLabel_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlLabel_KeyReleaseEvent(KUrlLabel* self, QKeyEvent* event) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel) {
        vkurllabel->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KUrlLabel::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlLabel_SuperKeyReleaseEvent(KUrlLabel* self, QKeyEvent* event) {
    if (auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self)) {
        vkurllabel->KUrlLabel::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KUrlLabel::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlLabel_OnKeyReleaseEvent(KUrlLabel* self, intptr_t slot) {
    if (auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self))
        vkurllabel->kurllabel_keyreleaseevent_callback = reinterpret_cast<VirtualKUrlLabel::KUrlLabel_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlLabel_MoveEvent(KUrlLabel* self, QMoveEvent* event) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel) {
        vkurllabel->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KUrlLabel::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlLabel_SuperMoveEvent(KUrlLabel* self, QMoveEvent* event) {
    if (auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self)) {
        vkurllabel->KUrlLabel::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method KUrlLabel::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlLabel_OnMoveEvent(KUrlLabel* self, intptr_t slot) {
    if (auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self))
        vkurllabel->kurllabel_moveevent_callback = reinterpret_cast<VirtualKUrlLabel::KUrlLabel_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlLabel_ResizeEvent(KUrlLabel* self, QResizeEvent* event) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel) {
        vkurllabel->resizeEvent(event);
    } else {
        qFatal("Error: Protected virtual method KUrlLabel::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlLabel_SuperResizeEvent(KUrlLabel* self, QResizeEvent* event) {
    if (auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self)) {
        vkurllabel->KUrlLabel::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method KUrlLabel::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlLabel_OnResizeEvent(KUrlLabel* self, intptr_t slot) {
    if (auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self))
        vkurllabel->kurllabel_resizeevent_callback = reinterpret_cast<VirtualKUrlLabel::KUrlLabel_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlLabel_CloseEvent(KUrlLabel* self, QCloseEvent* event) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel) {
        vkurllabel->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method KUrlLabel::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlLabel_SuperCloseEvent(KUrlLabel* self, QCloseEvent* event) {
    if (auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self)) {
        vkurllabel->KUrlLabel::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method KUrlLabel::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlLabel_OnCloseEvent(KUrlLabel* self, intptr_t slot) {
    if (auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self))
        vkurllabel->kurllabel_closeevent_callback = reinterpret_cast<VirtualKUrlLabel::KUrlLabel_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlLabel_TabletEvent(KUrlLabel* self, QTabletEvent* event) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel) {
        vkurllabel->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method KUrlLabel::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlLabel_SuperTabletEvent(KUrlLabel* self, QTabletEvent* event) {
    if (auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self)) {
        vkurllabel->KUrlLabel::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method KUrlLabel::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlLabel_OnTabletEvent(KUrlLabel* self, intptr_t slot) {
    if (auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self))
        vkurllabel->kurllabel_tabletevent_callback = reinterpret_cast<VirtualKUrlLabel::KUrlLabel_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlLabel_ActionEvent(KUrlLabel* self, QActionEvent* event) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel) {
        vkurllabel->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method KUrlLabel::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlLabel_SuperActionEvent(KUrlLabel* self, QActionEvent* event) {
    if (auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self)) {
        vkurllabel->KUrlLabel::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method KUrlLabel::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlLabel_OnActionEvent(KUrlLabel* self, intptr_t slot) {
    if (auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self))
        vkurllabel->kurllabel_actionevent_callback = reinterpret_cast<VirtualKUrlLabel::KUrlLabel_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlLabel_DragEnterEvent(KUrlLabel* self, QDragEnterEvent* event) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel) {
        vkurllabel->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KUrlLabel::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlLabel_SuperDragEnterEvent(KUrlLabel* self, QDragEnterEvent* event) {
    if (auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self)) {
        vkurllabel->KUrlLabel::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method KUrlLabel::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlLabel_OnDragEnterEvent(KUrlLabel* self, intptr_t slot) {
    if (auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self))
        vkurllabel->kurllabel_dragenterevent_callback = reinterpret_cast<VirtualKUrlLabel::KUrlLabel_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlLabel_DragMoveEvent(KUrlLabel* self, QDragMoveEvent* event) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel) {
        vkurllabel->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KUrlLabel::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlLabel_SuperDragMoveEvent(KUrlLabel* self, QDragMoveEvent* event) {
    if (auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self)) {
        vkurllabel->KUrlLabel::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KUrlLabel::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlLabel_OnDragMoveEvent(KUrlLabel* self, intptr_t slot) {
    if (auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self))
        vkurllabel->kurllabel_dragmoveevent_callback = reinterpret_cast<VirtualKUrlLabel::KUrlLabel_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlLabel_DragLeaveEvent(KUrlLabel* self, QDragLeaveEvent* event) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel) {
        vkurllabel->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KUrlLabel::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlLabel_SuperDragLeaveEvent(KUrlLabel* self, QDragLeaveEvent* event) {
    if (auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self)) {
        vkurllabel->KUrlLabel::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KUrlLabel::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlLabel_OnDragLeaveEvent(KUrlLabel* self, intptr_t slot) {
    if (auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self))
        vkurllabel->kurllabel_dragleaveevent_callback = reinterpret_cast<VirtualKUrlLabel::KUrlLabel_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlLabel_DropEvent(KUrlLabel* self, QDropEvent* event) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel) {
        vkurllabel->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method KUrlLabel::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlLabel_SuperDropEvent(KUrlLabel* self, QDropEvent* event) {
    if (auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self)) {
        vkurllabel->KUrlLabel::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method KUrlLabel::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlLabel_OnDropEvent(KUrlLabel* self, intptr_t slot) {
    if (auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self))
        vkurllabel->kurllabel_dropevent_callback = reinterpret_cast<VirtualKUrlLabel::KUrlLabel_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlLabel_ShowEvent(KUrlLabel* self, QShowEvent* event) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel) {
        vkurllabel->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method KUrlLabel::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlLabel_SuperShowEvent(KUrlLabel* self, QShowEvent* event) {
    if (auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self)) {
        vkurllabel->KUrlLabel::showEvent(event);
    } else
        qFatal("Error: Protected virtual method KUrlLabel::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlLabel_OnShowEvent(KUrlLabel* self, intptr_t slot) {
    if (auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self))
        vkurllabel->kurllabel_showevent_callback = reinterpret_cast<VirtualKUrlLabel::KUrlLabel_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlLabel_HideEvent(KUrlLabel* self, QHideEvent* event) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel) {
        vkurllabel->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method KUrlLabel::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlLabel_SuperHideEvent(KUrlLabel* self, QHideEvent* event) {
    if (auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self)) {
        vkurllabel->KUrlLabel::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method KUrlLabel::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlLabel_OnHideEvent(KUrlLabel* self, intptr_t slot) {
    if (auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self))
        vkurllabel->kurllabel_hideevent_callback = reinterpret_cast<VirtualKUrlLabel::KUrlLabel_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool KUrlLabel_NativeEvent(KUrlLabel* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel) {
        return vkurllabel->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method KUrlLabel::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool KUrlLabel_SuperNativeEvent(KUrlLabel* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self)) {
        return vkurllabel->KUrlLabel::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method KUrlLabel::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlLabel_OnNativeEvent(KUrlLabel* self, intptr_t slot) {
    if (auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self))
        vkurllabel->kurllabel_nativeevent_callback = reinterpret_cast<VirtualKUrlLabel::KUrlLabel_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
int KUrlLabel_Metric(const KUrlLabel* self, int param1) {
    auto* vkurllabel = const_cast<VirtualKUrlLabel*>(dynamic_cast<const VirtualKUrlLabel*>(self));
    if (vkurllabel) {
        return vkurllabel->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method KUrlLabel::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int KUrlLabel_SuperMetric(const KUrlLabel* self, int param1) {
    if (auto* vkurllabel = const_cast<VirtualKUrlLabel*>(dynamic_cast<const VirtualKUrlLabel*>(self))) {
        return vkurllabel->KUrlLabel::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method KUrlLabel::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlLabel_OnMetric(KUrlLabel* self, intptr_t slot) {
    if (auto* vkurllabel = const_cast<VirtualKUrlLabel*>(dynamic_cast<const VirtualKUrlLabel*>(self)))
        vkurllabel->kurllabel_metric_callback = reinterpret_cast<VirtualKUrlLabel::KUrlLabel_Metric_Callback>(slot);
}

// Derived class handler implementation
void KUrlLabel_InitPainter(const KUrlLabel* self, QPainter* painter) {
    auto* vkurllabel = const_cast<VirtualKUrlLabel*>(dynamic_cast<const VirtualKUrlLabel*>(self));
    if (vkurllabel) {
        vkurllabel->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method KUrlLabel::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlLabel_SuperInitPainter(const KUrlLabel* self, QPainter* painter) {
    if (auto* vkurllabel = const_cast<VirtualKUrlLabel*>(dynamic_cast<const VirtualKUrlLabel*>(self))) {
        vkurllabel->KUrlLabel::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method KUrlLabel::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlLabel_OnInitPainter(KUrlLabel* self, intptr_t slot) {
    if (auto* vkurllabel = const_cast<VirtualKUrlLabel*>(dynamic_cast<const VirtualKUrlLabel*>(self)))
        vkurllabel->kurllabel_initpainter_callback = reinterpret_cast<VirtualKUrlLabel::KUrlLabel_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* KUrlLabel_Redirected(const KUrlLabel* self, QPoint* offset) {
    auto* vkurllabel = const_cast<VirtualKUrlLabel*>(dynamic_cast<const VirtualKUrlLabel*>(self));
    if (vkurllabel) {
        return vkurllabel->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method KUrlLabel::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* KUrlLabel_SuperRedirected(const KUrlLabel* self, QPoint* offset) {
    if (auto* vkurllabel = const_cast<VirtualKUrlLabel*>(dynamic_cast<const VirtualKUrlLabel*>(self))) {
        return vkurllabel->KUrlLabel::redirected(offset);
    } else
        qFatal("Error: Protected virtual method KUrlLabel::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlLabel_OnRedirected(KUrlLabel* self, intptr_t slot) {
    if (auto* vkurllabel = const_cast<VirtualKUrlLabel*>(dynamic_cast<const VirtualKUrlLabel*>(self)))
        vkurllabel->kurllabel_redirected_callback = reinterpret_cast<VirtualKUrlLabel::KUrlLabel_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* KUrlLabel_SharedPainter(const KUrlLabel* self) {
    auto* vkurllabel = const_cast<VirtualKUrlLabel*>(dynamic_cast<const VirtualKUrlLabel*>(self));
    if (vkurllabel) {
        return vkurllabel->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method KUrlLabel::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* KUrlLabel_SuperSharedPainter(const KUrlLabel* self) {
    if (auto* vkurllabel = const_cast<VirtualKUrlLabel*>(dynamic_cast<const VirtualKUrlLabel*>(self))) {
        return vkurllabel->KUrlLabel::sharedPainter();
    } else
        qFatal("Error: Protected virtual method KUrlLabel::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlLabel_OnSharedPainter(KUrlLabel* self, intptr_t slot) {
    if (auto* vkurllabel = const_cast<VirtualKUrlLabel*>(dynamic_cast<const VirtualKUrlLabel*>(self)))
        vkurllabel->kurllabel_sharedpainter_callback = reinterpret_cast<VirtualKUrlLabel::KUrlLabel_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void KUrlLabel_InputMethodEvent(KUrlLabel* self, QInputMethodEvent* param1) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel) {
        vkurllabel->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KUrlLabel::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlLabel_SuperInputMethodEvent(KUrlLabel* self, QInputMethodEvent* param1) {
    if (auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self)) {
        vkurllabel->KUrlLabel::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method KUrlLabel::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlLabel_OnInputMethodEvent(KUrlLabel* self, intptr_t slot) {
    if (auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self))
        vkurllabel->kurllabel_inputmethodevent_callback = reinterpret_cast<VirtualKUrlLabel::KUrlLabel_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* KUrlLabel_InputMethodQuery(const KUrlLabel* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* KUrlLabel_SuperInputMethodQuery(const KUrlLabel* self, int param1) {
    return new QVariant(self->KUrlLabel::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void KUrlLabel_OnInputMethodQuery(KUrlLabel* self, intptr_t slot) {
    if (auto* vkurllabel = const_cast<VirtualKUrlLabel*>(dynamic_cast<const VirtualKUrlLabel*>(self)))
        vkurllabel->kurllabel_inputmethodquery_callback = reinterpret_cast<VirtualKUrlLabel::KUrlLabel_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool KUrlLabel_EventFilter(KUrlLabel* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KUrlLabel_SuperEventFilter(KUrlLabel* self, QObject* watched, QEvent* event) {
    return self->KUrlLabel::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KUrlLabel_OnEventFilter(KUrlLabel* self, intptr_t slot) {
    if (auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self))
        vkurllabel->kurllabel_eventfilter_callback = reinterpret_cast<VirtualKUrlLabel::KUrlLabel_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KUrlLabel_TimerEvent(KUrlLabel* self, QTimerEvent* event) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel) {
        vkurllabel->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KUrlLabel::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlLabel_SuperTimerEvent(KUrlLabel* self, QTimerEvent* event) {
    if (auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self)) {
        vkurllabel->KUrlLabel::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KUrlLabel::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlLabel_OnTimerEvent(KUrlLabel* self, intptr_t slot) {
    if (auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self))
        vkurllabel->kurllabel_timerevent_callback = reinterpret_cast<VirtualKUrlLabel::KUrlLabel_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlLabel_ChildEvent(KUrlLabel* self, QChildEvent* event) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel) {
        vkurllabel->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KUrlLabel::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlLabel_SuperChildEvent(KUrlLabel* self, QChildEvent* event) {
    if (auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self)) {
        vkurllabel->KUrlLabel::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KUrlLabel::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlLabel_OnChildEvent(KUrlLabel* self, intptr_t slot) {
    if (auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self))
        vkurllabel->kurllabel_childevent_callback = reinterpret_cast<VirtualKUrlLabel::KUrlLabel_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlLabel_CustomEvent(KUrlLabel* self, QEvent* event) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel) {
        vkurllabel->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KUrlLabel::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlLabel_SuperCustomEvent(KUrlLabel* self, QEvent* event) {
    if (auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self)) {
        vkurllabel->KUrlLabel::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KUrlLabel::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlLabel_OnCustomEvent(KUrlLabel* self, intptr_t slot) {
    if (auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self))
        vkurllabel->kurllabel_customevent_callback = reinterpret_cast<VirtualKUrlLabel::KUrlLabel_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlLabel_ConnectNotify(KUrlLabel* self, const QMetaMethod* signal) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel) {
        vkurllabel->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KUrlLabel::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlLabel_SuperConnectNotify(KUrlLabel* self, const QMetaMethod* signal) {
    if (auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self)) {
        vkurllabel->KUrlLabel::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KUrlLabel::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlLabel_OnConnectNotify(KUrlLabel* self, intptr_t slot) {
    if (auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self))
        vkurllabel->kurllabel_connectnotify_callback = reinterpret_cast<VirtualKUrlLabel::KUrlLabel_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KUrlLabel_DisconnectNotify(KUrlLabel* self, const QMetaMethod* signal) {
    auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self);
    if (vkurllabel) {
        vkurllabel->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KUrlLabel::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlLabel_SuperDisconnectNotify(KUrlLabel* self, const QMetaMethod* signal) {
    if (auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self)) {
        vkurllabel->KUrlLabel::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KUrlLabel::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlLabel_OnDisconnectNotify(KUrlLabel* self, intptr_t slot) {
    if (auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self))
        vkurllabel->kurllabel_disconnectnotify_callback = reinterpret_cast<VirtualKUrlLabel::KUrlLabel_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void KUrlLabel_DrawFrame(KUrlLabel* self, QPainter* param1) {
    if (auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self)) {
        vkurllabel->VirtualKUrlLabel::drawFrame(param1);
    } else
        qFatal("Error: Protected method KUrlLabel::drawFrame called without a directly constructed type");
}

// Derived class protected handler implementation
void KUrlLabel_UpdateMicroFocus(KUrlLabel* self) {
    if (auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self)) {
        vkurllabel->VirtualKUrlLabel::updateMicroFocus();
    } else
        qFatal("Error: Protected method KUrlLabel::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void KUrlLabel_Create(KUrlLabel* self) {
    if (auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self)) {
        vkurllabel->VirtualKUrlLabel::create();
    } else
        qFatal("Error: Protected method KUrlLabel::create called without a directly constructed type");
}

// Derived class protected handler implementation
void KUrlLabel_Destroy(KUrlLabel* self) {
    if (auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self)) {
        vkurllabel->VirtualKUrlLabel::destroy();
    } else
        qFatal("Error: Protected method KUrlLabel::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool KUrlLabel_FocusNextChild(KUrlLabel* self) {
    if (auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self)) {
        return vkurllabel->VirtualKUrlLabel::focusNextChild();
    } else
        qFatal("Error: Protected method KUrlLabel::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool KUrlLabel_FocusPreviousChild(KUrlLabel* self) {
    if (auto* vkurllabel = dynamic_cast<VirtualKUrlLabel*>(self)) {
        return vkurllabel->VirtualKUrlLabel::focusPreviousChild();
    } else
        qFatal("Error: Protected method KUrlLabel::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KUrlLabel_Sender(const KUrlLabel* self) {
    if (auto* vkurllabel = const_cast<VirtualKUrlLabel*>(dynamic_cast<const VirtualKUrlLabel*>(self))) {
        return vkurllabel->VirtualKUrlLabel::sender();
    } else
        qFatal("Error: Protected method KUrlLabel::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KUrlLabel_SenderSignalIndex(const KUrlLabel* self) {
    if (auto* vkurllabel = const_cast<VirtualKUrlLabel*>(dynamic_cast<const VirtualKUrlLabel*>(self))) {
        return vkurllabel->VirtualKUrlLabel::senderSignalIndex();
    } else
        qFatal("Error: Protected method KUrlLabel::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KUrlLabel_Receivers(const KUrlLabel* self, const char* signal) {
    if (auto* vkurllabel = const_cast<VirtualKUrlLabel*>(dynamic_cast<const VirtualKUrlLabel*>(self))) {
        return vkurllabel->VirtualKUrlLabel::receivers(signal);
    } else
        qFatal("Error: Protected method KUrlLabel::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KUrlLabel_IsSignalConnected(const KUrlLabel* self, const QMetaMethod* signal) {
    if (auto* vkurllabel = const_cast<VirtualKUrlLabel*>(dynamic_cast<const VirtualKUrlLabel*>(self))) {
        return vkurllabel->VirtualKUrlLabel::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KUrlLabel::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double KUrlLabel_GetDecodedMetricF(const KUrlLabel* self, int metricA, int metricB) {
    if (auto* vkurllabel = const_cast<VirtualKUrlLabel*>(dynamic_cast<const VirtualKUrlLabel*>(self))) {
        return vkurllabel->VirtualKUrlLabel::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method KUrlLabel::getDecodedMetricF called without a directly constructed type");
}

void KUrlLabel_Delete(KUrlLabel* self) {
    delete self;
}
