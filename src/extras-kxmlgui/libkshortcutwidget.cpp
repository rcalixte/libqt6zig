#include <KActionCollection>
#include <KShortcutWidget>
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
#include <QKeySequence>
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
#include <kshortcutwidget.h>
#include "libkshortcutwidget.h"
#include "libkshortcutwidget.hxx"

KShortcutWidget* KShortcutWidget_new(QWidget* parent) {
    return new VirtualKShortcutWidget(parent);
}

KShortcutWidget* KShortcutWidget_new2() {
    return new VirtualKShortcutWidget();
}

QMetaObject* KShortcutWidget_MetaObject(const KShortcutWidget* self) {
    return (QMetaObject*)self->metaObject();
}

void* KShortcutWidget_Metacast(KShortcutWidget* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KShortcutWidget_Metacall(KShortcutWidget* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KShortcutWidget_Tr(const char* s) {
    auto _ret = KShortcutWidget::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KShortcutWidget_SetModifierlessAllowed(KShortcutWidget* self, bool allow) {
    self->setModifierlessAllowed(allow);
}

bool KShortcutWidget_IsModifierlessAllowed(KShortcutWidget* self) {
    return self->isModifierlessAllowed();
}

void KShortcutWidget_SetClearButtonsShown(KShortcutWidget* self, bool show) {
    self->setClearButtonsShown(show);
}

libqt_list /* of QKeySequence* */ KShortcutWidget_Shortcut(const KShortcutWidget* self) {
    QList<QKeySequence> _ret = self->shortcut();
    // Convert QList<> from C++ memory to manually-managed C memory
    QKeySequence** _arr = static_cast<QKeySequence**>(malloc(sizeof(QKeySequence*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QKeySequence(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void KShortcutWidget_SetCheckActionCollections(KShortcutWidget* self, const libqt_list /* of KActionCollection* */ actionCollections) {
    QList<KActionCollection*> actionCollections_QList;
    actionCollections_QList.reserve(actionCollections.len);
    KActionCollection** actionCollections_arr = static_cast<KActionCollection**>(actionCollections.data);
    for (size_t i = 0; i < actionCollections.len; ++i) {
        actionCollections_QList.push_back(actionCollections_arr[i]);
    }
    self->setCheckActionCollections(actionCollections_QList);
}

void KShortcutWidget_ShortcutChanged(KShortcutWidget* self, const libqt_list /* of QKeySequence* */ cut) {
    QList<QKeySequence> cut_QList;
    cut_QList.reserve(cut.len);
    QKeySequence** cut_arr = static_cast<QKeySequence**>(cut.data);
    for (size_t i = 0; i < cut.len; ++i) {
        cut_QList.push_back(*(cut_arr[i]));
    }
    self->shortcutChanged(cut_QList);
}

void KShortcutWidget_Connect_ShortcutChanged(KShortcutWidget* self, intptr_t slot) {
    void (*slotFunc)(KShortcutWidget*, libqt_list /* of QKeySequence* */) = reinterpret_cast<void (*)(KShortcutWidget*, libqt_list /* of QKeySequence* */)>(slot);
    KShortcutWidget::connect(self,
                             static_cast<void (KShortcutWidget::*)(const QList<QKeySequence>&)>(&KShortcutWidget::shortcutChanged),
                             [self, slotFunc](const QList<QKeySequence>& cut) {
                                 const QList<QKeySequence>& cut_ret = cut;
                                 // Convert QList<> from C++ memory to manually-managed C memory
                                 QKeySequence** cut_arr = static_cast<QKeySequence**>(malloc(sizeof(QKeySequence*) * (cut_ret.size())));
                                 for (qsizetype i = 0; i < cut_ret.size(); ++i) {
                                     cut_arr[i] = new QKeySequence(cut_ret[i]);
                                 }
                                 libqt_list cut_out;
                                 cut_out.len = cut_ret.size();
                                 cut_out.data = static_cast<void*>(cut_arr);
                                 libqt_list /* of QKeySequence* */ sigval1 = cut_out;
                                 slotFunc(self, sigval1);
                                 free(cut_arr);
                             });
}

void KShortcutWidget_SetShortcut(KShortcutWidget* self, const libqt_list /* of QKeySequence* */ cut) {
    QList<QKeySequence> cut_QList;
    cut_QList.reserve(cut.len);
    QKeySequence** cut_arr = static_cast<QKeySequence**>(cut.data);
    for (size_t i = 0; i < cut.len; ++i) {
        cut_QList.push_back(*(cut_arr[i]));
    }
    self->setShortcut(cut_QList);
}

void KShortcutWidget_ClearShortcut(KShortcutWidget* self) {
    self->clearShortcut();
}

void KShortcutWidget_ApplyStealShortcut(KShortcutWidget* self) {
    self->applyStealShortcut();
}

libqt_string KShortcutWidget_Tr2(const char* s, const char* c) {
    auto _ret = KShortcutWidget::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KShortcutWidget_Tr3(const char* s, const char* c, int n) {
    auto _ret = KShortcutWidget::tr(s, c, static_cast<int>(n));
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
QMetaObject* KShortcutWidget_SuperMetaObject(const KShortcutWidget* self) {
    return (QMetaObject*)self->KShortcutWidget::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KShortcutWidget_OnMetaObject(KShortcutWidget* self, intptr_t slot) {
    if (auto* vkshortcutwidget = const_cast<VirtualKShortcutWidget*>(dynamic_cast<const VirtualKShortcutWidget*>(self)))
        vkshortcutwidget->kshortcutwidget_metaobject_callback = reinterpret_cast<VirtualKShortcutWidget::KShortcutWidget_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KShortcutWidget_SuperMetacast(KShortcutWidget* self, const char* param1) {
    return self->KShortcutWidget::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KShortcutWidget_OnMetacast(KShortcutWidget* self, intptr_t slot) {
    if (auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self))
        vkshortcutwidget->kshortcutwidget_metacast_callback = reinterpret_cast<VirtualKShortcutWidget::KShortcutWidget_Metacast_Callback>(slot);
}

// Base class handler implementation
int KShortcutWidget_SuperMetacall(KShortcutWidget* self, int param1, int param2, void** param3) {
    return self->KShortcutWidget::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KShortcutWidget_OnMetacall(KShortcutWidget* self, intptr_t slot) {
    if (auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self))
        vkshortcutwidget->kshortcutwidget_metacall_callback = reinterpret_cast<VirtualKShortcutWidget::KShortcutWidget_Metacall_Callback>(slot);
}

// Derived class handler implementation
int KShortcutWidget_DevType(const KShortcutWidget* self) {
    return self->devType();
}

// Base class handler implementation
int KShortcutWidget_SuperDevType(const KShortcutWidget* self) {
    return self->KShortcutWidget::devType();
}

// Auxiliary method to allow providing re-implementation
void KShortcutWidget_OnDevType(KShortcutWidget* self, intptr_t slot) {
    if (auto* vkshortcutwidget = const_cast<VirtualKShortcutWidget*>(dynamic_cast<const VirtualKShortcutWidget*>(self)))
        vkshortcutwidget->kshortcutwidget_devtype_callback = reinterpret_cast<VirtualKShortcutWidget::KShortcutWidget_DevType_Callback>(slot);
}

// Derived class handler implementation
void KShortcutWidget_SetVisible(KShortcutWidget* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void KShortcutWidget_SuperSetVisible(KShortcutWidget* self, bool visible) {
    self->KShortcutWidget::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void KShortcutWidget_OnSetVisible(KShortcutWidget* self, intptr_t slot) {
    if (auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self))
        vkshortcutwidget->kshortcutwidget_setvisible_callback = reinterpret_cast<VirtualKShortcutWidget::KShortcutWidget_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* KShortcutWidget_SizeHint(const KShortcutWidget* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* KShortcutWidget_SuperSizeHint(const KShortcutWidget* self) {
    return new QSize(self->KShortcutWidget::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void KShortcutWidget_OnSizeHint(KShortcutWidget* self, intptr_t slot) {
    if (auto* vkshortcutwidget = const_cast<VirtualKShortcutWidget*>(dynamic_cast<const VirtualKShortcutWidget*>(self)))
        vkshortcutwidget->kshortcutwidget_sizehint_callback = reinterpret_cast<VirtualKShortcutWidget::KShortcutWidget_SizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* KShortcutWidget_MinimumSizeHint(const KShortcutWidget* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* KShortcutWidget_SuperMinimumSizeHint(const KShortcutWidget* self) {
    return new QSize(self->KShortcutWidget::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void KShortcutWidget_OnMinimumSizeHint(KShortcutWidget* self, intptr_t slot) {
    if (auto* vkshortcutwidget = const_cast<VirtualKShortcutWidget*>(dynamic_cast<const VirtualKShortcutWidget*>(self)))
        vkshortcutwidget->kshortcutwidget_minimumsizehint_callback = reinterpret_cast<VirtualKShortcutWidget::KShortcutWidget_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
int KShortcutWidget_HeightForWidth(const KShortcutWidget* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int KShortcutWidget_SuperHeightForWidth(const KShortcutWidget* self, int param1) {
    return self->KShortcutWidget::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void KShortcutWidget_OnHeightForWidth(KShortcutWidget* self, intptr_t slot) {
    if (auto* vkshortcutwidget = const_cast<VirtualKShortcutWidget*>(dynamic_cast<const VirtualKShortcutWidget*>(self)))
        vkshortcutwidget->kshortcutwidget_heightforwidth_callback = reinterpret_cast<VirtualKShortcutWidget::KShortcutWidget_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool KShortcutWidget_HasHeightForWidth(const KShortcutWidget* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool KShortcutWidget_SuperHasHeightForWidth(const KShortcutWidget* self) {
    return self->KShortcutWidget::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void KShortcutWidget_OnHasHeightForWidth(KShortcutWidget* self, intptr_t slot) {
    if (auto* vkshortcutwidget = const_cast<VirtualKShortcutWidget*>(dynamic_cast<const VirtualKShortcutWidget*>(self)))
        vkshortcutwidget->kshortcutwidget_hasheightforwidth_callback = reinterpret_cast<VirtualKShortcutWidget::KShortcutWidget_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* KShortcutWidget_PaintEngine(const KShortcutWidget* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* KShortcutWidget_SuperPaintEngine(const KShortcutWidget* self) {
    return self->KShortcutWidget::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void KShortcutWidget_OnPaintEngine(KShortcutWidget* self, intptr_t slot) {
    if (auto* vkshortcutwidget = const_cast<VirtualKShortcutWidget*>(dynamic_cast<const VirtualKShortcutWidget*>(self)))
        vkshortcutwidget->kshortcutwidget_paintengine_callback = reinterpret_cast<VirtualKShortcutWidget::KShortcutWidget_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
bool KShortcutWidget_Event(KShortcutWidget* self, QEvent* event) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget) {
        return vkshortcutwidget->event(event);
    } else {
        qFatal("Error: Protected virtual method KShortcutWidget::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool KShortcutWidget_SuperEvent(KShortcutWidget* self, QEvent* event) {
    if (auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self)) {
        return vkshortcutwidget->KShortcutWidget::event(event);
    } else
        qFatal("Error: Protected virtual method KShortcutWidget::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KShortcutWidget_OnEvent(KShortcutWidget* self, intptr_t slot) {
    if (auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self))
        vkshortcutwidget->kshortcutwidget_event_callback = reinterpret_cast<VirtualKShortcutWidget::KShortcutWidget_Event_Callback>(slot);
}

// Derived class handler implementation
void KShortcutWidget_MousePressEvent(KShortcutWidget* self, QMouseEvent* event) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget) {
        vkshortcutwidget->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method KShortcutWidget::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KShortcutWidget_SuperMousePressEvent(KShortcutWidget* self, QMouseEvent* event) {
    if (auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self)) {
        vkshortcutwidget->KShortcutWidget::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method KShortcutWidget::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KShortcutWidget_OnMousePressEvent(KShortcutWidget* self, intptr_t slot) {
    if (auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self))
        vkshortcutwidget->kshortcutwidget_mousepressevent_callback = reinterpret_cast<VirtualKShortcutWidget::KShortcutWidget_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void KShortcutWidget_MouseReleaseEvent(KShortcutWidget* self, QMouseEvent* event) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget) {
        vkshortcutwidget->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KShortcutWidget::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KShortcutWidget_SuperMouseReleaseEvent(KShortcutWidget* self, QMouseEvent* event) {
    if (auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self)) {
        vkshortcutwidget->KShortcutWidget::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KShortcutWidget::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KShortcutWidget_OnMouseReleaseEvent(KShortcutWidget* self, intptr_t slot) {
    if (auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self))
        vkshortcutwidget->kshortcutwidget_mousereleaseevent_callback = reinterpret_cast<VirtualKShortcutWidget::KShortcutWidget_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KShortcutWidget_MouseDoubleClickEvent(KShortcutWidget* self, QMouseEvent* event) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget) {
        vkshortcutwidget->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method KShortcutWidget::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KShortcutWidget_SuperMouseDoubleClickEvent(KShortcutWidget* self, QMouseEvent* event) {
    if (auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self)) {
        vkshortcutwidget->KShortcutWidget::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method KShortcutWidget::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KShortcutWidget_OnMouseDoubleClickEvent(KShortcutWidget* self, intptr_t slot) {
    if (auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self))
        vkshortcutwidget->kshortcutwidget_mousedoubleclickevent_callback = reinterpret_cast<VirtualKShortcutWidget::KShortcutWidget_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void KShortcutWidget_MouseMoveEvent(KShortcutWidget* self, QMouseEvent* event) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget) {
        vkshortcutwidget->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KShortcutWidget::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KShortcutWidget_SuperMouseMoveEvent(KShortcutWidget* self, QMouseEvent* event) {
    if (auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self)) {
        vkshortcutwidget->KShortcutWidget::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KShortcutWidget::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KShortcutWidget_OnMouseMoveEvent(KShortcutWidget* self, intptr_t slot) {
    if (auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self))
        vkshortcutwidget->kshortcutwidget_mousemoveevent_callback = reinterpret_cast<VirtualKShortcutWidget::KShortcutWidget_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KShortcutWidget_WheelEvent(KShortcutWidget* self, QWheelEvent* event) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget) {
        vkshortcutwidget->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method KShortcutWidget::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KShortcutWidget_SuperWheelEvent(KShortcutWidget* self, QWheelEvent* event) {
    if (auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self)) {
        vkshortcutwidget->KShortcutWidget::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method KShortcutWidget::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KShortcutWidget_OnWheelEvent(KShortcutWidget* self, intptr_t slot) {
    if (auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self))
        vkshortcutwidget->kshortcutwidget_wheelevent_callback = reinterpret_cast<VirtualKShortcutWidget::KShortcutWidget_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void KShortcutWidget_KeyPressEvent(KShortcutWidget* self, QKeyEvent* event) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget) {
        vkshortcutwidget->keyPressEvent(event);
    } else {
        qFatal("Error: Protected virtual method KShortcutWidget::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KShortcutWidget_SuperKeyPressEvent(KShortcutWidget* self, QKeyEvent* event) {
    if (auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self)) {
        vkshortcutwidget->KShortcutWidget::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method KShortcutWidget::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KShortcutWidget_OnKeyPressEvent(KShortcutWidget* self, intptr_t slot) {
    if (auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self))
        vkshortcutwidget->kshortcutwidget_keypressevent_callback = reinterpret_cast<VirtualKShortcutWidget::KShortcutWidget_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void KShortcutWidget_KeyReleaseEvent(KShortcutWidget* self, QKeyEvent* event) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget) {
        vkshortcutwidget->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KShortcutWidget::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KShortcutWidget_SuperKeyReleaseEvent(KShortcutWidget* self, QKeyEvent* event) {
    if (auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self)) {
        vkshortcutwidget->KShortcutWidget::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KShortcutWidget::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KShortcutWidget_OnKeyReleaseEvent(KShortcutWidget* self, intptr_t slot) {
    if (auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self))
        vkshortcutwidget->kshortcutwidget_keyreleaseevent_callback = reinterpret_cast<VirtualKShortcutWidget::KShortcutWidget_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KShortcutWidget_FocusInEvent(KShortcutWidget* self, QFocusEvent* event) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget) {
        vkshortcutwidget->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method KShortcutWidget::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KShortcutWidget_SuperFocusInEvent(KShortcutWidget* self, QFocusEvent* event) {
    if (auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self)) {
        vkshortcutwidget->KShortcutWidget::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method KShortcutWidget::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KShortcutWidget_OnFocusInEvent(KShortcutWidget* self, intptr_t slot) {
    if (auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self))
        vkshortcutwidget->kshortcutwidget_focusinevent_callback = reinterpret_cast<VirtualKShortcutWidget::KShortcutWidget_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void KShortcutWidget_FocusOutEvent(KShortcutWidget* self, QFocusEvent* event) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget) {
        vkshortcutwidget->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method KShortcutWidget::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KShortcutWidget_SuperFocusOutEvent(KShortcutWidget* self, QFocusEvent* event) {
    if (auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self)) {
        vkshortcutwidget->KShortcutWidget::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method KShortcutWidget::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KShortcutWidget_OnFocusOutEvent(KShortcutWidget* self, intptr_t slot) {
    if (auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self))
        vkshortcutwidget->kshortcutwidget_focusoutevent_callback = reinterpret_cast<VirtualKShortcutWidget::KShortcutWidget_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void KShortcutWidget_EnterEvent(KShortcutWidget* self, QEnterEvent* event) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget) {
        vkshortcutwidget->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KShortcutWidget::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KShortcutWidget_SuperEnterEvent(KShortcutWidget* self, QEnterEvent* event) {
    if (auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self)) {
        vkshortcutwidget->KShortcutWidget::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method KShortcutWidget::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KShortcutWidget_OnEnterEvent(KShortcutWidget* self, intptr_t slot) {
    if (auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self))
        vkshortcutwidget->kshortcutwidget_enterevent_callback = reinterpret_cast<VirtualKShortcutWidget::KShortcutWidget_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KShortcutWidget_LeaveEvent(KShortcutWidget* self, QEvent* event) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget) {
        vkshortcutwidget->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KShortcutWidget::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KShortcutWidget_SuperLeaveEvent(KShortcutWidget* self, QEvent* event) {
    if (auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self)) {
        vkshortcutwidget->KShortcutWidget::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KShortcutWidget::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KShortcutWidget_OnLeaveEvent(KShortcutWidget* self, intptr_t slot) {
    if (auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self))
        vkshortcutwidget->kshortcutwidget_leaveevent_callback = reinterpret_cast<VirtualKShortcutWidget::KShortcutWidget_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KShortcutWidget_PaintEvent(KShortcutWidget* self, QPaintEvent* event) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget) {
        vkshortcutwidget->paintEvent(event);
    } else {
        qFatal("Error: Protected virtual method KShortcutWidget::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KShortcutWidget_SuperPaintEvent(KShortcutWidget* self, QPaintEvent* event) {
    if (auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self)) {
        vkshortcutwidget->KShortcutWidget::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method KShortcutWidget::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KShortcutWidget_OnPaintEvent(KShortcutWidget* self, intptr_t slot) {
    if (auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self))
        vkshortcutwidget->kshortcutwidget_paintevent_callback = reinterpret_cast<VirtualKShortcutWidget::KShortcutWidget_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void KShortcutWidget_MoveEvent(KShortcutWidget* self, QMoveEvent* event) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget) {
        vkshortcutwidget->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KShortcutWidget::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KShortcutWidget_SuperMoveEvent(KShortcutWidget* self, QMoveEvent* event) {
    if (auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self)) {
        vkshortcutwidget->KShortcutWidget::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method KShortcutWidget::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KShortcutWidget_OnMoveEvent(KShortcutWidget* self, intptr_t slot) {
    if (auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self))
        vkshortcutwidget->kshortcutwidget_moveevent_callback = reinterpret_cast<VirtualKShortcutWidget::KShortcutWidget_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KShortcutWidget_ResizeEvent(KShortcutWidget* self, QResizeEvent* event) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget) {
        vkshortcutwidget->resizeEvent(event);
    } else {
        qFatal("Error: Protected virtual method KShortcutWidget::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KShortcutWidget_SuperResizeEvent(KShortcutWidget* self, QResizeEvent* event) {
    if (auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self)) {
        vkshortcutwidget->KShortcutWidget::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method KShortcutWidget::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KShortcutWidget_OnResizeEvent(KShortcutWidget* self, intptr_t slot) {
    if (auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self))
        vkshortcutwidget->kshortcutwidget_resizeevent_callback = reinterpret_cast<VirtualKShortcutWidget::KShortcutWidget_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void KShortcutWidget_CloseEvent(KShortcutWidget* self, QCloseEvent* event) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget) {
        vkshortcutwidget->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method KShortcutWidget::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KShortcutWidget_SuperCloseEvent(KShortcutWidget* self, QCloseEvent* event) {
    if (auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self)) {
        vkshortcutwidget->KShortcutWidget::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method KShortcutWidget::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KShortcutWidget_OnCloseEvent(KShortcutWidget* self, intptr_t slot) {
    if (auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self))
        vkshortcutwidget->kshortcutwidget_closeevent_callback = reinterpret_cast<VirtualKShortcutWidget::KShortcutWidget_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void KShortcutWidget_ContextMenuEvent(KShortcutWidget* self, QContextMenuEvent* event) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget) {
        vkshortcutwidget->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method KShortcutWidget::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KShortcutWidget_SuperContextMenuEvent(KShortcutWidget* self, QContextMenuEvent* event) {
    if (auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self)) {
        vkshortcutwidget->KShortcutWidget::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method KShortcutWidget::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KShortcutWidget_OnContextMenuEvent(KShortcutWidget* self, intptr_t slot) {
    if (auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self))
        vkshortcutwidget->kshortcutwidget_contextmenuevent_callback = reinterpret_cast<VirtualKShortcutWidget::KShortcutWidget_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void KShortcutWidget_TabletEvent(KShortcutWidget* self, QTabletEvent* event) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget) {
        vkshortcutwidget->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method KShortcutWidget::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KShortcutWidget_SuperTabletEvent(KShortcutWidget* self, QTabletEvent* event) {
    if (auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self)) {
        vkshortcutwidget->KShortcutWidget::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method KShortcutWidget::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KShortcutWidget_OnTabletEvent(KShortcutWidget* self, intptr_t slot) {
    if (auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self))
        vkshortcutwidget->kshortcutwidget_tabletevent_callback = reinterpret_cast<VirtualKShortcutWidget::KShortcutWidget_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void KShortcutWidget_ActionEvent(KShortcutWidget* self, QActionEvent* event) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget) {
        vkshortcutwidget->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method KShortcutWidget::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KShortcutWidget_SuperActionEvent(KShortcutWidget* self, QActionEvent* event) {
    if (auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self)) {
        vkshortcutwidget->KShortcutWidget::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method KShortcutWidget::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KShortcutWidget_OnActionEvent(KShortcutWidget* self, intptr_t slot) {
    if (auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self))
        vkshortcutwidget->kshortcutwidget_actionevent_callback = reinterpret_cast<VirtualKShortcutWidget::KShortcutWidget_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void KShortcutWidget_DragEnterEvent(KShortcutWidget* self, QDragEnterEvent* event) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget) {
        vkshortcutwidget->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KShortcutWidget::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KShortcutWidget_SuperDragEnterEvent(KShortcutWidget* self, QDragEnterEvent* event) {
    if (auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self)) {
        vkshortcutwidget->KShortcutWidget::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method KShortcutWidget::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KShortcutWidget_OnDragEnterEvent(KShortcutWidget* self, intptr_t slot) {
    if (auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self))
        vkshortcutwidget->kshortcutwidget_dragenterevent_callback = reinterpret_cast<VirtualKShortcutWidget::KShortcutWidget_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KShortcutWidget_DragMoveEvent(KShortcutWidget* self, QDragMoveEvent* event) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget) {
        vkshortcutwidget->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KShortcutWidget::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KShortcutWidget_SuperDragMoveEvent(KShortcutWidget* self, QDragMoveEvent* event) {
    if (auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self)) {
        vkshortcutwidget->KShortcutWidget::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KShortcutWidget::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KShortcutWidget_OnDragMoveEvent(KShortcutWidget* self, intptr_t slot) {
    if (auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self))
        vkshortcutwidget->kshortcutwidget_dragmoveevent_callback = reinterpret_cast<VirtualKShortcutWidget::KShortcutWidget_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KShortcutWidget_DragLeaveEvent(KShortcutWidget* self, QDragLeaveEvent* event) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget) {
        vkshortcutwidget->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KShortcutWidget::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KShortcutWidget_SuperDragLeaveEvent(KShortcutWidget* self, QDragLeaveEvent* event) {
    if (auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self)) {
        vkshortcutwidget->KShortcutWidget::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KShortcutWidget::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KShortcutWidget_OnDragLeaveEvent(KShortcutWidget* self, intptr_t slot) {
    if (auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self))
        vkshortcutwidget->kshortcutwidget_dragleaveevent_callback = reinterpret_cast<VirtualKShortcutWidget::KShortcutWidget_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KShortcutWidget_DropEvent(KShortcutWidget* self, QDropEvent* event) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget) {
        vkshortcutwidget->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method KShortcutWidget::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KShortcutWidget_SuperDropEvent(KShortcutWidget* self, QDropEvent* event) {
    if (auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self)) {
        vkshortcutwidget->KShortcutWidget::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method KShortcutWidget::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KShortcutWidget_OnDropEvent(KShortcutWidget* self, intptr_t slot) {
    if (auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self))
        vkshortcutwidget->kshortcutwidget_dropevent_callback = reinterpret_cast<VirtualKShortcutWidget::KShortcutWidget_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void KShortcutWidget_ShowEvent(KShortcutWidget* self, QShowEvent* event) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget) {
        vkshortcutwidget->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method KShortcutWidget::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KShortcutWidget_SuperShowEvent(KShortcutWidget* self, QShowEvent* event) {
    if (auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self)) {
        vkshortcutwidget->KShortcutWidget::showEvent(event);
    } else
        qFatal("Error: Protected virtual method KShortcutWidget::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KShortcutWidget_OnShowEvent(KShortcutWidget* self, intptr_t slot) {
    if (auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self))
        vkshortcutwidget->kshortcutwidget_showevent_callback = reinterpret_cast<VirtualKShortcutWidget::KShortcutWidget_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void KShortcutWidget_HideEvent(KShortcutWidget* self, QHideEvent* event) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget) {
        vkshortcutwidget->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method KShortcutWidget::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KShortcutWidget_SuperHideEvent(KShortcutWidget* self, QHideEvent* event) {
    if (auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self)) {
        vkshortcutwidget->KShortcutWidget::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method KShortcutWidget::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KShortcutWidget_OnHideEvent(KShortcutWidget* self, intptr_t slot) {
    if (auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self))
        vkshortcutwidget->kshortcutwidget_hideevent_callback = reinterpret_cast<VirtualKShortcutWidget::KShortcutWidget_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool KShortcutWidget_NativeEvent(KShortcutWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget) {
        return vkshortcutwidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method KShortcutWidget::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool KShortcutWidget_SuperNativeEvent(KShortcutWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self)) {
        return vkshortcutwidget->KShortcutWidget::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method KShortcutWidget::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KShortcutWidget_OnNativeEvent(KShortcutWidget* self, intptr_t slot) {
    if (auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self))
        vkshortcutwidget->kshortcutwidget_nativeevent_callback = reinterpret_cast<VirtualKShortcutWidget::KShortcutWidget_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
void KShortcutWidget_ChangeEvent(KShortcutWidget* self, QEvent* param1) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget) {
        vkshortcutwidget->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KShortcutWidget::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KShortcutWidget_SuperChangeEvent(KShortcutWidget* self, QEvent* param1) {
    if (auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self)) {
        vkshortcutwidget->KShortcutWidget::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KShortcutWidget::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KShortcutWidget_OnChangeEvent(KShortcutWidget* self, intptr_t slot) {
    if (auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self))
        vkshortcutwidget->kshortcutwidget_changeevent_callback = reinterpret_cast<VirtualKShortcutWidget::KShortcutWidget_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
int KShortcutWidget_Metric(const KShortcutWidget* self, int param1) {
    auto* vkshortcutwidget = const_cast<VirtualKShortcutWidget*>(dynamic_cast<const VirtualKShortcutWidget*>(self));
    if (vkshortcutwidget) {
        return vkshortcutwidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method KShortcutWidget::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int KShortcutWidget_SuperMetric(const KShortcutWidget* self, int param1) {
    if (auto* vkshortcutwidget = const_cast<VirtualKShortcutWidget*>(dynamic_cast<const VirtualKShortcutWidget*>(self))) {
        return vkshortcutwidget->KShortcutWidget::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method KShortcutWidget::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KShortcutWidget_OnMetric(KShortcutWidget* self, intptr_t slot) {
    if (auto* vkshortcutwidget = const_cast<VirtualKShortcutWidget*>(dynamic_cast<const VirtualKShortcutWidget*>(self)))
        vkshortcutwidget->kshortcutwidget_metric_callback = reinterpret_cast<VirtualKShortcutWidget::KShortcutWidget_Metric_Callback>(slot);
}

// Derived class handler implementation
void KShortcutWidget_InitPainter(const KShortcutWidget* self, QPainter* painter) {
    auto* vkshortcutwidget = const_cast<VirtualKShortcutWidget*>(dynamic_cast<const VirtualKShortcutWidget*>(self));
    if (vkshortcutwidget) {
        vkshortcutwidget->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method KShortcutWidget::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void KShortcutWidget_SuperInitPainter(const KShortcutWidget* self, QPainter* painter) {
    if (auto* vkshortcutwidget = const_cast<VirtualKShortcutWidget*>(dynamic_cast<const VirtualKShortcutWidget*>(self))) {
        vkshortcutwidget->KShortcutWidget::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method KShortcutWidget::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KShortcutWidget_OnInitPainter(KShortcutWidget* self, intptr_t slot) {
    if (auto* vkshortcutwidget = const_cast<VirtualKShortcutWidget*>(dynamic_cast<const VirtualKShortcutWidget*>(self)))
        vkshortcutwidget->kshortcutwidget_initpainter_callback = reinterpret_cast<VirtualKShortcutWidget::KShortcutWidget_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* KShortcutWidget_Redirected(const KShortcutWidget* self, QPoint* offset) {
    auto* vkshortcutwidget = const_cast<VirtualKShortcutWidget*>(dynamic_cast<const VirtualKShortcutWidget*>(self));
    if (vkshortcutwidget) {
        return vkshortcutwidget->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method KShortcutWidget::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* KShortcutWidget_SuperRedirected(const KShortcutWidget* self, QPoint* offset) {
    if (auto* vkshortcutwidget = const_cast<VirtualKShortcutWidget*>(dynamic_cast<const VirtualKShortcutWidget*>(self))) {
        return vkshortcutwidget->KShortcutWidget::redirected(offset);
    } else
        qFatal("Error: Protected virtual method KShortcutWidget::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KShortcutWidget_OnRedirected(KShortcutWidget* self, intptr_t slot) {
    if (auto* vkshortcutwidget = const_cast<VirtualKShortcutWidget*>(dynamic_cast<const VirtualKShortcutWidget*>(self)))
        vkshortcutwidget->kshortcutwidget_redirected_callback = reinterpret_cast<VirtualKShortcutWidget::KShortcutWidget_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* KShortcutWidget_SharedPainter(const KShortcutWidget* self) {
    auto* vkshortcutwidget = const_cast<VirtualKShortcutWidget*>(dynamic_cast<const VirtualKShortcutWidget*>(self));
    if (vkshortcutwidget) {
        return vkshortcutwidget->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method KShortcutWidget::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* KShortcutWidget_SuperSharedPainter(const KShortcutWidget* self) {
    if (auto* vkshortcutwidget = const_cast<VirtualKShortcutWidget*>(dynamic_cast<const VirtualKShortcutWidget*>(self))) {
        return vkshortcutwidget->KShortcutWidget::sharedPainter();
    } else
        qFatal("Error: Protected virtual method KShortcutWidget::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KShortcutWidget_OnSharedPainter(KShortcutWidget* self, intptr_t slot) {
    if (auto* vkshortcutwidget = const_cast<VirtualKShortcutWidget*>(dynamic_cast<const VirtualKShortcutWidget*>(self)))
        vkshortcutwidget->kshortcutwidget_sharedpainter_callback = reinterpret_cast<VirtualKShortcutWidget::KShortcutWidget_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void KShortcutWidget_InputMethodEvent(KShortcutWidget* self, QInputMethodEvent* param1) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget) {
        vkshortcutwidget->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KShortcutWidget::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KShortcutWidget_SuperInputMethodEvent(KShortcutWidget* self, QInputMethodEvent* param1) {
    if (auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self)) {
        vkshortcutwidget->KShortcutWidget::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method KShortcutWidget::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KShortcutWidget_OnInputMethodEvent(KShortcutWidget* self, intptr_t slot) {
    if (auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self))
        vkshortcutwidget->kshortcutwidget_inputmethodevent_callback = reinterpret_cast<VirtualKShortcutWidget::KShortcutWidget_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* KShortcutWidget_InputMethodQuery(const KShortcutWidget* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* KShortcutWidget_SuperInputMethodQuery(const KShortcutWidget* self, int param1) {
    return new QVariant(self->KShortcutWidget::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void KShortcutWidget_OnInputMethodQuery(KShortcutWidget* self, intptr_t slot) {
    if (auto* vkshortcutwidget = const_cast<VirtualKShortcutWidget*>(dynamic_cast<const VirtualKShortcutWidget*>(self)))
        vkshortcutwidget->kshortcutwidget_inputmethodquery_callback = reinterpret_cast<VirtualKShortcutWidget::KShortcutWidget_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool KShortcutWidget_FocusNextPrevChild(KShortcutWidget* self, bool next) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget) {
        return vkshortcutwidget->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method KShortcutWidget::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool KShortcutWidget_SuperFocusNextPrevChild(KShortcutWidget* self, bool next) {
    if (auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self)) {
        return vkshortcutwidget->KShortcutWidget::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method KShortcutWidget::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KShortcutWidget_OnFocusNextPrevChild(KShortcutWidget* self, intptr_t slot) {
    if (auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self))
        vkshortcutwidget->kshortcutwidget_focusnextprevchild_callback = reinterpret_cast<VirtualKShortcutWidget::KShortcutWidget_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
bool KShortcutWidget_EventFilter(KShortcutWidget* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KShortcutWidget_SuperEventFilter(KShortcutWidget* self, QObject* watched, QEvent* event) {
    return self->KShortcutWidget::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KShortcutWidget_OnEventFilter(KShortcutWidget* self, intptr_t slot) {
    if (auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self))
        vkshortcutwidget->kshortcutwidget_eventfilter_callback = reinterpret_cast<VirtualKShortcutWidget::KShortcutWidget_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KShortcutWidget_TimerEvent(KShortcutWidget* self, QTimerEvent* event) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget) {
        vkshortcutwidget->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KShortcutWidget::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KShortcutWidget_SuperTimerEvent(KShortcutWidget* self, QTimerEvent* event) {
    if (auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self)) {
        vkshortcutwidget->KShortcutWidget::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KShortcutWidget::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KShortcutWidget_OnTimerEvent(KShortcutWidget* self, intptr_t slot) {
    if (auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self))
        vkshortcutwidget->kshortcutwidget_timerevent_callback = reinterpret_cast<VirtualKShortcutWidget::KShortcutWidget_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KShortcutWidget_ChildEvent(KShortcutWidget* self, QChildEvent* event) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget) {
        vkshortcutwidget->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KShortcutWidget::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KShortcutWidget_SuperChildEvent(KShortcutWidget* self, QChildEvent* event) {
    if (auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self)) {
        vkshortcutwidget->KShortcutWidget::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KShortcutWidget::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KShortcutWidget_OnChildEvent(KShortcutWidget* self, intptr_t slot) {
    if (auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self))
        vkshortcutwidget->kshortcutwidget_childevent_callback = reinterpret_cast<VirtualKShortcutWidget::KShortcutWidget_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KShortcutWidget_CustomEvent(KShortcutWidget* self, QEvent* event) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget) {
        vkshortcutwidget->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KShortcutWidget::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KShortcutWidget_SuperCustomEvent(KShortcutWidget* self, QEvent* event) {
    if (auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self)) {
        vkshortcutwidget->KShortcutWidget::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KShortcutWidget::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KShortcutWidget_OnCustomEvent(KShortcutWidget* self, intptr_t slot) {
    if (auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self))
        vkshortcutwidget->kshortcutwidget_customevent_callback = reinterpret_cast<VirtualKShortcutWidget::KShortcutWidget_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KShortcutWidget_ConnectNotify(KShortcutWidget* self, const QMetaMethod* signal) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget) {
        vkshortcutwidget->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KShortcutWidget::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KShortcutWidget_SuperConnectNotify(KShortcutWidget* self, const QMetaMethod* signal) {
    if (auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self)) {
        vkshortcutwidget->KShortcutWidget::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KShortcutWidget::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KShortcutWidget_OnConnectNotify(KShortcutWidget* self, intptr_t slot) {
    if (auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self))
        vkshortcutwidget->kshortcutwidget_connectnotify_callback = reinterpret_cast<VirtualKShortcutWidget::KShortcutWidget_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KShortcutWidget_DisconnectNotify(KShortcutWidget* self, const QMetaMethod* signal) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget) {
        vkshortcutwidget->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KShortcutWidget::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KShortcutWidget_SuperDisconnectNotify(KShortcutWidget* self, const QMetaMethod* signal) {
    if (auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self)) {
        vkshortcutwidget->KShortcutWidget::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KShortcutWidget::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KShortcutWidget_OnDisconnectNotify(KShortcutWidget* self, intptr_t slot) {
    if (auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self))
        vkshortcutwidget->kshortcutwidget_disconnectnotify_callback = reinterpret_cast<VirtualKShortcutWidget::KShortcutWidget_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void KShortcutWidget_UpdateMicroFocus(KShortcutWidget* self) {
    if (auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self)) {
        vkshortcutwidget->VirtualKShortcutWidget::updateMicroFocus();
    } else
        qFatal("Error: Protected method KShortcutWidget::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void KShortcutWidget_Create(KShortcutWidget* self) {
    if (auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self)) {
        vkshortcutwidget->VirtualKShortcutWidget::create();
    } else
        qFatal("Error: Protected method KShortcutWidget::create called without a directly constructed type");
}

// Derived class protected handler implementation
void KShortcutWidget_Destroy(KShortcutWidget* self) {
    if (auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self)) {
        vkshortcutwidget->VirtualKShortcutWidget::destroy();
    } else
        qFatal("Error: Protected method KShortcutWidget::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool KShortcutWidget_FocusNextChild(KShortcutWidget* self) {
    if (auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self)) {
        return vkshortcutwidget->VirtualKShortcutWidget::focusNextChild();
    } else
        qFatal("Error: Protected method KShortcutWidget::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool KShortcutWidget_FocusPreviousChild(KShortcutWidget* self) {
    if (auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self)) {
        return vkshortcutwidget->VirtualKShortcutWidget::focusPreviousChild();
    } else
        qFatal("Error: Protected method KShortcutWidget::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KShortcutWidget_Sender(const KShortcutWidget* self) {
    if (auto* vkshortcutwidget = const_cast<VirtualKShortcutWidget*>(dynamic_cast<const VirtualKShortcutWidget*>(self))) {
        return vkshortcutwidget->VirtualKShortcutWidget::sender();
    } else
        qFatal("Error: Protected method KShortcutWidget::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KShortcutWidget_SenderSignalIndex(const KShortcutWidget* self) {
    if (auto* vkshortcutwidget = const_cast<VirtualKShortcutWidget*>(dynamic_cast<const VirtualKShortcutWidget*>(self))) {
        return vkshortcutwidget->VirtualKShortcutWidget::senderSignalIndex();
    } else
        qFatal("Error: Protected method KShortcutWidget::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KShortcutWidget_Receivers(const KShortcutWidget* self, const char* signal) {
    if (auto* vkshortcutwidget = const_cast<VirtualKShortcutWidget*>(dynamic_cast<const VirtualKShortcutWidget*>(self))) {
        return vkshortcutwidget->VirtualKShortcutWidget::receivers(signal);
    } else
        qFatal("Error: Protected method KShortcutWidget::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KShortcutWidget_IsSignalConnected(const KShortcutWidget* self, const QMetaMethod* signal) {
    if (auto* vkshortcutwidget = const_cast<VirtualKShortcutWidget*>(dynamic_cast<const VirtualKShortcutWidget*>(self))) {
        return vkshortcutwidget->VirtualKShortcutWidget::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KShortcutWidget::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double KShortcutWidget_GetDecodedMetricF(const KShortcutWidget* self, int metricA, int metricB) {
    if (auto* vkshortcutwidget = const_cast<VirtualKShortcutWidget*>(dynamic_cast<const VirtualKShortcutWidget*>(self))) {
        return vkshortcutwidget->VirtualKShortcutWidget::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method KShortcutWidget::getDecodedMetricF called without a directly constructed type");
}

void KShortcutWidget_Delete(KShortcutWidget* self) {
    delete self;
}
