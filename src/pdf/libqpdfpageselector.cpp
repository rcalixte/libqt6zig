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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QPdfPageSelector_Tr(const char* s) {
    auto _ret = QPdfPageSelector::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
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
    auto _ret = self->currentPageLabel();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
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
    QPdfPageSelector::connect(self,
                              static_cast<void (QPdfPageSelector::*)(QPdfDocument*)>(&QPdfPageSelector::documentChanged),
                              [self, slotFunc](QPdfDocument* document) {
                                  QPdfDocument* sigval1 = document;
                                  slotFunc(self, sigval1);
                              });
}

void QPdfPageSelector_CurrentPageChanged(QPdfPageSelector* self, int index) {
    self->currentPageChanged(static_cast<int>(index));
}

void QPdfPageSelector_Connect_CurrentPageChanged(QPdfPageSelector* self, intptr_t slot) {
    void (*slotFunc)(QPdfPageSelector*, int) = reinterpret_cast<void (*)(QPdfPageSelector*, int)>(slot);
    QPdfPageSelector::connect(self,
                              static_cast<void (QPdfPageSelector::*)(int)>(&QPdfPageSelector::currentPageChanged),
                              [self, slotFunc](int index) {
                                  int sigval1 = index;
                                  slotFunc(self, sigval1);
                              });
}

void QPdfPageSelector_CurrentPageLabelChanged(QPdfPageSelector* self, const libqt_string label) {
    QString label_QString = QString::fromUtf8(label.data, label.len);
    self->currentPageLabelChanged(label_QString);
}

void QPdfPageSelector_Connect_CurrentPageLabelChanged(QPdfPageSelector* self, intptr_t slot) {
    void (*slotFunc)(QPdfPageSelector*, const char*) = reinterpret_cast<void (*)(QPdfPageSelector*, const char*)>(slot);
    QPdfPageSelector::connect(self,
                              static_cast<void (QPdfPageSelector::*)(const QString&)>(&QPdfPageSelector::currentPageLabelChanged),
                              [self, slotFunc](const QString& label) {
                                  const auto label_ret = label;
                                  // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                                  QByteArray label_b = label_ret.toUtf8();
                                  auto label_str_len = label_b.length();
                                  const char* label_str = static_cast<const char*>(malloc(label_str_len + 1));
                                  memcpy((void*)label_str, label_b.data(), label_str_len);
                                  ((char*)label_str)[label_str_len] = '\0';
                                  const char* sigval1 = label_str;
                                  slotFunc(self, sigval1);
                                  libqt_free(label_str);
                              });
}

libqt_string QPdfPageSelector_Tr2(const char* s, const char* c) {
    auto _ret = QPdfPageSelector::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QPdfPageSelector_Tr3(const char* s, const char* c, int n) {
    auto _ret = QPdfPageSelector::tr(s, c, static_cast<int>(n));
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
QMetaObject* QPdfPageSelector_SuperMetaObject(const QPdfPageSelector* self) {
    return (QMetaObject*)self->QPdfPageSelector::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QPdfPageSelector_OnMetaObject(QPdfPageSelector* self, intptr_t slot) {
    if (auto* vqpdfpageselector = const_cast<VirtualQPdfPageSelector*>(dynamic_cast<const VirtualQPdfPageSelector*>(self)))
        vqpdfpageselector->qpdfpageselector_metaobject_callback = reinterpret_cast<VirtualQPdfPageSelector::QPdfPageSelector_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QPdfPageSelector_SuperMetacast(QPdfPageSelector* self, const char* param1) {
    return self->QPdfPageSelector::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QPdfPageSelector_OnMetacast(QPdfPageSelector* self, intptr_t slot) {
    if (auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self))
        vqpdfpageselector->qpdfpageselector_metacast_callback = reinterpret_cast<VirtualQPdfPageSelector::QPdfPageSelector_Metacast_Callback>(slot);
}

// Base class handler implementation
int QPdfPageSelector_SuperMetacall(QPdfPageSelector* self, int param1, int param2, void** param3) {
    return self->QPdfPageSelector::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QPdfPageSelector_OnMetacall(QPdfPageSelector* self, intptr_t slot) {
    if (auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self))
        vqpdfpageselector->qpdfpageselector_metacall_callback = reinterpret_cast<VirtualQPdfPageSelector::QPdfPageSelector_Metacall_Callback>(slot);
}

// Derived class handler implementation
int QPdfPageSelector_DevType(const QPdfPageSelector* self) {
    return self->devType();
}

// Base class handler implementation
int QPdfPageSelector_SuperDevType(const QPdfPageSelector* self) {
    return self->QPdfPageSelector::devType();
}

// Auxiliary method to allow providing re-implementation
void QPdfPageSelector_OnDevType(QPdfPageSelector* self, intptr_t slot) {
    if (auto* vqpdfpageselector = const_cast<VirtualQPdfPageSelector*>(dynamic_cast<const VirtualQPdfPageSelector*>(self)))
        vqpdfpageselector->qpdfpageselector_devtype_callback = reinterpret_cast<VirtualQPdfPageSelector::QPdfPageSelector_DevType_Callback>(slot);
}

// Derived class handler implementation
void QPdfPageSelector_SetVisible(QPdfPageSelector* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void QPdfPageSelector_SuperSetVisible(QPdfPageSelector* self, bool visible) {
    self->QPdfPageSelector::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void QPdfPageSelector_OnSetVisible(QPdfPageSelector* self, intptr_t slot) {
    if (auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self))
        vqpdfpageselector->qpdfpageselector_setvisible_callback = reinterpret_cast<VirtualQPdfPageSelector::QPdfPageSelector_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* QPdfPageSelector_SizeHint(const QPdfPageSelector* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* QPdfPageSelector_SuperSizeHint(const QPdfPageSelector* self) {
    return new QSize(self->QPdfPageSelector::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void QPdfPageSelector_OnSizeHint(QPdfPageSelector* self, intptr_t slot) {
    if (auto* vqpdfpageselector = const_cast<VirtualQPdfPageSelector*>(dynamic_cast<const VirtualQPdfPageSelector*>(self)))
        vqpdfpageselector->qpdfpageselector_sizehint_callback = reinterpret_cast<VirtualQPdfPageSelector::QPdfPageSelector_SizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* QPdfPageSelector_MinimumSizeHint(const QPdfPageSelector* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* QPdfPageSelector_SuperMinimumSizeHint(const QPdfPageSelector* self) {
    return new QSize(self->QPdfPageSelector::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void QPdfPageSelector_OnMinimumSizeHint(QPdfPageSelector* self, intptr_t slot) {
    if (auto* vqpdfpageselector = const_cast<VirtualQPdfPageSelector*>(dynamic_cast<const VirtualQPdfPageSelector*>(self)))
        vqpdfpageselector->qpdfpageselector_minimumsizehint_callback = reinterpret_cast<VirtualQPdfPageSelector::QPdfPageSelector_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
int QPdfPageSelector_HeightForWidth(const QPdfPageSelector* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int QPdfPageSelector_SuperHeightForWidth(const QPdfPageSelector* self, int param1) {
    return self->QPdfPageSelector::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void QPdfPageSelector_OnHeightForWidth(QPdfPageSelector* self, intptr_t slot) {
    if (auto* vqpdfpageselector = const_cast<VirtualQPdfPageSelector*>(dynamic_cast<const VirtualQPdfPageSelector*>(self)))
        vqpdfpageselector->qpdfpageselector_heightforwidth_callback = reinterpret_cast<VirtualQPdfPageSelector::QPdfPageSelector_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool QPdfPageSelector_HasHeightForWidth(const QPdfPageSelector* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool QPdfPageSelector_SuperHasHeightForWidth(const QPdfPageSelector* self) {
    return self->QPdfPageSelector::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void QPdfPageSelector_OnHasHeightForWidth(QPdfPageSelector* self, intptr_t slot) {
    if (auto* vqpdfpageselector = const_cast<VirtualQPdfPageSelector*>(dynamic_cast<const VirtualQPdfPageSelector*>(self)))
        vqpdfpageselector->qpdfpageselector_hasheightforwidth_callback = reinterpret_cast<VirtualQPdfPageSelector::QPdfPageSelector_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* QPdfPageSelector_PaintEngine(const QPdfPageSelector* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* QPdfPageSelector_SuperPaintEngine(const QPdfPageSelector* self) {
    return self->QPdfPageSelector::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void QPdfPageSelector_OnPaintEngine(QPdfPageSelector* self, intptr_t slot) {
    if (auto* vqpdfpageselector = const_cast<VirtualQPdfPageSelector*>(dynamic_cast<const VirtualQPdfPageSelector*>(self)))
        vqpdfpageselector->qpdfpageselector_paintengine_callback = reinterpret_cast<VirtualQPdfPageSelector::QPdfPageSelector_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
bool QPdfPageSelector_Event(QPdfPageSelector* self, QEvent* event) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector) {
        return vqpdfpageselector->event(event);
    } else {
        qFatal("Error: Protected virtual method QPdfPageSelector::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool QPdfPageSelector_SuperEvent(QPdfPageSelector* self, QEvent* event) {
    if (auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self)) {
        return vqpdfpageselector->QPdfPageSelector::event(event);
    } else
        qFatal("Error: Protected virtual method QPdfPageSelector::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPdfPageSelector_OnEvent(QPdfPageSelector* self, intptr_t slot) {
    if (auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self))
        vqpdfpageselector->qpdfpageselector_event_callback = reinterpret_cast<VirtualQPdfPageSelector::QPdfPageSelector_Event_Callback>(slot);
}

// Derived class handler implementation
void QPdfPageSelector_MousePressEvent(QPdfPageSelector* self, QMouseEvent* event) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector) {
        vqpdfpageselector->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPdfPageSelector::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPdfPageSelector_SuperMousePressEvent(QPdfPageSelector* self, QMouseEvent* event) {
    if (auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self)) {
        vqpdfpageselector->QPdfPageSelector::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method QPdfPageSelector::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPdfPageSelector_OnMousePressEvent(QPdfPageSelector* self, intptr_t slot) {
    if (auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self))
        vqpdfpageselector->qpdfpageselector_mousepressevent_callback = reinterpret_cast<VirtualQPdfPageSelector::QPdfPageSelector_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void QPdfPageSelector_MouseReleaseEvent(QPdfPageSelector* self, QMouseEvent* event) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector) {
        vqpdfpageselector->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPdfPageSelector::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPdfPageSelector_SuperMouseReleaseEvent(QPdfPageSelector* self, QMouseEvent* event) {
    if (auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self)) {
        vqpdfpageselector->QPdfPageSelector::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QPdfPageSelector::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPdfPageSelector_OnMouseReleaseEvent(QPdfPageSelector* self, intptr_t slot) {
    if (auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self))
        vqpdfpageselector->qpdfpageselector_mousereleaseevent_callback = reinterpret_cast<VirtualQPdfPageSelector::QPdfPageSelector_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QPdfPageSelector_MouseDoubleClickEvent(QPdfPageSelector* self, QMouseEvent* event) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector) {
        vqpdfpageselector->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPdfPageSelector::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPdfPageSelector_SuperMouseDoubleClickEvent(QPdfPageSelector* self, QMouseEvent* event) {
    if (auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self)) {
        vqpdfpageselector->QPdfPageSelector::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method QPdfPageSelector::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPdfPageSelector_OnMouseDoubleClickEvent(QPdfPageSelector* self, intptr_t slot) {
    if (auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self))
        vqpdfpageselector->qpdfpageselector_mousedoubleclickevent_callback = reinterpret_cast<VirtualQPdfPageSelector::QPdfPageSelector_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void QPdfPageSelector_MouseMoveEvent(QPdfPageSelector* self, QMouseEvent* event) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector) {
        vqpdfpageselector->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPdfPageSelector::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPdfPageSelector_SuperMouseMoveEvent(QPdfPageSelector* self, QMouseEvent* event) {
    if (auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self)) {
        vqpdfpageselector->QPdfPageSelector::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QPdfPageSelector::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPdfPageSelector_OnMouseMoveEvent(QPdfPageSelector* self, intptr_t slot) {
    if (auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self))
        vqpdfpageselector->qpdfpageselector_mousemoveevent_callback = reinterpret_cast<VirtualQPdfPageSelector::QPdfPageSelector_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QPdfPageSelector_WheelEvent(QPdfPageSelector* self, QWheelEvent* event) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector) {
        vqpdfpageselector->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPdfPageSelector::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPdfPageSelector_SuperWheelEvent(QPdfPageSelector* self, QWheelEvent* event) {
    if (auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self)) {
        vqpdfpageselector->QPdfPageSelector::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method QPdfPageSelector::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPdfPageSelector_OnWheelEvent(QPdfPageSelector* self, intptr_t slot) {
    if (auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self))
        vqpdfpageselector->qpdfpageselector_wheelevent_callback = reinterpret_cast<VirtualQPdfPageSelector::QPdfPageSelector_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void QPdfPageSelector_KeyPressEvent(QPdfPageSelector* self, QKeyEvent* event) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector) {
        vqpdfpageselector->keyPressEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPdfPageSelector::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPdfPageSelector_SuperKeyPressEvent(QPdfPageSelector* self, QKeyEvent* event) {
    if (auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self)) {
        vqpdfpageselector->QPdfPageSelector::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method QPdfPageSelector::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPdfPageSelector_OnKeyPressEvent(QPdfPageSelector* self, intptr_t slot) {
    if (auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self))
        vqpdfpageselector->qpdfpageselector_keypressevent_callback = reinterpret_cast<VirtualQPdfPageSelector::QPdfPageSelector_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void QPdfPageSelector_KeyReleaseEvent(QPdfPageSelector* self, QKeyEvent* event) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector) {
        vqpdfpageselector->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPdfPageSelector::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPdfPageSelector_SuperKeyReleaseEvent(QPdfPageSelector* self, QKeyEvent* event) {
    if (auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self)) {
        vqpdfpageselector->QPdfPageSelector::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QPdfPageSelector::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPdfPageSelector_OnKeyReleaseEvent(QPdfPageSelector* self, intptr_t slot) {
    if (auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self))
        vqpdfpageselector->qpdfpageselector_keyreleaseevent_callback = reinterpret_cast<VirtualQPdfPageSelector::QPdfPageSelector_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QPdfPageSelector_FocusInEvent(QPdfPageSelector* self, QFocusEvent* event) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector) {
        vqpdfpageselector->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPdfPageSelector::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPdfPageSelector_SuperFocusInEvent(QPdfPageSelector* self, QFocusEvent* event) {
    if (auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self)) {
        vqpdfpageselector->QPdfPageSelector::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method QPdfPageSelector::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPdfPageSelector_OnFocusInEvent(QPdfPageSelector* self, intptr_t slot) {
    if (auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self))
        vqpdfpageselector->qpdfpageselector_focusinevent_callback = reinterpret_cast<VirtualQPdfPageSelector::QPdfPageSelector_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void QPdfPageSelector_FocusOutEvent(QPdfPageSelector* self, QFocusEvent* event) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector) {
        vqpdfpageselector->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPdfPageSelector::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPdfPageSelector_SuperFocusOutEvent(QPdfPageSelector* self, QFocusEvent* event) {
    if (auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self)) {
        vqpdfpageselector->QPdfPageSelector::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method QPdfPageSelector::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPdfPageSelector_OnFocusOutEvent(QPdfPageSelector* self, intptr_t slot) {
    if (auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self))
        vqpdfpageselector->qpdfpageselector_focusoutevent_callback = reinterpret_cast<VirtualQPdfPageSelector::QPdfPageSelector_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void QPdfPageSelector_EnterEvent(QPdfPageSelector* self, QEnterEvent* event) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector) {
        vqpdfpageselector->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPdfPageSelector::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPdfPageSelector_SuperEnterEvent(QPdfPageSelector* self, QEnterEvent* event) {
    if (auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self)) {
        vqpdfpageselector->QPdfPageSelector::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method QPdfPageSelector::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPdfPageSelector_OnEnterEvent(QPdfPageSelector* self, intptr_t slot) {
    if (auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self))
        vqpdfpageselector->qpdfpageselector_enterevent_callback = reinterpret_cast<VirtualQPdfPageSelector::QPdfPageSelector_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QPdfPageSelector_LeaveEvent(QPdfPageSelector* self, QEvent* event) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector) {
        vqpdfpageselector->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPdfPageSelector::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPdfPageSelector_SuperLeaveEvent(QPdfPageSelector* self, QEvent* event) {
    if (auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self)) {
        vqpdfpageselector->QPdfPageSelector::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QPdfPageSelector::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPdfPageSelector_OnLeaveEvent(QPdfPageSelector* self, intptr_t slot) {
    if (auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self))
        vqpdfpageselector->qpdfpageselector_leaveevent_callback = reinterpret_cast<VirtualQPdfPageSelector::QPdfPageSelector_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QPdfPageSelector_PaintEvent(QPdfPageSelector* self, QPaintEvent* event) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector) {
        vqpdfpageselector->paintEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPdfPageSelector::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPdfPageSelector_SuperPaintEvent(QPdfPageSelector* self, QPaintEvent* event) {
    if (auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self)) {
        vqpdfpageselector->QPdfPageSelector::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method QPdfPageSelector::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPdfPageSelector_OnPaintEvent(QPdfPageSelector* self, intptr_t slot) {
    if (auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self))
        vqpdfpageselector->qpdfpageselector_paintevent_callback = reinterpret_cast<VirtualQPdfPageSelector::QPdfPageSelector_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void QPdfPageSelector_MoveEvent(QPdfPageSelector* self, QMoveEvent* event) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector) {
        vqpdfpageselector->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPdfPageSelector::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPdfPageSelector_SuperMoveEvent(QPdfPageSelector* self, QMoveEvent* event) {
    if (auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self)) {
        vqpdfpageselector->QPdfPageSelector::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method QPdfPageSelector::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPdfPageSelector_OnMoveEvent(QPdfPageSelector* self, intptr_t slot) {
    if (auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self))
        vqpdfpageselector->qpdfpageselector_moveevent_callback = reinterpret_cast<VirtualQPdfPageSelector::QPdfPageSelector_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QPdfPageSelector_ResizeEvent(QPdfPageSelector* self, QResizeEvent* event) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector) {
        vqpdfpageselector->resizeEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPdfPageSelector::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPdfPageSelector_SuperResizeEvent(QPdfPageSelector* self, QResizeEvent* event) {
    if (auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self)) {
        vqpdfpageselector->QPdfPageSelector::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method QPdfPageSelector::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPdfPageSelector_OnResizeEvent(QPdfPageSelector* self, intptr_t slot) {
    if (auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self))
        vqpdfpageselector->qpdfpageselector_resizeevent_callback = reinterpret_cast<VirtualQPdfPageSelector::QPdfPageSelector_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void QPdfPageSelector_CloseEvent(QPdfPageSelector* self, QCloseEvent* event) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector) {
        vqpdfpageselector->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPdfPageSelector::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPdfPageSelector_SuperCloseEvent(QPdfPageSelector* self, QCloseEvent* event) {
    if (auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self)) {
        vqpdfpageselector->QPdfPageSelector::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method QPdfPageSelector::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPdfPageSelector_OnCloseEvent(QPdfPageSelector* self, intptr_t slot) {
    if (auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self))
        vqpdfpageselector->qpdfpageselector_closeevent_callback = reinterpret_cast<VirtualQPdfPageSelector::QPdfPageSelector_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void QPdfPageSelector_ContextMenuEvent(QPdfPageSelector* self, QContextMenuEvent* event) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector) {
        vqpdfpageselector->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPdfPageSelector::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPdfPageSelector_SuperContextMenuEvent(QPdfPageSelector* self, QContextMenuEvent* event) {
    if (auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self)) {
        vqpdfpageselector->QPdfPageSelector::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method QPdfPageSelector::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPdfPageSelector_OnContextMenuEvent(QPdfPageSelector* self, intptr_t slot) {
    if (auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self))
        vqpdfpageselector->qpdfpageselector_contextmenuevent_callback = reinterpret_cast<VirtualQPdfPageSelector::QPdfPageSelector_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void QPdfPageSelector_TabletEvent(QPdfPageSelector* self, QTabletEvent* event) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector) {
        vqpdfpageselector->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPdfPageSelector::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPdfPageSelector_SuperTabletEvent(QPdfPageSelector* self, QTabletEvent* event) {
    if (auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self)) {
        vqpdfpageselector->QPdfPageSelector::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method QPdfPageSelector::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPdfPageSelector_OnTabletEvent(QPdfPageSelector* self, intptr_t slot) {
    if (auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self))
        vqpdfpageselector->qpdfpageselector_tabletevent_callback = reinterpret_cast<VirtualQPdfPageSelector::QPdfPageSelector_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void QPdfPageSelector_ActionEvent(QPdfPageSelector* self, QActionEvent* event) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector) {
        vqpdfpageselector->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPdfPageSelector::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPdfPageSelector_SuperActionEvent(QPdfPageSelector* self, QActionEvent* event) {
    if (auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self)) {
        vqpdfpageselector->QPdfPageSelector::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method QPdfPageSelector::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPdfPageSelector_OnActionEvent(QPdfPageSelector* self, intptr_t slot) {
    if (auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self))
        vqpdfpageselector->qpdfpageselector_actionevent_callback = reinterpret_cast<VirtualQPdfPageSelector::QPdfPageSelector_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void QPdfPageSelector_DragEnterEvent(QPdfPageSelector* self, QDragEnterEvent* event) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector) {
        vqpdfpageselector->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPdfPageSelector::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPdfPageSelector_SuperDragEnterEvent(QPdfPageSelector* self, QDragEnterEvent* event) {
    if (auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self)) {
        vqpdfpageselector->QPdfPageSelector::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method QPdfPageSelector::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPdfPageSelector_OnDragEnterEvent(QPdfPageSelector* self, intptr_t slot) {
    if (auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self))
        vqpdfpageselector->qpdfpageselector_dragenterevent_callback = reinterpret_cast<VirtualQPdfPageSelector::QPdfPageSelector_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QPdfPageSelector_DragMoveEvent(QPdfPageSelector* self, QDragMoveEvent* event) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector) {
        vqpdfpageselector->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPdfPageSelector::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPdfPageSelector_SuperDragMoveEvent(QPdfPageSelector* self, QDragMoveEvent* event) {
    if (auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self)) {
        vqpdfpageselector->QPdfPageSelector::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QPdfPageSelector::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPdfPageSelector_OnDragMoveEvent(QPdfPageSelector* self, intptr_t slot) {
    if (auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self))
        vqpdfpageselector->qpdfpageselector_dragmoveevent_callback = reinterpret_cast<VirtualQPdfPageSelector::QPdfPageSelector_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QPdfPageSelector_DragLeaveEvent(QPdfPageSelector* self, QDragLeaveEvent* event) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector) {
        vqpdfpageselector->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPdfPageSelector::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPdfPageSelector_SuperDragLeaveEvent(QPdfPageSelector* self, QDragLeaveEvent* event) {
    if (auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self)) {
        vqpdfpageselector->QPdfPageSelector::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QPdfPageSelector::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPdfPageSelector_OnDragLeaveEvent(QPdfPageSelector* self, intptr_t slot) {
    if (auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self))
        vqpdfpageselector->qpdfpageselector_dragleaveevent_callback = reinterpret_cast<VirtualQPdfPageSelector::QPdfPageSelector_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QPdfPageSelector_DropEvent(QPdfPageSelector* self, QDropEvent* event) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector) {
        vqpdfpageselector->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPdfPageSelector::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPdfPageSelector_SuperDropEvent(QPdfPageSelector* self, QDropEvent* event) {
    if (auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self)) {
        vqpdfpageselector->QPdfPageSelector::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method QPdfPageSelector::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPdfPageSelector_OnDropEvent(QPdfPageSelector* self, intptr_t slot) {
    if (auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self))
        vqpdfpageselector->qpdfpageselector_dropevent_callback = reinterpret_cast<VirtualQPdfPageSelector::QPdfPageSelector_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void QPdfPageSelector_ShowEvent(QPdfPageSelector* self, QShowEvent* event) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector) {
        vqpdfpageselector->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPdfPageSelector::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPdfPageSelector_SuperShowEvent(QPdfPageSelector* self, QShowEvent* event) {
    if (auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self)) {
        vqpdfpageselector->QPdfPageSelector::showEvent(event);
    } else
        qFatal("Error: Protected virtual method QPdfPageSelector::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPdfPageSelector_OnShowEvent(QPdfPageSelector* self, intptr_t slot) {
    if (auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self))
        vqpdfpageselector->qpdfpageselector_showevent_callback = reinterpret_cast<VirtualQPdfPageSelector::QPdfPageSelector_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void QPdfPageSelector_HideEvent(QPdfPageSelector* self, QHideEvent* event) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector) {
        vqpdfpageselector->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPdfPageSelector::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPdfPageSelector_SuperHideEvent(QPdfPageSelector* self, QHideEvent* event) {
    if (auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self)) {
        vqpdfpageselector->QPdfPageSelector::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method QPdfPageSelector::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPdfPageSelector_OnHideEvent(QPdfPageSelector* self, intptr_t slot) {
    if (auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self))
        vqpdfpageselector->qpdfpageselector_hideevent_callback = reinterpret_cast<VirtualQPdfPageSelector::QPdfPageSelector_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool QPdfPageSelector_NativeEvent(QPdfPageSelector* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector) {
        return vqpdfpageselector->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method QPdfPageSelector::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool QPdfPageSelector_SuperNativeEvent(QPdfPageSelector* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self)) {
        return vqpdfpageselector->QPdfPageSelector::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method QPdfPageSelector::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPdfPageSelector_OnNativeEvent(QPdfPageSelector* self, intptr_t slot) {
    if (auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self))
        vqpdfpageselector->qpdfpageselector_nativeevent_callback = reinterpret_cast<VirtualQPdfPageSelector::QPdfPageSelector_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
void QPdfPageSelector_ChangeEvent(QPdfPageSelector* self, QEvent* param1) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector) {
        vqpdfpageselector->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QPdfPageSelector::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPdfPageSelector_SuperChangeEvent(QPdfPageSelector* self, QEvent* param1) {
    if (auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self)) {
        vqpdfpageselector->QPdfPageSelector::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method QPdfPageSelector::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPdfPageSelector_OnChangeEvent(QPdfPageSelector* self, intptr_t slot) {
    if (auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self))
        vqpdfpageselector->qpdfpageselector_changeevent_callback = reinterpret_cast<VirtualQPdfPageSelector::QPdfPageSelector_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
int QPdfPageSelector_Metric(const QPdfPageSelector* self, int param1) {
    auto* vqpdfpageselector = const_cast<VirtualQPdfPageSelector*>(dynamic_cast<const VirtualQPdfPageSelector*>(self));
    if (vqpdfpageselector) {
        return vqpdfpageselector->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method QPdfPageSelector::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int QPdfPageSelector_SuperMetric(const QPdfPageSelector* self, int param1) {
    if (auto* vqpdfpageselector = const_cast<VirtualQPdfPageSelector*>(dynamic_cast<const VirtualQPdfPageSelector*>(self))) {
        return vqpdfpageselector->QPdfPageSelector::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method QPdfPageSelector::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPdfPageSelector_OnMetric(QPdfPageSelector* self, intptr_t slot) {
    if (auto* vqpdfpageselector = const_cast<VirtualQPdfPageSelector*>(dynamic_cast<const VirtualQPdfPageSelector*>(self)))
        vqpdfpageselector->qpdfpageselector_metric_callback = reinterpret_cast<VirtualQPdfPageSelector::QPdfPageSelector_Metric_Callback>(slot);
}

// Derived class handler implementation
void QPdfPageSelector_InitPainter(const QPdfPageSelector* self, QPainter* painter) {
    auto* vqpdfpageselector = const_cast<VirtualQPdfPageSelector*>(dynamic_cast<const VirtualQPdfPageSelector*>(self));
    if (vqpdfpageselector) {
        vqpdfpageselector->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method QPdfPageSelector::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void QPdfPageSelector_SuperInitPainter(const QPdfPageSelector* self, QPainter* painter) {
    if (auto* vqpdfpageselector = const_cast<VirtualQPdfPageSelector*>(dynamic_cast<const VirtualQPdfPageSelector*>(self))) {
        vqpdfpageselector->QPdfPageSelector::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method QPdfPageSelector::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPdfPageSelector_OnInitPainter(QPdfPageSelector* self, intptr_t slot) {
    if (auto* vqpdfpageselector = const_cast<VirtualQPdfPageSelector*>(dynamic_cast<const VirtualQPdfPageSelector*>(self)))
        vqpdfpageselector->qpdfpageselector_initpainter_callback = reinterpret_cast<VirtualQPdfPageSelector::QPdfPageSelector_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* QPdfPageSelector_Redirected(const QPdfPageSelector* self, QPoint* offset) {
    auto* vqpdfpageselector = const_cast<VirtualQPdfPageSelector*>(dynamic_cast<const VirtualQPdfPageSelector*>(self));
    if (vqpdfpageselector) {
        return vqpdfpageselector->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method QPdfPageSelector::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* QPdfPageSelector_SuperRedirected(const QPdfPageSelector* self, QPoint* offset) {
    if (auto* vqpdfpageselector = const_cast<VirtualQPdfPageSelector*>(dynamic_cast<const VirtualQPdfPageSelector*>(self))) {
        return vqpdfpageselector->QPdfPageSelector::redirected(offset);
    } else
        qFatal("Error: Protected virtual method QPdfPageSelector::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPdfPageSelector_OnRedirected(QPdfPageSelector* self, intptr_t slot) {
    if (auto* vqpdfpageselector = const_cast<VirtualQPdfPageSelector*>(dynamic_cast<const VirtualQPdfPageSelector*>(self)))
        vqpdfpageselector->qpdfpageselector_redirected_callback = reinterpret_cast<VirtualQPdfPageSelector::QPdfPageSelector_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* QPdfPageSelector_SharedPainter(const QPdfPageSelector* self) {
    auto* vqpdfpageselector = const_cast<VirtualQPdfPageSelector*>(dynamic_cast<const VirtualQPdfPageSelector*>(self));
    if (vqpdfpageselector) {
        return vqpdfpageselector->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method QPdfPageSelector::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* QPdfPageSelector_SuperSharedPainter(const QPdfPageSelector* self) {
    if (auto* vqpdfpageselector = const_cast<VirtualQPdfPageSelector*>(dynamic_cast<const VirtualQPdfPageSelector*>(self))) {
        return vqpdfpageselector->QPdfPageSelector::sharedPainter();
    } else
        qFatal("Error: Protected virtual method QPdfPageSelector::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPdfPageSelector_OnSharedPainter(QPdfPageSelector* self, intptr_t slot) {
    if (auto* vqpdfpageselector = const_cast<VirtualQPdfPageSelector*>(dynamic_cast<const VirtualQPdfPageSelector*>(self)))
        vqpdfpageselector->qpdfpageselector_sharedpainter_callback = reinterpret_cast<VirtualQPdfPageSelector::QPdfPageSelector_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void QPdfPageSelector_InputMethodEvent(QPdfPageSelector* self, QInputMethodEvent* param1) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector) {
        vqpdfpageselector->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QPdfPageSelector::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPdfPageSelector_SuperInputMethodEvent(QPdfPageSelector* self, QInputMethodEvent* param1) {
    if (auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self)) {
        vqpdfpageselector->QPdfPageSelector::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method QPdfPageSelector::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPdfPageSelector_OnInputMethodEvent(QPdfPageSelector* self, intptr_t slot) {
    if (auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self))
        vqpdfpageselector->qpdfpageselector_inputmethodevent_callback = reinterpret_cast<VirtualQPdfPageSelector::QPdfPageSelector_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* QPdfPageSelector_InputMethodQuery(const QPdfPageSelector* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* QPdfPageSelector_SuperInputMethodQuery(const QPdfPageSelector* self, int param1) {
    return new QVariant(self->QPdfPageSelector::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void QPdfPageSelector_OnInputMethodQuery(QPdfPageSelector* self, intptr_t slot) {
    if (auto* vqpdfpageselector = const_cast<VirtualQPdfPageSelector*>(dynamic_cast<const VirtualQPdfPageSelector*>(self)))
        vqpdfpageselector->qpdfpageselector_inputmethodquery_callback = reinterpret_cast<VirtualQPdfPageSelector::QPdfPageSelector_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool QPdfPageSelector_FocusNextPrevChild(QPdfPageSelector* self, bool next) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector) {
        return vqpdfpageselector->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method QPdfPageSelector::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool QPdfPageSelector_SuperFocusNextPrevChild(QPdfPageSelector* self, bool next) {
    if (auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self)) {
        return vqpdfpageselector->QPdfPageSelector::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method QPdfPageSelector::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPdfPageSelector_OnFocusNextPrevChild(QPdfPageSelector* self, intptr_t slot) {
    if (auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self))
        vqpdfpageselector->qpdfpageselector_focusnextprevchild_callback = reinterpret_cast<VirtualQPdfPageSelector::QPdfPageSelector_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
bool QPdfPageSelector_EventFilter(QPdfPageSelector* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QPdfPageSelector_SuperEventFilter(QPdfPageSelector* self, QObject* watched, QEvent* event) {
    return self->QPdfPageSelector::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QPdfPageSelector_OnEventFilter(QPdfPageSelector* self, intptr_t slot) {
    if (auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self))
        vqpdfpageselector->qpdfpageselector_eventfilter_callback = reinterpret_cast<VirtualQPdfPageSelector::QPdfPageSelector_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QPdfPageSelector_TimerEvent(QPdfPageSelector* self, QTimerEvent* event) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector) {
        vqpdfpageselector->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPdfPageSelector::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPdfPageSelector_SuperTimerEvent(QPdfPageSelector* self, QTimerEvent* event) {
    if (auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self)) {
        vqpdfpageselector->QPdfPageSelector::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QPdfPageSelector::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPdfPageSelector_OnTimerEvent(QPdfPageSelector* self, intptr_t slot) {
    if (auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self))
        vqpdfpageselector->qpdfpageselector_timerevent_callback = reinterpret_cast<VirtualQPdfPageSelector::QPdfPageSelector_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QPdfPageSelector_ChildEvent(QPdfPageSelector* self, QChildEvent* event) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector) {
        vqpdfpageselector->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPdfPageSelector::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPdfPageSelector_SuperChildEvent(QPdfPageSelector* self, QChildEvent* event) {
    if (auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self)) {
        vqpdfpageselector->QPdfPageSelector::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QPdfPageSelector::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPdfPageSelector_OnChildEvent(QPdfPageSelector* self, intptr_t slot) {
    if (auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self))
        vqpdfpageselector->qpdfpageselector_childevent_callback = reinterpret_cast<VirtualQPdfPageSelector::QPdfPageSelector_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QPdfPageSelector_CustomEvent(QPdfPageSelector* self, QEvent* event) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector) {
        vqpdfpageselector->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPdfPageSelector::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPdfPageSelector_SuperCustomEvent(QPdfPageSelector* self, QEvent* event) {
    if (auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self)) {
        vqpdfpageselector->QPdfPageSelector::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QPdfPageSelector::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPdfPageSelector_OnCustomEvent(QPdfPageSelector* self, intptr_t slot) {
    if (auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self))
        vqpdfpageselector->qpdfpageselector_customevent_callback = reinterpret_cast<VirtualQPdfPageSelector::QPdfPageSelector_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QPdfPageSelector_ConnectNotify(QPdfPageSelector* self, const QMetaMethod* signal) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector) {
        vqpdfpageselector->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QPdfPageSelector::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QPdfPageSelector_SuperConnectNotify(QPdfPageSelector* self, const QMetaMethod* signal) {
    if (auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self)) {
        vqpdfpageselector->QPdfPageSelector::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QPdfPageSelector::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPdfPageSelector_OnConnectNotify(QPdfPageSelector* self, intptr_t slot) {
    if (auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self))
        vqpdfpageselector->qpdfpageselector_connectnotify_callback = reinterpret_cast<VirtualQPdfPageSelector::QPdfPageSelector_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QPdfPageSelector_DisconnectNotify(QPdfPageSelector* self, const QMetaMethod* signal) {
    auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self);
    if (vqpdfpageselector) {
        vqpdfpageselector->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QPdfPageSelector::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QPdfPageSelector_SuperDisconnectNotify(QPdfPageSelector* self, const QMetaMethod* signal) {
    if (auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self)) {
        vqpdfpageselector->QPdfPageSelector::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QPdfPageSelector::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPdfPageSelector_OnDisconnectNotify(QPdfPageSelector* self, intptr_t slot) {
    if (auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self))
        vqpdfpageselector->qpdfpageselector_disconnectnotify_callback = reinterpret_cast<VirtualQPdfPageSelector::QPdfPageSelector_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void QPdfPageSelector_UpdateMicroFocus(QPdfPageSelector* self) {
    if (auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self)) {
        vqpdfpageselector->VirtualQPdfPageSelector::updateMicroFocus();
    } else
        qFatal("Error: Protected method QPdfPageSelector::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void QPdfPageSelector_Create(QPdfPageSelector* self) {
    if (auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self)) {
        vqpdfpageselector->VirtualQPdfPageSelector::create();
    } else
        qFatal("Error: Protected method QPdfPageSelector::create called without a directly constructed type");
}

// Derived class protected handler implementation
void QPdfPageSelector_Destroy(QPdfPageSelector* self) {
    if (auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self)) {
        vqpdfpageselector->VirtualQPdfPageSelector::destroy();
    } else
        qFatal("Error: Protected method QPdfPageSelector::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool QPdfPageSelector_FocusNextChild(QPdfPageSelector* self) {
    if (auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self)) {
        return vqpdfpageselector->VirtualQPdfPageSelector::focusNextChild();
    } else
        qFatal("Error: Protected method QPdfPageSelector::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool QPdfPageSelector_FocusPreviousChild(QPdfPageSelector* self) {
    if (auto* vqpdfpageselector = dynamic_cast<VirtualQPdfPageSelector*>(self)) {
        return vqpdfpageselector->VirtualQPdfPageSelector::focusPreviousChild();
    } else
        qFatal("Error: Protected method QPdfPageSelector::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QPdfPageSelector_Sender(const QPdfPageSelector* self) {
    if (auto* vqpdfpageselector = const_cast<VirtualQPdfPageSelector*>(dynamic_cast<const VirtualQPdfPageSelector*>(self))) {
        return vqpdfpageselector->VirtualQPdfPageSelector::sender();
    } else
        qFatal("Error: Protected method QPdfPageSelector::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QPdfPageSelector_SenderSignalIndex(const QPdfPageSelector* self) {
    if (auto* vqpdfpageselector = const_cast<VirtualQPdfPageSelector*>(dynamic_cast<const VirtualQPdfPageSelector*>(self))) {
        return vqpdfpageselector->VirtualQPdfPageSelector::senderSignalIndex();
    } else
        qFatal("Error: Protected method QPdfPageSelector::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QPdfPageSelector_Receivers(const QPdfPageSelector* self, const char* signal) {
    if (auto* vqpdfpageselector = const_cast<VirtualQPdfPageSelector*>(dynamic_cast<const VirtualQPdfPageSelector*>(self))) {
        return vqpdfpageselector->VirtualQPdfPageSelector::receivers(signal);
    } else
        qFatal("Error: Protected method QPdfPageSelector::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QPdfPageSelector_IsSignalConnected(const QPdfPageSelector* self, const QMetaMethod* signal) {
    if (auto* vqpdfpageselector = const_cast<VirtualQPdfPageSelector*>(dynamic_cast<const VirtualQPdfPageSelector*>(self))) {
        return vqpdfpageselector->VirtualQPdfPageSelector::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QPdfPageSelector::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double QPdfPageSelector_GetDecodedMetricF(const QPdfPageSelector* self, int metricA, int metricB) {
    if (auto* vqpdfpageselector = const_cast<VirtualQPdfPageSelector*>(dynamic_cast<const VirtualQPdfPageSelector*>(self))) {
        return vqpdfpageselector->VirtualQPdfPageSelector::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method QPdfPageSelector::getDecodedMetricF called without a directly constructed type");
}

void QPdfPageSelector_Delete(QPdfPageSelector* self) {
    delete self;
}
