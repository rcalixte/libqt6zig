#include <KActionCollection>
#include <KShortcutsEditor>
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
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <kshortcutseditor.h>
#include "libkshortcutseditor.h"
#include "libkshortcutseditor.hxx"

KShortcutsEditor* KShortcutsEditor_new(QWidget* parent) {
    return new VirtualKShortcutsEditor(parent);
}

KShortcutsEditor* KShortcutsEditor_new2(KActionCollection* collection, QWidget* parent) {
    return new VirtualKShortcutsEditor(collection, parent);
}

KShortcutsEditor* KShortcutsEditor_new3(KActionCollection* collection, QWidget* parent, int actionTypes) {
    return new VirtualKShortcutsEditor(collection, parent, static_cast<KShortcutsEditor::ActionTypes>(actionTypes));
}

KShortcutsEditor* KShortcutsEditor_new4(KActionCollection* collection, QWidget* parent, int actionTypes, int allowLetterShortcuts) {
    return new VirtualKShortcutsEditor(collection, parent, static_cast<KShortcutsEditor::ActionTypes>(actionTypes), static_cast<KShortcutsEditor::LetterShortcuts>(allowLetterShortcuts));
}

KShortcutsEditor* KShortcutsEditor_new5(QWidget* parent, int actionTypes) {
    return new VirtualKShortcutsEditor(parent, static_cast<KShortcutsEditor::ActionTypes>(actionTypes));
}

KShortcutsEditor* KShortcutsEditor_new6(QWidget* parent, int actionTypes, int allowLetterShortcuts) {
    return new VirtualKShortcutsEditor(parent, static_cast<KShortcutsEditor::ActionTypes>(actionTypes), static_cast<KShortcutsEditor::LetterShortcuts>(allowLetterShortcuts));
}

QMetaObject* KShortcutsEditor_MetaObject(const KShortcutsEditor* self) {
    return (QMetaObject*)self->metaObject();
}

void* KShortcutsEditor_Metacast(KShortcutsEditor* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KShortcutsEditor_Metacall(KShortcutsEditor* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KShortcutsEditor_Tr(const char* s) {
    auto _ret = KShortcutsEditor::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool KShortcutsEditor_IsModified(const KShortcutsEditor* self) {
    return self->isModified();
}

void KShortcutsEditor_ClearCollections(KShortcutsEditor* self) {
    self->clearCollections();
}

void KShortcutsEditor_AddCollection(KShortcutsEditor* self, KActionCollection* param1) {
    self->addCollection(param1);
}

void KShortcutsEditor_Undo(KShortcutsEditor* self) {
    self->undo();
}

void KShortcutsEditor_Save(KShortcutsEditor* self) {
    self->save();
}

void KShortcutsEditor_SetActionTypes(KShortcutsEditor* self, int actionTypes) {
    self->setActionTypes(static_cast<KShortcutsEditor::ActionTypes>(actionTypes));
}

int KShortcutsEditor_ActionTypes(const KShortcutsEditor* self) {
    return static_cast<int>(self->actionTypes());
}

void KShortcutsEditor_KeyChange(KShortcutsEditor* self) {
    self->keyChange();
}

void KShortcutsEditor_Connect_KeyChange(KShortcutsEditor* self, intptr_t slot) {
    void (*slotFunc)(KShortcutsEditor*) = reinterpret_cast<void (*)(KShortcutsEditor*)>(slot);
    KShortcutsEditor::connect(self,
                              static_cast<void (KShortcutsEditor::*)()>(&KShortcutsEditor::keyChange),
                              [self, slotFunc]() {
                                  slotFunc(self);
                              });
}

void KShortcutsEditor_AllDefault(KShortcutsEditor* self) {
    self->allDefault();
}

libqt_string KShortcutsEditor_Tr2(const char* s, const char* c) {
    auto _ret = KShortcutsEditor::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KShortcutsEditor_Tr3(const char* s, const char* c, int n) {
    auto _ret = KShortcutsEditor::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KShortcutsEditor_AddCollection2(KShortcutsEditor* self, KActionCollection* param1, const libqt_string title) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    self->addCollection(param1, title_QString);
}

// Base class handler implementation
QMetaObject* KShortcutsEditor_SuperMetaObject(const KShortcutsEditor* self) {
    return (QMetaObject*)self->KShortcutsEditor::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KShortcutsEditor_OnMetaObject(KShortcutsEditor* self, intptr_t slot) {
    if (auto* vkshortcutseditor = const_cast<VirtualKShortcutsEditor*>(dynamic_cast<const VirtualKShortcutsEditor*>(self)))
        vkshortcutseditor->kshortcutseditor_metaobject_callback = reinterpret_cast<VirtualKShortcutsEditor::KShortcutsEditor_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KShortcutsEditor_SuperMetacast(KShortcutsEditor* self, const char* param1) {
    return self->KShortcutsEditor::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KShortcutsEditor_OnMetacast(KShortcutsEditor* self, intptr_t slot) {
    if (auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self))
        vkshortcutseditor->kshortcutseditor_metacast_callback = reinterpret_cast<VirtualKShortcutsEditor::KShortcutsEditor_Metacast_Callback>(slot);
}

// Base class handler implementation
int KShortcutsEditor_SuperMetacall(KShortcutsEditor* self, int param1, int param2, void** param3) {
    return self->KShortcutsEditor::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KShortcutsEditor_OnMetacall(KShortcutsEditor* self, intptr_t slot) {
    if (auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self))
        vkshortcutseditor->kshortcutseditor_metacall_callback = reinterpret_cast<VirtualKShortcutsEditor::KShortcutsEditor_Metacall_Callback>(slot);
}

// Derived class handler implementation
int KShortcutsEditor_DevType(const KShortcutsEditor* self) {
    return self->devType();
}

// Base class handler implementation
int KShortcutsEditor_SuperDevType(const KShortcutsEditor* self) {
    return self->KShortcutsEditor::devType();
}

// Auxiliary method to allow providing re-implementation
void KShortcutsEditor_OnDevType(KShortcutsEditor* self, intptr_t slot) {
    if (auto* vkshortcutseditor = const_cast<VirtualKShortcutsEditor*>(dynamic_cast<const VirtualKShortcutsEditor*>(self)))
        vkshortcutseditor->kshortcutseditor_devtype_callback = reinterpret_cast<VirtualKShortcutsEditor::KShortcutsEditor_DevType_Callback>(slot);
}

// Derived class handler implementation
void KShortcutsEditor_SetVisible(KShortcutsEditor* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void KShortcutsEditor_SuperSetVisible(KShortcutsEditor* self, bool visible) {
    self->KShortcutsEditor::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void KShortcutsEditor_OnSetVisible(KShortcutsEditor* self, intptr_t slot) {
    if (auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self))
        vkshortcutseditor->kshortcutseditor_setvisible_callback = reinterpret_cast<VirtualKShortcutsEditor::KShortcutsEditor_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* KShortcutsEditor_SizeHint(const KShortcutsEditor* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* KShortcutsEditor_SuperSizeHint(const KShortcutsEditor* self) {
    return new QSize(self->KShortcutsEditor::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void KShortcutsEditor_OnSizeHint(KShortcutsEditor* self, intptr_t slot) {
    if (auto* vkshortcutseditor = const_cast<VirtualKShortcutsEditor*>(dynamic_cast<const VirtualKShortcutsEditor*>(self)))
        vkshortcutseditor->kshortcutseditor_sizehint_callback = reinterpret_cast<VirtualKShortcutsEditor::KShortcutsEditor_SizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* KShortcutsEditor_MinimumSizeHint(const KShortcutsEditor* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* KShortcutsEditor_SuperMinimumSizeHint(const KShortcutsEditor* self) {
    return new QSize(self->KShortcutsEditor::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void KShortcutsEditor_OnMinimumSizeHint(KShortcutsEditor* self, intptr_t slot) {
    if (auto* vkshortcutseditor = const_cast<VirtualKShortcutsEditor*>(dynamic_cast<const VirtualKShortcutsEditor*>(self)))
        vkshortcutseditor->kshortcutseditor_minimumsizehint_callback = reinterpret_cast<VirtualKShortcutsEditor::KShortcutsEditor_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
int KShortcutsEditor_HeightForWidth(const KShortcutsEditor* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int KShortcutsEditor_SuperHeightForWidth(const KShortcutsEditor* self, int param1) {
    return self->KShortcutsEditor::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void KShortcutsEditor_OnHeightForWidth(KShortcutsEditor* self, intptr_t slot) {
    if (auto* vkshortcutseditor = const_cast<VirtualKShortcutsEditor*>(dynamic_cast<const VirtualKShortcutsEditor*>(self)))
        vkshortcutseditor->kshortcutseditor_heightforwidth_callback = reinterpret_cast<VirtualKShortcutsEditor::KShortcutsEditor_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool KShortcutsEditor_HasHeightForWidth(const KShortcutsEditor* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool KShortcutsEditor_SuperHasHeightForWidth(const KShortcutsEditor* self) {
    return self->KShortcutsEditor::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void KShortcutsEditor_OnHasHeightForWidth(KShortcutsEditor* self, intptr_t slot) {
    if (auto* vkshortcutseditor = const_cast<VirtualKShortcutsEditor*>(dynamic_cast<const VirtualKShortcutsEditor*>(self)))
        vkshortcutseditor->kshortcutseditor_hasheightforwidth_callback = reinterpret_cast<VirtualKShortcutsEditor::KShortcutsEditor_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* KShortcutsEditor_PaintEngine(const KShortcutsEditor* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* KShortcutsEditor_SuperPaintEngine(const KShortcutsEditor* self) {
    return self->KShortcutsEditor::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void KShortcutsEditor_OnPaintEngine(KShortcutsEditor* self, intptr_t slot) {
    if (auto* vkshortcutseditor = const_cast<VirtualKShortcutsEditor*>(dynamic_cast<const VirtualKShortcutsEditor*>(self)))
        vkshortcutseditor->kshortcutseditor_paintengine_callback = reinterpret_cast<VirtualKShortcutsEditor::KShortcutsEditor_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
bool KShortcutsEditor_Event(KShortcutsEditor* self, QEvent* event) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor) {
        return vkshortcutseditor->event(event);
    } else {
        qFatal("Error: Protected virtual method KShortcutsEditor::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool KShortcutsEditor_SuperEvent(KShortcutsEditor* self, QEvent* event) {
    if (auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self)) {
        return vkshortcutseditor->KShortcutsEditor::event(event);
    } else
        qFatal("Error: Protected virtual method KShortcutsEditor::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KShortcutsEditor_OnEvent(KShortcutsEditor* self, intptr_t slot) {
    if (auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self))
        vkshortcutseditor->kshortcutseditor_event_callback = reinterpret_cast<VirtualKShortcutsEditor::KShortcutsEditor_Event_Callback>(slot);
}

// Derived class handler implementation
void KShortcutsEditor_MousePressEvent(KShortcutsEditor* self, QMouseEvent* event) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor) {
        vkshortcutseditor->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method KShortcutsEditor::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KShortcutsEditor_SuperMousePressEvent(KShortcutsEditor* self, QMouseEvent* event) {
    if (auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self)) {
        vkshortcutseditor->KShortcutsEditor::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method KShortcutsEditor::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KShortcutsEditor_OnMousePressEvent(KShortcutsEditor* self, intptr_t slot) {
    if (auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self))
        vkshortcutseditor->kshortcutseditor_mousepressevent_callback = reinterpret_cast<VirtualKShortcutsEditor::KShortcutsEditor_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void KShortcutsEditor_MouseReleaseEvent(KShortcutsEditor* self, QMouseEvent* event) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor) {
        vkshortcutseditor->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KShortcutsEditor::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KShortcutsEditor_SuperMouseReleaseEvent(KShortcutsEditor* self, QMouseEvent* event) {
    if (auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self)) {
        vkshortcutseditor->KShortcutsEditor::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KShortcutsEditor::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KShortcutsEditor_OnMouseReleaseEvent(KShortcutsEditor* self, intptr_t slot) {
    if (auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self))
        vkshortcutseditor->kshortcutseditor_mousereleaseevent_callback = reinterpret_cast<VirtualKShortcutsEditor::KShortcutsEditor_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KShortcutsEditor_MouseDoubleClickEvent(KShortcutsEditor* self, QMouseEvent* event) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor) {
        vkshortcutseditor->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method KShortcutsEditor::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KShortcutsEditor_SuperMouseDoubleClickEvent(KShortcutsEditor* self, QMouseEvent* event) {
    if (auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self)) {
        vkshortcutseditor->KShortcutsEditor::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method KShortcutsEditor::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KShortcutsEditor_OnMouseDoubleClickEvent(KShortcutsEditor* self, intptr_t slot) {
    if (auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self))
        vkshortcutseditor->kshortcutseditor_mousedoubleclickevent_callback = reinterpret_cast<VirtualKShortcutsEditor::KShortcutsEditor_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void KShortcutsEditor_MouseMoveEvent(KShortcutsEditor* self, QMouseEvent* event) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor) {
        vkshortcutseditor->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KShortcutsEditor::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KShortcutsEditor_SuperMouseMoveEvent(KShortcutsEditor* self, QMouseEvent* event) {
    if (auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self)) {
        vkshortcutseditor->KShortcutsEditor::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KShortcutsEditor::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KShortcutsEditor_OnMouseMoveEvent(KShortcutsEditor* self, intptr_t slot) {
    if (auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self))
        vkshortcutseditor->kshortcutseditor_mousemoveevent_callback = reinterpret_cast<VirtualKShortcutsEditor::KShortcutsEditor_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KShortcutsEditor_WheelEvent(KShortcutsEditor* self, QWheelEvent* event) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor) {
        vkshortcutseditor->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method KShortcutsEditor::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KShortcutsEditor_SuperWheelEvent(KShortcutsEditor* self, QWheelEvent* event) {
    if (auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self)) {
        vkshortcutseditor->KShortcutsEditor::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method KShortcutsEditor::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KShortcutsEditor_OnWheelEvent(KShortcutsEditor* self, intptr_t slot) {
    if (auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self))
        vkshortcutseditor->kshortcutseditor_wheelevent_callback = reinterpret_cast<VirtualKShortcutsEditor::KShortcutsEditor_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void KShortcutsEditor_KeyPressEvent(KShortcutsEditor* self, QKeyEvent* event) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor) {
        vkshortcutseditor->keyPressEvent(event);
    } else {
        qFatal("Error: Protected virtual method KShortcutsEditor::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KShortcutsEditor_SuperKeyPressEvent(KShortcutsEditor* self, QKeyEvent* event) {
    if (auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self)) {
        vkshortcutseditor->KShortcutsEditor::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method KShortcutsEditor::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KShortcutsEditor_OnKeyPressEvent(KShortcutsEditor* self, intptr_t slot) {
    if (auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self))
        vkshortcutseditor->kshortcutseditor_keypressevent_callback = reinterpret_cast<VirtualKShortcutsEditor::KShortcutsEditor_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void KShortcutsEditor_KeyReleaseEvent(KShortcutsEditor* self, QKeyEvent* event) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor) {
        vkshortcutseditor->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KShortcutsEditor::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KShortcutsEditor_SuperKeyReleaseEvent(KShortcutsEditor* self, QKeyEvent* event) {
    if (auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self)) {
        vkshortcutseditor->KShortcutsEditor::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KShortcutsEditor::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KShortcutsEditor_OnKeyReleaseEvent(KShortcutsEditor* self, intptr_t slot) {
    if (auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self))
        vkshortcutseditor->kshortcutseditor_keyreleaseevent_callback = reinterpret_cast<VirtualKShortcutsEditor::KShortcutsEditor_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KShortcutsEditor_FocusInEvent(KShortcutsEditor* self, QFocusEvent* event) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor) {
        vkshortcutseditor->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method KShortcutsEditor::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KShortcutsEditor_SuperFocusInEvent(KShortcutsEditor* self, QFocusEvent* event) {
    if (auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self)) {
        vkshortcutseditor->KShortcutsEditor::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method KShortcutsEditor::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KShortcutsEditor_OnFocusInEvent(KShortcutsEditor* self, intptr_t slot) {
    if (auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self))
        vkshortcutseditor->kshortcutseditor_focusinevent_callback = reinterpret_cast<VirtualKShortcutsEditor::KShortcutsEditor_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void KShortcutsEditor_FocusOutEvent(KShortcutsEditor* self, QFocusEvent* event) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor) {
        vkshortcutseditor->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method KShortcutsEditor::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KShortcutsEditor_SuperFocusOutEvent(KShortcutsEditor* self, QFocusEvent* event) {
    if (auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self)) {
        vkshortcutseditor->KShortcutsEditor::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method KShortcutsEditor::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KShortcutsEditor_OnFocusOutEvent(KShortcutsEditor* self, intptr_t slot) {
    if (auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self))
        vkshortcutseditor->kshortcutseditor_focusoutevent_callback = reinterpret_cast<VirtualKShortcutsEditor::KShortcutsEditor_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void KShortcutsEditor_EnterEvent(KShortcutsEditor* self, QEnterEvent* event) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor) {
        vkshortcutseditor->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KShortcutsEditor::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KShortcutsEditor_SuperEnterEvent(KShortcutsEditor* self, QEnterEvent* event) {
    if (auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self)) {
        vkshortcutseditor->KShortcutsEditor::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method KShortcutsEditor::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KShortcutsEditor_OnEnterEvent(KShortcutsEditor* self, intptr_t slot) {
    if (auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self))
        vkshortcutseditor->kshortcutseditor_enterevent_callback = reinterpret_cast<VirtualKShortcutsEditor::KShortcutsEditor_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KShortcutsEditor_LeaveEvent(KShortcutsEditor* self, QEvent* event) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor) {
        vkshortcutseditor->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KShortcutsEditor::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KShortcutsEditor_SuperLeaveEvent(KShortcutsEditor* self, QEvent* event) {
    if (auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self)) {
        vkshortcutseditor->KShortcutsEditor::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KShortcutsEditor::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KShortcutsEditor_OnLeaveEvent(KShortcutsEditor* self, intptr_t slot) {
    if (auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self))
        vkshortcutseditor->kshortcutseditor_leaveevent_callback = reinterpret_cast<VirtualKShortcutsEditor::KShortcutsEditor_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KShortcutsEditor_PaintEvent(KShortcutsEditor* self, QPaintEvent* event) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor) {
        vkshortcutseditor->paintEvent(event);
    } else {
        qFatal("Error: Protected virtual method KShortcutsEditor::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KShortcutsEditor_SuperPaintEvent(KShortcutsEditor* self, QPaintEvent* event) {
    if (auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self)) {
        vkshortcutseditor->KShortcutsEditor::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method KShortcutsEditor::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KShortcutsEditor_OnPaintEvent(KShortcutsEditor* self, intptr_t slot) {
    if (auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self))
        vkshortcutseditor->kshortcutseditor_paintevent_callback = reinterpret_cast<VirtualKShortcutsEditor::KShortcutsEditor_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void KShortcutsEditor_MoveEvent(KShortcutsEditor* self, QMoveEvent* event) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor) {
        vkshortcutseditor->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KShortcutsEditor::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KShortcutsEditor_SuperMoveEvent(KShortcutsEditor* self, QMoveEvent* event) {
    if (auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self)) {
        vkshortcutseditor->KShortcutsEditor::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method KShortcutsEditor::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KShortcutsEditor_OnMoveEvent(KShortcutsEditor* self, intptr_t slot) {
    if (auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self))
        vkshortcutseditor->kshortcutseditor_moveevent_callback = reinterpret_cast<VirtualKShortcutsEditor::KShortcutsEditor_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KShortcutsEditor_ResizeEvent(KShortcutsEditor* self, QResizeEvent* event) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor) {
        vkshortcutseditor->resizeEvent(event);
    } else {
        qFatal("Error: Protected virtual method KShortcutsEditor::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KShortcutsEditor_SuperResizeEvent(KShortcutsEditor* self, QResizeEvent* event) {
    if (auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self)) {
        vkshortcutseditor->KShortcutsEditor::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method KShortcutsEditor::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KShortcutsEditor_OnResizeEvent(KShortcutsEditor* self, intptr_t slot) {
    if (auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self))
        vkshortcutseditor->kshortcutseditor_resizeevent_callback = reinterpret_cast<VirtualKShortcutsEditor::KShortcutsEditor_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void KShortcutsEditor_CloseEvent(KShortcutsEditor* self, QCloseEvent* event) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor) {
        vkshortcutseditor->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method KShortcutsEditor::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KShortcutsEditor_SuperCloseEvent(KShortcutsEditor* self, QCloseEvent* event) {
    if (auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self)) {
        vkshortcutseditor->KShortcutsEditor::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method KShortcutsEditor::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KShortcutsEditor_OnCloseEvent(KShortcutsEditor* self, intptr_t slot) {
    if (auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self))
        vkshortcutseditor->kshortcutseditor_closeevent_callback = reinterpret_cast<VirtualKShortcutsEditor::KShortcutsEditor_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void KShortcutsEditor_ContextMenuEvent(KShortcutsEditor* self, QContextMenuEvent* event) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor) {
        vkshortcutseditor->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method KShortcutsEditor::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KShortcutsEditor_SuperContextMenuEvent(KShortcutsEditor* self, QContextMenuEvent* event) {
    if (auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self)) {
        vkshortcutseditor->KShortcutsEditor::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method KShortcutsEditor::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KShortcutsEditor_OnContextMenuEvent(KShortcutsEditor* self, intptr_t slot) {
    if (auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self))
        vkshortcutseditor->kshortcutseditor_contextmenuevent_callback = reinterpret_cast<VirtualKShortcutsEditor::KShortcutsEditor_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void KShortcutsEditor_TabletEvent(KShortcutsEditor* self, QTabletEvent* event) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor) {
        vkshortcutseditor->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method KShortcutsEditor::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KShortcutsEditor_SuperTabletEvent(KShortcutsEditor* self, QTabletEvent* event) {
    if (auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self)) {
        vkshortcutseditor->KShortcutsEditor::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method KShortcutsEditor::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KShortcutsEditor_OnTabletEvent(KShortcutsEditor* self, intptr_t slot) {
    if (auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self))
        vkshortcutseditor->kshortcutseditor_tabletevent_callback = reinterpret_cast<VirtualKShortcutsEditor::KShortcutsEditor_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void KShortcutsEditor_ActionEvent(KShortcutsEditor* self, QActionEvent* event) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor) {
        vkshortcutseditor->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method KShortcutsEditor::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KShortcutsEditor_SuperActionEvent(KShortcutsEditor* self, QActionEvent* event) {
    if (auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self)) {
        vkshortcutseditor->KShortcutsEditor::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method KShortcutsEditor::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KShortcutsEditor_OnActionEvent(KShortcutsEditor* self, intptr_t slot) {
    if (auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self))
        vkshortcutseditor->kshortcutseditor_actionevent_callback = reinterpret_cast<VirtualKShortcutsEditor::KShortcutsEditor_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void KShortcutsEditor_DragEnterEvent(KShortcutsEditor* self, QDragEnterEvent* event) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor) {
        vkshortcutseditor->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KShortcutsEditor::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KShortcutsEditor_SuperDragEnterEvent(KShortcutsEditor* self, QDragEnterEvent* event) {
    if (auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self)) {
        vkshortcutseditor->KShortcutsEditor::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method KShortcutsEditor::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KShortcutsEditor_OnDragEnterEvent(KShortcutsEditor* self, intptr_t slot) {
    if (auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self))
        vkshortcutseditor->kshortcutseditor_dragenterevent_callback = reinterpret_cast<VirtualKShortcutsEditor::KShortcutsEditor_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KShortcutsEditor_DragMoveEvent(KShortcutsEditor* self, QDragMoveEvent* event) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor) {
        vkshortcutseditor->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KShortcutsEditor::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KShortcutsEditor_SuperDragMoveEvent(KShortcutsEditor* self, QDragMoveEvent* event) {
    if (auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self)) {
        vkshortcutseditor->KShortcutsEditor::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KShortcutsEditor::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KShortcutsEditor_OnDragMoveEvent(KShortcutsEditor* self, intptr_t slot) {
    if (auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self))
        vkshortcutseditor->kshortcutseditor_dragmoveevent_callback = reinterpret_cast<VirtualKShortcutsEditor::KShortcutsEditor_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KShortcutsEditor_DragLeaveEvent(KShortcutsEditor* self, QDragLeaveEvent* event) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor) {
        vkshortcutseditor->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KShortcutsEditor::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KShortcutsEditor_SuperDragLeaveEvent(KShortcutsEditor* self, QDragLeaveEvent* event) {
    if (auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self)) {
        vkshortcutseditor->KShortcutsEditor::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KShortcutsEditor::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KShortcutsEditor_OnDragLeaveEvent(KShortcutsEditor* self, intptr_t slot) {
    if (auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self))
        vkshortcutseditor->kshortcutseditor_dragleaveevent_callback = reinterpret_cast<VirtualKShortcutsEditor::KShortcutsEditor_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KShortcutsEditor_DropEvent(KShortcutsEditor* self, QDropEvent* event) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor) {
        vkshortcutseditor->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method KShortcutsEditor::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KShortcutsEditor_SuperDropEvent(KShortcutsEditor* self, QDropEvent* event) {
    if (auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self)) {
        vkshortcutseditor->KShortcutsEditor::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method KShortcutsEditor::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KShortcutsEditor_OnDropEvent(KShortcutsEditor* self, intptr_t slot) {
    if (auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self))
        vkshortcutseditor->kshortcutseditor_dropevent_callback = reinterpret_cast<VirtualKShortcutsEditor::KShortcutsEditor_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void KShortcutsEditor_ShowEvent(KShortcutsEditor* self, QShowEvent* event) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor) {
        vkshortcutseditor->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method KShortcutsEditor::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KShortcutsEditor_SuperShowEvent(KShortcutsEditor* self, QShowEvent* event) {
    if (auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self)) {
        vkshortcutseditor->KShortcutsEditor::showEvent(event);
    } else
        qFatal("Error: Protected virtual method KShortcutsEditor::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KShortcutsEditor_OnShowEvent(KShortcutsEditor* self, intptr_t slot) {
    if (auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self))
        vkshortcutseditor->kshortcutseditor_showevent_callback = reinterpret_cast<VirtualKShortcutsEditor::KShortcutsEditor_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void KShortcutsEditor_HideEvent(KShortcutsEditor* self, QHideEvent* event) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor) {
        vkshortcutseditor->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method KShortcutsEditor::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KShortcutsEditor_SuperHideEvent(KShortcutsEditor* self, QHideEvent* event) {
    if (auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self)) {
        vkshortcutseditor->KShortcutsEditor::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method KShortcutsEditor::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KShortcutsEditor_OnHideEvent(KShortcutsEditor* self, intptr_t slot) {
    if (auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self))
        vkshortcutseditor->kshortcutseditor_hideevent_callback = reinterpret_cast<VirtualKShortcutsEditor::KShortcutsEditor_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool KShortcutsEditor_NativeEvent(KShortcutsEditor* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor) {
        return vkshortcutseditor->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method KShortcutsEditor::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool KShortcutsEditor_SuperNativeEvent(KShortcutsEditor* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self)) {
        return vkshortcutseditor->KShortcutsEditor::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method KShortcutsEditor::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KShortcutsEditor_OnNativeEvent(KShortcutsEditor* self, intptr_t slot) {
    if (auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self))
        vkshortcutseditor->kshortcutseditor_nativeevent_callback = reinterpret_cast<VirtualKShortcutsEditor::KShortcutsEditor_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
void KShortcutsEditor_ChangeEvent(KShortcutsEditor* self, QEvent* param1) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor) {
        vkshortcutseditor->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KShortcutsEditor::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KShortcutsEditor_SuperChangeEvent(KShortcutsEditor* self, QEvent* param1) {
    if (auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self)) {
        vkshortcutseditor->KShortcutsEditor::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KShortcutsEditor::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KShortcutsEditor_OnChangeEvent(KShortcutsEditor* self, intptr_t slot) {
    if (auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self))
        vkshortcutseditor->kshortcutseditor_changeevent_callback = reinterpret_cast<VirtualKShortcutsEditor::KShortcutsEditor_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
int KShortcutsEditor_Metric(const KShortcutsEditor* self, int param1) {
    auto* vkshortcutseditor = const_cast<VirtualKShortcutsEditor*>(dynamic_cast<const VirtualKShortcutsEditor*>(self));
    if (vkshortcutseditor) {
        return vkshortcutseditor->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method KShortcutsEditor::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int KShortcutsEditor_SuperMetric(const KShortcutsEditor* self, int param1) {
    if (auto* vkshortcutseditor = const_cast<VirtualKShortcutsEditor*>(dynamic_cast<const VirtualKShortcutsEditor*>(self))) {
        return vkshortcutseditor->KShortcutsEditor::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method KShortcutsEditor::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KShortcutsEditor_OnMetric(KShortcutsEditor* self, intptr_t slot) {
    if (auto* vkshortcutseditor = const_cast<VirtualKShortcutsEditor*>(dynamic_cast<const VirtualKShortcutsEditor*>(self)))
        vkshortcutseditor->kshortcutseditor_metric_callback = reinterpret_cast<VirtualKShortcutsEditor::KShortcutsEditor_Metric_Callback>(slot);
}

// Derived class handler implementation
void KShortcutsEditor_InitPainter(const KShortcutsEditor* self, QPainter* painter) {
    auto* vkshortcutseditor = const_cast<VirtualKShortcutsEditor*>(dynamic_cast<const VirtualKShortcutsEditor*>(self));
    if (vkshortcutseditor) {
        vkshortcutseditor->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method KShortcutsEditor::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void KShortcutsEditor_SuperInitPainter(const KShortcutsEditor* self, QPainter* painter) {
    if (auto* vkshortcutseditor = const_cast<VirtualKShortcutsEditor*>(dynamic_cast<const VirtualKShortcutsEditor*>(self))) {
        vkshortcutseditor->KShortcutsEditor::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method KShortcutsEditor::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KShortcutsEditor_OnInitPainter(KShortcutsEditor* self, intptr_t slot) {
    if (auto* vkshortcutseditor = const_cast<VirtualKShortcutsEditor*>(dynamic_cast<const VirtualKShortcutsEditor*>(self)))
        vkshortcutseditor->kshortcutseditor_initpainter_callback = reinterpret_cast<VirtualKShortcutsEditor::KShortcutsEditor_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* KShortcutsEditor_Redirected(const KShortcutsEditor* self, QPoint* offset) {
    auto* vkshortcutseditor = const_cast<VirtualKShortcutsEditor*>(dynamic_cast<const VirtualKShortcutsEditor*>(self));
    if (vkshortcutseditor) {
        return vkshortcutseditor->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method KShortcutsEditor::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* KShortcutsEditor_SuperRedirected(const KShortcutsEditor* self, QPoint* offset) {
    if (auto* vkshortcutseditor = const_cast<VirtualKShortcutsEditor*>(dynamic_cast<const VirtualKShortcutsEditor*>(self))) {
        return vkshortcutseditor->KShortcutsEditor::redirected(offset);
    } else
        qFatal("Error: Protected virtual method KShortcutsEditor::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KShortcutsEditor_OnRedirected(KShortcutsEditor* self, intptr_t slot) {
    if (auto* vkshortcutseditor = const_cast<VirtualKShortcutsEditor*>(dynamic_cast<const VirtualKShortcutsEditor*>(self)))
        vkshortcutseditor->kshortcutseditor_redirected_callback = reinterpret_cast<VirtualKShortcutsEditor::KShortcutsEditor_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* KShortcutsEditor_SharedPainter(const KShortcutsEditor* self) {
    auto* vkshortcutseditor = const_cast<VirtualKShortcutsEditor*>(dynamic_cast<const VirtualKShortcutsEditor*>(self));
    if (vkshortcutseditor) {
        return vkshortcutseditor->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method KShortcutsEditor::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* KShortcutsEditor_SuperSharedPainter(const KShortcutsEditor* self) {
    if (auto* vkshortcutseditor = const_cast<VirtualKShortcutsEditor*>(dynamic_cast<const VirtualKShortcutsEditor*>(self))) {
        return vkshortcutseditor->KShortcutsEditor::sharedPainter();
    } else
        qFatal("Error: Protected virtual method KShortcutsEditor::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KShortcutsEditor_OnSharedPainter(KShortcutsEditor* self, intptr_t slot) {
    if (auto* vkshortcutseditor = const_cast<VirtualKShortcutsEditor*>(dynamic_cast<const VirtualKShortcutsEditor*>(self)))
        vkshortcutseditor->kshortcutseditor_sharedpainter_callback = reinterpret_cast<VirtualKShortcutsEditor::KShortcutsEditor_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void KShortcutsEditor_InputMethodEvent(KShortcutsEditor* self, QInputMethodEvent* param1) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor) {
        vkshortcutseditor->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KShortcutsEditor::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KShortcutsEditor_SuperInputMethodEvent(KShortcutsEditor* self, QInputMethodEvent* param1) {
    if (auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self)) {
        vkshortcutseditor->KShortcutsEditor::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method KShortcutsEditor::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KShortcutsEditor_OnInputMethodEvent(KShortcutsEditor* self, intptr_t slot) {
    if (auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self))
        vkshortcutseditor->kshortcutseditor_inputmethodevent_callback = reinterpret_cast<VirtualKShortcutsEditor::KShortcutsEditor_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* KShortcutsEditor_InputMethodQuery(const KShortcutsEditor* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* KShortcutsEditor_SuperInputMethodQuery(const KShortcutsEditor* self, int param1) {
    return new QVariant(self->KShortcutsEditor::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void KShortcutsEditor_OnInputMethodQuery(KShortcutsEditor* self, intptr_t slot) {
    if (auto* vkshortcutseditor = const_cast<VirtualKShortcutsEditor*>(dynamic_cast<const VirtualKShortcutsEditor*>(self)))
        vkshortcutseditor->kshortcutseditor_inputmethodquery_callback = reinterpret_cast<VirtualKShortcutsEditor::KShortcutsEditor_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool KShortcutsEditor_FocusNextPrevChild(KShortcutsEditor* self, bool next) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor) {
        return vkshortcutseditor->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method KShortcutsEditor::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool KShortcutsEditor_SuperFocusNextPrevChild(KShortcutsEditor* self, bool next) {
    if (auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self)) {
        return vkshortcutseditor->KShortcutsEditor::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method KShortcutsEditor::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KShortcutsEditor_OnFocusNextPrevChild(KShortcutsEditor* self, intptr_t slot) {
    if (auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self))
        vkshortcutseditor->kshortcutseditor_focusnextprevchild_callback = reinterpret_cast<VirtualKShortcutsEditor::KShortcutsEditor_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
bool KShortcutsEditor_EventFilter(KShortcutsEditor* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KShortcutsEditor_SuperEventFilter(KShortcutsEditor* self, QObject* watched, QEvent* event) {
    return self->KShortcutsEditor::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KShortcutsEditor_OnEventFilter(KShortcutsEditor* self, intptr_t slot) {
    if (auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self))
        vkshortcutseditor->kshortcutseditor_eventfilter_callback = reinterpret_cast<VirtualKShortcutsEditor::KShortcutsEditor_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KShortcutsEditor_TimerEvent(KShortcutsEditor* self, QTimerEvent* event) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor) {
        vkshortcutseditor->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KShortcutsEditor::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KShortcutsEditor_SuperTimerEvent(KShortcutsEditor* self, QTimerEvent* event) {
    if (auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self)) {
        vkshortcutseditor->KShortcutsEditor::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KShortcutsEditor::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KShortcutsEditor_OnTimerEvent(KShortcutsEditor* self, intptr_t slot) {
    if (auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self))
        vkshortcutseditor->kshortcutseditor_timerevent_callback = reinterpret_cast<VirtualKShortcutsEditor::KShortcutsEditor_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KShortcutsEditor_ChildEvent(KShortcutsEditor* self, QChildEvent* event) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor) {
        vkshortcutseditor->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KShortcutsEditor::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KShortcutsEditor_SuperChildEvent(KShortcutsEditor* self, QChildEvent* event) {
    if (auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self)) {
        vkshortcutseditor->KShortcutsEditor::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KShortcutsEditor::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KShortcutsEditor_OnChildEvent(KShortcutsEditor* self, intptr_t slot) {
    if (auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self))
        vkshortcutseditor->kshortcutseditor_childevent_callback = reinterpret_cast<VirtualKShortcutsEditor::KShortcutsEditor_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KShortcutsEditor_CustomEvent(KShortcutsEditor* self, QEvent* event) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor) {
        vkshortcutseditor->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KShortcutsEditor::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KShortcutsEditor_SuperCustomEvent(KShortcutsEditor* self, QEvent* event) {
    if (auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self)) {
        vkshortcutseditor->KShortcutsEditor::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KShortcutsEditor::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KShortcutsEditor_OnCustomEvent(KShortcutsEditor* self, intptr_t slot) {
    if (auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self))
        vkshortcutseditor->kshortcutseditor_customevent_callback = reinterpret_cast<VirtualKShortcutsEditor::KShortcutsEditor_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KShortcutsEditor_ConnectNotify(KShortcutsEditor* self, const QMetaMethod* signal) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor) {
        vkshortcutseditor->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KShortcutsEditor::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KShortcutsEditor_SuperConnectNotify(KShortcutsEditor* self, const QMetaMethod* signal) {
    if (auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self)) {
        vkshortcutseditor->KShortcutsEditor::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KShortcutsEditor::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KShortcutsEditor_OnConnectNotify(KShortcutsEditor* self, intptr_t slot) {
    if (auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self))
        vkshortcutseditor->kshortcutseditor_connectnotify_callback = reinterpret_cast<VirtualKShortcutsEditor::KShortcutsEditor_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KShortcutsEditor_DisconnectNotify(KShortcutsEditor* self, const QMetaMethod* signal) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor) {
        vkshortcutseditor->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KShortcutsEditor::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KShortcutsEditor_SuperDisconnectNotify(KShortcutsEditor* self, const QMetaMethod* signal) {
    if (auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self)) {
        vkshortcutseditor->KShortcutsEditor::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KShortcutsEditor::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KShortcutsEditor_OnDisconnectNotify(KShortcutsEditor* self, intptr_t slot) {
    if (auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self))
        vkshortcutseditor->kshortcutseditor_disconnectnotify_callback = reinterpret_cast<VirtualKShortcutsEditor::KShortcutsEditor_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void KShortcutsEditor_UpdateMicroFocus(KShortcutsEditor* self) {
    if (auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self)) {
        vkshortcutseditor->VirtualKShortcutsEditor::updateMicroFocus();
    } else
        qFatal("Error: Protected method KShortcutsEditor::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void KShortcutsEditor_Create(KShortcutsEditor* self) {
    if (auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self)) {
        vkshortcutseditor->VirtualKShortcutsEditor::create();
    } else
        qFatal("Error: Protected method KShortcutsEditor::create called without a directly constructed type");
}

// Derived class protected handler implementation
void KShortcutsEditor_Destroy(KShortcutsEditor* self) {
    if (auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self)) {
        vkshortcutseditor->VirtualKShortcutsEditor::destroy();
    } else
        qFatal("Error: Protected method KShortcutsEditor::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool KShortcutsEditor_FocusNextChild(KShortcutsEditor* self) {
    if (auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self)) {
        return vkshortcutseditor->VirtualKShortcutsEditor::focusNextChild();
    } else
        qFatal("Error: Protected method KShortcutsEditor::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool KShortcutsEditor_FocusPreviousChild(KShortcutsEditor* self) {
    if (auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self)) {
        return vkshortcutseditor->VirtualKShortcutsEditor::focusPreviousChild();
    } else
        qFatal("Error: Protected method KShortcutsEditor::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KShortcutsEditor_Sender(const KShortcutsEditor* self) {
    if (auto* vkshortcutseditor = const_cast<VirtualKShortcutsEditor*>(dynamic_cast<const VirtualKShortcutsEditor*>(self))) {
        return vkshortcutseditor->VirtualKShortcutsEditor::sender();
    } else
        qFatal("Error: Protected method KShortcutsEditor::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KShortcutsEditor_SenderSignalIndex(const KShortcutsEditor* self) {
    if (auto* vkshortcutseditor = const_cast<VirtualKShortcutsEditor*>(dynamic_cast<const VirtualKShortcutsEditor*>(self))) {
        return vkshortcutseditor->VirtualKShortcutsEditor::senderSignalIndex();
    } else
        qFatal("Error: Protected method KShortcutsEditor::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KShortcutsEditor_Receivers(const KShortcutsEditor* self, const char* signal) {
    if (auto* vkshortcutseditor = const_cast<VirtualKShortcutsEditor*>(dynamic_cast<const VirtualKShortcutsEditor*>(self))) {
        return vkshortcutseditor->VirtualKShortcutsEditor::receivers(signal);
    } else
        qFatal("Error: Protected method KShortcutsEditor::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KShortcutsEditor_IsSignalConnected(const KShortcutsEditor* self, const QMetaMethod* signal) {
    if (auto* vkshortcutseditor = const_cast<VirtualKShortcutsEditor*>(dynamic_cast<const VirtualKShortcutsEditor*>(self))) {
        return vkshortcutseditor->VirtualKShortcutsEditor::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KShortcutsEditor::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double KShortcutsEditor_GetDecodedMetricF(const KShortcutsEditor* self, int metricA, int metricB) {
    if (auto* vkshortcutseditor = const_cast<VirtualKShortcutsEditor*>(dynamic_cast<const VirtualKShortcutsEditor*>(self))) {
        return vkshortcutseditor->VirtualKShortcutsEditor::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method KShortcutsEditor::getDecodedMetricF called without a directly constructed type");
}

void KShortcutsEditor_Delete(KShortcutsEditor* self) {
    delete self;
}
