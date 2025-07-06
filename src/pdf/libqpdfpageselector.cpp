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
#include <QPdfDocument>
#include <QPdfPageSelector>
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
#include <qpdfpageselector.h>
#include "libqpdfpageselector.h"
#include "libqpdfpageselector.hxx"

QPdfPageSelector* QPdfPageSelector_new(QWidget* parent) {
    return new VirtualQPdfPageSelector(parent);
}

QPdfPageSelector* QPdfPageSelector_new2() {
    return new VirtualQPdfPageSelector();
}

QMetaObject* QPdfPageSelector_MetaObject(const QPdfPageSelector* self) {
    return (QMetaObject*)self->metaObject();
}

void* QPdfPageSelector_Metacast(QPdfPageSelector* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QPdfPageSelector_Metacall(QPdfPageSelector* self, int param1, int param2, void** param3) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQPdfPageSelector*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QPdfPageSelector_OnMetacall(QPdfPageSelector* self, intptr_t slot) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->setQPdfPageSelector_Metacall_Callback(reinterpret_cast<VirtualQPdfPageSelector::QPdfPageSelector_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QPdfPageSelector_QBaseMetacall(QPdfPageSelector* self, int param1, int param2, void** param3) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->setQPdfPageSelector_Metacall_IsBase(true);
        return vqpdfpageselector->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQPdfPageSelector*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QPdfPageSelector_Tr(const char* s) {
    QString _ret = QPdfPageSelector::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QPdfPageSelector_SetDocument(QPdfPageSelector* self, QPdfDocument* document) {
    self->setDocument(document);
}

QPdfDocument* QPdfPageSelector_Document(const QPdfPageSelector* self) {
    return self->document();
}

int QPdfPageSelector_CurrentPage(const QPdfPageSelector* self) {
    return self->currentPage();
}

libqt_string QPdfPageSelector_CurrentPageLabel(const QPdfPageSelector* self) {
    QString _ret = self->currentPageLabel();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QPdfPageSelector_SetCurrentPage(QPdfPageSelector* self, int index) {
    self->setCurrentPage(static_cast<int>(index));
}

void QPdfPageSelector_DocumentChanged(QPdfPageSelector* self, QPdfDocument* document) {
    self->documentChanged(document);
}

void QPdfPageSelector_Connect_DocumentChanged(QPdfPageSelector* self, intptr_t slot) {
    void (*slotFunc)(QPdfPageSelector*, QPdfDocument*) = reinterpret_cast<void (*)(QPdfPageSelector*, QPdfDocument*)>(slot);
    QPdfPageSelector::connect(self, &QPdfPageSelector::documentChanged, [self, slotFunc](QPdfDocument* document) {
        QPdfDocument* sigval1 = document;
        slotFunc(self, sigval1);
    });
}

void QPdfPageSelector_CurrentPageChanged(QPdfPageSelector* self, int index) {
    self->currentPageChanged(static_cast<int>(index));
}

void QPdfPageSelector_Connect_CurrentPageChanged(QPdfPageSelector* self, intptr_t slot) {
    void (*slotFunc)(QPdfPageSelector*, int) = reinterpret_cast<void (*)(QPdfPageSelector*, int)>(slot);
    QPdfPageSelector::connect(self, &QPdfPageSelector::currentPageChanged, [self, slotFunc](int index) {
        int sigval1 = index;
        slotFunc(self, sigval1);
    });
}

void QPdfPageSelector_CurrentPageLabelChanged(QPdfPageSelector* self, const libqt_string label) {
    QString label_QString = QString::fromUtf8(label.data, label.len);
    self->currentPageLabelChanged(label_QString);
}

void QPdfPageSelector_Connect_CurrentPageLabelChanged(QPdfPageSelector* self, intptr_t slot) {
    void (*slotFunc)(QPdfPageSelector*, libqt_string) = reinterpret_cast<void (*)(QPdfPageSelector*, libqt_string)>(slot);
    QPdfPageSelector::connect(self, &QPdfPageSelector::currentPageLabelChanged, [self, slotFunc](const QString& label) {
        const QString label_ret = label;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray label_b = label_ret.toUtf8();
        libqt_string label_str;
        label_str.len = label_b.length();
        label_str.data = static_cast<const char*>(malloc((label_str.len + 1) * sizeof(char)));
        memcpy((void*)label_str.data, label_b.data(), label_str.len);
        ((char*)label_str.data)[label_str.len] = '\0';
        libqt_string sigval1 = label_str;
        slotFunc(self, sigval1);
    });
}

libqt_string QPdfPageSelector_Tr2(const char* s, const char* c) {
    QString _ret = QPdfPageSelector::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QPdfPageSelector_Tr3(const char* s, const char* c, int n) {
    QString _ret = QPdfPageSelector::tr(s, c, static_cast<int>(n));
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
int QPdfPageSelector_DevType(const QPdfPageSelector* self) {
    auto* vqpdfpageselector = const_cast<VirtualQPdfPageSelector*>(dynamic_cast<const VirtualQPdfPageSelector*>(self));
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        return vqpdfpageselector->devType();
    } else {
        return self->QPdfPageSelector::devType();
    }
}

// Base class handler implementation
int QPdfPageSelector_QBaseDevType(const QPdfPageSelector* self) {
    auto* vqpdfpageselector = const_cast<VirtualQPdfPageSelector*>(dynamic_cast<const VirtualQPdfPageSelector*>(self));
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->setQPdfPageSelector_DevType_IsBase(true);
        return vqpdfpageselector->devType();
    } else {
        return self->QPdfPageSelector::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfPageSelector_OnDevType(const QPdfPageSelector* self, intptr_t slot) {
    auto* vqpdfpageselector = const_cast<VirtualQPdfPageSelector*>(dynamic_cast<const VirtualQPdfPageSelector*>(self));
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->setQPdfPageSelector_DevType_Callback(reinterpret_cast<VirtualQPdfPageSelector::QPdfPageSelector_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfPageSelector_SetVisible(QPdfPageSelector* self, bool visible) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->setVisible(visible);
    } else {
        self->QPdfPageSelector::setVisible(visible);
    }
}

// Base class handler implementation
void QPdfPageSelector_QBaseSetVisible(QPdfPageSelector* self, bool visible) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->setQPdfPageSelector_SetVisible_IsBase(true);
        vqpdfpageselector->setVisible(visible);
    } else {
        self->QPdfPageSelector::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfPageSelector_OnSetVisible(QPdfPageSelector* self, intptr_t slot) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->setQPdfPageSelector_SetVisible_Callback(reinterpret_cast<VirtualQPdfPageSelector::QPdfPageSelector_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QPdfPageSelector_SizeHint(const QPdfPageSelector* self) {
    auto* vqpdfpageselector = const_cast<VirtualQPdfPageSelector*>(dynamic_cast<const VirtualQPdfPageSelector*>(self));
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        return new QSize(vqpdfpageselector->sizeHint());
    } else {
        return new QSize(((VirtualQPdfPageSelector*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* QPdfPageSelector_QBaseSizeHint(const QPdfPageSelector* self) {
    auto* vqpdfpageselector = const_cast<VirtualQPdfPageSelector*>(dynamic_cast<const VirtualQPdfPageSelector*>(self));
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->setQPdfPageSelector_SizeHint_IsBase(true);
        return new QSize(vqpdfpageselector->sizeHint());
    } else {
        return new QSize(((VirtualQPdfPageSelector*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfPageSelector_OnSizeHint(const QPdfPageSelector* self, intptr_t slot) {
    auto* vqpdfpageselector = const_cast<VirtualQPdfPageSelector*>(dynamic_cast<const VirtualQPdfPageSelector*>(self));
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->setQPdfPageSelector_SizeHint_Callback(reinterpret_cast<VirtualQPdfPageSelector::QPdfPageSelector_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QPdfPageSelector_MinimumSizeHint(const QPdfPageSelector* self) {
    auto* vqpdfpageselector = const_cast<VirtualQPdfPageSelector*>(dynamic_cast<const VirtualQPdfPageSelector*>(self));
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        return new QSize(vqpdfpageselector->minimumSizeHint());
    } else {
        return new QSize(((VirtualQPdfPageSelector*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* QPdfPageSelector_QBaseMinimumSizeHint(const QPdfPageSelector* self) {
    auto* vqpdfpageselector = const_cast<VirtualQPdfPageSelector*>(dynamic_cast<const VirtualQPdfPageSelector*>(self));
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->setQPdfPageSelector_MinimumSizeHint_IsBase(true);
        return new QSize(vqpdfpageselector->minimumSizeHint());
    } else {
        return new QSize(((VirtualQPdfPageSelector*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfPageSelector_OnMinimumSizeHint(const QPdfPageSelector* self, intptr_t slot) {
    auto* vqpdfpageselector = const_cast<VirtualQPdfPageSelector*>(dynamic_cast<const VirtualQPdfPageSelector*>(self));
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->setQPdfPageSelector_MinimumSizeHint_Callback(reinterpret_cast<VirtualQPdfPageSelector::QPdfPageSelector_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
int QPdfPageSelector_HeightForWidth(const QPdfPageSelector* self, int param1) {
    auto* vqpdfpageselector = const_cast<VirtualQPdfPageSelector*>(dynamic_cast<const VirtualQPdfPageSelector*>(self));
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        return vqpdfpageselector->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QPdfPageSelector::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QPdfPageSelector_QBaseHeightForWidth(const QPdfPageSelector* self, int param1) {
    auto* vqpdfpageselector = const_cast<VirtualQPdfPageSelector*>(dynamic_cast<const VirtualQPdfPageSelector*>(self));
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->setQPdfPageSelector_HeightForWidth_IsBase(true);
        return vqpdfpageselector->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QPdfPageSelector::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfPageSelector_OnHeightForWidth(const QPdfPageSelector* self, intptr_t slot) {
    auto* vqpdfpageselector = const_cast<VirtualQPdfPageSelector*>(dynamic_cast<const VirtualQPdfPageSelector*>(self));
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->setQPdfPageSelector_HeightForWidth_Callback(reinterpret_cast<VirtualQPdfPageSelector::QPdfPageSelector_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPdfPageSelector_HasHeightForWidth(const QPdfPageSelector* self) {
    auto* vqpdfpageselector = const_cast<VirtualQPdfPageSelector*>(dynamic_cast<const VirtualQPdfPageSelector*>(self));
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        return vqpdfpageselector->hasHeightForWidth();
    } else {
        return self->QPdfPageSelector::hasHeightForWidth();
    }
}

// Base class handler implementation
bool QPdfPageSelector_QBaseHasHeightForWidth(const QPdfPageSelector* self) {
    auto* vqpdfpageselector = const_cast<VirtualQPdfPageSelector*>(dynamic_cast<const VirtualQPdfPageSelector*>(self));
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->setQPdfPageSelector_HasHeightForWidth_IsBase(true);
        return vqpdfpageselector->hasHeightForWidth();
    } else {
        return self->QPdfPageSelector::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfPageSelector_OnHasHeightForWidth(const QPdfPageSelector* self, intptr_t slot) {
    auto* vqpdfpageselector = const_cast<VirtualQPdfPageSelector*>(dynamic_cast<const VirtualQPdfPageSelector*>(self));
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->setQPdfPageSelector_HasHeightForWidth_Callback(reinterpret_cast<VirtualQPdfPageSelector::QPdfPageSelector_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QPdfPageSelector_PaintEngine(const QPdfPageSelector* self) {
    auto* vqpdfpageselector = const_cast<VirtualQPdfPageSelector*>(dynamic_cast<const VirtualQPdfPageSelector*>(self));
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        return vqpdfpageselector->paintEngine();
    } else {
        return self->QPdfPageSelector::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QPdfPageSelector_QBasePaintEngine(const QPdfPageSelector* self) {
    auto* vqpdfpageselector = const_cast<VirtualQPdfPageSelector*>(dynamic_cast<const VirtualQPdfPageSelector*>(self));
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->setQPdfPageSelector_PaintEngine_IsBase(true);
        return vqpdfpageselector->paintEngine();
    } else {
        return self->QPdfPageSelector::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfPageSelector_OnPaintEngine(const QPdfPageSelector* self, intptr_t slot) {
    auto* vqpdfpageselector = const_cast<VirtualQPdfPageSelector*>(dynamic_cast<const VirtualQPdfPageSelector*>(self));
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->setQPdfPageSelector_PaintEngine_Callback(reinterpret_cast<VirtualQPdfPageSelector::QPdfPageSelector_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPdfPageSelector_Event(QPdfPageSelector* self, QEvent* event) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        return vqpdfpageselector->event(event);
    } else {
        return ((VirtualQPdfPageSelector*)self)->event(event);
    }
}

// Base class handler implementation
bool QPdfPageSelector_QBaseEvent(QPdfPageSelector* self, QEvent* event) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->setQPdfPageSelector_Event_IsBase(true);
        return vqpdfpageselector->event(event);
    } else {
        return ((VirtualQPdfPageSelector*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfPageSelector_OnEvent(QPdfPageSelector* self, intptr_t slot) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->setQPdfPageSelector_Event_Callback(reinterpret_cast<VirtualQPdfPageSelector::QPdfPageSelector_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfPageSelector_MousePressEvent(QPdfPageSelector* self, QMouseEvent* event) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->mousePressEvent(event);
    } else {
        ((VirtualQPdfPageSelector*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void QPdfPageSelector_QBaseMousePressEvent(QPdfPageSelector* self, QMouseEvent* event) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->setQPdfPageSelector_MousePressEvent_IsBase(true);
        vqpdfpageselector->mousePressEvent(event);
    } else {
        ((VirtualQPdfPageSelector*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfPageSelector_OnMousePressEvent(QPdfPageSelector* self, intptr_t slot) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->setQPdfPageSelector_MousePressEvent_Callback(reinterpret_cast<VirtualQPdfPageSelector::QPdfPageSelector_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfPageSelector_MouseReleaseEvent(QPdfPageSelector* self, QMouseEvent* event) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->mouseReleaseEvent(event);
    } else {
        ((VirtualQPdfPageSelector*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void QPdfPageSelector_QBaseMouseReleaseEvent(QPdfPageSelector* self, QMouseEvent* event) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->setQPdfPageSelector_MouseReleaseEvent_IsBase(true);
        vqpdfpageselector->mouseReleaseEvent(event);
    } else {
        ((VirtualQPdfPageSelector*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfPageSelector_OnMouseReleaseEvent(QPdfPageSelector* self, intptr_t slot) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->setQPdfPageSelector_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQPdfPageSelector::QPdfPageSelector_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfPageSelector_MouseDoubleClickEvent(QPdfPageSelector* self, QMouseEvent* event) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->mouseDoubleClickEvent(event);
    } else {
        ((VirtualQPdfPageSelector*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void QPdfPageSelector_QBaseMouseDoubleClickEvent(QPdfPageSelector* self, QMouseEvent* event) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->setQPdfPageSelector_MouseDoubleClickEvent_IsBase(true);
        vqpdfpageselector->mouseDoubleClickEvent(event);
    } else {
        ((VirtualQPdfPageSelector*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfPageSelector_OnMouseDoubleClickEvent(QPdfPageSelector* self, intptr_t slot) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->setQPdfPageSelector_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQPdfPageSelector::QPdfPageSelector_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfPageSelector_MouseMoveEvent(QPdfPageSelector* self, QMouseEvent* event) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->mouseMoveEvent(event);
    } else {
        ((VirtualQPdfPageSelector*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void QPdfPageSelector_QBaseMouseMoveEvent(QPdfPageSelector* self, QMouseEvent* event) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->setQPdfPageSelector_MouseMoveEvent_IsBase(true);
        vqpdfpageselector->mouseMoveEvent(event);
    } else {
        ((VirtualQPdfPageSelector*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfPageSelector_OnMouseMoveEvent(QPdfPageSelector* self, intptr_t slot) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->setQPdfPageSelector_MouseMoveEvent_Callback(reinterpret_cast<VirtualQPdfPageSelector::QPdfPageSelector_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfPageSelector_WheelEvent(QPdfPageSelector* self, QWheelEvent* event) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->wheelEvent(event);
    } else {
        ((VirtualQPdfPageSelector*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void QPdfPageSelector_QBaseWheelEvent(QPdfPageSelector* self, QWheelEvent* event) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->setQPdfPageSelector_WheelEvent_IsBase(true);
        vqpdfpageselector->wheelEvent(event);
    } else {
        ((VirtualQPdfPageSelector*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfPageSelector_OnWheelEvent(QPdfPageSelector* self, intptr_t slot) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->setQPdfPageSelector_WheelEvent_Callback(reinterpret_cast<VirtualQPdfPageSelector::QPdfPageSelector_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfPageSelector_KeyPressEvent(QPdfPageSelector* self, QKeyEvent* event) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->keyPressEvent(event);
    } else {
        ((VirtualQPdfPageSelector*)self)->keyPressEvent(event);
    }
}

// Base class handler implementation
void QPdfPageSelector_QBaseKeyPressEvent(QPdfPageSelector* self, QKeyEvent* event) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->setQPdfPageSelector_KeyPressEvent_IsBase(true);
        vqpdfpageselector->keyPressEvent(event);
    } else {
        ((VirtualQPdfPageSelector*)self)->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfPageSelector_OnKeyPressEvent(QPdfPageSelector* self, intptr_t slot) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->setQPdfPageSelector_KeyPressEvent_Callback(reinterpret_cast<VirtualQPdfPageSelector::QPdfPageSelector_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfPageSelector_KeyReleaseEvent(QPdfPageSelector* self, QKeyEvent* event) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->keyReleaseEvent(event);
    } else {
        ((VirtualQPdfPageSelector*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void QPdfPageSelector_QBaseKeyReleaseEvent(QPdfPageSelector* self, QKeyEvent* event) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->setQPdfPageSelector_KeyReleaseEvent_IsBase(true);
        vqpdfpageselector->keyReleaseEvent(event);
    } else {
        ((VirtualQPdfPageSelector*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfPageSelector_OnKeyReleaseEvent(QPdfPageSelector* self, intptr_t slot) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->setQPdfPageSelector_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQPdfPageSelector::QPdfPageSelector_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfPageSelector_FocusInEvent(QPdfPageSelector* self, QFocusEvent* event) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->focusInEvent(event);
    } else {
        ((VirtualQPdfPageSelector*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void QPdfPageSelector_QBaseFocusInEvent(QPdfPageSelector* self, QFocusEvent* event) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->setQPdfPageSelector_FocusInEvent_IsBase(true);
        vqpdfpageselector->focusInEvent(event);
    } else {
        ((VirtualQPdfPageSelector*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfPageSelector_OnFocusInEvent(QPdfPageSelector* self, intptr_t slot) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->setQPdfPageSelector_FocusInEvent_Callback(reinterpret_cast<VirtualQPdfPageSelector::QPdfPageSelector_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfPageSelector_FocusOutEvent(QPdfPageSelector* self, QFocusEvent* event) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->focusOutEvent(event);
    } else {
        ((VirtualQPdfPageSelector*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void QPdfPageSelector_QBaseFocusOutEvent(QPdfPageSelector* self, QFocusEvent* event) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->setQPdfPageSelector_FocusOutEvent_IsBase(true);
        vqpdfpageselector->focusOutEvent(event);
    } else {
        ((VirtualQPdfPageSelector*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfPageSelector_OnFocusOutEvent(QPdfPageSelector* self, intptr_t slot) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->setQPdfPageSelector_FocusOutEvent_Callback(reinterpret_cast<VirtualQPdfPageSelector::QPdfPageSelector_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfPageSelector_EnterEvent(QPdfPageSelector* self, QEnterEvent* event) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->enterEvent(event);
    } else {
        ((VirtualQPdfPageSelector*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void QPdfPageSelector_QBaseEnterEvent(QPdfPageSelector* self, QEnterEvent* event) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->setQPdfPageSelector_EnterEvent_IsBase(true);
        vqpdfpageselector->enterEvent(event);
    } else {
        ((VirtualQPdfPageSelector*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfPageSelector_OnEnterEvent(QPdfPageSelector* self, intptr_t slot) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->setQPdfPageSelector_EnterEvent_Callback(reinterpret_cast<VirtualQPdfPageSelector::QPdfPageSelector_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfPageSelector_LeaveEvent(QPdfPageSelector* self, QEvent* event) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->leaveEvent(event);
    } else {
        ((VirtualQPdfPageSelector*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void QPdfPageSelector_QBaseLeaveEvent(QPdfPageSelector* self, QEvent* event) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->setQPdfPageSelector_LeaveEvent_IsBase(true);
        vqpdfpageselector->leaveEvent(event);
    } else {
        ((VirtualQPdfPageSelector*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfPageSelector_OnLeaveEvent(QPdfPageSelector* self, intptr_t slot) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->setQPdfPageSelector_LeaveEvent_Callback(reinterpret_cast<VirtualQPdfPageSelector::QPdfPageSelector_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfPageSelector_PaintEvent(QPdfPageSelector* self, QPaintEvent* event) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->paintEvent(event);
    } else {
        ((VirtualQPdfPageSelector*)self)->paintEvent(event);
    }
}

// Base class handler implementation
void QPdfPageSelector_QBasePaintEvent(QPdfPageSelector* self, QPaintEvent* event) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->setQPdfPageSelector_PaintEvent_IsBase(true);
        vqpdfpageselector->paintEvent(event);
    } else {
        ((VirtualQPdfPageSelector*)self)->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfPageSelector_OnPaintEvent(QPdfPageSelector* self, intptr_t slot) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->setQPdfPageSelector_PaintEvent_Callback(reinterpret_cast<VirtualQPdfPageSelector::QPdfPageSelector_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfPageSelector_MoveEvent(QPdfPageSelector* self, QMoveEvent* event) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->moveEvent(event);
    } else {
        ((VirtualQPdfPageSelector*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void QPdfPageSelector_QBaseMoveEvent(QPdfPageSelector* self, QMoveEvent* event) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->setQPdfPageSelector_MoveEvent_IsBase(true);
        vqpdfpageselector->moveEvent(event);
    } else {
        ((VirtualQPdfPageSelector*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfPageSelector_OnMoveEvent(QPdfPageSelector* self, intptr_t slot) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->setQPdfPageSelector_MoveEvent_Callback(reinterpret_cast<VirtualQPdfPageSelector::QPdfPageSelector_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfPageSelector_ResizeEvent(QPdfPageSelector* self, QResizeEvent* event) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->resizeEvent(event);
    } else {
        ((VirtualQPdfPageSelector*)self)->resizeEvent(event);
    }
}

// Base class handler implementation
void QPdfPageSelector_QBaseResizeEvent(QPdfPageSelector* self, QResizeEvent* event) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->setQPdfPageSelector_ResizeEvent_IsBase(true);
        vqpdfpageselector->resizeEvent(event);
    } else {
        ((VirtualQPdfPageSelector*)self)->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfPageSelector_OnResizeEvent(QPdfPageSelector* self, intptr_t slot) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->setQPdfPageSelector_ResizeEvent_Callback(reinterpret_cast<VirtualQPdfPageSelector::QPdfPageSelector_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfPageSelector_CloseEvent(QPdfPageSelector* self, QCloseEvent* event) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->closeEvent(event);
    } else {
        ((VirtualQPdfPageSelector*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void QPdfPageSelector_QBaseCloseEvent(QPdfPageSelector* self, QCloseEvent* event) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->setQPdfPageSelector_CloseEvent_IsBase(true);
        vqpdfpageselector->closeEvent(event);
    } else {
        ((VirtualQPdfPageSelector*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfPageSelector_OnCloseEvent(QPdfPageSelector* self, intptr_t slot) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->setQPdfPageSelector_CloseEvent_Callback(reinterpret_cast<VirtualQPdfPageSelector::QPdfPageSelector_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfPageSelector_ContextMenuEvent(QPdfPageSelector* self, QContextMenuEvent* event) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->contextMenuEvent(event);
    } else {
        ((VirtualQPdfPageSelector*)self)->contextMenuEvent(event);
    }
}

// Base class handler implementation
void QPdfPageSelector_QBaseContextMenuEvent(QPdfPageSelector* self, QContextMenuEvent* event) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->setQPdfPageSelector_ContextMenuEvent_IsBase(true);
        vqpdfpageselector->contextMenuEvent(event);
    } else {
        ((VirtualQPdfPageSelector*)self)->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfPageSelector_OnContextMenuEvent(QPdfPageSelector* self, intptr_t slot) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->setQPdfPageSelector_ContextMenuEvent_Callback(reinterpret_cast<VirtualQPdfPageSelector::QPdfPageSelector_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfPageSelector_TabletEvent(QPdfPageSelector* self, QTabletEvent* event) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->tabletEvent(event);
    } else {
        ((VirtualQPdfPageSelector*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void QPdfPageSelector_QBaseTabletEvent(QPdfPageSelector* self, QTabletEvent* event) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->setQPdfPageSelector_TabletEvent_IsBase(true);
        vqpdfpageselector->tabletEvent(event);
    } else {
        ((VirtualQPdfPageSelector*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfPageSelector_OnTabletEvent(QPdfPageSelector* self, intptr_t slot) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->setQPdfPageSelector_TabletEvent_Callback(reinterpret_cast<VirtualQPdfPageSelector::QPdfPageSelector_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfPageSelector_ActionEvent(QPdfPageSelector* self, QActionEvent* event) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->actionEvent(event);
    } else {
        ((VirtualQPdfPageSelector*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void QPdfPageSelector_QBaseActionEvent(QPdfPageSelector* self, QActionEvent* event) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->setQPdfPageSelector_ActionEvent_IsBase(true);
        vqpdfpageselector->actionEvent(event);
    } else {
        ((VirtualQPdfPageSelector*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfPageSelector_OnActionEvent(QPdfPageSelector* self, intptr_t slot) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->setQPdfPageSelector_ActionEvent_Callback(reinterpret_cast<VirtualQPdfPageSelector::QPdfPageSelector_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfPageSelector_DragEnterEvent(QPdfPageSelector* self, QDragEnterEvent* event) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->dragEnterEvent(event);
    } else {
        ((VirtualQPdfPageSelector*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void QPdfPageSelector_QBaseDragEnterEvent(QPdfPageSelector* self, QDragEnterEvent* event) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->setQPdfPageSelector_DragEnterEvent_IsBase(true);
        vqpdfpageselector->dragEnterEvent(event);
    } else {
        ((VirtualQPdfPageSelector*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfPageSelector_OnDragEnterEvent(QPdfPageSelector* self, intptr_t slot) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->setQPdfPageSelector_DragEnterEvent_Callback(reinterpret_cast<VirtualQPdfPageSelector::QPdfPageSelector_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfPageSelector_DragMoveEvent(QPdfPageSelector* self, QDragMoveEvent* event) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->dragMoveEvent(event);
    } else {
        ((VirtualQPdfPageSelector*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void QPdfPageSelector_QBaseDragMoveEvent(QPdfPageSelector* self, QDragMoveEvent* event) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->setQPdfPageSelector_DragMoveEvent_IsBase(true);
        vqpdfpageselector->dragMoveEvent(event);
    } else {
        ((VirtualQPdfPageSelector*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfPageSelector_OnDragMoveEvent(QPdfPageSelector* self, intptr_t slot) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->setQPdfPageSelector_DragMoveEvent_Callback(reinterpret_cast<VirtualQPdfPageSelector::QPdfPageSelector_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfPageSelector_DragLeaveEvent(QPdfPageSelector* self, QDragLeaveEvent* event) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->dragLeaveEvent(event);
    } else {
        ((VirtualQPdfPageSelector*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void QPdfPageSelector_QBaseDragLeaveEvent(QPdfPageSelector* self, QDragLeaveEvent* event) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->setQPdfPageSelector_DragLeaveEvent_IsBase(true);
        vqpdfpageselector->dragLeaveEvent(event);
    } else {
        ((VirtualQPdfPageSelector*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfPageSelector_OnDragLeaveEvent(QPdfPageSelector* self, intptr_t slot) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->setQPdfPageSelector_DragLeaveEvent_Callback(reinterpret_cast<VirtualQPdfPageSelector::QPdfPageSelector_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfPageSelector_DropEvent(QPdfPageSelector* self, QDropEvent* event) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->dropEvent(event);
    } else {
        ((VirtualQPdfPageSelector*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void QPdfPageSelector_QBaseDropEvent(QPdfPageSelector* self, QDropEvent* event) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->setQPdfPageSelector_DropEvent_IsBase(true);
        vqpdfpageselector->dropEvent(event);
    } else {
        ((VirtualQPdfPageSelector*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfPageSelector_OnDropEvent(QPdfPageSelector* self, intptr_t slot) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->setQPdfPageSelector_DropEvent_Callback(reinterpret_cast<VirtualQPdfPageSelector::QPdfPageSelector_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfPageSelector_ShowEvent(QPdfPageSelector* self, QShowEvent* event) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->showEvent(event);
    } else {
        ((VirtualQPdfPageSelector*)self)->showEvent(event);
    }
}

// Base class handler implementation
void QPdfPageSelector_QBaseShowEvent(QPdfPageSelector* self, QShowEvent* event) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->setQPdfPageSelector_ShowEvent_IsBase(true);
        vqpdfpageselector->showEvent(event);
    } else {
        ((VirtualQPdfPageSelector*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfPageSelector_OnShowEvent(QPdfPageSelector* self, intptr_t slot) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->setQPdfPageSelector_ShowEvent_Callback(reinterpret_cast<VirtualQPdfPageSelector::QPdfPageSelector_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfPageSelector_HideEvent(QPdfPageSelector* self, QHideEvent* event) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->hideEvent(event);
    } else {
        ((VirtualQPdfPageSelector*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void QPdfPageSelector_QBaseHideEvent(QPdfPageSelector* self, QHideEvent* event) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->setQPdfPageSelector_HideEvent_IsBase(true);
        vqpdfpageselector->hideEvent(event);
    } else {
        ((VirtualQPdfPageSelector*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfPageSelector_OnHideEvent(QPdfPageSelector* self, intptr_t slot) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->setQPdfPageSelector_HideEvent_Callback(reinterpret_cast<VirtualQPdfPageSelector::QPdfPageSelector_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPdfPageSelector_NativeEvent(QPdfPageSelector* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        return vqpdfpageselector->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQPdfPageSelector*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QPdfPageSelector_QBaseNativeEvent(QPdfPageSelector* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->setQPdfPageSelector_NativeEvent_IsBase(true);
        return vqpdfpageselector->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQPdfPageSelector*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfPageSelector_OnNativeEvent(QPdfPageSelector* self, intptr_t slot) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->setQPdfPageSelector_NativeEvent_Callback(reinterpret_cast<VirtualQPdfPageSelector::QPdfPageSelector_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfPageSelector_ChangeEvent(QPdfPageSelector* self, QEvent* param1) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->changeEvent(param1);
    } else {
        ((VirtualQPdfPageSelector*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void QPdfPageSelector_QBaseChangeEvent(QPdfPageSelector* self, QEvent* param1) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->setQPdfPageSelector_ChangeEvent_IsBase(true);
        vqpdfpageselector->changeEvent(param1);
    } else {
        ((VirtualQPdfPageSelector*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfPageSelector_OnChangeEvent(QPdfPageSelector* self, intptr_t slot) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->setQPdfPageSelector_ChangeEvent_Callback(reinterpret_cast<VirtualQPdfPageSelector::QPdfPageSelector_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QPdfPageSelector_Metric(const QPdfPageSelector* self, int param1) {
    auto* vqpdfpageselector = const_cast<VirtualQPdfPageSelector*>(dynamic_cast<const VirtualQPdfPageSelector*>(self));
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        return vqpdfpageselector->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQPdfPageSelector*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int QPdfPageSelector_QBaseMetric(const QPdfPageSelector* self, int param1) {
    auto* vqpdfpageselector = const_cast<VirtualQPdfPageSelector*>(dynamic_cast<const VirtualQPdfPageSelector*>(self));
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->setQPdfPageSelector_Metric_IsBase(true);
        return vqpdfpageselector->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQPdfPageSelector*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfPageSelector_OnMetric(const QPdfPageSelector* self, intptr_t slot) {
    auto* vqpdfpageselector = const_cast<VirtualQPdfPageSelector*>(dynamic_cast<const VirtualQPdfPageSelector*>(self));
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->setQPdfPageSelector_Metric_Callback(reinterpret_cast<VirtualQPdfPageSelector::QPdfPageSelector_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfPageSelector_InitPainter(const QPdfPageSelector* self, QPainter* painter) {
    auto* vqpdfpageselector = const_cast<VirtualQPdfPageSelector*>(dynamic_cast<const VirtualQPdfPageSelector*>(self));
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->initPainter(painter);
    } else {
        ((VirtualQPdfPageSelector*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void QPdfPageSelector_QBaseInitPainter(const QPdfPageSelector* self, QPainter* painter) {
    auto* vqpdfpageselector = const_cast<VirtualQPdfPageSelector*>(dynamic_cast<const VirtualQPdfPageSelector*>(self));
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->setQPdfPageSelector_InitPainter_IsBase(true);
        vqpdfpageselector->initPainter(painter);
    } else {
        ((VirtualQPdfPageSelector*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfPageSelector_OnInitPainter(const QPdfPageSelector* self, intptr_t slot) {
    auto* vqpdfpageselector = const_cast<VirtualQPdfPageSelector*>(dynamic_cast<const VirtualQPdfPageSelector*>(self));
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->setQPdfPageSelector_InitPainter_Callback(reinterpret_cast<VirtualQPdfPageSelector::QPdfPageSelector_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QPdfPageSelector_Redirected(const QPdfPageSelector* self, QPoint* offset) {
    auto* vqpdfpageselector = const_cast<VirtualQPdfPageSelector*>(dynamic_cast<const VirtualQPdfPageSelector*>(self));
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        return vqpdfpageselector->redirected(offset);
    } else {
        return ((VirtualQPdfPageSelector*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QPdfPageSelector_QBaseRedirected(const QPdfPageSelector* self, QPoint* offset) {
    auto* vqpdfpageselector = const_cast<VirtualQPdfPageSelector*>(dynamic_cast<const VirtualQPdfPageSelector*>(self));
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->setQPdfPageSelector_Redirected_IsBase(true);
        return vqpdfpageselector->redirected(offset);
    } else {
        return ((VirtualQPdfPageSelector*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfPageSelector_OnRedirected(const QPdfPageSelector* self, intptr_t slot) {
    auto* vqpdfpageselector = const_cast<VirtualQPdfPageSelector*>(dynamic_cast<const VirtualQPdfPageSelector*>(self));
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->setQPdfPageSelector_Redirected_Callback(reinterpret_cast<VirtualQPdfPageSelector::QPdfPageSelector_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QPdfPageSelector_SharedPainter(const QPdfPageSelector* self) {
    auto* vqpdfpageselector = const_cast<VirtualQPdfPageSelector*>(dynamic_cast<const VirtualQPdfPageSelector*>(self));
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        return vqpdfpageselector->sharedPainter();
    } else {
        return ((VirtualQPdfPageSelector*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QPdfPageSelector_QBaseSharedPainter(const QPdfPageSelector* self) {
    auto* vqpdfpageselector = const_cast<VirtualQPdfPageSelector*>(dynamic_cast<const VirtualQPdfPageSelector*>(self));
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->setQPdfPageSelector_SharedPainter_IsBase(true);
        return vqpdfpageselector->sharedPainter();
    } else {
        return ((VirtualQPdfPageSelector*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfPageSelector_OnSharedPainter(const QPdfPageSelector* self, intptr_t slot) {
    auto* vqpdfpageselector = const_cast<VirtualQPdfPageSelector*>(dynamic_cast<const VirtualQPdfPageSelector*>(self));
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->setQPdfPageSelector_SharedPainter_Callback(reinterpret_cast<VirtualQPdfPageSelector::QPdfPageSelector_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfPageSelector_InputMethodEvent(QPdfPageSelector* self, QInputMethodEvent* param1) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->inputMethodEvent(param1);
    } else {
        ((VirtualQPdfPageSelector*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void QPdfPageSelector_QBaseInputMethodEvent(QPdfPageSelector* self, QInputMethodEvent* param1) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->setQPdfPageSelector_InputMethodEvent_IsBase(true);
        vqpdfpageselector->inputMethodEvent(param1);
    } else {
        ((VirtualQPdfPageSelector*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfPageSelector_OnInputMethodEvent(QPdfPageSelector* self, intptr_t slot) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->setQPdfPageSelector_InputMethodEvent_Callback(reinterpret_cast<VirtualQPdfPageSelector::QPdfPageSelector_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QPdfPageSelector_InputMethodQuery(const QPdfPageSelector* self, int param1) {
    auto* vqpdfpageselector = const_cast<VirtualQPdfPageSelector*>(dynamic_cast<const VirtualQPdfPageSelector*>(self));
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        return new QVariant(vqpdfpageselector->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualQPdfPageSelector*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* QPdfPageSelector_QBaseInputMethodQuery(const QPdfPageSelector* self, int param1) {
    auto* vqpdfpageselector = const_cast<VirtualQPdfPageSelector*>(dynamic_cast<const VirtualQPdfPageSelector*>(self));
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->setQPdfPageSelector_InputMethodQuery_IsBase(true);
        return new QVariant(vqpdfpageselector->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualQPdfPageSelector*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfPageSelector_OnInputMethodQuery(const QPdfPageSelector* self, intptr_t slot) {
    auto* vqpdfpageselector = const_cast<VirtualQPdfPageSelector*>(dynamic_cast<const VirtualQPdfPageSelector*>(self));
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->setQPdfPageSelector_InputMethodQuery_Callback(reinterpret_cast<VirtualQPdfPageSelector::QPdfPageSelector_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPdfPageSelector_FocusNextPrevChild(QPdfPageSelector* self, bool next) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        return vqpdfpageselector->focusNextPrevChild(next);
    } else {
        return ((VirtualQPdfPageSelector*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool QPdfPageSelector_QBaseFocusNextPrevChild(QPdfPageSelector* self, bool next) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->setQPdfPageSelector_FocusNextPrevChild_IsBase(true);
        return vqpdfpageselector->focusNextPrevChild(next);
    } else {
        return ((VirtualQPdfPageSelector*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfPageSelector_OnFocusNextPrevChild(QPdfPageSelector* self, intptr_t slot) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->setQPdfPageSelector_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQPdfPageSelector::QPdfPageSelector_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPdfPageSelector_EventFilter(QPdfPageSelector* self, QObject* watched, QEvent* event) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        return vqpdfpageselector->eventFilter(watched, event);
    } else {
        return self->QPdfPageSelector::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QPdfPageSelector_QBaseEventFilter(QPdfPageSelector* self, QObject* watched, QEvent* event) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->setQPdfPageSelector_EventFilter_IsBase(true);
        return vqpdfpageselector->eventFilter(watched, event);
    } else {
        return self->QPdfPageSelector::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfPageSelector_OnEventFilter(QPdfPageSelector* self, intptr_t slot) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->setQPdfPageSelector_EventFilter_Callback(reinterpret_cast<VirtualQPdfPageSelector::QPdfPageSelector_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfPageSelector_TimerEvent(QPdfPageSelector* self, QTimerEvent* event) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->timerEvent(event);
    } else {
        ((VirtualQPdfPageSelector*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QPdfPageSelector_QBaseTimerEvent(QPdfPageSelector* self, QTimerEvent* event) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->setQPdfPageSelector_TimerEvent_IsBase(true);
        vqpdfpageselector->timerEvent(event);
    } else {
        ((VirtualQPdfPageSelector*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfPageSelector_OnTimerEvent(QPdfPageSelector* self, intptr_t slot) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->setQPdfPageSelector_TimerEvent_Callback(reinterpret_cast<VirtualQPdfPageSelector::QPdfPageSelector_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfPageSelector_ChildEvent(QPdfPageSelector* self, QChildEvent* event) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->childEvent(event);
    } else {
        ((VirtualQPdfPageSelector*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QPdfPageSelector_QBaseChildEvent(QPdfPageSelector* self, QChildEvent* event) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->setQPdfPageSelector_ChildEvent_IsBase(true);
        vqpdfpageselector->childEvent(event);
    } else {
        ((VirtualQPdfPageSelector*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfPageSelector_OnChildEvent(QPdfPageSelector* self, intptr_t slot) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->setQPdfPageSelector_ChildEvent_Callback(reinterpret_cast<VirtualQPdfPageSelector::QPdfPageSelector_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfPageSelector_CustomEvent(QPdfPageSelector* self, QEvent* event) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->customEvent(event);
    } else {
        ((VirtualQPdfPageSelector*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QPdfPageSelector_QBaseCustomEvent(QPdfPageSelector* self, QEvent* event) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->setQPdfPageSelector_CustomEvent_IsBase(true);
        vqpdfpageselector->customEvent(event);
    } else {
        ((VirtualQPdfPageSelector*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfPageSelector_OnCustomEvent(QPdfPageSelector* self, intptr_t slot) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->setQPdfPageSelector_CustomEvent_Callback(reinterpret_cast<VirtualQPdfPageSelector::QPdfPageSelector_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfPageSelector_ConnectNotify(QPdfPageSelector* self, const QMetaMethod* signal) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->connectNotify(*signal);
    } else {
        ((VirtualQPdfPageSelector*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QPdfPageSelector_QBaseConnectNotify(QPdfPageSelector* self, const QMetaMethod* signal) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->setQPdfPageSelector_ConnectNotify_IsBase(true);
        vqpdfpageselector->connectNotify(*signal);
    } else {
        ((VirtualQPdfPageSelector*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfPageSelector_OnConnectNotify(QPdfPageSelector* self, intptr_t slot) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->setQPdfPageSelector_ConnectNotify_Callback(reinterpret_cast<VirtualQPdfPageSelector::QPdfPageSelector_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfPageSelector_DisconnectNotify(QPdfPageSelector* self, const QMetaMethod* signal) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->disconnectNotify(*signal);
    } else {
        ((VirtualQPdfPageSelector*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QPdfPageSelector_QBaseDisconnectNotify(QPdfPageSelector* self, const QMetaMethod* signal) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->setQPdfPageSelector_DisconnectNotify_IsBase(true);
        vqpdfpageselector->disconnectNotify(*signal);
    } else {
        ((VirtualQPdfPageSelector*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfPageSelector_OnDisconnectNotify(QPdfPageSelector* self, intptr_t slot) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->setQPdfPageSelector_DisconnectNotify_Callback(reinterpret_cast<VirtualQPdfPageSelector::QPdfPageSelector_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfPageSelector_UpdateMicroFocus(QPdfPageSelector* self) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->updateMicroFocus();
    } else {
        ((VirtualQPdfPageSelector*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void QPdfPageSelector_QBaseUpdateMicroFocus(QPdfPageSelector* self) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->setQPdfPageSelector_UpdateMicroFocus_IsBase(true);
        vqpdfpageselector->updateMicroFocus();
    } else {
        ((VirtualQPdfPageSelector*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfPageSelector_OnUpdateMicroFocus(QPdfPageSelector* self, intptr_t slot) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->setQPdfPageSelector_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQPdfPageSelector::QPdfPageSelector_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfPageSelector_Create(QPdfPageSelector* self) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->create();
    } else {
        ((VirtualQPdfPageSelector*)self)->create();
    }
}

// Base class handler implementation
void QPdfPageSelector_QBaseCreate(QPdfPageSelector* self) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->setQPdfPageSelector_Create_IsBase(true);
        vqpdfpageselector->create();
    } else {
        ((VirtualQPdfPageSelector*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfPageSelector_OnCreate(QPdfPageSelector* self, intptr_t slot) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->setQPdfPageSelector_Create_Callback(reinterpret_cast<VirtualQPdfPageSelector::QPdfPageSelector_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfPageSelector_Destroy(QPdfPageSelector* self) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->destroy();
    } else {
        ((VirtualQPdfPageSelector*)self)->destroy();
    }
}

// Base class handler implementation
void QPdfPageSelector_QBaseDestroy(QPdfPageSelector* self) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->setQPdfPageSelector_Destroy_IsBase(true);
        vqpdfpageselector->destroy();
    } else {
        ((VirtualQPdfPageSelector*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfPageSelector_OnDestroy(QPdfPageSelector* self, intptr_t slot) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->setQPdfPageSelector_Destroy_Callback(reinterpret_cast<VirtualQPdfPageSelector::QPdfPageSelector_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPdfPageSelector_FocusNextChild(QPdfPageSelector* self) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        return vqpdfpageselector->focusNextChild();
    } else {
        return ((VirtualQPdfPageSelector*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool QPdfPageSelector_QBaseFocusNextChild(QPdfPageSelector* self) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->setQPdfPageSelector_FocusNextChild_IsBase(true);
        return vqpdfpageselector->focusNextChild();
    } else {
        return ((VirtualQPdfPageSelector*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfPageSelector_OnFocusNextChild(QPdfPageSelector* self, intptr_t slot) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->setQPdfPageSelector_FocusNextChild_Callback(reinterpret_cast<VirtualQPdfPageSelector::QPdfPageSelector_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPdfPageSelector_FocusPreviousChild(QPdfPageSelector* self) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        return vqpdfpageselector->focusPreviousChild();
    } else {
        return ((VirtualQPdfPageSelector*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool QPdfPageSelector_QBaseFocusPreviousChild(QPdfPageSelector* self) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->setQPdfPageSelector_FocusPreviousChild_IsBase(true);
        return vqpdfpageselector->focusPreviousChild();
    } else {
        return ((VirtualQPdfPageSelector*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfPageSelector_OnFocusPreviousChild(QPdfPageSelector* self, intptr_t slot) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->setQPdfPageSelector_FocusPreviousChild_Callback(reinterpret_cast<VirtualQPdfPageSelector::QPdfPageSelector_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QPdfPageSelector_Sender(const QPdfPageSelector* self) {
    auto* vqpdfpageselector = const_cast<VirtualQPdfPageSelector*>(dynamic_cast<const VirtualQPdfPageSelector*>(self));
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        return vqpdfpageselector->sender();
    } else {
        return ((VirtualQPdfPageSelector*)self)->sender();
    }
}

// Base class handler implementation
QObject* QPdfPageSelector_QBaseSender(const QPdfPageSelector* self) {
    auto* vqpdfpageselector = const_cast<VirtualQPdfPageSelector*>(dynamic_cast<const VirtualQPdfPageSelector*>(self));
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->setQPdfPageSelector_Sender_IsBase(true);
        return vqpdfpageselector->sender();
    } else {
        return ((VirtualQPdfPageSelector*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfPageSelector_OnSender(const QPdfPageSelector* self, intptr_t slot) {
    auto* vqpdfpageselector = const_cast<VirtualQPdfPageSelector*>(dynamic_cast<const VirtualQPdfPageSelector*>(self));
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->setQPdfPageSelector_Sender_Callback(reinterpret_cast<VirtualQPdfPageSelector::QPdfPageSelector_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QPdfPageSelector_SenderSignalIndex(const QPdfPageSelector* self) {
    auto* vqpdfpageselector = const_cast<VirtualQPdfPageSelector*>(dynamic_cast<const VirtualQPdfPageSelector*>(self));
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        return vqpdfpageselector->senderSignalIndex();
    } else {
        return ((VirtualQPdfPageSelector*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QPdfPageSelector_QBaseSenderSignalIndex(const QPdfPageSelector* self) {
    auto* vqpdfpageselector = const_cast<VirtualQPdfPageSelector*>(dynamic_cast<const VirtualQPdfPageSelector*>(self));
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->setQPdfPageSelector_SenderSignalIndex_IsBase(true);
        return vqpdfpageselector->senderSignalIndex();
    } else {
        return ((VirtualQPdfPageSelector*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfPageSelector_OnSenderSignalIndex(const QPdfPageSelector* self, intptr_t slot) {
    auto* vqpdfpageselector = const_cast<VirtualQPdfPageSelector*>(dynamic_cast<const VirtualQPdfPageSelector*>(self));
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->setQPdfPageSelector_SenderSignalIndex_Callback(reinterpret_cast<VirtualQPdfPageSelector::QPdfPageSelector_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QPdfPageSelector_Receivers(const QPdfPageSelector* self, const char* signal) {
    auto* vqpdfpageselector = const_cast<VirtualQPdfPageSelector*>(dynamic_cast<const VirtualQPdfPageSelector*>(self));
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        return vqpdfpageselector->receivers(signal);
    } else {
        return ((VirtualQPdfPageSelector*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QPdfPageSelector_QBaseReceivers(const QPdfPageSelector* self, const char* signal) {
    auto* vqpdfpageselector = const_cast<VirtualQPdfPageSelector*>(dynamic_cast<const VirtualQPdfPageSelector*>(self));
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->setQPdfPageSelector_Receivers_IsBase(true);
        return vqpdfpageselector->receivers(signal);
    } else {
        return ((VirtualQPdfPageSelector*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfPageSelector_OnReceivers(const QPdfPageSelector* self, intptr_t slot) {
    auto* vqpdfpageselector = const_cast<VirtualQPdfPageSelector*>(dynamic_cast<const VirtualQPdfPageSelector*>(self));
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->setQPdfPageSelector_Receivers_Callback(reinterpret_cast<VirtualQPdfPageSelector::QPdfPageSelector_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPdfPageSelector_IsSignalConnected(const QPdfPageSelector* self, const QMetaMethod* signal) {
    auto* vqpdfpageselector = const_cast<VirtualQPdfPageSelector*>(dynamic_cast<const VirtualQPdfPageSelector*>(self));
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        return vqpdfpageselector->isSignalConnected(*signal);
    } else {
        return ((VirtualQPdfPageSelector*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QPdfPageSelector_QBaseIsSignalConnected(const QPdfPageSelector* self, const QMetaMethod* signal) {
    auto* vqpdfpageselector = const_cast<VirtualQPdfPageSelector*>(dynamic_cast<const VirtualQPdfPageSelector*>(self));
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->setQPdfPageSelector_IsSignalConnected_IsBase(true);
        return vqpdfpageselector->isSignalConnected(*signal);
    } else {
        return ((VirtualQPdfPageSelector*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfPageSelector_OnIsSignalConnected(const QPdfPageSelector* self, intptr_t slot) {
    auto* vqpdfpageselector = const_cast<VirtualQPdfPageSelector*>(dynamic_cast<const VirtualQPdfPageSelector*>(self));
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->setQPdfPageSelector_IsSignalConnected_Callback(reinterpret_cast<VirtualQPdfPageSelector::QPdfPageSelector_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double QPdfPageSelector_GetDecodedMetricF(const QPdfPageSelector* self, int metricA, int metricB) {
    auto* vqpdfpageselector = const_cast<VirtualQPdfPageSelector*>(dynamic_cast<const VirtualQPdfPageSelector*>(self));
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        return vqpdfpageselector->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualQPdfPageSelector*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double QPdfPageSelector_QBaseGetDecodedMetricF(const QPdfPageSelector* self, int metricA, int metricB) {
    auto* vqpdfpageselector = const_cast<VirtualQPdfPageSelector*>(dynamic_cast<const VirtualQPdfPageSelector*>(self));
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->setQPdfPageSelector_GetDecodedMetricF_IsBase(true);
        return vqpdfpageselector->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualQPdfPageSelector*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfPageSelector_OnGetDecodedMetricF(const QPdfPageSelector* self, intptr_t slot) {
    auto* vqpdfpageselector = const_cast<VirtualQPdfPageSelector*>(dynamic_cast<const VirtualQPdfPageSelector*>(self));
    if (vqpdfpageselector && vqpdfpageselector->isVirtualQPdfPageSelector) {
        vqpdfpageselector->setQPdfPageSelector_GetDecodedMetricF_Callback(reinterpret_cast<VirtualQPdfPageSelector::QPdfPageSelector_GetDecodedMetricF_Callback>(slot));
    }
}

void QPdfPageSelector_Delete(QPdfPageSelector* self) {
    delete self;
}
