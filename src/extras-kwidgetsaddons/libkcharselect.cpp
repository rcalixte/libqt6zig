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
#include <QByteArray>
#include <cstring>
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
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKCharSelect*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KCharSelect_Tr(const char* s) {
    QString _ret = KCharSelect::tr(s);
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
    auto* vkcharselect = dynamic_cast<const VirtualKCharSelect*>(self);
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        return new QSize(self->sizeHint());
    } else {
        return new QSize(((VirtualKCharSelect*)self)->sizeHint());
    }
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
    QChar** _arr = static_cast<QChar**>(malloc(sizeof(QChar*) * (_ret.size() + 1)));
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
    unsigned int* _arr = static_cast<unsigned int*>(malloc(sizeof(unsigned int) * (_ret.size() + 1)));
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
    KCharSelect::connect(self, &KCharSelect::currentFontChanged, [self, slotFunc](const QFont& font) {
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
    KCharSelect::connect(self, &KCharSelect::currentCharChanged, [self, slotFunc](const QChar& c) {
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
    KCharSelect::connect(self, &KCharSelect::currentCodePointChanged, [self, slotFunc](uint codePoint) {
        unsigned int sigval1 = static_cast<unsigned int>(codePoint);
        slotFunc(self, sigval1);
    });
}

void KCharSelect_DisplayedCharsChanged(KCharSelect* self) {
    self->displayedCharsChanged();
}

void KCharSelect_Connect_DisplayedCharsChanged(KCharSelect* self, intptr_t slot) {
    void (*slotFunc)(KCharSelect*) = reinterpret_cast<void (*)(KCharSelect*)>(slot);
    KCharSelect::connect(self, &KCharSelect::displayedCharsChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void KCharSelect_CharSelected(KCharSelect* self, const QChar* c) {
    self->charSelected(*c);
}

void KCharSelect_Connect_CharSelected(KCharSelect* self, intptr_t slot) {
    void (*slotFunc)(KCharSelect*, QChar*) = reinterpret_cast<void (*)(KCharSelect*, QChar*)>(slot);
    KCharSelect::connect(self, &KCharSelect::charSelected, [self, slotFunc](const QChar& c) {
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
    KCharSelect::connect(self, &KCharSelect::codePointSelected, [self, slotFunc](uint codePoint) {
        unsigned int sigval1 = static_cast<unsigned int>(codePoint);
        slotFunc(self, sigval1);
    });
}

libqt_string KCharSelect_Tr2(const char* s, const char* c) {
    QString _ret = KCharSelect::tr(s, c);
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
    QString _ret = KCharSelect::tr(s, c, static_cast<int>(n));
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
int KCharSelect_QBaseMetacall(KCharSelect* self, int param1, int param2, void** param3) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->setKCharSelect_Metacall_IsBase(true);
        return vkcharselect->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KCharSelect::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KCharSelect_OnMetacall(KCharSelect* self, intptr_t slot) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->setKCharSelect_Metacall_Callback(reinterpret_cast<VirtualKCharSelect::KCharSelect_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
QSize* KCharSelect_QBaseSizeHint(const KCharSelect* self) {
    auto* vkcharselect = const_cast<VirtualKCharSelect*>(dynamic_cast<const VirtualKCharSelect*>(self));
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->setKCharSelect_SizeHint_IsBase(true);
        return new QSize(vkcharselect->sizeHint());
    } else {
        return new QSize(((VirtualKCharSelect*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KCharSelect_OnSizeHint(const KCharSelect* self, intptr_t slot) {
    auto* vkcharselect = const_cast<VirtualKCharSelect*>(dynamic_cast<const VirtualKCharSelect*>(self));
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->setKCharSelect_SizeHint_Callback(reinterpret_cast<VirtualKCharSelect::KCharSelect_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
int KCharSelect_DevType(const KCharSelect* self) {
    auto* vkcharselect = const_cast<VirtualKCharSelect*>(dynamic_cast<const VirtualKCharSelect*>(self));
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        return vkcharselect->devType();
    } else {
        return self->KCharSelect::devType();
    }
}

// Base class handler implementation
int KCharSelect_QBaseDevType(const KCharSelect* self) {
    auto* vkcharselect = const_cast<VirtualKCharSelect*>(dynamic_cast<const VirtualKCharSelect*>(self));
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->setKCharSelect_DevType_IsBase(true);
        return vkcharselect->devType();
    } else {
        return self->KCharSelect::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void KCharSelect_OnDevType(const KCharSelect* self, intptr_t slot) {
    auto* vkcharselect = const_cast<VirtualKCharSelect*>(dynamic_cast<const VirtualKCharSelect*>(self));
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->setKCharSelect_DevType_Callback(reinterpret_cast<VirtualKCharSelect::KCharSelect_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void KCharSelect_SetVisible(KCharSelect* self, bool visible) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->setVisible(visible);
    } else {
        self->KCharSelect::setVisible(visible);
    }
}

// Base class handler implementation
void KCharSelect_QBaseSetVisible(KCharSelect* self, bool visible) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->setKCharSelect_SetVisible_IsBase(true);
        vkcharselect->setVisible(visible);
    } else {
        self->KCharSelect::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void KCharSelect_OnSetVisible(KCharSelect* self, intptr_t slot) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->setKCharSelect_SetVisible_Callback(reinterpret_cast<VirtualKCharSelect::KCharSelect_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KCharSelect_MinimumSizeHint(const KCharSelect* self) {
    auto* vkcharselect = const_cast<VirtualKCharSelect*>(dynamic_cast<const VirtualKCharSelect*>(self));
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        return new QSize(vkcharselect->minimumSizeHint());
    } else {
        return new QSize(((VirtualKCharSelect*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* KCharSelect_QBaseMinimumSizeHint(const KCharSelect* self) {
    auto* vkcharselect = const_cast<VirtualKCharSelect*>(dynamic_cast<const VirtualKCharSelect*>(self));
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->setKCharSelect_MinimumSizeHint_IsBase(true);
        return new QSize(vkcharselect->minimumSizeHint());
    } else {
        return new QSize(((VirtualKCharSelect*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KCharSelect_OnMinimumSizeHint(const KCharSelect* self, intptr_t slot) {
    auto* vkcharselect = const_cast<VirtualKCharSelect*>(dynamic_cast<const VirtualKCharSelect*>(self));
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->setKCharSelect_MinimumSizeHint_Callback(reinterpret_cast<VirtualKCharSelect::KCharSelect_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
int KCharSelect_HeightForWidth(const KCharSelect* self, int param1) {
    auto* vkcharselect = const_cast<VirtualKCharSelect*>(dynamic_cast<const VirtualKCharSelect*>(self));
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        return vkcharselect->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KCharSelect::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int KCharSelect_QBaseHeightForWidth(const KCharSelect* self, int param1) {
    auto* vkcharselect = const_cast<VirtualKCharSelect*>(dynamic_cast<const VirtualKCharSelect*>(self));
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->setKCharSelect_HeightForWidth_IsBase(true);
        return vkcharselect->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KCharSelect::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KCharSelect_OnHeightForWidth(const KCharSelect* self, intptr_t slot) {
    auto* vkcharselect = const_cast<VirtualKCharSelect*>(dynamic_cast<const VirtualKCharSelect*>(self));
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->setKCharSelect_HeightForWidth_Callback(reinterpret_cast<VirtualKCharSelect::KCharSelect_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool KCharSelect_HasHeightForWidth(const KCharSelect* self) {
    auto* vkcharselect = const_cast<VirtualKCharSelect*>(dynamic_cast<const VirtualKCharSelect*>(self));
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        return vkcharselect->hasHeightForWidth();
    } else {
        return self->KCharSelect::hasHeightForWidth();
    }
}

// Base class handler implementation
bool KCharSelect_QBaseHasHeightForWidth(const KCharSelect* self) {
    auto* vkcharselect = const_cast<VirtualKCharSelect*>(dynamic_cast<const VirtualKCharSelect*>(self));
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->setKCharSelect_HasHeightForWidth_IsBase(true);
        return vkcharselect->hasHeightForWidth();
    } else {
        return self->KCharSelect::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void KCharSelect_OnHasHeightForWidth(const KCharSelect* self, intptr_t slot) {
    auto* vkcharselect = const_cast<VirtualKCharSelect*>(dynamic_cast<const VirtualKCharSelect*>(self));
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->setKCharSelect_HasHeightForWidth_Callback(reinterpret_cast<VirtualKCharSelect::KCharSelect_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* KCharSelect_PaintEngine(const KCharSelect* self) {
    auto* vkcharselect = const_cast<VirtualKCharSelect*>(dynamic_cast<const VirtualKCharSelect*>(self));
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        return vkcharselect->paintEngine();
    } else {
        return self->KCharSelect::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* KCharSelect_QBasePaintEngine(const KCharSelect* self) {
    auto* vkcharselect = const_cast<VirtualKCharSelect*>(dynamic_cast<const VirtualKCharSelect*>(self));
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->setKCharSelect_PaintEngine_IsBase(true);
        return vkcharselect->paintEngine();
    } else {
        return self->KCharSelect::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void KCharSelect_OnPaintEngine(const KCharSelect* self, intptr_t slot) {
    auto* vkcharselect = const_cast<VirtualKCharSelect*>(dynamic_cast<const VirtualKCharSelect*>(self));
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->setKCharSelect_PaintEngine_Callback(reinterpret_cast<VirtualKCharSelect::KCharSelect_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
bool KCharSelect_Event(KCharSelect* self, QEvent* event) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        return vkcharselect->event(event);
    } else {
        return ((VirtualKCharSelect*)self)->event(event);
    }
}

// Base class handler implementation
bool KCharSelect_QBaseEvent(KCharSelect* self, QEvent* event) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->setKCharSelect_Event_IsBase(true);
        return vkcharselect->event(event);
    } else {
        return ((VirtualKCharSelect*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCharSelect_OnEvent(KCharSelect* self, intptr_t slot) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->setKCharSelect_Event_Callback(reinterpret_cast<VirtualKCharSelect::KCharSelect_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void KCharSelect_MousePressEvent(KCharSelect* self, QMouseEvent* event) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->mousePressEvent(event);
    } else {
        ((VirtualKCharSelect*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void KCharSelect_QBaseMousePressEvent(KCharSelect* self, QMouseEvent* event) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->setKCharSelect_MousePressEvent_IsBase(true);
        vkcharselect->mousePressEvent(event);
    } else {
        ((VirtualKCharSelect*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCharSelect_OnMousePressEvent(KCharSelect* self, intptr_t slot) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->setKCharSelect_MousePressEvent_Callback(reinterpret_cast<VirtualKCharSelect::KCharSelect_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCharSelect_MouseReleaseEvent(KCharSelect* self, QMouseEvent* event) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->mouseReleaseEvent(event);
    } else {
        ((VirtualKCharSelect*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void KCharSelect_QBaseMouseReleaseEvent(KCharSelect* self, QMouseEvent* event) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->setKCharSelect_MouseReleaseEvent_IsBase(true);
        vkcharselect->mouseReleaseEvent(event);
    } else {
        ((VirtualKCharSelect*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCharSelect_OnMouseReleaseEvent(KCharSelect* self, intptr_t slot) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->setKCharSelect_MouseReleaseEvent_Callback(reinterpret_cast<VirtualKCharSelect::KCharSelect_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCharSelect_MouseDoubleClickEvent(KCharSelect* self, QMouseEvent* event) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKCharSelect*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void KCharSelect_QBaseMouseDoubleClickEvent(KCharSelect* self, QMouseEvent* event) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->setKCharSelect_MouseDoubleClickEvent_IsBase(true);
        vkcharselect->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKCharSelect*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCharSelect_OnMouseDoubleClickEvent(KCharSelect* self, intptr_t slot) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->setKCharSelect_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualKCharSelect::KCharSelect_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCharSelect_MouseMoveEvent(KCharSelect* self, QMouseEvent* event) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->mouseMoveEvent(event);
    } else {
        ((VirtualKCharSelect*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void KCharSelect_QBaseMouseMoveEvent(KCharSelect* self, QMouseEvent* event) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->setKCharSelect_MouseMoveEvent_IsBase(true);
        vkcharselect->mouseMoveEvent(event);
    } else {
        ((VirtualKCharSelect*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCharSelect_OnMouseMoveEvent(KCharSelect* self, intptr_t slot) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->setKCharSelect_MouseMoveEvent_Callback(reinterpret_cast<VirtualKCharSelect::KCharSelect_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCharSelect_WheelEvent(KCharSelect* self, QWheelEvent* event) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->wheelEvent(event);
    } else {
        ((VirtualKCharSelect*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void KCharSelect_QBaseWheelEvent(KCharSelect* self, QWheelEvent* event) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->setKCharSelect_WheelEvent_IsBase(true);
        vkcharselect->wheelEvent(event);
    } else {
        ((VirtualKCharSelect*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCharSelect_OnWheelEvent(KCharSelect* self, intptr_t slot) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->setKCharSelect_WheelEvent_Callback(reinterpret_cast<VirtualKCharSelect::KCharSelect_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCharSelect_KeyPressEvent(KCharSelect* self, QKeyEvent* event) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->keyPressEvent(event);
    } else {
        ((VirtualKCharSelect*)self)->keyPressEvent(event);
    }
}

// Base class handler implementation
void KCharSelect_QBaseKeyPressEvent(KCharSelect* self, QKeyEvent* event) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->setKCharSelect_KeyPressEvent_IsBase(true);
        vkcharselect->keyPressEvent(event);
    } else {
        ((VirtualKCharSelect*)self)->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCharSelect_OnKeyPressEvent(KCharSelect* self, intptr_t slot) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->setKCharSelect_KeyPressEvent_Callback(reinterpret_cast<VirtualKCharSelect::KCharSelect_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCharSelect_KeyReleaseEvent(KCharSelect* self, QKeyEvent* event) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->keyReleaseEvent(event);
    } else {
        ((VirtualKCharSelect*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void KCharSelect_QBaseKeyReleaseEvent(KCharSelect* self, QKeyEvent* event) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->setKCharSelect_KeyReleaseEvent_IsBase(true);
        vkcharselect->keyReleaseEvent(event);
    } else {
        ((VirtualKCharSelect*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCharSelect_OnKeyReleaseEvent(KCharSelect* self, intptr_t slot) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->setKCharSelect_KeyReleaseEvent_Callback(reinterpret_cast<VirtualKCharSelect::KCharSelect_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCharSelect_FocusInEvent(KCharSelect* self, QFocusEvent* event) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->focusInEvent(event);
    } else {
        ((VirtualKCharSelect*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void KCharSelect_QBaseFocusInEvent(KCharSelect* self, QFocusEvent* event) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->setKCharSelect_FocusInEvent_IsBase(true);
        vkcharselect->focusInEvent(event);
    } else {
        ((VirtualKCharSelect*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCharSelect_OnFocusInEvent(KCharSelect* self, intptr_t slot) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->setKCharSelect_FocusInEvent_Callback(reinterpret_cast<VirtualKCharSelect::KCharSelect_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCharSelect_FocusOutEvent(KCharSelect* self, QFocusEvent* event) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->focusOutEvent(event);
    } else {
        ((VirtualKCharSelect*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void KCharSelect_QBaseFocusOutEvent(KCharSelect* self, QFocusEvent* event) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->setKCharSelect_FocusOutEvent_IsBase(true);
        vkcharselect->focusOutEvent(event);
    } else {
        ((VirtualKCharSelect*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCharSelect_OnFocusOutEvent(KCharSelect* self, intptr_t slot) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->setKCharSelect_FocusOutEvent_Callback(reinterpret_cast<VirtualKCharSelect::KCharSelect_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCharSelect_EnterEvent(KCharSelect* self, QEnterEvent* event) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->enterEvent(event);
    } else {
        ((VirtualKCharSelect*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void KCharSelect_QBaseEnterEvent(KCharSelect* self, QEnterEvent* event) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->setKCharSelect_EnterEvent_IsBase(true);
        vkcharselect->enterEvent(event);
    } else {
        ((VirtualKCharSelect*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCharSelect_OnEnterEvent(KCharSelect* self, intptr_t slot) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->setKCharSelect_EnterEvent_Callback(reinterpret_cast<VirtualKCharSelect::KCharSelect_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCharSelect_LeaveEvent(KCharSelect* self, QEvent* event) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->leaveEvent(event);
    } else {
        ((VirtualKCharSelect*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void KCharSelect_QBaseLeaveEvent(KCharSelect* self, QEvent* event) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->setKCharSelect_LeaveEvent_IsBase(true);
        vkcharselect->leaveEvent(event);
    } else {
        ((VirtualKCharSelect*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCharSelect_OnLeaveEvent(KCharSelect* self, intptr_t slot) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->setKCharSelect_LeaveEvent_Callback(reinterpret_cast<VirtualKCharSelect::KCharSelect_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCharSelect_PaintEvent(KCharSelect* self, QPaintEvent* event) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->paintEvent(event);
    } else {
        ((VirtualKCharSelect*)self)->paintEvent(event);
    }
}

// Base class handler implementation
void KCharSelect_QBasePaintEvent(KCharSelect* self, QPaintEvent* event) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->setKCharSelect_PaintEvent_IsBase(true);
        vkcharselect->paintEvent(event);
    } else {
        ((VirtualKCharSelect*)self)->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCharSelect_OnPaintEvent(KCharSelect* self, intptr_t slot) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->setKCharSelect_PaintEvent_Callback(reinterpret_cast<VirtualKCharSelect::KCharSelect_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCharSelect_MoveEvent(KCharSelect* self, QMoveEvent* event) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->moveEvent(event);
    } else {
        ((VirtualKCharSelect*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void KCharSelect_QBaseMoveEvent(KCharSelect* self, QMoveEvent* event) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->setKCharSelect_MoveEvent_IsBase(true);
        vkcharselect->moveEvent(event);
    } else {
        ((VirtualKCharSelect*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCharSelect_OnMoveEvent(KCharSelect* self, intptr_t slot) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->setKCharSelect_MoveEvent_Callback(reinterpret_cast<VirtualKCharSelect::KCharSelect_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCharSelect_ResizeEvent(KCharSelect* self, QResizeEvent* event) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->resizeEvent(event);
    } else {
        ((VirtualKCharSelect*)self)->resizeEvent(event);
    }
}

// Base class handler implementation
void KCharSelect_QBaseResizeEvent(KCharSelect* self, QResizeEvent* event) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->setKCharSelect_ResizeEvent_IsBase(true);
        vkcharselect->resizeEvent(event);
    } else {
        ((VirtualKCharSelect*)self)->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCharSelect_OnResizeEvent(KCharSelect* self, intptr_t slot) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->setKCharSelect_ResizeEvent_Callback(reinterpret_cast<VirtualKCharSelect::KCharSelect_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCharSelect_CloseEvent(KCharSelect* self, QCloseEvent* event) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->closeEvent(event);
    } else {
        ((VirtualKCharSelect*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void KCharSelect_QBaseCloseEvent(KCharSelect* self, QCloseEvent* event) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->setKCharSelect_CloseEvent_IsBase(true);
        vkcharselect->closeEvent(event);
    } else {
        ((VirtualKCharSelect*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCharSelect_OnCloseEvent(KCharSelect* self, intptr_t slot) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->setKCharSelect_CloseEvent_Callback(reinterpret_cast<VirtualKCharSelect::KCharSelect_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCharSelect_ContextMenuEvent(KCharSelect* self, QContextMenuEvent* event) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->contextMenuEvent(event);
    } else {
        ((VirtualKCharSelect*)self)->contextMenuEvent(event);
    }
}

// Base class handler implementation
void KCharSelect_QBaseContextMenuEvent(KCharSelect* self, QContextMenuEvent* event) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->setKCharSelect_ContextMenuEvent_IsBase(true);
        vkcharselect->contextMenuEvent(event);
    } else {
        ((VirtualKCharSelect*)self)->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCharSelect_OnContextMenuEvent(KCharSelect* self, intptr_t slot) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->setKCharSelect_ContextMenuEvent_Callback(reinterpret_cast<VirtualKCharSelect::KCharSelect_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCharSelect_TabletEvent(KCharSelect* self, QTabletEvent* event) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->tabletEvent(event);
    } else {
        ((VirtualKCharSelect*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void KCharSelect_QBaseTabletEvent(KCharSelect* self, QTabletEvent* event) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->setKCharSelect_TabletEvent_IsBase(true);
        vkcharselect->tabletEvent(event);
    } else {
        ((VirtualKCharSelect*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCharSelect_OnTabletEvent(KCharSelect* self, intptr_t slot) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->setKCharSelect_TabletEvent_Callback(reinterpret_cast<VirtualKCharSelect::KCharSelect_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCharSelect_ActionEvent(KCharSelect* self, QActionEvent* event) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->actionEvent(event);
    } else {
        ((VirtualKCharSelect*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void KCharSelect_QBaseActionEvent(KCharSelect* self, QActionEvent* event) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->setKCharSelect_ActionEvent_IsBase(true);
        vkcharselect->actionEvent(event);
    } else {
        ((VirtualKCharSelect*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCharSelect_OnActionEvent(KCharSelect* self, intptr_t slot) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->setKCharSelect_ActionEvent_Callback(reinterpret_cast<VirtualKCharSelect::KCharSelect_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCharSelect_DragEnterEvent(KCharSelect* self, QDragEnterEvent* event) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->dragEnterEvent(event);
    } else {
        ((VirtualKCharSelect*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void KCharSelect_QBaseDragEnterEvent(KCharSelect* self, QDragEnterEvent* event) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->setKCharSelect_DragEnterEvent_IsBase(true);
        vkcharselect->dragEnterEvent(event);
    } else {
        ((VirtualKCharSelect*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCharSelect_OnDragEnterEvent(KCharSelect* self, intptr_t slot) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->setKCharSelect_DragEnterEvent_Callback(reinterpret_cast<VirtualKCharSelect::KCharSelect_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCharSelect_DragMoveEvent(KCharSelect* self, QDragMoveEvent* event) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->dragMoveEvent(event);
    } else {
        ((VirtualKCharSelect*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void KCharSelect_QBaseDragMoveEvent(KCharSelect* self, QDragMoveEvent* event) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->setKCharSelect_DragMoveEvent_IsBase(true);
        vkcharselect->dragMoveEvent(event);
    } else {
        ((VirtualKCharSelect*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCharSelect_OnDragMoveEvent(KCharSelect* self, intptr_t slot) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->setKCharSelect_DragMoveEvent_Callback(reinterpret_cast<VirtualKCharSelect::KCharSelect_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCharSelect_DragLeaveEvent(KCharSelect* self, QDragLeaveEvent* event) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->dragLeaveEvent(event);
    } else {
        ((VirtualKCharSelect*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void KCharSelect_QBaseDragLeaveEvent(KCharSelect* self, QDragLeaveEvent* event) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->setKCharSelect_DragLeaveEvent_IsBase(true);
        vkcharselect->dragLeaveEvent(event);
    } else {
        ((VirtualKCharSelect*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCharSelect_OnDragLeaveEvent(KCharSelect* self, intptr_t slot) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->setKCharSelect_DragLeaveEvent_Callback(reinterpret_cast<VirtualKCharSelect::KCharSelect_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCharSelect_DropEvent(KCharSelect* self, QDropEvent* event) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->dropEvent(event);
    } else {
        ((VirtualKCharSelect*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void KCharSelect_QBaseDropEvent(KCharSelect* self, QDropEvent* event) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->setKCharSelect_DropEvent_IsBase(true);
        vkcharselect->dropEvent(event);
    } else {
        ((VirtualKCharSelect*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCharSelect_OnDropEvent(KCharSelect* self, intptr_t slot) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->setKCharSelect_DropEvent_Callback(reinterpret_cast<VirtualKCharSelect::KCharSelect_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCharSelect_ShowEvent(KCharSelect* self, QShowEvent* event) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->showEvent(event);
    } else {
        ((VirtualKCharSelect*)self)->showEvent(event);
    }
}

// Base class handler implementation
void KCharSelect_QBaseShowEvent(KCharSelect* self, QShowEvent* event) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->setKCharSelect_ShowEvent_IsBase(true);
        vkcharselect->showEvent(event);
    } else {
        ((VirtualKCharSelect*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCharSelect_OnShowEvent(KCharSelect* self, intptr_t slot) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->setKCharSelect_ShowEvent_Callback(reinterpret_cast<VirtualKCharSelect::KCharSelect_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCharSelect_HideEvent(KCharSelect* self, QHideEvent* event) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->hideEvent(event);
    } else {
        ((VirtualKCharSelect*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void KCharSelect_QBaseHideEvent(KCharSelect* self, QHideEvent* event) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->setKCharSelect_HideEvent_IsBase(true);
        vkcharselect->hideEvent(event);
    } else {
        ((VirtualKCharSelect*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCharSelect_OnHideEvent(KCharSelect* self, intptr_t slot) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->setKCharSelect_HideEvent_Callback(reinterpret_cast<VirtualKCharSelect::KCharSelect_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KCharSelect_NativeEvent(KCharSelect* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        return vkcharselect->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKCharSelect*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool KCharSelect_QBaseNativeEvent(KCharSelect* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->setKCharSelect_NativeEvent_IsBase(true);
        return vkcharselect->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKCharSelect*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void KCharSelect_OnNativeEvent(KCharSelect* self, intptr_t slot) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->setKCharSelect_NativeEvent_Callback(reinterpret_cast<VirtualKCharSelect::KCharSelect_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCharSelect_ChangeEvent(KCharSelect* self, QEvent* param1) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->changeEvent(param1);
    } else {
        ((VirtualKCharSelect*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void KCharSelect_QBaseChangeEvent(KCharSelect* self, QEvent* param1) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->setKCharSelect_ChangeEvent_IsBase(true);
        vkcharselect->changeEvent(param1);
    } else {
        ((VirtualKCharSelect*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KCharSelect_OnChangeEvent(KCharSelect* self, intptr_t slot) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->setKCharSelect_ChangeEvent_Callback(reinterpret_cast<VirtualKCharSelect::KCharSelect_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int KCharSelect_Metric(const KCharSelect* self, int param1) {
    auto* vkcharselect = const_cast<VirtualKCharSelect*>(dynamic_cast<const VirtualKCharSelect*>(self));
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        return vkcharselect->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKCharSelect*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int KCharSelect_QBaseMetric(const KCharSelect* self, int param1) {
    auto* vkcharselect = const_cast<VirtualKCharSelect*>(dynamic_cast<const VirtualKCharSelect*>(self));
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->setKCharSelect_Metric_IsBase(true);
        return vkcharselect->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKCharSelect*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KCharSelect_OnMetric(const KCharSelect* self, intptr_t slot) {
    auto* vkcharselect = const_cast<VirtualKCharSelect*>(dynamic_cast<const VirtualKCharSelect*>(self));
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->setKCharSelect_Metric_Callback(reinterpret_cast<VirtualKCharSelect::KCharSelect_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void KCharSelect_InitPainter(const KCharSelect* self, QPainter* painter) {
    auto* vkcharselect = const_cast<VirtualKCharSelect*>(dynamic_cast<const VirtualKCharSelect*>(self));
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->initPainter(painter);
    } else {
        ((VirtualKCharSelect*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void KCharSelect_QBaseInitPainter(const KCharSelect* self, QPainter* painter) {
    auto* vkcharselect = const_cast<VirtualKCharSelect*>(dynamic_cast<const VirtualKCharSelect*>(self));
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->setKCharSelect_InitPainter_IsBase(true);
        vkcharselect->initPainter(painter);
    } else {
        ((VirtualKCharSelect*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void KCharSelect_OnInitPainter(const KCharSelect* self, intptr_t slot) {
    auto* vkcharselect = const_cast<VirtualKCharSelect*>(dynamic_cast<const VirtualKCharSelect*>(self));
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->setKCharSelect_InitPainter_Callback(reinterpret_cast<VirtualKCharSelect::KCharSelect_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* KCharSelect_Redirected(const KCharSelect* self, QPoint* offset) {
    auto* vkcharselect = const_cast<VirtualKCharSelect*>(dynamic_cast<const VirtualKCharSelect*>(self));
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        return vkcharselect->redirected(offset);
    } else {
        return ((VirtualKCharSelect*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* KCharSelect_QBaseRedirected(const KCharSelect* self, QPoint* offset) {
    auto* vkcharselect = const_cast<VirtualKCharSelect*>(dynamic_cast<const VirtualKCharSelect*>(self));
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->setKCharSelect_Redirected_IsBase(true);
        return vkcharselect->redirected(offset);
    } else {
        return ((VirtualKCharSelect*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void KCharSelect_OnRedirected(const KCharSelect* self, intptr_t slot) {
    auto* vkcharselect = const_cast<VirtualKCharSelect*>(dynamic_cast<const VirtualKCharSelect*>(self));
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->setKCharSelect_Redirected_Callback(reinterpret_cast<VirtualKCharSelect::KCharSelect_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* KCharSelect_SharedPainter(const KCharSelect* self) {
    auto* vkcharselect = const_cast<VirtualKCharSelect*>(dynamic_cast<const VirtualKCharSelect*>(self));
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        return vkcharselect->sharedPainter();
    } else {
        return ((VirtualKCharSelect*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* KCharSelect_QBaseSharedPainter(const KCharSelect* self) {
    auto* vkcharselect = const_cast<VirtualKCharSelect*>(dynamic_cast<const VirtualKCharSelect*>(self));
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->setKCharSelect_SharedPainter_IsBase(true);
        return vkcharselect->sharedPainter();
    } else {
        return ((VirtualKCharSelect*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void KCharSelect_OnSharedPainter(const KCharSelect* self, intptr_t slot) {
    auto* vkcharselect = const_cast<VirtualKCharSelect*>(dynamic_cast<const VirtualKCharSelect*>(self));
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->setKCharSelect_SharedPainter_Callback(reinterpret_cast<VirtualKCharSelect::KCharSelect_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void KCharSelect_InputMethodEvent(KCharSelect* self, QInputMethodEvent* param1) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->inputMethodEvent(param1);
    } else {
        ((VirtualKCharSelect*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void KCharSelect_QBaseInputMethodEvent(KCharSelect* self, QInputMethodEvent* param1) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->setKCharSelect_InputMethodEvent_IsBase(true);
        vkcharselect->inputMethodEvent(param1);
    } else {
        ((VirtualKCharSelect*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KCharSelect_OnInputMethodEvent(KCharSelect* self, intptr_t slot) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->setKCharSelect_InputMethodEvent_Callback(reinterpret_cast<VirtualKCharSelect::KCharSelect_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* KCharSelect_InputMethodQuery(const KCharSelect* self, int param1) {
    auto* vkcharselect = const_cast<VirtualKCharSelect*>(dynamic_cast<const VirtualKCharSelect*>(self));
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        return new QVariant(vkcharselect->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKCharSelect*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* KCharSelect_QBaseInputMethodQuery(const KCharSelect* self, int param1) {
    auto* vkcharselect = const_cast<VirtualKCharSelect*>(dynamic_cast<const VirtualKCharSelect*>(self));
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->setKCharSelect_InputMethodQuery_IsBase(true);
        return new QVariant(vkcharselect->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKCharSelect*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void KCharSelect_OnInputMethodQuery(const KCharSelect* self, intptr_t slot) {
    auto* vkcharselect = const_cast<VirtualKCharSelect*>(dynamic_cast<const VirtualKCharSelect*>(self));
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->setKCharSelect_InputMethodQuery_Callback(reinterpret_cast<VirtualKCharSelect::KCharSelect_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool KCharSelect_FocusNextPrevChild(KCharSelect* self, bool next) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        return vkcharselect->focusNextPrevChild(next);
    } else {
        return ((VirtualKCharSelect*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool KCharSelect_QBaseFocusNextPrevChild(KCharSelect* self, bool next) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->setKCharSelect_FocusNextPrevChild_IsBase(true);
        return vkcharselect->focusNextPrevChild(next);
    } else {
        return ((VirtualKCharSelect*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void KCharSelect_OnFocusNextPrevChild(KCharSelect* self, intptr_t slot) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->setKCharSelect_FocusNextPrevChild_Callback(reinterpret_cast<VirtualKCharSelect::KCharSelect_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KCharSelect_EventFilter(KCharSelect* self, QObject* watched, QEvent* event) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        return vkcharselect->eventFilter(watched, event);
    } else {
        return self->KCharSelect::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KCharSelect_QBaseEventFilter(KCharSelect* self, QObject* watched, QEvent* event) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->setKCharSelect_EventFilter_IsBase(true);
        return vkcharselect->eventFilter(watched, event);
    } else {
        return self->KCharSelect::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCharSelect_OnEventFilter(KCharSelect* self, intptr_t slot) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->setKCharSelect_EventFilter_Callback(reinterpret_cast<VirtualKCharSelect::KCharSelect_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KCharSelect_TimerEvent(KCharSelect* self, QTimerEvent* event) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->timerEvent(event);
    } else {
        ((VirtualKCharSelect*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KCharSelect_QBaseTimerEvent(KCharSelect* self, QTimerEvent* event) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->setKCharSelect_TimerEvent_IsBase(true);
        vkcharselect->timerEvent(event);
    } else {
        ((VirtualKCharSelect*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCharSelect_OnTimerEvent(KCharSelect* self, intptr_t slot) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->setKCharSelect_TimerEvent_Callback(reinterpret_cast<VirtualKCharSelect::KCharSelect_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCharSelect_ChildEvent(KCharSelect* self, QChildEvent* event) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->childEvent(event);
    } else {
        ((VirtualKCharSelect*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KCharSelect_QBaseChildEvent(KCharSelect* self, QChildEvent* event) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->setKCharSelect_ChildEvent_IsBase(true);
        vkcharselect->childEvent(event);
    } else {
        ((VirtualKCharSelect*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCharSelect_OnChildEvent(KCharSelect* self, intptr_t slot) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->setKCharSelect_ChildEvent_Callback(reinterpret_cast<VirtualKCharSelect::KCharSelect_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCharSelect_CustomEvent(KCharSelect* self, QEvent* event) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->customEvent(event);
    } else {
        ((VirtualKCharSelect*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KCharSelect_QBaseCustomEvent(KCharSelect* self, QEvent* event) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->setKCharSelect_CustomEvent_IsBase(true);
        vkcharselect->customEvent(event);
    } else {
        ((VirtualKCharSelect*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCharSelect_OnCustomEvent(KCharSelect* self, intptr_t slot) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->setKCharSelect_CustomEvent_Callback(reinterpret_cast<VirtualKCharSelect::KCharSelect_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCharSelect_ConnectNotify(KCharSelect* self, const QMetaMethod* signal) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->connectNotify(*signal);
    } else {
        ((VirtualKCharSelect*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KCharSelect_QBaseConnectNotify(KCharSelect* self, const QMetaMethod* signal) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->setKCharSelect_ConnectNotify_IsBase(true);
        vkcharselect->connectNotify(*signal);
    } else {
        ((VirtualKCharSelect*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KCharSelect_OnConnectNotify(KCharSelect* self, intptr_t slot) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->setKCharSelect_ConnectNotify_Callback(reinterpret_cast<VirtualKCharSelect::KCharSelect_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KCharSelect_DisconnectNotify(KCharSelect* self, const QMetaMethod* signal) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->disconnectNotify(*signal);
    } else {
        ((VirtualKCharSelect*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KCharSelect_QBaseDisconnectNotify(KCharSelect* self, const QMetaMethod* signal) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->setKCharSelect_DisconnectNotify_IsBase(true);
        vkcharselect->disconnectNotify(*signal);
    } else {
        ((VirtualKCharSelect*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KCharSelect_OnDisconnectNotify(KCharSelect* self, intptr_t slot) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->setKCharSelect_DisconnectNotify_Callback(reinterpret_cast<VirtualKCharSelect::KCharSelect_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KCharSelect_UpdateMicroFocus(KCharSelect* self) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->updateMicroFocus();
    } else {
        ((VirtualKCharSelect*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void KCharSelect_QBaseUpdateMicroFocus(KCharSelect* self) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->setKCharSelect_UpdateMicroFocus_IsBase(true);
        vkcharselect->updateMicroFocus();
    } else {
        ((VirtualKCharSelect*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void KCharSelect_OnUpdateMicroFocus(KCharSelect* self, intptr_t slot) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->setKCharSelect_UpdateMicroFocus_Callback(reinterpret_cast<VirtualKCharSelect::KCharSelect_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void KCharSelect_Create(KCharSelect* self) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->create();
    } else {
        ((VirtualKCharSelect*)self)->create();
    }
}

// Base class handler implementation
void KCharSelect_QBaseCreate(KCharSelect* self) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->setKCharSelect_Create_IsBase(true);
        vkcharselect->create();
    } else {
        ((VirtualKCharSelect*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void KCharSelect_OnCreate(KCharSelect* self, intptr_t slot) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->setKCharSelect_Create_Callback(reinterpret_cast<VirtualKCharSelect::KCharSelect_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void KCharSelect_Destroy(KCharSelect* self) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->destroy();
    } else {
        ((VirtualKCharSelect*)self)->destroy();
    }
}

// Base class handler implementation
void KCharSelect_QBaseDestroy(KCharSelect* self) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->setKCharSelect_Destroy_IsBase(true);
        vkcharselect->destroy();
    } else {
        ((VirtualKCharSelect*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void KCharSelect_OnDestroy(KCharSelect* self, intptr_t slot) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->setKCharSelect_Destroy_Callback(reinterpret_cast<VirtualKCharSelect::KCharSelect_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool KCharSelect_FocusNextChild(KCharSelect* self) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        return vkcharselect->focusNextChild();
    } else {
        return ((VirtualKCharSelect*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool KCharSelect_QBaseFocusNextChild(KCharSelect* self) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->setKCharSelect_FocusNextChild_IsBase(true);
        return vkcharselect->focusNextChild();
    } else {
        return ((VirtualKCharSelect*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KCharSelect_OnFocusNextChild(KCharSelect* self, intptr_t slot) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->setKCharSelect_FocusNextChild_Callback(reinterpret_cast<VirtualKCharSelect::KCharSelect_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KCharSelect_FocusPreviousChild(KCharSelect* self) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        return vkcharselect->focusPreviousChild();
    } else {
        return ((VirtualKCharSelect*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool KCharSelect_QBaseFocusPreviousChild(KCharSelect* self) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->setKCharSelect_FocusPreviousChild_IsBase(true);
        return vkcharselect->focusPreviousChild();
    } else {
        return ((VirtualKCharSelect*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KCharSelect_OnFocusPreviousChild(KCharSelect* self, intptr_t slot) {
    auto* vkcharselect = dynamic_cast<VirtualKCharSelect*>(self);
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->setKCharSelect_FocusPreviousChild_Callback(reinterpret_cast<VirtualKCharSelect::KCharSelect_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KCharSelect_Sender(const KCharSelect* self) {
    auto* vkcharselect = const_cast<VirtualKCharSelect*>(dynamic_cast<const VirtualKCharSelect*>(self));
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        return vkcharselect->sender();
    } else {
        return ((VirtualKCharSelect*)self)->sender();
    }
}

// Base class handler implementation
QObject* KCharSelect_QBaseSender(const KCharSelect* self) {
    auto* vkcharselect = const_cast<VirtualKCharSelect*>(dynamic_cast<const VirtualKCharSelect*>(self));
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->setKCharSelect_Sender_IsBase(true);
        return vkcharselect->sender();
    } else {
        return ((VirtualKCharSelect*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KCharSelect_OnSender(const KCharSelect* self, intptr_t slot) {
    auto* vkcharselect = const_cast<VirtualKCharSelect*>(dynamic_cast<const VirtualKCharSelect*>(self));
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->setKCharSelect_Sender_Callback(reinterpret_cast<VirtualKCharSelect::KCharSelect_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KCharSelect_SenderSignalIndex(const KCharSelect* self) {
    auto* vkcharselect = const_cast<VirtualKCharSelect*>(dynamic_cast<const VirtualKCharSelect*>(self));
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        return vkcharselect->senderSignalIndex();
    } else {
        return ((VirtualKCharSelect*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KCharSelect_QBaseSenderSignalIndex(const KCharSelect* self) {
    auto* vkcharselect = const_cast<VirtualKCharSelect*>(dynamic_cast<const VirtualKCharSelect*>(self));
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->setKCharSelect_SenderSignalIndex_IsBase(true);
        return vkcharselect->senderSignalIndex();
    } else {
        return ((VirtualKCharSelect*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KCharSelect_OnSenderSignalIndex(const KCharSelect* self, intptr_t slot) {
    auto* vkcharselect = const_cast<VirtualKCharSelect*>(dynamic_cast<const VirtualKCharSelect*>(self));
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->setKCharSelect_SenderSignalIndex_Callback(reinterpret_cast<VirtualKCharSelect::KCharSelect_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KCharSelect_Receivers(const KCharSelect* self, const char* signal) {
    auto* vkcharselect = const_cast<VirtualKCharSelect*>(dynamic_cast<const VirtualKCharSelect*>(self));
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        return vkcharselect->receivers(signal);
    } else {
        return ((VirtualKCharSelect*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KCharSelect_QBaseReceivers(const KCharSelect* self, const char* signal) {
    auto* vkcharselect = const_cast<VirtualKCharSelect*>(dynamic_cast<const VirtualKCharSelect*>(self));
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->setKCharSelect_Receivers_IsBase(true);
        return vkcharselect->receivers(signal);
    } else {
        return ((VirtualKCharSelect*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KCharSelect_OnReceivers(const KCharSelect* self, intptr_t slot) {
    auto* vkcharselect = const_cast<VirtualKCharSelect*>(dynamic_cast<const VirtualKCharSelect*>(self));
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->setKCharSelect_Receivers_Callback(reinterpret_cast<VirtualKCharSelect::KCharSelect_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KCharSelect_IsSignalConnected(const KCharSelect* self, const QMetaMethod* signal) {
    auto* vkcharselect = const_cast<VirtualKCharSelect*>(dynamic_cast<const VirtualKCharSelect*>(self));
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        return vkcharselect->isSignalConnected(*signal);
    } else {
        return ((VirtualKCharSelect*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KCharSelect_QBaseIsSignalConnected(const KCharSelect* self, const QMetaMethod* signal) {
    auto* vkcharselect = const_cast<VirtualKCharSelect*>(dynamic_cast<const VirtualKCharSelect*>(self));
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->setKCharSelect_IsSignalConnected_IsBase(true);
        return vkcharselect->isSignalConnected(*signal);
    } else {
        return ((VirtualKCharSelect*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KCharSelect_OnIsSignalConnected(const KCharSelect* self, intptr_t slot) {
    auto* vkcharselect = const_cast<VirtualKCharSelect*>(dynamic_cast<const VirtualKCharSelect*>(self));
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->setKCharSelect_IsSignalConnected_Callback(reinterpret_cast<VirtualKCharSelect::KCharSelect_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double KCharSelect_GetDecodedMetricF(const KCharSelect* self, int metricA, int metricB) {
    auto* vkcharselect = const_cast<VirtualKCharSelect*>(dynamic_cast<const VirtualKCharSelect*>(self));
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        return vkcharselect->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKCharSelect*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double KCharSelect_QBaseGetDecodedMetricF(const KCharSelect* self, int metricA, int metricB) {
    auto* vkcharselect = const_cast<VirtualKCharSelect*>(dynamic_cast<const VirtualKCharSelect*>(self));
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->setKCharSelect_GetDecodedMetricF_IsBase(true);
        return vkcharselect->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKCharSelect*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void KCharSelect_OnGetDecodedMetricF(const KCharSelect* self, intptr_t slot) {
    auto* vkcharselect = const_cast<VirtualKCharSelect*>(dynamic_cast<const VirtualKCharSelect*>(self));
    if (vkcharselect && vkcharselect->isVirtualKCharSelect) {
        vkcharselect->setKCharSelect_GetDecodedMetricF_Callback(reinterpret_cast<VirtualKCharSelect::KCharSelect_GetDecodedMetricF_Callback>(slot));
    }
}

void KCharSelect_Delete(KCharSelect* self) {
    delete self;
}
