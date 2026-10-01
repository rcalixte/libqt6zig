#include <KNSCore/EngineBase>
#include <KNSCore/Entry>
#define WORKAROUND_INNER_CLASS_DEFINITION_KNSWidgets__Dialog
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
#include <dialog.h>
#include "libdialog.h"
#include "libdialog.hxx"

KNSWidgets__Dialog* KNSWidgets__Dialog_new(const libqt_string configFile) {
    QString configFile_QString = QString::fromUtf8(configFile.data, configFile.len);
    return new VirtualKNSWidgetsDialog(configFile_QString);
}

KNSWidgets__Dialog* KNSWidgets__Dialog_new2(const libqt_string configFile, QWidget* parent) {
    QString configFile_QString = QString::fromUtf8(configFile.data, configFile.len);
    return new VirtualKNSWidgetsDialog(configFile_QString, parent);
}

QMetaObject* KNSWidgets__Dialog_MetaObject(const KNSWidgets__Dialog* self) {
    return (QMetaObject*)self->metaObject();
}

void* KNSWidgets__Dialog_Metacast(KNSWidgets__Dialog* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KNSWidgets__Dialog_Metacall(KNSWidgets__Dialog* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KNSWidgets__Dialog_Tr(const char* s) {
    auto _ret = KNSWidgets::Dialog::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

KNSCore__EngineBase* KNSWidgets__Dialog_Engine(KNSWidgets__Dialog* self) {
    return self->engine();
}

libqt_list /* of KNSCore__Entry* */ KNSWidgets__Dialog_ChangedEntries(const KNSWidgets__Dialog* self) {
    QList<KNSCore::Entry> _ret = self->changedEntries();
    // Convert QList<> from C++ memory to manually-managed C memory
    KNSCore__Entry** _arr = static_cast<KNSCore__Entry**>(malloc(sizeof(KNSCore__Entry*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new KNSCore::Entry(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void KNSWidgets__Dialog_Open(KNSWidgets__Dialog* self) {
    self->open();
}

libqt_string KNSWidgets__Dialog_Tr2(const char* s, const char* c) {
    auto _ret = KNSWidgets::Dialog::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KNSWidgets__Dialog_Tr3(const char* s, const char* c, int n) {
    auto _ret = KNSWidgets::Dialog::tr(s, c, static_cast<int>(n));
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
QMetaObject* KNSWidgets__Dialog_SuperMetaObject(const KNSWidgets__Dialog* self) {
    return (QMetaObject*)self->KNSWidgets::Dialog::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Dialog_OnMetaObject(KNSWidgets__Dialog* self, intptr_t slot) {
    if (auto* vknswidgetsdialog = const_cast<VirtualKNSWidgetsDialog*>(dynamic_cast<const VirtualKNSWidgetsDialog*>(self)))
        vknswidgetsdialog->knswidgets__dialog_metaobject_callback = reinterpret_cast<VirtualKNSWidgetsDialog::KNSWidgets__Dialog_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KNSWidgets__Dialog_SuperMetacast(KNSWidgets__Dialog* self, const char* param1) {
    return self->KNSWidgets::Dialog::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Dialog_OnMetacast(KNSWidgets__Dialog* self, intptr_t slot) {
    if (auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self))
        vknswidgetsdialog->knswidgets__dialog_metacast_callback = reinterpret_cast<VirtualKNSWidgetsDialog::KNSWidgets__Dialog_Metacast_Callback>(slot);
}

// Base class handler implementation
int KNSWidgets__Dialog_SuperMetacall(KNSWidgets__Dialog* self, int param1, int param2, void** param3) {
    return self->KNSWidgets::Dialog::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Dialog_OnMetacall(KNSWidgets__Dialog* self, intptr_t slot) {
    if (auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self))
        vknswidgetsdialog->knswidgets__dialog_metacall_callback = reinterpret_cast<VirtualKNSWidgetsDialog::KNSWidgets__Dialog_Metacall_Callback>(slot);
}

// Base class handler implementation
void KNSWidgets__Dialog_SuperOpen(KNSWidgets__Dialog* self) {
    self->KNSWidgets::Dialog::open();
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Dialog_OnOpen(KNSWidgets__Dialog* self, intptr_t slot) {
    if (auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self))
        vknswidgetsdialog->knswidgets__dialog_open_callback = reinterpret_cast<VirtualKNSWidgetsDialog::KNSWidgets__Dialog_Open_Callback>(slot);
}

// Derived class handler implementation
void KNSWidgets__Dialog_SetVisible(KNSWidgets__Dialog* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void KNSWidgets__Dialog_SuperSetVisible(KNSWidgets__Dialog* self, bool visible) {
    self->KNSWidgets::Dialog::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Dialog_OnSetVisible(KNSWidgets__Dialog* self, intptr_t slot) {
    if (auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self))
        vknswidgetsdialog->knswidgets__dialog_setvisible_callback = reinterpret_cast<VirtualKNSWidgetsDialog::KNSWidgets__Dialog_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* KNSWidgets__Dialog_SizeHint(const KNSWidgets__Dialog* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* KNSWidgets__Dialog_SuperSizeHint(const KNSWidgets__Dialog* self) {
    return new QSize(self->KNSWidgets::Dialog::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Dialog_OnSizeHint(KNSWidgets__Dialog* self, intptr_t slot) {
    if (auto* vknswidgetsdialog = const_cast<VirtualKNSWidgetsDialog*>(dynamic_cast<const VirtualKNSWidgetsDialog*>(self)))
        vknswidgetsdialog->knswidgets__dialog_sizehint_callback = reinterpret_cast<VirtualKNSWidgetsDialog::KNSWidgets__Dialog_SizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* KNSWidgets__Dialog_MinimumSizeHint(const KNSWidgets__Dialog* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* KNSWidgets__Dialog_SuperMinimumSizeHint(const KNSWidgets__Dialog* self) {
    return new QSize(self->KNSWidgets::Dialog::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Dialog_OnMinimumSizeHint(KNSWidgets__Dialog* self, intptr_t slot) {
    if (auto* vknswidgetsdialog = const_cast<VirtualKNSWidgetsDialog*>(dynamic_cast<const VirtualKNSWidgetsDialog*>(self)))
        vknswidgetsdialog->knswidgets__dialog_minimumsizehint_callback = reinterpret_cast<VirtualKNSWidgetsDialog::KNSWidgets__Dialog_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
int KNSWidgets__Dialog_Exec(KNSWidgets__Dialog* self) {
    return self->exec();
}

// Base class handler implementation
int KNSWidgets__Dialog_SuperExec(KNSWidgets__Dialog* self) {
    return self->KNSWidgets::Dialog::exec();
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Dialog_OnExec(KNSWidgets__Dialog* self, intptr_t slot) {
    if (auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self))
        vknswidgetsdialog->knswidgets__dialog_exec_callback = reinterpret_cast<VirtualKNSWidgetsDialog::KNSWidgets__Dialog_Exec_Callback>(slot);
}

// Derived class handler implementation
void KNSWidgets__Dialog_Done(KNSWidgets__Dialog* self, int param1) {
    self->done(static_cast<int>(param1));
}

// Base class handler implementation
void KNSWidgets__Dialog_SuperDone(KNSWidgets__Dialog* self, int param1) {
    self->KNSWidgets::Dialog::done(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Dialog_OnDone(KNSWidgets__Dialog* self, intptr_t slot) {
    if (auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self))
        vknswidgetsdialog->knswidgets__dialog_done_callback = reinterpret_cast<VirtualKNSWidgetsDialog::KNSWidgets__Dialog_Done_Callback>(slot);
}

// Derived class handler implementation
void KNSWidgets__Dialog_Accept(KNSWidgets__Dialog* self) {
    self->accept();
}

// Base class handler implementation
void KNSWidgets__Dialog_SuperAccept(KNSWidgets__Dialog* self) {
    self->KNSWidgets::Dialog::accept();
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Dialog_OnAccept(KNSWidgets__Dialog* self, intptr_t slot) {
    if (auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self))
        vknswidgetsdialog->knswidgets__dialog_accept_callback = reinterpret_cast<VirtualKNSWidgetsDialog::KNSWidgets__Dialog_Accept_Callback>(slot);
}

// Derived class handler implementation
void KNSWidgets__Dialog_Reject(KNSWidgets__Dialog* self) {
    self->reject();
}

// Base class handler implementation
void KNSWidgets__Dialog_SuperReject(KNSWidgets__Dialog* self) {
    self->KNSWidgets::Dialog::reject();
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Dialog_OnReject(KNSWidgets__Dialog* self, intptr_t slot) {
    if (auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self))
        vknswidgetsdialog->knswidgets__dialog_reject_callback = reinterpret_cast<VirtualKNSWidgetsDialog::KNSWidgets__Dialog_Reject_Callback>(slot);
}

// Derived class handler implementation
void KNSWidgets__Dialog_KeyPressEvent(KNSWidgets__Dialog* self, QKeyEvent* param1) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog) {
        vknswidgetsdialog->keyPressEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KNSWidgets::Dialog::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNSWidgets__Dialog_SuperKeyPressEvent(KNSWidgets__Dialog* self, QKeyEvent* param1) {
    if (auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self)) {
        vknswidgetsdialog->KNSWidgets::Dialog::keyPressEvent(param1);
    } else
        qFatal("Error: Protected virtual method KNSWidgets::Dialog::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Dialog_OnKeyPressEvent(KNSWidgets__Dialog* self, intptr_t slot) {
    if (auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self))
        vknswidgetsdialog->knswidgets__dialog_keypressevent_callback = reinterpret_cast<VirtualKNSWidgetsDialog::KNSWidgets__Dialog_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void KNSWidgets__Dialog_CloseEvent(KNSWidgets__Dialog* self, QCloseEvent* param1) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog) {
        vknswidgetsdialog->closeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KNSWidgets::Dialog::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNSWidgets__Dialog_SuperCloseEvent(KNSWidgets__Dialog* self, QCloseEvent* param1) {
    if (auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self)) {
        vknswidgetsdialog->KNSWidgets::Dialog::closeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KNSWidgets::Dialog::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Dialog_OnCloseEvent(KNSWidgets__Dialog* self, intptr_t slot) {
    if (auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self))
        vknswidgetsdialog->knswidgets__dialog_closeevent_callback = reinterpret_cast<VirtualKNSWidgetsDialog::KNSWidgets__Dialog_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void KNSWidgets__Dialog_ShowEvent(KNSWidgets__Dialog* self, QShowEvent* param1) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog) {
        vknswidgetsdialog->showEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KNSWidgets::Dialog::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNSWidgets__Dialog_SuperShowEvent(KNSWidgets__Dialog* self, QShowEvent* param1) {
    if (auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self)) {
        vknswidgetsdialog->KNSWidgets::Dialog::showEvent(param1);
    } else
        qFatal("Error: Protected virtual method KNSWidgets::Dialog::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Dialog_OnShowEvent(KNSWidgets__Dialog* self, intptr_t slot) {
    if (auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self))
        vknswidgetsdialog->knswidgets__dialog_showevent_callback = reinterpret_cast<VirtualKNSWidgetsDialog::KNSWidgets__Dialog_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void KNSWidgets__Dialog_ResizeEvent(KNSWidgets__Dialog* self, QResizeEvent* param1) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog) {
        vknswidgetsdialog->resizeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KNSWidgets::Dialog::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNSWidgets__Dialog_SuperResizeEvent(KNSWidgets__Dialog* self, QResizeEvent* param1) {
    if (auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self)) {
        vknswidgetsdialog->KNSWidgets::Dialog::resizeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KNSWidgets::Dialog::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Dialog_OnResizeEvent(KNSWidgets__Dialog* self, intptr_t slot) {
    if (auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self))
        vknswidgetsdialog->knswidgets__dialog_resizeevent_callback = reinterpret_cast<VirtualKNSWidgetsDialog::KNSWidgets__Dialog_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void KNSWidgets__Dialog_ContextMenuEvent(KNSWidgets__Dialog* self, QContextMenuEvent* param1) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog) {
        vknswidgetsdialog->contextMenuEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KNSWidgets::Dialog::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNSWidgets__Dialog_SuperContextMenuEvent(KNSWidgets__Dialog* self, QContextMenuEvent* param1) {
    if (auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self)) {
        vknswidgetsdialog->KNSWidgets::Dialog::contextMenuEvent(param1);
    } else
        qFatal("Error: Protected virtual method KNSWidgets::Dialog::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Dialog_OnContextMenuEvent(KNSWidgets__Dialog* self, intptr_t slot) {
    if (auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self))
        vknswidgetsdialog->knswidgets__dialog_contextmenuevent_callback = reinterpret_cast<VirtualKNSWidgetsDialog::KNSWidgets__Dialog_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
bool KNSWidgets__Dialog_EventFilter(KNSWidgets__Dialog* self, QObject* param1, QEvent* param2) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog) {
        return vknswidgetsdialog->eventFilter(param1, param2);
    } else {
        qFatal("Error: Protected virtual method KNSWidgets::Dialog::eventFilter called without a directly constructed type");
    }
}

// Base class handler implementation
bool KNSWidgets__Dialog_SuperEventFilter(KNSWidgets__Dialog* self, QObject* param1, QEvent* param2) {
    if (auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self)) {
        return vknswidgetsdialog->KNSWidgets::Dialog::eventFilter(param1, param2);
    } else
        qFatal("Error: Protected virtual method KNSWidgets::Dialog::eventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Dialog_OnEventFilter(KNSWidgets__Dialog* self, intptr_t slot) {
    if (auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self))
        vknswidgetsdialog->knswidgets__dialog_eventfilter_callback = reinterpret_cast<VirtualKNSWidgetsDialog::KNSWidgets__Dialog_EventFilter_Callback>(slot);
}

// Derived class handler implementation
int KNSWidgets__Dialog_DevType(const KNSWidgets__Dialog* self) {
    return self->devType();
}

// Base class handler implementation
int KNSWidgets__Dialog_SuperDevType(const KNSWidgets__Dialog* self) {
    return self->KNSWidgets::Dialog::devType();
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Dialog_OnDevType(KNSWidgets__Dialog* self, intptr_t slot) {
    if (auto* vknswidgetsdialog = const_cast<VirtualKNSWidgetsDialog*>(dynamic_cast<const VirtualKNSWidgetsDialog*>(self)))
        vknswidgetsdialog->knswidgets__dialog_devtype_callback = reinterpret_cast<VirtualKNSWidgetsDialog::KNSWidgets__Dialog_DevType_Callback>(slot);
}

// Derived class handler implementation
int KNSWidgets__Dialog_HeightForWidth(const KNSWidgets__Dialog* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int KNSWidgets__Dialog_SuperHeightForWidth(const KNSWidgets__Dialog* self, int param1) {
    return self->KNSWidgets::Dialog::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Dialog_OnHeightForWidth(KNSWidgets__Dialog* self, intptr_t slot) {
    if (auto* vknswidgetsdialog = const_cast<VirtualKNSWidgetsDialog*>(dynamic_cast<const VirtualKNSWidgetsDialog*>(self)))
        vknswidgetsdialog->knswidgets__dialog_heightforwidth_callback = reinterpret_cast<VirtualKNSWidgetsDialog::KNSWidgets__Dialog_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool KNSWidgets__Dialog_HasHeightForWidth(const KNSWidgets__Dialog* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool KNSWidgets__Dialog_SuperHasHeightForWidth(const KNSWidgets__Dialog* self) {
    return self->KNSWidgets::Dialog::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Dialog_OnHasHeightForWidth(KNSWidgets__Dialog* self, intptr_t slot) {
    if (auto* vknswidgetsdialog = const_cast<VirtualKNSWidgetsDialog*>(dynamic_cast<const VirtualKNSWidgetsDialog*>(self)))
        vknswidgetsdialog->knswidgets__dialog_hasheightforwidth_callback = reinterpret_cast<VirtualKNSWidgetsDialog::KNSWidgets__Dialog_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* KNSWidgets__Dialog_PaintEngine(const KNSWidgets__Dialog* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* KNSWidgets__Dialog_SuperPaintEngine(const KNSWidgets__Dialog* self) {
    return self->KNSWidgets::Dialog::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Dialog_OnPaintEngine(KNSWidgets__Dialog* self, intptr_t slot) {
    if (auto* vknswidgetsdialog = const_cast<VirtualKNSWidgetsDialog*>(dynamic_cast<const VirtualKNSWidgetsDialog*>(self)))
        vknswidgetsdialog->knswidgets__dialog_paintengine_callback = reinterpret_cast<VirtualKNSWidgetsDialog::KNSWidgets__Dialog_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
bool KNSWidgets__Dialog_Event(KNSWidgets__Dialog* self, QEvent* event) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog) {
        return vknswidgetsdialog->event(event);
    } else {
        qFatal("Error: Protected virtual method KNSWidgets::Dialog::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool KNSWidgets__Dialog_SuperEvent(KNSWidgets__Dialog* self, QEvent* event) {
    if (auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self)) {
        return vknswidgetsdialog->KNSWidgets::Dialog::event(event);
    } else
        qFatal("Error: Protected virtual method KNSWidgets::Dialog::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Dialog_OnEvent(KNSWidgets__Dialog* self, intptr_t slot) {
    if (auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self))
        vknswidgetsdialog->knswidgets__dialog_event_callback = reinterpret_cast<VirtualKNSWidgetsDialog::KNSWidgets__Dialog_Event_Callback>(slot);
}

// Derived class handler implementation
void KNSWidgets__Dialog_MousePressEvent(KNSWidgets__Dialog* self, QMouseEvent* event) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog) {
        vknswidgetsdialog->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method KNSWidgets::Dialog::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNSWidgets__Dialog_SuperMousePressEvent(KNSWidgets__Dialog* self, QMouseEvent* event) {
    if (auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self)) {
        vknswidgetsdialog->KNSWidgets::Dialog::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method KNSWidgets::Dialog::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Dialog_OnMousePressEvent(KNSWidgets__Dialog* self, intptr_t slot) {
    if (auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self))
        vknswidgetsdialog->knswidgets__dialog_mousepressevent_callback = reinterpret_cast<VirtualKNSWidgetsDialog::KNSWidgets__Dialog_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void KNSWidgets__Dialog_MouseReleaseEvent(KNSWidgets__Dialog* self, QMouseEvent* event) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog) {
        vknswidgetsdialog->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KNSWidgets::Dialog::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNSWidgets__Dialog_SuperMouseReleaseEvent(KNSWidgets__Dialog* self, QMouseEvent* event) {
    if (auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self)) {
        vknswidgetsdialog->KNSWidgets::Dialog::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KNSWidgets::Dialog::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Dialog_OnMouseReleaseEvent(KNSWidgets__Dialog* self, intptr_t slot) {
    if (auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self))
        vknswidgetsdialog->knswidgets__dialog_mousereleaseevent_callback = reinterpret_cast<VirtualKNSWidgetsDialog::KNSWidgets__Dialog_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KNSWidgets__Dialog_MouseDoubleClickEvent(KNSWidgets__Dialog* self, QMouseEvent* event) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog) {
        vknswidgetsdialog->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method KNSWidgets::Dialog::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNSWidgets__Dialog_SuperMouseDoubleClickEvent(KNSWidgets__Dialog* self, QMouseEvent* event) {
    if (auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self)) {
        vknswidgetsdialog->KNSWidgets::Dialog::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method KNSWidgets::Dialog::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Dialog_OnMouseDoubleClickEvent(KNSWidgets__Dialog* self, intptr_t slot) {
    if (auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self))
        vknswidgetsdialog->knswidgets__dialog_mousedoubleclickevent_callback = reinterpret_cast<VirtualKNSWidgetsDialog::KNSWidgets__Dialog_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void KNSWidgets__Dialog_MouseMoveEvent(KNSWidgets__Dialog* self, QMouseEvent* event) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog) {
        vknswidgetsdialog->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KNSWidgets::Dialog::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNSWidgets__Dialog_SuperMouseMoveEvent(KNSWidgets__Dialog* self, QMouseEvent* event) {
    if (auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self)) {
        vknswidgetsdialog->KNSWidgets::Dialog::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KNSWidgets::Dialog::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Dialog_OnMouseMoveEvent(KNSWidgets__Dialog* self, intptr_t slot) {
    if (auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self))
        vknswidgetsdialog->knswidgets__dialog_mousemoveevent_callback = reinterpret_cast<VirtualKNSWidgetsDialog::KNSWidgets__Dialog_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KNSWidgets__Dialog_WheelEvent(KNSWidgets__Dialog* self, QWheelEvent* event) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog) {
        vknswidgetsdialog->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method KNSWidgets::Dialog::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNSWidgets__Dialog_SuperWheelEvent(KNSWidgets__Dialog* self, QWheelEvent* event) {
    if (auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self)) {
        vknswidgetsdialog->KNSWidgets::Dialog::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method KNSWidgets::Dialog::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Dialog_OnWheelEvent(KNSWidgets__Dialog* self, intptr_t slot) {
    if (auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self))
        vknswidgetsdialog->knswidgets__dialog_wheelevent_callback = reinterpret_cast<VirtualKNSWidgetsDialog::KNSWidgets__Dialog_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void KNSWidgets__Dialog_KeyReleaseEvent(KNSWidgets__Dialog* self, QKeyEvent* event) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog) {
        vknswidgetsdialog->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KNSWidgets::Dialog::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNSWidgets__Dialog_SuperKeyReleaseEvent(KNSWidgets__Dialog* self, QKeyEvent* event) {
    if (auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self)) {
        vknswidgetsdialog->KNSWidgets::Dialog::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KNSWidgets::Dialog::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Dialog_OnKeyReleaseEvent(KNSWidgets__Dialog* self, intptr_t slot) {
    if (auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self))
        vknswidgetsdialog->knswidgets__dialog_keyreleaseevent_callback = reinterpret_cast<VirtualKNSWidgetsDialog::KNSWidgets__Dialog_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KNSWidgets__Dialog_FocusInEvent(KNSWidgets__Dialog* self, QFocusEvent* event) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog) {
        vknswidgetsdialog->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method KNSWidgets::Dialog::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNSWidgets__Dialog_SuperFocusInEvent(KNSWidgets__Dialog* self, QFocusEvent* event) {
    if (auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self)) {
        vknswidgetsdialog->KNSWidgets::Dialog::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method KNSWidgets::Dialog::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Dialog_OnFocusInEvent(KNSWidgets__Dialog* self, intptr_t slot) {
    if (auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self))
        vknswidgetsdialog->knswidgets__dialog_focusinevent_callback = reinterpret_cast<VirtualKNSWidgetsDialog::KNSWidgets__Dialog_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void KNSWidgets__Dialog_FocusOutEvent(KNSWidgets__Dialog* self, QFocusEvent* event) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog) {
        vknswidgetsdialog->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method KNSWidgets::Dialog::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNSWidgets__Dialog_SuperFocusOutEvent(KNSWidgets__Dialog* self, QFocusEvent* event) {
    if (auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self)) {
        vknswidgetsdialog->KNSWidgets::Dialog::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method KNSWidgets::Dialog::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Dialog_OnFocusOutEvent(KNSWidgets__Dialog* self, intptr_t slot) {
    if (auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self))
        vknswidgetsdialog->knswidgets__dialog_focusoutevent_callback = reinterpret_cast<VirtualKNSWidgetsDialog::KNSWidgets__Dialog_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void KNSWidgets__Dialog_EnterEvent(KNSWidgets__Dialog* self, QEnterEvent* event) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog) {
        vknswidgetsdialog->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KNSWidgets::Dialog::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNSWidgets__Dialog_SuperEnterEvent(KNSWidgets__Dialog* self, QEnterEvent* event) {
    if (auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self)) {
        vknswidgetsdialog->KNSWidgets::Dialog::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method KNSWidgets::Dialog::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Dialog_OnEnterEvent(KNSWidgets__Dialog* self, intptr_t slot) {
    if (auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self))
        vknswidgetsdialog->knswidgets__dialog_enterevent_callback = reinterpret_cast<VirtualKNSWidgetsDialog::KNSWidgets__Dialog_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KNSWidgets__Dialog_LeaveEvent(KNSWidgets__Dialog* self, QEvent* event) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog) {
        vknswidgetsdialog->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KNSWidgets::Dialog::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNSWidgets__Dialog_SuperLeaveEvent(KNSWidgets__Dialog* self, QEvent* event) {
    if (auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self)) {
        vknswidgetsdialog->KNSWidgets::Dialog::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KNSWidgets::Dialog::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Dialog_OnLeaveEvent(KNSWidgets__Dialog* self, intptr_t slot) {
    if (auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self))
        vknswidgetsdialog->knswidgets__dialog_leaveevent_callback = reinterpret_cast<VirtualKNSWidgetsDialog::KNSWidgets__Dialog_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KNSWidgets__Dialog_PaintEvent(KNSWidgets__Dialog* self, QPaintEvent* event) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog) {
        vknswidgetsdialog->paintEvent(event);
    } else {
        qFatal("Error: Protected virtual method KNSWidgets::Dialog::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNSWidgets__Dialog_SuperPaintEvent(KNSWidgets__Dialog* self, QPaintEvent* event) {
    if (auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self)) {
        vknswidgetsdialog->KNSWidgets::Dialog::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method KNSWidgets::Dialog::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Dialog_OnPaintEvent(KNSWidgets__Dialog* self, intptr_t slot) {
    if (auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self))
        vknswidgetsdialog->knswidgets__dialog_paintevent_callback = reinterpret_cast<VirtualKNSWidgetsDialog::KNSWidgets__Dialog_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void KNSWidgets__Dialog_MoveEvent(KNSWidgets__Dialog* self, QMoveEvent* event) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog) {
        vknswidgetsdialog->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KNSWidgets::Dialog::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNSWidgets__Dialog_SuperMoveEvent(KNSWidgets__Dialog* self, QMoveEvent* event) {
    if (auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self)) {
        vknswidgetsdialog->KNSWidgets::Dialog::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method KNSWidgets::Dialog::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Dialog_OnMoveEvent(KNSWidgets__Dialog* self, intptr_t slot) {
    if (auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self))
        vknswidgetsdialog->knswidgets__dialog_moveevent_callback = reinterpret_cast<VirtualKNSWidgetsDialog::KNSWidgets__Dialog_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KNSWidgets__Dialog_TabletEvent(KNSWidgets__Dialog* self, QTabletEvent* event) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog) {
        vknswidgetsdialog->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method KNSWidgets::Dialog::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNSWidgets__Dialog_SuperTabletEvent(KNSWidgets__Dialog* self, QTabletEvent* event) {
    if (auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self)) {
        vknswidgetsdialog->KNSWidgets::Dialog::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method KNSWidgets::Dialog::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Dialog_OnTabletEvent(KNSWidgets__Dialog* self, intptr_t slot) {
    if (auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self))
        vknswidgetsdialog->knswidgets__dialog_tabletevent_callback = reinterpret_cast<VirtualKNSWidgetsDialog::KNSWidgets__Dialog_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void KNSWidgets__Dialog_ActionEvent(KNSWidgets__Dialog* self, QActionEvent* event) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog) {
        vknswidgetsdialog->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method KNSWidgets::Dialog::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNSWidgets__Dialog_SuperActionEvent(KNSWidgets__Dialog* self, QActionEvent* event) {
    if (auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self)) {
        vknswidgetsdialog->KNSWidgets::Dialog::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method KNSWidgets::Dialog::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Dialog_OnActionEvent(KNSWidgets__Dialog* self, intptr_t slot) {
    if (auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self))
        vknswidgetsdialog->knswidgets__dialog_actionevent_callback = reinterpret_cast<VirtualKNSWidgetsDialog::KNSWidgets__Dialog_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void KNSWidgets__Dialog_DragEnterEvent(KNSWidgets__Dialog* self, QDragEnterEvent* event) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog) {
        vknswidgetsdialog->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KNSWidgets::Dialog::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNSWidgets__Dialog_SuperDragEnterEvent(KNSWidgets__Dialog* self, QDragEnterEvent* event) {
    if (auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self)) {
        vknswidgetsdialog->KNSWidgets::Dialog::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method KNSWidgets::Dialog::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Dialog_OnDragEnterEvent(KNSWidgets__Dialog* self, intptr_t slot) {
    if (auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self))
        vknswidgetsdialog->knswidgets__dialog_dragenterevent_callback = reinterpret_cast<VirtualKNSWidgetsDialog::KNSWidgets__Dialog_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KNSWidgets__Dialog_DragMoveEvent(KNSWidgets__Dialog* self, QDragMoveEvent* event) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog) {
        vknswidgetsdialog->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KNSWidgets::Dialog::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNSWidgets__Dialog_SuperDragMoveEvent(KNSWidgets__Dialog* self, QDragMoveEvent* event) {
    if (auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self)) {
        vknswidgetsdialog->KNSWidgets::Dialog::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KNSWidgets::Dialog::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Dialog_OnDragMoveEvent(KNSWidgets__Dialog* self, intptr_t slot) {
    if (auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self))
        vknswidgetsdialog->knswidgets__dialog_dragmoveevent_callback = reinterpret_cast<VirtualKNSWidgetsDialog::KNSWidgets__Dialog_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KNSWidgets__Dialog_DragLeaveEvent(KNSWidgets__Dialog* self, QDragLeaveEvent* event) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog) {
        vknswidgetsdialog->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KNSWidgets::Dialog::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNSWidgets__Dialog_SuperDragLeaveEvent(KNSWidgets__Dialog* self, QDragLeaveEvent* event) {
    if (auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self)) {
        vknswidgetsdialog->KNSWidgets::Dialog::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KNSWidgets::Dialog::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Dialog_OnDragLeaveEvent(KNSWidgets__Dialog* self, intptr_t slot) {
    if (auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self))
        vknswidgetsdialog->knswidgets__dialog_dragleaveevent_callback = reinterpret_cast<VirtualKNSWidgetsDialog::KNSWidgets__Dialog_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KNSWidgets__Dialog_DropEvent(KNSWidgets__Dialog* self, QDropEvent* event) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog) {
        vknswidgetsdialog->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method KNSWidgets::Dialog::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNSWidgets__Dialog_SuperDropEvent(KNSWidgets__Dialog* self, QDropEvent* event) {
    if (auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self)) {
        vknswidgetsdialog->KNSWidgets::Dialog::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method KNSWidgets::Dialog::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Dialog_OnDropEvent(KNSWidgets__Dialog* self, intptr_t slot) {
    if (auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self))
        vknswidgetsdialog->knswidgets__dialog_dropevent_callback = reinterpret_cast<VirtualKNSWidgetsDialog::KNSWidgets__Dialog_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void KNSWidgets__Dialog_HideEvent(KNSWidgets__Dialog* self, QHideEvent* event) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog) {
        vknswidgetsdialog->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method KNSWidgets::Dialog::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNSWidgets__Dialog_SuperHideEvent(KNSWidgets__Dialog* self, QHideEvent* event) {
    if (auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self)) {
        vknswidgetsdialog->KNSWidgets::Dialog::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method KNSWidgets::Dialog::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Dialog_OnHideEvent(KNSWidgets__Dialog* self, intptr_t slot) {
    if (auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self))
        vknswidgetsdialog->knswidgets__dialog_hideevent_callback = reinterpret_cast<VirtualKNSWidgetsDialog::KNSWidgets__Dialog_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool KNSWidgets__Dialog_NativeEvent(KNSWidgets__Dialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog) {
        return vknswidgetsdialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method KNSWidgets::Dialog::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool KNSWidgets__Dialog_SuperNativeEvent(KNSWidgets__Dialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self)) {
        return vknswidgetsdialog->KNSWidgets::Dialog::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method KNSWidgets::Dialog::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Dialog_OnNativeEvent(KNSWidgets__Dialog* self, intptr_t slot) {
    if (auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self))
        vknswidgetsdialog->knswidgets__dialog_nativeevent_callback = reinterpret_cast<VirtualKNSWidgetsDialog::KNSWidgets__Dialog_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
void KNSWidgets__Dialog_ChangeEvent(KNSWidgets__Dialog* self, QEvent* param1) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog) {
        vknswidgetsdialog->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KNSWidgets::Dialog::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNSWidgets__Dialog_SuperChangeEvent(KNSWidgets__Dialog* self, QEvent* param1) {
    if (auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self)) {
        vknswidgetsdialog->KNSWidgets::Dialog::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KNSWidgets::Dialog::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Dialog_OnChangeEvent(KNSWidgets__Dialog* self, intptr_t slot) {
    if (auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self))
        vknswidgetsdialog->knswidgets__dialog_changeevent_callback = reinterpret_cast<VirtualKNSWidgetsDialog::KNSWidgets__Dialog_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
int KNSWidgets__Dialog_Metric(const KNSWidgets__Dialog* self, int param1) {
    auto* vknswidgetsdialog = const_cast<VirtualKNSWidgetsDialog*>(dynamic_cast<const VirtualKNSWidgetsDialog*>(self));
    if (vknswidgetsdialog) {
        return vknswidgetsdialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method KNSWidgets::Dialog::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int KNSWidgets__Dialog_SuperMetric(const KNSWidgets__Dialog* self, int param1) {
    if (auto* vknswidgetsdialog = const_cast<VirtualKNSWidgetsDialog*>(dynamic_cast<const VirtualKNSWidgetsDialog*>(self))) {
        return vknswidgetsdialog->KNSWidgets::Dialog::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method KNSWidgets::Dialog::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Dialog_OnMetric(KNSWidgets__Dialog* self, intptr_t slot) {
    if (auto* vknswidgetsdialog = const_cast<VirtualKNSWidgetsDialog*>(dynamic_cast<const VirtualKNSWidgetsDialog*>(self)))
        vknswidgetsdialog->knswidgets__dialog_metric_callback = reinterpret_cast<VirtualKNSWidgetsDialog::KNSWidgets__Dialog_Metric_Callback>(slot);
}

// Derived class handler implementation
void KNSWidgets__Dialog_InitPainter(const KNSWidgets__Dialog* self, QPainter* painter) {
    auto* vknswidgetsdialog = const_cast<VirtualKNSWidgetsDialog*>(dynamic_cast<const VirtualKNSWidgetsDialog*>(self));
    if (vknswidgetsdialog) {
        vknswidgetsdialog->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method KNSWidgets::Dialog::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void KNSWidgets__Dialog_SuperInitPainter(const KNSWidgets__Dialog* self, QPainter* painter) {
    if (auto* vknswidgetsdialog = const_cast<VirtualKNSWidgetsDialog*>(dynamic_cast<const VirtualKNSWidgetsDialog*>(self))) {
        vknswidgetsdialog->KNSWidgets::Dialog::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method KNSWidgets::Dialog::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Dialog_OnInitPainter(KNSWidgets__Dialog* self, intptr_t slot) {
    if (auto* vknswidgetsdialog = const_cast<VirtualKNSWidgetsDialog*>(dynamic_cast<const VirtualKNSWidgetsDialog*>(self)))
        vknswidgetsdialog->knswidgets__dialog_initpainter_callback = reinterpret_cast<VirtualKNSWidgetsDialog::KNSWidgets__Dialog_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* KNSWidgets__Dialog_Redirected(const KNSWidgets__Dialog* self, QPoint* offset) {
    auto* vknswidgetsdialog = const_cast<VirtualKNSWidgetsDialog*>(dynamic_cast<const VirtualKNSWidgetsDialog*>(self));
    if (vknswidgetsdialog) {
        return vknswidgetsdialog->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method KNSWidgets::Dialog::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* KNSWidgets__Dialog_SuperRedirected(const KNSWidgets__Dialog* self, QPoint* offset) {
    if (auto* vknswidgetsdialog = const_cast<VirtualKNSWidgetsDialog*>(dynamic_cast<const VirtualKNSWidgetsDialog*>(self))) {
        return vknswidgetsdialog->KNSWidgets::Dialog::redirected(offset);
    } else
        qFatal("Error: Protected virtual method KNSWidgets::Dialog::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Dialog_OnRedirected(KNSWidgets__Dialog* self, intptr_t slot) {
    if (auto* vknswidgetsdialog = const_cast<VirtualKNSWidgetsDialog*>(dynamic_cast<const VirtualKNSWidgetsDialog*>(self)))
        vknswidgetsdialog->knswidgets__dialog_redirected_callback = reinterpret_cast<VirtualKNSWidgetsDialog::KNSWidgets__Dialog_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* KNSWidgets__Dialog_SharedPainter(const KNSWidgets__Dialog* self) {
    auto* vknswidgetsdialog = const_cast<VirtualKNSWidgetsDialog*>(dynamic_cast<const VirtualKNSWidgetsDialog*>(self));
    if (vknswidgetsdialog) {
        return vknswidgetsdialog->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method KNSWidgets::Dialog::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* KNSWidgets__Dialog_SuperSharedPainter(const KNSWidgets__Dialog* self) {
    if (auto* vknswidgetsdialog = const_cast<VirtualKNSWidgetsDialog*>(dynamic_cast<const VirtualKNSWidgetsDialog*>(self))) {
        return vknswidgetsdialog->KNSWidgets::Dialog::sharedPainter();
    } else
        qFatal("Error: Protected virtual method KNSWidgets::Dialog::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Dialog_OnSharedPainter(KNSWidgets__Dialog* self, intptr_t slot) {
    if (auto* vknswidgetsdialog = const_cast<VirtualKNSWidgetsDialog*>(dynamic_cast<const VirtualKNSWidgetsDialog*>(self)))
        vknswidgetsdialog->knswidgets__dialog_sharedpainter_callback = reinterpret_cast<VirtualKNSWidgetsDialog::KNSWidgets__Dialog_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void KNSWidgets__Dialog_InputMethodEvent(KNSWidgets__Dialog* self, QInputMethodEvent* param1) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog) {
        vknswidgetsdialog->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KNSWidgets::Dialog::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNSWidgets__Dialog_SuperInputMethodEvent(KNSWidgets__Dialog* self, QInputMethodEvent* param1) {
    if (auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self)) {
        vknswidgetsdialog->KNSWidgets::Dialog::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method KNSWidgets::Dialog::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Dialog_OnInputMethodEvent(KNSWidgets__Dialog* self, intptr_t slot) {
    if (auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self))
        vknswidgetsdialog->knswidgets__dialog_inputmethodevent_callback = reinterpret_cast<VirtualKNSWidgetsDialog::KNSWidgets__Dialog_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* KNSWidgets__Dialog_InputMethodQuery(const KNSWidgets__Dialog* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* KNSWidgets__Dialog_SuperInputMethodQuery(const KNSWidgets__Dialog* self, int param1) {
    return new QVariant(self->KNSWidgets::Dialog::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Dialog_OnInputMethodQuery(KNSWidgets__Dialog* self, intptr_t slot) {
    if (auto* vknswidgetsdialog = const_cast<VirtualKNSWidgetsDialog*>(dynamic_cast<const VirtualKNSWidgetsDialog*>(self)))
        vknswidgetsdialog->knswidgets__dialog_inputmethodquery_callback = reinterpret_cast<VirtualKNSWidgetsDialog::KNSWidgets__Dialog_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool KNSWidgets__Dialog_FocusNextPrevChild(KNSWidgets__Dialog* self, bool next) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog) {
        return vknswidgetsdialog->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method KNSWidgets::Dialog::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool KNSWidgets__Dialog_SuperFocusNextPrevChild(KNSWidgets__Dialog* self, bool next) {
    if (auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self)) {
        return vknswidgetsdialog->KNSWidgets::Dialog::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method KNSWidgets::Dialog::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Dialog_OnFocusNextPrevChild(KNSWidgets__Dialog* self, intptr_t slot) {
    if (auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self))
        vknswidgetsdialog->knswidgets__dialog_focusnextprevchild_callback = reinterpret_cast<VirtualKNSWidgetsDialog::KNSWidgets__Dialog_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
void KNSWidgets__Dialog_TimerEvent(KNSWidgets__Dialog* self, QTimerEvent* event) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog) {
        vknswidgetsdialog->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KNSWidgets::Dialog::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNSWidgets__Dialog_SuperTimerEvent(KNSWidgets__Dialog* self, QTimerEvent* event) {
    if (auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self)) {
        vknswidgetsdialog->KNSWidgets::Dialog::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KNSWidgets::Dialog::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Dialog_OnTimerEvent(KNSWidgets__Dialog* self, intptr_t slot) {
    if (auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self))
        vknswidgetsdialog->knswidgets__dialog_timerevent_callback = reinterpret_cast<VirtualKNSWidgetsDialog::KNSWidgets__Dialog_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KNSWidgets__Dialog_ChildEvent(KNSWidgets__Dialog* self, QChildEvent* event) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog) {
        vknswidgetsdialog->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KNSWidgets::Dialog::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNSWidgets__Dialog_SuperChildEvent(KNSWidgets__Dialog* self, QChildEvent* event) {
    if (auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self)) {
        vknswidgetsdialog->KNSWidgets::Dialog::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KNSWidgets::Dialog::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Dialog_OnChildEvent(KNSWidgets__Dialog* self, intptr_t slot) {
    if (auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self))
        vknswidgetsdialog->knswidgets__dialog_childevent_callback = reinterpret_cast<VirtualKNSWidgetsDialog::KNSWidgets__Dialog_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KNSWidgets__Dialog_CustomEvent(KNSWidgets__Dialog* self, QEvent* event) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog) {
        vknswidgetsdialog->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KNSWidgets::Dialog::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KNSWidgets__Dialog_SuperCustomEvent(KNSWidgets__Dialog* self, QEvent* event) {
    if (auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self)) {
        vknswidgetsdialog->KNSWidgets::Dialog::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KNSWidgets::Dialog::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Dialog_OnCustomEvent(KNSWidgets__Dialog* self, intptr_t slot) {
    if (auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self))
        vknswidgetsdialog->knswidgets__dialog_customevent_callback = reinterpret_cast<VirtualKNSWidgetsDialog::KNSWidgets__Dialog_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KNSWidgets__Dialog_ConnectNotify(KNSWidgets__Dialog* self, const QMetaMethod* signal) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog) {
        vknswidgetsdialog->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KNSWidgets::Dialog::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KNSWidgets__Dialog_SuperConnectNotify(KNSWidgets__Dialog* self, const QMetaMethod* signal) {
    if (auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self)) {
        vknswidgetsdialog->KNSWidgets::Dialog::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KNSWidgets::Dialog::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Dialog_OnConnectNotify(KNSWidgets__Dialog* self, intptr_t slot) {
    if (auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self))
        vknswidgetsdialog->knswidgets__dialog_connectnotify_callback = reinterpret_cast<VirtualKNSWidgetsDialog::KNSWidgets__Dialog_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KNSWidgets__Dialog_DisconnectNotify(KNSWidgets__Dialog* self, const QMetaMethod* signal) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog) {
        vknswidgetsdialog->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KNSWidgets::Dialog::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KNSWidgets__Dialog_SuperDisconnectNotify(KNSWidgets__Dialog* self, const QMetaMethod* signal) {
    if (auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self)) {
        vknswidgetsdialog->KNSWidgets::Dialog::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KNSWidgets::Dialog::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Dialog_OnDisconnectNotify(KNSWidgets__Dialog* self, intptr_t slot) {
    if (auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self))
        vknswidgetsdialog->knswidgets__dialog_disconnectnotify_callback = reinterpret_cast<VirtualKNSWidgetsDialog::KNSWidgets__Dialog_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void KNSWidgets__Dialog_AdjustPosition(KNSWidgets__Dialog* self, QWidget* param1) {
    if (auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self)) {
        vknswidgetsdialog->VirtualKNSWidgetsDialog::adjustPosition(param1);
    } else
        qFatal("Error: Protected method KNSWidgets::Dialog::adjustPosition called without a directly constructed type");
}

// Derived class protected handler implementation
void KNSWidgets__Dialog_UpdateMicroFocus(KNSWidgets__Dialog* self) {
    if (auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self)) {
        vknswidgetsdialog->VirtualKNSWidgetsDialog::updateMicroFocus();
    } else
        qFatal("Error: Protected method KNSWidgets::Dialog::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void KNSWidgets__Dialog_Create(KNSWidgets__Dialog* self) {
    if (auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self)) {
        vknswidgetsdialog->VirtualKNSWidgetsDialog::create();
    } else
        qFatal("Error: Protected method KNSWidgets::Dialog::create called without a directly constructed type");
}

// Derived class protected handler implementation
void KNSWidgets__Dialog_Destroy(KNSWidgets__Dialog* self) {
    if (auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self)) {
        vknswidgetsdialog->VirtualKNSWidgetsDialog::destroy();
    } else
        qFatal("Error: Protected method KNSWidgets::Dialog::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool KNSWidgets__Dialog_FocusNextChild(KNSWidgets__Dialog* self) {
    if (auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self)) {
        return vknswidgetsdialog->VirtualKNSWidgetsDialog::focusNextChild();
    } else
        qFatal("Error: Protected method KNSWidgets::Dialog::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool KNSWidgets__Dialog_FocusPreviousChild(KNSWidgets__Dialog* self) {
    if (auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self)) {
        return vknswidgetsdialog->VirtualKNSWidgetsDialog::focusPreviousChild();
    } else
        qFatal("Error: Protected method KNSWidgets::Dialog::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KNSWidgets__Dialog_Sender(const KNSWidgets__Dialog* self) {
    if (auto* vknswidgetsdialog = const_cast<VirtualKNSWidgetsDialog*>(dynamic_cast<const VirtualKNSWidgetsDialog*>(self))) {
        return vknswidgetsdialog->VirtualKNSWidgetsDialog::sender();
    } else
        qFatal("Error: Protected method KNSWidgets::Dialog::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KNSWidgets__Dialog_SenderSignalIndex(const KNSWidgets__Dialog* self) {
    if (auto* vknswidgetsdialog = const_cast<VirtualKNSWidgetsDialog*>(dynamic_cast<const VirtualKNSWidgetsDialog*>(self))) {
        return vknswidgetsdialog->VirtualKNSWidgetsDialog::senderSignalIndex();
    } else
        qFatal("Error: Protected method KNSWidgets::Dialog::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KNSWidgets__Dialog_Receivers(const KNSWidgets__Dialog* self, const char* signal) {
    if (auto* vknswidgetsdialog = const_cast<VirtualKNSWidgetsDialog*>(dynamic_cast<const VirtualKNSWidgetsDialog*>(self))) {
        return vknswidgetsdialog->VirtualKNSWidgetsDialog::receivers(signal);
    } else
        qFatal("Error: Protected method KNSWidgets::Dialog::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KNSWidgets__Dialog_IsSignalConnected(const KNSWidgets__Dialog* self, const QMetaMethod* signal) {
    if (auto* vknswidgetsdialog = const_cast<VirtualKNSWidgetsDialog*>(dynamic_cast<const VirtualKNSWidgetsDialog*>(self))) {
        return vknswidgetsdialog->VirtualKNSWidgetsDialog::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KNSWidgets::Dialog::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double KNSWidgets__Dialog_GetDecodedMetricF(const KNSWidgets__Dialog* self, int metricA, int metricB) {
    if (auto* vknswidgetsdialog = const_cast<VirtualKNSWidgetsDialog*>(dynamic_cast<const VirtualKNSWidgetsDialog*>(self))) {
        return vknswidgetsdialog->VirtualKNSWidgetsDialog::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method KNSWidgets::Dialog::getDecodedMetricF called without a directly constructed type");
}

void KNSWidgets__Dialog_Delete(KNSWidgets__Dialog* self) {
    delete self;
}
