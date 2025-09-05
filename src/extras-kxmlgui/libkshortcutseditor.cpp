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
#include <QByteArray>
#include <cstring>
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
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKShortcutsEditor*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KShortcutsEditor_Tr(const char* s) {
    QString _ret = KShortcutsEditor::tr(s);
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
    KShortcutsEditor::connect(self, &KShortcutsEditor::keyChange, [self, slotFunc]() {
        slotFunc(self);
    });
}

void KShortcutsEditor_AllDefault(KShortcutsEditor* self) {
    self->allDefault();
}

libqt_string KShortcutsEditor_Tr2(const char* s, const char* c) {
    QString _ret = KShortcutsEditor::tr(s, c);
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
    QString _ret = KShortcutsEditor::tr(s, c, static_cast<int>(n));
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
int KShortcutsEditor_QBaseMetacall(KShortcutsEditor* self, int param1, int param2, void** param3) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->setKShortcutsEditor_Metacall_IsBase(true);
        return vkshortcutseditor->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KShortcutsEditor::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutsEditor_OnMetacall(KShortcutsEditor* self, intptr_t slot) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->setKShortcutsEditor_Metacall_Callback(reinterpret_cast<VirtualKShortcutsEditor::KShortcutsEditor_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
int KShortcutsEditor_DevType(const KShortcutsEditor* self) {
    auto* vkshortcutseditor = const_cast<VirtualKShortcutsEditor*>(dynamic_cast<const VirtualKShortcutsEditor*>(self));
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        return vkshortcutseditor->devType();
    } else {
        return self->KShortcutsEditor::devType();
    }
}

// Base class handler implementation
int KShortcutsEditor_QBaseDevType(const KShortcutsEditor* self) {
    auto* vkshortcutseditor = const_cast<VirtualKShortcutsEditor*>(dynamic_cast<const VirtualKShortcutsEditor*>(self));
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->setKShortcutsEditor_DevType_IsBase(true);
        return vkshortcutseditor->devType();
    } else {
        return self->KShortcutsEditor::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutsEditor_OnDevType(const KShortcutsEditor* self, intptr_t slot) {
    auto* vkshortcutseditor = const_cast<VirtualKShortcutsEditor*>(dynamic_cast<const VirtualKShortcutsEditor*>(self));
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->setKShortcutsEditor_DevType_Callback(reinterpret_cast<VirtualKShortcutsEditor::KShortcutsEditor_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void KShortcutsEditor_SetVisible(KShortcutsEditor* self, bool visible) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->setVisible(visible);
    } else {
        self->KShortcutsEditor::setVisible(visible);
    }
}

// Base class handler implementation
void KShortcutsEditor_QBaseSetVisible(KShortcutsEditor* self, bool visible) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->setKShortcutsEditor_SetVisible_IsBase(true);
        vkshortcutseditor->setVisible(visible);
    } else {
        self->KShortcutsEditor::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutsEditor_OnSetVisible(KShortcutsEditor* self, intptr_t slot) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->setKShortcutsEditor_SetVisible_Callback(reinterpret_cast<VirtualKShortcutsEditor::KShortcutsEditor_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KShortcutsEditor_SizeHint(const KShortcutsEditor* self) {
    auto* vkshortcutseditor = const_cast<VirtualKShortcutsEditor*>(dynamic_cast<const VirtualKShortcutsEditor*>(self));
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        return new QSize(vkshortcutseditor->sizeHint());
    } else {
        return new QSize(((VirtualKShortcutsEditor*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* KShortcutsEditor_QBaseSizeHint(const KShortcutsEditor* self) {
    auto* vkshortcutseditor = const_cast<VirtualKShortcutsEditor*>(dynamic_cast<const VirtualKShortcutsEditor*>(self));
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->setKShortcutsEditor_SizeHint_IsBase(true);
        return new QSize(vkshortcutseditor->sizeHint());
    } else {
        return new QSize(((VirtualKShortcutsEditor*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutsEditor_OnSizeHint(const KShortcutsEditor* self, intptr_t slot) {
    auto* vkshortcutseditor = const_cast<VirtualKShortcutsEditor*>(dynamic_cast<const VirtualKShortcutsEditor*>(self));
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->setKShortcutsEditor_SizeHint_Callback(reinterpret_cast<VirtualKShortcutsEditor::KShortcutsEditor_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KShortcutsEditor_MinimumSizeHint(const KShortcutsEditor* self) {
    auto* vkshortcutseditor = const_cast<VirtualKShortcutsEditor*>(dynamic_cast<const VirtualKShortcutsEditor*>(self));
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        return new QSize(vkshortcutseditor->minimumSizeHint());
    } else {
        return new QSize(((VirtualKShortcutsEditor*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* KShortcutsEditor_QBaseMinimumSizeHint(const KShortcutsEditor* self) {
    auto* vkshortcutseditor = const_cast<VirtualKShortcutsEditor*>(dynamic_cast<const VirtualKShortcutsEditor*>(self));
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->setKShortcutsEditor_MinimumSizeHint_IsBase(true);
        return new QSize(vkshortcutseditor->minimumSizeHint());
    } else {
        return new QSize(((VirtualKShortcutsEditor*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutsEditor_OnMinimumSizeHint(const KShortcutsEditor* self, intptr_t slot) {
    auto* vkshortcutseditor = const_cast<VirtualKShortcutsEditor*>(dynamic_cast<const VirtualKShortcutsEditor*>(self));
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->setKShortcutsEditor_MinimumSizeHint_Callback(reinterpret_cast<VirtualKShortcutsEditor::KShortcutsEditor_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
int KShortcutsEditor_HeightForWidth(const KShortcutsEditor* self, int param1) {
    auto* vkshortcutseditor = const_cast<VirtualKShortcutsEditor*>(dynamic_cast<const VirtualKShortcutsEditor*>(self));
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        return vkshortcutseditor->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KShortcutsEditor::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int KShortcutsEditor_QBaseHeightForWidth(const KShortcutsEditor* self, int param1) {
    auto* vkshortcutseditor = const_cast<VirtualKShortcutsEditor*>(dynamic_cast<const VirtualKShortcutsEditor*>(self));
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->setKShortcutsEditor_HeightForWidth_IsBase(true);
        return vkshortcutseditor->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KShortcutsEditor::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutsEditor_OnHeightForWidth(const KShortcutsEditor* self, intptr_t slot) {
    auto* vkshortcutseditor = const_cast<VirtualKShortcutsEditor*>(dynamic_cast<const VirtualKShortcutsEditor*>(self));
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->setKShortcutsEditor_HeightForWidth_Callback(reinterpret_cast<VirtualKShortcutsEditor::KShortcutsEditor_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool KShortcutsEditor_HasHeightForWidth(const KShortcutsEditor* self) {
    auto* vkshortcutseditor = const_cast<VirtualKShortcutsEditor*>(dynamic_cast<const VirtualKShortcutsEditor*>(self));
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        return vkshortcutseditor->hasHeightForWidth();
    } else {
        return self->KShortcutsEditor::hasHeightForWidth();
    }
}

// Base class handler implementation
bool KShortcutsEditor_QBaseHasHeightForWidth(const KShortcutsEditor* self) {
    auto* vkshortcutseditor = const_cast<VirtualKShortcutsEditor*>(dynamic_cast<const VirtualKShortcutsEditor*>(self));
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->setKShortcutsEditor_HasHeightForWidth_IsBase(true);
        return vkshortcutseditor->hasHeightForWidth();
    } else {
        return self->KShortcutsEditor::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutsEditor_OnHasHeightForWidth(const KShortcutsEditor* self, intptr_t slot) {
    auto* vkshortcutseditor = const_cast<VirtualKShortcutsEditor*>(dynamic_cast<const VirtualKShortcutsEditor*>(self));
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->setKShortcutsEditor_HasHeightForWidth_Callback(reinterpret_cast<VirtualKShortcutsEditor::KShortcutsEditor_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* KShortcutsEditor_PaintEngine(const KShortcutsEditor* self) {
    auto* vkshortcutseditor = const_cast<VirtualKShortcutsEditor*>(dynamic_cast<const VirtualKShortcutsEditor*>(self));
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        return vkshortcutseditor->paintEngine();
    } else {
        return self->KShortcutsEditor::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* KShortcutsEditor_QBasePaintEngine(const KShortcutsEditor* self) {
    auto* vkshortcutseditor = const_cast<VirtualKShortcutsEditor*>(dynamic_cast<const VirtualKShortcutsEditor*>(self));
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->setKShortcutsEditor_PaintEngine_IsBase(true);
        return vkshortcutseditor->paintEngine();
    } else {
        return self->KShortcutsEditor::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutsEditor_OnPaintEngine(const KShortcutsEditor* self, intptr_t slot) {
    auto* vkshortcutseditor = const_cast<VirtualKShortcutsEditor*>(dynamic_cast<const VirtualKShortcutsEditor*>(self));
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->setKShortcutsEditor_PaintEngine_Callback(reinterpret_cast<VirtualKShortcutsEditor::KShortcutsEditor_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
bool KShortcutsEditor_Event(KShortcutsEditor* self, QEvent* event) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        return vkshortcutseditor->event(event);
    } else {
        return ((VirtualKShortcutsEditor*)self)->event(event);
    }
}

// Base class handler implementation
bool KShortcutsEditor_QBaseEvent(KShortcutsEditor* self, QEvent* event) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->setKShortcutsEditor_Event_IsBase(true);
        return vkshortcutseditor->event(event);
    } else {
        return ((VirtualKShortcutsEditor*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutsEditor_OnEvent(KShortcutsEditor* self, intptr_t slot) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->setKShortcutsEditor_Event_Callback(reinterpret_cast<VirtualKShortcutsEditor::KShortcutsEditor_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void KShortcutsEditor_MousePressEvent(KShortcutsEditor* self, QMouseEvent* event) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->mousePressEvent(event);
    } else {
        ((VirtualKShortcutsEditor*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void KShortcutsEditor_QBaseMousePressEvent(KShortcutsEditor* self, QMouseEvent* event) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->setKShortcutsEditor_MousePressEvent_IsBase(true);
        vkshortcutseditor->mousePressEvent(event);
    } else {
        ((VirtualKShortcutsEditor*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutsEditor_OnMousePressEvent(KShortcutsEditor* self, intptr_t slot) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->setKShortcutsEditor_MousePressEvent_Callback(reinterpret_cast<VirtualKShortcutsEditor::KShortcutsEditor_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KShortcutsEditor_MouseReleaseEvent(KShortcutsEditor* self, QMouseEvent* event) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->mouseReleaseEvent(event);
    } else {
        ((VirtualKShortcutsEditor*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void KShortcutsEditor_QBaseMouseReleaseEvent(KShortcutsEditor* self, QMouseEvent* event) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->setKShortcutsEditor_MouseReleaseEvent_IsBase(true);
        vkshortcutseditor->mouseReleaseEvent(event);
    } else {
        ((VirtualKShortcutsEditor*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutsEditor_OnMouseReleaseEvent(KShortcutsEditor* self, intptr_t slot) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->setKShortcutsEditor_MouseReleaseEvent_Callback(reinterpret_cast<VirtualKShortcutsEditor::KShortcutsEditor_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KShortcutsEditor_MouseDoubleClickEvent(KShortcutsEditor* self, QMouseEvent* event) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKShortcutsEditor*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void KShortcutsEditor_QBaseMouseDoubleClickEvent(KShortcutsEditor* self, QMouseEvent* event) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->setKShortcutsEditor_MouseDoubleClickEvent_IsBase(true);
        vkshortcutseditor->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKShortcutsEditor*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutsEditor_OnMouseDoubleClickEvent(KShortcutsEditor* self, intptr_t slot) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->setKShortcutsEditor_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualKShortcutsEditor::KShortcutsEditor_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KShortcutsEditor_MouseMoveEvent(KShortcutsEditor* self, QMouseEvent* event) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->mouseMoveEvent(event);
    } else {
        ((VirtualKShortcutsEditor*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void KShortcutsEditor_QBaseMouseMoveEvent(KShortcutsEditor* self, QMouseEvent* event) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->setKShortcutsEditor_MouseMoveEvent_IsBase(true);
        vkshortcutseditor->mouseMoveEvent(event);
    } else {
        ((VirtualKShortcutsEditor*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutsEditor_OnMouseMoveEvent(KShortcutsEditor* self, intptr_t slot) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->setKShortcutsEditor_MouseMoveEvent_Callback(reinterpret_cast<VirtualKShortcutsEditor::KShortcutsEditor_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KShortcutsEditor_WheelEvent(KShortcutsEditor* self, QWheelEvent* event) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->wheelEvent(event);
    } else {
        ((VirtualKShortcutsEditor*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void KShortcutsEditor_QBaseWheelEvent(KShortcutsEditor* self, QWheelEvent* event) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->setKShortcutsEditor_WheelEvent_IsBase(true);
        vkshortcutseditor->wheelEvent(event);
    } else {
        ((VirtualKShortcutsEditor*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutsEditor_OnWheelEvent(KShortcutsEditor* self, intptr_t slot) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->setKShortcutsEditor_WheelEvent_Callback(reinterpret_cast<VirtualKShortcutsEditor::KShortcutsEditor_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KShortcutsEditor_KeyPressEvent(KShortcutsEditor* self, QKeyEvent* event) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->keyPressEvent(event);
    } else {
        ((VirtualKShortcutsEditor*)self)->keyPressEvent(event);
    }
}

// Base class handler implementation
void KShortcutsEditor_QBaseKeyPressEvent(KShortcutsEditor* self, QKeyEvent* event) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->setKShortcutsEditor_KeyPressEvent_IsBase(true);
        vkshortcutseditor->keyPressEvent(event);
    } else {
        ((VirtualKShortcutsEditor*)self)->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutsEditor_OnKeyPressEvent(KShortcutsEditor* self, intptr_t slot) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->setKShortcutsEditor_KeyPressEvent_Callback(reinterpret_cast<VirtualKShortcutsEditor::KShortcutsEditor_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KShortcutsEditor_KeyReleaseEvent(KShortcutsEditor* self, QKeyEvent* event) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->keyReleaseEvent(event);
    } else {
        ((VirtualKShortcutsEditor*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void KShortcutsEditor_QBaseKeyReleaseEvent(KShortcutsEditor* self, QKeyEvent* event) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->setKShortcutsEditor_KeyReleaseEvent_IsBase(true);
        vkshortcutseditor->keyReleaseEvent(event);
    } else {
        ((VirtualKShortcutsEditor*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutsEditor_OnKeyReleaseEvent(KShortcutsEditor* self, intptr_t slot) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->setKShortcutsEditor_KeyReleaseEvent_Callback(reinterpret_cast<VirtualKShortcutsEditor::KShortcutsEditor_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KShortcutsEditor_FocusInEvent(KShortcutsEditor* self, QFocusEvent* event) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->focusInEvent(event);
    } else {
        ((VirtualKShortcutsEditor*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void KShortcutsEditor_QBaseFocusInEvent(KShortcutsEditor* self, QFocusEvent* event) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->setKShortcutsEditor_FocusInEvent_IsBase(true);
        vkshortcutseditor->focusInEvent(event);
    } else {
        ((VirtualKShortcutsEditor*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutsEditor_OnFocusInEvent(KShortcutsEditor* self, intptr_t slot) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->setKShortcutsEditor_FocusInEvent_Callback(reinterpret_cast<VirtualKShortcutsEditor::KShortcutsEditor_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KShortcutsEditor_FocusOutEvent(KShortcutsEditor* self, QFocusEvent* event) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->focusOutEvent(event);
    } else {
        ((VirtualKShortcutsEditor*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void KShortcutsEditor_QBaseFocusOutEvent(KShortcutsEditor* self, QFocusEvent* event) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->setKShortcutsEditor_FocusOutEvent_IsBase(true);
        vkshortcutseditor->focusOutEvent(event);
    } else {
        ((VirtualKShortcutsEditor*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutsEditor_OnFocusOutEvent(KShortcutsEditor* self, intptr_t slot) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->setKShortcutsEditor_FocusOutEvent_Callback(reinterpret_cast<VirtualKShortcutsEditor::KShortcutsEditor_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KShortcutsEditor_EnterEvent(KShortcutsEditor* self, QEnterEvent* event) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->enterEvent(event);
    } else {
        ((VirtualKShortcutsEditor*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void KShortcutsEditor_QBaseEnterEvent(KShortcutsEditor* self, QEnterEvent* event) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->setKShortcutsEditor_EnterEvent_IsBase(true);
        vkshortcutseditor->enterEvent(event);
    } else {
        ((VirtualKShortcutsEditor*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutsEditor_OnEnterEvent(KShortcutsEditor* self, intptr_t slot) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->setKShortcutsEditor_EnterEvent_Callback(reinterpret_cast<VirtualKShortcutsEditor::KShortcutsEditor_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KShortcutsEditor_LeaveEvent(KShortcutsEditor* self, QEvent* event) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->leaveEvent(event);
    } else {
        ((VirtualKShortcutsEditor*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void KShortcutsEditor_QBaseLeaveEvent(KShortcutsEditor* self, QEvent* event) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->setKShortcutsEditor_LeaveEvent_IsBase(true);
        vkshortcutseditor->leaveEvent(event);
    } else {
        ((VirtualKShortcutsEditor*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutsEditor_OnLeaveEvent(KShortcutsEditor* self, intptr_t slot) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->setKShortcutsEditor_LeaveEvent_Callback(reinterpret_cast<VirtualKShortcutsEditor::KShortcutsEditor_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KShortcutsEditor_PaintEvent(KShortcutsEditor* self, QPaintEvent* event) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->paintEvent(event);
    } else {
        ((VirtualKShortcutsEditor*)self)->paintEvent(event);
    }
}

// Base class handler implementation
void KShortcutsEditor_QBasePaintEvent(KShortcutsEditor* self, QPaintEvent* event) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->setKShortcutsEditor_PaintEvent_IsBase(true);
        vkshortcutseditor->paintEvent(event);
    } else {
        ((VirtualKShortcutsEditor*)self)->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutsEditor_OnPaintEvent(KShortcutsEditor* self, intptr_t slot) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->setKShortcutsEditor_PaintEvent_Callback(reinterpret_cast<VirtualKShortcutsEditor::KShortcutsEditor_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KShortcutsEditor_MoveEvent(KShortcutsEditor* self, QMoveEvent* event) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->moveEvent(event);
    } else {
        ((VirtualKShortcutsEditor*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void KShortcutsEditor_QBaseMoveEvent(KShortcutsEditor* self, QMoveEvent* event) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->setKShortcutsEditor_MoveEvent_IsBase(true);
        vkshortcutseditor->moveEvent(event);
    } else {
        ((VirtualKShortcutsEditor*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutsEditor_OnMoveEvent(KShortcutsEditor* self, intptr_t slot) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->setKShortcutsEditor_MoveEvent_Callback(reinterpret_cast<VirtualKShortcutsEditor::KShortcutsEditor_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KShortcutsEditor_ResizeEvent(KShortcutsEditor* self, QResizeEvent* event) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->resizeEvent(event);
    } else {
        ((VirtualKShortcutsEditor*)self)->resizeEvent(event);
    }
}

// Base class handler implementation
void KShortcutsEditor_QBaseResizeEvent(KShortcutsEditor* self, QResizeEvent* event) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->setKShortcutsEditor_ResizeEvent_IsBase(true);
        vkshortcutseditor->resizeEvent(event);
    } else {
        ((VirtualKShortcutsEditor*)self)->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutsEditor_OnResizeEvent(KShortcutsEditor* self, intptr_t slot) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->setKShortcutsEditor_ResizeEvent_Callback(reinterpret_cast<VirtualKShortcutsEditor::KShortcutsEditor_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KShortcutsEditor_CloseEvent(KShortcutsEditor* self, QCloseEvent* event) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->closeEvent(event);
    } else {
        ((VirtualKShortcutsEditor*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void KShortcutsEditor_QBaseCloseEvent(KShortcutsEditor* self, QCloseEvent* event) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->setKShortcutsEditor_CloseEvent_IsBase(true);
        vkshortcutseditor->closeEvent(event);
    } else {
        ((VirtualKShortcutsEditor*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutsEditor_OnCloseEvent(KShortcutsEditor* self, intptr_t slot) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->setKShortcutsEditor_CloseEvent_Callback(reinterpret_cast<VirtualKShortcutsEditor::KShortcutsEditor_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KShortcutsEditor_ContextMenuEvent(KShortcutsEditor* self, QContextMenuEvent* event) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->contextMenuEvent(event);
    } else {
        ((VirtualKShortcutsEditor*)self)->contextMenuEvent(event);
    }
}

// Base class handler implementation
void KShortcutsEditor_QBaseContextMenuEvent(KShortcutsEditor* self, QContextMenuEvent* event) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->setKShortcutsEditor_ContextMenuEvent_IsBase(true);
        vkshortcutseditor->contextMenuEvent(event);
    } else {
        ((VirtualKShortcutsEditor*)self)->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutsEditor_OnContextMenuEvent(KShortcutsEditor* self, intptr_t slot) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->setKShortcutsEditor_ContextMenuEvent_Callback(reinterpret_cast<VirtualKShortcutsEditor::KShortcutsEditor_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KShortcutsEditor_TabletEvent(KShortcutsEditor* self, QTabletEvent* event) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->tabletEvent(event);
    } else {
        ((VirtualKShortcutsEditor*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void KShortcutsEditor_QBaseTabletEvent(KShortcutsEditor* self, QTabletEvent* event) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->setKShortcutsEditor_TabletEvent_IsBase(true);
        vkshortcutseditor->tabletEvent(event);
    } else {
        ((VirtualKShortcutsEditor*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutsEditor_OnTabletEvent(KShortcutsEditor* self, intptr_t slot) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->setKShortcutsEditor_TabletEvent_Callback(reinterpret_cast<VirtualKShortcutsEditor::KShortcutsEditor_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KShortcutsEditor_ActionEvent(KShortcutsEditor* self, QActionEvent* event) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->actionEvent(event);
    } else {
        ((VirtualKShortcutsEditor*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void KShortcutsEditor_QBaseActionEvent(KShortcutsEditor* self, QActionEvent* event) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->setKShortcutsEditor_ActionEvent_IsBase(true);
        vkshortcutseditor->actionEvent(event);
    } else {
        ((VirtualKShortcutsEditor*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutsEditor_OnActionEvent(KShortcutsEditor* self, intptr_t slot) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->setKShortcutsEditor_ActionEvent_Callback(reinterpret_cast<VirtualKShortcutsEditor::KShortcutsEditor_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KShortcutsEditor_DragEnterEvent(KShortcutsEditor* self, QDragEnterEvent* event) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->dragEnterEvent(event);
    } else {
        ((VirtualKShortcutsEditor*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void KShortcutsEditor_QBaseDragEnterEvent(KShortcutsEditor* self, QDragEnterEvent* event) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->setKShortcutsEditor_DragEnterEvent_IsBase(true);
        vkshortcutseditor->dragEnterEvent(event);
    } else {
        ((VirtualKShortcutsEditor*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutsEditor_OnDragEnterEvent(KShortcutsEditor* self, intptr_t slot) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->setKShortcutsEditor_DragEnterEvent_Callback(reinterpret_cast<VirtualKShortcutsEditor::KShortcutsEditor_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KShortcutsEditor_DragMoveEvent(KShortcutsEditor* self, QDragMoveEvent* event) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->dragMoveEvent(event);
    } else {
        ((VirtualKShortcutsEditor*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void KShortcutsEditor_QBaseDragMoveEvent(KShortcutsEditor* self, QDragMoveEvent* event) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->setKShortcutsEditor_DragMoveEvent_IsBase(true);
        vkshortcutseditor->dragMoveEvent(event);
    } else {
        ((VirtualKShortcutsEditor*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutsEditor_OnDragMoveEvent(KShortcutsEditor* self, intptr_t slot) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->setKShortcutsEditor_DragMoveEvent_Callback(reinterpret_cast<VirtualKShortcutsEditor::KShortcutsEditor_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KShortcutsEditor_DragLeaveEvent(KShortcutsEditor* self, QDragLeaveEvent* event) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->dragLeaveEvent(event);
    } else {
        ((VirtualKShortcutsEditor*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void KShortcutsEditor_QBaseDragLeaveEvent(KShortcutsEditor* self, QDragLeaveEvent* event) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->setKShortcutsEditor_DragLeaveEvent_IsBase(true);
        vkshortcutseditor->dragLeaveEvent(event);
    } else {
        ((VirtualKShortcutsEditor*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutsEditor_OnDragLeaveEvent(KShortcutsEditor* self, intptr_t slot) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->setKShortcutsEditor_DragLeaveEvent_Callback(reinterpret_cast<VirtualKShortcutsEditor::KShortcutsEditor_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KShortcutsEditor_DropEvent(KShortcutsEditor* self, QDropEvent* event) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->dropEvent(event);
    } else {
        ((VirtualKShortcutsEditor*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void KShortcutsEditor_QBaseDropEvent(KShortcutsEditor* self, QDropEvent* event) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->setKShortcutsEditor_DropEvent_IsBase(true);
        vkshortcutseditor->dropEvent(event);
    } else {
        ((VirtualKShortcutsEditor*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutsEditor_OnDropEvent(KShortcutsEditor* self, intptr_t slot) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->setKShortcutsEditor_DropEvent_Callback(reinterpret_cast<VirtualKShortcutsEditor::KShortcutsEditor_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KShortcutsEditor_ShowEvent(KShortcutsEditor* self, QShowEvent* event) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->showEvent(event);
    } else {
        ((VirtualKShortcutsEditor*)self)->showEvent(event);
    }
}

// Base class handler implementation
void KShortcutsEditor_QBaseShowEvent(KShortcutsEditor* self, QShowEvent* event) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->setKShortcutsEditor_ShowEvent_IsBase(true);
        vkshortcutseditor->showEvent(event);
    } else {
        ((VirtualKShortcutsEditor*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutsEditor_OnShowEvent(KShortcutsEditor* self, intptr_t slot) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->setKShortcutsEditor_ShowEvent_Callback(reinterpret_cast<VirtualKShortcutsEditor::KShortcutsEditor_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KShortcutsEditor_HideEvent(KShortcutsEditor* self, QHideEvent* event) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->hideEvent(event);
    } else {
        ((VirtualKShortcutsEditor*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void KShortcutsEditor_QBaseHideEvent(KShortcutsEditor* self, QHideEvent* event) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->setKShortcutsEditor_HideEvent_IsBase(true);
        vkshortcutseditor->hideEvent(event);
    } else {
        ((VirtualKShortcutsEditor*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutsEditor_OnHideEvent(KShortcutsEditor* self, intptr_t slot) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->setKShortcutsEditor_HideEvent_Callback(reinterpret_cast<VirtualKShortcutsEditor::KShortcutsEditor_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KShortcutsEditor_NativeEvent(KShortcutsEditor* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        return vkshortcutseditor->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKShortcutsEditor*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool KShortcutsEditor_QBaseNativeEvent(KShortcutsEditor* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->setKShortcutsEditor_NativeEvent_IsBase(true);
        return vkshortcutseditor->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKShortcutsEditor*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutsEditor_OnNativeEvent(KShortcutsEditor* self, intptr_t slot) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->setKShortcutsEditor_NativeEvent_Callback(reinterpret_cast<VirtualKShortcutsEditor::KShortcutsEditor_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KShortcutsEditor_ChangeEvent(KShortcutsEditor* self, QEvent* param1) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->changeEvent(param1);
    } else {
        ((VirtualKShortcutsEditor*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void KShortcutsEditor_QBaseChangeEvent(KShortcutsEditor* self, QEvent* param1) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->setKShortcutsEditor_ChangeEvent_IsBase(true);
        vkshortcutseditor->changeEvent(param1);
    } else {
        ((VirtualKShortcutsEditor*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutsEditor_OnChangeEvent(KShortcutsEditor* self, intptr_t slot) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->setKShortcutsEditor_ChangeEvent_Callback(reinterpret_cast<VirtualKShortcutsEditor::KShortcutsEditor_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int KShortcutsEditor_Metric(const KShortcutsEditor* self, int param1) {
    auto* vkshortcutseditor = const_cast<VirtualKShortcutsEditor*>(dynamic_cast<const VirtualKShortcutsEditor*>(self));
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        return vkshortcutseditor->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKShortcutsEditor*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int KShortcutsEditor_QBaseMetric(const KShortcutsEditor* self, int param1) {
    auto* vkshortcutseditor = const_cast<VirtualKShortcutsEditor*>(dynamic_cast<const VirtualKShortcutsEditor*>(self));
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->setKShortcutsEditor_Metric_IsBase(true);
        return vkshortcutseditor->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKShortcutsEditor*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutsEditor_OnMetric(const KShortcutsEditor* self, intptr_t slot) {
    auto* vkshortcutseditor = const_cast<VirtualKShortcutsEditor*>(dynamic_cast<const VirtualKShortcutsEditor*>(self));
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->setKShortcutsEditor_Metric_Callback(reinterpret_cast<VirtualKShortcutsEditor::KShortcutsEditor_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void KShortcutsEditor_InitPainter(const KShortcutsEditor* self, QPainter* painter) {
    auto* vkshortcutseditor = const_cast<VirtualKShortcutsEditor*>(dynamic_cast<const VirtualKShortcutsEditor*>(self));
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->initPainter(painter);
    } else {
        ((VirtualKShortcutsEditor*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void KShortcutsEditor_QBaseInitPainter(const KShortcutsEditor* self, QPainter* painter) {
    auto* vkshortcutseditor = const_cast<VirtualKShortcutsEditor*>(dynamic_cast<const VirtualKShortcutsEditor*>(self));
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->setKShortcutsEditor_InitPainter_IsBase(true);
        vkshortcutseditor->initPainter(painter);
    } else {
        ((VirtualKShortcutsEditor*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutsEditor_OnInitPainter(const KShortcutsEditor* self, intptr_t slot) {
    auto* vkshortcutseditor = const_cast<VirtualKShortcutsEditor*>(dynamic_cast<const VirtualKShortcutsEditor*>(self));
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->setKShortcutsEditor_InitPainter_Callback(reinterpret_cast<VirtualKShortcutsEditor::KShortcutsEditor_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* KShortcutsEditor_Redirected(const KShortcutsEditor* self, QPoint* offset) {
    auto* vkshortcutseditor = const_cast<VirtualKShortcutsEditor*>(dynamic_cast<const VirtualKShortcutsEditor*>(self));
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        return vkshortcutseditor->redirected(offset);
    } else {
        return ((VirtualKShortcutsEditor*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* KShortcutsEditor_QBaseRedirected(const KShortcutsEditor* self, QPoint* offset) {
    auto* vkshortcutseditor = const_cast<VirtualKShortcutsEditor*>(dynamic_cast<const VirtualKShortcutsEditor*>(self));
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->setKShortcutsEditor_Redirected_IsBase(true);
        return vkshortcutseditor->redirected(offset);
    } else {
        return ((VirtualKShortcutsEditor*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutsEditor_OnRedirected(const KShortcutsEditor* self, intptr_t slot) {
    auto* vkshortcutseditor = const_cast<VirtualKShortcutsEditor*>(dynamic_cast<const VirtualKShortcutsEditor*>(self));
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->setKShortcutsEditor_Redirected_Callback(reinterpret_cast<VirtualKShortcutsEditor::KShortcutsEditor_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* KShortcutsEditor_SharedPainter(const KShortcutsEditor* self) {
    auto* vkshortcutseditor = const_cast<VirtualKShortcutsEditor*>(dynamic_cast<const VirtualKShortcutsEditor*>(self));
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        return vkshortcutseditor->sharedPainter();
    } else {
        return ((VirtualKShortcutsEditor*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* KShortcutsEditor_QBaseSharedPainter(const KShortcutsEditor* self) {
    auto* vkshortcutseditor = const_cast<VirtualKShortcutsEditor*>(dynamic_cast<const VirtualKShortcutsEditor*>(self));
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->setKShortcutsEditor_SharedPainter_IsBase(true);
        return vkshortcutseditor->sharedPainter();
    } else {
        return ((VirtualKShortcutsEditor*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutsEditor_OnSharedPainter(const KShortcutsEditor* self, intptr_t slot) {
    auto* vkshortcutseditor = const_cast<VirtualKShortcutsEditor*>(dynamic_cast<const VirtualKShortcutsEditor*>(self));
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->setKShortcutsEditor_SharedPainter_Callback(reinterpret_cast<VirtualKShortcutsEditor::KShortcutsEditor_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void KShortcutsEditor_InputMethodEvent(KShortcutsEditor* self, QInputMethodEvent* param1) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->inputMethodEvent(param1);
    } else {
        ((VirtualKShortcutsEditor*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void KShortcutsEditor_QBaseInputMethodEvent(KShortcutsEditor* self, QInputMethodEvent* param1) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->setKShortcutsEditor_InputMethodEvent_IsBase(true);
        vkshortcutseditor->inputMethodEvent(param1);
    } else {
        ((VirtualKShortcutsEditor*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutsEditor_OnInputMethodEvent(KShortcutsEditor* self, intptr_t slot) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->setKShortcutsEditor_InputMethodEvent_Callback(reinterpret_cast<VirtualKShortcutsEditor::KShortcutsEditor_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* KShortcutsEditor_InputMethodQuery(const KShortcutsEditor* self, int param1) {
    auto* vkshortcutseditor = const_cast<VirtualKShortcutsEditor*>(dynamic_cast<const VirtualKShortcutsEditor*>(self));
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        return new QVariant(vkshortcutseditor->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKShortcutsEditor*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* KShortcutsEditor_QBaseInputMethodQuery(const KShortcutsEditor* self, int param1) {
    auto* vkshortcutseditor = const_cast<VirtualKShortcutsEditor*>(dynamic_cast<const VirtualKShortcutsEditor*>(self));
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->setKShortcutsEditor_InputMethodQuery_IsBase(true);
        return new QVariant(vkshortcutseditor->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKShortcutsEditor*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutsEditor_OnInputMethodQuery(const KShortcutsEditor* self, intptr_t slot) {
    auto* vkshortcutseditor = const_cast<VirtualKShortcutsEditor*>(dynamic_cast<const VirtualKShortcutsEditor*>(self));
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->setKShortcutsEditor_InputMethodQuery_Callback(reinterpret_cast<VirtualKShortcutsEditor::KShortcutsEditor_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool KShortcutsEditor_FocusNextPrevChild(KShortcutsEditor* self, bool next) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        return vkshortcutseditor->focusNextPrevChild(next);
    } else {
        return ((VirtualKShortcutsEditor*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool KShortcutsEditor_QBaseFocusNextPrevChild(KShortcutsEditor* self, bool next) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->setKShortcutsEditor_FocusNextPrevChild_IsBase(true);
        return vkshortcutseditor->focusNextPrevChild(next);
    } else {
        return ((VirtualKShortcutsEditor*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutsEditor_OnFocusNextPrevChild(KShortcutsEditor* self, intptr_t slot) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->setKShortcutsEditor_FocusNextPrevChild_Callback(reinterpret_cast<VirtualKShortcutsEditor::KShortcutsEditor_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KShortcutsEditor_EventFilter(KShortcutsEditor* self, QObject* watched, QEvent* event) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        return vkshortcutseditor->eventFilter(watched, event);
    } else {
        return self->KShortcutsEditor::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KShortcutsEditor_QBaseEventFilter(KShortcutsEditor* self, QObject* watched, QEvent* event) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->setKShortcutsEditor_EventFilter_IsBase(true);
        return vkshortcutseditor->eventFilter(watched, event);
    } else {
        return self->KShortcutsEditor::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutsEditor_OnEventFilter(KShortcutsEditor* self, intptr_t slot) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->setKShortcutsEditor_EventFilter_Callback(reinterpret_cast<VirtualKShortcutsEditor::KShortcutsEditor_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KShortcutsEditor_TimerEvent(KShortcutsEditor* self, QTimerEvent* event) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->timerEvent(event);
    } else {
        ((VirtualKShortcutsEditor*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KShortcutsEditor_QBaseTimerEvent(KShortcutsEditor* self, QTimerEvent* event) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->setKShortcutsEditor_TimerEvent_IsBase(true);
        vkshortcutseditor->timerEvent(event);
    } else {
        ((VirtualKShortcutsEditor*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutsEditor_OnTimerEvent(KShortcutsEditor* self, intptr_t slot) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->setKShortcutsEditor_TimerEvent_Callback(reinterpret_cast<VirtualKShortcutsEditor::KShortcutsEditor_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KShortcutsEditor_ChildEvent(KShortcutsEditor* self, QChildEvent* event) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->childEvent(event);
    } else {
        ((VirtualKShortcutsEditor*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KShortcutsEditor_QBaseChildEvent(KShortcutsEditor* self, QChildEvent* event) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->setKShortcutsEditor_ChildEvent_IsBase(true);
        vkshortcutseditor->childEvent(event);
    } else {
        ((VirtualKShortcutsEditor*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutsEditor_OnChildEvent(KShortcutsEditor* self, intptr_t slot) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->setKShortcutsEditor_ChildEvent_Callback(reinterpret_cast<VirtualKShortcutsEditor::KShortcutsEditor_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KShortcutsEditor_CustomEvent(KShortcutsEditor* self, QEvent* event) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->customEvent(event);
    } else {
        ((VirtualKShortcutsEditor*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KShortcutsEditor_QBaseCustomEvent(KShortcutsEditor* self, QEvent* event) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->setKShortcutsEditor_CustomEvent_IsBase(true);
        vkshortcutseditor->customEvent(event);
    } else {
        ((VirtualKShortcutsEditor*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutsEditor_OnCustomEvent(KShortcutsEditor* self, intptr_t slot) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->setKShortcutsEditor_CustomEvent_Callback(reinterpret_cast<VirtualKShortcutsEditor::KShortcutsEditor_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KShortcutsEditor_ConnectNotify(KShortcutsEditor* self, const QMetaMethod* signal) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->connectNotify(*signal);
    } else {
        ((VirtualKShortcutsEditor*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KShortcutsEditor_QBaseConnectNotify(KShortcutsEditor* self, const QMetaMethod* signal) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->setKShortcutsEditor_ConnectNotify_IsBase(true);
        vkshortcutseditor->connectNotify(*signal);
    } else {
        ((VirtualKShortcutsEditor*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutsEditor_OnConnectNotify(KShortcutsEditor* self, intptr_t slot) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->setKShortcutsEditor_ConnectNotify_Callback(reinterpret_cast<VirtualKShortcutsEditor::KShortcutsEditor_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KShortcutsEditor_DisconnectNotify(KShortcutsEditor* self, const QMetaMethod* signal) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->disconnectNotify(*signal);
    } else {
        ((VirtualKShortcutsEditor*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KShortcutsEditor_QBaseDisconnectNotify(KShortcutsEditor* self, const QMetaMethod* signal) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->setKShortcutsEditor_DisconnectNotify_IsBase(true);
        vkshortcutseditor->disconnectNotify(*signal);
    } else {
        ((VirtualKShortcutsEditor*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutsEditor_OnDisconnectNotify(KShortcutsEditor* self, intptr_t slot) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->setKShortcutsEditor_DisconnectNotify_Callback(reinterpret_cast<VirtualKShortcutsEditor::KShortcutsEditor_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KShortcutsEditor_UpdateMicroFocus(KShortcutsEditor* self) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->updateMicroFocus();
    } else {
        ((VirtualKShortcutsEditor*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void KShortcutsEditor_QBaseUpdateMicroFocus(KShortcutsEditor* self) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->setKShortcutsEditor_UpdateMicroFocus_IsBase(true);
        vkshortcutseditor->updateMicroFocus();
    } else {
        ((VirtualKShortcutsEditor*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutsEditor_OnUpdateMicroFocus(KShortcutsEditor* self, intptr_t slot) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->setKShortcutsEditor_UpdateMicroFocus_Callback(reinterpret_cast<VirtualKShortcutsEditor::KShortcutsEditor_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void KShortcutsEditor_Create(KShortcutsEditor* self) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->create();
    } else {
        ((VirtualKShortcutsEditor*)self)->create();
    }
}

// Base class handler implementation
void KShortcutsEditor_QBaseCreate(KShortcutsEditor* self) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->setKShortcutsEditor_Create_IsBase(true);
        vkshortcutseditor->create();
    } else {
        ((VirtualKShortcutsEditor*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutsEditor_OnCreate(KShortcutsEditor* self, intptr_t slot) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->setKShortcutsEditor_Create_Callback(reinterpret_cast<VirtualKShortcutsEditor::KShortcutsEditor_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void KShortcutsEditor_Destroy(KShortcutsEditor* self) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->destroy();
    } else {
        ((VirtualKShortcutsEditor*)self)->destroy();
    }
}

// Base class handler implementation
void KShortcutsEditor_QBaseDestroy(KShortcutsEditor* self) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->setKShortcutsEditor_Destroy_IsBase(true);
        vkshortcutseditor->destroy();
    } else {
        ((VirtualKShortcutsEditor*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutsEditor_OnDestroy(KShortcutsEditor* self, intptr_t slot) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->setKShortcutsEditor_Destroy_Callback(reinterpret_cast<VirtualKShortcutsEditor::KShortcutsEditor_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool KShortcutsEditor_FocusNextChild(KShortcutsEditor* self) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        return vkshortcutseditor->focusNextChild();
    } else {
        return ((VirtualKShortcutsEditor*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool KShortcutsEditor_QBaseFocusNextChild(KShortcutsEditor* self) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->setKShortcutsEditor_FocusNextChild_IsBase(true);
        return vkshortcutseditor->focusNextChild();
    } else {
        return ((VirtualKShortcutsEditor*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutsEditor_OnFocusNextChild(KShortcutsEditor* self, intptr_t slot) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->setKShortcutsEditor_FocusNextChild_Callback(reinterpret_cast<VirtualKShortcutsEditor::KShortcutsEditor_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KShortcutsEditor_FocusPreviousChild(KShortcutsEditor* self) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        return vkshortcutseditor->focusPreviousChild();
    } else {
        return ((VirtualKShortcutsEditor*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool KShortcutsEditor_QBaseFocusPreviousChild(KShortcutsEditor* self) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->setKShortcutsEditor_FocusPreviousChild_IsBase(true);
        return vkshortcutseditor->focusPreviousChild();
    } else {
        return ((VirtualKShortcutsEditor*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutsEditor_OnFocusPreviousChild(KShortcutsEditor* self, intptr_t slot) {
    auto* vkshortcutseditor = dynamic_cast<VirtualKShortcutsEditor*>(self);
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->setKShortcutsEditor_FocusPreviousChild_Callback(reinterpret_cast<VirtualKShortcutsEditor::KShortcutsEditor_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KShortcutsEditor_Sender(const KShortcutsEditor* self) {
    auto* vkshortcutseditor = const_cast<VirtualKShortcutsEditor*>(dynamic_cast<const VirtualKShortcutsEditor*>(self));
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        return vkshortcutseditor->sender();
    } else {
        return ((VirtualKShortcutsEditor*)self)->sender();
    }
}

// Base class handler implementation
QObject* KShortcutsEditor_QBaseSender(const KShortcutsEditor* self) {
    auto* vkshortcutseditor = const_cast<VirtualKShortcutsEditor*>(dynamic_cast<const VirtualKShortcutsEditor*>(self));
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->setKShortcutsEditor_Sender_IsBase(true);
        return vkshortcutseditor->sender();
    } else {
        return ((VirtualKShortcutsEditor*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutsEditor_OnSender(const KShortcutsEditor* self, intptr_t slot) {
    auto* vkshortcutseditor = const_cast<VirtualKShortcutsEditor*>(dynamic_cast<const VirtualKShortcutsEditor*>(self));
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->setKShortcutsEditor_Sender_Callback(reinterpret_cast<VirtualKShortcutsEditor::KShortcutsEditor_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KShortcutsEditor_SenderSignalIndex(const KShortcutsEditor* self) {
    auto* vkshortcutseditor = const_cast<VirtualKShortcutsEditor*>(dynamic_cast<const VirtualKShortcutsEditor*>(self));
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        return vkshortcutseditor->senderSignalIndex();
    } else {
        return ((VirtualKShortcutsEditor*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KShortcutsEditor_QBaseSenderSignalIndex(const KShortcutsEditor* self) {
    auto* vkshortcutseditor = const_cast<VirtualKShortcutsEditor*>(dynamic_cast<const VirtualKShortcutsEditor*>(self));
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->setKShortcutsEditor_SenderSignalIndex_IsBase(true);
        return vkshortcutseditor->senderSignalIndex();
    } else {
        return ((VirtualKShortcutsEditor*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutsEditor_OnSenderSignalIndex(const KShortcutsEditor* self, intptr_t slot) {
    auto* vkshortcutseditor = const_cast<VirtualKShortcutsEditor*>(dynamic_cast<const VirtualKShortcutsEditor*>(self));
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->setKShortcutsEditor_SenderSignalIndex_Callback(reinterpret_cast<VirtualKShortcutsEditor::KShortcutsEditor_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KShortcutsEditor_Receivers(const KShortcutsEditor* self, const char* signal) {
    auto* vkshortcutseditor = const_cast<VirtualKShortcutsEditor*>(dynamic_cast<const VirtualKShortcutsEditor*>(self));
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        return vkshortcutseditor->receivers(signal);
    } else {
        return ((VirtualKShortcutsEditor*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KShortcutsEditor_QBaseReceivers(const KShortcutsEditor* self, const char* signal) {
    auto* vkshortcutseditor = const_cast<VirtualKShortcutsEditor*>(dynamic_cast<const VirtualKShortcutsEditor*>(self));
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->setKShortcutsEditor_Receivers_IsBase(true);
        return vkshortcutseditor->receivers(signal);
    } else {
        return ((VirtualKShortcutsEditor*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutsEditor_OnReceivers(const KShortcutsEditor* self, intptr_t slot) {
    auto* vkshortcutseditor = const_cast<VirtualKShortcutsEditor*>(dynamic_cast<const VirtualKShortcutsEditor*>(self));
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->setKShortcutsEditor_Receivers_Callback(reinterpret_cast<VirtualKShortcutsEditor::KShortcutsEditor_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KShortcutsEditor_IsSignalConnected(const KShortcutsEditor* self, const QMetaMethod* signal) {
    auto* vkshortcutseditor = const_cast<VirtualKShortcutsEditor*>(dynamic_cast<const VirtualKShortcutsEditor*>(self));
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        return vkshortcutseditor->isSignalConnected(*signal);
    } else {
        return ((VirtualKShortcutsEditor*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KShortcutsEditor_QBaseIsSignalConnected(const KShortcutsEditor* self, const QMetaMethod* signal) {
    auto* vkshortcutseditor = const_cast<VirtualKShortcutsEditor*>(dynamic_cast<const VirtualKShortcutsEditor*>(self));
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->setKShortcutsEditor_IsSignalConnected_IsBase(true);
        return vkshortcutseditor->isSignalConnected(*signal);
    } else {
        return ((VirtualKShortcutsEditor*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutsEditor_OnIsSignalConnected(const KShortcutsEditor* self, intptr_t slot) {
    auto* vkshortcutseditor = const_cast<VirtualKShortcutsEditor*>(dynamic_cast<const VirtualKShortcutsEditor*>(self));
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->setKShortcutsEditor_IsSignalConnected_Callback(reinterpret_cast<VirtualKShortcutsEditor::KShortcutsEditor_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double KShortcutsEditor_GetDecodedMetricF(const KShortcutsEditor* self, int metricA, int metricB) {
    auto* vkshortcutseditor = const_cast<VirtualKShortcutsEditor*>(dynamic_cast<const VirtualKShortcutsEditor*>(self));
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        return vkshortcutseditor->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKShortcutsEditor*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double KShortcutsEditor_QBaseGetDecodedMetricF(const KShortcutsEditor* self, int metricA, int metricB) {
    auto* vkshortcutseditor = const_cast<VirtualKShortcutsEditor*>(dynamic_cast<const VirtualKShortcutsEditor*>(self));
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->setKShortcutsEditor_GetDecodedMetricF_IsBase(true);
        return vkshortcutseditor->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKShortcutsEditor*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutsEditor_OnGetDecodedMetricF(const KShortcutsEditor* self, intptr_t slot) {
    auto* vkshortcutseditor = const_cast<VirtualKShortcutsEditor*>(dynamic_cast<const VirtualKShortcutsEditor*>(self));
    if (vkshortcutseditor && vkshortcutseditor->isVirtualKShortcutsEditor) {
        vkshortcutseditor->setKShortcutsEditor_GetDecodedMetricF_Callback(reinterpret_cast<VirtualKShortcutsEditor::KShortcutsEditor_GetDecodedMetricF_Callback>(slot));
    }
}

void KShortcutsEditor_Delete(KShortcutsEditor* self) {
    delete self;
}
