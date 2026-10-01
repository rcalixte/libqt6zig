#include <KFontRequester>
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
#include <QFont>
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
#include <QPoint>
#include <QPushButton>
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <kfontrequester.h>
#include "libkfontrequester.h"
#include "libkfontrequester.hxx"

KFontRequester* KFontRequester_new(QWidget* parent) {
    return new VirtualKFontRequester(parent);
}

KFontRequester* KFontRequester_new2() {
    return new VirtualKFontRequester();
}

KFontRequester* KFontRequester_new3(QWidget* parent, bool onlyFixed) {
    return new VirtualKFontRequester(parent, onlyFixed);
}

QMetaObject* KFontRequester_MetaObject(const KFontRequester* self) {
    return (QMetaObject*)self->metaObject();
}

void* KFontRequester_Metacast(KFontRequester* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KFontRequester_Metacall(KFontRequester* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KFontRequester_Tr(const char* s) {
    auto _ret = KFontRequester::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QFont* KFontRequester_Font(const KFontRequester* self) {
    return new QFont(self->font());
}

bool KFontRequester_IsFixedOnly(const KFontRequester* self) {
    return self->isFixedOnly();
}

libqt_string KFontRequester_SampleText(const KFontRequester* self) {
    auto _ret = self->sampleText();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KFontRequester_Title(const KFontRequester* self) {
    auto _ret = self->title();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QLabel* KFontRequester_Label(const KFontRequester* self) {
    return self->label();
}

QPushButton* KFontRequester_Button(const KFontRequester* self) {
    return self->button();
}

void KFontRequester_SetFont(KFontRequester* self, const QFont* font, bool onlyFixed) {
    self->setFont(*font, onlyFixed);
}

void KFontRequester_SetSampleText(KFontRequester* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->setSampleText(text_QString);
}

void KFontRequester_SetTitle(KFontRequester* self, const libqt_string title) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    self->setTitle(title_QString);
}

void KFontRequester_FontSelected(KFontRequester* self, const QFont* font) {
    self->fontSelected(*font);
}

void KFontRequester_Connect_FontSelected(KFontRequester* self, intptr_t slot) {
    void (*slotFunc)(KFontRequester*, QFont*) = reinterpret_cast<void (*)(KFontRequester*, QFont*)>(slot);
    KFontRequester::connect(self,
                            static_cast<void (KFontRequester::*)(const QFont&)>(&KFontRequester::fontSelected),
                            [self, slotFunc](const QFont& font) {
                                const QFont& font_ret = font;
                                // Cast returned reference into pointer
                                QFont* sigval1 = const_cast<QFont*>(&font_ret);
                                slotFunc(self, sigval1);
                            });
}

bool KFontRequester_EventFilter(KFontRequester* self, QObject* watched, QEvent* event) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester) {
        return vkfontrequester->eventFilter(watched, event);
    }
    qFatal("Error: Protected method KFontRequester::eventFilter called without a directly constructed type");
}

libqt_string KFontRequester_Tr2(const char* s, const char* c) {
    auto _ret = KFontRequester::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KFontRequester_Tr3(const char* s, const char* c, int n) {
    auto _ret = KFontRequester::tr(s, c, static_cast<int>(n));
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
QMetaObject* KFontRequester_SuperMetaObject(const KFontRequester* self) {
    return (QMetaObject*)self->KFontRequester::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KFontRequester_OnMetaObject(KFontRequester* self, intptr_t slot) {
    if (auto* vkfontrequester = const_cast<VirtualKFontRequester*>(dynamic_cast<const VirtualKFontRequester*>(self)))
        vkfontrequester->kfontrequester_metaobject_callback = reinterpret_cast<VirtualKFontRequester::KFontRequester_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KFontRequester_SuperMetacast(KFontRequester* self, const char* param1) {
    return self->KFontRequester::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KFontRequester_OnMetacast(KFontRequester* self, intptr_t slot) {
    if (auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self))
        vkfontrequester->kfontrequester_metacast_callback = reinterpret_cast<VirtualKFontRequester::KFontRequester_Metacast_Callback>(slot);
}

// Base class handler implementation
int KFontRequester_SuperMetacall(KFontRequester* self, int param1, int param2, void** param3) {
    return self->KFontRequester::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KFontRequester_OnMetacall(KFontRequester* self, intptr_t slot) {
    if (auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self))
        vkfontrequester->kfontrequester_metacall_callback = reinterpret_cast<VirtualKFontRequester::KFontRequester_Metacall_Callback>(slot);
}

// Base class handler implementation
void KFontRequester_SuperSetFont(KFontRequester* self, const QFont* font, bool onlyFixed) {
    self->KFontRequester::setFont(*font, onlyFixed);
}

// Auxiliary method to allow providing re-implementation
void KFontRequester_OnSetFont(KFontRequester* self, intptr_t slot) {
    if (auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self))
        vkfontrequester->kfontrequester_setfont_callback = reinterpret_cast<VirtualKFontRequester::KFontRequester_SetFont_Callback>(slot);
}

// Base class handler implementation
void KFontRequester_SuperSetSampleText(KFontRequester* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->KFontRequester::setSampleText(text_QString);
}

// Auxiliary method to allow providing re-implementation
void KFontRequester_OnSetSampleText(KFontRequester* self, intptr_t slot) {
    if (auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self))
        vkfontrequester->kfontrequester_setsampletext_callback = reinterpret_cast<VirtualKFontRequester::KFontRequester_SetSampleText_Callback>(slot);
}

// Base class handler implementation
void KFontRequester_SuperSetTitle(KFontRequester* self, const libqt_string title) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    self->KFontRequester::setTitle(title_QString);
}

// Auxiliary method to allow providing re-implementation
void KFontRequester_OnSetTitle(KFontRequester* self, intptr_t slot) {
    if (auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self))
        vkfontrequester->kfontrequester_settitle_callback = reinterpret_cast<VirtualKFontRequester::KFontRequester_SetTitle_Callback>(slot);
}

// Base class handler implementation
bool KFontRequester_SuperEventFilter(KFontRequester* self, QObject* watched, QEvent* event) {
    if (auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self)) {
        return vkfontrequester->KFontRequester::eventFilter(watched, event);
    } else
        qFatal("Error: Protected virtual method KFontRequester::eventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFontRequester_OnEventFilter(KFontRequester* self, intptr_t slot) {
    if (auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self))
        vkfontrequester->kfontrequester_eventfilter_callback = reinterpret_cast<VirtualKFontRequester::KFontRequester_EventFilter_Callback>(slot);
}

// Derived class handler implementation
int KFontRequester_DevType(const KFontRequester* self) {
    return self->devType();
}

// Base class handler implementation
int KFontRequester_SuperDevType(const KFontRequester* self) {
    return self->KFontRequester::devType();
}

// Auxiliary method to allow providing re-implementation
void KFontRequester_OnDevType(KFontRequester* self, intptr_t slot) {
    if (auto* vkfontrequester = const_cast<VirtualKFontRequester*>(dynamic_cast<const VirtualKFontRequester*>(self)))
        vkfontrequester->kfontrequester_devtype_callback = reinterpret_cast<VirtualKFontRequester::KFontRequester_DevType_Callback>(slot);
}

// Derived class handler implementation
void KFontRequester_SetVisible(KFontRequester* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void KFontRequester_SuperSetVisible(KFontRequester* self, bool visible) {
    self->KFontRequester::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void KFontRequester_OnSetVisible(KFontRequester* self, intptr_t slot) {
    if (auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self))
        vkfontrequester->kfontrequester_setvisible_callback = reinterpret_cast<VirtualKFontRequester::KFontRequester_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* KFontRequester_SizeHint(const KFontRequester* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* KFontRequester_SuperSizeHint(const KFontRequester* self) {
    return new QSize(self->KFontRequester::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void KFontRequester_OnSizeHint(KFontRequester* self, intptr_t slot) {
    if (auto* vkfontrequester = const_cast<VirtualKFontRequester*>(dynamic_cast<const VirtualKFontRequester*>(self)))
        vkfontrequester->kfontrequester_sizehint_callback = reinterpret_cast<VirtualKFontRequester::KFontRequester_SizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* KFontRequester_MinimumSizeHint(const KFontRequester* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* KFontRequester_SuperMinimumSizeHint(const KFontRequester* self) {
    return new QSize(self->KFontRequester::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void KFontRequester_OnMinimumSizeHint(KFontRequester* self, intptr_t slot) {
    if (auto* vkfontrequester = const_cast<VirtualKFontRequester*>(dynamic_cast<const VirtualKFontRequester*>(self)))
        vkfontrequester->kfontrequester_minimumsizehint_callback = reinterpret_cast<VirtualKFontRequester::KFontRequester_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
int KFontRequester_HeightForWidth(const KFontRequester* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int KFontRequester_SuperHeightForWidth(const KFontRequester* self, int param1) {
    return self->KFontRequester::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void KFontRequester_OnHeightForWidth(KFontRequester* self, intptr_t slot) {
    if (auto* vkfontrequester = const_cast<VirtualKFontRequester*>(dynamic_cast<const VirtualKFontRequester*>(self)))
        vkfontrequester->kfontrequester_heightforwidth_callback = reinterpret_cast<VirtualKFontRequester::KFontRequester_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool KFontRequester_HasHeightForWidth(const KFontRequester* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool KFontRequester_SuperHasHeightForWidth(const KFontRequester* self) {
    return self->KFontRequester::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void KFontRequester_OnHasHeightForWidth(KFontRequester* self, intptr_t slot) {
    if (auto* vkfontrequester = const_cast<VirtualKFontRequester*>(dynamic_cast<const VirtualKFontRequester*>(self)))
        vkfontrequester->kfontrequester_hasheightforwidth_callback = reinterpret_cast<VirtualKFontRequester::KFontRequester_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* KFontRequester_PaintEngine(const KFontRequester* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* KFontRequester_SuperPaintEngine(const KFontRequester* self) {
    return self->KFontRequester::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void KFontRequester_OnPaintEngine(KFontRequester* self, intptr_t slot) {
    if (auto* vkfontrequester = const_cast<VirtualKFontRequester*>(dynamic_cast<const VirtualKFontRequester*>(self)))
        vkfontrequester->kfontrequester_paintengine_callback = reinterpret_cast<VirtualKFontRequester::KFontRequester_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
bool KFontRequester_Event(KFontRequester* self, QEvent* event) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester) {
        return vkfontrequester->event(event);
    } else {
        qFatal("Error: Protected virtual method KFontRequester::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool KFontRequester_SuperEvent(KFontRequester* self, QEvent* event) {
    if (auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self)) {
        return vkfontrequester->KFontRequester::event(event);
    } else
        qFatal("Error: Protected virtual method KFontRequester::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFontRequester_OnEvent(KFontRequester* self, intptr_t slot) {
    if (auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self))
        vkfontrequester->kfontrequester_event_callback = reinterpret_cast<VirtualKFontRequester::KFontRequester_Event_Callback>(slot);
}

// Derived class handler implementation
void KFontRequester_MousePressEvent(KFontRequester* self, QMouseEvent* event) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester) {
        vkfontrequester->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFontRequester::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFontRequester_SuperMousePressEvent(KFontRequester* self, QMouseEvent* event) {
    if (auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self)) {
        vkfontrequester->KFontRequester::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method KFontRequester::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFontRequester_OnMousePressEvent(KFontRequester* self, intptr_t slot) {
    if (auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self))
        vkfontrequester->kfontrequester_mousepressevent_callback = reinterpret_cast<VirtualKFontRequester::KFontRequester_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void KFontRequester_MouseReleaseEvent(KFontRequester* self, QMouseEvent* event) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester) {
        vkfontrequester->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFontRequester::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFontRequester_SuperMouseReleaseEvent(KFontRequester* self, QMouseEvent* event) {
    if (auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self)) {
        vkfontrequester->KFontRequester::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KFontRequester::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFontRequester_OnMouseReleaseEvent(KFontRequester* self, intptr_t slot) {
    if (auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self))
        vkfontrequester->kfontrequester_mousereleaseevent_callback = reinterpret_cast<VirtualKFontRequester::KFontRequester_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KFontRequester_MouseDoubleClickEvent(KFontRequester* self, QMouseEvent* event) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester) {
        vkfontrequester->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFontRequester::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFontRequester_SuperMouseDoubleClickEvent(KFontRequester* self, QMouseEvent* event) {
    if (auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self)) {
        vkfontrequester->KFontRequester::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method KFontRequester::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFontRequester_OnMouseDoubleClickEvent(KFontRequester* self, intptr_t slot) {
    if (auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self))
        vkfontrequester->kfontrequester_mousedoubleclickevent_callback = reinterpret_cast<VirtualKFontRequester::KFontRequester_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void KFontRequester_MouseMoveEvent(KFontRequester* self, QMouseEvent* event) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester) {
        vkfontrequester->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFontRequester::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFontRequester_SuperMouseMoveEvent(KFontRequester* self, QMouseEvent* event) {
    if (auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self)) {
        vkfontrequester->KFontRequester::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KFontRequester::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFontRequester_OnMouseMoveEvent(KFontRequester* self, intptr_t slot) {
    if (auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self))
        vkfontrequester->kfontrequester_mousemoveevent_callback = reinterpret_cast<VirtualKFontRequester::KFontRequester_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KFontRequester_WheelEvent(KFontRequester* self, QWheelEvent* event) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester) {
        vkfontrequester->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFontRequester::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFontRequester_SuperWheelEvent(KFontRequester* self, QWheelEvent* event) {
    if (auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self)) {
        vkfontrequester->KFontRequester::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method KFontRequester::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFontRequester_OnWheelEvent(KFontRequester* self, intptr_t slot) {
    if (auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self))
        vkfontrequester->kfontrequester_wheelevent_callback = reinterpret_cast<VirtualKFontRequester::KFontRequester_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void KFontRequester_KeyPressEvent(KFontRequester* self, QKeyEvent* event) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester) {
        vkfontrequester->keyPressEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFontRequester::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFontRequester_SuperKeyPressEvent(KFontRequester* self, QKeyEvent* event) {
    if (auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self)) {
        vkfontrequester->KFontRequester::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method KFontRequester::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFontRequester_OnKeyPressEvent(KFontRequester* self, intptr_t slot) {
    if (auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self))
        vkfontrequester->kfontrequester_keypressevent_callback = reinterpret_cast<VirtualKFontRequester::KFontRequester_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void KFontRequester_KeyReleaseEvent(KFontRequester* self, QKeyEvent* event) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester) {
        vkfontrequester->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFontRequester::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFontRequester_SuperKeyReleaseEvent(KFontRequester* self, QKeyEvent* event) {
    if (auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self)) {
        vkfontrequester->KFontRequester::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KFontRequester::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFontRequester_OnKeyReleaseEvent(KFontRequester* self, intptr_t slot) {
    if (auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self))
        vkfontrequester->kfontrequester_keyreleaseevent_callback = reinterpret_cast<VirtualKFontRequester::KFontRequester_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KFontRequester_FocusInEvent(KFontRequester* self, QFocusEvent* event) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester) {
        vkfontrequester->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFontRequester::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFontRequester_SuperFocusInEvent(KFontRequester* self, QFocusEvent* event) {
    if (auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self)) {
        vkfontrequester->KFontRequester::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method KFontRequester::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFontRequester_OnFocusInEvent(KFontRequester* self, intptr_t slot) {
    if (auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self))
        vkfontrequester->kfontrequester_focusinevent_callback = reinterpret_cast<VirtualKFontRequester::KFontRequester_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void KFontRequester_FocusOutEvent(KFontRequester* self, QFocusEvent* event) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester) {
        vkfontrequester->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFontRequester::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFontRequester_SuperFocusOutEvent(KFontRequester* self, QFocusEvent* event) {
    if (auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self)) {
        vkfontrequester->KFontRequester::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method KFontRequester::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFontRequester_OnFocusOutEvent(KFontRequester* self, intptr_t slot) {
    if (auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self))
        vkfontrequester->kfontrequester_focusoutevent_callback = reinterpret_cast<VirtualKFontRequester::KFontRequester_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void KFontRequester_EnterEvent(KFontRequester* self, QEnterEvent* event) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester) {
        vkfontrequester->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFontRequester::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFontRequester_SuperEnterEvent(KFontRequester* self, QEnterEvent* event) {
    if (auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self)) {
        vkfontrequester->KFontRequester::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method KFontRequester::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFontRequester_OnEnterEvent(KFontRequester* self, intptr_t slot) {
    if (auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self))
        vkfontrequester->kfontrequester_enterevent_callback = reinterpret_cast<VirtualKFontRequester::KFontRequester_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KFontRequester_LeaveEvent(KFontRequester* self, QEvent* event) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester) {
        vkfontrequester->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFontRequester::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFontRequester_SuperLeaveEvent(KFontRequester* self, QEvent* event) {
    if (auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self)) {
        vkfontrequester->KFontRequester::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KFontRequester::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFontRequester_OnLeaveEvent(KFontRequester* self, intptr_t slot) {
    if (auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self))
        vkfontrequester->kfontrequester_leaveevent_callback = reinterpret_cast<VirtualKFontRequester::KFontRequester_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KFontRequester_PaintEvent(KFontRequester* self, QPaintEvent* event) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester) {
        vkfontrequester->paintEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFontRequester::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFontRequester_SuperPaintEvent(KFontRequester* self, QPaintEvent* event) {
    if (auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self)) {
        vkfontrequester->KFontRequester::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method KFontRequester::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFontRequester_OnPaintEvent(KFontRequester* self, intptr_t slot) {
    if (auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self))
        vkfontrequester->kfontrequester_paintevent_callback = reinterpret_cast<VirtualKFontRequester::KFontRequester_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void KFontRequester_MoveEvent(KFontRequester* self, QMoveEvent* event) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester) {
        vkfontrequester->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFontRequester::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFontRequester_SuperMoveEvent(KFontRequester* self, QMoveEvent* event) {
    if (auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self)) {
        vkfontrequester->KFontRequester::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method KFontRequester::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFontRequester_OnMoveEvent(KFontRequester* self, intptr_t slot) {
    if (auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self))
        vkfontrequester->kfontrequester_moveevent_callback = reinterpret_cast<VirtualKFontRequester::KFontRequester_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KFontRequester_ResizeEvent(KFontRequester* self, QResizeEvent* event) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester) {
        vkfontrequester->resizeEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFontRequester::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFontRequester_SuperResizeEvent(KFontRequester* self, QResizeEvent* event) {
    if (auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self)) {
        vkfontrequester->KFontRequester::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method KFontRequester::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFontRequester_OnResizeEvent(KFontRequester* self, intptr_t slot) {
    if (auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self))
        vkfontrequester->kfontrequester_resizeevent_callback = reinterpret_cast<VirtualKFontRequester::KFontRequester_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void KFontRequester_CloseEvent(KFontRequester* self, QCloseEvent* event) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester) {
        vkfontrequester->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFontRequester::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFontRequester_SuperCloseEvent(KFontRequester* self, QCloseEvent* event) {
    if (auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self)) {
        vkfontrequester->KFontRequester::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method KFontRequester::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFontRequester_OnCloseEvent(KFontRequester* self, intptr_t slot) {
    if (auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self))
        vkfontrequester->kfontrequester_closeevent_callback = reinterpret_cast<VirtualKFontRequester::KFontRequester_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void KFontRequester_ContextMenuEvent(KFontRequester* self, QContextMenuEvent* event) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester) {
        vkfontrequester->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFontRequester::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFontRequester_SuperContextMenuEvent(KFontRequester* self, QContextMenuEvent* event) {
    if (auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self)) {
        vkfontrequester->KFontRequester::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method KFontRequester::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFontRequester_OnContextMenuEvent(KFontRequester* self, intptr_t slot) {
    if (auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self))
        vkfontrequester->kfontrequester_contextmenuevent_callback = reinterpret_cast<VirtualKFontRequester::KFontRequester_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void KFontRequester_TabletEvent(KFontRequester* self, QTabletEvent* event) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester) {
        vkfontrequester->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFontRequester::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFontRequester_SuperTabletEvent(KFontRequester* self, QTabletEvent* event) {
    if (auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self)) {
        vkfontrequester->KFontRequester::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method KFontRequester::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFontRequester_OnTabletEvent(KFontRequester* self, intptr_t slot) {
    if (auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self))
        vkfontrequester->kfontrequester_tabletevent_callback = reinterpret_cast<VirtualKFontRequester::KFontRequester_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void KFontRequester_ActionEvent(KFontRequester* self, QActionEvent* event) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester) {
        vkfontrequester->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFontRequester::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFontRequester_SuperActionEvent(KFontRequester* self, QActionEvent* event) {
    if (auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self)) {
        vkfontrequester->KFontRequester::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method KFontRequester::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFontRequester_OnActionEvent(KFontRequester* self, intptr_t slot) {
    if (auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self))
        vkfontrequester->kfontrequester_actionevent_callback = reinterpret_cast<VirtualKFontRequester::KFontRequester_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void KFontRequester_DragEnterEvent(KFontRequester* self, QDragEnterEvent* event) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester) {
        vkfontrequester->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFontRequester::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFontRequester_SuperDragEnterEvent(KFontRequester* self, QDragEnterEvent* event) {
    if (auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self)) {
        vkfontrequester->KFontRequester::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method KFontRequester::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFontRequester_OnDragEnterEvent(KFontRequester* self, intptr_t slot) {
    if (auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self))
        vkfontrequester->kfontrequester_dragenterevent_callback = reinterpret_cast<VirtualKFontRequester::KFontRequester_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KFontRequester_DragMoveEvent(KFontRequester* self, QDragMoveEvent* event) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester) {
        vkfontrequester->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFontRequester::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFontRequester_SuperDragMoveEvent(KFontRequester* self, QDragMoveEvent* event) {
    if (auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self)) {
        vkfontrequester->KFontRequester::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KFontRequester::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFontRequester_OnDragMoveEvent(KFontRequester* self, intptr_t slot) {
    if (auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self))
        vkfontrequester->kfontrequester_dragmoveevent_callback = reinterpret_cast<VirtualKFontRequester::KFontRequester_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KFontRequester_DragLeaveEvent(KFontRequester* self, QDragLeaveEvent* event) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester) {
        vkfontrequester->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFontRequester::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFontRequester_SuperDragLeaveEvent(KFontRequester* self, QDragLeaveEvent* event) {
    if (auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self)) {
        vkfontrequester->KFontRequester::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KFontRequester::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFontRequester_OnDragLeaveEvent(KFontRequester* self, intptr_t slot) {
    if (auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self))
        vkfontrequester->kfontrequester_dragleaveevent_callback = reinterpret_cast<VirtualKFontRequester::KFontRequester_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KFontRequester_DropEvent(KFontRequester* self, QDropEvent* event) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester) {
        vkfontrequester->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFontRequester::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFontRequester_SuperDropEvent(KFontRequester* self, QDropEvent* event) {
    if (auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self)) {
        vkfontrequester->KFontRequester::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method KFontRequester::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFontRequester_OnDropEvent(KFontRequester* self, intptr_t slot) {
    if (auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self))
        vkfontrequester->kfontrequester_dropevent_callback = reinterpret_cast<VirtualKFontRequester::KFontRequester_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void KFontRequester_ShowEvent(KFontRequester* self, QShowEvent* event) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester) {
        vkfontrequester->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFontRequester::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFontRequester_SuperShowEvent(KFontRequester* self, QShowEvent* event) {
    if (auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self)) {
        vkfontrequester->KFontRequester::showEvent(event);
    } else
        qFatal("Error: Protected virtual method KFontRequester::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFontRequester_OnShowEvent(KFontRequester* self, intptr_t slot) {
    if (auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self))
        vkfontrequester->kfontrequester_showevent_callback = reinterpret_cast<VirtualKFontRequester::KFontRequester_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void KFontRequester_HideEvent(KFontRequester* self, QHideEvent* event) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester) {
        vkfontrequester->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFontRequester::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFontRequester_SuperHideEvent(KFontRequester* self, QHideEvent* event) {
    if (auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self)) {
        vkfontrequester->KFontRequester::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method KFontRequester::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFontRequester_OnHideEvent(KFontRequester* self, intptr_t slot) {
    if (auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self))
        vkfontrequester->kfontrequester_hideevent_callback = reinterpret_cast<VirtualKFontRequester::KFontRequester_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool KFontRequester_NativeEvent(KFontRequester* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester) {
        return vkfontrequester->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method KFontRequester::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool KFontRequester_SuperNativeEvent(KFontRequester* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self)) {
        return vkfontrequester->KFontRequester::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method KFontRequester::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFontRequester_OnNativeEvent(KFontRequester* self, intptr_t slot) {
    if (auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self))
        vkfontrequester->kfontrequester_nativeevent_callback = reinterpret_cast<VirtualKFontRequester::KFontRequester_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
void KFontRequester_ChangeEvent(KFontRequester* self, QEvent* param1) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester) {
        vkfontrequester->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KFontRequester::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFontRequester_SuperChangeEvent(KFontRequester* self, QEvent* param1) {
    if (auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self)) {
        vkfontrequester->KFontRequester::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KFontRequester::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFontRequester_OnChangeEvent(KFontRequester* self, intptr_t slot) {
    if (auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self))
        vkfontrequester->kfontrequester_changeevent_callback = reinterpret_cast<VirtualKFontRequester::KFontRequester_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
int KFontRequester_Metric(const KFontRequester* self, int param1) {
    auto* vkfontrequester = const_cast<VirtualKFontRequester*>(dynamic_cast<const VirtualKFontRequester*>(self));
    if (vkfontrequester) {
        return vkfontrequester->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method KFontRequester::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int KFontRequester_SuperMetric(const KFontRequester* self, int param1) {
    if (auto* vkfontrequester = const_cast<VirtualKFontRequester*>(dynamic_cast<const VirtualKFontRequester*>(self))) {
        return vkfontrequester->KFontRequester::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method KFontRequester::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFontRequester_OnMetric(KFontRequester* self, intptr_t slot) {
    if (auto* vkfontrequester = const_cast<VirtualKFontRequester*>(dynamic_cast<const VirtualKFontRequester*>(self)))
        vkfontrequester->kfontrequester_metric_callback = reinterpret_cast<VirtualKFontRequester::KFontRequester_Metric_Callback>(slot);
}

// Derived class handler implementation
void KFontRequester_InitPainter(const KFontRequester* self, QPainter* painter) {
    auto* vkfontrequester = const_cast<VirtualKFontRequester*>(dynamic_cast<const VirtualKFontRequester*>(self));
    if (vkfontrequester) {
        vkfontrequester->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method KFontRequester::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void KFontRequester_SuperInitPainter(const KFontRequester* self, QPainter* painter) {
    if (auto* vkfontrequester = const_cast<VirtualKFontRequester*>(dynamic_cast<const VirtualKFontRequester*>(self))) {
        vkfontrequester->KFontRequester::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method KFontRequester::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFontRequester_OnInitPainter(KFontRequester* self, intptr_t slot) {
    if (auto* vkfontrequester = const_cast<VirtualKFontRequester*>(dynamic_cast<const VirtualKFontRequester*>(self)))
        vkfontrequester->kfontrequester_initpainter_callback = reinterpret_cast<VirtualKFontRequester::KFontRequester_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* KFontRequester_Redirected(const KFontRequester* self, QPoint* offset) {
    auto* vkfontrequester = const_cast<VirtualKFontRequester*>(dynamic_cast<const VirtualKFontRequester*>(self));
    if (vkfontrequester) {
        return vkfontrequester->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method KFontRequester::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* KFontRequester_SuperRedirected(const KFontRequester* self, QPoint* offset) {
    if (auto* vkfontrequester = const_cast<VirtualKFontRequester*>(dynamic_cast<const VirtualKFontRequester*>(self))) {
        return vkfontrequester->KFontRequester::redirected(offset);
    } else
        qFatal("Error: Protected virtual method KFontRequester::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFontRequester_OnRedirected(KFontRequester* self, intptr_t slot) {
    if (auto* vkfontrequester = const_cast<VirtualKFontRequester*>(dynamic_cast<const VirtualKFontRequester*>(self)))
        vkfontrequester->kfontrequester_redirected_callback = reinterpret_cast<VirtualKFontRequester::KFontRequester_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* KFontRequester_SharedPainter(const KFontRequester* self) {
    auto* vkfontrequester = const_cast<VirtualKFontRequester*>(dynamic_cast<const VirtualKFontRequester*>(self));
    if (vkfontrequester) {
        return vkfontrequester->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method KFontRequester::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* KFontRequester_SuperSharedPainter(const KFontRequester* self) {
    if (auto* vkfontrequester = const_cast<VirtualKFontRequester*>(dynamic_cast<const VirtualKFontRequester*>(self))) {
        return vkfontrequester->KFontRequester::sharedPainter();
    } else
        qFatal("Error: Protected virtual method KFontRequester::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFontRequester_OnSharedPainter(KFontRequester* self, intptr_t slot) {
    if (auto* vkfontrequester = const_cast<VirtualKFontRequester*>(dynamic_cast<const VirtualKFontRequester*>(self)))
        vkfontrequester->kfontrequester_sharedpainter_callback = reinterpret_cast<VirtualKFontRequester::KFontRequester_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void KFontRequester_InputMethodEvent(KFontRequester* self, QInputMethodEvent* param1) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester) {
        vkfontrequester->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KFontRequester::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFontRequester_SuperInputMethodEvent(KFontRequester* self, QInputMethodEvent* param1) {
    if (auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self)) {
        vkfontrequester->KFontRequester::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method KFontRequester::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFontRequester_OnInputMethodEvent(KFontRequester* self, intptr_t slot) {
    if (auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self))
        vkfontrequester->kfontrequester_inputmethodevent_callback = reinterpret_cast<VirtualKFontRequester::KFontRequester_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* KFontRequester_InputMethodQuery(const KFontRequester* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* KFontRequester_SuperInputMethodQuery(const KFontRequester* self, int param1) {
    return new QVariant(self->KFontRequester::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void KFontRequester_OnInputMethodQuery(KFontRequester* self, intptr_t slot) {
    if (auto* vkfontrequester = const_cast<VirtualKFontRequester*>(dynamic_cast<const VirtualKFontRequester*>(self)))
        vkfontrequester->kfontrequester_inputmethodquery_callback = reinterpret_cast<VirtualKFontRequester::KFontRequester_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool KFontRequester_FocusNextPrevChild(KFontRequester* self, bool next) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester) {
        return vkfontrequester->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method KFontRequester::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool KFontRequester_SuperFocusNextPrevChild(KFontRequester* self, bool next) {
    if (auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self)) {
        return vkfontrequester->KFontRequester::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method KFontRequester::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFontRequester_OnFocusNextPrevChild(KFontRequester* self, intptr_t slot) {
    if (auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self))
        vkfontrequester->kfontrequester_focusnextprevchild_callback = reinterpret_cast<VirtualKFontRequester::KFontRequester_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
void KFontRequester_TimerEvent(KFontRequester* self, QTimerEvent* event) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester) {
        vkfontrequester->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFontRequester::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFontRequester_SuperTimerEvent(KFontRequester* self, QTimerEvent* event) {
    if (auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self)) {
        vkfontrequester->KFontRequester::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KFontRequester::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFontRequester_OnTimerEvent(KFontRequester* self, intptr_t slot) {
    if (auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self))
        vkfontrequester->kfontrequester_timerevent_callback = reinterpret_cast<VirtualKFontRequester::KFontRequester_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KFontRequester_ChildEvent(KFontRequester* self, QChildEvent* event) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester) {
        vkfontrequester->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFontRequester::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFontRequester_SuperChildEvent(KFontRequester* self, QChildEvent* event) {
    if (auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self)) {
        vkfontrequester->KFontRequester::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KFontRequester::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFontRequester_OnChildEvent(KFontRequester* self, intptr_t slot) {
    if (auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self))
        vkfontrequester->kfontrequester_childevent_callback = reinterpret_cast<VirtualKFontRequester::KFontRequester_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KFontRequester_CustomEvent(KFontRequester* self, QEvent* event) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester) {
        vkfontrequester->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFontRequester::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFontRequester_SuperCustomEvent(KFontRequester* self, QEvent* event) {
    if (auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self)) {
        vkfontrequester->KFontRequester::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KFontRequester::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFontRequester_OnCustomEvent(KFontRequester* self, intptr_t slot) {
    if (auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self))
        vkfontrequester->kfontrequester_customevent_callback = reinterpret_cast<VirtualKFontRequester::KFontRequester_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KFontRequester_ConnectNotify(KFontRequester* self, const QMetaMethod* signal) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester) {
        vkfontrequester->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KFontRequester::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KFontRequester_SuperConnectNotify(KFontRequester* self, const QMetaMethod* signal) {
    if (auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self)) {
        vkfontrequester->KFontRequester::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KFontRequester::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFontRequester_OnConnectNotify(KFontRequester* self, intptr_t slot) {
    if (auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self))
        vkfontrequester->kfontrequester_connectnotify_callback = reinterpret_cast<VirtualKFontRequester::KFontRequester_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KFontRequester_DisconnectNotify(KFontRequester* self, const QMetaMethod* signal) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester) {
        vkfontrequester->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KFontRequester::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KFontRequester_SuperDisconnectNotify(KFontRequester* self, const QMetaMethod* signal) {
    if (auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self)) {
        vkfontrequester->KFontRequester::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KFontRequester::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFontRequester_OnDisconnectNotify(KFontRequester* self, intptr_t slot) {
    if (auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self))
        vkfontrequester->kfontrequester_disconnectnotify_callback = reinterpret_cast<VirtualKFontRequester::KFontRequester_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void KFontRequester_UpdateMicroFocus(KFontRequester* self) {
    if (auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self)) {
        vkfontrequester->VirtualKFontRequester::updateMicroFocus();
    } else
        qFatal("Error: Protected method KFontRequester::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void KFontRequester_Create(KFontRequester* self) {
    if (auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self)) {
        vkfontrequester->VirtualKFontRequester::create();
    } else
        qFatal("Error: Protected method KFontRequester::create called without a directly constructed type");
}

// Derived class protected handler implementation
void KFontRequester_Destroy(KFontRequester* self) {
    if (auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self)) {
        vkfontrequester->VirtualKFontRequester::destroy();
    } else
        qFatal("Error: Protected method KFontRequester::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool KFontRequester_FocusNextChild(KFontRequester* self) {
    if (auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self)) {
        return vkfontrequester->VirtualKFontRequester::focusNextChild();
    } else
        qFatal("Error: Protected method KFontRequester::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool KFontRequester_FocusPreviousChild(KFontRequester* self) {
    if (auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self)) {
        return vkfontrequester->VirtualKFontRequester::focusPreviousChild();
    } else
        qFatal("Error: Protected method KFontRequester::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KFontRequester_Sender(const KFontRequester* self) {
    if (auto* vkfontrequester = const_cast<VirtualKFontRequester*>(dynamic_cast<const VirtualKFontRequester*>(self))) {
        return vkfontrequester->VirtualKFontRequester::sender();
    } else
        qFatal("Error: Protected method KFontRequester::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KFontRequester_SenderSignalIndex(const KFontRequester* self) {
    if (auto* vkfontrequester = const_cast<VirtualKFontRequester*>(dynamic_cast<const VirtualKFontRequester*>(self))) {
        return vkfontrequester->VirtualKFontRequester::senderSignalIndex();
    } else
        qFatal("Error: Protected method KFontRequester::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KFontRequester_Receivers(const KFontRequester* self, const char* signal) {
    if (auto* vkfontrequester = const_cast<VirtualKFontRequester*>(dynamic_cast<const VirtualKFontRequester*>(self))) {
        return vkfontrequester->VirtualKFontRequester::receivers(signal);
    } else
        qFatal("Error: Protected method KFontRequester::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KFontRequester_IsSignalConnected(const KFontRequester* self, const QMetaMethod* signal) {
    if (auto* vkfontrequester = const_cast<VirtualKFontRequester*>(dynamic_cast<const VirtualKFontRequester*>(self))) {
        return vkfontrequester->VirtualKFontRequester::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KFontRequester::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double KFontRequester_GetDecodedMetricF(const KFontRequester* self, int metricA, int metricB) {
    if (auto* vkfontrequester = const_cast<VirtualKFontRequester*>(dynamic_cast<const VirtualKFontRequester*>(self))) {
        return vkfontrequester->VirtualKFontRequester::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method KFontRequester::getDecodedMetricF called without a directly constructed type");
}

void KFontRequester_Delete(KFontRequester* self) {
    delete self;
}
