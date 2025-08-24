#include <KFontChooser>
#include <QActionEvent>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QColor>
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
#include <kfontchooser.h>
#include "libkfontchooser.h"
#include "libkfontchooser.hxx"

KFontChooser* KFontChooser_new(QWidget* parent) {
    return new VirtualKFontChooser(parent);
}

KFontChooser* KFontChooser_new2() {
    return new VirtualKFontChooser();
}

KFontChooser* KFontChooser_new3(int flags) {
    return new VirtualKFontChooser(static_cast<KFontChooser::DisplayFlags>(flags));
}

KFontChooser* KFontChooser_new4(int flags, QWidget* parent) {
    return new VirtualKFontChooser(static_cast<KFontChooser::DisplayFlags>(flags), parent);
}

QMetaObject* KFontChooser_MetaObject(const KFontChooser* self) {
    return (QMetaObject*)self->metaObject();
}

void* KFontChooser_Metacast(KFontChooser* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KFontChooser_Metacall(KFontChooser* self, int param1, int param2, void** param3) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKFontChooser*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void KFontChooser_OnMetacall(KFontChooser* self, intptr_t slot) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->setKFontChooser_Metacall_Callback(reinterpret_cast<VirtualKFontChooser::KFontChooser_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int KFontChooser_QBaseMetacall(KFontChooser* self, int param1, int param2, void** param3) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->setKFontChooser_Metacall_IsBase(true);
        return vkfontchooser->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKFontChooser*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KFontChooser_Tr(const char* s) {
    QString _ret = KFontChooser::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KFontChooser_EnableColumn(KFontChooser* self, int column, bool state) {
    self->enableColumn(static_cast<int>(column), state);
}

void KFontChooser_SetFont(KFontChooser* self, const QFont* font) {
    self->setFont(*font);
}

int KFontChooser_FontDiffFlags(const KFontChooser* self) {
    return static_cast<int>(self->fontDiffFlags());
}

QFont* KFontChooser_Font(const KFontChooser* self) {
    return new QFont(self->font());
}

void KFontChooser_SetColor(KFontChooser* self, const QColor* col) {
    self->setColor(*col);
}

QColor* KFontChooser_Color(const KFontChooser* self) {
    return new QColor(self->color());
}

void KFontChooser_SetBackgroundColor(KFontChooser* self, const QColor* col) {
    self->setBackgroundColor(*col);
}

QColor* KFontChooser_BackgroundColor(const KFontChooser* self) {
    return new QColor(self->backgroundColor());
}

libqt_string KFontChooser_SampleText(const KFontChooser* self) {
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

void KFontChooser_SetSampleText(KFontChooser* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->setSampleText(text_QString);
}

void KFontChooser_SetSampleBoxVisible(KFontChooser* self, bool visible) {
    self->setSampleBoxVisible(visible);
}

libqt_list /* of libqt_string */ KFontChooser_CreateFontList(unsigned int fontListCriteria) {
    QList<QString> _ret = KFontChooser::createFontList(static_cast<uint>(fontListCriteria));
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        QString _lv_ret = _ret[i];
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _lv_b = _lv_ret.toUtf8();
        libqt_string _lv_str;
        _lv_str.len = _lv_b.length();
        _lv_str.data = static_cast<const char*>(malloc(_lv_str.len + 1));
        memcpy((void*)_lv_str.data, _lv_b.data(), _lv_str.len);
        ((char*)_lv_str.data)[_lv_str.len] = '\0';
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void KFontChooser_SetFontListItems(KFontChooser* self, const libqt_list /* of libqt_string */ fontList) {
    QList<QString> fontList_QList;
    fontList_QList.reserve(fontList.len);
    libqt_string* fontList_arr = static_cast<libqt_string*>(fontList.data);
    for (size_t i = 0; i < fontList.len; ++i) {
        QString fontList_arr_i_QString = QString::fromUtf8(fontList_arr[i].data, fontList_arr[i].len);
        fontList_QList.push_back(fontList_arr_i_QString);
    }
    self->setFontListItems(fontList_QList);
}

void KFontChooser_SetMinVisibleItems(KFontChooser* self, int visibleItems) {
    self->setMinVisibleItems(static_cast<int>(visibleItems));
}

void KFontChooser_FontSelected(KFontChooser* self, const QFont* font) {
    self->fontSelected(*font);
}

void KFontChooser_Connect_FontSelected(KFontChooser* self, intptr_t slot) {
    void (*slotFunc)(KFontChooser*, QFont*) = reinterpret_cast<void (*)(KFontChooser*, QFont*)>(slot);
    KFontChooser::connect(self, &KFontChooser::fontSelected, [self, slotFunc](const QFont& font) {
        const QFont& font_ret = font;
        // Cast returned reference into pointer
        QFont* sigval1 = const_cast<QFont*>(&font_ret);
        slotFunc(self, sigval1);
    });
}

libqt_string KFontChooser_Tr2(const char* s, const char* c) {
    QString _ret = KFontChooser::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KFontChooser_Tr3(const char* s, const char* c, int n) {
    QString _ret = KFontChooser::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KFontChooser_SetFont2(KFontChooser* self, const QFont* font, bool onlyFixed) {
    self->setFont(*font, onlyFixed);
}

// Derived class handler implementation
QSize* KFontChooser_SizeHint(const KFontChooser* self) {
    auto* vkfontchooser = const_cast<VirtualKFontChooser*>(dynamic_cast<const VirtualKFontChooser*>(self));
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        return new QSize(vkfontchooser->sizeHint());
    } else {
        return new QSize(((VirtualKFontChooser*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* KFontChooser_QBaseSizeHint(const KFontChooser* self) {
    auto* vkfontchooser = const_cast<VirtualKFontChooser*>(dynamic_cast<const VirtualKFontChooser*>(self));
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->setKFontChooser_SizeHint_IsBase(true);
        return new QSize(vkfontchooser->sizeHint());
    } else {
        return new QSize(((VirtualKFontChooser*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KFontChooser_OnSizeHint(const KFontChooser* self, intptr_t slot) {
    auto* vkfontchooser = const_cast<VirtualKFontChooser*>(dynamic_cast<const VirtualKFontChooser*>(self));
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->setKFontChooser_SizeHint_Callback(reinterpret_cast<VirtualKFontChooser::KFontChooser_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
int KFontChooser_DevType(const KFontChooser* self) {
    auto* vkfontchooser = const_cast<VirtualKFontChooser*>(dynamic_cast<const VirtualKFontChooser*>(self));
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        return vkfontchooser->devType();
    } else {
        return self->KFontChooser::devType();
    }
}

// Base class handler implementation
int KFontChooser_QBaseDevType(const KFontChooser* self) {
    auto* vkfontchooser = const_cast<VirtualKFontChooser*>(dynamic_cast<const VirtualKFontChooser*>(self));
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->setKFontChooser_DevType_IsBase(true);
        return vkfontchooser->devType();
    } else {
        return self->KFontChooser::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void KFontChooser_OnDevType(const KFontChooser* self, intptr_t slot) {
    auto* vkfontchooser = const_cast<VirtualKFontChooser*>(dynamic_cast<const VirtualKFontChooser*>(self));
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->setKFontChooser_DevType_Callback(reinterpret_cast<VirtualKFontChooser::KFontChooser_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void KFontChooser_SetVisible(KFontChooser* self, bool visible) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->setVisible(visible);
    } else {
        self->KFontChooser::setVisible(visible);
    }
}

// Base class handler implementation
void KFontChooser_QBaseSetVisible(KFontChooser* self, bool visible) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->setKFontChooser_SetVisible_IsBase(true);
        vkfontchooser->setVisible(visible);
    } else {
        self->KFontChooser::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontChooser_OnSetVisible(KFontChooser* self, intptr_t slot) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->setKFontChooser_SetVisible_Callback(reinterpret_cast<VirtualKFontChooser::KFontChooser_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KFontChooser_MinimumSizeHint(const KFontChooser* self) {
    auto* vkfontchooser = const_cast<VirtualKFontChooser*>(dynamic_cast<const VirtualKFontChooser*>(self));
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        return new QSize(vkfontchooser->minimumSizeHint());
    } else {
        return new QSize(((VirtualKFontChooser*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* KFontChooser_QBaseMinimumSizeHint(const KFontChooser* self) {
    auto* vkfontchooser = const_cast<VirtualKFontChooser*>(dynamic_cast<const VirtualKFontChooser*>(self));
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->setKFontChooser_MinimumSizeHint_IsBase(true);
        return new QSize(vkfontchooser->minimumSizeHint());
    } else {
        return new QSize(((VirtualKFontChooser*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KFontChooser_OnMinimumSizeHint(const KFontChooser* self, intptr_t slot) {
    auto* vkfontchooser = const_cast<VirtualKFontChooser*>(dynamic_cast<const VirtualKFontChooser*>(self));
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->setKFontChooser_MinimumSizeHint_Callback(reinterpret_cast<VirtualKFontChooser::KFontChooser_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
int KFontChooser_HeightForWidth(const KFontChooser* self, int param1) {
    auto* vkfontchooser = const_cast<VirtualKFontChooser*>(dynamic_cast<const VirtualKFontChooser*>(self));
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        return vkfontchooser->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KFontChooser::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int KFontChooser_QBaseHeightForWidth(const KFontChooser* self, int param1) {
    auto* vkfontchooser = const_cast<VirtualKFontChooser*>(dynamic_cast<const VirtualKFontChooser*>(self));
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->setKFontChooser_HeightForWidth_IsBase(true);
        return vkfontchooser->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KFontChooser::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KFontChooser_OnHeightForWidth(const KFontChooser* self, intptr_t slot) {
    auto* vkfontchooser = const_cast<VirtualKFontChooser*>(dynamic_cast<const VirtualKFontChooser*>(self));
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->setKFontChooser_HeightForWidth_Callback(reinterpret_cast<VirtualKFontChooser::KFontChooser_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool KFontChooser_HasHeightForWidth(const KFontChooser* self) {
    auto* vkfontchooser = const_cast<VirtualKFontChooser*>(dynamic_cast<const VirtualKFontChooser*>(self));
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        return vkfontchooser->hasHeightForWidth();
    } else {
        return self->KFontChooser::hasHeightForWidth();
    }
}

// Base class handler implementation
bool KFontChooser_QBaseHasHeightForWidth(const KFontChooser* self) {
    auto* vkfontchooser = const_cast<VirtualKFontChooser*>(dynamic_cast<const VirtualKFontChooser*>(self));
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->setKFontChooser_HasHeightForWidth_IsBase(true);
        return vkfontchooser->hasHeightForWidth();
    } else {
        return self->KFontChooser::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void KFontChooser_OnHasHeightForWidth(const KFontChooser* self, intptr_t slot) {
    auto* vkfontchooser = const_cast<VirtualKFontChooser*>(dynamic_cast<const VirtualKFontChooser*>(self));
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->setKFontChooser_HasHeightForWidth_Callback(reinterpret_cast<VirtualKFontChooser::KFontChooser_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* KFontChooser_PaintEngine(const KFontChooser* self) {
    auto* vkfontchooser = const_cast<VirtualKFontChooser*>(dynamic_cast<const VirtualKFontChooser*>(self));
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        return vkfontchooser->paintEngine();
    } else {
        return self->KFontChooser::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* KFontChooser_QBasePaintEngine(const KFontChooser* self) {
    auto* vkfontchooser = const_cast<VirtualKFontChooser*>(dynamic_cast<const VirtualKFontChooser*>(self));
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->setKFontChooser_PaintEngine_IsBase(true);
        return vkfontchooser->paintEngine();
    } else {
        return self->KFontChooser::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void KFontChooser_OnPaintEngine(const KFontChooser* self, intptr_t slot) {
    auto* vkfontchooser = const_cast<VirtualKFontChooser*>(dynamic_cast<const VirtualKFontChooser*>(self));
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->setKFontChooser_PaintEngine_Callback(reinterpret_cast<VirtualKFontChooser::KFontChooser_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
bool KFontChooser_Event(KFontChooser* self, QEvent* event) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        return vkfontchooser->event(event);
    } else {
        return ((VirtualKFontChooser*)self)->event(event);
    }
}

// Base class handler implementation
bool KFontChooser_QBaseEvent(KFontChooser* self, QEvent* event) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->setKFontChooser_Event_IsBase(true);
        return vkfontchooser->event(event);
    } else {
        return ((VirtualKFontChooser*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontChooser_OnEvent(KFontChooser* self, intptr_t slot) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->setKFontChooser_Event_Callback(reinterpret_cast<VirtualKFontChooser::KFontChooser_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void KFontChooser_MousePressEvent(KFontChooser* self, QMouseEvent* event) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->mousePressEvent(event);
    } else {
        ((VirtualKFontChooser*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void KFontChooser_QBaseMousePressEvent(KFontChooser* self, QMouseEvent* event) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->setKFontChooser_MousePressEvent_IsBase(true);
        vkfontchooser->mousePressEvent(event);
    } else {
        ((VirtualKFontChooser*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontChooser_OnMousePressEvent(KFontChooser* self, intptr_t slot) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->setKFontChooser_MousePressEvent_Callback(reinterpret_cast<VirtualKFontChooser::KFontChooser_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFontChooser_MouseReleaseEvent(KFontChooser* self, QMouseEvent* event) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->mouseReleaseEvent(event);
    } else {
        ((VirtualKFontChooser*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void KFontChooser_QBaseMouseReleaseEvent(KFontChooser* self, QMouseEvent* event) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->setKFontChooser_MouseReleaseEvent_IsBase(true);
        vkfontchooser->mouseReleaseEvent(event);
    } else {
        ((VirtualKFontChooser*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontChooser_OnMouseReleaseEvent(KFontChooser* self, intptr_t slot) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->setKFontChooser_MouseReleaseEvent_Callback(reinterpret_cast<VirtualKFontChooser::KFontChooser_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFontChooser_MouseDoubleClickEvent(KFontChooser* self, QMouseEvent* event) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKFontChooser*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void KFontChooser_QBaseMouseDoubleClickEvent(KFontChooser* self, QMouseEvent* event) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->setKFontChooser_MouseDoubleClickEvent_IsBase(true);
        vkfontchooser->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKFontChooser*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontChooser_OnMouseDoubleClickEvent(KFontChooser* self, intptr_t slot) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->setKFontChooser_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualKFontChooser::KFontChooser_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFontChooser_MouseMoveEvent(KFontChooser* self, QMouseEvent* event) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->mouseMoveEvent(event);
    } else {
        ((VirtualKFontChooser*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void KFontChooser_QBaseMouseMoveEvent(KFontChooser* self, QMouseEvent* event) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->setKFontChooser_MouseMoveEvent_IsBase(true);
        vkfontchooser->mouseMoveEvent(event);
    } else {
        ((VirtualKFontChooser*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontChooser_OnMouseMoveEvent(KFontChooser* self, intptr_t slot) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->setKFontChooser_MouseMoveEvent_Callback(reinterpret_cast<VirtualKFontChooser::KFontChooser_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFontChooser_WheelEvent(KFontChooser* self, QWheelEvent* event) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->wheelEvent(event);
    } else {
        ((VirtualKFontChooser*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void KFontChooser_QBaseWheelEvent(KFontChooser* self, QWheelEvent* event) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->setKFontChooser_WheelEvent_IsBase(true);
        vkfontchooser->wheelEvent(event);
    } else {
        ((VirtualKFontChooser*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontChooser_OnWheelEvent(KFontChooser* self, intptr_t slot) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->setKFontChooser_WheelEvent_Callback(reinterpret_cast<VirtualKFontChooser::KFontChooser_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFontChooser_KeyPressEvent(KFontChooser* self, QKeyEvent* event) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->keyPressEvent(event);
    } else {
        ((VirtualKFontChooser*)self)->keyPressEvent(event);
    }
}

// Base class handler implementation
void KFontChooser_QBaseKeyPressEvent(KFontChooser* self, QKeyEvent* event) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->setKFontChooser_KeyPressEvent_IsBase(true);
        vkfontchooser->keyPressEvent(event);
    } else {
        ((VirtualKFontChooser*)self)->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontChooser_OnKeyPressEvent(KFontChooser* self, intptr_t slot) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->setKFontChooser_KeyPressEvent_Callback(reinterpret_cast<VirtualKFontChooser::KFontChooser_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFontChooser_KeyReleaseEvent(KFontChooser* self, QKeyEvent* event) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->keyReleaseEvent(event);
    } else {
        ((VirtualKFontChooser*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void KFontChooser_QBaseKeyReleaseEvent(KFontChooser* self, QKeyEvent* event) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->setKFontChooser_KeyReleaseEvent_IsBase(true);
        vkfontchooser->keyReleaseEvent(event);
    } else {
        ((VirtualKFontChooser*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontChooser_OnKeyReleaseEvent(KFontChooser* self, intptr_t slot) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->setKFontChooser_KeyReleaseEvent_Callback(reinterpret_cast<VirtualKFontChooser::KFontChooser_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFontChooser_FocusInEvent(KFontChooser* self, QFocusEvent* event) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->focusInEvent(event);
    } else {
        ((VirtualKFontChooser*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void KFontChooser_QBaseFocusInEvent(KFontChooser* self, QFocusEvent* event) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->setKFontChooser_FocusInEvent_IsBase(true);
        vkfontchooser->focusInEvent(event);
    } else {
        ((VirtualKFontChooser*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontChooser_OnFocusInEvent(KFontChooser* self, intptr_t slot) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->setKFontChooser_FocusInEvent_Callback(reinterpret_cast<VirtualKFontChooser::KFontChooser_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFontChooser_FocusOutEvent(KFontChooser* self, QFocusEvent* event) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->focusOutEvent(event);
    } else {
        ((VirtualKFontChooser*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void KFontChooser_QBaseFocusOutEvent(KFontChooser* self, QFocusEvent* event) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->setKFontChooser_FocusOutEvent_IsBase(true);
        vkfontchooser->focusOutEvent(event);
    } else {
        ((VirtualKFontChooser*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontChooser_OnFocusOutEvent(KFontChooser* self, intptr_t slot) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->setKFontChooser_FocusOutEvent_Callback(reinterpret_cast<VirtualKFontChooser::KFontChooser_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFontChooser_EnterEvent(KFontChooser* self, QEnterEvent* event) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->enterEvent(event);
    } else {
        ((VirtualKFontChooser*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void KFontChooser_QBaseEnterEvent(KFontChooser* self, QEnterEvent* event) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->setKFontChooser_EnterEvent_IsBase(true);
        vkfontchooser->enterEvent(event);
    } else {
        ((VirtualKFontChooser*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontChooser_OnEnterEvent(KFontChooser* self, intptr_t slot) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->setKFontChooser_EnterEvent_Callback(reinterpret_cast<VirtualKFontChooser::KFontChooser_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFontChooser_LeaveEvent(KFontChooser* self, QEvent* event) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->leaveEvent(event);
    } else {
        ((VirtualKFontChooser*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void KFontChooser_QBaseLeaveEvent(KFontChooser* self, QEvent* event) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->setKFontChooser_LeaveEvent_IsBase(true);
        vkfontchooser->leaveEvent(event);
    } else {
        ((VirtualKFontChooser*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontChooser_OnLeaveEvent(KFontChooser* self, intptr_t slot) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->setKFontChooser_LeaveEvent_Callback(reinterpret_cast<VirtualKFontChooser::KFontChooser_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFontChooser_PaintEvent(KFontChooser* self, QPaintEvent* event) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->paintEvent(event);
    } else {
        ((VirtualKFontChooser*)self)->paintEvent(event);
    }
}

// Base class handler implementation
void KFontChooser_QBasePaintEvent(KFontChooser* self, QPaintEvent* event) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->setKFontChooser_PaintEvent_IsBase(true);
        vkfontchooser->paintEvent(event);
    } else {
        ((VirtualKFontChooser*)self)->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontChooser_OnPaintEvent(KFontChooser* self, intptr_t slot) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->setKFontChooser_PaintEvent_Callback(reinterpret_cast<VirtualKFontChooser::KFontChooser_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFontChooser_MoveEvent(KFontChooser* self, QMoveEvent* event) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->moveEvent(event);
    } else {
        ((VirtualKFontChooser*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void KFontChooser_QBaseMoveEvent(KFontChooser* self, QMoveEvent* event) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->setKFontChooser_MoveEvent_IsBase(true);
        vkfontchooser->moveEvent(event);
    } else {
        ((VirtualKFontChooser*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontChooser_OnMoveEvent(KFontChooser* self, intptr_t slot) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->setKFontChooser_MoveEvent_Callback(reinterpret_cast<VirtualKFontChooser::KFontChooser_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFontChooser_ResizeEvent(KFontChooser* self, QResizeEvent* event) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->resizeEvent(event);
    } else {
        ((VirtualKFontChooser*)self)->resizeEvent(event);
    }
}

// Base class handler implementation
void KFontChooser_QBaseResizeEvent(KFontChooser* self, QResizeEvent* event) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->setKFontChooser_ResizeEvent_IsBase(true);
        vkfontchooser->resizeEvent(event);
    } else {
        ((VirtualKFontChooser*)self)->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontChooser_OnResizeEvent(KFontChooser* self, intptr_t slot) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->setKFontChooser_ResizeEvent_Callback(reinterpret_cast<VirtualKFontChooser::KFontChooser_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFontChooser_CloseEvent(KFontChooser* self, QCloseEvent* event) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->closeEvent(event);
    } else {
        ((VirtualKFontChooser*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void KFontChooser_QBaseCloseEvent(KFontChooser* self, QCloseEvent* event) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->setKFontChooser_CloseEvent_IsBase(true);
        vkfontchooser->closeEvent(event);
    } else {
        ((VirtualKFontChooser*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontChooser_OnCloseEvent(KFontChooser* self, intptr_t slot) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->setKFontChooser_CloseEvent_Callback(reinterpret_cast<VirtualKFontChooser::KFontChooser_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFontChooser_ContextMenuEvent(KFontChooser* self, QContextMenuEvent* event) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->contextMenuEvent(event);
    } else {
        ((VirtualKFontChooser*)self)->contextMenuEvent(event);
    }
}

// Base class handler implementation
void KFontChooser_QBaseContextMenuEvent(KFontChooser* self, QContextMenuEvent* event) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->setKFontChooser_ContextMenuEvent_IsBase(true);
        vkfontchooser->contextMenuEvent(event);
    } else {
        ((VirtualKFontChooser*)self)->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontChooser_OnContextMenuEvent(KFontChooser* self, intptr_t slot) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->setKFontChooser_ContextMenuEvent_Callback(reinterpret_cast<VirtualKFontChooser::KFontChooser_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFontChooser_TabletEvent(KFontChooser* self, QTabletEvent* event) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->tabletEvent(event);
    } else {
        ((VirtualKFontChooser*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void KFontChooser_QBaseTabletEvent(KFontChooser* self, QTabletEvent* event) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->setKFontChooser_TabletEvent_IsBase(true);
        vkfontchooser->tabletEvent(event);
    } else {
        ((VirtualKFontChooser*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontChooser_OnTabletEvent(KFontChooser* self, intptr_t slot) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->setKFontChooser_TabletEvent_Callback(reinterpret_cast<VirtualKFontChooser::KFontChooser_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFontChooser_ActionEvent(KFontChooser* self, QActionEvent* event) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->actionEvent(event);
    } else {
        ((VirtualKFontChooser*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void KFontChooser_QBaseActionEvent(KFontChooser* self, QActionEvent* event) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->setKFontChooser_ActionEvent_IsBase(true);
        vkfontchooser->actionEvent(event);
    } else {
        ((VirtualKFontChooser*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontChooser_OnActionEvent(KFontChooser* self, intptr_t slot) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->setKFontChooser_ActionEvent_Callback(reinterpret_cast<VirtualKFontChooser::KFontChooser_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFontChooser_DragEnterEvent(KFontChooser* self, QDragEnterEvent* event) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->dragEnterEvent(event);
    } else {
        ((VirtualKFontChooser*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void KFontChooser_QBaseDragEnterEvent(KFontChooser* self, QDragEnterEvent* event) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->setKFontChooser_DragEnterEvent_IsBase(true);
        vkfontchooser->dragEnterEvent(event);
    } else {
        ((VirtualKFontChooser*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontChooser_OnDragEnterEvent(KFontChooser* self, intptr_t slot) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->setKFontChooser_DragEnterEvent_Callback(reinterpret_cast<VirtualKFontChooser::KFontChooser_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFontChooser_DragMoveEvent(KFontChooser* self, QDragMoveEvent* event) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->dragMoveEvent(event);
    } else {
        ((VirtualKFontChooser*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void KFontChooser_QBaseDragMoveEvent(KFontChooser* self, QDragMoveEvent* event) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->setKFontChooser_DragMoveEvent_IsBase(true);
        vkfontchooser->dragMoveEvent(event);
    } else {
        ((VirtualKFontChooser*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontChooser_OnDragMoveEvent(KFontChooser* self, intptr_t slot) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->setKFontChooser_DragMoveEvent_Callback(reinterpret_cast<VirtualKFontChooser::KFontChooser_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFontChooser_DragLeaveEvent(KFontChooser* self, QDragLeaveEvent* event) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->dragLeaveEvent(event);
    } else {
        ((VirtualKFontChooser*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void KFontChooser_QBaseDragLeaveEvent(KFontChooser* self, QDragLeaveEvent* event) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->setKFontChooser_DragLeaveEvent_IsBase(true);
        vkfontchooser->dragLeaveEvent(event);
    } else {
        ((VirtualKFontChooser*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontChooser_OnDragLeaveEvent(KFontChooser* self, intptr_t slot) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->setKFontChooser_DragLeaveEvent_Callback(reinterpret_cast<VirtualKFontChooser::KFontChooser_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFontChooser_DropEvent(KFontChooser* self, QDropEvent* event) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->dropEvent(event);
    } else {
        ((VirtualKFontChooser*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void KFontChooser_QBaseDropEvent(KFontChooser* self, QDropEvent* event) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->setKFontChooser_DropEvent_IsBase(true);
        vkfontchooser->dropEvent(event);
    } else {
        ((VirtualKFontChooser*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontChooser_OnDropEvent(KFontChooser* self, intptr_t slot) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->setKFontChooser_DropEvent_Callback(reinterpret_cast<VirtualKFontChooser::KFontChooser_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFontChooser_ShowEvent(KFontChooser* self, QShowEvent* event) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->showEvent(event);
    } else {
        ((VirtualKFontChooser*)self)->showEvent(event);
    }
}

// Base class handler implementation
void KFontChooser_QBaseShowEvent(KFontChooser* self, QShowEvent* event) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->setKFontChooser_ShowEvent_IsBase(true);
        vkfontchooser->showEvent(event);
    } else {
        ((VirtualKFontChooser*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontChooser_OnShowEvent(KFontChooser* self, intptr_t slot) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->setKFontChooser_ShowEvent_Callback(reinterpret_cast<VirtualKFontChooser::KFontChooser_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFontChooser_HideEvent(KFontChooser* self, QHideEvent* event) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->hideEvent(event);
    } else {
        ((VirtualKFontChooser*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void KFontChooser_QBaseHideEvent(KFontChooser* self, QHideEvent* event) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->setKFontChooser_HideEvent_IsBase(true);
        vkfontchooser->hideEvent(event);
    } else {
        ((VirtualKFontChooser*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontChooser_OnHideEvent(KFontChooser* self, intptr_t slot) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->setKFontChooser_HideEvent_Callback(reinterpret_cast<VirtualKFontChooser::KFontChooser_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KFontChooser_NativeEvent(KFontChooser* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        return vkfontchooser->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKFontChooser*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool KFontChooser_QBaseNativeEvent(KFontChooser* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->setKFontChooser_NativeEvent_IsBase(true);
        return vkfontchooser->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKFontChooser*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void KFontChooser_OnNativeEvent(KFontChooser* self, intptr_t slot) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->setKFontChooser_NativeEvent_Callback(reinterpret_cast<VirtualKFontChooser::KFontChooser_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFontChooser_ChangeEvent(KFontChooser* self, QEvent* param1) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->changeEvent(param1);
    } else {
        ((VirtualKFontChooser*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void KFontChooser_QBaseChangeEvent(KFontChooser* self, QEvent* param1) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->setKFontChooser_ChangeEvent_IsBase(true);
        vkfontchooser->changeEvent(param1);
    } else {
        ((VirtualKFontChooser*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontChooser_OnChangeEvent(KFontChooser* self, intptr_t slot) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->setKFontChooser_ChangeEvent_Callback(reinterpret_cast<VirtualKFontChooser::KFontChooser_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int KFontChooser_Metric(const KFontChooser* self, int param1) {
    auto* vkfontchooser = const_cast<VirtualKFontChooser*>(dynamic_cast<const VirtualKFontChooser*>(self));
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        return vkfontchooser->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKFontChooser*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int KFontChooser_QBaseMetric(const KFontChooser* self, int param1) {
    auto* vkfontchooser = const_cast<VirtualKFontChooser*>(dynamic_cast<const VirtualKFontChooser*>(self));
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->setKFontChooser_Metric_IsBase(true);
        return vkfontchooser->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKFontChooser*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KFontChooser_OnMetric(const KFontChooser* self, intptr_t slot) {
    auto* vkfontchooser = const_cast<VirtualKFontChooser*>(dynamic_cast<const VirtualKFontChooser*>(self));
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->setKFontChooser_Metric_Callback(reinterpret_cast<VirtualKFontChooser::KFontChooser_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void KFontChooser_InitPainter(const KFontChooser* self, QPainter* painter) {
    auto* vkfontchooser = const_cast<VirtualKFontChooser*>(dynamic_cast<const VirtualKFontChooser*>(self));
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->initPainter(painter);
    } else {
        ((VirtualKFontChooser*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void KFontChooser_QBaseInitPainter(const KFontChooser* self, QPainter* painter) {
    auto* vkfontchooser = const_cast<VirtualKFontChooser*>(dynamic_cast<const VirtualKFontChooser*>(self));
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->setKFontChooser_InitPainter_IsBase(true);
        vkfontchooser->initPainter(painter);
    } else {
        ((VirtualKFontChooser*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontChooser_OnInitPainter(const KFontChooser* self, intptr_t slot) {
    auto* vkfontchooser = const_cast<VirtualKFontChooser*>(dynamic_cast<const VirtualKFontChooser*>(self));
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->setKFontChooser_InitPainter_Callback(reinterpret_cast<VirtualKFontChooser::KFontChooser_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* KFontChooser_Redirected(const KFontChooser* self, QPoint* offset) {
    auto* vkfontchooser = const_cast<VirtualKFontChooser*>(dynamic_cast<const VirtualKFontChooser*>(self));
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        return vkfontchooser->redirected(offset);
    } else {
        return ((VirtualKFontChooser*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* KFontChooser_QBaseRedirected(const KFontChooser* self, QPoint* offset) {
    auto* vkfontchooser = const_cast<VirtualKFontChooser*>(dynamic_cast<const VirtualKFontChooser*>(self));
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->setKFontChooser_Redirected_IsBase(true);
        return vkfontchooser->redirected(offset);
    } else {
        return ((VirtualKFontChooser*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontChooser_OnRedirected(const KFontChooser* self, intptr_t slot) {
    auto* vkfontchooser = const_cast<VirtualKFontChooser*>(dynamic_cast<const VirtualKFontChooser*>(self));
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->setKFontChooser_Redirected_Callback(reinterpret_cast<VirtualKFontChooser::KFontChooser_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* KFontChooser_SharedPainter(const KFontChooser* self) {
    auto* vkfontchooser = const_cast<VirtualKFontChooser*>(dynamic_cast<const VirtualKFontChooser*>(self));
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        return vkfontchooser->sharedPainter();
    } else {
        return ((VirtualKFontChooser*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* KFontChooser_QBaseSharedPainter(const KFontChooser* self) {
    auto* vkfontchooser = const_cast<VirtualKFontChooser*>(dynamic_cast<const VirtualKFontChooser*>(self));
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->setKFontChooser_SharedPainter_IsBase(true);
        return vkfontchooser->sharedPainter();
    } else {
        return ((VirtualKFontChooser*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void KFontChooser_OnSharedPainter(const KFontChooser* self, intptr_t slot) {
    auto* vkfontchooser = const_cast<VirtualKFontChooser*>(dynamic_cast<const VirtualKFontChooser*>(self));
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->setKFontChooser_SharedPainter_Callback(reinterpret_cast<VirtualKFontChooser::KFontChooser_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void KFontChooser_InputMethodEvent(KFontChooser* self, QInputMethodEvent* param1) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->inputMethodEvent(param1);
    } else {
        ((VirtualKFontChooser*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void KFontChooser_QBaseInputMethodEvent(KFontChooser* self, QInputMethodEvent* param1) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->setKFontChooser_InputMethodEvent_IsBase(true);
        vkfontchooser->inputMethodEvent(param1);
    } else {
        ((VirtualKFontChooser*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontChooser_OnInputMethodEvent(KFontChooser* self, intptr_t slot) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->setKFontChooser_InputMethodEvent_Callback(reinterpret_cast<VirtualKFontChooser::KFontChooser_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* KFontChooser_InputMethodQuery(const KFontChooser* self, int param1) {
    auto* vkfontchooser = const_cast<VirtualKFontChooser*>(dynamic_cast<const VirtualKFontChooser*>(self));
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        return new QVariant(vkfontchooser->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKFontChooser*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* KFontChooser_QBaseInputMethodQuery(const KFontChooser* self, int param1) {
    auto* vkfontchooser = const_cast<VirtualKFontChooser*>(dynamic_cast<const VirtualKFontChooser*>(self));
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->setKFontChooser_InputMethodQuery_IsBase(true);
        return new QVariant(vkfontchooser->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKFontChooser*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void KFontChooser_OnInputMethodQuery(const KFontChooser* self, intptr_t slot) {
    auto* vkfontchooser = const_cast<VirtualKFontChooser*>(dynamic_cast<const VirtualKFontChooser*>(self));
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->setKFontChooser_InputMethodQuery_Callback(reinterpret_cast<VirtualKFontChooser::KFontChooser_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool KFontChooser_FocusNextPrevChild(KFontChooser* self, bool next) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        return vkfontchooser->focusNextPrevChild(next);
    } else {
        return ((VirtualKFontChooser*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool KFontChooser_QBaseFocusNextPrevChild(KFontChooser* self, bool next) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->setKFontChooser_FocusNextPrevChild_IsBase(true);
        return vkfontchooser->focusNextPrevChild(next);
    } else {
        return ((VirtualKFontChooser*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontChooser_OnFocusNextPrevChild(KFontChooser* self, intptr_t slot) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->setKFontChooser_FocusNextPrevChild_Callback(reinterpret_cast<VirtualKFontChooser::KFontChooser_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KFontChooser_EventFilter(KFontChooser* self, QObject* watched, QEvent* event) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        return vkfontchooser->eventFilter(watched, event);
    } else {
        return self->KFontChooser::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KFontChooser_QBaseEventFilter(KFontChooser* self, QObject* watched, QEvent* event) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->setKFontChooser_EventFilter_IsBase(true);
        return vkfontchooser->eventFilter(watched, event);
    } else {
        return self->KFontChooser::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontChooser_OnEventFilter(KFontChooser* self, intptr_t slot) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->setKFontChooser_EventFilter_Callback(reinterpret_cast<VirtualKFontChooser::KFontChooser_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KFontChooser_TimerEvent(KFontChooser* self, QTimerEvent* event) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->timerEvent(event);
    } else {
        ((VirtualKFontChooser*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KFontChooser_QBaseTimerEvent(KFontChooser* self, QTimerEvent* event) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->setKFontChooser_TimerEvent_IsBase(true);
        vkfontchooser->timerEvent(event);
    } else {
        ((VirtualKFontChooser*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontChooser_OnTimerEvent(KFontChooser* self, intptr_t slot) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->setKFontChooser_TimerEvent_Callback(reinterpret_cast<VirtualKFontChooser::KFontChooser_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFontChooser_ChildEvent(KFontChooser* self, QChildEvent* event) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->childEvent(event);
    } else {
        ((VirtualKFontChooser*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KFontChooser_QBaseChildEvent(KFontChooser* self, QChildEvent* event) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->setKFontChooser_ChildEvent_IsBase(true);
        vkfontchooser->childEvent(event);
    } else {
        ((VirtualKFontChooser*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontChooser_OnChildEvent(KFontChooser* self, intptr_t slot) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->setKFontChooser_ChildEvent_Callback(reinterpret_cast<VirtualKFontChooser::KFontChooser_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFontChooser_CustomEvent(KFontChooser* self, QEvent* event) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->customEvent(event);
    } else {
        ((VirtualKFontChooser*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KFontChooser_QBaseCustomEvent(KFontChooser* self, QEvent* event) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->setKFontChooser_CustomEvent_IsBase(true);
        vkfontchooser->customEvent(event);
    } else {
        ((VirtualKFontChooser*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontChooser_OnCustomEvent(KFontChooser* self, intptr_t slot) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->setKFontChooser_CustomEvent_Callback(reinterpret_cast<VirtualKFontChooser::KFontChooser_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFontChooser_ConnectNotify(KFontChooser* self, const QMetaMethod* signal) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->connectNotify(*signal);
    } else {
        ((VirtualKFontChooser*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KFontChooser_QBaseConnectNotify(KFontChooser* self, const QMetaMethod* signal) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->setKFontChooser_ConnectNotify_IsBase(true);
        vkfontchooser->connectNotify(*signal);
    } else {
        ((VirtualKFontChooser*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontChooser_OnConnectNotify(KFontChooser* self, intptr_t slot) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->setKFontChooser_ConnectNotify_Callback(reinterpret_cast<VirtualKFontChooser::KFontChooser_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KFontChooser_DisconnectNotify(KFontChooser* self, const QMetaMethod* signal) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->disconnectNotify(*signal);
    } else {
        ((VirtualKFontChooser*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KFontChooser_QBaseDisconnectNotify(KFontChooser* self, const QMetaMethod* signal) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->setKFontChooser_DisconnectNotify_IsBase(true);
        vkfontchooser->disconnectNotify(*signal);
    } else {
        ((VirtualKFontChooser*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontChooser_OnDisconnectNotify(KFontChooser* self, intptr_t slot) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->setKFontChooser_DisconnectNotify_Callback(reinterpret_cast<VirtualKFontChooser::KFontChooser_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KFontChooser_UpdateMicroFocus(KFontChooser* self) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->updateMicroFocus();
    } else {
        ((VirtualKFontChooser*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void KFontChooser_QBaseUpdateMicroFocus(KFontChooser* self) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->setKFontChooser_UpdateMicroFocus_IsBase(true);
        vkfontchooser->updateMicroFocus();
    } else {
        ((VirtualKFontChooser*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void KFontChooser_OnUpdateMicroFocus(KFontChooser* self, intptr_t slot) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->setKFontChooser_UpdateMicroFocus_Callback(reinterpret_cast<VirtualKFontChooser::KFontChooser_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void KFontChooser_Create(KFontChooser* self) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->create();
    } else {
        ((VirtualKFontChooser*)self)->create();
    }
}

// Base class handler implementation
void KFontChooser_QBaseCreate(KFontChooser* self) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->setKFontChooser_Create_IsBase(true);
        vkfontchooser->create();
    } else {
        ((VirtualKFontChooser*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void KFontChooser_OnCreate(KFontChooser* self, intptr_t slot) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->setKFontChooser_Create_Callback(reinterpret_cast<VirtualKFontChooser::KFontChooser_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void KFontChooser_Destroy(KFontChooser* self) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->destroy();
    } else {
        ((VirtualKFontChooser*)self)->destroy();
    }
}

// Base class handler implementation
void KFontChooser_QBaseDestroy(KFontChooser* self) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->setKFontChooser_Destroy_IsBase(true);
        vkfontchooser->destroy();
    } else {
        ((VirtualKFontChooser*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void KFontChooser_OnDestroy(KFontChooser* self, intptr_t slot) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->setKFontChooser_Destroy_Callback(reinterpret_cast<VirtualKFontChooser::KFontChooser_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool KFontChooser_FocusNextChild(KFontChooser* self) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        return vkfontchooser->focusNextChild();
    } else {
        return ((VirtualKFontChooser*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool KFontChooser_QBaseFocusNextChild(KFontChooser* self) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->setKFontChooser_FocusNextChild_IsBase(true);
        return vkfontchooser->focusNextChild();
    } else {
        return ((VirtualKFontChooser*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KFontChooser_OnFocusNextChild(KFontChooser* self, intptr_t slot) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->setKFontChooser_FocusNextChild_Callback(reinterpret_cast<VirtualKFontChooser::KFontChooser_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KFontChooser_FocusPreviousChild(KFontChooser* self) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        return vkfontchooser->focusPreviousChild();
    } else {
        return ((VirtualKFontChooser*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool KFontChooser_QBaseFocusPreviousChild(KFontChooser* self) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->setKFontChooser_FocusPreviousChild_IsBase(true);
        return vkfontchooser->focusPreviousChild();
    } else {
        return ((VirtualKFontChooser*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KFontChooser_OnFocusPreviousChild(KFontChooser* self, intptr_t slot) {
    auto* vkfontchooser = dynamic_cast<VirtualKFontChooser*>(self);
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->setKFontChooser_FocusPreviousChild_Callback(reinterpret_cast<VirtualKFontChooser::KFontChooser_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KFontChooser_Sender(const KFontChooser* self) {
    auto* vkfontchooser = const_cast<VirtualKFontChooser*>(dynamic_cast<const VirtualKFontChooser*>(self));
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        return vkfontchooser->sender();
    } else {
        return ((VirtualKFontChooser*)self)->sender();
    }
}

// Base class handler implementation
QObject* KFontChooser_QBaseSender(const KFontChooser* self) {
    auto* vkfontchooser = const_cast<VirtualKFontChooser*>(dynamic_cast<const VirtualKFontChooser*>(self));
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->setKFontChooser_Sender_IsBase(true);
        return vkfontchooser->sender();
    } else {
        return ((VirtualKFontChooser*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KFontChooser_OnSender(const KFontChooser* self, intptr_t slot) {
    auto* vkfontchooser = const_cast<VirtualKFontChooser*>(dynamic_cast<const VirtualKFontChooser*>(self));
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->setKFontChooser_Sender_Callback(reinterpret_cast<VirtualKFontChooser::KFontChooser_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KFontChooser_SenderSignalIndex(const KFontChooser* self) {
    auto* vkfontchooser = const_cast<VirtualKFontChooser*>(dynamic_cast<const VirtualKFontChooser*>(self));
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        return vkfontchooser->senderSignalIndex();
    } else {
        return ((VirtualKFontChooser*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KFontChooser_QBaseSenderSignalIndex(const KFontChooser* self) {
    auto* vkfontchooser = const_cast<VirtualKFontChooser*>(dynamic_cast<const VirtualKFontChooser*>(self));
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->setKFontChooser_SenderSignalIndex_IsBase(true);
        return vkfontchooser->senderSignalIndex();
    } else {
        return ((VirtualKFontChooser*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KFontChooser_OnSenderSignalIndex(const KFontChooser* self, intptr_t slot) {
    auto* vkfontchooser = const_cast<VirtualKFontChooser*>(dynamic_cast<const VirtualKFontChooser*>(self));
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->setKFontChooser_SenderSignalIndex_Callback(reinterpret_cast<VirtualKFontChooser::KFontChooser_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KFontChooser_Receivers(const KFontChooser* self, const char* signal) {
    auto* vkfontchooser = const_cast<VirtualKFontChooser*>(dynamic_cast<const VirtualKFontChooser*>(self));
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        return vkfontchooser->receivers(signal);
    } else {
        return ((VirtualKFontChooser*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KFontChooser_QBaseReceivers(const KFontChooser* self, const char* signal) {
    auto* vkfontchooser = const_cast<VirtualKFontChooser*>(dynamic_cast<const VirtualKFontChooser*>(self));
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->setKFontChooser_Receivers_IsBase(true);
        return vkfontchooser->receivers(signal);
    } else {
        return ((VirtualKFontChooser*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontChooser_OnReceivers(const KFontChooser* self, intptr_t slot) {
    auto* vkfontchooser = const_cast<VirtualKFontChooser*>(dynamic_cast<const VirtualKFontChooser*>(self));
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->setKFontChooser_Receivers_Callback(reinterpret_cast<VirtualKFontChooser::KFontChooser_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KFontChooser_IsSignalConnected(const KFontChooser* self, const QMetaMethod* signal) {
    auto* vkfontchooser = const_cast<VirtualKFontChooser*>(dynamic_cast<const VirtualKFontChooser*>(self));
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        return vkfontchooser->isSignalConnected(*signal);
    } else {
        return ((VirtualKFontChooser*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KFontChooser_QBaseIsSignalConnected(const KFontChooser* self, const QMetaMethod* signal) {
    auto* vkfontchooser = const_cast<VirtualKFontChooser*>(dynamic_cast<const VirtualKFontChooser*>(self));
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->setKFontChooser_IsSignalConnected_IsBase(true);
        return vkfontchooser->isSignalConnected(*signal);
    } else {
        return ((VirtualKFontChooser*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontChooser_OnIsSignalConnected(const KFontChooser* self, intptr_t slot) {
    auto* vkfontchooser = const_cast<VirtualKFontChooser*>(dynamic_cast<const VirtualKFontChooser*>(self));
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->setKFontChooser_IsSignalConnected_Callback(reinterpret_cast<VirtualKFontChooser::KFontChooser_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double KFontChooser_GetDecodedMetricF(const KFontChooser* self, int metricA, int metricB) {
    auto* vkfontchooser = const_cast<VirtualKFontChooser*>(dynamic_cast<const VirtualKFontChooser*>(self));
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        return vkfontchooser->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKFontChooser*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double KFontChooser_QBaseGetDecodedMetricF(const KFontChooser* self, int metricA, int metricB) {
    auto* vkfontchooser = const_cast<VirtualKFontChooser*>(dynamic_cast<const VirtualKFontChooser*>(self));
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->setKFontChooser_GetDecodedMetricF_IsBase(true);
        return vkfontchooser->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKFontChooser*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void KFontChooser_OnGetDecodedMetricF(const KFontChooser* self, intptr_t slot) {
    auto* vkfontchooser = const_cast<VirtualKFontChooser*>(dynamic_cast<const VirtualKFontChooser*>(self));
    if (vkfontchooser && vkfontchooser->isVirtualKFontChooser) {
        vkfontchooser->setKFontChooser_GetDecodedMetricF_Callback(reinterpret_cast<VirtualKFontChooser::KFontChooser_GetDecodedMetricF_Callback>(slot));
    }
}

void KFontChooser_Delete(KFontChooser* self) {
    delete self;
}
