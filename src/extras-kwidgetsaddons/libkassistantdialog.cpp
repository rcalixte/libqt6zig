#include <KAssistantDialog>
#include <KPageDialog>
#include <KPageWidget>
#include <KPageWidgetItem>
#include <QActionEvent>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QContextMenuEvent>
#include <QDialog>
#include <QDialogButtonBox>
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
#include <QPushButton>
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <kassistantdialog.h>
#include "libkassistantdialog.h"
#include "libkassistantdialog.hxx"

KAssistantDialog* KAssistantDialog_new(QWidget* parent) {
    return new VirtualKAssistantDialog(parent);
}

KAssistantDialog* KAssistantDialog_new2() {
    return new VirtualKAssistantDialog();
}

KAssistantDialog* KAssistantDialog_new3(QWidget* parent, int flags) {
    return new VirtualKAssistantDialog(parent, static_cast<Qt::WindowFlags>(flags));
}

QMetaObject* KAssistantDialog_MetaObject(const KAssistantDialog* self) {
    return (QMetaObject*)self->metaObject();
}

void* KAssistantDialog_Metacast(KAssistantDialog* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KAssistantDialog_Metacall(KAssistantDialog* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KAssistantDialog_Tr(const char* s) {
    auto _ret = KAssistantDialog::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KAssistantDialog_SetValid(KAssistantDialog* self, KPageWidgetItem* page, bool enable) {
    self->setValid(page, enable);
}

bool KAssistantDialog_IsValid(const KAssistantDialog* self, KPageWidgetItem* page) {
    return self->isValid(page);
}

void KAssistantDialog_SetAppropriate(KAssistantDialog* self, KPageWidgetItem* page, bool appropriate) {
    self->setAppropriate(page, appropriate);
}

bool KAssistantDialog_IsAppropriate(const KAssistantDialog* self, KPageWidgetItem* page) {
    return self->isAppropriate(page);
}

QPushButton* KAssistantDialog_NextButton(const KAssistantDialog* self) {
    return self->nextButton();
}

QPushButton* KAssistantDialog_BackButton(const KAssistantDialog* self) {
    return self->backButton();
}

QPushButton* KAssistantDialog_FinishButton(const KAssistantDialog* self) {
    return self->finishButton();
}

void KAssistantDialog_Back(KAssistantDialog* self) {
    self->back();
}

void KAssistantDialog_Next(KAssistantDialog* self) {
    self->next();
}

void KAssistantDialog_ShowEvent(KAssistantDialog* self, QShowEvent* event) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog) {
        vkassistantdialog->showEvent(event);
    }
}

libqt_string KAssistantDialog_Tr2(const char* s, const char* c) {
    auto _ret = KAssistantDialog::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KAssistantDialog_Tr3(const char* s, const char* c, int n) {
    auto _ret = KAssistantDialog::tr(s, c, static_cast<int>(n));
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
QMetaObject* KAssistantDialog_SuperMetaObject(const KAssistantDialog* self) {
    return (QMetaObject*)self->KAssistantDialog::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KAssistantDialog_OnMetaObject(KAssistantDialog* self, intptr_t slot) {
    if (auto* vkassistantdialog = const_cast<VirtualKAssistantDialog*>(dynamic_cast<const VirtualKAssistantDialog*>(self)))
        vkassistantdialog->kassistantdialog_metaobject_callback = reinterpret_cast<VirtualKAssistantDialog::KAssistantDialog_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KAssistantDialog_SuperMetacast(KAssistantDialog* self, const char* param1) {
    return self->KAssistantDialog::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KAssistantDialog_OnMetacast(KAssistantDialog* self, intptr_t slot) {
    if (auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self))
        vkassistantdialog->kassistantdialog_metacast_callback = reinterpret_cast<VirtualKAssistantDialog::KAssistantDialog_Metacast_Callback>(slot);
}

// Base class handler implementation
int KAssistantDialog_SuperMetacall(KAssistantDialog* self, int param1, int param2, void** param3) {
    return self->KAssistantDialog::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KAssistantDialog_OnMetacall(KAssistantDialog* self, intptr_t slot) {
    if (auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self))
        vkassistantdialog->kassistantdialog_metacall_callback = reinterpret_cast<VirtualKAssistantDialog::KAssistantDialog_Metacall_Callback>(slot);
}

// Base class handler implementation
void KAssistantDialog_SuperBack(KAssistantDialog* self) {
    self->KAssistantDialog::back();
}

// Auxiliary method to allow providing re-implementation
void KAssistantDialog_OnBack(KAssistantDialog* self, intptr_t slot) {
    if (auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self))
        vkassistantdialog->kassistantdialog_back_callback = reinterpret_cast<VirtualKAssistantDialog::KAssistantDialog_Back_Callback>(slot);
}

// Base class handler implementation
void KAssistantDialog_SuperNext(KAssistantDialog* self) {
    self->KAssistantDialog::next();
}

// Auxiliary method to allow providing re-implementation
void KAssistantDialog_OnNext(KAssistantDialog* self, intptr_t slot) {
    if (auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self))
        vkassistantdialog->kassistantdialog_next_callback = reinterpret_cast<VirtualKAssistantDialog::KAssistantDialog_Next_Callback>(slot);
}

// Base class handler implementation
void KAssistantDialog_SuperShowEvent(KAssistantDialog* self, QShowEvent* event) {
    if (auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self)) {
        vkassistantdialog->KAssistantDialog::showEvent(event);
    } else
        qFatal("Error: Protected virtual method KAssistantDialog::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAssistantDialog_OnShowEvent(KAssistantDialog* self, intptr_t slot) {
    if (auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self))
        vkassistantdialog->kassistantdialog_showevent_callback = reinterpret_cast<VirtualKAssistantDialog::KAssistantDialog_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void KAssistantDialog_SetVisible(KAssistantDialog* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void KAssistantDialog_SuperSetVisible(KAssistantDialog* self, bool visible) {
    self->KAssistantDialog::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void KAssistantDialog_OnSetVisible(KAssistantDialog* self, intptr_t slot) {
    if (auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self))
        vkassistantdialog->kassistantdialog_setvisible_callback = reinterpret_cast<VirtualKAssistantDialog::KAssistantDialog_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* KAssistantDialog_SizeHint(const KAssistantDialog* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* KAssistantDialog_SuperSizeHint(const KAssistantDialog* self) {
    return new QSize(self->KAssistantDialog::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void KAssistantDialog_OnSizeHint(KAssistantDialog* self, intptr_t slot) {
    if (auto* vkassistantdialog = const_cast<VirtualKAssistantDialog*>(dynamic_cast<const VirtualKAssistantDialog*>(self)))
        vkassistantdialog->kassistantdialog_sizehint_callback = reinterpret_cast<VirtualKAssistantDialog::KAssistantDialog_SizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* KAssistantDialog_MinimumSizeHint(const KAssistantDialog* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* KAssistantDialog_SuperMinimumSizeHint(const KAssistantDialog* self) {
    return new QSize(self->KAssistantDialog::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void KAssistantDialog_OnMinimumSizeHint(KAssistantDialog* self, intptr_t slot) {
    if (auto* vkassistantdialog = const_cast<VirtualKAssistantDialog*>(dynamic_cast<const VirtualKAssistantDialog*>(self)))
        vkassistantdialog->kassistantdialog_minimumsizehint_callback = reinterpret_cast<VirtualKAssistantDialog::KAssistantDialog_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
void KAssistantDialog_Open(KAssistantDialog* self) {
    self->open();
}

// Base class handler implementation
void KAssistantDialog_SuperOpen(KAssistantDialog* self) {
    self->KAssistantDialog::open();
}

// Auxiliary method to allow providing re-implementation
void KAssistantDialog_OnOpen(KAssistantDialog* self, intptr_t slot) {
    if (auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self))
        vkassistantdialog->kassistantdialog_open_callback = reinterpret_cast<VirtualKAssistantDialog::KAssistantDialog_Open_Callback>(slot);
}

// Derived class handler implementation
int KAssistantDialog_Exec(KAssistantDialog* self) {
    return self->exec();
}

// Base class handler implementation
int KAssistantDialog_SuperExec(KAssistantDialog* self) {
    return self->KAssistantDialog::exec();
}

// Auxiliary method to allow providing re-implementation
void KAssistantDialog_OnExec(KAssistantDialog* self, intptr_t slot) {
    if (auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self))
        vkassistantdialog->kassistantdialog_exec_callback = reinterpret_cast<VirtualKAssistantDialog::KAssistantDialog_Exec_Callback>(slot);
}

// Derived class handler implementation
void KAssistantDialog_Done(KAssistantDialog* self, int param1) {
    self->done(static_cast<int>(param1));
}

// Base class handler implementation
void KAssistantDialog_SuperDone(KAssistantDialog* self, int param1) {
    self->KAssistantDialog::done(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void KAssistantDialog_OnDone(KAssistantDialog* self, intptr_t slot) {
    if (auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self))
        vkassistantdialog->kassistantdialog_done_callback = reinterpret_cast<VirtualKAssistantDialog::KAssistantDialog_Done_Callback>(slot);
}

// Derived class handler implementation
void KAssistantDialog_Accept(KAssistantDialog* self) {
    self->accept();
}

// Base class handler implementation
void KAssistantDialog_SuperAccept(KAssistantDialog* self) {
    self->KAssistantDialog::accept();
}

// Auxiliary method to allow providing re-implementation
void KAssistantDialog_OnAccept(KAssistantDialog* self, intptr_t slot) {
    if (auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self))
        vkassistantdialog->kassistantdialog_accept_callback = reinterpret_cast<VirtualKAssistantDialog::KAssistantDialog_Accept_Callback>(slot);
}

// Derived class handler implementation
void KAssistantDialog_Reject(KAssistantDialog* self) {
    self->reject();
}

// Base class handler implementation
void KAssistantDialog_SuperReject(KAssistantDialog* self) {
    self->KAssistantDialog::reject();
}

// Auxiliary method to allow providing re-implementation
void KAssistantDialog_OnReject(KAssistantDialog* self, intptr_t slot) {
    if (auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self))
        vkassistantdialog->kassistantdialog_reject_callback = reinterpret_cast<VirtualKAssistantDialog::KAssistantDialog_Reject_Callback>(slot);
}

// Derived class handler implementation
void KAssistantDialog_KeyPressEvent(KAssistantDialog* self, QKeyEvent* param1) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog) {
        vkassistantdialog->keyPressEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KAssistantDialog::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAssistantDialog_SuperKeyPressEvent(KAssistantDialog* self, QKeyEvent* param1) {
    if (auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self)) {
        vkassistantdialog->KAssistantDialog::keyPressEvent(param1);
    } else
        qFatal("Error: Protected virtual method KAssistantDialog::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAssistantDialog_OnKeyPressEvent(KAssistantDialog* self, intptr_t slot) {
    if (auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self))
        vkassistantdialog->kassistantdialog_keypressevent_callback = reinterpret_cast<VirtualKAssistantDialog::KAssistantDialog_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void KAssistantDialog_CloseEvent(KAssistantDialog* self, QCloseEvent* param1) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog) {
        vkassistantdialog->closeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KAssistantDialog::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAssistantDialog_SuperCloseEvent(KAssistantDialog* self, QCloseEvent* param1) {
    if (auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self)) {
        vkassistantdialog->KAssistantDialog::closeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KAssistantDialog::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAssistantDialog_OnCloseEvent(KAssistantDialog* self, intptr_t slot) {
    if (auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self))
        vkassistantdialog->kassistantdialog_closeevent_callback = reinterpret_cast<VirtualKAssistantDialog::KAssistantDialog_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void KAssistantDialog_ResizeEvent(KAssistantDialog* self, QResizeEvent* param1) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog) {
        vkassistantdialog->resizeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KAssistantDialog::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAssistantDialog_SuperResizeEvent(KAssistantDialog* self, QResizeEvent* param1) {
    if (auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self)) {
        vkassistantdialog->KAssistantDialog::resizeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KAssistantDialog::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAssistantDialog_OnResizeEvent(KAssistantDialog* self, intptr_t slot) {
    if (auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self))
        vkassistantdialog->kassistantdialog_resizeevent_callback = reinterpret_cast<VirtualKAssistantDialog::KAssistantDialog_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void KAssistantDialog_ContextMenuEvent(KAssistantDialog* self, QContextMenuEvent* param1) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog) {
        vkassistantdialog->contextMenuEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KAssistantDialog::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAssistantDialog_SuperContextMenuEvent(KAssistantDialog* self, QContextMenuEvent* param1) {
    if (auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self)) {
        vkassistantdialog->KAssistantDialog::contextMenuEvent(param1);
    } else
        qFatal("Error: Protected virtual method KAssistantDialog::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAssistantDialog_OnContextMenuEvent(KAssistantDialog* self, intptr_t slot) {
    if (auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self))
        vkassistantdialog->kassistantdialog_contextmenuevent_callback = reinterpret_cast<VirtualKAssistantDialog::KAssistantDialog_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
bool KAssistantDialog_EventFilter(KAssistantDialog* self, QObject* param1, QEvent* param2) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog) {
        return vkassistantdialog->eventFilter(param1, param2);
    } else {
        qFatal("Error: Protected virtual method KAssistantDialog::eventFilter called without a directly constructed type");
    }
}

// Base class handler implementation
bool KAssistantDialog_SuperEventFilter(KAssistantDialog* self, QObject* param1, QEvent* param2) {
    if (auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self)) {
        return vkassistantdialog->KAssistantDialog::eventFilter(param1, param2);
    } else
        qFatal("Error: Protected virtual method KAssistantDialog::eventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAssistantDialog_OnEventFilter(KAssistantDialog* self, intptr_t slot) {
    if (auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self))
        vkassistantdialog->kassistantdialog_eventfilter_callback = reinterpret_cast<VirtualKAssistantDialog::KAssistantDialog_EventFilter_Callback>(slot);
}

// Derived class handler implementation
int KAssistantDialog_DevType(const KAssistantDialog* self) {
    return self->devType();
}

// Base class handler implementation
int KAssistantDialog_SuperDevType(const KAssistantDialog* self) {
    return self->KAssistantDialog::devType();
}

// Auxiliary method to allow providing re-implementation
void KAssistantDialog_OnDevType(KAssistantDialog* self, intptr_t slot) {
    if (auto* vkassistantdialog = const_cast<VirtualKAssistantDialog*>(dynamic_cast<const VirtualKAssistantDialog*>(self)))
        vkassistantdialog->kassistantdialog_devtype_callback = reinterpret_cast<VirtualKAssistantDialog::KAssistantDialog_DevType_Callback>(slot);
}

// Derived class handler implementation
int KAssistantDialog_HeightForWidth(const KAssistantDialog* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int KAssistantDialog_SuperHeightForWidth(const KAssistantDialog* self, int param1) {
    return self->KAssistantDialog::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void KAssistantDialog_OnHeightForWidth(KAssistantDialog* self, intptr_t slot) {
    if (auto* vkassistantdialog = const_cast<VirtualKAssistantDialog*>(dynamic_cast<const VirtualKAssistantDialog*>(self)))
        vkassistantdialog->kassistantdialog_heightforwidth_callback = reinterpret_cast<VirtualKAssistantDialog::KAssistantDialog_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool KAssistantDialog_HasHeightForWidth(const KAssistantDialog* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool KAssistantDialog_SuperHasHeightForWidth(const KAssistantDialog* self) {
    return self->KAssistantDialog::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void KAssistantDialog_OnHasHeightForWidth(KAssistantDialog* self, intptr_t slot) {
    if (auto* vkassistantdialog = const_cast<VirtualKAssistantDialog*>(dynamic_cast<const VirtualKAssistantDialog*>(self)))
        vkassistantdialog->kassistantdialog_hasheightforwidth_callback = reinterpret_cast<VirtualKAssistantDialog::KAssistantDialog_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* KAssistantDialog_PaintEngine(const KAssistantDialog* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* KAssistantDialog_SuperPaintEngine(const KAssistantDialog* self) {
    return self->KAssistantDialog::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void KAssistantDialog_OnPaintEngine(KAssistantDialog* self, intptr_t slot) {
    if (auto* vkassistantdialog = const_cast<VirtualKAssistantDialog*>(dynamic_cast<const VirtualKAssistantDialog*>(self)))
        vkassistantdialog->kassistantdialog_paintengine_callback = reinterpret_cast<VirtualKAssistantDialog::KAssistantDialog_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
bool KAssistantDialog_Event(KAssistantDialog* self, QEvent* event) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog) {
        return vkassistantdialog->event(event);
    } else {
        qFatal("Error: Protected virtual method KAssistantDialog::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool KAssistantDialog_SuperEvent(KAssistantDialog* self, QEvent* event) {
    if (auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self)) {
        return vkassistantdialog->KAssistantDialog::event(event);
    } else
        qFatal("Error: Protected virtual method KAssistantDialog::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAssistantDialog_OnEvent(KAssistantDialog* self, intptr_t slot) {
    if (auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self))
        vkassistantdialog->kassistantdialog_event_callback = reinterpret_cast<VirtualKAssistantDialog::KAssistantDialog_Event_Callback>(slot);
}

// Derived class handler implementation
void KAssistantDialog_MousePressEvent(KAssistantDialog* self, QMouseEvent* event) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog) {
        vkassistantdialog->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method KAssistantDialog::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAssistantDialog_SuperMousePressEvent(KAssistantDialog* self, QMouseEvent* event) {
    if (auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self)) {
        vkassistantdialog->KAssistantDialog::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method KAssistantDialog::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAssistantDialog_OnMousePressEvent(KAssistantDialog* self, intptr_t slot) {
    if (auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self))
        vkassistantdialog->kassistantdialog_mousepressevent_callback = reinterpret_cast<VirtualKAssistantDialog::KAssistantDialog_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void KAssistantDialog_MouseReleaseEvent(KAssistantDialog* self, QMouseEvent* event) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog) {
        vkassistantdialog->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KAssistantDialog::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAssistantDialog_SuperMouseReleaseEvent(KAssistantDialog* self, QMouseEvent* event) {
    if (auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self)) {
        vkassistantdialog->KAssistantDialog::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KAssistantDialog::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAssistantDialog_OnMouseReleaseEvent(KAssistantDialog* self, intptr_t slot) {
    if (auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self))
        vkassistantdialog->kassistantdialog_mousereleaseevent_callback = reinterpret_cast<VirtualKAssistantDialog::KAssistantDialog_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KAssistantDialog_MouseDoubleClickEvent(KAssistantDialog* self, QMouseEvent* event) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog) {
        vkassistantdialog->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method KAssistantDialog::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAssistantDialog_SuperMouseDoubleClickEvent(KAssistantDialog* self, QMouseEvent* event) {
    if (auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self)) {
        vkassistantdialog->KAssistantDialog::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method KAssistantDialog::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAssistantDialog_OnMouseDoubleClickEvent(KAssistantDialog* self, intptr_t slot) {
    if (auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self))
        vkassistantdialog->kassistantdialog_mousedoubleclickevent_callback = reinterpret_cast<VirtualKAssistantDialog::KAssistantDialog_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void KAssistantDialog_MouseMoveEvent(KAssistantDialog* self, QMouseEvent* event) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog) {
        vkassistantdialog->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KAssistantDialog::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAssistantDialog_SuperMouseMoveEvent(KAssistantDialog* self, QMouseEvent* event) {
    if (auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self)) {
        vkassistantdialog->KAssistantDialog::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KAssistantDialog::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAssistantDialog_OnMouseMoveEvent(KAssistantDialog* self, intptr_t slot) {
    if (auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self))
        vkassistantdialog->kassistantdialog_mousemoveevent_callback = reinterpret_cast<VirtualKAssistantDialog::KAssistantDialog_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KAssistantDialog_WheelEvent(KAssistantDialog* self, QWheelEvent* event) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog) {
        vkassistantdialog->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method KAssistantDialog::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAssistantDialog_SuperWheelEvent(KAssistantDialog* self, QWheelEvent* event) {
    if (auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self)) {
        vkassistantdialog->KAssistantDialog::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method KAssistantDialog::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAssistantDialog_OnWheelEvent(KAssistantDialog* self, intptr_t slot) {
    if (auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self))
        vkassistantdialog->kassistantdialog_wheelevent_callback = reinterpret_cast<VirtualKAssistantDialog::KAssistantDialog_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void KAssistantDialog_KeyReleaseEvent(KAssistantDialog* self, QKeyEvent* event) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog) {
        vkassistantdialog->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KAssistantDialog::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAssistantDialog_SuperKeyReleaseEvent(KAssistantDialog* self, QKeyEvent* event) {
    if (auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self)) {
        vkassistantdialog->KAssistantDialog::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KAssistantDialog::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAssistantDialog_OnKeyReleaseEvent(KAssistantDialog* self, intptr_t slot) {
    if (auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self))
        vkassistantdialog->kassistantdialog_keyreleaseevent_callback = reinterpret_cast<VirtualKAssistantDialog::KAssistantDialog_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KAssistantDialog_FocusInEvent(KAssistantDialog* self, QFocusEvent* event) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog) {
        vkassistantdialog->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method KAssistantDialog::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAssistantDialog_SuperFocusInEvent(KAssistantDialog* self, QFocusEvent* event) {
    if (auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self)) {
        vkassistantdialog->KAssistantDialog::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method KAssistantDialog::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAssistantDialog_OnFocusInEvent(KAssistantDialog* self, intptr_t slot) {
    if (auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self))
        vkassistantdialog->kassistantdialog_focusinevent_callback = reinterpret_cast<VirtualKAssistantDialog::KAssistantDialog_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void KAssistantDialog_FocusOutEvent(KAssistantDialog* self, QFocusEvent* event) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog) {
        vkassistantdialog->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method KAssistantDialog::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAssistantDialog_SuperFocusOutEvent(KAssistantDialog* self, QFocusEvent* event) {
    if (auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self)) {
        vkassistantdialog->KAssistantDialog::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method KAssistantDialog::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAssistantDialog_OnFocusOutEvent(KAssistantDialog* self, intptr_t slot) {
    if (auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self))
        vkassistantdialog->kassistantdialog_focusoutevent_callback = reinterpret_cast<VirtualKAssistantDialog::KAssistantDialog_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void KAssistantDialog_EnterEvent(KAssistantDialog* self, QEnterEvent* event) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog) {
        vkassistantdialog->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KAssistantDialog::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAssistantDialog_SuperEnterEvent(KAssistantDialog* self, QEnterEvent* event) {
    if (auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self)) {
        vkassistantdialog->KAssistantDialog::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method KAssistantDialog::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAssistantDialog_OnEnterEvent(KAssistantDialog* self, intptr_t slot) {
    if (auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self))
        vkassistantdialog->kassistantdialog_enterevent_callback = reinterpret_cast<VirtualKAssistantDialog::KAssistantDialog_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KAssistantDialog_LeaveEvent(KAssistantDialog* self, QEvent* event) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog) {
        vkassistantdialog->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KAssistantDialog::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAssistantDialog_SuperLeaveEvent(KAssistantDialog* self, QEvent* event) {
    if (auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self)) {
        vkassistantdialog->KAssistantDialog::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KAssistantDialog::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAssistantDialog_OnLeaveEvent(KAssistantDialog* self, intptr_t slot) {
    if (auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self))
        vkassistantdialog->kassistantdialog_leaveevent_callback = reinterpret_cast<VirtualKAssistantDialog::KAssistantDialog_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KAssistantDialog_PaintEvent(KAssistantDialog* self, QPaintEvent* event) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog) {
        vkassistantdialog->paintEvent(event);
    } else {
        qFatal("Error: Protected virtual method KAssistantDialog::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAssistantDialog_SuperPaintEvent(KAssistantDialog* self, QPaintEvent* event) {
    if (auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self)) {
        vkassistantdialog->KAssistantDialog::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method KAssistantDialog::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAssistantDialog_OnPaintEvent(KAssistantDialog* self, intptr_t slot) {
    if (auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self))
        vkassistantdialog->kassistantdialog_paintevent_callback = reinterpret_cast<VirtualKAssistantDialog::KAssistantDialog_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void KAssistantDialog_MoveEvent(KAssistantDialog* self, QMoveEvent* event) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog) {
        vkassistantdialog->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KAssistantDialog::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAssistantDialog_SuperMoveEvent(KAssistantDialog* self, QMoveEvent* event) {
    if (auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self)) {
        vkassistantdialog->KAssistantDialog::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method KAssistantDialog::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAssistantDialog_OnMoveEvent(KAssistantDialog* self, intptr_t slot) {
    if (auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self))
        vkassistantdialog->kassistantdialog_moveevent_callback = reinterpret_cast<VirtualKAssistantDialog::KAssistantDialog_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KAssistantDialog_TabletEvent(KAssistantDialog* self, QTabletEvent* event) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog) {
        vkassistantdialog->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method KAssistantDialog::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAssistantDialog_SuperTabletEvent(KAssistantDialog* self, QTabletEvent* event) {
    if (auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self)) {
        vkassistantdialog->KAssistantDialog::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method KAssistantDialog::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAssistantDialog_OnTabletEvent(KAssistantDialog* self, intptr_t slot) {
    if (auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self))
        vkassistantdialog->kassistantdialog_tabletevent_callback = reinterpret_cast<VirtualKAssistantDialog::KAssistantDialog_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void KAssistantDialog_ActionEvent(KAssistantDialog* self, QActionEvent* event) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog) {
        vkassistantdialog->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method KAssistantDialog::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAssistantDialog_SuperActionEvent(KAssistantDialog* self, QActionEvent* event) {
    if (auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self)) {
        vkassistantdialog->KAssistantDialog::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method KAssistantDialog::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAssistantDialog_OnActionEvent(KAssistantDialog* self, intptr_t slot) {
    if (auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self))
        vkassistantdialog->kassistantdialog_actionevent_callback = reinterpret_cast<VirtualKAssistantDialog::KAssistantDialog_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void KAssistantDialog_DragEnterEvent(KAssistantDialog* self, QDragEnterEvent* event) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog) {
        vkassistantdialog->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KAssistantDialog::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAssistantDialog_SuperDragEnterEvent(KAssistantDialog* self, QDragEnterEvent* event) {
    if (auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self)) {
        vkassistantdialog->KAssistantDialog::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method KAssistantDialog::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAssistantDialog_OnDragEnterEvent(KAssistantDialog* self, intptr_t slot) {
    if (auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self))
        vkassistantdialog->kassistantdialog_dragenterevent_callback = reinterpret_cast<VirtualKAssistantDialog::KAssistantDialog_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KAssistantDialog_DragMoveEvent(KAssistantDialog* self, QDragMoveEvent* event) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog) {
        vkassistantdialog->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KAssistantDialog::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAssistantDialog_SuperDragMoveEvent(KAssistantDialog* self, QDragMoveEvent* event) {
    if (auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self)) {
        vkassistantdialog->KAssistantDialog::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KAssistantDialog::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAssistantDialog_OnDragMoveEvent(KAssistantDialog* self, intptr_t slot) {
    if (auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self))
        vkassistantdialog->kassistantdialog_dragmoveevent_callback = reinterpret_cast<VirtualKAssistantDialog::KAssistantDialog_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KAssistantDialog_DragLeaveEvent(KAssistantDialog* self, QDragLeaveEvent* event) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog) {
        vkassistantdialog->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KAssistantDialog::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAssistantDialog_SuperDragLeaveEvent(KAssistantDialog* self, QDragLeaveEvent* event) {
    if (auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self)) {
        vkassistantdialog->KAssistantDialog::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KAssistantDialog::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAssistantDialog_OnDragLeaveEvent(KAssistantDialog* self, intptr_t slot) {
    if (auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self))
        vkassistantdialog->kassistantdialog_dragleaveevent_callback = reinterpret_cast<VirtualKAssistantDialog::KAssistantDialog_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KAssistantDialog_DropEvent(KAssistantDialog* self, QDropEvent* event) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog) {
        vkassistantdialog->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method KAssistantDialog::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAssistantDialog_SuperDropEvent(KAssistantDialog* self, QDropEvent* event) {
    if (auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self)) {
        vkassistantdialog->KAssistantDialog::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method KAssistantDialog::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAssistantDialog_OnDropEvent(KAssistantDialog* self, intptr_t slot) {
    if (auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self))
        vkassistantdialog->kassistantdialog_dropevent_callback = reinterpret_cast<VirtualKAssistantDialog::KAssistantDialog_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void KAssistantDialog_HideEvent(KAssistantDialog* self, QHideEvent* event) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog) {
        vkassistantdialog->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method KAssistantDialog::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAssistantDialog_SuperHideEvent(KAssistantDialog* self, QHideEvent* event) {
    if (auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self)) {
        vkassistantdialog->KAssistantDialog::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method KAssistantDialog::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAssistantDialog_OnHideEvent(KAssistantDialog* self, intptr_t slot) {
    if (auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self))
        vkassistantdialog->kassistantdialog_hideevent_callback = reinterpret_cast<VirtualKAssistantDialog::KAssistantDialog_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool KAssistantDialog_NativeEvent(KAssistantDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog) {
        return vkassistantdialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method KAssistantDialog::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool KAssistantDialog_SuperNativeEvent(KAssistantDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self)) {
        return vkassistantdialog->KAssistantDialog::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method KAssistantDialog::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAssistantDialog_OnNativeEvent(KAssistantDialog* self, intptr_t slot) {
    if (auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self))
        vkassistantdialog->kassistantdialog_nativeevent_callback = reinterpret_cast<VirtualKAssistantDialog::KAssistantDialog_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
void KAssistantDialog_ChangeEvent(KAssistantDialog* self, QEvent* param1) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog) {
        vkassistantdialog->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KAssistantDialog::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAssistantDialog_SuperChangeEvent(KAssistantDialog* self, QEvent* param1) {
    if (auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self)) {
        vkassistantdialog->KAssistantDialog::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KAssistantDialog::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAssistantDialog_OnChangeEvent(KAssistantDialog* self, intptr_t slot) {
    if (auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self))
        vkassistantdialog->kassistantdialog_changeevent_callback = reinterpret_cast<VirtualKAssistantDialog::KAssistantDialog_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
int KAssistantDialog_Metric(const KAssistantDialog* self, int param1) {
    auto* vkassistantdialog = const_cast<VirtualKAssistantDialog*>(dynamic_cast<const VirtualKAssistantDialog*>(self));
    if (vkassistantdialog) {
        return vkassistantdialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method KAssistantDialog::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int KAssistantDialog_SuperMetric(const KAssistantDialog* self, int param1) {
    if (auto* vkassistantdialog = const_cast<VirtualKAssistantDialog*>(dynamic_cast<const VirtualKAssistantDialog*>(self))) {
        return vkassistantdialog->KAssistantDialog::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method KAssistantDialog::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAssistantDialog_OnMetric(KAssistantDialog* self, intptr_t slot) {
    if (auto* vkassistantdialog = const_cast<VirtualKAssistantDialog*>(dynamic_cast<const VirtualKAssistantDialog*>(self)))
        vkassistantdialog->kassistantdialog_metric_callback = reinterpret_cast<VirtualKAssistantDialog::KAssistantDialog_Metric_Callback>(slot);
}

// Derived class handler implementation
void KAssistantDialog_InitPainter(const KAssistantDialog* self, QPainter* painter) {
    auto* vkassistantdialog = const_cast<VirtualKAssistantDialog*>(dynamic_cast<const VirtualKAssistantDialog*>(self));
    if (vkassistantdialog) {
        vkassistantdialog->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method KAssistantDialog::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void KAssistantDialog_SuperInitPainter(const KAssistantDialog* self, QPainter* painter) {
    if (auto* vkassistantdialog = const_cast<VirtualKAssistantDialog*>(dynamic_cast<const VirtualKAssistantDialog*>(self))) {
        vkassistantdialog->KAssistantDialog::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method KAssistantDialog::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAssistantDialog_OnInitPainter(KAssistantDialog* self, intptr_t slot) {
    if (auto* vkassistantdialog = const_cast<VirtualKAssistantDialog*>(dynamic_cast<const VirtualKAssistantDialog*>(self)))
        vkassistantdialog->kassistantdialog_initpainter_callback = reinterpret_cast<VirtualKAssistantDialog::KAssistantDialog_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* KAssistantDialog_Redirected(const KAssistantDialog* self, QPoint* offset) {
    auto* vkassistantdialog = const_cast<VirtualKAssistantDialog*>(dynamic_cast<const VirtualKAssistantDialog*>(self));
    if (vkassistantdialog) {
        return vkassistantdialog->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method KAssistantDialog::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* KAssistantDialog_SuperRedirected(const KAssistantDialog* self, QPoint* offset) {
    if (auto* vkassistantdialog = const_cast<VirtualKAssistantDialog*>(dynamic_cast<const VirtualKAssistantDialog*>(self))) {
        return vkassistantdialog->KAssistantDialog::redirected(offset);
    } else
        qFatal("Error: Protected virtual method KAssistantDialog::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAssistantDialog_OnRedirected(KAssistantDialog* self, intptr_t slot) {
    if (auto* vkassistantdialog = const_cast<VirtualKAssistantDialog*>(dynamic_cast<const VirtualKAssistantDialog*>(self)))
        vkassistantdialog->kassistantdialog_redirected_callback = reinterpret_cast<VirtualKAssistantDialog::KAssistantDialog_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* KAssistantDialog_SharedPainter(const KAssistantDialog* self) {
    auto* vkassistantdialog = const_cast<VirtualKAssistantDialog*>(dynamic_cast<const VirtualKAssistantDialog*>(self));
    if (vkassistantdialog) {
        return vkassistantdialog->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method KAssistantDialog::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* KAssistantDialog_SuperSharedPainter(const KAssistantDialog* self) {
    if (auto* vkassistantdialog = const_cast<VirtualKAssistantDialog*>(dynamic_cast<const VirtualKAssistantDialog*>(self))) {
        return vkassistantdialog->KAssistantDialog::sharedPainter();
    } else
        qFatal("Error: Protected virtual method KAssistantDialog::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAssistantDialog_OnSharedPainter(KAssistantDialog* self, intptr_t slot) {
    if (auto* vkassistantdialog = const_cast<VirtualKAssistantDialog*>(dynamic_cast<const VirtualKAssistantDialog*>(self)))
        vkassistantdialog->kassistantdialog_sharedpainter_callback = reinterpret_cast<VirtualKAssistantDialog::KAssistantDialog_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void KAssistantDialog_InputMethodEvent(KAssistantDialog* self, QInputMethodEvent* param1) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog) {
        vkassistantdialog->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KAssistantDialog::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAssistantDialog_SuperInputMethodEvent(KAssistantDialog* self, QInputMethodEvent* param1) {
    if (auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self)) {
        vkassistantdialog->KAssistantDialog::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method KAssistantDialog::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAssistantDialog_OnInputMethodEvent(KAssistantDialog* self, intptr_t slot) {
    if (auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self))
        vkassistantdialog->kassistantdialog_inputmethodevent_callback = reinterpret_cast<VirtualKAssistantDialog::KAssistantDialog_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* KAssistantDialog_InputMethodQuery(const KAssistantDialog* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* KAssistantDialog_SuperInputMethodQuery(const KAssistantDialog* self, int param1) {
    return new QVariant(self->KAssistantDialog::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void KAssistantDialog_OnInputMethodQuery(KAssistantDialog* self, intptr_t slot) {
    if (auto* vkassistantdialog = const_cast<VirtualKAssistantDialog*>(dynamic_cast<const VirtualKAssistantDialog*>(self)))
        vkassistantdialog->kassistantdialog_inputmethodquery_callback = reinterpret_cast<VirtualKAssistantDialog::KAssistantDialog_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool KAssistantDialog_FocusNextPrevChild(KAssistantDialog* self, bool next) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog) {
        return vkassistantdialog->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method KAssistantDialog::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool KAssistantDialog_SuperFocusNextPrevChild(KAssistantDialog* self, bool next) {
    if (auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self)) {
        return vkassistantdialog->KAssistantDialog::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method KAssistantDialog::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAssistantDialog_OnFocusNextPrevChild(KAssistantDialog* self, intptr_t slot) {
    if (auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self))
        vkassistantdialog->kassistantdialog_focusnextprevchild_callback = reinterpret_cast<VirtualKAssistantDialog::KAssistantDialog_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
void KAssistantDialog_TimerEvent(KAssistantDialog* self, QTimerEvent* event) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog) {
        vkassistantdialog->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KAssistantDialog::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAssistantDialog_SuperTimerEvent(KAssistantDialog* self, QTimerEvent* event) {
    if (auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self)) {
        vkassistantdialog->KAssistantDialog::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KAssistantDialog::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAssistantDialog_OnTimerEvent(KAssistantDialog* self, intptr_t slot) {
    if (auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self))
        vkassistantdialog->kassistantdialog_timerevent_callback = reinterpret_cast<VirtualKAssistantDialog::KAssistantDialog_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KAssistantDialog_ChildEvent(KAssistantDialog* self, QChildEvent* event) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog) {
        vkassistantdialog->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KAssistantDialog::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAssistantDialog_SuperChildEvent(KAssistantDialog* self, QChildEvent* event) {
    if (auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self)) {
        vkassistantdialog->KAssistantDialog::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KAssistantDialog::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAssistantDialog_OnChildEvent(KAssistantDialog* self, intptr_t slot) {
    if (auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self))
        vkassistantdialog->kassistantdialog_childevent_callback = reinterpret_cast<VirtualKAssistantDialog::KAssistantDialog_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KAssistantDialog_CustomEvent(KAssistantDialog* self, QEvent* event) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog) {
        vkassistantdialog->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KAssistantDialog::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KAssistantDialog_SuperCustomEvent(KAssistantDialog* self, QEvent* event) {
    if (auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self)) {
        vkassistantdialog->KAssistantDialog::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KAssistantDialog::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAssistantDialog_OnCustomEvent(KAssistantDialog* self, intptr_t slot) {
    if (auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self))
        vkassistantdialog->kassistantdialog_customevent_callback = reinterpret_cast<VirtualKAssistantDialog::KAssistantDialog_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KAssistantDialog_ConnectNotify(KAssistantDialog* self, const QMetaMethod* signal) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog) {
        vkassistantdialog->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KAssistantDialog::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KAssistantDialog_SuperConnectNotify(KAssistantDialog* self, const QMetaMethod* signal) {
    if (auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self)) {
        vkassistantdialog->KAssistantDialog::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KAssistantDialog::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAssistantDialog_OnConnectNotify(KAssistantDialog* self, intptr_t slot) {
    if (auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self))
        vkassistantdialog->kassistantdialog_connectnotify_callback = reinterpret_cast<VirtualKAssistantDialog::KAssistantDialog_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KAssistantDialog_DisconnectNotify(KAssistantDialog* self, const QMetaMethod* signal) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog) {
        vkassistantdialog->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KAssistantDialog::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KAssistantDialog_SuperDisconnectNotify(KAssistantDialog* self, const QMetaMethod* signal) {
    if (auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self)) {
        vkassistantdialog->KAssistantDialog::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KAssistantDialog::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KAssistantDialog_OnDisconnectNotify(KAssistantDialog* self, intptr_t slot) {
    if (auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self))
        vkassistantdialog->kassistantdialog_disconnectnotify_callback = reinterpret_cast<VirtualKAssistantDialog::KAssistantDialog_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
KPageWidget* KAssistantDialog_PageWidget(KAssistantDialog* self) {
    if (auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self)) {
        return vkassistantdialog->VirtualKAssistantDialog::pageWidget();
    } else
        qFatal("Error: Protected method KAssistantDialog::pageWidget called without a directly constructed type");
}

// Derived class protected handler implementation
void KAssistantDialog_SetPageWidget(KAssistantDialog* self, KPageWidget* widget) {
    if (auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self)) {
        vkassistantdialog->VirtualKAssistantDialog::setPageWidget(widget);
    } else
        qFatal("Error: Protected method KAssistantDialog::setPageWidget called without a directly constructed type");
}

// Derived class protected handler implementation
QDialogButtonBox* KAssistantDialog_ButtonBox(KAssistantDialog* self) {
    if (auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self)) {
        return vkassistantdialog->VirtualKAssistantDialog::buttonBox();
    } else
        qFatal("Error: Protected method KAssistantDialog::buttonBox called without a directly constructed type");
}

// Derived class protected handler implementation
void KAssistantDialog_SetButtonBox(KAssistantDialog* self, QDialogButtonBox* box) {
    if (auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self)) {
        vkassistantdialog->VirtualKAssistantDialog::setButtonBox(box);
    } else
        qFatal("Error: Protected method KAssistantDialog::setButtonBox called without a directly constructed type");
}

// Derived class protected handler implementation
void KAssistantDialog_AdjustPosition(KAssistantDialog* self, QWidget* param1) {
    if (auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self)) {
        vkassistantdialog->VirtualKAssistantDialog::adjustPosition(param1);
    } else
        qFatal("Error: Protected method KAssistantDialog::adjustPosition called without a directly constructed type");
}

// Derived class protected handler implementation
void KAssistantDialog_UpdateMicroFocus(KAssistantDialog* self) {
    if (auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self)) {
        vkassistantdialog->VirtualKAssistantDialog::updateMicroFocus();
    } else
        qFatal("Error: Protected method KAssistantDialog::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void KAssistantDialog_Create(KAssistantDialog* self) {
    if (auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self)) {
        vkassistantdialog->VirtualKAssistantDialog::create();
    } else
        qFatal("Error: Protected method KAssistantDialog::create called without a directly constructed type");
}

// Derived class protected handler implementation
void KAssistantDialog_Destroy(KAssistantDialog* self) {
    if (auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self)) {
        vkassistantdialog->VirtualKAssistantDialog::destroy();
    } else
        qFatal("Error: Protected method KAssistantDialog::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool KAssistantDialog_FocusNextChild(KAssistantDialog* self) {
    if (auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self)) {
        return vkassistantdialog->VirtualKAssistantDialog::focusNextChild();
    } else
        qFatal("Error: Protected method KAssistantDialog::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool KAssistantDialog_FocusPreviousChild(KAssistantDialog* self) {
    if (auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self)) {
        return vkassistantdialog->VirtualKAssistantDialog::focusPreviousChild();
    } else
        qFatal("Error: Protected method KAssistantDialog::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KAssistantDialog_Sender(const KAssistantDialog* self) {
    if (auto* vkassistantdialog = const_cast<VirtualKAssistantDialog*>(dynamic_cast<const VirtualKAssistantDialog*>(self))) {
        return vkassistantdialog->VirtualKAssistantDialog::sender();
    } else
        qFatal("Error: Protected method KAssistantDialog::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KAssistantDialog_SenderSignalIndex(const KAssistantDialog* self) {
    if (auto* vkassistantdialog = const_cast<VirtualKAssistantDialog*>(dynamic_cast<const VirtualKAssistantDialog*>(self))) {
        return vkassistantdialog->VirtualKAssistantDialog::senderSignalIndex();
    } else
        qFatal("Error: Protected method KAssistantDialog::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KAssistantDialog_Receivers(const KAssistantDialog* self, const char* signal) {
    if (auto* vkassistantdialog = const_cast<VirtualKAssistantDialog*>(dynamic_cast<const VirtualKAssistantDialog*>(self))) {
        return vkassistantdialog->VirtualKAssistantDialog::receivers(signal);
    } else
        qFatal("Error: Protected method KAssistantDialog::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KAssistantDialog_IsSignalConnected(const KAssistantDialog* self, const QMetaMethod* signal) {
    if (auto* vkassistantdialog = const_cast<VirtualKAssistantDialog*>(dynamic_cast<const VirtualKAssistantDialog*>(self))) {
        return vkassistantdialog->VirtualKAssistantDialog::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KAssistantDialog::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double KAssistantDialog_GetDecodedMetricF(const KAssistantDialog* self, int metricA, int metricB) {
    if (auto* vkassistantdialog = const_cast<VirtualKAssistantDialog*>(dynamic_cast<const VirtualKAssistantDialog*>(self))) {
        return vkassistantdialog->VirtualKAssistantDialog::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method KAssistantDialog::getDecodedMetricF called without a directly constructed type");
}

void KAssistantDialog_Delete(KAssistantDialog* self) {
    delete self;
}
