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
#include <QProgressBar>
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyleOptionProgressBar>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qprogressbar.h>
#include "libqprogressbar.h"
#include "libqprogressbar.hxx"

QProgressBar* QProgressBar_new(QWidget* parent) {
    return new VirtualQProgressBar(parent);
}

QProgressBar* QProgressBar_new2() {
    return new VirtualQProgressBar();
}

QMetaObject* QProgressBar_MetaObject(const QProgressBar* self) {
    return (QMetaObject*)self->metaObject();
}

void* QProgressBar_Metacast(QProgressBar* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QProgressBar_Metacall(QProgressBar* self, int param1, int param2, void** param3) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQProgressBar*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QProgressBar_OnMetacall(QProgressBar* self, intptr_t slot) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->setQProgressBar_Metacall_Callback(reinterpret_cast<VirtualQProgressBar::QProgressBar_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QProgressBar_QBaseMetacall(QProgressBar* self, int param1, int param2, void** param3) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->setQProgressBar_Metacall_IsBase(true);
        return vqprogressbar->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQProgressBar*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QProgressBar_Tr(const char* s) {
    QString _ret = QProgressBar::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QProgressBar_Minimum(const QProgressBar* self) {
    return self->minimum();
}

int QProgressBar_Maximum(const QProgressBar* self) {
    return self->maximum();
}

int QProgressBar_Value(const QProgressBar* self) {
    return self->value();
}

void QProgressBar_SetTextVisible(QProgressBar* self, bool visible) {
    self->setTextVisible(visible);
}

bool QProgressBar_IsTextVisible(const QProgressBar* self) {
    return self->isTextVisible();
}

int QProgressBar_Alignment(const QProgressBar* self) {
    return static_cast<int>(self->alignment());
}

void QProgressBar_SetAlignment(QProgressBar* self, int alignment) {
    self->setAlignment(static_cast<Qt::Alignment>(alignment));
}

int QProgressBar_Orientation(const QProgressBar* self) {
    return static_cast<int>(self->orientation());
}

void QProgressBar_SetInvertedAppearance(QProgressBar* self, bool invert) {
    self->setInvertedAppearance(invert);
}

bool QProgressBar_InvertedAppearance(const QProgressBar* self) {
    return self->invertedAppearance();
}

void QProgressBar_SetTextDirection(QProgressBar* self, int textDirection) {
    self->setTextDirection(static_cast<QProgressBar::Direction>(textDirection));
}

int QProgressBar_TextDirection(const QProgressBar* self) {
    return static_cast<int>(self->textDirection());
}

void QProgressBar_SetFormat(QProgressBar* self, const libqt_string format) {
    QString format_QString = QString::fromUtf8(format.data, format.len);
    self->setFormat(format_QString);
}

void QProgressBar_ResetFormat(QProgressBar* self) {
    self->resetFormat();
}

libqt_string QProgressBar_Format(const QProgressBar* self) {
    QString _ret = self->format();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QProgressBar_Reset(QProgressBar* self) {
    self->reset();
}

void QProgressBar_SetRange(QProgressBar* self, int minimum, int maximum) {
    self->setRange(static_cast<int>(minimum), static_cast<int>(maximum));
}

void QProgressBar_SetMinimum(QProgressBar* self, int minimum) {
    self->setMinimum(static_cast<int>(minimum));
}

void QProgressBar_SetMaximum(QProgressBar* self, int maximum) {
    self->setMaximum(static_cast<int>(maximum));
}

void QProgressBar_SetValue(QProgressBar* self, int value) {
    self->setValue(static_cast<int>(value));
}

void QProgressBar_SetOrientation(QProgressBar* self, int orientation) {
    self->setOrientation(static_cast<Qt::Orientation>(orientation));
}

void QProgressBar_ValueChanged(QProgressBar* self, int value) {
    self->valueChanged(static_cast<int>(value));
}

void QProgressBar_Connect_ValueChanged(QProgressBar* self, intptr_t slot) {
    void (*slotFunc)(QProgressBar*, int) = reinterpret_cast<void (*)(QProgressBar*, int)>(slot);
    QProgressBar::connect(self, &QProgressBar::valueChanged, [self, slotFunc](int value) {
        int sigval1 = value;
        slotFunc(self, sigval1);
    });
}

libqt_string QProgressBar_Tr2(const char* s, const char* c) {
    QString _ret = QProgressBar::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QProgressBar_Tr3(const char* s, const char* c, int n) {
    QString _ret = QProgressBar::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Derived class handler implementation
libqt_string QProgressBar_Text(const QProgressBar* self) {
    auto* vqprogressbar = const_cast<VirtualQProgressBar*>(dynamic_cast<const VirtualQProgressBar*>(self));
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        QString _ret = vqprogressbar->text();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->QProgressBar::text();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Base class handler implementation
libqt_string QProgressBar_QBaseText(const QProgressBar* self) {
    auto* vqprogressbar = const_cast<VirtualQProgressBar*>(dynamic_cast<const VirtualQProgressBar*>(self));
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->setQProgressBar_Text_IsBase(true);
        QString _ret = vqprogressbar->text();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->QProgressBar::text();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Auxiliary method to allow providing re-implementation
void QProgressBar_OnText(const QProgressBar* self, intptr_t slot) {
    auto* vqprogressbar = const_cast<VirtualQProgressBar*>(dynamic_cast<const VirtualQProgressBar*>(self));
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->setQProgressBar_Text_Callback(reinterpret_cast<VirtualQProgressBar::QProgressBar_Text_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QProgressBar_SizeHint(const QProgressBar* self) {
    auto* vqprogressbar = const_cast<VirtualQProgressBar*>(dynamic_cast<const VirtualQProgressBar*>(self));
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        return new QSize(vqprogressbar->sizeHint());
    } else {
        return new QSize(((VirtualQProgressBar*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* QProgressBar_QBaseSizeHint(const QProgressBar* self) {
    auto* vqprogressbar = const_cast<VirtualQProgressBar*>(dynamic_cast<const VirtualQProgressBar*>(self));
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->setQProgressBar_SizeHint_IsBase(true);
        return new QSize(vqprogressbar->sizeHint());
    } else {
        return new QSize(((VirtualQProgressBar*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QProgressBar_OnSizeHint(const QProgressBar* self, intptr_t slot) {
    auto* vqprogressbar = const_cast<VirtualQProgressBar*>(dynamic_cast<const VirtualQProgressBar*>(self));
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->setQProgressBar_SizeHint_Callback(reinterpret_cast<VirtualQProgressBar::QProgressBar_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QProgressBar_MinimumSizeHint(const QProgressBar* self) {
    auto* vqprogressbar = const_cast<VirtualQProgressBar*>(dynamic_cast<const VirtualQProgressBar*>(self));
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        return new QSize(vqprogressbar->minimumSizeHint());
    } else {
        return new QSize(((VirtualQProgressBar*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* QProgressBar_QBaseMinimumSizeHint(const QProgressBar* self) {
    auto* vqprogressbar = const_cast<VirtualQProgressBar*>(dynamic_cast<const VirtualQProgressBar*>(self));
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->setQProgressBar_MinimumSizeHint_IsBase(true);
        return new QSize(vqprogressbar->minimumSizeHint());
    } else {
        return new QSize(((VirtualQProgressBar*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QProgressBar_OnMinimumSizeHint(const QProgressBar* self, intptr_t slot) {
    auto* vqprogressbar = const_cast<VirtualQProgressBar*>(dynamic_cast<const VirtualQProgressBar*>(self));
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->setQProgressBar_MinimumSizeHint_Callback(reinterpret_cast<VirtualQProgressBar::QProgressBar_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
bool QProgressBar_Event(QProgressBar* self, QEvent* e) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        return vqprogressbar->event(e);
    } else {
        return ((VirtualQProgressBar*)self)->event(e);
    }
}

// Base class handler implementation
bool QProgressBar_QBaseEvent(QProgressBar* self, QEvent* e) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->setQProgressBar_Event_IsBase(true);
        return vqprogressbar->event(e);
    } else {
        return ((VirtualQProgressBar*)self)->event(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QProgressBar_OnEvent(QProgressBar* self, intptr_t slot) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->setQProgressBar_Event_Callback(reinterpret_cast<VirtualQProgressBar::QProgressBar_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void QProgressBar_PaintEvent(QProgressBar* self, QPaintEvent* param1) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->paintEvent(param1);
    } else {
        ((VirtualQProgressBar*)self)->paintEvent(param1);
    }
}

// Base class handler implementation
void QProgressBar_QBasePaintEvent(QProgressBar* self, QPaintEvent* param1) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->setQProgressBar_PaintEvent_IsBase(true);
        vqprogressbar->paintEvent(param1);
    } else {
        ((VirtualQProgressBar*)self)->paintEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QProgressBar_OnPaintEvent(QProgressBar* self, intptr_t slot) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->setQProgressBar_PaintEvent_Callback(reinterpret_cast<VirtualQProgressBar::QProgressBar_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QProgressBar_InitStyleOption(const QProgressBar* self, QStyleOptionProgressBar* option) {
    auto* vqprogressbar = const_cast<VirtualQProgressBar*>(dynamic_cast<const VirtualQProgressBar*>(self));
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->initStyleOption(option);
    } else {
        ((VirtualQProgressBar*)self)->initStyleOption(option);
    }
}

// Base class handler implementation
void QProgressBar_QBaseInitStyleOption(const QProgressBar* self, QStyleOptionProgressBar* option) {
    auto* vqprogressbar = const_cast<VirtualQProgressBar*>(dynamic_cast<const VirtualQProgressBar*>(self));
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->setQProgressBar_InitStyleOption_IsBase(true);
        vqprogressbar->initStyleOption(option);
    } else {
        ((VirtualQProgressBar*)self)->initStyleOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void QProgressBar_OnInitStyleOption(const QProgressBar* self, intptr_t slot) {
    auto* vqprogressbar = const_cast<VirtualQProgressBar*>(dynamic_cast<const VirtualQProgressBar*>(self));
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->setQProgressBar_InitStyleOption_Callback(reinterpret_cast<VirtualQProgressBar::QProgressBar_InitStyleOption_Callback>(slot));
    }
}

// Derived class handler implementation
int QProgressBar_DevType(const QProgressBar* self) {
    auto* vqprogressbar = const_cast<VirtualQProgressBar*>(dynamic_cast<const VirtualQProgressBar*>(self));
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        return vqprogressbar->devType();
    } else {
        return self->QProgressBar::devType();
    }
}

// Base class handler implementation
int QProgressBar_QBaseDevType(const QProgressBar* self) {
    auto* vqprogressbar = const_cast<VirtualQProgressBar*>(dynamic_cast<const VirtualQProgressBar*>(self));
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->setQProgressBar_DevType_IsBase(true);
        return vqprogressbar->devType();
    } else {
        return self->QProgressBar::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QProgressBar_OnDevType(const QProgressBar* self, intptr_t slot) {
    auto* vqprogressbar = const_cast<VirtualQProgressBar*>(dynamic_cast<const VirtualQProgressBar*>(self));
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->setQProgressBar_DevType_Callback(reinterpret_cast<VirtualQProgressBar::QProgressBar_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void QProgressBar_SetVisible(QProgressBar* self, bool visible) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->setVisible(visible);
    } else {
        self->QProgressBar::setVisible(visible);
    }
}

// Base class handler implementation
void QProgressBar_QBaseSetVisible(QProgressBar* self, bool visible) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->setQProgressBar_SetVisible_IsBase(true);
        vqprogressbar->setVisible(visible);
    } else {
        self->QProgressBar::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void QProgressBar_OnSetVisible(QProgressBar* self, intptr_t slot) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->setQProgressBar_SetVisible_Callback(reinterpret_cast<VirtualQProgressBar::QProgressBar_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
int QProgressBar_HeightForWidth(const QProgressBar* self, int param1) {
    auto* vqprogressbar = const_cast<VirtualQProgressBar*>(dynamic_cast<const VirtualQProgressBar*>(self));
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        return vqprogressbar->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QProgressBar::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QProgressBar_QBaseHeightForWidth(const QProgressBar* self, int param1) {
    auto* vqprogressbar = const_cast<VirtualQProgressBar*>(dynamic_cast<const VirtualQProgressBar*>(self));
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->setQProgressBar_HeightForWidth_IsBase(true);
        return vqprogressbar->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QProgressBar::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QProgressBar_OnHeightForWidth(const QProgressBar* self, intptr_t slot) {
    auto* vqprogressbar = const_cast<VirtualQProgressBar*>(dynamic_cast<const VirtualQProgressBar*>(self));
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->setQProgressBar_HeightForWidth_Callback(reinterpret_cast<VirtualQProgressBar::QProgressBar_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool QProgressBar_HasHeightForWidth(const QProgressBar* self) {
    auto* vqprogressbar = const_cast<VirtualQProgressBar*>(dynamic_cast<const VirtualQProgressBar*>(self));
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        return vqprogressbar->hasHeightForWidth();
    } else {
        return self->QProgressBar::hasHeightForWidth();
    }
}

// Base class handler implementation
bool QProgressBar_QBaseHasHeightForWidth(const QProgressBar* self) {
    auto* vqprogressbar = const_cast<VirtualQProgressBar*>(dynamic_cast<const VirtualQProgressBar*>(self));
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->setQProgressBar_HasHeightForWidth_IsBase(true);
        return vqprogressbar->hasHeightForWidth();
    } else {
        return self->QProgressBar::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QProgressBar_OnHasHeightForWidth(const QProgressBar* self, intptr_t slot) {
    auto* vqprogressbar = const_cast<VirtualQProgressBar*>(dynamic_cast<const VirtualQProgressBar*>(self));
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->setQProgressBar_HasHeightForWidth_Callback(reinterpret_cast<VirtualQProgressBar::QProgressBar_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QProgressBar_PaintEngine(const QProgressBar* self) {
    auto* vqprogressbar = const_cast<VirtualQProgressBar*>(dynamic_cast<const VirtualQProgressBar*>(self));
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        return vqprogressbar->paintEngine();
    } else {
        return self->QProgressBar::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QProgressBar_QBasePaintEngine(const QProgressBar* self) {
    auto* vqprogressbar = const_cast<VirtualQProgressBar*>(dynamic_cast<const VirtualQProgressBar*>(self));
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->setQProgressBar_PaintEngine_IsBase(true);
        return vqprogressbar->paintEngine();
    } else {
        return self->QProgressBar::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QProgressBar_OnPaintEngine(const QProgressBar* self, intptr_t slot) {
    auto* vqprogressbar = const_cast<VirtualQProgressBar*>(dynamic_cast<const VirtualQProgressBar*>(self));
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->setQProgressBar_PaintEngine_Callback(reinterpret_cast<VirtualQProgressBar::QProgressBar_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void QProgressBar_MousePressEvent(QProgressBar* self, QMouseEvent* event) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->mousePressEvent(event);
    } else {
        ((VirtualQProgressBar*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void QProgressBar_QBaseMousePressEvent(QProgressBar* self, QMouseEvent* event) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->setQProgressBar_MousePressEvent_IsBase(true);
        vqprogressbar->mousePressEvent(event);
    } else {
        ((VirtualQProgressBar*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QProgressBar_OnMousePressEvent(QProgressBar* self, intptr_t slot) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->setQProgressBar_MousePressEvent_Callback(reinterpret_cast<VirtualQProgressBar::QProgressBar_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QProgressBar_MouseReleaseEvent(QProgressBar* self, QMouseEvent* event) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->mouseReleaseEvent(event);
    } else {
        ((VirtualQProgressBar*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void QProgressBar_QBaseMouseReleaseEvent(QProgressBar* self, QMouseEvent* event) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->setQProgressBar_MouseReleaseEvent_IsBase(true);
        vqprogressbar->mouseReleaseEvent(event);
    } else {
        ((VirtualQProgressBar*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QProgressBar_OnMouseReleaseEvent(QProgressBar* self, intptr_t slot) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->setQProgressBar_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQProgressBar::QProgressBar_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QProgressBar_MouseDoubleClickEvent(QProgressBar* self, QMouseEvent* event) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->mouseDoubleClickEvent(event);
    } else {
        ((VirtualQProgressBar*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void QProgressBar_QBaseMouseDoubleClickEvent(QProgressBar* self, QMouseEvent* event) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->setQProgressBar_MouseDoubleClickEvent_IsBase(true);
        vqprogressbar->mouseDoubleClickEvent(event);
    } else {
        ((VirtualQProgressBar*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QProgressBar_OnMouseDoubleClickEvent(QProgressBar* self, intptr_t slot) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->setQProgressBar_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQProgressBar::QProgressBar_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QProgressBar_MouseMoveEvent(QProgressBar* self, QMouseEvent* event) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->mouseMoveEvent(event);
    } else {
        ((VirtualQProgressBar*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void QProgressBar_QBaseMouseMoveEvent(QProgressBar* self, QMouseEvent* event) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->setQProgressBar_MouseMoveEvent_IsBase(true);
        vqprogressbar->mouseMoveEvent(event);
    } else {
        ((VirtualQProgressBar*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QProgressBar_OnMouseMoveEvent(QProgressBar* self, intptr_t slot) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->setQProgressBar_MouseMoveEvent_Callback(reinterpret_cast<VirtualQProgressBar::QProgressBar_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QProgressBar_WheelEvent(QProgressBar* self, QWheelEvent* event) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->wheelEvent(event);
    } else {
        ((VirtualQProgressBar*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void QProgressBar_QBaseWheelEvent(QProgressBar* self, QWheelEvent* event) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->setQProgressBar_WheelEvent_IsBase(true);
        vqprogressbar->wheelEvent(event);
    } else {
        ((VirtualQProgressBar*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QProgressBar_OnWheelEvent(QProgressBar* self, intptr_t slot) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->setQProgressBar_WheelEvent_Callback(reinterpret_cast<VirtualQProgressBar::QProgressBar_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QProgressBar_KeyPressEvent(QProgressBar* self, QKeyEvent* event) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->keyPressEvent(event);
    } else {
        ((VirtualQProgressBar*)self)->keyPressEvent(event);
    }
}

// Base class handler implementation
void QProgressBar_QBaseKeyPressEvent(QProgressBar* self, QKeyEvent* event) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->setQProgressBar_KeyPressEvent_IsBase(true);
        vqprogressbar->keyPressEvent(event);
    } else {
        ((VirtualQProgressBar*)self)->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QProgressBar_OnKeyPressEvent(QProgressBar* self, intptr_t slot) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->setQProgressBar_KeyPressEvent_Callback(reinterpret_cast<VirtualQProgressBar::QProgressBar_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QProgressBar_KeyReleaseEvent(QProgressBar* self, QKeyEvent* event) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->keyReleaseEvent(event);
    } else {
        ((VirtualQProgressBar*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void QProgressBar_QBaseKeyReleaseEvent(QProgressBar* self, QKeyEvent* event) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->setQProgressBar_KeyReleaseEvent_IsBase(true);
        vqprogressbar->keyReleaseEvent(event);
    } else {
        ((VirtualQProgressBar*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QProgressBar_OnKeyReleaseEvent(QProgressBar* self, intptr_t slot) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->setQProgressBar_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQProgressBar::QProgressBar_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QProgressBar_FocusInEvent(QProgressBar* self, QFocusEvent* event) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->focusInEvent(event);
    } else {
        ((VirtualQProgressBar*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void QProgressBar_QBaseFocusInEvent(QProgressBar* self, QFocusEvent* event) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->setQProgressBar_FocusInEvent_IsBase(true);
        vqprogressbar->focusInEvent(event);
    } else {
        ((VirtualQProgressBar*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QProgressBar_OnFocusInEvent(QProgressBar* self, intptr_t slot) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->setQProgressBar_FocusInEvent_Callback(reinterpret_cast<VirtualQProgressBar::QProgressBar_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QProgressBar_FocusOutEvent(QProgressBar* self, QFocusEvent* event) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->focusOutEvent(event);
    } else {
        ((VirtualQProgressBar*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void QProgressBar_QBaseFocusOutEvent(QProgressBar* self, QFocusEvent* event) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->setQProgressBar_FocusOutEvent_IsBase(true);
        vqprogressbar->focusOutEvent(event);
    } else {
        ((VirtualQProgressBar*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QProgressBar_OnFocusOutEvent(QProgressBar* self, intptr_t slot) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->setQProgressBar_FocusOutEvent_Callback(reinterpret_cast<VirtualQProgressBar::QProgressBar_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QProgressBar_EnterEvent(QProgressBar* self, QEnterEvent* event) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->enterEvent(event);
    } else {
        ((VirtualQProgressBar*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void QProgressBar_QBaseEnterEvent(QProgressBar* self, QEnterEvent* event) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->setQProgressBar_EnterEvent_IsBase(true);
        vqprogressbar->enterEvent(event);
    } else {
        ((VirtualQProgressBar*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QProgressBar_OnEnterEvent(QProgressBar* self, intptr_t slot) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->setQProgressBar_EnterEvent_Callback(reinterpret_cast<VirtualQProgressBar::QProgressBar_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QProgressBar_LeaveEvent(QProgressBar* self, QEvent* event) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->leaveEvent(event);
    } else {
        ((VirtualQProgressBar*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void QProgressBar_QBaseLeaveEvent(QProgressBar* self, QEvent* event) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->setQProgressBar_LeaveEvent_IsBase(true);
        vqprogressbar->leaveEvent(event);
    } else {
        ((VirtualQProgressBar*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QProgressBar_OnLeaveEvent(QProgressBar* self, intptr_t slot) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->setQProgressBar_LeaveEvent_Callback(reinterpret_cast<VirtualQProgressBar::QProgressBar_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QProgressBar_MoveEvent(QProgressBar* self, QMoveEvent* event) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->moveEvent(event);
    } else {
        ((VirtualQProgressBar*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void QProgressBar_QBaseMoveEvent(QProgressBar* self, QMoveEvent* event) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->setQProgressBar_MoveEvent_IsBase(true);
        vqprogressbar->moveEvent(event);
    } else {
        ((VirtualQProgressBar*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QProgressBar_OnMoveEvent(QProgressBar* self, intptr_t slot) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->setQProgressBar_MoveEvent_Callback(reinterpret_cast<VirtualQProgressBar::QProgressBar_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QProgressBar_ResizeEvent(QProgressBar* self, QResizeEvent* event) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->resizeEvent(event);
    } else {
        ((VirtualQProgressBar*)self)->resizeEvent(event);
    }
}

// Base class handler implementation
void QProgressBar_QBaseResizeEvent(QProgressBar* self, QResizeEvent* event) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->setQProgressBar_ResizeEvent_IsBase(true);
        vqprogressbar->resizeEvent(event);
    } else {
        ((VirtualQProgressBar*)self)->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QProgressBar_OnResizeEvent(QProgressBar* self, intptr_t slot) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->setQProgressBar_ResizeEvent_Callback(reinterpret_cast<VirtualQProgressBar::QProgressBar_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QProgressBar_CloseEvent(QProgressBar* self, QCloseEvent* event) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->closeEvent(event);
    } else {
        ((VirtualQProgressBar*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void QProgressBar_QBaseCloseEvent(QProgressBar* self, QCloseEvent* event) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->setQProgressBar_CloseEvent_IsBase(true);
        vqprogressbar->closeEvent(event);
    } else {
        ((VirtualQProgressBar*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QProgressBar_OnCloseEvent(QProgressBar* self, intptr_t slot) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->setQProgressBar_CloseEvent_Callback(reinterpret_cast<VirtualQProgressBar::QProgressBar_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QProgressBar_ContextMenuEvent(QProgressBar* self, QContextMenuEvent* event) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->contextMenuEvent(event);
    } else {
        ((VirtualQProgressBar*)self)->contextMenuEvent(event);
    }
}

// Base class handler implementation
void QProgressBar_QBaseContextMenuEvent(QProgressBar* self, QContextMenuEvent* event) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->setQProgressBar_ContextMenuEvent_IsBase(true);
        vqprogressbar->contextMenuEvent(event);
    } else {
        ((VirtualQProgressBar*)self)->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QProgressBar_OnContextMenuEvent(QProgressBar* self, intptr_t slot) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->setQProgressBar_ContextMenuEvent_Callback(reinterpret_cast<VirtualQProgressBar::QProgressBar_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QProgressBar_TabletEvent(QProgressBar* self, QTabletEvent* event) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->tabletEvent(event);
    } else {
        ((VirtualQProgressBar*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void QProgressBar_QBaseTabletEvent(QProgressBar* self, QTabletEvent* event) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->setQProgressBar_TabletEvent_IsBase(true);
        vqprogressbar->tabletEvent(event);
    } else {
        ((VirtualQProgressBar*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QProgressBar_OnTabletEvent(QProgressBar* self, intptr_t slot) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->setQProgressBar_TabletEvent_Callback(reinterpret_cast<VirtualQProgressBar::QProgressBar_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QProgressBar_ActionEvent(QProgressBar* self, QActionEvent* event) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->actionEvent(event);
    } else {
        ((VirtualQProgressBar*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void QProgressBar_QBaseActionEvent(QProgressBar* self, QActionEvent* event) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->setQProgressBar_ActionEvent_IsBase(true);
        vqprogressbar->actionEvent(event);
    } else {
        ((VirtualQProgressBar*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QProgressBar_OnActionEvent(QProgressBar* self, intptr_t slot) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->setQProgressBar_ActionEvent_Callback(reinterpret_cast<VirtualQProgressBar::QProgressBar_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QProgressBar_DragEnterEvent(QProgressBar* self, QDragEnterEvent* event) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->dragEnterEvent(event);
    } else {
        ((VirtualQProgressBar*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void QProgressBar_QBaseDragEnterEvent(QProgressBar* self, QDragEnterEvent* event) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->setQProgressBar_DragEnterEvent_IsBase(true);
        vqprogressbar->dragEnterEvent(event);
    } else {
        ((VirtualQProgressBar*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QProgressBar_OnDragEnterEvent(QProgressBar* self, intptr_t slot) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->setQProgressBar_DragEnterEvent_Callback(reinterpret_cast<VirtualQProgressBar::QProgressBar_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QProgressBar_DragMoveEvent(QProgressBar* self, QDragMoveEvent* event) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->dragMoveEvent(event);
    } else {
        ((VirtualQProgressBar*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void QProgressBar_QBaseDragMoveEvent(QProgressBar* self, QDragMoveEvent* event) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->setQProgressBar_DragMoveEvent_IsBase(true);
        vqprogressbar->dragMoveEvent(event);
    } else {
        ((VirtualQProgressBar*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QProgressBar_OnDragMoveEvent(QProgressBar* self, intptr_t slot) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->setQProgressBar_DragMoveEvent_Callback(reinterpret_cast<VirtualQProgressBar::QProgressBar_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QProgressBar_DragLeaveEvent(QProgressBar* self, QDragLeaveEvent* event) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->dragLeaveEvent(event);
    } else {
        ((VirtualQProgressBar*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void QProgressBar_QBaseDragLeaveEvent(QProgressBar* self, QDragLeaveEvent* event) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->setQProgressBar_DragLeaveEvent_IsBase(true);
        vqprogressbar->dragLeaveEvent(event);
    } else {
        ((VirtualQProgressBar*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QProgressBar_OnDragLeaveEvent(QProgressBar* self, intptr_t slot) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->setQProgressBar_DragLeaveEvent_Callback(reinterpret_cast<VirtualQProgressBar::QProgressBar_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QProgressBar_DropEvent(QProgressBar* self, QDropEvent* event) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->dropEvent(event);
    } else {
        ((VirtualQProgressBar*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void QProgressBar_QBaseDropEvent(QProgressBar* self, QDropEvent* event) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->setQProgressBar_DropEvent_IsBase(true);
        vqprogressbar->dropEvent(event);
    } else {
        ((VirtualQProgressBar*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QProgressBar_OnDropEvent(QProgressBar* self, intptr_t slot) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->setQProgressBar_DropEvent_Callback(reinterpret_cast<VirtualQProgressBar::QProgressBar_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QProgressBar_ShowEvent(QProgressBar* self, QShowEvent* event) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->showEvent(event);
    } else {
        ((VirtualQProgressBar*)self)->showEvent(event);
    }
}

// Base class handler implementation
void QProgressBar_QBaseShowEvent(QProgressBar* self, QShowEvent* event) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->setQProgressBar_ShowEvent_IsBase(true);
        vqprogressbar->showEvent(event);
    } else {
        ((VirtualQProgressBar*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QProgressBar_OnShowEvent(QProgressBar* self, intptr_t slot) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->setQProgressBar_ShowEvent_Callback(reinterpret_cast<VirtualQProgressBar::QProgressBar_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QProgressBar_HideEvent(QProgressBar* self, QHideEvent* event) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->hideEvent(event);
    } else {
        ((VirtualQProgressBar*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void QProgressBar_QBaseHideEvent(QProgressBar* self, QHideEvent* event) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->setQProgressBar_HideEvent_IsBase(true);
        vqprogressbar->hideEvent(event);
    } else {
        ((VirtualQProgressBar*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QProgressBar_OnHideEvent(QProgressBar* self, intptr_t slot) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->setQProgressBar_HideEvent_Callback(reinterpret_cast<VirtualQProgressBar::QProgressBar_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QProgressBar_NativeEvent(QProgressBar* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        return vqprogressbar->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQProgressBar*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QProgressBar_QBaseNativeEvent(QProgressBar* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->setQProgressBar_NativeEvent_IsBase(true);
        return vqprogressbar->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQProgressBar*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QProgressBar_OnNativeEvent(QProgressBar* self, intptr_t slot) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->setQProgressBar_NativeEvent_Callback(reinterpret_cast<VirtualQProgressBar::QProgressBar_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QProgressBar_ChangeEvent(QProgressBar* self, QEvent* param1) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->changeEvent(param1);
    } else {
        ((VirtualQProgressBar*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void QProgressBar_QBaseChangeEvent(QProgressBar* self, QEvent* param1) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->setQProgressBar_ChangeEvent_IsBase(true);
        vqprogressbar->changeEvent(param1);
    } else {
        ((VirtualQProgressBar*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QProgressBar_OnChangeEvent(QProgressBar* self, intptr_t slot) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->setQProgressBar_ChangeEvent_Callback(reinterpret_cast<VirtualQProgressBar::QProgressBar_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QProgressBar_Metric(const QProgressBar* self, int param1) {
    auto* vqprogressbar = const_cast<VirtualQProgressBar*>(dynamic_cast<const VirtualQProgressBar*>(self));
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        return vqprogressbar->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQProgressBar*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int QProgressBar_QBaseMetric(const QProgressBar* self, int param1) {
    auto* vqprogressbar = const_cast<VirtualQProgressBar*>(dynamic_cast<const VirtualQProgressBar*>(self));
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->setQProgressBar_Metric_IsBase(true);
        return vqprogressbar->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQProgressBar*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QProgressBar_OnMetric(const QProgressBar* self, intptr_t slot) {
    auto* vqprogressbar = const_cast<VirtualQProgressBar*>(dynamic_cast<const VirtualQProgressBar*>(self));
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->setQProgressBar_Metric_Callback(reinterpret_cast<VirtualQProgressBar::QProgressBar_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void QProgressBar_InitPainter(const QProgressBar* self, QPainter* painter) {
    auto* vqprogressbar = const_cast<VirtualQProgressBar*>(dynamic_cast<const VirtualQProgressBar*>(self));
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->initPainter(painter);
    } else {
        ((VirtualQProgressBar*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void QProgressBar_QBaseInitPainter(const QProgressBar* self, QPainter* painter) {
    auto* vqprogressbar = const_cast<VirtualQProgressBar*>(dynamic_cast<const VirtualQProgressBar*>(self));
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->setQProgressBar_InitPainter_IsBase(true);
        vqprogressbar->initPainter(painter);
    } else {
        ((VirtualQProgressBar*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QProgressBar_OnInitPainter(const QProgressBar* self, intptr_t slot) {
    auto* vqprogressbar = const_cast<VirtualQProgressBar*>(dynamic_cast<const VirtualQProgressBar*>(self));
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->setQProgressBar_InitPainter_Callback(reinterpret_cast<VirtualQProgressBar::QProgressBar_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QProgressBar_Redirected(const QProgressBar* self, QPoint* offset) {
    auto* vqprogressbar = const_cast<VirtualQProgressBar*>(dynamic_cast<const VirtualQProgressBar*>(self));
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        return vqprogressbar->redirected(offset);
    } else {
        return ((VirtualQProgressBar*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QProgressBar_QBaseRedirected(const QProgressBar* self, QPoint* offset) {
    auto* vqprogressbar = const_cast<VirtualQProgressBar*>(dynamic_cast<const VirtualQProgressBar*>(self));
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->setQProgressBar_Redirected_IsBase(true);
        return vqprogressbar->redirected(offset);
    } else {
        return ((VirtualQProgressBar*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QProgressBar_OnRedirected(const QProgressBar* self, intptr_t slot) {
    auto* vqprogressbar = const_cast<VirtualQProgressBar*>(dynamic_cast<const VirtualQProgressBar*>(self));
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->setQProgressBar_Redirected_Callback(reinterpret_cast<VirtualQProgressBar::QProgressBar_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QProgressBar_SharedPainter(const QProgressBar* self) {
    auto* vqprogressbar = const_cast<VirtualQProgressBar*>(dynamic_cast<const VirtualQProgressBar*>(self));
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        return vqprogressbar->sharedPainter();
    } else {
        return ((VirtualQProgressBar*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QProgressBar_QBaseSharedPainter(const QProgressBar* self) {
    auto* vqprogressbar = const_cast<VirtualQProgressBar*>(dynamic_cast<const VirtualQProgressBar*>(self));
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->setQProgressBar_SharedPainter_IsBase(true);
        return vqprogressbar->sharedPainter();
    } else {
        return ((VirtualQProgressBar*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QProgressBar_OnSharedPainter(const QProgressBar* self, intptr_t slot) {
    auto* vqprogressbar = const_cast<VirtualQProgressBar*>(dynamic_cast<const VirtualQProgressBar*>(self));
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->setQProgressBar_SharedPainter_Callback(reinterpret_cast<VirtualQProgressBar::QProgressBar_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void QProgressBar_InputMethodEvent(QProgressBar* self, QInputMethodEvent* param1) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->inputMethodEvent(param1);
    } else {
        ((VirtualQProgressBar*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void QProgressBar_QBaseInputMethodEvent(QProgressBar* self, QInputMethodEvent* param1) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->setQProgressBar_InputMethodEvent_IsBase(true);
        vqprogressbar->inputMethodEvent(param1);
    } else {
        ((VirtualQProgressBar*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QProgressBar_OnInputMethodEvent(QProgressBar* self, intptr_t slot) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->setQProgressBar_InputMethodEvent_Callback(reinterpret_cast<VirtualQProgressBar::QProgressBar_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QProgressBar_InputMethodQuery(const QProgressBar* self, int param1) {
    auto* vqprogressbar = const_cast<VirtualQProgressBar*>(dynamic_cast<const VirtualQProgressBar*>(self));
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        return new QVariant(vqprogressbar->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualQProgressBar*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* QProgressBar_QBaseInputMethodQuery(const QProgressBar* self, int param1) {
    auto* vqprogressbar = const_cast<VirtualQProgressBar*>(dynamic_cast<const VirtualQProgressBar*>(self));
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->setQProgressBar_InputMethodQuery_IsBase(true);
        return new QVariant(vqprogressbar->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualQProgressBar*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void QProgressBar_OnInputMethodQuery(const QProgressBar* self, intptr_t slot) {
    auto* vqprogressbar = const_cast<VirtualQProgressBar*>(dynamic_cast<const VirtualQProgressBar*>(self));
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->setQProgressBar_InputMethodQuery_Callback(reinterpret_cast<VirtualQProgressBar::QProgressBar_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool QProgressBar_FocusNextPrevChild(QProgressBar* self, bool next) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        return vqprogressbar->focusNextPrevChild(next);
    } else {
        return ((VirtualQProgressBar*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool QProgressBar_QBaseFocusNextPrevChild(QProgressBar* self, bool next) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->setQProgressBar_FocusNextPrevChild_IsBase(true);
        return vqprogressbar->focusNextPrevChild(next);
    } else {
        return ((VirtualQProgressBar*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void QProgressBar_OnFocusNextPrevChild(QProgressBar* self, intptr_t slot) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->setQProgressBar_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQProgressBar::QProgressBar_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QProgressBar_EventFilter(QProgressBar* self, QObject* watched, QEvent* event) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        return vqprogressbar->eventFilter(watched, event);
    } else {
        return self->QProgressBar::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QProgressBar_QBaseEventFilter(QProgressBar* self, QObject* watched, QEvent* event) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->setQProgressBar_EventFilter_IsBase(true);
        return vqprogressbar->eventFilter(watched, event);
    } else {
        return self->QProgressBar::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QProgressBar_OnEventFilter(QProgressBar* self, intptr_t slot) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->setQProgressBar_EventFilter_Callback(reinterpret_cast<VirtualQProgressBar::QProgressBar_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QProgressBar_TimerEvent(QProgressBar* self, QTimerEvent* event) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->timerEvent(event);
    } else {
        ((VirtualQProgressBar*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QProgressBar_QBaseTimerEvent(QProgressBar* self, QTimerEvent* event) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->setQProgressBar_TimerEvent_IsBase(true);
        vqprogressbar->timerEvent(event);
    } else {
        ((VirtualQProgressBar*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QProgressBar_OnTimerEvent(QProgressBar* self, intptr_t slot) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->setQProgressBar_TimerEvent_Callback(reinterpret_cast<VirtualQProgressBar::QProgressBar_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QProgressBar_ChildEvent(QProgressBar* self, QChildEvent* event) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->childEvent(event);
    } else {
        ((VirtualQProgressBar*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QProgressBar_QBaseChildEvent(QProgressBar* self, QChildEvent* event) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->setQProgressBar_ChildEvent_IsBase(true);
        vqprogressbar->childEvent(event);
    } else {
        ((VirtualQProgressBar*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QProgressBar_OnChildEvent(QProgressBar* self, intptr_t slot) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->setQProgressBar_ChildEvent_Callback(reinterpret_cast<VirtualQProgressBar::QProgressBar_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QProgressBar_CustomEvent(QProgressBar* self, QEvent* event) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->customEvent(event);
    } else {
        ((VirtualQProgressBar*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QProgressBar_QBaseCustomEvent(QProgressBar* self, QEvent* event) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->setQProgressBar_CustomEvent_IsBase(true);
        vqprogressbar->customEvent(event);
    } else {
        ((VirtualQProgressBar*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QProgressBar_OnCustomEvent(QProgressBar* self, intptr_t slot) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->setQProgressBar_CustomEvent_Callback(reinterpret_cast<VirtualQProgressBar::QProgressBar_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QProgressBar_ConnectNotify(QProgressBar* self, const QMetaMethod* signal) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->connectNotify(*signal);
    } else {
        ((VirtualQProgressBar*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QProgressBar_QBaseConnectNotify(QProgressBar* self, const QMetaMethod* signal) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->setQProgressBar_ConnectNotify_IsBase(true);
        vqprogressbar->connectNotify(*signal);
    } else {
        ((VirtualQProgressBar*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QProgressBar_OnConnectNotify(QProgressBar* self, intptr_t slot) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->setQProgressBar_ConnectNotify_Callback(reinterpret_cast<VirtualQProgressBar::QProgressBar_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QProgressBar_DisconnectNotify(QProgressBar* self, const QMetaMethod* signal) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->disconnectNotify(*signal);
    } else {
        ((VirtualQProgressBar*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QProgressBar_QBaseDisconnectNotify(QProgressBar* self, const QMetaMethod* signal) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->setQProgressBar_DisconnectNotify_IsBase(true);
        vqprogressbar->disconnectNotify(*signal);
    } else {
        ((VirtualQProgressBar*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QProgressBar_OnDisconnectNotify(QProgressBar* self, intptr_t slot) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->setQProgressBar_DisconnectNotify_Callback(reinterpret_cast<VirtualQProgressBar::QProgressBar_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QProgressBar_UpdateMicroFocus(QProgressBar* self) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->updateMicroFocus();
    } else {
        ((VirtualQProgressBar*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void QProgressBar_QBaseUpdateMicroFocus(QProgressBar* self) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->setQProgressBar_UpdateMicroFocus_IsBase(true);
        vqprogressbar->updateMicroFocus();
    } else {
        ((VirtualQProgressBar*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QProgressBar_OnUpdateMicroFocus(QProgressBar* self, intptr_t slot) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->setQProgressBar_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQProgressBar::QProgressBar_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QProgressBar_Create(QProgressBar* self) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->create();
    } else {
        ((VirtualQProgressBar*)self)->create();
    }
}

// Base class handler implementation
void QProgressBar_QBaseCreate(QProgressBar* self) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->setQProgressBar_Create_IsBase(true);
        vqprogressbar->create();
    } else {
        ((VirtualQProgressBar*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void QProgressBar_OnCreate(QProgressBar* self, intptr_t slot) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->setQProgressBar_Create_Callback(reinterpret_cast<VirtualQProgressBar::QProgressBar_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void QProgressBar_Destroy(QProgressBar* self) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->destroy();
    } else {
        ((VirtualQProgressBar*)self)->destroy();
    }
}

// Base class handler implementation
void QProgressBar_QBaseDestroy(QProgressBar* self) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->setQProgressBar_Destroy_IsBase(true);
        vqprogressbar->destroy();
    } else {
        ((VirtualQProgressBar*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void QProgressBar_OnDestroy(QProgressBar* self, intptr_t slot) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->setQProgressBar_Destroy_Callback(reinterpret_cast<VirtualQProgressBar::QProgressBar_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QProgressBar_FocusNextChild(QProgressBar* self) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        return vqprogressbar->focusNextChild();
    } else {
        return ((VirtualQProgressBar*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool QProgressBar_QBaseFocusNextChild(QProgressBar* self) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->setQProgressBar_FocusNextChild_IsBase(true);
        return vqprogressbar->focusNextChild();
    } else {
        return ((VirtualQProgressBar*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QProgressBar_OnFocusNextChild(QProgressBar* self, intptr_t slot) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->setQProgressBar_FocusNextChild_Callback(reinterpret_cast<VirtualQProgressBar::QProgressBar_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QProgressBar_FocusPreviousChild(QProgressBar* self) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        return vqprogressbar->focusPreviousChild();
    } else {
        return ((VirtualQProgressBar*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool QProgressBar_QBaseFocusPreviousChild(QProgressBar* self) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->setQProgressBar_FocusPreviousChild_IsBase(true);
        return vqprogressbar->focusPreviousChild();
    } else {
        return ((VirtualQProgressBar*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QProgressBar_OnFocusPreviousChild(QProgressBar* self, intptr_t slot) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->setQProgressBar_FocusPreviousChild_Callback(reinterpret_cast<VirtualQProgressBar::QProgressBar_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QProgressBar_Sender(const QProgressBar* self) {
    auto* vqprogressbar = const_cast<VirtualQProgressBar*>(dynamic_cast<const VirtualQProgressBar*>(self));
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        return vqprogressbar->sender();
    } else {
        return ((VirtualQProgressBar*)self)->sender();
    }
}

// Base class handler implementation
QObject* QProgressBar_QBaseSender(const QProgressBar* self) {
    auto* vqprogressbar = const_cast<VirtualQProgressBar*>(dynamic_cast<const VirtualQProgressBar*>(self));
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->setQProgressBar_Sender_IsBase(true);
        return vqprogressbar->sender();
    } else {
        return ((VirtualQProgressBar*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QProgressBar_OnSender(const QProgressBar* self, intptr_t slot) {
    auto* vqprogressbar = const_cast<VirtualQProgressBar*>(dynamic_cast<const VirtualQProgressBar*>(self));
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->setQProgressBar_Sender_Callback(reinterpret_cast<VirtualQProgressBar::QProgressBar_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QProgressBar_SenderSignalIndex(const QProgressBar* self) {
    auto* vqprogressbar = const_cast<VirtualQProgressBar*>(dynamic_cast<const VirtualQProgressBar*>(self));
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        return vqprogressbar->senderSignalIndex();
    } else {
        return ((VirtualQProgressBar*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QProgressBar_QBaseSenderSignalIndex(const QProgressBar* self) {
    auto* vqprogressbar = const_cast<VirtualQProgressBar*>(dynamic_cast<const VirtualQProgressBar*>(self));
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->setQProgressBar_SenderSignalIndex_IsBase(true);
        return vqprogressbar->senderSignalIndex();
    } else {
        return ((VirtualQProgressBar*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QProgressBar_OnSenderSignalIndex(const QProgressBar* self, intptr_t slot) {
    auto* vqprogressbar = const_cast<VirtualQProgressBar*>(dynamic_cast<const VirtualQProgressBar*>(self));
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->setQProgressBar_SenderSignalIndex_Callback(reinterpret_cast<VirtualQProgressBar::QProgressBar_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QProgressBar_Receivers(const QProgressBar* self, const char* signal) {
    auto* vqprogressbar = const_cast<VirtualQProgressBar*>(dynamic_cast<const VirtualQProgressBar*>(self));
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        return vqprogressbar->receivers(signal);
    } else {
        return ((VirtualQProgressBar*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QProgressBar_QBaseReceivers(const QProgressBar* self, const char* signal) {
    auto* vqprogressbar = const_cast<VirtualQProgressBar*>(dynamic_cast<const VirtualQProgressBar*>(self));
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->setQProgressBar_Receivers_IsBase(true);
        return vqprogressbar->receivers(signal);
    } else {
        return ((VirtualQProgressBar*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QProgressBar_OnReceivers(const QProgressBar* self, intptr_t slot) {
    auto* vqprogressbar = const_cast<VirtualQProgressBar*>(dynamic_cast<const VirtualQProgressBar*>(self));
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->setQProgressBar_Receivers_Callback(reinterpret_cast<VirtualQProgressBar::QProgressBar_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QProgressBar_IsSignalConnected(const QProgressBar* self, const QMetaMethod* signal) {
    auto* vqprogressbar = const_cast<VirtualQProgressBar*>(dynamic_cast<const VirtualQProgressBar*>(self));
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        return vqprogressbar->isSignalConnected(*signal);
    } else {
        return ((VirtualQProgressBar*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QProgressBar_QBaseIsSignalConnected(const QProgressBar* self, const QMetaMethod* signal) {
    auto* vqprogressbar = const_cast<VirtualQProgressBar*>(dynamic_cast<const VirtualQProgressBar*>(self));
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->setQProgressBar_IsSignalConnected_IsBase(true);
        return vqprogressbar->isSignalConnected(*signal);
    } else {
        return ((VirtualQProgressBar*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QProgressBar_OnIsSignalConnected(const QProgressBar* self, intptr_t slot) {
    auto* vqprogressbar = const_cast<VirtualQProgressBar*>(dynamic_cast<const VirtualQProgressBar*>(self));
    if (vqprogressbar && vqprogressbar->isVirtualQProgressBar) {
        vqprogressbar->setQProgressBar_IsSignalConnected_Callback(reinterpret_cast<VirtualQProgressBar::QProgressBar_IsSignalConnected_Callback>(slot));
    }
}

void QProgressBar_Delete(QProgressBar* self) {
    delete self;
}
