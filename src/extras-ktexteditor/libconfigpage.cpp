#define WORKAROUND_INNER_CLASS_DEFINITION_KTextEditor__ConfigPage
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
#include <QIcon>
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
#include <configpage.h>
#include "libconfigpage.h"
#include "libconfigpage.hxx"

KTextEditor__ConfigPage* KTextEditor__ConfigPage_new(QWidget* parent) {
    return new VirtualKTextEditorConfigPage(parent);
}

QMetaObject* KTextEditor__ConfigPage_MetaObject(const KTextEditor__ConfigPage* self) {
    return (QMetaObject*)self->metaObject();
}

void* KTextEditor__ConfigPage_Metacast(KTextEditor__ConfigPage* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KTextEditor__ConfigPage_Metacall(KTextEditor__ConfigPage* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KTextEditor__ConfigPage_Tr(const char* s) {
    auto _ret = KTextEditor::ConfigPage::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KTextEditor__ConfigPage_Name(const KTextEditor__ConfigPage* self) {
    auto _ret = self->name();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KTextEditor__ConfigPage_FullName(const KTextEditor__ConfigPage* self) {
    auto _ret = self->fullName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QIcon* KTextEditor__ConfigPage_Icon(const KTextEditor__ConfigPage* self) {
    return new QIcon(self->icon());
}

void KTextEditor__ConfigPage_Apply(KTextEditor__ConfigPage* self) {
    self->apply();
}

void KTextEditor__ConfigPage_Reset(KTextEditor__ConfigPage* self) {
    self->reset();
}

void KTextEditor__ConfigPage_Defaults(KTextEditor__ConfigPage* self) {
    self->defaults();
}

void KTextEditor__ConfigPage_Changed(KTextEditor__ConfigPage* self) {
    self->changed();
}

void KTextEditor__ConfigPage_Connect_Changed(KTextEditor__ConfigPage* self, intptr_t slot) {
    void (*slotFunc)(KTextEditor__ConfigPage*) = reinterpret_cast<void (*)(KTextEditor__ConfigPage*)>(slot);
    KTextEditor::ConfigPage::connect(self,
                                     static_cast<void (KTextEditor::ConfigPage::*)()>(&KTextEditor::ConfigPage::changed),
                                     [self, slotFunc]() {
                                         slotFunc(self);
                                     });
}

libqt_string KTextEditor__ConfigPage_Tr2(const char* s, const char* c) {
    auto _ret = KTextEditor::ConfigPage::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KTextEditor__ConfigPage_Tr3(const char* s, const char* c, int n) {
    auto _ret = KTextEditor::ConfigPage::tr(s, c, static_cast<int>(n));
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
QMetaObject* KTextEditor__ConfigPage_SuperMetaObject(const KTextEditor__ConfigPage* self) {
    return (QMetaObject*)self->KTextEditor::ConfigPage::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__ConfigPage_OnMetaObject(KTextEditor__ConfigPage* self, intptr_t slot) {
    if (auto* vktexteditorconfigpage = const_cast<VirtualKTextEditorConfigPage*>(dynamic_cast<const VirtualKTextEditorConfigPage*>(self)))
        vktexteditorconfigpage->ktexteditor__configpage_metaobject_callback = reinterpret_cast<VirtualKTextEditorConfigPage::KTextEditor__ConfigPage_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KTextEditor__ConfigPage_SuperMetacast(KTextEditor__ConfigPage* self, const char* param1) {
    return self->KTextEditor::ConfigPage::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__ConfigPage_OnMetacast(KTextEditor__ConfigPage* self, intptr_t slot) {
    if (auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self))
        vktexteditorconfigpage->ktexteditor__configpage_metacast_callback = reinterpret_cast<VirtualKTextEditorConfigPage::KTextEditor__ConfigPage_Metacast_Callback>(slot);
}

// Base class handler implementation
int KTextEditor__ConfigPage_SuperMetacall(KTextEditor__ConfigPage* self, int param1, int param2, void** param3) {
    return self->KTextEditor::ConfigPage::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__ConfigPage_OnMetacall(KTextEditor__ConfigPage* self, intptr_t slot) {
    if (auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self))
        vktexteditorconfigpage->ktexteditor__configpage_metacall_callback = reinterpret_cast<VirtualKTextEditorConfigPage::KTextEditor__ConfigPage_Metacall_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__ConfigPage_OnName(KTextEditor__ConfigPage* self, intptr_t slot) {
    if (auto* vktexteditorconfigpage = const_cast<VirtualKTextEditorConfigPage*>(dynamic_cast<const VirtualKTextEditorConfigPage*>(self)))
        vktexteditorconfigpage->ktexteditor__configpage_name_callback = reinterpret_cast<VirtualKTextEditorConfigPage::KTextEditor__ConfigPage_Name_Callback>(slot);
}

// Base class handler implementation
libqt_string KTextEditor__ConfigPage_SuperFullName(const KTextEditor__ConfigPage* self) {
    auto _ret = self->KTextEditor::ConfigPage::fullName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__ConfigPage_OnFullName(KTextEditor__ConfigPage* self, intptr_t slot) {
    if (auto* vktexteditorconfigpage = const_cast<VirtualKTextEditorConfigPage*>(dynamic_cast<const VirtualKTextEditorConfigPage*>(self)))
        vktexteditorconfigpage->ktexteditor__configpage_fullname_callback = reinterpret_cast<VirtualKTextEditorConfigPage::KTextEditor__ConfigPage_FullName_Callback>(slot);
}

// Base class handler implementation
QIcon* KTextEditor__ConfigPage_SuperIcon(const KTextEditor__ConfigPage* self) {
    return new QIcon(self->KTextEditor::ConfigPage::icon());
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__ConfigPage_OnIcon(KTextEditor__ConfigPage* self, intptr_t slot) {
    if (auto* vktexteditorconfigpage = const_cast<VirtualKTextEditorConfigPage*>(dynamic_cast<const VirtualKTextEditorConfigPage*>(self)))
        vktexteditorconfigpage->ktexteditor__configpage_icon_callback = reinterpret_cast<VirtualKTextEditorConfigPage::KTextEditor__ConfigPage_Icon_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__ConfigPage_OnApply(KTextEditor__ConfigPage* self, intptr_t slot) {
    if (auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self))
        vktexteditorconfigpage->ktexteditor__configpage_apply_callback = reinterpret_cast<VirtualKTextEditorConfigPage::KTextEditor__ConfigPage_Apply_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__ConfigPage_OnReset(KTextEditor__ConfigPage* self, intptr_t slot) {
    if (auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self))
        vktexteditorconfigpage->ktexteditor__configpage_reset_callback = reinterpret_cast<VirtualKTextEditorConfigPage::KTextEditor__ConfigPage_Reset_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__ConfigPage_OnDefaults(KTextEditor__ConfigPage* self, intptr_t slot) {
    if (auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self))
        vktexteditorconfigpage->ktexteditor__configpage_defaults_callback = reinterpret_cast<VirtualKTextEditorConfigPage::KTextEditor__ConfigPage_Defaults_Callback>(slot);
}

// Derived class handler implementation
int KTextEditor__ConfigPage_DevType(const KTextEditor__ConfigPage* self) {
    return self->devType();
}

// Base class handler implementation
int KTextEditor__ConfigPage_SuperDevType(const KTextEditor__ConfigPage* self) {
    return self->KTextEditor::ConfigPage::devType();
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__ConfigPage_OnDevType(KTextEditor__ConfigPage* self, intptr_t slot) {
    if (auto* vktexteditorconfigpage = const_cast<VirtualKTextEditorConfigPage*>(dynamic_cast<const VirtualKTextEditorConfigPage*>(self)))
        vktexteditorconfigpage->ktexteditor__configpage_devtype_callback = reinterpret_cast<VirtualKTextEditorConfigPage::KTextEditor__ConfigPage_DevType_Callback>(slot);
}

// Derived class handler implementation
void KTextEditor__ConfigPage_SetVisible(KTextEditor__ConfigPage* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void KTextEditor__ConfigPage_SuperSetVisible(KTextEditor__ConfigPage* self, bool visible) {
    self->KTextEditor::ConfigPage::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__ConfigPage_OnSetVisible(KTextEditor__ConfigPage* self, intptr_t slot) {
    if (auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self))
        vktexteditorconfigpage->ktexteditor__configpage_setvisible_callback = reinterpret_cast<VirtualKTextEditorConfigPage::KTextEditor__ConfigPage_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* KTextEditor__ConfigPage_SizeHint(const KTextEditor__ConfigPage* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* KTextEditor__ConfigPage_SuperSizeHint(const KTextEditor__ConfigPage* self) {
    return new QSize(self->KTextEditor::ConfigPage::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__ConfigPage_OnSizeHint(KTextEditor__ConfigPage* self, intptr_t slot) {
    if (auto* vktexteditorconfigpage = const_cast<VirtualKTextEditorConfigPage*>(dynamic_cast<const VirtualKTextEditorConfigPage*>(self)))
        vktexteditorconfigpage->ktexteditor__configpage_sizehint_callback = reinterpret_cast<VirtualKTextEditorConfigPage::KTextEditor__ConfigPage_SizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* KTextEditor__ConfigPage_MinimumSizeHint(const KTextEditor__ConfigPage* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* KTextEditor__ConfigPage_SuperMinimumSizeHint(const KTextEditor__ConfigPage* self) {
    return new QSize(self->KTextEditor::ConfigPage::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__ConfigPage_OnMinimumSizeHint(KTextEditor__ConfigPage* self, intptr_t slot) {
    if (auto* vktexteditorconfigpage = const_cast<VirtualKTextEditorConfigPage*>(dynamic_cast<const VirtualKTextEditorConfigPage*>(self)))
        vktexteditorconfigpage->ktexteditor__configpage_minimumsizehint_callback = reinterpret_cast<VirtualKTextEditorConfigPage::KTextEditor__ConfigPage_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
int KTextEditor__ConfigPage_HeightForWidth(const KTextEditor__ConfigPage* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int KTextEditor__ConfigPage_SuperHeightForWidth(const KTextEditor__ConfigPage* self, int param1) {
    return self->KTextEditor::ConfigPage::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__ConfigPage_OnHeightForWidth(KTextEditor__ConfigPage* self, intptr_t slot) {
    if (auto* vktexteditorconfigpage = const_cast<VirtualKTextEditorConfigPage*>(dynamic_cast<const VirtualKTextEditorConfigPage*>(self)))
        vktexteditorconfigpage->ktexteditor__configpage_heightforwidth_callback = reinterpret_cast<VirtualKTextEditorConfigPage::KTextEditor__ConfigPage_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool KTextEditor__ConfigPage_HasHeightForWidth(const KTextEditor__ConfigPage* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool KTextEditor__ConfigPage_SuperHasHeightForWidth(const KTextEditor__ConfigPage* self) {
    return self->KTextEditor::ConfigPage::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__ConfigPage_OnHasHeightForWidth(KTextEditor__ConfigPage* self, intptr_t slot) {
    if (auto* vktexteditorconfigpage = const_cast<VirtualKTextEditorConfigPage*>(dynamic_cast<const VirtualKTextEditorConfigPage*>(self)))
        vktexteditorconfigpage->ktexteditor__configpage_hasheightforwidth_callback = reinterpret_cast<VirtualKTextEditorConfigPage::KTextEditor__ConfigPage_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* KTextEditor__ConfigPage_PaintEngine(const KTextEditor__ConfigPage* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* KTextEditor__ConfigPage_SuperPaintEngine(const KTextEditor__ConfigPage* self) {
    return self->KTextEditor::ConfigPage::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__ConfigPage_OnPaintEngine(KTextEditor__ConfigPage* self, intptr_t slot) {
    if (auto* vktexteditorconfigpage = const_cast<VirtualKTextEditorConfigPage*>(dynamic_cast<const VirtualKTextEditorConfigPage*>(self)))
        vktexteditorconfigpage->ktexteditor__configpage_paintengine_callback = reinterpret_cast<VirtualKTextEditorConfigPage::KTextEditor__ConfigPage_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
bool KTextEditor__ConfigPage_Event(KTextEditor__ConfigPage* self, QEvent* event) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage) {
        return vktexteditorconfigpage->event(event);
    } else {
        qFatal("Error: Protected virtual method KTextEditor::ConfigPage::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool KTextEditor__ConfigPage_SuperEvent(KTextEditor__ConfigPage* self, QEvent* event) {
    if (auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self)) {
        return vktexteditorconfigpage->KTextEditor::ConfigPage::event(event);
    } else
        qFatal("Error: Protected virtual method KTextEditor::ConfigPage::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__ConfigPage_OnEvent(KTextEditor__ConfigPage* self, intptr_t slot) {
    if (auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self))
        vktexteditorconfigpage->ktexteditor__configpage_event_callback = reinterpret_cast<VirtualKTextEditorConfigPage::KTextEditor__ConfigPage_Event_Callback>(slot);
}

// Derived class handler implementation
void KTextEditor__ConfigPage_MousePressEvent(KTextEditor__ConfigPage* self, QMouseEvent* event) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage) {
        vktexteditorconfigpage->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method KTextEditor::ConfigPage::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTextEditor__ConfigPage_SuperMousePressEvent(KTextEditor__ConfigPage* self, QMouseEvent* event) {
    if (auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self)) {
        vktexteditorconfigpage->KTextEditor::ConfigPage::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method KTextEditor::ConfigPage::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__ConfigPage_OnMousePressEvent(KTextEditor__ConfigPage* self, intptr_t slot) {
    if (auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self))
        vktexteditorconfigpage->ktexteditor__configpage_mousepressevent_callback = reinterpret_cast<VirtualKTextEditorConfigPage::KTextEditor__ConfigPage_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void KTextEditor__ConfigPage_MouseReleaseEvent(KTextEditor__ConfigPage* self, QMouseEvent* event) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage) {
        vktexteditorconfigpage->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KTextEditor::ConfigPage::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTextEditor__ConfigPage_SuperMouseReleaseEvent(KTextEditor__ConfigPage* self, QMouseEvent* event) {
    if (auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self)) {
        vktexteditorconfigpage->KTextEditor::ConfigPage::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KTextEditor::ConfigPage::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__ConfigPage_OnMouseReleaseEvent(KTextEditor__ConfigPage* self, intptr_t slot) {
    if (auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self))
        vktexteditorconfigpage->ktexteditor__configpage_mousereleaseevent_callback = reinterpret_cast<VirtualKTextEditorConfigPage::KTextEditor__ConfigPage_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KTextEditor__ConfigPage_MouseDoubleClickEvent(KTextEditor__ConfigPage* self, QMouseEvent* event) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage) {
        vktexteditorconfigpage->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method KTextEditor::ConfigPage::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTextEditor__ConfigPage_SuperMouseDoubleClickEvent(KTextEditor__ConfigPage* self, QMouseEvent* event) {
    if (auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self)) {
        vktexteditorconfigpage->KTextEditor::ConfigPage::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method KTextEditor::ConfigPage::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__ConfigPage_OnMouseDoubleClickEvent(KTextEditor__ConfigPage* self, intptr_t slot) {
    if (auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self))
        vktexteditorconfigpage->ktexteditor__configpage_mousedoubleclickevent_callback = reinterpret_cast<VirtualKTextEditorConfigPage::KTextEditor__ConfigPage_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void KTextEditor__ConfigPage_MouseMoveEvent(KTextEditor__ConfigPage* self, QMouseEvent* event) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage) {
        vktexteditorconfigpage->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KTextEditor::ConfigPage::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTextEditor__ConfigPage_SuperMouseMoveEvent(KTextEditor__ConfigPage* self, QMouseEvent* event) {
    if (auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self)) {
        vktexteditorconfigpage->KTextEditor::ConfigPage::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KTextEditor::ConfigPage::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__ConfigPage_OnMouseMoveEvent(KTextEditor__ConfigPage* self, intptr_t slot) {
    if (auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self))
        vktexteditorconfigpage->ktexteditor__configpage_mousemoveevent_callback = reinterpret_cast<VirtualKTextEditorConfigPage::KTextEditor__ConfigPage_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KTextEditor__ConfigPage_WheelEvent(KTextEditor__ConfigPage* self, QWheelEvent* event) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage) {
        vktexteditorconfigpage->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method KTextEditor::ConfigPage::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTextEditor__ConfigPage_SuperWheelEvent(KTextEditor__ConfigPage* self, QWheelEvent* event) {
    if (auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self)) {
        vktexteditorconfigpage->KTextEditor::ConfigPage::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method KTextEditor::ConfigPage::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__ConfigPage_OnWheelEvent(KTextEditor__ConfigPage* self, intptr_t slot) {
    if (auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self))
        vktexteditorconfigpage->ktexteditor__configpage_wheelevent_callback = reinterpret_cast<VirtualKTextEditorConfigPage::KTextEditor__ConfigPage_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void KTextEditor__ConfigPage_KeyPressEvent(KTextEditor__ConfigPage* self, QKeyEvent* event) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage) {
        vktexteditorconfigpage->keyPressEvent(event);
    } else {
        qFatal("Error: Protected virtual method KTextEditor::ConfigPage::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTextEditor__ConfigPage_SuperKeyPressEvent(KTextEditor__ConfigPage* self, QKeyEvent* event) {
    if (auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self)) {
        vktexteditorconfigpage->KTextEditor::ConfigPage::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method KTextEditor::ConfigPage::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__ConfigPage_OnKeyPressEvent(KTextEditor__ConfigPage* self, intptr_t slot) {
    if (auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self))
        vktexteditorconfigpage->ktexteditor__configpage_keypressevent_callback = reinterpret_cast<VirtualKTextEditorConfigPage::KTextEditor__ConfigPage_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void KTextEditor__ConfigPage_KeyReleaseEvent(KTextEditor__ConfigPage* self, QKeyEvent* event) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage) {
        vktexteditorconfigpage->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KTextEditor::ConfigPage::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTextEditor__ConfigPage_SuperKeyReleaseEvent(KTextEditor__ConfigPage* self, QKeyEvent* event) {
    if (auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self)) {
        vktexteditorconfigpage->KTextEditor::ConfigPage::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KTextEditor::ConfigPage::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__ConfigPage_OnKeyReleaseEvent(KTextEditor__ConfigPage* self, intptr_t slot) {
    if (auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self))
        vktexteditorconfigpage->ktexteditor__configpage_keyreleaseevent_callback = reinterpret_cast<VirtualKTextEditorConfigPage::KTextEditor__ConfigPage_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KTextEditor__ConfigPage_FocusInEvent(KTextEditor__ConfigPage* self, QFocusEvent* event) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage) {
        vktexteditorconfigpage->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method KTextEditor::ConfigPage::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTextEditor__ConfigPage_SuperFocusInEvent(KTextEditor__ConfigPage* self, QFocusEvent* event) {
    if (auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self)) {
        vktexteditorconfigpage->KTextEditor::ConfigPage::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method KTextEditor::ConfigPage::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__ConfigPage_OnFocusInEvent(KTextEditor__ConfigPage* self, intptr_t slot) {
    if (auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self))
        vktexteditorconfigpage->ktexteditor__configpage_focusinevent_callback = reinterpret_cast<VirtualKTextEditorConfigPage::KTextEditor__ConfigPage_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void KTextEditor__ConfigPage_FocusOutEvent(KTextEditor__ConfigPage* self, QFocusEvent* event) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage) {
        vktexteditorconfigpage->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method KTextEditor::ConfigPage::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTextEditor__ConfigPage_SuperFocusOutEvent(KTextEditor__ConfigPage* self, QFocusEvent* event) {
    if (auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self)) {
        vktexteditorconfigpage->KTextEditor::ConfigPage::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method KTextEditor::ConfigPage::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__ConfigPage_OnFocusOutEvent(KTextEditor__ConfigPage* self, intptr_t slot) {
    if (auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self))
        vktexteditorconfigpage->ktexteditor__configpage_focusoutevent_callback = reinterpret_cast<VirtualKTextEditorConfigPage::KTextEditor__ConfigPage_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void KTextEditor__ConfigPage_EnterEvent(KTextEditor__ConfigPage* self, QEnterEvent* event) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage) {
        vktexteditorconfigpage->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KTextEditor::ConfigPage::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTextEditor__ConfigPage_SuperEnterEvent(KTextEditor__ConfigPage* self, QEnterEvent* event) {
    if (auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self)) {
        vktexteditorconfigpage->KTextEditor::ConfigPage::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method KTextEditor::ConfigPage::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__ConfigPage_OnEnterEvent(KTextEditor__ConfigPage* self, intptr_t slot) {
    if (auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self))
        vktexteditorconfigpage->ktexteditor__configpage_enterevent_callback = reinterpret_cast<VirtualKTextEditorConfigPage::KTextEditor__ConfigPage_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KTextEditor__ConfigPage_LeaveEvent(KTextEditor__ConfigPage* self, QEvent* event) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage) {
        vktexteditorconfigpage->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KTextEditor::ConfigPage::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTextEditor__ConfigPage_SuperLeaveEvent(KTextEditor__ConfigPage* self, QEvent* event) {
    if (auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self)) {
        vktexteditorconfigpage->KTextEditor::ConfigPage::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KTextEditor::ConfigPage::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__ConfigPage_OnLeaveEvent(KTextEditor__ConfigPage* self, intptr_t slot) {
    if (auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self))
        vktexteditorconfigpage->ktexteditor__configpage_leaveevent_callback = reinterpret_cast<VirtualKTextEditorConfigPage::KTextEditor__ConfigPage_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KTextEditor__ConfigPage_PaintEvent(KTextEditor__ConfigPage* self, QPaintEvent* event) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage) {
        vktexteditorconfigpage->paintEvent(event);
    } else {
        qFatal("Error: Protected virtual method KTextEditor::ConfigPage::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTextEditor__ConfigPage_SuperPaintEvent(KTextEditor__ConfigPage* self, QPaintEvent* event) {
    if (auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self)) {
        vktexteditorconfigpage->KTextEditor::ConfigPage::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method KTextEditor::ConfigPage::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__ConfigPage_OnPaintEvent(KTextEditor__ConfigPage* self, intptr_t slot) {
    if (auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self))
        vktexteditorconfigpage->ktexteditor__configpage_paintevent_callback = reinterpret_cast<VirtualKTextEditorConfigPage::KTextEditor__ConfigPage_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void KTextEditor__ConfigPage_MoveEvent(KTextEditor__ConfigPage* self, QMoveEvent* event) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage) {
        vktexteditorconfigpage->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KTextEditor::ConfigPage::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTextEditor__ConfigPage_SuperMoveEvent(KTextEditor__ConfigPage* self, QMoveEvent* event) {
    if (auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self)) {
        vktexteditorconfigpage->KTextEditor::ConfigPage::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method KTextEditor::ConfigPage::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__ConfigPage_OnMoveEvent(KTextEditor__ConfigPage* self, intptr_t slot) {
    if (auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self))
        vktexteditorconfigpage->ktexteditor__configpage_moveevent_callback = reinterpret_cast<VirtualKTextEditorConfigPage::KTextEditor__ConfigPage_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KTextEditor__ConfigPage_ResizeEvent(KTextEditor__ConfigPage* self, QResizeEvent* event) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage) {
        vktexteditorconfigpage->resizeEvent(event);
    } else {
        qFatal("Error: Protected virtual method KTextEditor::ConfigPage::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTextEditor__ConfigPage_SuperResizeEvent(KTextEditor__ConfigPage* self, QResizeEvent* event) {
    if (auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self)) {
        vktexteditorconfigpage->KTextEditor::ConfigPage::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method KTextEditor::ConfigPage::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__ConfigPage_OnResizeEvent(KTextEditor__ConfigPage* self, intptr_t slot) {
    if (auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self))
        vktexteditorconfigpage->ktexteditor__configpage_resizeevent_callback = reinterpret_cast<VirtualKTextEditorConfigPage::KTextEditor__ConfigPage_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void KTextEditor__ConfigPage_CloseEvent(KTextEditor__ConfigPage* self, QCloseEvent* event) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage) {
        vktexteditorconfigpage->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method KTextEditor::ConfigPage::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTextEditor__ConfigPage_SuperCloseEvent(KTextEditor__ConfigPage* self, QCloseEvent* event) {
    if (auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self)) {
        vktexteditorconfigpage->KTextEditor::ConfigPage::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method KTextEditor::ConfigPage::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__ConfigPage_OnCloseEvent(KTextEditor__ConfigPage* self, intptr_t slot) {
    if (auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self))
        vktexteditorconfigpage->ktexteditor__configpage_closeevent_callback = reinterpret_cast<VirtualKTextEditorConfigPage::KTextEditor__ConfigPage_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void KTextEditor__ConfigPage_ContextMenuEvent(KTextEditor__ConfigPage* self, QContextMenuEvent* event) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage) {
        vktexteditorconfigpage->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method KTextEditor::ConfigPage::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTextEditor__ConfigPage_SuperContextMenuEvent(KTextEditor__ConfigPage* self, QContextMenuEvent* event) {
    if (auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self)) {
        vktexteditorconfigpage->KTextEditor::ConfigPage::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method KTextEditor::ConfigPage::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__ConfigPage_OnContextMenuEvent(KTextEditor__ConfigPage* self, intptr_t slot) {
    if (auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self))
        vktexteditorconfigpage->ktexteditor__configpage_contextmenuevent_callback = reinterpret_cast<VirtualKTextEditorConfigPage::KTextEditor__ConfigPage_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void KTextEditor__ConfigPage_TabletEvent(KTextEditor__ConfigPage* self, QTabletEvent* event) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage) {
        vktexteditorconfigpage->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method KTextEditor::ConfigPage::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTextEditor__ConfigPage_SuperTabletEvent(KTextEditor__ConfigPage* self, QTabletEvent* event) {
    if (auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self)) {
        vktexteditorconfigpage->KTextEditor::ConfigPage::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method KTextEditor::ConfigPage::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__ConfigPage_OnTabletEvent(KTextEditor__ConfigPage* self, intptr_t slot) {
    if (auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self))
        vktexteditorconfigpage->ktexteditor__configpage_tabletevent_callback = reinterpret_cast<VirtualKTextEditorConfigPage::KTextEditor__ConfigPage_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void KTextEditor__ConfigPage_ActionEvent(KTextEditor__ConfigPage* self, QActionEvent* event) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage) {
        vktexteditorconfigpage->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method KTextEditor::ConfigPage::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTextEditor__ConfigPage_SuperActionEvent(KTextEditor__ConfigPage* self, QActionEvent* event) {
    if (auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self)) {
        vktexteditorconfigpage->KTextEditor::ConfigPage::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method KTextEditor::ConfigPage::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__ConfigPage_OnActionEvent(KTextEditor__ConfigPage* self, intptr_t slot) {
    if (auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self))
        vktexteditorconfigpage->ktexteditor__configpage_actionevent_callback = reinterpret_cast<VirtualKTextEditorConfigPage::KTextEditor__ConfigPage_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void KTextEditor__ConfigPage_DragEnterEvent(KTextEditor__ConfigPage* self, QDragEnterEvent* event) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage) {
        vktexteditorconfigpage->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KTextEditor::ConfigPage::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTextEditor__ConfigPage_SuperDragEnterEvent(KTextEditor__ConfigPage* self, QDragEnterEvent* event) {
    if (auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self)) {
        vktexteditorconfigpage->KTextEditor::ConfigPage::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method KTextEditor::ConfigPage::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__ConfigPage_OnDragEnterEvent(KTextEditor__ConfigPage* self, intptr_t slot) {
    if (auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self))
        vktexteditorconfigpage->ktexteditor__configpage_dragenterevent_callback = reinterpret_cast<VirtualKTextEditorConfigPage::KTextEditor__ConfigPage_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KTextEditor__ConfigPage_DragMoveEvent(KTextEditor__ConfigPage* self, QDragMoveEvent* event) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage) {
        vktexteditorconfigpage->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KTextEditor::ConfigPage::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTextEditor__ConfigPage_SuperDragMoveEvent(KTextEditor__ConfigPage* self, QDragMoveEvent* event) {
    if (auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self)) {
        vktexteditorconfigpage->KTextEditor::ConfigPage::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KTextEditor::ConfigPage::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__ConfigPage_OnDragMoveEvent(KTextEditor__ConfigPage* self, intptr_t slot) {
    if (auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self))
        vktexteditorconfigpage->ktexteditor__configpage_dragmoveevent_callback = reinterpret_cast<VirtualKTextEditorConfigPage::KTextEditor__ConfigPage_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KTextEditor__ConfigPage_DragLeaveEvent(KTextEditor__ConfigPage* self, QDragLeaveEvent* event) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage) {
        vktexteditorconfigpage->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KTextEditor::ConfigPage::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTextEditor__ConfigPage_SuperDragLeaveEvent(KTextEditor__ConfigPage* self, QDragLeaveEvent* event) {
    if (auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self)) {
        vktexteditorconfigpage->KTextEditor::ConfigPage::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KTextEditor::ConfigPage::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__ConfigPage_OnDragLeaveEvent(KTextEditor__ConfigPage* self, intptr_t slot) {
    if (auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self))
        vktexteditorconfigpage->ktexteditor__configpage_dragleaveevent_callback = reinterpret_cast<VirtualKTextEditorConfigPage::KTextEditor__ConfigPage_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KTextEditor__ConfigPage_DropEvent(KTextEditor__ConfigPage* self, QDropEvent* event) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage) {
        vktexteditorconfigpage->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method KTextEditor::ConfigPage::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTextEditor__ConfigPage_SuperDropEvent(KTextEditor__ConfigPage* self, QDropEvent* event) {
    if (auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self)) {
        vktexteditorconfigpage->KTextEditor::ConfigPage::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method KTextEditor::ConfigPage::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__ConfigPage_OnDropEvent(KTextEditor__ConfigPage* self, intptr_t slot) {
    if (auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self))
        vktexteditorconfigpage->ktexteditor__configpage_dropevent_callback = reinterpret_cast<VirtualKTextEditorConfigPage::KTextEditor__ConfigPage_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void KTextEditor__ConfigPage_ShowEvent(KTextEditor__ConfigPage* self, QShowEvent* event) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage) {
        vktexteditorconfigpage->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method KTextEditor::ConfigPage::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTextEditor__ConfigPage_SuperShowEvent(KTextEditor__ConfigPage* self, QShowEvent* event) {
    if (auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self)) {
        vktexteditorconfigpage->KTextEditor::ConfigPage::showEvent(event);
    } else
        qFatal("Error: Protected virtual method KTextEditor::ConfigPage::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__ConfigPage_OnShowEvent(KTextEditor__ConfigPage* self, intptr_t slot) {
    if (auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self))
        vktexteditorconfigpage->ktexteditor__configpage_showevent_callback = reinterpret_cast<VirtualKTextEditorConfigPage::KTextEditor__ConfigPage_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void KTextEditor__ConfigPage_HideEvent(KTextEditor__ConfigPage* self, QHideEvent* event) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage) {
        vktexteditorconfigpage->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method KTextEditor::ConfigPage::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTextEditor__ConfigPage_SuperHideEvent(KTextEditor__ConfigPage* self, QHideEvent* event) {
    if (auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self)) {
        vktexteditorconfigpage->KTextEditor::ConfigPage::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method KTextEditor::ConfigPage::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__ConfigPage_OnHideEvent(KTextEditor__ConfigPage* self, intptr_t slot) {
    if (auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self))
        vktexteditorconfigpage->ktexteditor__configpage_hideevent_callback = reinterpret_cast<VirtualKTextEditorConfigPage::KTextEditor__ConfigPage_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool KTextEditor__ConfigPage_NativeEvent(KTextEditor__ConfigPage* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage) {
        return vktexteditorconfigpage->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method KTextEditor::ConfigPage::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool KTextEditor__ConfigPage_SuperNativeEvent(KTextEditor__ConfigPage* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self)) {
        return vktexteditorconfigpage->KTextEditor::ConfigPage::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method KTextEditor::ConfigPage::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__ConfigPage_OnNativeEvent(KTextEditor__ConfigPage* self, intptr_t slot) {
    if (auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self))
        vktexteditorconfigpage->ktexteditor__configpage_nativeevent_callback = reinterpret_cast<VirtualKTextEditorConfigPage::KTextEditor__ConfigPage_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
void KTextEditor__ConfigPage_ChangeEvent(KTextEditor__ConfigPage* self, QEvent* param1) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage) {
        vktexteditorconfigpage->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KTextEditor::ConfigPage::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTextEditor__ConfigPage_SuperChangeEvent(KTextEditor__ConfigPage* self, QEvent* param1) {
    if (auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self)) {
        vktexteditorconfigpage->KTextEditor::ConfigPage::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KTextEditor::ConfigPage::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__ConfigPage_OnChangeEvent(KTextEditor__ConfigPage* self, intptr_t slot) {
    if (auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self))
        vktexteditorconfigpage->ktexteditor__configpage_changeevent_callback = reinterpret_cast<VirtualKTextEditorConfigPage::KTextEditor__ConfigPage_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
int KTextEditor__ConfigPage_Metric(const KTextEditor__ConfigPage* self, int param1) {
    auto* vktexteditorconfigpage = const_cast<VirtualKTextEditorConfigPage*>(dynamic_cast<const VirtualKTextEditorConfigPage*>(self));
    if (vktexteditorconfigpage) {
        return vktexteditorconfigpage->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method KTextEditor::ConfigPage::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int KTextEditor__ConfigPage_SuperMetric(const KTextEditor__ConfigPage* self, int param1) {
    if (auto* vktexteditorconfigpage = const_cast<VirtualKTextEditorConfigPage*>(dynamic_cast<const VirtualKTextEditorConfigPage*>(self))) {
        return vktexteditorconfigpage->KTextEditor::ConfigPage::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method KTextEditor::ConfigPage::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__ConfigPage_OnMetric(KTextEditor__ConfigPage* self, intptr_t slot) {
    if (auto* vktexteditorconfigpage = const_cast<VirtualKTextEditorConfigPage*>(dynamic_cast<const VirtualKTextEditorConfigPage*>(self)))
        vktexteditorconfigpage->ktexteditor__configpage_metric_callback = reinterpret_cast<VirtualKTextEditorConfigPage::KTextEditor__ConfigPage_Metric_Callback>(slot);
}

// Derived class handler implementation
void KTextEditor__ConfigPage_InitPainter(const KTextEditor__ConfigPage* self, QPainter* painter) {
    auto* vktexteditorconfigpage = const_cast<VirtualKTextEditorConfigPage*>(dynamic_cast<const VirtualKTextEditorConfigPage*>(self));
    if (vktexteditorconfigpage) {
        vktexteditorconfigpage->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method KTextEditor::ConfigPage::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void KTextEditor__ConfigPage_SuperInitPainter(const KTextEditor__ConfigPage* self, QPainter* painter) {
    if (auto* vktexteditorconfigpage = const_cast<VirtualKTextEditorConfigPage*>(dynamic_cast<const VirtualKTextEditorConfigPage*>(self))) {
        vktexteditorconfigpage->KTextEditor::ConfigPage::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method KTextEditor::ConfigPage::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__ConfigPage_OnInitPainter(KTextEditor__ConfigPage* self, intptr_t slot) {
    if (auto* vktexteditorconfigpage = const_cast<VirtualKTextEditorConfigPage*>(dynamic_cast<const VirtualKTextEditorConfigPage*>(self)))
        vktexteditorconfigpage->ktexteditor__configpage_initpainter_callback = reinterpret_cast<VirtualKTextEditorConfigPage::KTextEditor__ConfigPage_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* KTextEditor__ConfigPage_Redirected(const KTextEditor__ConfigPage* self, QPoint* offset) {
    auto* vktexteditorconfigpage = const_cast<VirtualKTextEditorConfigPage*>(dynamic_cast<const VirtualKTextEditorConfigPage*>(self));
    if (vktexteditorconfigpage) {
        return vktexteditorconfigpage->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method KTextEditor::ConfigPage::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* KTextEditor__ConfigPage_SuperRedirected(const KTextEditor__ConfigPage* self, QPoint* offset) {
    if (auto* vktexteditorconfigpage = const_cast<VirtualKTextEditorConfigPage*>(dynamic_cast<const VirtualKTextEditorConfigPage*>(self))) {
        return vktexteditorconfigpage->KTextEditor::ConfigPage::redirected(offset);
    } else
        qFatal("Error: Protected virtual method KTextEditor::ConfigPage::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__ConfigPage_OnRedirected(KTextEditor__ConfigPage* self, intptr_t slot) {
    if (auto* vktexteditorconfigpage = const_cast<VirtualKTextEditorConfigPage*>(dynamic_cast<const VirtualKTextEditorConfigPage*>(self)))
        vktexteditorconfigpage->ktexteditor__configpage_redirected_callback = reinterpret_cast<VirtualKTextEditorConfigPage::KTextEditor__ConfigPage_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* KTextEditor__ConfigPage_SharedPainter(const KTextEditor__ConfigPage* self) {
    auto* vktexteditorconfigpage = const_cast<VirtualKTextEditorConfigPage*>(dynamic_cast<const VirtualKTextEditorConfigPage*>(self));
    if (vktexteditorconfigpage) {
        return vktexteditorconfigpage->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method KTextEditor::ConfigPage::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* KTextEditor__ConfigPage_SuperSharedPainter(const KTextEditor__ConfigPage* self) {
    if (auto* vktexteditorconfigpage = const_cast<VirtualKTextEditorConfigPage*>(dynamic_cast<const VirtualKTextEditorConfigPage*>(self))) {
        return vktexteditorconfigpage->KTextEditor::ConfigPage::sharedPainter();
    } else
        qFatal("Error: Protected virtual method KTextEditor::ConfigPage::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__ConfigPage_OnSharedPainter(KTextEditor__ConfigPage* self, intptr_t slot) {
    if (auto* vktexteditorconfigpage = const_cast<VirtualKTextEditorConfigPage*>(dynamic_cast<const VirtualKTextEditorConfigPage*>(self)))
        vktexteditorconfigpage->ktexteditor__configpage_sharedpainter_callback = reinterpret_cast<VirtualKTextEditorConfigPage::KTextEditor__ConfigPage_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void KTextEditor__ConfigPage_InputMethodEvent(KTextEditor__ConfigPage* self, QInputMethodEvent* param1) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage) {
        vktexteditorconfigpage->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KTextEditor::ConfigPage::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTextEditor__ConfigPage_SuperInputMethodEvent(KTextEditor__ConfigPage* self, QInputMethodEvent* param1) {
    if (auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self)) {
        vktexteditorconfigpage->KTextEditor::ConfigPage::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method KTextEditor::ConfigPage::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__ConfigPage_OnInputMethodEvent(KTextEditor__ConfigPage* self, intptr_t slot) {
    if (auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self))
        vktexteditorconfigpage->ktexteditor__configpage_inputmethodevent_callback = reinterpret_cast<VirtualKTextEditorConfigPage::KTextEditor__ConfigPage_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* KTextEditor__ConfigPage_InputMethodQuery(const KTextEditor__ConfigPage* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* KTextEditor__ConfigPage_SuperInputMethodQuery(const KTextEditor__ConfigPage* self, int param1) {
    return new QVariant(self->KTextEditor::ConfigPage::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__ConfigPage_OnInputMethodQuery(KTextEditor__ConfigPage* self, intptr_t slot) {
    if (auto* vktexteditorconfigpage = const_cast<VirtualKTextEditorConfigPage*>(dynamic_cast<const VirtualKTextEditorConfigPage*>(self)))
        vktexteditorconfigpage->ktexteditor__configpage_inputmethodquery_callback = reinterpret_cast<VirtualKTextEditorConfigPage::KTextEditor__ConfigPage_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool KTextEditor__ConfigPage_FocusNextPrevChild(KTextEditor__ConfigPage* self, bool next) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage) {
        return vktexteditorconfigpage->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method KTextEditor::ConfigPage::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool KTextEditor__ConfigPage_SuperFocusNextPrevChild(KTextEditor__ConfigPage* self, bool next) {
    if (auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self)) {
        return vktexteditorconfigpage->KTextEditor::ConfigPage::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method KTextEditor::ConfigPage::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__ConfigPage_OnFocusNextPrevChild(KTextEditor__ConfigPage* self, intptr_t slot) {
    if (auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self))
        vktexteditorconfigpage->ktexteditor__configpage_focusnextprevchild_callback = reinterpret_cast<VirtualKTextEditorConfigPage::KTextEditor__ConfigPage_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
bool KTextEditor__ConfigPage_EventFilter(KTextEditor__ConfigPage* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KTextEditor__ConfigPage_SuperEventFilter(KTextEditor__ConfigPage* self, QObject* watched, QEvent* event) {
    return self->KTextEditor::ConfigPage::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__ConfigPage_OnEventFilter(KTextEditor__ConfigPage* self, intptr_t slot) {
    if (auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self))
        vktexteditorconfigpage->ktexteditor__configpage_eventfilter_callback = reinterpret_cast<VirtualKTextEditorConfigPage::KTextEditor__ConfigPage_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KTextEditor__ConfigPage_TimerEvent(KTextEditor__ConfigPage* self, QTimerEvent* event) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage) {
        vktexteditorconfigpage->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KTextEditor::ConfigPage::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTextEditor__ConfigPage_SuperTimerEvent(KTextEditor__ConfigPage* self, QTimerEvent* event) {
    if (auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self)) {
        vktexteditorconfigpage->KTextEditor::ConfigPage::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KTextEditor::ConfigPage::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__ConfigPage_OnTimerEvent(KTextEditor__ConfigPage* self, intptr_t slot) {
    if (auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self))
        vktexteditorconfigpage->ktexteditor__configpage_timerevent_callback = reinterpret_cast<VirtualKTextEditorConfigPage::KTextEditor__ConfigPage_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KTextEditor__ConfigPage_ChildEvent(KTextEditor__ConfigPage* self, QChildEvent* event) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage) {
        vktexteditorconfigpage->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KTextEditor::ConfigPage::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTextEditor__ConfigPage_SuperChildEvent(KTextEditor__ConfigPage* self, QChildEvent* event) {
    if (auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self)) {
        vktexteditorconfigpage->KTextEditor::ConfigPage::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KTextEditor::ConfigPage::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__ConfigPage_OnChildEvent(KTextEditor__ConfigPage* self, intptr_t slot) {
    if (auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self))
        vktexteditorconfigpage->ktexteditor__configpage_childevent_callback = reinterpret_cast<VirtualKTextEditorConfigPage::KTextEditor__ConfigPage_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KTextEditor__ConfigPage_CustomEvent(KTextEditor__ConfigPage* self, QEvent* event) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage) {
        vktexteditorconfigpage->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KTextEditor::ConfigPage::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTextEditor__ConfigPage_SuperCustomEvent(KTextEditor__ConfigPage* self, QEvent* event) {
    if (auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self)) {
        vktexteditorconfigpage->KTextEditor::ConfigPage::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KTextEditor::ConfigPage::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__ConfigPage_OnCustomEvent(KTextEditor__ConfigPage* self, intptr_t slot) {
    if (auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self))
        vktexteditorconfigpage->ktexteditor__configpage_customevent_callback = reinterpret_cast<VirtualKTextEditorConfigPage::KTextEditor__ConfigPage_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KTextEditor__ConfigPage_ConnectNotify(KTextEditor__ConfigPage* self, const QMetaMethod* signal) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage) {
        vktexteditorconfigpage->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KTextEditor::ConfigPage::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KTextEditor__ConfigPage_SuperConnectNotify(KTextEditor__ConfigPage* self, const QMetaMethod* signal) {
    if (auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self)) {
        vktexteditorconfigpage->KTextEditor::ConfigPage::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KTextEditor::ConfigPage::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__ConfigPage_OnConnectNotify(KTextEditor__ConfigPage* self, intptr_t slot) {
    if (auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self))
        vktexteditorconfigpage->ktexteditor__configpage_connectnotify_callback = reinterpret_cast<VirtualKTextEditorConfigPage::KTextEditor__ConfigPage_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KTextEditor__ConfigPage_DisconnectNotify(KTextEditor__ConfigPage* self, const QMetaMethod* signal) {
    auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self);
    if (vktexteditorconfigpage) {
        vktexteditorconfigpage->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KTextEditor::ConfigPage::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KTextEditor__ConfigPage_SuperDisconnectNotify(KTextEditor__ConfigPage* self, const QMetaMethod* signal) {
    if (auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self)) {
        vktexteditorconfigpage->KTextEditor::ConfigPage::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KTextEditor::ConfigPage::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__ConfigPage_OnDisconnectNotify(KTextEditor__ConfigPage* self, intptr_t slot) {
    if (auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self))
        vktexteditorconfigpage->ktexteditor__configpage_disconnectnotify_callback = reinterpret_cast<VirtualKTextEditorConfigPage::KTextEditor__ConfigPage_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void KTextEditor__ConfigPage_UpdateMicroFocus(KTextEditor__ConfigPage* self) {
    if (auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self)) {
        vktexteditorconfigpage->VirtualKTextEditorConfigPage::updateMicroFocus();
    } else
        qFatal("Error: Protected method KTextEditor::ConfigPage::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void KTextEditor__ConfigPage_Create(KTextEditor__ConfigPage* self) {
    if (auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self)) {
        vktexteditorconfigpage->VirtualKTextEditorConfigPage::create();
    } else
        qFatal("Error: Protected method KTextEditor::ConfigPage::create called without a directly constructed type");
}

// Derived class protected handler implementation
void KTextEditor__ConfigPage_Destroy(KTextEditor__ConfigPage* self) {
    if (auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self)) {
        vktexteditorconfigpage->VirtualKTextEditorConfigPage::destroy();
    } else
        qFatal("Error: Protected method KTextEditor::ConfigPage::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool KTextEditor__ConfigPage_FocusNextChild(KTextEditor__ConfigPage* self) {
    if (auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self)) {
        return vktexteditorconfigpage->VirtualKTextEditorConfigPage::focusNextChild();
    } else
        qFatal("Error: Protected method KTextEditor::ConfigPage::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool KTextEditor__ConfigPage_FocusPreviousChild(KTextEditor__ConfigPage* self) {
    if (auto* vktexteditorconfigpage = dynamic_cast<VirtualKTextEditorConfigPage*>(self)) {
        return vktexteditorconfigpage->VirtualKTextEditorConfigPage::focusPreviousChild();
    } else
        qFatal("Error: Protected method KTextEditor::ConfigPage::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KTextEditor__ConfigPage_Sender(const KTextEditor__ConfigPage* self) {
    if (auto* vktexteditorconfigpage = const_cast<VirtualKTextEditorConfigPage*>(dynamic_cast<const VirtualKTextEditorConfigPage*>(self))) {
        return vktexteditorconfigpage->VirtualKTextEditorConfigPage::sender();
    } else
        qFatal("Error: Protected method KTextEditor::ConfigPage::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KTextEditor__ConfigPage_SenderSignalIndex(const KTextEditor__ConfigPage* self) {
    if (auto* vktexteditorconfigpage = const_cast<VirtualKTextEditorConfigPage*>(dynamic_cast<const VirtualKTextEditorConfigPage*>(self))) {
        return vktexteditorconfigpage->VirtualKTextEditorConfigPage::senderSignalIndex();
    } else
        qFatal("Error: Protected method KTextEditor::ConfigPage::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KTextEditor__ConfigPage_Receivers(const KTextEditor__ConfigPage* self, const char* signal) {
    if (auto* vktexteditorconfigpage = const_cast<VirtualKTextEditorConfigPage*>(dynamic_cast<const VirtualKTextEditorConfigPage*>(self))) {
        return vktexteditorconfigpage->VirtualKTextEditorConfigPage::receivers(signal);
    } else
        qFatal("Error: Protected method KTextEditor::ConfigPage::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KTextEditor__ConfigPage_IsSignalConnected(const KTextEditor__ConfigPage* self, const QMetaMethod* signal) {
    if (auto* vktexteditorconfigpage = const_cast<VirtualKTextEditorConfigPage*>(dynamic_cast<const VirtualKTextEditorConfigPage*>(self))) {
        return vktexteditorconfigpage->VirtualKTextEditorConfigPage::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KTextEditor::ConfigPage::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double KTextEditor__ConfigPage_GetDecodedMetricF(const KTextEditor__ConfigPage* self, int metricA, int metricB) {
    if (auto* vktexteditorconfigpage = const_cast<VirtualKTextEditorConfigPage*>(dynamic_cast<const VirtualKTextEditorConfigPage*>(self))) {
        return vktexteditorconfigpage->VirtualKTextEditorConfigPage::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method KTextEditor::ConfigPage::getDecodedMetricF called without a directly constructed type");
}

void KTextEditor__ConfigPage_Delete(KTextEditor__ConfigPage* self) {
    delete self;
}
