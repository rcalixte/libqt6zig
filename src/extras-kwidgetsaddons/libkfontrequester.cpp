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
#include <QByteArray>
#include <cstring>
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
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKFontRequester*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KFontRequester_Tr(const char* s) {
    QString _ret = KFontRequester::tr(s);
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
    QString _ret = self->sampleText();
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
    QString _ret = self->title();
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
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        self->setFont(*font, onlyFixed);
    } else {
        ((VirtualKFontRequester*)self)->setFont(*font, onlyFixed);
    }
}

void KFontRequester_SetSampleText(KFontRequester* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        self->setSampleText(text_QString);
    } else {
        ((VirtualKFontRequester*)self)->setSampleText(text_QString);
    }
}

void KFontRequester_SetTitle(KFontRequester* self, const libqt_string title) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        self->setTitle(title_QString);
    } else {
        ((VirtualKFontRequester*)self)->setTitle(title_QString);
    }
}

void KFontRequester_FontSelected(KFontRequester* self, const QFont* font) {
    self->fontSelected(*font);
}

void KFontRequester_Connect_FontSelected(KFontRequester* self, intptr_t slot) {
    void (*slotFunc)(KFontRequester*, QFont*) = reinterpret_cast<void (*)(KFontRequester*, QFont*)>(slot);
    KFontRequester::connect(self, &KFontRequester::fontSelected, [self, slotFunc](const QFont& font) {
        const QFont& font_ret = font;
        // Cast returned reference into pointer
        QFont* sigval1 = const_cast<QFont*>(&font_ret);
        slotFunc(self, sigval1);
    });
}

bool KFontRequester_EventFilter(KFontRequester* self, QObject* watched, QEvent* event) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        return vkfontrequester->eventFilter(watched, event);
    }
    return {};
}

libqt_string KFontRequester_Tr2(const char* s, const char* c) {
    QString _ret = KFontRequester::tr(s, c);
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
    QString _ret = KFontRequester::tr(s, c, static_cast<int>(n));
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
int KFontRequester_QBaseMetacall(KFontRequester* self, int param1, int param2, void** param3) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->setKFontRequester_Metacall_IsBase(true);
        return vkfontrequester->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KFontRequester::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontRequester_OnMetacall(KFontRequester* self, intptr_t slot) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->setKFontRequester_Metacall_Callback(reinterpret_cast<VirtualKFontRequester::KFontRequester_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
void KFontRequester_QBaseSetFont(KFontRequester* self, const QFont* font, bool onlyFixed) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->setKFontRequester_SetFont_IsBase(true);
        vkfontrequester->setFont(*font, onlyFixed);
    } else {
        self->KFontRequester::setFont(*font, onlyFixed);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontRequester_OnSetFont(KFontRequester* self, intptr_t slot) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->setKFontRequester_SetFont_Callback(reinterpret_cast<VirtualKFontRequester::KFontRequester_SetFont_Callback>(slot));
    }
}

// Base class handler implementation
void KFontRequester_QBaseSetSampleText(KFontRequester* self, const libqt_string text) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->setKFontRequester_SetSampleText_IsBase(true);
        vkfontrequester->setSampleText(text_QString);
    } else {
        self->KFontRequester::setSampleText(text_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontRequester_OnSetSampleText(KFontRequester* self, intptr_t slot) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->setKFontRequester_SetSampleText_Callback(reinterpret_cast<VirtualKFontRequester::KFontRequester_SetSampleText_Callback>(slot));
    }
}

// Base class handler implementation
void KFontRequester_QBaseSetTitle(KFontRequester* self, const libqt_string title) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    QString title_QString = QString::fromUtf8(title.data, title.len);
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->setKFontRequester_SetTitle_IsBase(true);
        vkfontrequester->setTitle(title_QString);
    } else {
        self->KFontRequester::setTitle(title_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontRequester_OnSetTitle(KFontRequester* self, intptr_t slot) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->setKFontRequester_SetTitle_Callback(reinterpret_cast<VirtualKFontRequester::KFontRequester_SetTitle_Callback>(slot));
    }
}

// Base class handler implementation
bool KFontRequester_QBaseEventFilter(KFontRequester* self, QObject* watched, QEvent* event) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->setKFontRequester_EventFilter_IsBase(true);
        return vkfontrequester->eventFilter(watched, event);
    } else {
        return ((VirtualKFontRequester*)self)->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontRequester_OnEventFilter(KFontRequester* self, intptr_t slot) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->setKFontRequester_EventFilter_Callback(reinterpret_cast<VirtualKFontRequester::KFontRequester_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
int KFontRequester_DevType(const KFontRequester* self) {
    auto* vkfontrequester = const_cast<VirtualKFontRequester*>(dynamic_cast<const VirtualKFontRequester*>(self));
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        return vkfontrequester->devType();
    } else {
        return self->KFontRequester::devType();
    }
}

// Base class handler implementation
int KFontRequester_QBaseDevType(const KFontRequester* self) {
    auto* vkfontrequester = const_cast<VirtualKFontRequester*>(dynamic_cast<const VirtualKFontRequester*>(self));
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->setKFontRequester_DevType_IsBase(true);
        return vkfontrequester->devType();
    } else {
        return self->KFontRequester::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void KFontRequester_OnDevType(const KFontRequester* self, intptr_t slot) {
    auto* vkfontrequester = const_cast<VirtualKFontRequester*>(dynamic_cast<const VirtualKFontRequester*>(self));
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->setKFontRequester_DevType_Callback(reinterpret_cast<VirtualKFontRequester::KFontRequester_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void KFontRequester_SetVisible(KFontRequester* self, bool visible) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->setVisible(visible);
    } else {
        self->KFontRequester::setVisible(visible);
    }
}

// Base class handler implementation
void KFontRequester_QBaseSetVisible(KFontRequester* self, bool visible) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->setKFontRequester_SetVisible_IsBase(true);
        vkfontrequester->setVisible(visible);
    } else {
        self->KFontRequester::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontRequester_OnSetVisible(KFontRequester* self, intptr_t slot) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->setKFontRequester_SetVisible_Callback(reinterpret_cast<VirtualKFontRequester::KFontRequester_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KFontRequester_SizeHint(const KFontRequester* self) {
    auto* vkfontrequester = const_cast<VirtualKFontRequester*>(dynamic_cast<const VirtualKFontRequester*>(self));
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        return new QSize(vkfontrequester->sizeHint());
    } else {
        return new QSize(((VirtualKFontRequester*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* KFontRequester_QBaseSizeHint(const KFontRequester* self) {
    auto* vkfontrequester = const_cast<VirtualKFontRequester*>(dynamic_cast<const VirtualKFontRequester*>(self));
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->setKFontRequester_SizeHint_IsBase(true);
        return new QSize(vkfontrequester->sizeHint());
    } else {
        return new QSize(((VirtualKFontRequester*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KFontRequester_OnSizeHint(const KFontRequester* self, intptr_t slot) {
    auto* vkfontrequester = const_cast<VirtualKFontRequester*>(dynamic_cast<const VirtualKFontRequester*>(self));
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->setKFontRequester_SizeHint_Callback(reinterpret_cast<VirtualKFontRequester::KFontRequester_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KFontRequester_MinimumSizeHint(const KFontRequester* self) {
    auto* vkfontrequester = const_cast<VirtualKFontRequester*>(dynamic_cast<const VirtualKFontRequester*>(self));
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        return new QSize(vkfontrequester->minimumSizeHint());
    } else {
        return new QSize(((VirtualKFontRequester*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* KFontRequester_QBaseMinimumSizeHint(const KFontRequester* self) {
    auto* vkfontrequester = const_cast<VirtualKFontRequester*>(dynamic_cast<const VirtualKFontRequester*>(self));
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->setKFontRequester_MinimumSizeHint_IsBase(true);
        return new QSize(vkfontrequester->minimumSizeHint());
    } else {
        return new QSize(((VirtualKFontRequester*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KFontRequester_OnMinimumSizeHint(const KFontRequester* self, intptr_t slot) {
    auto* vkfontrequester = const_cast<VirtualKFontRequester*>(dynamic_cast<const VirtualKFontRequester*>(self));
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->setKFontRequester_MinimumSizeHint_Callback(reinterpret_cast<VirtualKFontRequester::KFontRequester_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
int KFontRequester_HeightForWidth(const KFontRequester* self, int param1) {
    auto* vkfontrequester = const_cast<VirtualKFontRequester*>(dynamic_cast<const VirtualKFontRequester*>(self));
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        return vkfontrequester->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KFontRequester::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int KFontRequester_QBaseHeightForWidth(const KFontRequester* self, int param1) {
    auto* vkfontrequester = const_cast<VirtualKFontRequester*>(dynamic_cast<const VirtualKFontRequester*>(self));
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->setKFontRequester_HeightForWidth_IsBase(true);
        return vkfontrequester->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KFontRequester::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KFontRequester_OnHeightForWidth(const KFontRequester* self, intptr_t slot) {
    auto* vkfontrequester = const_cast<VirtualKFontRequester*>(dynamic_cast<const VirtualKFontRequester*>(self));
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->setKFontRequester_HeightForWidth_Callback(reinterpret_cast<VirtualKFontRequester::KFontRequester_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool KFontRequester_HasHeightForWidth(const KFontRequester* self) {
    auto* vkfontrequester = const_cast<VirtualKFontRequester*>(dynamic_cast<const VirtualKFontRequester*>(self));
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        return vkfontrequester->hasHeightForWidth();
    } else {
        return self->KFontRequester::hasHeightForWidth();
    }
}

// Base class handler implementation
bool KFontRequester_QBaseHasHeightForWidth(const KFontRequester* self) {
    auto* vkfontrequester = const_cast<VirtualKFontRequester*>(dynamic_cast<const VirtualKFontRequester*>(self));
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->setKFontRequester_HasHeightForWidth_IsBase(true);
        return vkfontrequester->hasHeightForWidth();
    } else {
        return self->KFontRequester::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void KFontRequester_OnHasHeightForWidth(const KFontRequester* self, intptr_t slot) {
    auto* vkfontrequester = const_cast<VirtualKFontRequester*>(dynamic_cast<const VirtualKFontRequester*>(self));
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->setKFontRequester_HasHeightForWidth_Callback(reinterpret_cast<VirtualKFontRequester::KFontRequester_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* KFontRequester_PaintEngine(const KFontRequester* self) {
    auto* vkfontrequester = const_cast<VirtualKFontRequester*>(dynamic_cast<const VirtualKFontRequester*>(self));
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        return vkfontrequester->paintEngine();
    } else {
        return self->KFontRequester::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* KFontRequester_QBasePaintEngine(const KFontRequester* self) {
    auto* vkfontrequester = const_cast<VirtualKFontRequester*>(dynamic_cast<const VirtualKFontRequester*>(self));
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->setKFontRequester_PaintEngine_IsBase(true);
        return vkfontrequester->paintEngine();
    } else {
        return self->KFontRequester::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void KFontRequester_OnPaintEngine(const KFontRequester* self, intptr_t slot) {
    auto* vkfontrequester = const_cast<VirtualKFontRequester*>(dynamic_cast<const VirtualKFontRequester*>(self));
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->setKFontRequester_PaintEngine_Callback(reinterpret_cast<VirtualKFontRequester::KFontRequester_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
bool KFontRequester_Event(KFontRequester* self, QEvent* event) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        return vkfontrequester->event(event);
    } else {
        return ((VirtualKFontRequester*)self)->event(event);
    }
}

// Base class handler implementation
bool KFontRequester_QBaseEvent(KFontRequester* self, QEvent* event) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->setKFontRequester_Event_IsBase(true);
        return vkfontrequester->event(event);
    } else {
        return ((VirtualKFontRequester*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontRequester_OnEvent(KFontRequester* self, intptr_t slot) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->setKFontRequester_Event_Callback(reinterpret_cast<VirtualKFontRequester::KFontRequester_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void KFontRequester_MousePressEvent(KFontRequester* self, QMouseEvent* event) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->mousePressEvent(event);
    } else {
        ((VirtualKFontRequester*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void KFontRequester_QBaseMousePressEvent(KFontRequester* self, QMouseEvent* event) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->setKFontRequester_MousePressEvent_IsBase(true);
        vkfontrequester->mousePressEvent(event);
    } else {
        ((VirtualKFontRequester*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontRequester_OnMousePressEvent(KFontRequester* self, intptr_t slot) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->setKFontRequester_MousePressEvent_Callback(reinterpret_cast<VirtualKFontRequester::KFontRequester_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFontRequester_MouseReleaseEvent(KFontRequester* self, QMouseEvent* event) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->mouseReleaseEvent(event);
    } else {
        ((VirtualKFontRequester*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void KFontRequester_QBaseMouseReleaseEvent(KFontRequester* self, QMouseEvent* event) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->setKFontRequester_MouseReleaseEvent_IsBase(true);
        vkfontrequester->mouseReleaseEvent(event);
    } else {
        ((VirtualKFontRequester*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontRequester_OnMouseReleaseEvent(KFontRequester* self, intptr_t slot) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->setKFontRequester_MouseReleaseEvent_Callback(reinterpret_cast<VirtualKFontRequester::KFontRequester_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFontRequester_MouseDoubleClickEvent(KFontRequester* self, QMouseEvent* event) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKFontRequester*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void KFontRequester_QBaseMouseDoubleClickEvent(KFontRequester* self, QMouseEvent* event) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->setKFontRequester_MouseDoubleClickEvent_IsBase(true);
        vkfontrequester->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKFontRequester*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontRequester_OnMouseDoubleClickEvent(KFontRequester* self, intptr_t slot) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->setKFontRequester_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualKFontRequester::KFontRequester_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFontRequester_MouseMoveEvent(KFontRequester* self, QMouseEvent* event) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->mouseMoveEvent(event);
    } else {
        ((VirtualKFontRequester*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void KFontRequester_QBaseMouseMoveEvent(KFontRequester* self, QMouseEvent* event) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->setKFontRequester_MouseMoveEvent_IsBase(true);
        vkfontrequester->mouseMoveEvent(event);
    } else {
        ((VirtualKFontRequester*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontRequester_OnMouseMoveEvent(KFontRequester* self, intptr_t slot) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->setKFontRequester_MouseMoveEvent_Callback(reinterpret_cast<VirtualKFontRequester::KFontRequester_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFontRequester_WheelEvent(KFontRequester* self, QWheelEvent* event) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->wheelEvent(event);
    } else {
        ((VirtualKFontRequester*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void KFontRequester_QBaseWheelEvent(KFontRequester* self, QWheelEvent* event) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->setKFontRequester_WheelEvent_IsBase(true);
        vkfontrequester->wheelEvent(event);
    } else {
        ((VirtualKFontRequester*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontRequester_OnWheelEvent(KFontRequester* self, intptr_t slot) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->setKFontRequester_WheelEvent_Callback(reinterpret_cast<VirtualKFontRequester::KFontRequester_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFontRequester_KeyPressEvent(KFontRequester* self, QKeyEvent* event) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->keyPressEvent(event);
    } else {
        ((VirtualKFontRequester*)self)->keyPressEvent(event);
    }
}

// Base class handler implementation
void KFontRequester_QBaseKeyPressEvent(KFontRequester* self, QKeyEvent* event) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->setKFontRequester_KeyPressEvent_IsBase(true);
        vkfontrequester->keyPressEvent(event);
    } else {
        ((VirtualKFontRequester*)self)->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontRequester_OnKeyPressEvent(KFontRequester* self, intptr_t slot) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->setKFontRequester_KeyPressEvent_Callback(reinterpret_cast<VirtualKFontRequester::KFontRequester_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFontRequester_KeyReleaseEvent(KFontRequester* self, QKeyEvent* event) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->keyReleaseEvent(event);
    } else {
        ((VirtualKFontRequester*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void KFontRequester_QBaseKeyReleaseEvent(KFontRequester* self, QKeyEvent* event) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->setKFontRequester_KeyReleaseEvent_IsBase(true);
        vkfontrequester->keyReleaseEvent(event);
    } else {
        ((VirtualKFontRequester*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontRequester_OnKeyReleaseEvent(KFontRequester* self, intptr_t slot) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->setKFontRequester_KeyReleaseEvent_Callback(reinterpret_cast<VirtualKFontRequester::KFontRequester_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFontRequester_FocusInEvent(KFontRequester* self, QFocusEvent* event) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->focusInEvent(event);
    } else {
        ((VirtualKFontRequester*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void KFontRequester_QBaseFocusInEvent(KFontRequester* self, QFocusEvent* event) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->setKFontRequester_FocusInEvent_IsBase(true);
        vkfontrequester->focusInEvent(event);
    } else {
        ((VirtualKFontRequester*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontRequester_OnFocusInEvent(KFontRequester* self, intptr_t slot) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->setKFontRequester_FocusInEvent_Callback(reinterpret_cast<VirtualKFontRequester::KFontRequester_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFontRequester_FocusOutEvent(KFontRequester* self, QFocusEvent* event) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->focusOutEvent(event);
    } else {
        ((VirtualKFontRequester*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void KFontRequester_QBaseFocusOutEvent(KFontRequester* self, QFocusEvent* event) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->setKFontRequester_FocusOutEvent_IsBase(true);
        vkfontrequester->focusOutEvent(event);
    } else {
        ((VirtualKFontRequester*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontRequester_OnFocusOutEvent(KFontRequester* self, intptr_t slot) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->setKFontRequester_FocusOutEvent_Callback(reinterpret_cast<VirtualKFontRequester::KFontRequester_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFontRequester_EnterEvent(KFontRequester* self, QEnterEvent* event) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->enterEvent(event);
    } else {
        ((VirtualKFontRequester*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void KFontRequester_QBaseEnterEvent(KFontRequester* self, QEnterEvent* event) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->setKFontRequester_EnterEvent_IsBase(true);
        vkfontrequester->enterEvent(event);
    } else {
        ((VirtualKFontRequester*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontRequester_OnEnterEvent(KFontRequester* self, intptr_t slot) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->setKFontRequester_EnterEvent_Callback(reinterpret_cast<VirtualKFontRequester::KFontRequester_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFontRequester_LeaveEvent(KFontRequester* self, QEvent* event) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->leaveEvent(event);
    } else {
        ((VirtualKFontRequester*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void KFontRequester_QBaseLeaveEvent(KFontRequester* self, QEvent* event) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->setKFontRequester_LeaveEvent_IsBase(true);
        vkfontrequester->leaveEvent(event);
    } else {
        ((VirtualKFontRequester*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontRequester_OnLeaveEvent(KFontRequester* self, intptr_t slot) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->setKFontRequester_LeaveEvent_Callback(reinterpret_cast<VirtualKFontRequester::KFontRequester_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFontRequester_PaintEvent(KFontRequester* self, QPaintEvent* event) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->paintEvent(event);
    } else {
        ((VirtualKFontRequester*)self)->paintEvent(event);
    }
}

// Base class handler implementation
void KFontRequester_QBasePaintEvent(KFontRequester* self, QPaintEvent* event) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->setKFontRequester_PaintEvent_IsBase(true);
        vkfontrequester->paintEvent(event);
    } else {
        ((VirtualKFontRequester*)self)->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontRequester_OnPaintEvent(KFontRequester* self, intptr_t slot) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->setKFontRequester_PaintEvent_Callback(reinterpret_cast<VirtualKFontRequester::KFontRequester_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFontRequester_MoveEvent(KFontRequester* self, QMoveEvent* event) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->moveEvent(event);
    } else {
        ((VirtualKFontRequester*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void KFontRequester_QBaseMoveEvent(KFontRequester* self, QMoveEvent* event) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->setKFontRequester_MoveEvent_IsBase(true);
        vkfontrequester->moveEvent(event);
    } else {
        ((VirtualKFontRequester*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontRequester_OnMoveEvent(KFontRequester* self, intptr_t slot) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->setKFontRequester_MoveEvent_Callback(reinterpret_cast<VirtualKFontRequester::KFontRequester_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFontRequester_ResizeEvent(KFontRequester* self, QResizeEvent* event) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->resizeEvent(event);
    } else {
        ((VirtualKFontRequester*)self)->resizeEvent(event);
    }
}

// Base class handler implementation
void KFontRequester_QBaseResizeEvent(KFontRequester* self, QResizeEvent* event) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->setKFontRequester_ResizeEvent_IsBase(true);
        vkfontrequester->resizeEvent(event);
    } else {
        ((VirtualKFontRequester*)self)->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontRequester_OnResizeEvent(KFontRequester* self, intptr_t slot) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->setKFontRequester_ResizeEvent_Callback(reinterpret_cast<VirtualKFontRequester::KFontRequester_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFontRequester_CloseEvent(KFontRequester* self, QCloseEvent* event) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->closeEvent(event);
    } else {
        ((VirtualKFontRequester*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void KFontRequester_QBaseCloseEvent(KFontRequester* self, QCloseEvent* event) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->setKFontRequester_CloseEvent_IsBase(true);
        vkfontrequester->closeEvent(event);
    } else {
        ((VirtualKFontRequester*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontRequester_OnCloseEvent(KFontRequester* self, intptr_t slot) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->setKFontRequester_CloseEvent_Callback(reinterpret_cast<VirtualKFontRequester::KFontRequester_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFontRequester_ContextMenuEvent(KFontRequester* self, QContextMenuEvent* event) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->contextMenuEvent(event);
    } else {
        ((VirtualKFontRequester*)self)->contextMenuEvent(event);
    }
}

// Base class handler implementation
void KFontRequester_QBaseContextMenuEvent(KFontRequester* self, QContextMenuEvent* event) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->setKFontRequester_ContextMenuEvent_IsBase(true);
        vkfontrequester->contextMenuEvent(event);
    } else {
        ((VirtualKFontRequester*)self)->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontRequester_OnContextMenuEvent(KFontRequester* self, intptr_t slot) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->setKFontRequester_ContextMenuEvent_Callback(reinterpret_cast<VirtualKFontRequester::KFontRequester_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFontRequester_TabletEvent(KFontRequester* self, QTabletEvent* event) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->tabletEvent(event);
    } else {
        ((VirtualKFontRequester*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void KFontRequester_QBaseTabletEvent(KFontRequester* self, QTabletEvent* event) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->setKFontRequester_TabletEvent_IsBase(true);
        vkfontrequester->tabletEvent(event);
    } else {
        ((VirtualKFontRequester*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontRequester_OnTabletEvent(KFontRequester* self, intptr_t slot) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->setKFontRequester_TabletEvent_Callback(reinterpret_cast<VirtualKFontRequester::KFontRequester_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFontRequester_ActionEvent(KFontRequester* self, QActionEvent* event) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->actionEvent(event);
    } else {
        ((VirtualKFontRequester*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void KFontRequester_QBaseActionEvent(KFontRequester* self, QActionEvent* event) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->setKFontRequester_ActionEvent_IsBase(true);
        vkfontrequester->actionEvent(event);
    } else {
        ((VirtualKFontRequester*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontRequester_OnActionEvent(KFontRequester* self, intptr_t slot) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->setKFontRequester_ActionEvent_Callback(reinterpret_cast<VirtualKFontRequester::KFontRequester_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFontRequester_DragEnterEvent(KFontRequester* self, QDragEnterEvent* event) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->dragEnterEvent(event);
    } else {
        ((VirtualKFontRequester*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void KFontRequester_QBaseDragEnterEvent(KFontRequester* self, QDragEnterEvent* event) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->setKFontRequester_DragEnterEvent_IsBase(true);
        vkfontrequester->dragEnterEvent(event);
    } else {
        ((VirtualKFontRequester*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontRequester_OnDragEnterEvent(KFontRequester* self, intptr_t slot) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->setKFontRequester_DragEnterEvent_Callback(reinterpret_cast<VirtualKFontRequester::KFontRequester_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFontRequester_DragMoveEvent(KFontRequester* self, QDragMoveEvent* event) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->dragMoveEvent(event);
    } else {
        ((VirtualKFontRequester*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void KFontRequester_QBaseDragMoveEvent(KFontRequester* self, QDragMoveEvent* event) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->setKFontRequester_DragMoveEvent_IsBase(true);
        vkfontrequester->dragMoveEvent(event);
    } else {
        ((VirtualKFontRequester*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontRequester_OnDragMoveEvent(KFontRequester* self, intptr_t slot) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->setKFontRequester_DragMoveEvent_Callback(reinterpret_cast<VirtualKFontRequester::KFontRequester_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFontRequester_DragLeaveEvent(KFontRequester* self, QDragLeaveEvent* event) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->dragLeaveEvent(event);
    } else {
        ((VirtualKFontRequester*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void KFontRequester_QBaseDragLeaveEvent(KFontRequester* self, QDragLeaveEvent* event) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->setKFontRequester_DragLeaveEvent_IsBase(true);
        vkfontrequester->dragLeaveEvent(event);
    } else {
        ((VirtualKFontRequester*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontRequester_OnDragLeaveEvent(KFontRequester* self, intptr_t slot) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->setKFontRequester_DragLeaveEvent_Callback(reinterpret_cast<VirtualKFontRequester::KFontRequester_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFontRequester_DropEvent(KFontRequester* self, QDropEvent* event) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->dropEvent(event);
    } else {
        ((VirtualKFontRequester*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void KFontRequester_QBaseDropEvent(KFontRequester* self, QDropEvent* event) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->setKFontRequester_DropEvent_IsBase(true);
        vkfontrequester->dropEvent(event);
    } else {
        ((VirtualKFontRequester*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontRequester_OnDropEvent(KFontRequester* self, intptr_t slot) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->setKFontRequester_DropEvent_Callback(reinterpret_cast<VirtualKFontRequester::KFontRequester_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFontRequester_ShowEvent(KFontRequester* self, QShowEvent* event) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->showEvent(event);
    } else {
        ((VirtualKFontRequester*)self)->showEvent(event);
    }
}

// Base class handler implementation
void KFontRequester_QBaseShowEvent(KFontRequester* self, QShowEvent* event) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->setKFontRequester_ShowEvent_IsBase(true);
        vkfontrequester->showEvent(event);
    } else {
        ((VirtualKFontRequester*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontRequester_OnShowEvent(KFontRequester* self, intptr_t slot) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->setKFontRequester_ShowEvent_Callback(reinterpret_cast<VirtualKFontRequester::KFontRequester_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFontRequester_HideEvent(KFontRequester* self, QHideEvent* event) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->hideEvent(event);
    } else {
        ((VirtualKFontRequester*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void KFontRequester_QBaseHideEvent(KFontRequester* self, QHideEvent* event) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->setKFontRequester_HideEvent_IsBase(true);
        vkfontrequester->hideEvent(event);
    } else {
        ((VirtualKFontRequester*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontRequester_OnHideEvent(KFontRequester* self, intptr_t slot) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->setKFontRequester_HideEvent_Callback(reinterpret_cast<VirtualKFontRequester::KFontRequester_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KFontRequester_NativeEvent(KFontRequester* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        return vkfontrequester->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKFontRequester*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool KFontRequester_QBaseNativeEvent(KFontRequester* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->setKFontRequester_NativeEvent_IsBase(true);
        return vkfontrequester->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKFontRequester*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void KFontRequester_OnNativeEvent(KFontRequester* self, intptr_t slot) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->setKFontRequester_NativeEvent_Callback(reinterpret_cast<VirtualKFontRequester::KFontRequester_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFontRequester_ChangeEvent(KFontRequester* self, QEvent* param1) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->changeEvent(param1);
    } else {
        ((VirtualKFontRequester*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void KFontRequester_QBaseChangeEvent(KFontRequester* self, QEvent* param1) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->setKFontRequester_ChangeEvent_IsBase(true);
        vkfontrequester->changeEvent(param1);
    } else {
        ((VirtualKFontRequester*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontRequester_OnChangeEvent(KFontRequester* self, intptr_t slot) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->setKFontRequester_ChangeEvent_Callback(reinterpret_cast<VirtualKFontRequester::KFontRequester_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int KFontRequester_Metric(const KFontRequester* self, int param1) {
    auto* vkfontrequester = const_cast<VirtualKFontRequester*>(dynamic_cast<const VirtualKFontRequester*>(self));
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        return vkfontrequester->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKFontRequester*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int KFontRequester_QBaseMetric(const KFontRequester* self, int param1) {
    auto* vkfontrequester = const_cast<VirtualKFontRequester*>(dynamic_cast<const VirtualKFontRequester*>(self));
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->setKFontRequester_Metric_IsBase(true);
        return vkfontrequester->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKFontRequester*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KFontRequester_OnMetric(const KFontRequester* self, intptr_t slot) {
    auto* vkfontrequester = const_cast<VirtualKFontRequester*>(dynamic_cast<const VirtualKFontRequester*>(self));
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->setKFontRequester_Metric_Callback(reinterpret_cast<VirtualKFontRequester::KFontRequester_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void KFontRequester_InitPainter(const KFontRequester* self, QPainter* painter) {
    auto* vkfontrequester = const_cast<VirtualKFontRequester*>(dynamic_cast<const VirtualKFontRequester*>(self));
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->initPainter(painter);
    } else {
        ((VirtualKFontRequester*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void KFontRequester_QBaseInitPainter(const KFontRequester* self, QPainter* painter) {
    auto* vkfontrequester = const_cast<VirtualKFontRequester*>(dynamic_cast<const VirtualKFontRequester*>(self));
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->setKFontRequester_InitPainter_IsBase(true);
        vkfontrequester->initPainter(painter);
    } else {
        ((VirtualKFontRequester*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontRequester_OnInitPainter(const KFontRequester* self, intptr_t slot) {
    auto* vkfontrequester = const_cast<VirtualKFontRequester*>(dynamic_cast<const VirtualKFontRequester*>(self));
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->setKFontRequester_InitPainter_Callback(reinterpret_cast<VirtualKFontRequester::KFontRequester_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* KFontRequester_Redirected(const KFontRequester* self, QPoint* offset) {
    auto* vkfontrequester = const_cast<VirtualKFontRequester*>(dynamic_cast<const VirtualKFontRequester*>(self));
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        return vkfontrequester->redirected(offset);
    } else {
        return ((VirtualKFontRequester*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* KFontRequester_QBaseRedirected(const KFontRequester* self, QPoint* offset) {
    auto* vkfontrequester = const_cast<VirtualKFontRequester*>(dynamic_cast<const VirtualKFontRequester*>(self));
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->setKFontRequester_Redirected_IsBase(true);
        return vkfontrequester->redirected(offset);
    } else {
        return ((VirtualKFontRequester*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontRequester_OnRedirected(const KFontRequester* self, intptr_t slot) {
    auto* vkfontrequester = const_cast<VirtualKFontRequester*>(dynamic_cast<const VirtualKFontRequester*>(self));
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->setKFontRequester_Redirected_Callback(reinterpret_cast<VirtualKFontRequester::KFontRequester_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* KFontRequester_SharedPainter(const KFontRequester* self) {
    auto* vkfontrequester = const_cast<VirtualKFontRequester*>(dynamic_cast<const VirtualKFontRequester*>(self));
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        return vkfontrequester->sharedPainter();
    } else {
        return ((VirtualKFontRequester*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* KFontRequester_QBaseSharedPainter(const KFontRequester* self) {
    auto* vkfontrequester = const_cast<VirtualKFontRequester*>(dynamic_cast<const VirtualKFontRequester*>(self));
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->setKFontRequester_SharedPainter_IsBase(true);
        return vkfontrequester->sharedPainter();
    } else {
        return ((VirtualKFontRequester*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void KFontRequester_OnSharedPainter(const KFontRequester* self, intptr_t slot) {
    auto* vkfontrequester = const_cast<VirtualKFontRequester*>(dynamic_cast<const VirtualKFontRequester*>(self));
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->setKFontRequester_SharedPainter_Callback(reinterpret_cast<VirtualKFontRequester::KFontRequester_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void KFontRequester_InputMethodEvent(KFontRequester* self, QInputMethodEvent* param1) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->inputMethodEvent(param1);
    } else {
        ((VirtualKFontRequester*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void KFontRequester_QBaseInputMethodEvent(KFontRequester* self, QInputMethodEvent* param1) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->setKFontRequester_InputMethodEvent_IsBase(true);
        vkfontrequester->inputMethodEvent(param1);
    } else {
        ((VirtualKFontRequester*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontRequester_OnInputMethodEvent(KFontRequester* self, intptr_t slot) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->setKFontRequester_InputMethodEvent_Callback(reinterpret_cast<VirtualKFontRequester::KFontRequester_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* KFontRequester_InputMethodQuery(const KFontRequester* self, int param1) {
    auto* vkfontrequester = const_cast<VirtualKFontRequester*>(dynamic_cast<const VirtualKFontRequester*>(self));
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        return new QVariant(vkfontrequester->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKFontRequester*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* KFontRequester_QBaseInputMethodQuery(const KFontRequester* self, int param1) {
    auto* vkfontrequester = const_cast<VirtualKFontRequester*>(dynamic_cast<const VirtualKFontRequester*>(self));
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->setKFontRequester_InputMethodQuery_IsBase(true);
        return new QVariant(vkfontrequester->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKFontRequester*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void KFontRequester_OnInputMethodQuery(const KFontRequester* self, intptr_t slot) {
    auto* vkfontrequester = const_cast<VirtualKFontRequester*>(dynamic_cast<const VirtualKFontRequester*>(self));
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->setKFontRequester_InputMethodQuery_Callback(reinterpret_cast<VirtualKFontRequester::KFontRequester_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool KFontRequester_FocusNextPrevChild(KFontRequester* self, bool next) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        return vkfontrequester->focusNextPrevChild(next);
    } else {
        return ((VirtualKFontRequester*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool KFontRequester_QBaseFocusNextPrevChild(KFontRequester* self, bool next) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->setKFontRequester_FocusNextPrevChild_IsBase(true);
        return vkfontrequester->focusNextPrevChild(next);
    } else {
        return ((VirtualKFontRequester*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontRequester_OnFocusNextPrevChild(KFontRequester* self, intptr_t slot) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->setKFontRequester_FocusNextPrevChild_Callback(reinterpret_cast<VirtualKFontRequester::KFontRequester_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
void KFontRequester_TimerEvent(KFontRequester* self, QTimerEvent* event) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->timerEvent(event);
    } else {
        ((VirtualKFontRequester*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KFontRequester_QBaseTimerEvent(KFontRequester* self, QTimerEvent* event) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->setKFontRequester_TimerEvent_IsBase(true);
        vkfontrequester->timerEvent(event);
    } else {
        ((VirtualKFontRequester*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontRequester_OnTimerEvent(KFontRequester* self, intptr_t slot) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->setKFontRequester_TimerEvent_Callback(reinterpret_cast<VirtualKFontRequester::KFontRequester_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFontRequester_ChildEvent(KFontRequester* self, QChildEvent* event) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->childEvent(event);
    } else {
        ((VirtualKFontRequester*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KFontRequester_QBaseChildEvent(KFontRequester* self, QChildEvent* event) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->setKFontRequester_ChildEvent_IsBase(true);
        vkfontrequester->childEvent(event);
    } else {
        ((VirtualKFontRequester*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontRequester_OnChildEvent(KFontRequester* self, intptr_t slot) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->setKFontRequester_ChildEvent_Callback(reinterpret_cast<VirtualKFontRequester::KFontRequester_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFontRequester_CustomEvent(KFontRequester* self, QEvent* event) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->customEvent(event);
    } else {
        ((VirtualKFontRequester*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KFontRequester_QBaseCustomEvent(KFontRequester* self, QEvent* event) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->setKFontRequester_CustomEvent_IsBase(true);
        vkfontrequester->customEvent(event);
    } else {
        ((VirtualKFontRequester*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontRequester_OnCustomEvent(KFontRequester* self, intptr_t slot) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->setKFontRequester_CustomEvent_Callback(reinterpret_cast<VirtualKFontRequester::KFontRequester_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFontRequester_ConnectNotify(KFontRequester* self, const QMetaMethod* signal) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->connectNotify(*signal);
    } else {
        ((VirtualKFontRequester*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KFontRequester_QBaseConnectNotify(KFontRequester* self, const QMetaMethod* signal) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->setKFontRequester_ConnectNotify_IsBase(true);
        vkfontrequester->connectNotify(*signal);
    } else {
        ((VirtualKFontRequester*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontRequester_OnConnectNotify(KFontRequester* self, intptr_t slot) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->setKFontRequester_ConnectNotify_Callback(reinterpret_cast<VirtualKFontRequester::KFontRequester_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KFontRequester_DisconnectNotify(KFontRequester* self, const QMetaMethod* signal) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->disconnectNotify(*signal);
    } else {
        ((VirtualKFontRequester*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KFontRequester_QBaseDisconnectNotify(KFontRequester* self, const QMetaMethod* signal) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->setKFontRequester_DisconnectNotify_IsBase(true);
        vkfontrequester->disconnectNotify(*signal);
    } else {
        ((VirtualKFontRequester*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontRequester_OnDisconnectNotify(KFontRequester* self, intptr_t slot) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->setKFontRequester_DisconnectNotify_Callback(reinterpret_cast<VirtualKFontRequester::KFontRequester_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KFontRequester_UpdateMicroFocus(KFontRequester* self) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->updateMicroFocus();
    } else {
        ((VirtualKFontRequester*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void KFontRequester_QBaseUpdateMicroFocus(KFontRequester* self) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->setKFontRequester_UpdateMicroFocus_IsBase(true);
        vkfontrequester->updateMicroFocus();
    } else {
        ((VirtualKFontRequester*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void KFontRequester_OnUpdateMicroFocus(KFontRequester* self, intptr_t slot) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->setKFontRequester_UpdateMicroFocus_Callback(reinterpret_cast<VirtualKFontRequester::KFontRequester_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void KFontRequester_Create(KFontRequester* self) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->create();
    } else {
        ((VirtualKFontRequester*)self)->create();
    }
}

// Base class handler implementation
void KFontRequester_QBaseCreate(KFontRequester* self) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->setKFontRequester_Create_IsBase(true);
        vkfontrequester->create();
    } else {
        ((VirtualKFontRequester*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void KFontRequester_OnCreate(KFontRequester* self, intptr_t slot) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->setKFontRequester_Create_Callback(reinterpret_cast<VirtualKFontRequester::KFontRequester_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void KFontRequester_Destroy(KFontRequester* self) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->destroy();
    } else {
        ((VirtualKFontRequester*)self)->destroy();
    }
}

// Base class handler implementation
void KFontRequester_QBaseDestroy(KFontRequester* self) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->setKFontRequester_Destroy_IsBase(true);
        vkfontrequester->destroy();
    } else {
        ((VirtualKFontRequester*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void KFontRequester_OnDestroy(KFontRequester* self, intptr_t slot) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->setKFontRequester_Destroy_Callback(reinterpret_cast<VirtualKFontRequester::KFontRequester_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool KFontRequester_FocusNextChild(KFontRequester* self) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        return vkfontrequester->focusNextChild();
    } else {
        return ((VirtualKFontRequester*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool KFontRequester_QBaseFocusNextChild(KFontRequester* self) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->setKFontRequester_FocusNextChild_IsBase(true);
        return vkfontrequester->focusNextChild();
    } else {
        return ((VirtualKFontRequester*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KFontRequester_OnFocusNextChild(KFontRequester* self, intptr_t slot) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->setKFontRequester_FocusNextChild_Callback(reinterpret_cast<VirtualKFontRequester::KFontRequester_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KFontRequester_FocusPreviousChild(KFontRequester* self) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        return vkfontrequester->focusPreviousChild();
    } else {
        return ((VirtualKFontRequester*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool KFontRequester_QBaseFocusPreviousChild(KFontRequester* self) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->setKFontRequester_FocusPreviousChild_IsBase(true);
        return vkfontrequester->focusPreviousChild();
    } else {
        return ((VirtualKFontRequester*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KFontRequester_OnFocusPreviousChild(KFontRequester* self, intptr_t slot) {
    auto* vkfontrequester = dynamic_cast<VirtualKFontRequester*>(self);
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->setKFontRequester_FocusPreviousChild_Callback(reinterpret_cast<VirtualKFontRequester::KFontRequester_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KFontRequester_Sender(const KFontRequester* self) {
    auto* vkfontrequester = const_cast<VirtualKFontRequester*>(dynamic_cast<const VirtualKFontRequester*>(self));
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        return vkfontrequester->sender();
    } else {
        return ((VirtualKFontRequester*)self)->sender();
    }
}

// Base class handler implementation
QObject* KFontRequester_QBaseSender(const KFontRequester* self) {
    auto* vkfontrequester = const_cast<VirtualKFontRequester*>(dynamic_cast<const VirtualKFontRequester*>(self));
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->setKFontRequester_Sender_IsBase(true);
        return vkfontrequester->sender();
    } else {
        return ((VirtualKFontRequester*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KFontRequester_OnSender(const KFontRequester* self, intptr_t slot) {
    auto* vkfontrequester = const_cast<VirtualKFontRequester*>(dynamic_cast<const VirtualKFontRequester*>(self));
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->setKFontRequester_Sender_Callback(reinterpret_cast<VirtualKFontRequester::KFontRequester_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KFontRequester_SenderSignalIndex(const KFontRequester* self) {
    auto* vkfontrequester = const_cast<VirtualKFontRequester*>(dynamic_cast<const VirtualKFontRequester*>(self));
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        return vkfontrequester->senderSignalIndex();
    } else {
        return ((VirtualKFontRequester*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KFontRequester_QBaseSenderSignalIndex(const KFontRequester* self) {
    auto* vkfontrequester = const_cast<VirtualKFontRequester*>(dynamic_cast<const VirtualKFontRequester*>(self));
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->setKFontRequester_SenderSignalIndex_IsBase(true);
        return vkfontrequester->senderSignalIndex();
    } else {
        return ((VirtualKFontRequester*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KFontRequester_OnSenderSignalIndex(const KFontRequester* self, intptr_t slot) {
    auto* vkfontrequester = const_cast<VirtualKFontRequester*>(dynamic_cast<const VirtualKFontRequester*>(self));
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->setKFontRequester_SenderSignalIndex_Callback(reinterpret_cast<VirtualKFontRequester::KFontRequester_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KFontRequester_Receivers(const KFontRequester* self, const char* signal) {
    auto* vkfontrequester = const_cast<VirtualKFontRequester*>(dynamic_cast<const VirtualKFontRequester*>(self));
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        return vkfontrequester->receivers(signal);
    } else {
        return ((VirtualKFontRequester*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KFontRequester_QBaseReceivers(const KFontRequester* self, const char* signal) {
    auto* vkfontrequester = const_cast<VirtualKFontRequester*>(dynamic_cast<const VirtualKFontRequester*>(self));
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->setKFontRequester_Receivers_IsBase(true);
        return vkfontrequester->receivers(signal);
    } else {
        return ((VirtualKFontRequester*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontRequester_OnReceivers(const KFontRequester* self, intptr_t slot) {
    auto* vkfontrequester = const_cast<VirtualKFontRequester*>(dynamic_cast<const VirtualKFontRequester*>(self));
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->setKFontRequester_Receivers_Callback(reinterpret_cast<VirtualKFontRequester::KFontRequester_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KFontRequester_IsSignalConnected(const KFontRequester* self, const QMetaMethod* signal) {
    auto* vkfontrequester = const_cast<VirtualKFontRequester*>(dynamic_cast<const VirtualKFontRequester*>(self));
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        return vkfontrequester->isSignalConnected(*signal);
    } else {
        return ((VirtualKFontRequester*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KFontRequester_QBaseIsSignalConnected(const KFontRequester* self, const QMetaMethod* signal) {
    auto* vkfontrequester = const_cast<VirtualKFontRequester*>(dynamic_cast<const VirtualKFontRequester*>(self));
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->setKFontRequester_IsSignalConnected_IsBase(true);
        return vkfontrequester->isSignalConnected(*signal);
    } else {
        return ((VirtualKFontRequester*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontRequester_OnIsSignalConnected(const KFontRequester* self, intptr_t slot) {
    auto* vkfontrequester = const_cast<VirtualKFontRequester*>(dynamic_cast<const VirtualKFontRequester*>(self));
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->setKFontRequester_IsSignalConnected_Callback(reinterpret_cast<VirtualKFontRequester::KFontRequester_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double KFontRequester_GetDecodedMetricF(const KFontRequester* self, int metricA, int metricB) {
    auto* vkfontrequester = const_cast<VirtualKFontRequester*>(dynamic_cast<const VirtualKFontRequester*>(self));
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        return vkfontrequester->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKFontRequester*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double KFontRequester_QBaseGetDecodedMetricF(const KFontRequester* self, int metricA, int metricB) {
    auto* vkfontrequester = const_cast<VirtualKFontRequester*>(dynamic_cast<const VirtualKFontRequester*>(self));
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->setKFontRequester_GetDecodedMetricF_IsBase(true);
        return vkfontrequester->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKFontRequester*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void KFontRequester_OnGetDecodedMetricF(const KFontRequester* self, intptr_t slot) {
    auto* vkfontrequester = const_cast<VirtualKFontRequester*>(dynamic_cast<const VirtualKFontRequester*>(self));
    if (vkfontrequester && vkfontrequester->isVirtualKFontRequester) {
        vkfontrequester->setKFontRequester_GetDecodedMetricF_Callback(reinterpret_cast<VirtualKFontRequester::KFontRequester_GetDecodedMetricF_Callback>(slot));
    }
}

void KFontRequester_Delete(KFontRequester* self) {
    delete self;
}
