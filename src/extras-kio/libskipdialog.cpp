#define WORKAROUND_INNER_CLASS_DEFINITION_KIO__SkipDialog
#include <QActionEvent>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QContextMenuEvent>
#include <QDialog>
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
#include <skipdialog.h>
#include "libskipdialog.h"
#include "libskipdialog.hxx"

KIO__SkipDialog* KIO__SkipDialog_new(QWidget* parent, int options, const libqt_string _error_text) {
    QString _error_text_QString = QString::fromUtf8(_error_text.data, _error_text.len);
    return new VirtualKIOSkipDialog(parent, static_cast<KIO::SkipDialog_Options>(options), _error_text_QString);
}

QMetaObject* KIO__SkipDialog_MetaObject(const KIO__SkipDialog* self) {
    return (QMetaObject*)self->metaObject();
}

void* KIO__SkipDialog_Metacast(KIO__SkipDialog* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KIO__SkipDialog_Metacall(KIO__SkipDialog* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KIO__SkipDialog_Tr(const char* s) {
    auto _ret = KIO::SkipDialog::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KIO__SkipDialog_Tr2(const char* s, const char* c) {
    auto _ret = KIO::SkipDialog::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KIO__SkipDialog_Tr3(const char* s, const char* c, int n) {
    auto _ret = KIO::SkipDialog::tr(s, c, static_cast<int>(n));
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
QMetaObject* KIO__SkipDialog_SuperMetaObject(const KIO__SkipDialog* self) {
    return (QMetaObject*)self->KIO::SkipDialog::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KIO__SkipDialog_OnMetaObject(KIO__SkipDialog* self, intptr_t slot) {
    if (auto* vkioskipdialog = const_cast<VirtualKIOSkipDialog*>(dynamic_cast<const VirtualKIOSkipDialog*>(self)))
        vkioskipdialog->kio__skipdialog_metaobject_callback = reinterpret_cast<VirtualKIOSkipDialog::KIO__SkipDialog_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KIO__SkipDialog_SuperMetacast(KIO__SkipDialog* self, const char* param1) {
    return self->KIO::SkipDialog::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KIO__SkipDialog_OnMetacast(KIO__SkipDialog* self, intptr_t slot) {
    if (auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self))
        vkioskipdialog->kio__skipdialog_metacast_callback = reinterpret_cast<VirtualKIOSkipDialog::KIO__SkipDialog_Metacast_Callback>(slot);
}

// Base class handler implementation
int KIO__SkipDialog_SuperMetacall(KIO__SkipDialog* self, int param1, int param2, void** param3) {
    return self->KIO::SkipDialog::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KIO__SkipDialog_OnMetacall(KIO__SkipDialog* self, intptr_t slot) {
    if (auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self))
        vkioskipdialog->kio__skipdialog_metacall_callback = reinterpret_cast<VirtualKIOSkipDialog::KIO__SkipDialog_Metacall_Callback>(slot);
}

// Derived class handler implementation
void KIO__SkipDialog_SetVisible(KIO__SkipDialog* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void KIO__SkipDialog_SuperSetVisible(KIO__SkipDialog* self, bool visible) {
    self->KIO::SkipDialog::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void KIO__SkipDialog_OnSetVisible(KIO__SkipDialog* self, intptr_t slot) {
    if (auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self))
        vkioskipdialog->kio__skipdialog_setvisible_callback = reinterpret_cast<VirtualKIOSkipDialog::KIO__SkipDialog_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* KIO__SkipDialog_SizeHint(const KIO__SkipDialog* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* KIO__SkipDialog_SuperSizeHint(const KIO__SkipDialog* self) {
    return new QSize(self->KIO::SkipDialog::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void KIO__SkipDialog_OnSizeHint(KIO__SkipDialog* self, intptr_t slot) {
    if (auto* vkioskipdialog = const_cast<VirtualKIOSkipDialog*>(dynamic_cast<const VirtualKIOSkipDialog*>(self)))
        vkioskipdialog->kio__skipdialog_sizehint_callback = reinterpret_cast<VirtualKIOSkipDialog::KIO__SkipDialog_SizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* KIO__SkipDialog_MinimumSizeHint(const KIO__SkipDialog* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* KIO__SkipDialog_SuperMinimumSizeHint(const KIO__SkipDialog* self) {
    return new QSize(self->KIO::SkipDialog::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void KIO__SkipDialog_OnMinimumSizeHint(KIO__SkipDialog* self, intptr_t slot) {
    if (auto* vkioskipdialog = const_cast<VirtualKIOSkipDialog*>(dynamic_cast<const VirtualKIOSkipDialog*>(self)))
        vkioskipdialog->kio__skipdialog_minimumsizehint_callback = reinterpret_cast<VirtualKIOSkipDialog::KIO__SkipDialog_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
void KIO__SkipDialog_Open(KIO__SkipDialog* self) {
    self->open();
}

// Base class handler implementation
void KIO__SkipDialog_SuperOpen(KIO__SkipDialog* self) {
    self->KIO::SkipDialog::open();
}

// Auxiliary method to allow providing re-implementation
void KIO__SkipDialog_OnOpen(KIO__SkipDialog* self, intptr_t slot) {
    if (auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self))
        vkioskipdialog->kio__skipdialog_open_callback = reinterpret_cast<VirtualKIOSkipDialog::KIO__SkipDialog_Open_Callback>(slot);
}

// Derived class handler implementation
int KIO__SkipDialog_Exec(KIO__SkipDialog* self) {
    return self->exec();
}

// Base class handler implementation
int KIO__SkipDialog_SuperExec(KIO__SkipDialog* self) {
    return self->KIO::SkipDialog::exec();
}

// Auxiliary method to allow providing re-implementation
void KIO__SkipDialog_OnExec(KIO__SkipDialog* self, intptr_t slot) {
    if (auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self))
        vkioskipdialog->kio__skipdialog_exec_callback = reinterpret_cast<VirtualKIOSkipDialog::KIO__SkipDialog_Exec_Callback>(slot);
}

// Derived class handler implementation
void KIO__SkipDialog_Done(KIO__SkipDialog* self, int param1) {
    self->done(static_cast<int>(param1));
}

// Base class handler implementation
void KIO__SkipDialog_SuperDone(KIO__SkipDialog* self, int param1) {
    self->KIO::SkipDialog::done(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void KIO__SkipDialog_OnDone(KIO__SkipDialog* self, intptr_t slot) {
    if (auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self))
        vkioskipdialog->kio__skipdialog_done_callback = reinterpret_cast<VirtualKIOSkipDialog::KIO__SkipDialog_Done_Callback>(slot);
}

// Derived class handler implementation
void KIO__SkipDialog_Accept(KIO__SkipDialog* self) {
    self->accept();
}

// Base class handler implementation
void KIO__SkipDialog_SuperAccept(KIO__SkipDialog* self) {
    self->KIO::SkipDialog::accept();
}

// Auxiliary method to allow providing re-implementation
void KIO__SkipDialog_OnAccept(KIO__SkipDialog* self, intptr_t slot) {
    if (auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self))
        vkioskipdialog->kio__skipdialog_accept_callback = reinterpret_cast<VirtualKIOSkipDialog::KIO__SkipDialog_Accept_Callback>(slot);
}

// Derived class handler implementation
void KIO__SkipDialog_Reject(KIO__SkipDialog* self) {
    self->reject();
}

// Base class handler implementation
void KIO__SkipDialog_SuperReject(KIO__SkipDialog* self) {
    self->KIO::SkipDialog::reject();
}

// Auxiliary method to allow providing re-implementation
void KIO__SkipDialog_OnReject(KIO__SkipDialog* self, intptr_t slot) {
    if (auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self))
        vkioskipdialog->kio__skipdialog_reject_callback = reinterpret_cast<VirtualKIOSkipDialog::KIO__SkipDialog_Reject_Callback>(slot);
}

// Derived class handler implementation
void KIO__SkipDialog_KeyPressEvent(KIO__SkipDialog* self, QKeyEvent* param1) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog) {
        vkioskipdialog->keyPressEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KIO::SkipDialog::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__SkipDialog_SuperKeyPressEvent(KIO__SkipDialog* self, QKeyEvent* param1) {
    if (auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self)) {
        vkioskipdialog->KIO::SkipDialog::keyPressEvent(param1);
    } else
        qFatal("Error: Protected virtual method KIO::SkipDialog::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__SkipDialog_OnKeyPressEvent(KIO__SkipDialog* self, intptr_t slot) {
    if (auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self))
        vkioskipdialog->kio__skipdialog_keypressevent_callback = reinterpret_cast<VirtualKIOSkipDialog::KIO__SkipDialog_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void KIO__SkipDialog_CloseEvent(KIO__SkipDialog* self, QCloseEvent* param1) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog) {
        vkioskipdialog->closeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KIO::SkipDialog::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__SkipDialog_SuperCloseEvent(KIO__SkipDialog* self, QCloseEvent* param1) {
    if (auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self)) {
        vkioskipdialog->KIO::SkipDialog::closeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KIO::SkipDialog::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__SkipDialog_OnCloseEvent(KIO__SkipDialog* self, intptr_t slot) {
    if (auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self))
        vkioskipdialog->kio__skipdialog_closeevent_callback = reinterpret_cast<VirtualKIOSkipDialog::KIO__SkipDialog_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void KIO__SkipDialog_ShowEvent(KIO__SkipDialog* self, QShowEvent* param1) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog) {
        vkioskipdialog->showEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KIO::SkipDialog::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__SkipDialog_SuperShowEvent(KIO__SkipDialog* self, QShowEvent* param1) {
    if (auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self)) {
        vkioskipdialog->KIO::SkipDialog::showEvent(param1);
    } else
        qFatal("Error: Protected virtual method KIO::SkipDialog::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__SkipDialog_OnShowEvent(KIO__SkipDialog* self, intptr_t slot) {
    if (auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self))
        vkioskipdialog->kio__skipdialog_showevent_callback = reinterpret_cast<VirtualKIOSkipDialog::KIO__SkipDialog_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void KIO__SkipDialog_ResizeEvent(KIO__SkipDialog* self, QResizeEvent* param1) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog) {
        vkioskipdialog->resizeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KIO::SkipDialog::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__SkipDialog_SuperResizeEvent(KIO__SkipDialog* self, QResizeEvent* param1) {
    if (auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self)) {
        vkioskipdialog->KIO::SkipDialog::resizeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KIO::SkipDialog::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__SkipDialog_OnResizeEvent(KIO__SkipDialog* self, intptr_t slot) {
    if (auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self))
        vkioskipdialog->kio__skipdialog_resizeevent_callback = reinterpret_cast<VirtualKIOSkipDialog::KIO__SkipDialog_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void KIO__SkipDialog_ContextMenuEvent(KIO__SkipDialog* self, QContextMenuEvent* param1) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog) {
        vkioskipdialog->contextMenuEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KIO::SkipDialog::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__SkipDialog_SuperContextMenuEvent(KIO__SkipDialog* self, QContextMenuEvent* param1) {
    if (auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self)) {
        vkioskipdialog->KIO::SkipDialog::contextMenuEvent(param1);
    } else
        qFatal("Error: Protected virtual method KIO::SkipDialog::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__SkipDialog_OnContextMenuEvent(KIO__SkipDialog* self, intptr_t slot) {
    if (auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self))
        vkioskipdialog->kio__skipdialog_contextmenuevent_callback = reinterpret_cast<VirtualKIOSkipDialog::KIO__SkipDialog_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
bool KIO__SkipDialog_EventFilter(KIO__SkipDialog* self, QObject* param1, QEvent* param2) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog) {
        return vkioskipdialog->eventFilter(param1, param2);
    } else {
        qFatal("Error: Protected virtual method KIO::SkipDialog::eventFilter called without a directly constructed type");
    }
}

// Base class handler implementation
bool KIO__SkipDialog_SuperEventFilter(KIO__SkipDialog* self, QObject* param1, QEvent* param2) {
    if (auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self)) {
        return vkioskipdialog->KIO::SkipDialog::eventFilter(param1, param2);
    } else
        qFatal("Error: Protected virtual method KIO::SkipDialog::eventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__SkipDialog_OnEventFilter(KIO__SkipDialog* self, intptr_t slot) {
    if (auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self))
        vkioskipdialog->kio__skipdialog_eventfilter_callback = reinterpret_cast<VirtualKIOSkipDialog::KIO__SkipDialog_EventFilter_Callback>(slot);
}

// Derived class handler implementation
int KIO__SkipDialog_DevType(const KIO__SkipDialog* self) {
    return self->devType();
}

// Base class handler implementation
int KIO__SkipDialog_SuperDevType(const KIO__SkipDialog* self) {
    return self->KIO::SkipDialog::devType();
}

// Auxiliary method to allow providing re-implementation
void KIO__SkipDialog_OnDevType(KIO__SkipDialog* self, intptr_t slot) {
    if (auto* vkioskipdialog = const_cast<VirtualKIOSkipDialog*>(dynamic_cast<const VirtualKIOSkipDialog*>(self)))
        vkioskipdialog->kio__skipdialog_devtype_callback = reinterpret_cast<VirtualKIOSkipDialog::KIO__SkipDialog_DevType_Callback>(slot);
}

// Derived class handler implementation
int KIO__SkipDialog_HeightForWidth(const KIO__SkipDialog* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int KIO__SkipDialog_SuperHeightForWidth(const KIO__SkipDialog* self, int param1) {
    return self->KIO::SkipDialog::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void KIO__SkipDialog_OnHeightForWidth(KIO__SkipDialog* self, intptr_t slot) {
    if (auto* vkioskipdialog = const_cast<VirtualKIOSkipDialog*>(dynamic_cast<const VirtualKIOSkipDialog*>(self)))
        vkioskipdialog->kio__skipdialog_heightforwidth_callback = reinterpret_cast<VirtualKIOSkipDialog::KIO__SkipDialog_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool KIO__SkipDialog_HasHeightForWidth(const KIO__SkipDialog* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool KIO__SkipDialog_SuperHasHeightForWidth(const KIO__SkipDialog* self) {
    return self->KIO::SkipDialog::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void KIO__SkipDialog_OnHasHeightForWidth(KIO__SkipDialog* self, intptr_t slot) {
    if (auto* vkioskipdialog = const_cast<VirtualKIOSkipDialog*>(dynamic_cast<const VirtualKIOSkipDialog*>(self)))
        vkioskipdialog->kio__skipdialog_hasheightforwidth_callback = reinterpret_cast<VirtualKIOSkipDialog::KIO__SkipDialog_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* KIO__SkipDialog_PaintEngine(const KIO__SkipDialog* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* KIO__SkipDialog_SuperPaintEngine(const KIO__SkipDialog* self) {
    return self->KIO::SkipDialog::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void KIO__SkipDialog_OnPaintEngine(KIO__SkipDialog* self, intptr_t slot) {
    if (auto* vkioskipdialog = const_cast<VirtualKIOSkipDialog*>(dynamic_cast<const VirtualKIOSkipDialog*>(self)))
        vkioskipdialog->kio__skipdialog_paintengine_callback = reinterpret_cast<VirtualKIOSkipDialog::KIO__SkipDialog_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
bool KIO__SkipDialog_Event(KIO__SkipDialog* self, QEvent* event) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog) {
        return vkioskipdialog->event(event);
    } else {
        qFatal("Error: Protected virtual method KIO::SkipDialog::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool KIO__SkipDialog_SuperEvent(KIO__SkipDialog* self, QEvent* event) {
    if (auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self)) {
        return vkioskipdialog->KIO::SkipDialog::event(event);
    } else
        qFatal("Error: Protected virtual method KIO::SkipDialog::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__SkipDialog_OnEvent(KIO__SkipDialog* self, intptr_t slot) {
    if (auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self))
        vkioskipdialog->kio__skipdialog_event_callback = reinterpret_cast<VirtualKIOSkipDialog::KIO__SkipDialog_Event_Callback>(slot);
}

// Derived class handler implementation
void KIO__SkipDialog_MousePressEvent(KIO__SkipDialog* self, QMouseEvent* event) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog) {
        vkioskipdialog->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIO::SkipDialog::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__SkipDialog_SuperMousePressEvent(KIO__SkipDialog* self, QMouseEvent* event) {
    if (auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self)) {
        vkioskipdialog->KIO::SkipDialog::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method KIO::SkipDialog::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__SkipDialog_OnMousePressEvent(KIO__SkipDialog* self, intptr_t slot) {
    if (auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self))
        vkioskipdialog->kio__skipdialog_mousepressevent_callback = reinterpret_cast<VirtualKIOSkipDialog::KIO__SkipDialog_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void KIO__SkipDialog_MouseReleaseEvent(KIO__SkipDialog* self, QMouseEvent* event) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog) {
        vkioskipdialog->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIO::SkipDialog::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__SkipDialog_SuperMouseReleaseEvent(KIO__SkipDialog* self, QMouseEvent* event) {
    if (auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self)) {
        vkioskipdialog->KIO::SkipDialog::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KIO::SkipDialog::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__SkipDialog_OnMouseReleaseEvent(KIO__SkipDialog* self, intptr_t slot) {
    if (auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self))
        vkioskipdialog->kio__skipdialog_mousereleaseevent_callback = reinterpret_cast<VirtualKIOSkipDialog::KIO__SkipDialog_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KIO__SkipDialog_MouseDoubleClickEvent(KIO__SkipDialog* self, QMouseEvent* event) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog) {
        vkioskipdialog->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIO::SkipDialog::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__SkipDialog_SuperMouseDoubleClickEvent(KIO__SkipDialog* self, QMouseEvent* event) {
    if (auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self)) {
        vkioskipdialog->KIO::SkipDialog::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method KIO::SkipDialog::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__SkipDialog_OnMouseDoubleClickEvent(KIO__SkipDialog* self, intptr_t slot) {
    if (auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self))
        vkioskipdialog->kio__skipdialog_mousedoubleclickevent_callback = reinterpret_cast<VirtualKIOSkipDialog::KIO__SkipDialog_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void KIO__SkipDialog_MouseMoveEvent(KIO__SkipDialog* self, QMouseEvent* event) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog) {
        vkioskipdialog->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIO::SkipDialog::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__SkipDialog_SuperMouseMoveEvent(KIO__SkipDialog* self, QMouseEvent* event) {
    if (auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self)) {
        vkioskipdialog->KIO::SkipDialog::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KIO::SkipDialog::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__SkipDialog_OnMouseMoveEvent(KIO__SkipDialog* self, intptr_t slot) {
    if (auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self))
        vkioskipdialog->kio__skipdialog_mousemoveevent_callback = reinterpret_cast<VirtualKIOSkipDialog::KIO__SkipDialog_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KIO__SkipDialog_WheelEvent(KIO__SkipDialog* self, QWheelEvent* event) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog) {
        vkioskipdialog->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIO::SkipDialog::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__SkipDialog_SuperWheelEvent(KIO__SkipDialog* self, QWheelEvent* event) {
    if (auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self)) {
        vkioskipdialog->KIO::SkipDialog::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method KIO::SkipDialog::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__SkipDialog_OnWheelEvent(KIO__SkipDialog* self, intptr_t slot) {
    if (auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self))
        vkioskipdialog->kio__skipdialog_wheelevent_callback = reinterpret_cast<VirtualKIOSkipDialog::KIO__SkipDialog_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void KIO__SkipDialog_KeyReleaseEvent(KIO__SkipDialog* self, QKeyEvent* event) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog) {
        vkioskipdialog->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIO::SkipDialog::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__SkipDialog_SuperKeyReleaseEvent(KIO__SkipDialog* self, QKeyEvent* event) {
    if (auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self)) {
        vkioskipdialog->KIO::SkipDialog::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KIO::SkipDialog::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__SkipDialog_OnKeyReleaseEvent(KIO__SkipDialog* self, intptr_t slot) {
    if (auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self))
        vkioskipdialog->kio__skipdialog_keyreleaseevent_callback = reinterpret_cast<VirtualKIOSkipDialog::KIO__SkipDialog_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KIO__SkipDialog_FocusInEvent(KIO__SkipDialog* self, QFocusEvent* event) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog) {
        vkioskipdialog->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIO::SkipDialog::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__SkipDialog_SuperFocusInEvent(KIO__SkipDialog* self, QFocusEvent* event) {
    if (auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self)) {
        vkioskipdialog->KIO::SkipDialog::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method KIO::SkipDialog::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__SkipDialog_OnFocusInEvent(KIO__SkipDialog* self, intptr_t slot) {
    if (auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self))
        vkioskipdialog->kio__skipdialog_focusinevent_callback = reinterpret_cast<VirtualKIOSkipDialog::KIO__SkipDialog_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void KIO__SkipDialog_FocusOutEvent(KIO__SkipDialog* self, QFocusEvent* event) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog) {
        vkioskipdialog->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIO::SkipDialog::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__SkipDialog_SuperFocusOutEvent(KIO__SkipDialog* self, QFocusEvent* event) {
    if (auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self)) {
        vkioskipdialog->KIO::SkipDialog::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method KIO::SkipDialog::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__SkipDialog_OnFocusOutEvent(KIO__SkipDialog* self, intptr_t slot) {
    if (auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self))
        vkioskipdialog->kio__skipdialog_focusoutevent_callback = reinterpret_cast<VirtualKIOSkipDialog::KIO__SkipDialog_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void KIO__SkipDialog_EnterEvent(KIO__SkipDialog* self, QEnterEvent* event) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog) {
        vkioskipdialog->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIO::SkipDialog::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__SkipDialog_SuperEnterEvent(KIO__SkipDialog* self, QEnterEvent* event) {
    if (auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self)) {
        vkioskipdialog->KIO::SkipDialog::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method KIO::SkipDialog::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__SkipDialog_OnEnterEvent(KIO__SkipDialog* self, intptr_t slot) {
    if (auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self))
        vkioskipdialog->kio__skipdialog_enterevent_callback = reinterpret_cast<VirtualKIOSkipDialog::KIO__SkipDialog_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KIO__SkipDialog_LeaveEvent(KIO__SkipDialog* self, QEvent* event) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog) {
        vkioskipdialog->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIO::SkipDialog::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__SkipDialog_SuperLeaveEvent(KIO__SkipDialog* self, QEvent* event) {
    if (auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self)) {
        vkioskipdialog->KIO::SkipDialog::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KIO::SkipDialog::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__SkipDialog_OnLeaveEvent(KIO__SkipDialog* self, intptr_t slot) {
    if (auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self))
        vkioskipdialog->kio__skipdialog_leaveevent_callback = reinterpret_cast<VirtualKIOSkipDialog::KIO__SkipDialog_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KIO__SkipDialog_PaintEvent(KIO__SkipDialog* self, QPaintEvent* event) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog) {
        vkioskipdialog->paintEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIO::SkipDialog::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__SkipDialog_SuperPaintEvent(KIO__SkipDialog* self, QPaintEvent* event) {
    if (auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self)) {
        vkioskipdialog->KIO::SkipDialog::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method KIO::SkipDialog::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__SkipDialog_OnPaintEvent(KIO__SkipDialog* self, intptr_t slot) {
    if (auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self))
        vkioskipdialog->kio__skipdialog_paintevent_callback = reinterpret_cast<VirtualKIOSkipDialog::KIO__SkipDialog_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void KIO__SkipDialog_MoveEvent(KIO__SkipDialog* self, QMoveEvent* event) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog) {
        vkioskipdialog->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIO::SkipDialog::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__SkipDialog_SuperMoveEvent(KIO__SkipDialog* self, QMoveEvent* event) {
    if (auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self)) {
        vkioskipdialog->KIO::SkipDialog::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method KIO::SkipDialog::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__SkipDialog_OnMoveEvent(KIO__SkipDialog* self, intptr_t slot) {
    if (auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self))
        vkioskipdialog->kio__skipdialog_moveevent_callback = reinterpret_cast<VirtualKIOSkipDialog::KIO__SkipDialog_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KIO__SkipDialog_TabletEvent(KIO__SkipDialog* self, QTabletEvent* event) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog) {
        vkioskipdialog->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIO::SkipDialog::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__SkipDialog_SuperTabletEvent(KIO__SkipDialog* self, QTabletEvent* event) {
    if (auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self)) {
        vkioskipdialog->KIO::SkipDialog::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method KIO::SkipDialog::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__SkipDialog_OnTabletEvent(KIO__SkipDialog* self, intptr_t slot) {
    if (auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self))
        vkioskipdialog->kio__skipdialog_tabletevent_callback = reinterpret_cast<VirtualKIOSkipDialog::KIO__SkipDialog_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void KIO__SkipDialog_ActionEvent(KIO__SkipDialog* self, QActionEvent* event) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog) {
        vkioskipdialog->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIO::SkipDialog::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__SkipDialog_SuperActionEvent(KIO__SkipDialog* self, QActionEvent* event) {
    if (auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self)) {
        vkioskipdialog->KIO::SkipDialog::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method KIO::SkipDialog::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__SkipDialog_OnActionEvent(KIO__SkipDialog* self, intptr_t slot) {
    if (auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self))
        vkioskipdialog->kio__skipdialog_actionevent_callback = reinterpret_cast<VirtualKIOSkipDialog::KIO__SkipDialog_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void KIO__SkipDialog_DragEnterEvent(KIO__SkipDialog* self, QDragEnterEvent* event) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog) {
        vkioskipdialog->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIO::SkipDialog::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__SkipDialog_SuperDragEnterEvent(KIO__SkipDialog* self, QDragEnterEvent* event) {
    if (auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self)) {
        vkioskipdialog->KIO::SkipDialog::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method KIO::SkipDialog::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__SkipDialog_OnDragEnterEvent(KIO__SkipDialog* self, intptr_t slot) {
    if (auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self))
        vkioskipdialog->kio__skipdialog_dragenterevent_callback = reinterpret_cast<VirtualKIOSkipDialog::KIO__SkipDialog_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KIO__SkipDialog_DragMoveEvent(KIO__SkipDialog* self, QDragMoveEvent* event) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog) {
        vkioskipdialog->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIO::SkipDialog::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__SkipDialog_SuperDragMoveEvent(KIO__SkipDialog* self, QDragMoveEvent* event) {
    if (auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self)) {
        vkioskipdialog->KIO::SkipDialog::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KIO::SkipDialog::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__SkipDialog_OnDragMoveEvent(KIO__SkipDialog* self, intptr_t slot) {
    if (auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self))
        vkioskipdialog->kio__skipdialog_dragmoveevent_callback = reinterpret_cast<VirtualKIOSkipDialog::KIO__SkipDialog_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KIO__SkipDialog_DragLeaveEvent(KIO__SkipDialog* self, QDragLeaveEvent* event) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog) {
        vkioskipdialog->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIO::SkipDialog::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__SkipDialog_SuperDragLeaveEvent(KIO__SkipDialog* self, QDragLeaveEvent* event) {
    if (auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self)) {
        vkioskipdialog->KIO::SkipDialog::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KIO::SkipDialog::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__SkipDialog_OnDragLeaveEvent(KIO__SkipDialog* self, intptr_t slot) {
    if (auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self))
        vkioskipdialog->kio__skipdialog_dragleaveevent_callback = reinterpret_cast<VirtualKIOSkipDialog::KIO__SkipDialog_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KIO__SkipDialog_DropEvent(KIO__SkipDialog* self, QDropEvent* event) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog) {
        vkioskipdialog->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIO::SkipDialog::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__SkipDialog_SuperDropEvent(KIO__SkipDialog* self, QDropEvent* event) {
    if (auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self)) {
        vkioskipdialog->KIO::SkipDialog::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method KIO::SkipDialog::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__SkipDialog_OnDropEvent(KIO__SkipDialog* self, intptr_t slot) {
    if (auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self))
        vkioskipdialog->kio__skipdialog_dropevent_callback = reinterpret_cast<VirtualKIOSkipDialog::KIO__SkipDialog_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void KIO__SkipDialog_HideEvent(KIO__SkipDialog* self, QHideEvent* event) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog) {
        vkioskipdialog->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIO::SkipDialog::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__SkipDialog_SuperHideEvent(KIO__SkipDialog* self, QHideEvent* event) {
    if (auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self)) {
        vkioskipdialog->KIO::SkipDialog::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method KIO::SkipDialog::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__SkipDialog_OnHideEvent(KIO__SkipDialog* self, intptr_t slot) {
    if (auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self))
        vkioskipdialog->kio__skipdialog_hideevent_callback = reinterpret_cast<VirtualKIOSkipDialog::KIO__SkipDialog_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool KIO__SkipDialog_NativeEvent(KIO__SkipDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog) {
        return vkioskipdialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method KIO::SkipDialog::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool KIO__SkipDialog_SuperNativeEvent(KIO__SkipDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self)) {
        return vkioskipdialog->KIO::SkipDialog::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method KIO::SkipDialog::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__SkipDialog_OnNativeEvent(KIO__SkipDialog* self, intptr_t slot) {
    if (auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self))
        vkioskipdialog->kio__skipdialog_nativeevent_callback = reinterpret_cast<VirtualKIOSkipDialog::KIO__SkipDialog_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
void KIO__SkipDialog_ChangeEvent(KIO__SkipDialog* self, QEvent* param1) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog) {
        vkioskipdialog->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KIO::SkipDialog::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__SkipDialog_SuperChangeEvent(KIO__SkipDialog* self, QEvent* param1) {
    if (auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self)) {
        vkioskipdialog->KIO::SkipDialog::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KIO::SkipDialog::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__SkipDialog_OnChangeEvent(KIO__SkipDialog* self, intptr_t slot) {
    if (auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self))
        vkioskipdialog->kio__skipdialog_changeevent_callback = reinterpret_cast<VirtualKIOSkipDialog::KIO__SkipDialog_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
int KIO__SkipDialog_Metric(const KIO__SkipDialog* self, int param1) {
    auto* vkioskipdialog = const_cast<VirtualKIOSkipDialog*>(dynamic_cast<const VirtualKIOSkipDialog*>(self));
    if (vkioskipdialog) {
        return vkioskipdialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method KIO::SkipDialog::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int KIO__SkipDialog_SuperMetric(const KIO__SkipDialog* self, int param1) {
    if (auto* vkioskipdialog = const_cast<VirtualKIOSkipDialog*>(dynamic_cast<const VirtualKIOSkipDialog*>(self))) {
        return vkioskipdialog->KIO::SkipDialog::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method KIO::SkipDialog::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__SkipDialog_OnMetric(KIO__SkipDialog* self, intptr_t slot) {
    if (auto* vkioskipdialog = const_cast<VirtualKIOSkipDialog*>(dynamic_cast<const VirtualKIOSkipDialog*>(self)))
        vkioskipdialog->kio__skipdialog_metric_callback = reinterpret_cast<VirtualKIOSkipDialog::KIO__SkipDialog_Metric_Callback>(slot);
}

// Derived class handler implementation
void KIO__SkipDialog_InitPainter(const KIO__SkipDialog* self, QPainter* painter) {
    auto* vkioskipdialog = const_cast<VirtualKIOSkipDialog*>(dynamic_cast<const VirtualKIOSkipDialog*>(self));
    if (vkioskipdialog) {
        vkioskipdialog->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method KIO::SkipDialog::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__SkipDialog_SuperInitPainter(const KIO__SkipDialog* self, QPainter* painter) {
    if (auto* vkioskipdialog = const_cast<VirtualKIOSkipDialog*>(dynamic_cast<const VirtualKIOSkipDialog*>(self))) {
        vkioskipdialog->KIO::SkipDialog::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method KIO::SkipDialog::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__SkipDialog_OnInitPainter(KIO__SkipDialog* self, intptr_t slot) {
    if (auto* vkioskipdialog = const_cast<VirtualKIOSkipDialog*>(dynamic_cast<const VirtualKIOSkipDialog*>(self)))
        vkioskipdialog->kio__skipdialog_initpainter_callback = reinterpret_cast<VirtualKIOSkipDialog::KIO__SkipDialog_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* KIO__SkipDialog_Redirected(const KIO__SkipDialog* self, QPoint* offset) {
    auto* vkioskipdialog = const_cast<VirtualKIOSkipDialog*>(dynamic_cast<const VirtualKIOSkipDialog*>(self));
    if (vkioskipdialog) {
        return vkioskipdialog->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method KIO::SkipDialog::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* KIO__SkipDialog_SuperRedirected(const KIO__SkipDialog* self, QPoint* offset) {
    if (auto* vkioskipdialog = const_cast<VirtualKIOSkipDialog*>(dynamic_cast<const VirtualKIOSkipDialog*>(self))) {
        return vkioskipdialog->KIO::SkipDialog::redirected(offset);
    } else
        qFatal("Error: Protected virtual method KIO::SkipDialog::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__SkipDialog_OnRedirected(KIO__SkipDialog* self, intptr_t slot) {
    if (auto* vkioskipdialog = const_cast<VirtualKIOSkipDialog*>(dynamic_cast<const VirtualKIOSkipDialog*>(self)))
        vkioskipdialog->kio__skipdialog_redirected_callback = reinterpret_cast<VirtualKIOSkipDialog::KIO__SkipDialog_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* KIO__SkipDialog_SharedPainter(const KIO__SkipDialog* self) {
    auto* vkioskipdialog = const_cast<VirtualKIOSkipDialog*>(dynamic_cast<const VirtualKIOSkipDialog*>(self));
    if (vkioskipdialog) {
        return vkioskipdialog->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method KIO::SkipDialog::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* KIO__SkipDialog_SuperSharedPainter(const KIO__SkipDialog* self) {
    if (auto* vkioskipdialog = const_cast<VirtualKIOSkipDialog*>(dynamic_cast<const VirtualKIOSkipDialog*>(self))) {
        return vkioskipdialog->KIO::SkipDialog::sharedPainter();
    } else
        qFatal("Error: Protected virtual method KIO::SkipDialog::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__SkipDialog_OnSharedPainter(KIO__SkipDialog* self, intptr_t slot) {
    if (auto* vkioskipdialog = const_cast<VirtualKIOSkipDialog*>(dynamic_cast<const VirtualKIOSkipDialog*>(self)))
        vkioskipdialog->kio__skipdialog_sharedpainter_callback = reinterpret_cast<VirtualKIOSkipDialog::KIO__SkipDialog_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void KIO__SkipDialog_InputMethodEvent(KIO__SkipDialog* self, QInputMethodEvent* param1) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog) {
        vkioskipdialog->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KIO::SkipDialog::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__SkipDialog_SuperInputMethodEvent(KIO__SkipDialog* self, QInputMethodEvent* param1) {
    if (auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self)) {
        vkioskipdialog->KIO::SkipDialog::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method KIO::SkipDialog::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__SkipDialog_OnInputMethodEvent(KIO__SkipDialog* self, intptr_t slot) {
    if (auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self))
        vkioskipdialog->kio__skipdialog_inputmethodevent_callback = reinterpret_cast<VirtualKIOSkipDialog::KIO__SkipDialog_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* KIO__SkipDialog_InputMethodQuery(const KIO__SkipDialog* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* KIO__SkipDialog_SuperInputMethodQuery(const KIO__SkipDialog* self, int param1) {
    return new QVariant(self->KIO::SkipDialog::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void KIO__SkipDialog_OnInputMethodQuery(KIO__SkipDialog* self, intptr_t slot) {
    if (auto* vkioskipdialog = const_cast<VirtualKIOSkipDialog*>(dynamic_cast<const VirtualKIOSkipDialog*>(self)))
        vkioskipdialog->kio__skipdialog_inputmethodquery_callback = reinterpret_cast<VirtualKIOSkipDialog::KIO__SkipDialog_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool KIO__SkipDialog_FocusNextPrevChild(KIO__SkipDialog* self, bool next) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog) {
        return vkioskipdialog->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method KIO::SkipDialog::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool KIO__SkipDialog_SuperFocusNextPrevChild(KIO__SkipDialog* self, bool next) {
    if (auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self)) {
        return vkioskipdialog->KIO::SkipDialog::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method KIO::SkipDialog::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__SkipDialog_OnFocusNextPrevChild(KIO__SkipDialog* self, intptr_t slot) {
    if (auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self))
        vkioskipdialog->kio__skipdialog_focusnextprevchild_callback = reinterpret_cast<VirtualKIOSkipDialog::KIO__SkipDialog_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
void KIO__SkipDialog_TimerEvent(KIO__SkipDialog* self, QTimerEvent* event) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog) {
        vkioskipdialog->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIO::SkipDialog::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__SkipDialog_SuperTimerEvent(KIO__SkipDialog* self, QTimerEvent* event) {
    if (auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self)) {
        vkioskipdialog->KIO::SkipDialog::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KIO::SkipDialog::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__SkipDialog_OnTimerEvent(KIO__SkipDialog* self, intptr_t slot) {
    if (auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self))
        vkioskipdialog->kio__skipdialog_timerevent_callback = reinterpret_cast<VirtualKIOSkipDialog::KIO__SkipDialog_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KIO__SkipDialog_ChildEvent(KIO__SkipDialog* self, QChildEvent* event) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog) {
        vkioskipdialog->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIO::SkipDialog::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__SkipDialog_SuperChildEvent(KIO__SkipDialog* self, QChildEvent* event) {
    if (auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self)) {
        vkioskipdialog->KIO::SkipDialog::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KIO::SkipDialog::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__SkipDialog_OnChildEvent(KIO__SkipDialog* self, intptr_t slot) {
    if (auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self))
        vkioskipdialog->kio__skipdialog_childevent_callback = reinterpret_cast<VirtualKIOSkipDialog::KIO__SkipDialog_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KIO__SkipDialog_CustomEvent(KIO__SkipDialog* self, QEvent* event) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog) {
        vkioskipdialog->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIO::SkipDialog::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__SkipDialog_SuperCustomEvent(KIO__SkipDialog* self, QEvent* event) {
    if (auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self)) {
        vkioskipdialog->KIO::SkipDialog::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KIO::SkipDialog::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__SkipDialog_OnCustomEvent(KIO__SkipDialog* self, intptr_t slot) {
    if (auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self))
        vkioskipdialog->kio__skipdialog_customevent_callback = reinterpret_cast<VirtualKIOSkipDialog::KIO__SkipDialog_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KIO__SkipDialog_ConnectNotify(KIO__SkipDialog* self, const QMetaMethod* signal) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog) {
        vkioskipdialog->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KIO::SkipDialog::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__SkipDialog_SuperConnectNotify(KIO__SkipDialog* self, const QMetaMethod* signal) {
    if (auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self)) {
        vkioskipdialog->KIO::SkipDialog::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KIO::SkipDialog::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__SkipDialog_OnConnectNotify(KIO__SkipDialog* self, intptr_t slot) {
    if (auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self))
        vkioskipdialog->kio__skipdialog_connectnotify_callback = reinterpret_cast<VirtualKIOSkipDialog::KIO__SkipDialog_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KIO__SkipDialog_DisconnectNotify(KIO__SkipDialog* self, const QMetaMethod* signal) {
    auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self);
    if (vkioskipdialog) {
        vkioskipdialog->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KIO::SkipDialog::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__SkipDialog_SuperDisconnectNotify(KIO__SkipDialog* self, const QMetaMethod* signal) {
    if (auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self)) {
        vkioskipdialog->KIO::SkipDialog::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KIO::SkipDialog::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__SkipDialog_OnDisconnectNotify(KIO__SkipDialog* self, intptr_t slot) {
    if (auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self))
        vkioskipdialog->kio__skipdialog_disconnectnotify_callback = reinterpret_cast<VirtualKIOSkipDialog::KIO__SkipDialog_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void KIO__SkipDialog_AdjustPosition(KIO__SkipDialog* self, QWidget* param1) {
    if (auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self)) {
        vkioskipdialog->VirtualKIOSkipDialog::adjustPosition(param1);
    } else
        qFatal("Error: Protected method KIO::SkipDialog::adjustPosition called without a directly constructed type");
}

// Derived class protected handler implementation
void KIO__SkipDialog_UpdateMicroFocus(KIO__SkipDialog* self) {
    if (auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self)) {
        vkioskipdialog->VirtualKIOSkipDialog::updateMicroFocus();
    } else
        qFatal("Error: Protected method KIO::SkipDialog::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void KIO__SkipDialog_Create(KIO__SkipDialog* self) {
    if (auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self)) {
        vkioskipdialog->VirtualKIOSkipDialog::create();
    } else
        qFatal("Error: Protected method KIO::SkipDialog::create called without a directly constructed type");
}

// Derived class protected handler implementation
void KIO__SkipDialog_Destroy(KIO__SkipDialog* self) {
    if (auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self)) {
        vkioskipdialog->VirtualKIOSkipDialog::destroy();
    } else
        qFatal("Error: Protected method KIO::SkipDialog::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool KIO__SkipDialog_FocusNextChild(KIO__SkipDialog* self) {
    if (auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self)) {
        return vkioskipdialog->VirtualKIOSkipDialog::focusNextChild();
    } else
        qFatal("Error: Protected method KIO::SkipDialog::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool KIO__SkipDialog_FocusPreviousChild(KIO__SkipDialog* self) {
    if (auto* vkioskipdialog = dynamic_cast<VirtualKIOSkipDialog*>(self)) {
        return vkioskipdialog->VirtualKIOSkipDialog::focusPreviousChild();
    } else
        qFatal("Error: Protected method KIO::SkipDialog::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KIO__SkipDialog_Sender(const KIO__SkipDialog* self) {
    if (auto* vkioskipdialog = const_cast<VirtualKIOSkipDialog*>(dynamic_cast<const VirtualKIOSkipDialog*>(self))) {
        return vkioskipdialog->VirtualKIOSkipDialog::sender();
    } else
        qFatal("Error: Protected method KIO::SkipDialog::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KIO__SkipDialog_SenderSignalIndex(const KIO__SkipDialog* self) {
    if (auto* vkioskipdialog = const_cast<VirtualKIOSkipDialog*>(dynamic_cast<const VirtualKIOSkipDialog*>(self))) {
        return vkioskipdialog->VirtualKIOSkipDialog::senderSignalIndex();
    } else
        qFatal("Error: Protected method KIO::SkipDialog::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KIO__SkipDialog_Receivers(const KIO__SkipDialog* self, const char* signal) {
    if (auto* vkioskipdialog = const_cast<VirtualKIOSkipDialog*>(dynamic_cast<const VirtualKIOSkipDialog*>(self))) {
        return vkioskipdialog->VirtualKIOSkipDialog::receivers(signal);
    } else
        qFatal("Error: Protected method KIO::SkipDialog::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KIO__SkipDialog_IsSignalConnected(const KIO__SkipDialog* self, const QMetaMethod* signal) {
    if (auto* vkioskipdialog = const_cast<VirtualKIOSkipDialog*>(dynamic_cast<const VirtualKIOSkipDialog*>(self))) {
        return vkioskipdialog->VirtualKIOSkipDialog::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KIO::SkipDialog::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double KIO__SkipDialog_GetDecodedMetricF(const KIO__SkipDialog* self, int metricA, int metricB) {
    if (auto* vkioskipdialog = const_cast<VirtualKIOSkipDialog*>(dynamic_cast<const VirtualKIOSkipDialog*>(self))) {
        return vkioskipdialog->VirtualKIOSkipDialog::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method KIO::SkipDialog::getDecodedMetricF called without a directly constructed type");
}

void KIO__SkipDialog_Delete(KIO__SkipDialog* self) {
    delete self;
}
