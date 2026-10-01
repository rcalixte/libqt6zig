#include <KCharSelect>
#include <QActionEvent>
#include <QByteArray>
#include <QChar>
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
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <kcharselect.h>
#include "libkcharselect.h"
#include "libkcharselect.hxx"

KCharSelect* KCharSelect_new(QWidget* parent) {
    return new VirtualKCharSelect(parent);
}

KCharSelect* KCharSelect_new2(QWidget* parent, QObject* actionParent) {
    return new VirtualKCharSelect(parent, actionParent);
}

KCharSelect* KCharSelect_new3(QWidget* parent, const int controls) {
    return new VirtualKCharSelect(parent, static_cast<const KCharSelect::Controls>(controls));
}

KCharSelect* KCharSelect_new4(QWidget* parent, QObject* actionParent, const int controls) {
    return new VirtualKCharSelect(parent, actionParent, static_cast<const KCharSelect::Controls>(controls));
}

QMetaObject* KCharSelect_MetaObject(const KCharSelect* self) {
    return (QMetaObject*)self->metaObject();
}

void* KCharSelect_Metacast(KCharSelect* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KCharSelect_Metacall(KCharSelect* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KCharSelect_Tr(const char* s) {
    auto _ret = KCharSelect::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QSize* KCharSelect_SizeHint(const KCharSelect* self) {
    return new QSize(self->sizeHint());
}

void KCharSelect_SetAllPlanesEnabled(KCharSelect* self, bool all) {
    self->setAllPlanesEnabled(all);
}

bool KCharSelect_AllPlanesEnabled(const KCharSelect* self) {
    return self->allPlanesEnabled();
}

QChar* KCharSelect_CurrentChar(const KCharSelect* self) {
    return new QChar(self->currentChar());
}

unsigned int KCharSelect_CurrentCodePoint(const KCharSelect* self) {
    return static_cast<unsigned int>(self->currentCodePoint());
}

QFont* KCharSelect_CurrentFont(const KCharSelect* self) {
    return new QFont(self->currentFont());
}

libqt_list /* of QChar* */ KCharSelect_DisplayedChars(const KCharSelect* self) {
    QList<QChar> _ret = self->displayedChars();
    // Convert QList<> from C++ memory to manually-managed C memory
    QChar** _arr = static_cast<QChar**>(malloc(sizeof(QChar*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QChar(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of unsigned int */ KCharSelect_DisplayedCodePoints(const KCharSelect* self) {
    QList<unsigned int> _ret = self->displayedCodePoints();
    // Convert QList<> from C++ memory to manually-managed C memory
    unsigned int* _arr = static_cast<unsigned int*>(malloc(sizeof(unsigned int) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void KCharSelect_SetCurrentChar(KCharSelect* self, const QChar* c) {
    self->setCurrentChar(*c);
}

void KCharSelect_SetCurrentCodePoint(KCharSelect* self, unsigned int codePoint) {
    self->setCurrentCodePoint(static_cast<uint>(codePoint));
}

void KCharSelect_SetCurrentFont(KCharSelect* self, const QFont* font) {
    self->setCurrentFont(*font);
}

void KCharSelect_CurrentFontChanged(KCharSelect* self, const QFont* font) {
    self->currentFontChanged(*font);
}

void KCharSelect_Connect_CurrentFontChanged(KCharSelect* self, intptr_t slot) {
    void (*slotFunc)(KCharSelect*, QFont*) = reinterpret_cast<void (*)(KCharSelect*, QFont*)>(slot);
    KCharSelect::connect(self,
                         static_cast<void (KCharSelect::*)(const QFont&)>(&KCharSelect::currentFontChanged),
                         [self, slotFunc](const QFont& font) {
                             const QFont& font_ret = font;
                             // Cast returned reference into pointer
                             QFont* sigval1 = const_cast<QFont*>(&font_ret);
                             slotFunc(self, sigval1);
                         });
}

void KCharSelect_CurrentCharChanged(KCharSelect* self, const QChar* c) {
    self->currentCharChanged(*c);
}

void KCharSelect_Connect_CurrentCharChanged(KCharSelect* self, intptr_t slot) {
    void (*slotFunc)(KCharSelect*, QChar*) = reinterpret_cast<void (*)(KCharSelect*, QChar*)>(slot);
    KCharSelect::connect(self,
                         static_cast<void (KCharSelect::*)(const QChar&)>(&KCharSelect::currentCharChanged),
                         [self, slotFunc](const QChar& c) {
                             const QChar& c_ret = c;
                             // Cast returned reference into pointer
                             QChar* sigval1 = const_cast<QChar*>(&c_ret);
                             slotFunc(self, sigval1);
                         });
}

void KCharSelect_CurrentCodePointChanged(KCharSelect* self, unsigned int codePoint) {
    self->currentCodePointChanged(static_cast<uint>(codePoint));
}

void KCharSelect_Connect_CurrentCodePointChanged(KCharSelect* self, intptr_t slot) {
    void (*slotFunc)(KCharSelect*, unsigned int) = reinterpret_cast<void (*)(KCharSelect*, unsigned int)>(slot);
    KCharSelect::connect(self,
                         static_cast<void (KCharSelect::*)(uint)>(&KCharSelect::currentCodePointChanged),
                         [self, slotFunc](uint codePoint) {
                             unsigned int sigval1 = static_cast<unsigned int>(codePoint);
                             slotFunc(self, sigval1);
                         });
}

void KCharSelect_DisplayedCharsChanged(KCharSelect* self) {
    self->displayedCharsChanged();
}

void KCharSelect_Connect_DisplayedCharsChanged(KCharSelect* self, intptr_t slot) {
    void (*slotFunc)(KCharSelect*) = reinterpret_cast<void (*)(KCharSelect*)>(slot);
    KCharSelect::connect(self,
                         static_cast<void (KCharSelect::*)()>(&KCharSelect::displayedCharsChanged),
                         [self, slotFunc]() {
                             slotFunc(self);
                         });
}

void KCharSelect_CharSelected(KCharSelect* self, const QChar* c) {
    self->charSelected(*c);
}

void KCharSelect_Connect_CharSelected(KCharSelect* self, intptr_t slot) {
    void (*slotFunc)(KCharSelect*, QChar*) = reinterpret_cast<void (*)(KCharSelect*, QChar*)>(slot);
    KCharSelect::connect(self,
                         static_cast<void (KCharSelect::*)(const QChar&)>(&KCharSelect::charSelected),
                         [self, slotFunc](const QChar& c) {
                             const QChar& c_ret = c;
                             // Cast returned reference into pointer
                             QChar* sigval1 = const_cast<QChar*>(&c_ret);
                             slotFunc(self, sigval1);
                         });
}

void KCharSelect_CodePointSelected(KCharSelect* self, unsigned int codePoint) {
    self->codePointSelected(static_cast<uint>(codePoint));
}

void KCharSelect_Connect_CodePointSelected(KCharSelect* self, intptr_t slot) {
    void (*slotFunc)(KCharSelect*, unsigned int) = reinterpret_cast<void (*)(KCharSelect*, unsigned int)>(slot);
    KCharSelect::connect(self,
                         static_cast<void (KCharSelect::*)(uint)>(&KCharSelect::codePointSelected),
                         [self, slotFunc](uint codePoint) {
                             unsigned int sigval1 = static_cast<unsigned int>(codePoint);
                             slotFunc(self, sigval1);
                         });
}

libqt_string KCharSelect_Tr2(const char* s, const char* c) {
    auto _ret = KCharSelect::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KCharSelect_Tr3(const char* s, const char* c, int n) {
    auto _ret = KCharSelect::tr(s, c, static_cast<int>(n));
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
QMetaObject* KCharSelect_SuperMetaObject(const KCharSelect* self) {
    return (QMetaObject*)self->KCharSelect::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KCharSelect_OnMetaObject(KCharSelect* self, intptr_t slot) {
    if (auto* vkcharselect = const_cast<VirtualKCharSelect*>(dynamic_cast<const VirtualKCharSelect*>(self)))
        vkcharselect->kcharselect_metaobject_callback = reinterpret_cast<VirtualKCharSelect::KCharSelect_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KCharSelect_SuperMetacast(KCharSelect* self, const char* param1) {
    return self->KCharSelect::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KCharSelect_OnMetacast(KCharSelect* self, intptr_t slot) {
    if (auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self))
        vkcharselect->kcharselect_metacast_callback = reinterpret_cast<VirtualKCharSelect::KCharSelect_Metacast_Callback>(slot);
}

// Base class handler implementation
int KCharSelect_SuperMetacall(KCharSelect* self, int param1, int param2, void** param3) {
    return self->KCharSelect::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KCharSelect_OnMetacall(KCharSelect* self, intptr_t slot) {
    if (auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self))
        vkcharselect->kcharselect_metacall_callback = reinterpret_cast<VirtualKCharSelect::KCharSelect_Metacall_Callback>(slot);
}

// Base class handler implementation
QSize* KCharSelect_SuperSizeHint(const KCharSelect* self) {
    return new QSize(self->KCharSelect::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void KCharSelect_OnSizeHint(KCharSelect* self, intptr_t slot) {
    if (auto* vkcharselect = const_cast<VirtualKCharSelect*>(dynamic_cast<const VirtualKCharSelect*>(self)))
        vkcharselect->kcharselect_sizehint_callback = reinterpret_cast<VirtualKCharSelect::KCharSelect_SizeHint_Callback>(slot);
}

// Derived class handler implementation
int KCharSelect_DevType(const KCharSelect* self) {
    return self->devType();
}

// Base class handler implementation
int KCharSelect_SuperDevType(const KCharSelect* self) {
    return self->KCharSelect::devType();
}

// Auxiliary method to allow providing re-implementation
void KCharSelect_OnDevType(KCharSelect* self, intptr_t slot) {
    if (auto* vkcharselect = const_cast<VirtualKCharSelect*>(dynamic_cast<const VirtualKCharSelect*>(self)))
        vkcharselect->kcharselect_devtype_callback = reinterpret_cast<VirtualKCharSelect::KCharSelect_DevType_Callback>(slot);
}

// Derived class handler implementation
void KCharSelect_SetVisible(KCharSelect* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void KCharSelect_SuperSetVisible(KCharSelect* self, bool visible) {
    self->KCharSelect::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void KCharSelect_OnSetVisible(KCharSelect* self, intptr_t slot) {
    if (auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self))
        vkcharselect->kcharselect_setvisible_callback = reinterpret_cast<VirtualKCharSelect::KCharSelect_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* KCharSelect_MinimumSizeHint(const KCharSelect* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* KCharSelect_SuperMinimumSizeHint(const KCharSelect* self) {
    return new QSize(self->KCharSelect::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void KCharSelect_OnMinimumSizeHint(KCharSelect* self, intptr_t slot) {
    if (auto* vkcharselect = const_cast<VirtualKCharSelect*>(dynamic_cast<const VirtualKCharSelect*>(self)))
        vkcharselect->kcharselect_minimumsizehint_callback = reinterpret_cast<VirtualKCharSelect::KCharSelect_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
int KCharSelect_HeightForWidth(const KCharSelect* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int KCharSelect_SuperHeightForWidth(const KCharSelect* self, int param1) {
    return self->KCharSelect::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void KCharSelect_OnHeightForWidth(KCharSelect* self, intptr_t slot) {
    if (auto* vkcharselect = const_cast<VirtualKCharSelect*>(dynamic_cast<const VirtualKCharSelect*>(self)))
        vkcharselect->kcharselect_heightforwidth_callback = reinterpret_cast<VirtualKCharSelect::KCharSelect_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool KCharSelect_HasHeightForWidth(const KCharSelect* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool KCharSelect_SuperHasHeightForWidth(const KCharSelect* self) {
    return self->KCharSelect::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void KCharSelect_OnHasHeightForWidth(KCharSelect* self, intptr_t slot) {
    if (auto* vkcharselect = const_cast<VirtualKCharSelect*>(dynamic_cast<const VirtualKCharSelect*>(self)))
        vkcharselect->kcharselect_hasheightforwidth_callback = reinterpret_cast<VirtualKCharSelect::KCharSelect_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* KCharSelect_PaintEngine(const KCharSelect* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* KCharSelect_SuperPaintEngine(const KCharSelect* self) {
    return self->KCharSelect::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void KCharSelect_OnPaintEngine(KCharSelect* self, intptr_t slot) {
    if (auto* vkcharselect = const_cast<VirtualKCharSelect*>(dynamic_cast<const VirtualKCharSelect*>(self)))
        vkcharselect->kcharselect_paintengine_callback = reinterpret_cast<VirtualKCharSelect::KCharSelect_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
bool KCharSelect_Event(KCharSelect* self, QEvent* event) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect) {
        return vkcharselect->event(event);
    } else {
        qFatal("Error: Protected virtual method KCharSelect::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool KCharSelect_SuperEvent(KCharSelect* self, QEvent* event) {
    if (auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self)) {
        return vkcharselect->KCharSelect::event(event);
    } else
        qFatal("Error: Protected virtual method KCharSelect::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCharSelect_OnEvent(KCharSelect* self, intptr_t slot) {
    if (auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self))
        vkcharselect->kcharselect_event_callback = reinterpret_cast<VirtualKCharSelect::KCharSelect_Event_Callback>(slot);
}

// Derived class handler implementation
void KCharSelect_MousePressEvent(KCharSelect* self, QMouseEvent* event) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect) {
        vkcharselect->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCharSelect::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCharSelect_SuperMousePressEvent(KCharSelect* self, QMouseEvent* event) {
    if (auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self)) {
        vkcharselect->KCharSelect::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method KCharSelect::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCharSelect_OnMousePressEvent(KCharSelect* self, intptr_t slot) {
    if (auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self))
        vkcharselect->kcharselect_mousepressevent_callback = reinterpret_cast<VirtualKCharSelect::KCharSelect_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void KCharSelect_MouseReleaseEvent(KCharSelect* self, QMouseEvent* event) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect) {
        vkcharselect->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCharSelect::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCharSelect_SuperMouseReleaseEvent(KCharSelect* self, QMouseEvent* event) {
    if (auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self)) {
        vkcharselect->KCharSelect::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KCharSelect::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCharSelect_OnMouseReleaseEvent(KCharSelect* self, intptr_t slot) {
    if (auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self))
        vkcharselect->kcharselect_mousereleaseevent_callback = reinterpret_cast<VirtualKCharSelect::KCharSelect_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KCharSelect_MouseDoubleClickEvent(KCharSelect* self, QMouseEvent* event) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect) {
        vkcharselect->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCharSelect::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCharSelect_SuperMouseDoubleClickEvent(KCharSelect* self, QMouseEvent* event) {
    if (auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self)) {
        vkcharselect->KCharSelect::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method KCharSelect::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCharSelect_OnMouseDoubleClickEvent(KCharSelect* self, intptr_t slot) {
    if (auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self))
        vkcharselect->kcharselect_mousedoubleclickevent_callback = reinterpret_cast<VirtualKCharSelect::KCharSelect_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void KCharSelect_MouseMoveEvent(KCharSelect* self, QMouseEvent* event) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect) {
        vkcharselect->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCharSelect::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCharSelect_SuperMouseMoveEvent(KCharSelect* self, QMouseEvent* event) {
    if (auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self)) {
        vkcharselect->KCharSelect::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KCharSelect::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCharSelect_OnMouseMoveEvent(KCharSelect* self, intptr_t slot) {
    if (auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self))
        vkcharselect->kcharselect_mousemoveevent_callback = reinterpret_cast<VirtualKCharSelect::KCharSelect_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KCharSelect_WheelEvent(KCharSelect* self, QWheelEvent* event) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect) {
        vkcharselect->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCharSelect::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCharSelect_SuperWheelEvent(KCharSelect* self, QWheelEvent* event) {
    if (auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self)) {
        vkcharselect->KCharSelect::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method KCharSelect::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCharSelect_OnWheelEvent(KCharSelect* self, intptr_t slot) {
    if (auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self))
        vkcharselect->kcharselect_wheelevent_callback = reinterpret_cast<VirtualKCharSelect::KCharSelect_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void KCharSelect_KeyPressEvent(KCharSelect* self, QKeyEvent* event) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect) {
        vkcharselect->keyPressEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCharSelect::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCharSelect_SuperKeyPressEvent(KCharSelect* self, QKeyEvent* event) {
    if (auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self)) {
        vkcharselect->KCharSelect::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method KCharSelect::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCharSelect_OnKeyPressEvent(KCharSelect* self, intptr_t slot) {
    if (auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self))
        vkcharselect->kcharselect_keypressevent_callback = reinterpret_cast<VirtualKCharSelect::KCharSelect_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void KCharSelect_KeyReleaseEvent(KCharSelect* self, QKeyEvent* event) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect) {
        vkcharselect->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCharSelect::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCharSelect_SuperKeyReleaseEvent(KCharSelect* self, QKeyEvent* event) {
    if (auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self)) {
        vkcharselect->KCharSelect::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KCharSelect::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCharSelect_OnKeyReleaseEvent(KCharSelect* self, intptr_t slot) {
    if (auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self))
        vkcharselect->kcharselect_keyreleaseevent_callback = reinterpret_cast<VirtualKCharSelect::KCharSelect_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KCharSelect_FocusInEvent(KCharSelect* self, QFocusEvent* event) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect) {
        vkcharselect->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCharSelect::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCharSelect_SuperFocusInEvent(KCharSelect* self, QFocusEvent* event) {
    if (auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self)) {
        vkcharselect->KCharSelect::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method KCharSelect::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCharSelect_OnFocusInEvent(KCharSelect* self, intptr_t slot) {
    if (auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self))
        vkcharselect->kcharselect_focusinevent_callback = reinterpret_cast<VirtualKCharSelect::KCharSelect_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void KCharSelect_FocusOutEvent(KCharSelect* self, QFocusEvent* event) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect) {
        vkcharselect->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCharSelect::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCharSelect_SuperFocusOutEvent(KCharSelect* self, QFocusEvent* event) {
    if (auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self)) {
        vkcharselect->KCharSelect::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method KCharSelect::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCharSelect_OnFocusOutEvent(KCharSelect* self, intptr_t slot) {
    if (auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self))
        vkcharselect->kcharselect_focusoutevent_callback = reinterpret_cast<VirtualKCharSelect::KCharSelect_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void KCharSelect_EnterEvent(KCharSelect* self, QEnterEvent* event) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect) {
        vkcharselect->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCharSelect::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCharSelect_SuperEnterEvent(KCharSelect* self, QEnterEvent* event) {
    if (auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self)) {
        vkcharselect->KCharSelect::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method KCharSelect::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCharSelect_OnEnterEvent(KCharSelect* self, intptr_t slot) {
    if (auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self))
        vkcharselect->kcharselect_enterevent_callback = reinterpret_cast<VirtualKCharSelect::KCharSelect_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KCharSelect_LeaveEvent(KCharSelect* self, QEvent* event) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect) {
        vkcharselect->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCharSelect::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCharSelect_SuperLeaveEvent(KCharSelect* self, QEvent* event) {
    if (auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self)) {
        vkcharselect->KCharSelect::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KCharSelect::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCharSelect_OnLeaveEvent(KCharSelect* self, intptr_t slot) {
    if (auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self))
        vkcharselect->kcharselect_leaveevent_callback = reinterpret_cast<VirtualKCharSelect::KCharSelect_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KCharSelect_PaintEvent(KCharSelect* self, QPaintEvent* event) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect) {
        vkcharselect->paintEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCharSelect::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCharSelect_SuperPaintEvent(KCharSelect* self, QPaintEvent* event) {
    if (auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self)) {
        vkcharselect->KCharSelect::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method KCharSelect::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCharSelect_OnPaintEvent(KCharSelect* self, intptr_t slot) {
    if (auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self))
        vkcharselect->kcharselect_paintevent_callback = reinterpret_cast<VirtualKCharSelect::KCharSelect_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void KCharSelect_MoveEvent(KCharSelect* self, QMoveEvent* event) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect) {
        vkcharselect->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCharSelect::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCharSelect_SuperMoveEvent(KCharSelect* self, QMoveEvent* event) {
    if (auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self)) {
        vkcharselect->KCharSelect::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method KCharSelect::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCharSelect_OnMoveEvent(KCharSelect* self, intptr_t slot) {
    if (auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self))
        vkcharselect->kcharselect_moveevent_callback = reinterpret_cast<VirtualKCharSelect::KCharSelect_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KCharSelect_ResizeEvent(KCharSelect* self, QResizeEvent* event) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect) {
        vkcharselect->resizeEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCharSelect::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCharSelect_SuperResizeEvent(KCharSelect* self, QResizeEvent* event) {
    if (auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self)) {
        vkcharselect->KCharSelect::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method KCharSelect::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCharSelect_OnResizeEvent(KCharSelect* self, intptr_t slot) {
    if (auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self))
        vkcharselect->kcharselect_resizeevent_callback = reinterpret_cast<VirtualKCharSelect::KCharSelect_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void KCharSelect_CloseEvent(KCharSelect* self, QCloseEvent* event) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect) {
        vkcharselect->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCharSelect::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCharSelect_SuperCloseEvent(KCharSelect* self, QCloseEvent* event) {
    if (auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self)) {
        vkcharselect->KCharSelect::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method KCharSelect::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCharSelect_OnCloseEvent(KCharSelect* self, intptr_t slot) {
    if (auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self))
        vkcharselect->kcharselect_closeevent_callback = reinterpret_cast<VirtualKCharSelect::KCharSelect_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void KCharSelect_ContextMenuEvent(KCharSelect* self, QContextMenuEvent* event) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect) {
        vkcharselect->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCharSelect::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCharSelect_SuperContextMenuEvent(KCharSelect* self, QContextMenuEvent* event) {
    if (auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self)) {
        vkcharselect->KCharSelect::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method KCharSelect::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCharSelect_OnContextMenuEvent(KCharSelect* self, intptr_t slot) {
    if (auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self))
        vkcharselect->kcharselect_contextmenuevent_callback = reinterpret_cast<VirtualKCharSelect::KCharSelect_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void KCharSelect_TabletEvent(KCharSelect* self, QTabletEvent* event) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect) {
        vkcharselect->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCharSelect::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCharSelect_SuperTabletEvent(KCharSelect* self, QTabletEvent* event) {
    if (auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self)) {
        vkcharselect->KCharSelect::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method KCharSelect::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCharSelect_OnTabletEvent(KCharSelect* self, intptr_t slot) {
    if (auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self))
        vkcharselect->kcharselect_tabletevent_callback = reinterpret_cast<VirtualKCharSelect::KCharSelect_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void KCharSelect_ActionEvent(KCharSelect* self, QActionEvent* event) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect) {
        vkcharselect->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCharSelect::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCharSelect_SuperActionEvent(KCharSelect* self, QActionEvent* event) {
    if (auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self)) {
        vkcharselect->KCharSelect::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method KCharSelect::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCharSelect_OnActionEvent(KCharSelect* self, intptr_t slot) {
    if (auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self))
        vkcharselect->kcharselect_actionevent_callback = reinterpret_cast<VirtualKCharSelect::KCharSelect_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void KCharSelect_DragEnterEvent(KCharSelect* self, QDragEnterEvent* event) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect) {
        vkcharselect->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCharSelect::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCharSelect_SuperDragEnterEvent(KCharSelect* self, QDragEnterEvent* event) {
    if (auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self)) {
        vkcharselect->KCharSelect::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method KCharSelect::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCharSelect_OnDragEnterEvent(KCharSelect* self, intptr_t slot) {
    if (auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self))
        vkcharselect->kcharselect_dragenterevent_callback = reinterpret_cast<VirtualKCharSelect::KCharSelect_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KCharSelect_DragMoveEvent(KCharSelect* self, QDragMoveEvent* event) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect) {
        vkcharselect->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCharSelect::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCharSelect_SuperDragMoveEvent(KCharSelect* self, QDragMoveEvent* event) {
    if (auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self)) {
        vkcharselect->KCharSelect::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KCharSelect::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCharSelect_OnDragMoveEvent(KCharSelect* self, intptr_t slot) {
    if (auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self))
        vkcharselect->kcharselect_dragmoveevent_callback = reinterpret_cast<VirtualKCharSelect::KCharSelect_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KCharSelect_DragLeaveEvent(KCharSelect* self, QDragLeaveEvent* event) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect) {
        vkcharselect->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCharSelect::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCharSelect_SuperDragLeaveEvent(KCharSelect* self, QDragLeaveEvent* event) {
    if (auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self)) {
        vkcharselect->KCharSelect::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KCharSelect::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCharSelect_OnDragLeaveEvent(KCharSelect* self, intptr_t slot) {
    if (auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self))
        vkcharselect->kcharselect_dragleaveevent_callback = reinterpret_cast<VirtualKCharSelect::KCharSelect_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KCharSelect_DropEvent(KCharSelect* self, QDropEvent* event) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect) {
        vkcharselect->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCharSelect::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCharSelect_SuperDropEvent(KCharSelect* self, QDropEvent* event) {
    if (auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self)) {
        vkcharselect->KCharSelect::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method KCharSelect::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCharSelect_OnDropEvent(KCharSelect* self, intptr_t slot) {
    if (auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self))
        vkcharselect->kcharselect_dropevent_callback = reinterpret_cast<VirtualKCharSelect::KCharSelect_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void KCharSelect_ShowEvent(KCharSelect* self, QShowEvent* event) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect) {
        vkcharselect->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCharSelect::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCharSelect_SuperShowEvent(KCharSelect* self, QShowEvent* event) {
    if (auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self)) {
        vkcharselect->KCharSelect::showEvent(event);
    } else
        qFatal("Error: Protected virtual method KCharSelect::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCharSelect_OnShowEvent(KCharSelect* self, intptr_t slot) {
    if (auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self))
        vkcharselect->kcharselect_showevent_callback = reinterpret_cast<VirtualKCharSelect::KCharSelect_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void KCharSelect_HideEvent(KCharSelect* self, QHideEvent* event) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect) {
        vkcharselect->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCharSelect::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCharSelect_SuperHideEvent(KCharSelect* self, QHideEvent* event) {
    if (auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self)) {
        vkcharselect->KCharSelect::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method KCharSelect::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCharSelect_OnHideEvent(KCharSelect* self, intptr_t slot) {
    if (auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self))
        vkcharselect->kcharselect_hideevent_callback = reinterpret_cast<VirtualKCharSelect::KCharSelect_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool KCharSelect_NativeEvent(KCharSelect* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect) {
        return vkcharselect->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method KCharSelect::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool KCharSelect_SuperNativeEvent(KCharSelect* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self)) {
        return vkcharselect->KCharSelect::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method KCharSelect::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCharSelect_OnNativeEvent(KCharSelect* self, intptr_t slot) {
    if (auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self))
        vkcharselect->kcharselect_nativeevent_callback = reinterpret_cast<VirtualKCharSelect::KCharSelect_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
void KCharSelect_ChangeEvent(KCharSelect* self, QEvent* param1) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect) {
        vkcharselect->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KCharSelect::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCharSelect_SuperChangeEvent(KCharSelect* self, QEvent* param1) {
    if (auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self)) {
        vkcharselect->KCharSelect::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KCharSelect::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCharSelect_OnChangeEvent(KCharSelect* self, intptr_t slot) {
    if (auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self))
        vkcharselect->kcharselect_changeevent_callback = reinterpret_cast<VirtualKCharSelect::KCharSelect_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
int KCharSelect_Metric(const KCharSelect* self, int param1) {
    auto* vkcharselect = const_cast<VirtualKCharSelect*>(dynamic_cast<const VirtualKCharSelect*>(self));
    if (vkcharselect) {
        return vkcharselect->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method KCharSelect::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int KCharSelect_SuperMetric(const KCharSelect* self, int param1) {
    if (auto* vkcharselect = const_cast<VirtualKCharSelect*>(dynamic_cast<const VirtualKCharSelect*>(self))) {
        return vkcharselect->KCharSelect::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method KCharSelect::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCharSelect_OnMetric(KCharSelect* self, intptr_t slot) {
    if (auto* vkcharselect = const_cast<VirtualKCharSelect*>(dynamic_cast<const VirtualKCharSelect*>(self)))
        vkcharselect->kcharselect_metric_callback = reinterpret_cast<VirtualKCharSelect::KCharSelect_Metric_Callback>(slot);
}

// Derived class handler implementation
void KCharSelect_InitPainter(const KCharSelect* self, QPainter* painter) {
    auto* vkcharselect = const_cast<VirtualKCharSelect*>(dynamic_cast<const VirtualKCharSelect*>(self));
    if (vkcharselect) {
        vkcharselect->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method KCharSelect::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void KCharSelect_SuperInitPainter(const KCharSelect* self, QPainter* painter) {
    if (auto* vkcharselect = const_cast<VirtualKCharSelect*>(dynamic_cast<const VirtualKCharSelect*>(self))) {
        vkcharselect->KCharSelect::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method KCharSelect::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCharSelect_OnInitPainter(KCharSelect* self, intptr_t slot) {
    if (auto* vkcharselect = const_cast<VirtualKCharSelect*>(dynamic_cast<const VirtualKCharSelect*>(self)))
        vkcharselect->kcharselect_initpainter_callback = reinterpret_cast<VirtualKCharSelect::KCharSelect_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* KCharSelect_Redirected(const KCharSelect* self, QPoint* offset) {
    auto* vkcharselect = const_cast<VirtualKCharSelect*>(dynamic_cast<const VirtualKCharSelect*>(self));
    if (vkcharselect) {
        return vkcharselect->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method KCharSelect::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* KCharSelect_SuperRedirected(const KCharSelect* self, QPoint* offset) {
    if (auto* vkcharselect = const_cast<VirtualKCharSelect*>(dynamic_cast<const VirtualKCharSelect*>(self))) {
        return vkcharselect->KCharSelect::redirected(offset);
    } else
        qFatal("Error: Protected virtual method KCharSelect::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCharSelect_OnRedirected(KCharSelect* self, intptr_t slot) {
    if (auto* vkcharselect = const_cast<VirtualKCharSelect*>(dynamic_cast<const VirtualKCharSelect*>(self)))
        vkcharselect->kcharselect_redirected_callback = reinterpret_cast<VirtualKCharSelect::KCharSelect_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* KCharSelect_SharedPainter(const KCharSelect* self) {
    auto* vkcharselect = const_cast<VirtualKCharSelect*>(dynamic_cast<const VirtualKCharSelect*>(self));
    if (vkcharselect) {
        return vkcharselect->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method KCharSelect::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* KCharSelect_SuperSharedPainter(const KCharSelect* self) {
    if (auto* vkcharselect = const_cast<VirtualKCharSelect*>(dynamic_cast<const VirtualKCharSelect*>(self))) {
        return vkcharselect->KCharSelect::sharedPainter();
    } else
        qFatal("Error: Protected virtual method KCharSelect::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCharSelect_OnSharedPainter(KCharSelect* self, intptr_t slot) {
    if (auto* vkcharselect = const_cast<VirtualKCharSelect*>(dynamic_cast<const VirtualKCharSelect*>(self)))
        vkcharselect->kcharselect_sharedpainter_callback = reinterpret_cast<VirtualKCharSelect::KCharSelect_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void KCharSelect_InputMethodEvent(KCharSelect* self, QInputMethodEvent* param1) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect) {
        vkcharselect->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KCharSelect::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCharSelect_SuperInputMethodEvent(KCharSelect* self, QInputMethodEvent* param1) {
    if (auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self)) {
        vkcharselect->KCharSelect::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method KCharSelect::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCharSelect_OnInputMethodEvent(KCharSelect* self, intptr_t slot) {
    if (auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self))
        vkcharselect->kcharselect_inputmethodevent_callback = reinterpret_cast<VirtualKCharSelect::KCharSelect_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* KCharSelect_InputMethodQuery(const KCharSelect* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* KCharSelect_SuperInputMethodQuery(const KCharSelect* self, int param1) {
    return new QVariant(self->KCharSelect::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void KCharSelect_OnInputMethodQuery(KCharSelect* self, intptr_t slot) {
    if (auto* vkcharselect = const_cast<VirtualKCharSelect*>(dynamic_cast<const VirtualKCharSelect*>(self)))
        vkcharselect->kcharselect_inputmethodquery_callback = reinterpret_cast<VirtualKCharSelect::KCharSelect_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool KCharSelect_FocusNextPrevChild(KCharSelect* self, bool next) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect) {
        return vkcharselect->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method KCharSelect::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool KCharSelect_SuperFocusNextPrevChild(KCharSelect* self, bool next) {
    if (auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self)) {
        return vkcharselect->KCharSelect::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method KCharSelect::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCharSelect_OnFocusNextPrevChild(KCharSelect* self, intptr_t slot) {
    if (auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self))
        vkcharselect->kcharselect_focusnextprevchild_callback = reinterpret_cast<VirtualKCharSelect::KCharSelect_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
bool KCharSelect_EventFilter(KCharSelect* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KCharSelect_SuperEventFilter(KCharSelect* self, QObject* watched, QEvent* event) {
    return self->KCharSelect::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KCharSelect_OnEventFilter(KCharSelect* self, intptr_t slot) {
    if (auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self))
        vkcharselect->kcharselect_eventfilter_callback = reinterpret_cast<VirtualKCharSelect::KCharSelect_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KCharSelect_TimerEvent(KCharSelect* self, QTimerEvent* event) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect) {
        vkcharselect->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCharSelect::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCharSelect_SuperTimerEvent(KCharSelect* self, QTimerEvent* event) {
    if (auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self)) {
        vkcharselect->KCharSelect::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KCharSelect::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCharSelect_OnTimerEvent(KCharSelect* self, intptr_t slot) {
    if (auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self))
        vkcharselect->kcharselect_timerevent_callback = reinterpret_cast<VirtualKCharSelect::KCharSelect_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KCharSelect_ChildEvent(KCharSelect* self, QChildEvent* event) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect) {
        vkcharselect->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCharSelect::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCharSelect_SuperChildEvent(KCharSelect* self, QChildEvent* event) {
    if (auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self)) {
        vkcharselect->KCharSelect::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KCharSelect::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCharSelect_OnChildEvent(KCharSelect* self, intptr_t slot) {
    if (auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self))
        vkcharselect->kcharselect_childevent_callback = reinterpret_cast<VirtualKCharSelect::KCharSelect_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KCharSelect_CustomEvent(KCharSelect* self, QEvent* event) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect) {
        vkcharselect->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCharSelect::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCharSelect_SuperCustomEvent(KCharSelect* self, QEvent* event) {
    if (auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self)) {
        vkcharselect->KCharSelect::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KCharSelect::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCharSelect_OnCustomEvent(KCharSelect* self, intptr_t slot) {
    if (auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self))
        vkcharselect->kcharselect_customevent_callback = reinterpret_cast<VirtualKCharSelect::KCharSelect_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KCharSelect_ConnectNotify(KCharSelect* self, const QMetaMethod* signal) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect) {
        vkcharselect->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KCharSelect::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KCharSelect_SuperConnectNotify(KCharSelect* self, const QMetaMethod* signal) {
    if (auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self)) {
        vkcharselect->KCharSelect::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KCharSelect::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCharSelect_OnConnectNotify(KCharSelect* self, intptr_t slot) {
    if (auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self))
        vkcharselect->kcharselect_connectnotify_callback = reinterpret_cast<VirtualKCharSelect::KCharSelect_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KCharSelect_DisconnectNotify(KCharSelect* self, const QMetaMethod* signal) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect) {
        vkcharselect->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KCharSelect::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KCharSelect_SuperDisconnectNotify(KCharSelect* self, const QMetaMethod* signal) {
    if (auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self)) {
        vkcharselect->KCharSelect::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KCharSelect::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCharSelect_OnDisconnectNotify(KCharSelect* self, intptr_t slot) {
    if (auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self))
        vkcharselect->kcharselect_disconnectnotify_callback = reinterpret_cast<VirtualKCharSelect::KCharSelect_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void KCharSelect_UpdateMicroFocus(KCharSelect* self) {
    if (auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self)) {
        vkcharselect->VirtualKCharSelect::updateMicroFocus();
    } else
        qFatal("Error: Protected method KCharSelect::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void KCharSelect_Create(KCharSelect* self) {
    if (auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self)) {
        vkcharselect->VirtualKCharSelect::create();
    } else
        qFatal("Error: Protected method KCharSelect::create called without a directly constructed type");
}

// Derived class protected handler implementation
void KCharSelect_Destroy(KCharSelect* self) {
    if (auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self)) {
        vkcharselect->VirtualKCharSelect::destroy();
    } else
        qFatal("Error: Protected method KCharSelect::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool KCharSelect_FocusNextChild(KCharSelect* self) {
    if (auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self)) {
        return vkcharselect->VirtualKCharSelect::focusNextChild();
    } else
        qFatal("Error: Protected method KCharSelect::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool KCharSelect_FocusPreviousChild(KCharSelect* self) {
    if (auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self)) {
        return vkcharselect->VirtualKCharSelect::focusPreviousChild();
    } else
        qFatal("Error: Protected method KCharSelect::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KCharSelect_Sender(const KCharSelect* self) {
    if (auto* vkcharselect = const_cast<VirtualKCharSelect*>(dynamic_cast<const VirtualKCharSelect*>(self))) {
        return vkcharselect->VirtualKCharSelect::sender();
    } else
        qFatal("Error: Protected method KCharSelect::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KCharSelect_SenderSignalIndex(const KCharSelect* self) {
    if (auto* vkcharselect = const_cast<VirtualKCharSelect*>(dynamic_cast<const VirtualKCharSelect*>(self))) {
        return vkcharselect->VirtualKCharSelect::senderSignalIndex();
    } else
        qFatal("Error: Protected method KCharSelect::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KCharSelect_Receivers(const KCharSelect* self, const char* signal) {
    if (auto* vkcharselect = const_cast<VirtualKCharSelect*>(dynamic_cast<const VirtualKCharSelect*>(self))) {
        return vkcharselect->VirtualKCharSelect::receivers(signal);
    } else
        qFatal("Error: Protected method KCharSelect::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KCharSelect_IsSignalConnected(const KCharSelect* self, const QMetaMethod* signal) {
    if (auto* vkcharselect = const_cast<VirtualKCharSelect*>(dynamic_cast<const VirtualKCharSelect*>(self))) {
        return vkcharselect->VirtualKCharSelect::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KCharSelect::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double KCharSelect_GetDecodedMetricF(const KCharSelect* self, int metricA, int metricB) {
    if (auto* vkcharselect = const_cast<VirtualKCharSelect*>(dynamic_cast<const VirtualKCharSelect*>(self))) {
        return vkcharselect->VirtualKCharSelect::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method KCharSelect::getDecodedMetricF called without a directly constructed type");
}

void KCharSelect_Delete(KCharSelect* self) {
    delete self;
}
