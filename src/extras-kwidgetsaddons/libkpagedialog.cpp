#include <KPageDialog>
#include <KPageWidget>
#include <KPageWidgetItem>
#include <QAbstractButton>
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
#include <kpagedialog.h>
#include "libkpagedialog.h"
#include "libkpagedialog.hxx"

KPageDialog* KPageDialog_new(QWidget* parent) {
    return new VirtualKPageDialog(parent);
}

KPageDialog* KPageDialog_new2() {
    return new VirtualKPageDialog();
}

KPageDialog* KPageDialog_new3(QWidget* parent, int flags) {
    return new VirtualKPageDialog(parent, static_cast<Qt::WindowFlags>(flags));
}

QMetaObject* KPageDialog_MetaObject(const KPageDialog* self) {
    return (QMetaObject*)self->metaObject();
}

void* KPageDialog_Metacast(KPageDialog* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KPageDialog_Metacall(KPageDialog* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KPageDialog_Tr(const char* s) {
    auto _ret = KPageDialog::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KPageDialog_SetFaceType(KPageDialog* self, int faceType) {
    self->setFaceType(static_cast<KPageDialog::FaceType>(faceType));
}

KPageWidgetItem* KPageDialog_AddPage(KPageDialog* self, QWidget* widget, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return self->addPage(widget, name_QString);
}

void KPageDialog_AddPage2(KPageDialog* self, KPageWidgetItem* item) {
    self->addPage(item);
}

KPageWidgetItem* KPageDialog_InsertPage(KPageDialog* self, KPageWidgetItem* before, QWidget* widget, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return self->insertPage(before, widget, name_QString);
}

void KPageDialog_InsertPage2(KPageDialog* self, KPageWidgetItem* before, KPageWidgetItem* item) {
    self->insertPage(before, item);
}

KPageWidgetItem* KPageDialog_AddSubPage(KPageDialog* self, KPageWidgetItem* parent, QWidget* widget, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return self->addSubPage(parent, widget, name_QString);
}

void KPageDialog_AddSubPage2(KPageDialog* self, KPageWidgetItem* parent, KPageWidgetItem* item) {
    self->addSubPage(parent, item);
}

void KPageDialog_RemovePage(KPageDialog* self, KPageWidgetItem* item) {
    self->removePage(item);
}

void KPageDialog_SetCurrentPage(KPageDialog* self, KPageWidgetItem* item) {
    self->setCurrentPage(item);
}

KPageWidgetItem* KPageDialog_CurrentPage(const KPageDialog* self) {
    return self->currentPage();
}

void KPageDialog_SetStandardButtons(KPageDialog* self, int buttons) {
    self->setStandardButtons(static_cast<QDialogButtonBox::StandardButtons>(buttons));
}

QPushButton* KPageDialog_Button(const KPageDialog* self, int which) {
    return self->button(static_cast<QDialogButtonBox::StandardButton>(which));
}

void KPageDialog_AddActionButton(KPageDialog* self, QAbstractButton* button) {
    self->addActionButton(button);
}

void KPageDialog_CurrentPageChanged(KPageDialog* self, KPageWidgetItem* current, KPageWidgetItem* before) {
    self->currentPageChanged(current, before);
}

void KPageDialog_Connect_CurrentPageChanged(KPageDialog* self, intptr_t slot) {
    void (*slotFunc)(KPageDialog*, KPageWidgetItem*, KPageWidgetItem*) = reinterpret_cast<void (*)(KPageDialog*, KPageWidgetItem*, KPageWidgetItem*)>(slot);
    KPageDialog::connect(self,
                         static_cast<void (KPageDialog::*)(KPageWidgetItem*, KPageWidgetItem*)>(&KPageDialog::currentPageChanged),
                         [self, slotFunc](KPageWidgetItem* current, KPageWidgetItem* before) {
                             KPageWidgetItem* sigval1 = current;
                             KPageWidgetItem* sigval2 = before;
                             slotFunc(self, sigval1, sigval2);
                         });
}

void KPageDialog_PageRemoved(KPageDialog* self, KPageWidgetItem* page) {
    self->pageRemoved(page);
}

void KPageDialog_Connect_PageRemoved(KPageDialog* self, intptr_t slot) {
    void (*slotFunc)(KPageDialog*, KPageWidgetItem*) = reinterpret_cast<void (*)(KPageDialog*, KPageWidgetItem*)>(slot);
    KPageDialog::connect(self,
                         static_cast<void (KPageDialog::*)(KPageWidgetItem*)>(&KPageDialog::pageRemoved),
                         [self, slotFunc](KPageWidgetItem* page) {
                             KPageWidgetItem* sigval1 = page;
                             slotFunc(self, sigval1);
                         });
}

libqt_string KPageDialog_Tr2(const char* s, const char* c) {
    auto _ret = KPageDialog::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KPageDialog_Tr3(const char* s, const char* c, int n) {
    auto _ret = KPageDialog::tr(s, c, static_cast<int>(n));
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
QMetaObject* KPageDialog_SuperMetaObject(const KPageDialog* self) {
    return (QMetaObject*)self->KPageDialog::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KPageDialog_OnMetaObject(KPageDialog* self, intptr_t slot) {
    if (auto* vkpagedialog = const_cast<VirtualKPageDialog*>(dynamic_cast<const VirtualKPageDialog*>(self)))
        vkpagedialog->kpagedialog_metaobject_callback = reinterpret_cast<VirtualKPageDialog::KPageDialog_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KPageDialog_SuperMetacast(KPageDialog* self, const char* param1) {
    return self->KPageDialog::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KPageDialog_OnMetacast(KPageDialog* self, intptr_t slot) {
    if (auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self))
        vkpagedialog->kpagedialog_metacast_callback = reinterpret_cast<VirtualKPageDialog::KPageDialog_Metacast_Callback>(slot);
}

// Base class handler implementation
int KPageDialog_SuperMetacall(KPageDialog* self, int param1, int param2, void** param3) {
    return self->KPageDialog::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KPageDialog_OnMetacall(KPageDialog* self, intptr_t slot) {
    if (auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self))
        vkpagedialog->kpagedialog_metacall_callback = reinterpret_cast<VirtualKPageDialog::KPageDialog_Metacall_Callback>(slot);
}

// Derived class handler implementation
void KPageDialog_SetVisible(KPageDialog* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void KPageDialog_SuperSetVisible(KPageDialog* self, bool visible) {
    self->KPageDialog::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void KPageDialog_OnSetVisible(KPageDialog* self, intptr_t slot) {
    if (auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self))
        vkpagedialog->kpagedialog_setvisible_callback = reinterpret_cast<VirtualKPageDialog::KPageDialog_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* KPageDialog_SizeHint(const KPageDialog* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* KPageDialog_SuperSizeHint(const KPageDialog* self) {
    return new QSize(self->KPageDialog::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void KPageDialog_OnSizeHint(KPageDialog* self, intptr_t slot) {
    if (auto* vkpagedialog = const_cast<VirtualKPageDialog*>(dynamic_cast<const VirtualKPageDialog*>(self)))
        vkpagedialog->kpagedialog_sizehint_callback = reinterpret_cast<VirtualKPageDialog::KPageDialog_SizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* KPageDialog_MinimumSizeHint(const KPageDialog* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* KPageDialog_SuperMinimumSizeHint(const KPageDialog* self) {
    return new QSize(self->KPageDialog::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void KPageDialog_OnMinimumSizeHint(KPageDialog* self, intptr_t slot) {
    if (auto* vkpagedialog = const_cast<VirtualKPageDialog*>(dynamic_cast<const VirtualKPageDialog*>(self)))
        vkpagedialog->kpagedialog_minimumsizehint_callback = reinterpret_cast<VirtualKPageDialog::KPageDialog_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
void KPageDialog_Open(KPageDialog* self) {
    self->open();
}

// Base class handler implementation
void KPageDialog_SuperOpen(KPageDialog* self) {
    self->KPageDialog::open();
}

// Auxiliary method to allow providing re-implementation
void KPageDialog_OnOpen(KPageDialog* self, intptr_t slot) {
    if (auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self))
        vkpagedialog->kpagedialog_open_callback = reinterpret_cast<VirtualKPageDialog::KPageDialog_Open_Callback>(slot);
}

// Derived class handler implementation
int KPageDialog_Exec(KPageDialog* self) {
    return self->exec();
}

// Base class handler implementation
int KPageDialog_SuperExec(KPageDialog* self) {
    return self->KPageDialog::exec();
}

// Auxiliary method to allow providing re-implementation
void KPageDialog_OnExec(KPageDialog* self, intptr_t slot) {
    if (auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self))
        vkpagedialog->kpagedialog_exec_callback = reinterpret_cast<VirtualKPageDialog::KPageDialog_Exec_Callback>(slot);
}

// Derived class handler implementation
void KPageDialog_Done(KPageDialog* self, int param1) {
    self->done(static_cast<int>(param1));
}

// Base class handler implementation
void KPageDialog_SuperDone(KPageDialog* self, int param1) {
    self->KPageDialog::done(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void KPageDialog_OnDone(KPageDialog* self, intptr_t slot) {
    if (auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self))
        vkpagedialog->kpagedialog_done_callback = reinterpret_cast<VirtualKPageDialog::KPageDialog_Done_Callback>(slot);
}

// Derived class handler implementation
void KPageDialog_Accept(KPageDialog* self) {
    self->accept();
}

// Base class handler implementation
void KPageDialog_SuperAccept(KPageDialog* self) {
    self->KPageDialog::accept();
}

// Auxiliary method to allow providing re-implementation
void KPageDialog_OnAccept(KPageDialog* self, intptr_t slot) {
    if (auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self))
        vkpagedialog->kpagedialog_accept_callback = reinterpret_cast<VirtualKPageDialog::KPageDialog_Accept_Callback>(slot);
}

// Derived class handler implementation
void KPageDialog_Reject(KPageDialog* self) {
    self->reject();
}

// Base class handler implementation
void KPageDialog_SuperReject(KPageDialog* self) {
    self->KPageDialog::reject();
}

// Auxiliary method to allow providing re-implementation
void KPageDialog_OnReject(KPageDialog* self, intptr_t slot) {
    if (auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self))
        vkpagedialog->kpagedialog_reject_callback = reinterpret_cast<VirtualKPageDialog::KPageDialog_Reject_Callback>(slot);
}

// Derived class handler implementation
void KPageDialog_KeyPressEvent(KPageDialog* self, QKeyEvent* param1) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog) {
        vkpagedialog->keyPressEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KPageDialog::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPageDialog_SuperKeyPressEvent(KPageDialog* self, QKeyEvent* param1) {
    if (auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self)) {
        vkpagedialog->KPageDialog::keyPressEvent(param1);
    } else
        qFatal("Error: Protected virtual method KPageDialog::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPageDialog_OnKeyPressEvent(KPageDialog* self, intptr_t slot) {
    if (auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self))
        vkpagedialog->kpagedialog_keypressevent_callback = reinterpret_cast<VirtualKPageDialog::KPageDialog_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void KPageDialog_CloseEvent(KPageDialog* self, QCloseEvent* param1) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog) {
        vkpagedialog->closeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KPageDialog::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPageDialog_SuperCloseEvent(KPageDialog* self, QCloseEvent* param1) {
    if (auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self)) {
        vkpagedialog->KPageDialog::closeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KPageDialog::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPageDialog_OnCloseEvent(KPageDialog* self, intptr_t slot) {
    if (auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self))
        vkpagedialog->kpagedialog_closeevent_callback = reinterpret_cast<VirtualKPageDialog::KPageDialog_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void KPageDialog_ShowEvent(KPageDialog* self, QShowEvent* param1) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog) {
        vkpagedialog->showEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KPageDialog::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPageDialog_SuperShowEvent(KPageDialog* self, QShowEvent* param1) {
    if (auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self)) {
        vkpagedialog->KPageDialog::showEvent(param1);
    } else
        qFatal("Error: Protected virtual method KPageDialog::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPageDialog_OnShowEvent(KPageDialog* self, intptr_t slot) {
    if (auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self))
        vkpagedialog->kpagedialog_showevent_callback = reinterpret_cast<VirtualKPageDialog::KPageDialog_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void KPageDialog_ResizeEvent(KPageDialog* self, QResizeEvent* param1) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog) {
        vkpagedialog->resizeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KPageDialog::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPageDialog_SuperResizeEvent(KPageDialog* self, QResizeEvent* param1) {
    if (auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self)) {
        vkpagedialog->KPageDialog::resizeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KPageDialog::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPageDialog_OnResizeEvent(KPageDialog* self, intptr_t slot) {
    if (auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self))
        vkpagedialog->kpagedialog_resizeevent_callback = reinterpret_cast<VirtualKPageDialog::KPageDialog_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void KPageDialog_ContextMenuEvent(KPageDialog* self, QContextMenuEvent* param1) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog) {
        vkpagedialog->contextMenuEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KPageDialog::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPageDialog_SuperContextMenuEvent(KPageDialog* self, QContextMenuEvent* param1) {
    if (auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self)) {
        vkpagedialog->KPageDialog::contextMenuEvent(param1);
    } else
        qFatal("Error: Protected virtual method KPageDialog::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPageDialog_OnContextMenuEvent(KPageDialog* self, intptr_t slot) {
    if (auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self))
        vkpagedialog->kpagedialog_contextmenuevent_callback = reinterpret_cast<VirtualKPageDialog::KPageDialog_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
bool KPageDialog_EventFilter(KPageDialog* self, QObject* param1, QEvent* param2) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog) {
        return vkpagedialog->eventFilter(param1, param2);
    } else {
        qFatal("Error: Protected virtual method KPageDialog::eventFilter called without a directly constructed type");
    }
}

// Base class handler implementation
bool KPageDialog_SuperEventFilter(KPageDialog* self, QObject* param1, QEvent* param2) {
    if (auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self)) {
        return vkpagedialog->KPageDialog::eventFilter(param1, param2);
    } else
        qFatal("Error: Protected virtual method KPageDialog::eventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPageDialog_OnEventFilter(KPageDialog* self, intptr_t slot) {
    if (auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self))
        vkpagedialog->kpagedialog_eventfilter_callback = reinterpret_cast<VirtualKPageDialog::KPageDialog_EventFilter_Callback>(slot);
}

// Derived class handler implementation
int KPageDialog_DevType(const KPageDialog* self) {
    return self->devType();
}

// Base class handler implementation
int KPageDialog_SuperDevType(const KPageDialog* self) {
    return self->KPageDialog::devType();
}

// Auxiliary method to allow providing re-implementation
void KPageDialog_OnDevType(KPageDialog* self, intptr_t slot) {
    if (auto* vkpagedialog = const_cast<VirtualKPageDialog*>(dynamic_cast<const VirtualKPageDialog*>(self)))
        vkpagedialog->kpagedialog_devtype_callback = reinterpret_cast<VirtualKPageDialog::KPageDialog_DevType_Callback>(slot);
}

// Derived class handler implementation
int KPageDialog_HeightForWidth(const KPageDialog* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int KPageDialog_SuperHeightForWidth(const KPageDialog* self, int param1) {
    return self->KPageDialog::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void KPageDialog_OnHeightForWidth(KPageDialog* self, intptr_t slot) {
    if (auto* vkpagedialog = const_cast<VirtualKPageDialog*>(dynamic_cast<const VirtualKPageDialog*>(self)))
        vkpagedialog->kpagedialog_heightforwidth_callback = reinterpret_cast<VirtualKPageDialog::KPageDialog_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool KPageDialog_HasHeightForWidth(const KPageDialog* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool KPageDialog_SuperHasHeightForWidth(const KPageDialog* self) {
    return self->KPageDialog::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void KPageDialog_OnHasHeightForWidth(KPageDialog* self, intptr_t slot) {
    if (auto* vkpagedialog = const_cast<VirtualKPageDialog*>(dynamic_cast<const VirtualKPageDialog*>(self)))
        vkpagedialog->kpagedialog_hasheightforwidth_callback = reinterpret_cast<VirtualKPageDialog::KPageDialog_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* KPageDialog_PaintEngine(const KPageDialog* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* KPageDialog_SuperPaintEngine(const KPageDialog* self) {
    return self->KPageDialog::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void KPageDialog_OnPaintEngine(KPageDialog* self, intptr_t slot) {
    if (auto* vkpagedialog = const_cast<VirtualKPageDialog*>(dynamic_cast<const VirtualKPageDialog*>(self)))
        vkpagedialog->kpagedialog_paintengine_callback = reinterpret_cast<VirtualKPageDialog::KPageDialog_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
bool KPageDialog_Event(KPageDialog* self, QEvent* event) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog) {
        return vkpagedialog->event(event);
    } else {
        qFatal("Error: Protected virtual method KPageDialog::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool KPageDialog_SuperEvent(KPageDialog* self, QEvent* event) {
    if (auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self)) {
        return vkpagedialog->KPageDialog::event(event);
    } else
        qFatal("Error: Protected virtual method KPageDialog::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPageDialog_OnEvent(KPageDialog* self, intptr_t slot) {
    if (auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self))
        vkpagedialog->kpagedialog_event_callback = reinterpret_cast<VirtualKPageDialog::KPageDialog_Event_Callback>(slot);
}

// Derived class handler implementation
void KPageDialog_MousePressEvent(KPageDialog* self, QMouseEvent* event) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog) {
        vkpagedialog->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPageDialog::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPageDialog_SuperMousePressEvent(KPageDialog* self, QMouseEvent* event) {
    if (auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self)) {
        vkpagedialog->KPageDialog::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method KPageDialog::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPageDialog_OnMousePressEvent(KPageDialog* self, intptr_t slot) {
    if (auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self))
        vkpagedialog->kpagedialog_mousepressevent_callback = reinterpret_cast<VirtualKPageDialog::KPageDialog_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void KPageDialog_MouseReleaseEvent(KPageDialog* self, QMouseEvent* event) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog) {
        vkpagedialog->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPageDialog::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPageDialog_SuperMouseReleaseEvent(KPageDialog* self, QMouseEvent* event) {
    if (auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self)) {
        vkpagedialog->KPageDialog::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KPageDialog::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPageDialog_OnMouseReleaseEvent(KPageDialog* self, intptr_t slot) {
    if (auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self))
        vkpagedialog->kpagedialog_mousereleaseevent_callback = reinterpret_cast<VirtualKPageDialog::KPageDialog_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KPageDialog_MouseDoubleClickEvent(KPageDialog* self, QMouseEvent* event) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog) {
        vkpagedialog->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPageDialog::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPageDialog_SuperMouseDoubleClickEvent(KPageDialog* self, QMouseEvent* event) {
    if (auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self)) {
        vkpagedialog->KPageDialog::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method KPageDialog::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPageDialog_OnMouseDoubleClickEvent(KPageDialog* self, intptr_t slot) {
    if (auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self))
        vkpagedialog->kpagedialog_mousedoubleclickevent_callback = reinterpret_cast<VirtualKPageDialog::KPageDialog_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void KPageDialog_MouseMoveEvent(KPageDialog* self, QMouseEvent* event) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog) {
        vkpagedialog->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPageDialog::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPageDialog_SuperMouseMoveEvent(KPageDialog* self, QMouseEvent* event) {
    if (auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self)) {
        vkpagedialog->KPageDialog::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KPageDialog::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPageDialog_OnMouseMoveEvent(KPageDialog* self, intptr_t slot) {
    if (auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self))
        vkpagedialog->kpagedialog_mousemoveevent_callback = reinterpret_cast<VirtualKPageDialog::KPageDialog_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KPageDialog_WheelEvent(KPageDialog* self, QWheelEvent* event) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog) {
        vkpagedialog->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPageDialog::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPageDialog_SuperWheelEvent(KPageDialog* self, QWheelEvent* event) {
    if (auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self)) {
        vkpagedialog->KPageDialog::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method KPageDialog::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPageDialog_OnWheelEvent(KPageDialog* self, intptr_t slot) {
    if (auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self))
        vkpagedialog->kpagedialog_wheelevent_callback = reinterpret_cast<VirtualKPageDialog::KPageDialog_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void KPageDialog_KeyReleaseEvent(KPageDialog* self, QKeyEvent* event) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog) {
        vkpagedialog->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPageDialog::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPageDialog_SuperKeyReleaseEvent(KPageDialog* self, QKeyEvent* event) {
    if (auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self)) {
        vkpagedialog->KPageDialog::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KPageDialog::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPageDialog_OnKeyReleaseEvent(KPageDialog* self, intptr_t slot) {
    if (auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self))
        vkpagedialog->kpagedialog_keyreleaseevent_callback = reinterpret_cast<VirtualKPageDialog::KPageDialog_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KPageDialog_FocusInEvent(KPageDialog* self, QFocusEvent* event) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog) {
        vkpagedialog->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPageDialog::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPageDialog_SuperFocusInEvent(KPageDialog* self, QFocusEvent* event) {
    if (auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self)) {
        vkpagedialog->KPageDialog::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method KPageDialog::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPageDialog_OnFocusInEvent(KPageDialog* self, intptr_t slot) {
    if (auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self))
        vkpagedialog->kpagedialog_focusinevent_callback = reinterpret_cast<VirtualKPageDialog::KPageDialog_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void KPageDialog_FocusOutEvent(KPageDialog* self, QFocusEvent* event) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog) {
        vkpagedialog->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPageDialog::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPageDialog_SuperFocusOutEvent(KPageDialog* self, QFocusEvent* event) {
    if (auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self)) {
        vkpagedialog->KPageDialog::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method KPageDialog::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPageDialog_OnFocusOutEvent(KPageDialog* self, intptr_t slot) {
    if (auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self))
        vkpagedialog->kpagedialog_focusoutevent_callback = reinterpret_cast<VirtualKPageDialog::KPageDialog_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void KPageDialog_EnterEvent(KPageDialog* self, QEnterEvent* event) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog) {
        vkpagedialog->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPageDialog::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPageDialog_SuperEnterEvent(KPageDialog* self, QEnterEvent* event) {
    if (auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self)) {
        vkpagedialog->KPageDialog::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method KPageDialog::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPageDialog_OnEnterEvent(KPageDialog* self, intptr_t slot) {
    if (auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self))
        vkpagedialog->kpagedialog_enterevent_callback = reinterpret_cast<VirtualKPageDialog::KPageDialog_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KPageDialog_LeaveEvent(KPageDialog* self, QEvent* event) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog) {
        vkpagedialog->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPageDialog::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPageDialog_SuperLeaveEvent(KPageDialog* self, QEvent* event) {
    if (auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self)) {
        vkpagedialog->KPageDialog::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KPageDialog::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPageDialog_OnLeaveEvent(KPageDialog* self, intptr_t slot) {
    if (auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self))
        vkpagedialog->kpagedialog_leaveevent_callback = reinterpret_cast<VirtualKPageDialog::KPageDialog_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KPageDialog_PaintEvent(KPageDialog* self, QPaintEvent* event) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog) {
        vkpagedialog->paintEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPageDialog::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPageDialog_SuperPaintEvent(KPageDialog* self, QPaintEvent* event) {
    if (auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self)) {
        vkpagedialog->KPageDialog::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method KPageDialog::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPageDialog_OnPaintEvent(KPageDialog* self, intptr_t slot) {
    if (auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self))
        vkpagedialog->kpagedialog_paintevent_callback = reinterpret_cast<VirtualKPageDialog::KPageDialog_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void KPageDialog_MoveEvent(KPageDialog* self, QMoveEvent* event) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog) {
        vkpagedialog->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPageDialog::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPageDialog_SuperMoveEvent(KPageDialog* self, QMoveEvent* event) {
    if (auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self)) {
        vkpagedialog->KPageDialog::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method KPageDialog::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPageDialog_OnMoveEvent(KPageDialog* self, intptr_t slot) {
    if (auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self))
        vkpagedialog->kpagedialog_moveevent_callback = reinterpret_cast<VirtualKPageDialog::KPageDialog_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KPageDialog_TabletEvent(KPageDialog* self, QTabletEvent* event) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog) {
        vkpagedialog->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPageDialog::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPageDialog_SuperTabletEvent(KPageDialog* self, QTabletEvent* event) {
    if (auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self)) {
        vkpagedialog->KPageDialog::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method KPageDialog::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPageDialog_OnTabletEvent(KPageDialog* self, intptr_t slot) {
    if (auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self))
        vkpagedialog->kpagedialog_tabletevent_callback = reinterpret_cast<VirtualKPageDialog::KPageDialog_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void KPageDialog_ActionEvent(KPageDialog* self, QActionEvent* event) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog) {
        vkpagedialog->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPageDialog::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPageDialog_SuperActionEvent(KPageDialog* self, QActionEvent* event) {
    if (auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self)) {
        vkpagedialog->KPageDialog::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method KPageDialog::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPageDialog_OnActionEvent(KPageDialog* self, intptr_t slot) {
    if (auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self))
        vkpagedialog->kpagedialog_actionevent_callback = reinterpret_cast<VirtualKPageDialog::KPageDialog_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void KPageDialog_DragEnterEvent(KPageDialog* self, QDragEnterEvent* event) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog) {
        vkpagedialog->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPageDialog::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPageDialog_SuperDragEnterEvent(KPageDialog* self, QDragEnterEvent* event) {
    if (auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self)) {
        vkpagedialog->KPageDialog::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method KPageDialog::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPageDialog_OnDragEnterEvent(KPageDialog* self, intptr_t slot) {
    if (auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self))
        vkpagedialog->kpagedialog_dragenterevent_callback = reinterpret_cast<VirtualKPageDialog::KPageDialog_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KPageDialog_DragMoveEvent(KPageDialog* self, QDragMoveEvent* event) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog) {
        vkpagedialog->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPageDialog::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPageDialog_SuperDragMoveEvent(KPageDialog* self, QDragMoveEvent* event) {
    if (auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self)) {
        vkpagedialog->KPageDialog::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KPageDialog::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPageDialog_OnDragMoveEvent(KPageDialog* self, intptr_t slot) {
    if (auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self))
        vkpagedialog->kpagedialog_dragmoveevent_callback = reinterpret_cast<VirtualKPageDialog::KPageDialog_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KPageDialog_DragLeaveEvent(KPageDialog* self, QDragLeaveEvent* event) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog) {
        vkpagedialog->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPageDialog::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPageDialog_SuperDragLeaveEvent(KPageDialog* self, QDragLeaveEvent* event) {
    if (auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self)) {
        vkpagedialog->KPageDialog::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KPageDialog::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPageDialog_OnDragLeaveEvent(KPageDialog* self, intptr_t slot) {
    if (auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self))
        vkpagedialog->kpagedialog_dragleaveevent_callback = reinterpret_cast<VirtualKPageDialog::KPageDialog_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KPageDialog_DropEvent(KPageDialog* self, QDropEvent* event) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog) {
        vkpagedialog->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPageDialog::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPageDialog_SuperDropEvent(KPageDialog* self, QDropEvent* event) {
    if (auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self)) {
        vkpagedialog->KPageDialog::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method KPageDialog::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPageDialog_OnDropEvent(KPageDialog* self, intptr_t slot) {
    if (auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self))
        vkpagedialog->kpagedialog_dropevent_callback = reinterpret_cast<VirtualKPageDialog::KPageDialog_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void KPageDialog_HideEvent(KPageDialog* self, QHideEvent* event) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog) {
        vkpagedialog->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPageDialog::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPageDialog_SuperHideEvent(KPageDialog* self, QHideEvent* event) {
    if (auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self)) {
        vkpagedialog->KPageDialog::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method KPageDialog::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPageDialog_OnHideEvent(KPageDialog* self, intptr_t slot) {
    if (auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self))
        vkpagedialog->kpagedialog_hideevent_callback = reinterpret_cast<VirtualKPageDialog::KPageDialog_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool KPageDialog_NativeEvent(KPageDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog) {
        return vkpagedialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method KPageDialog::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool KPageDialog_SuperNativeEvent(KPageDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self)) {
        return vkpagedialog->KPageDialog::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method KPageDialog::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPageDialog_OnNativeEvent(KPageDialog* self, intptr_t slot) {
    if (auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self))
        vkpagedialog->kpagedialog_nativeevent_callback = reinterpret_cast<VirtualKPageDialog::KPageDialog_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
void KPageDialog_ChangeEvent(KPageDialog* self, QEvent* param1) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog) {
        vkpagedialog->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KPageDialog::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPageDialog_SuperChangeEvent(KPageDialog* self, QEvent* param1) {
    if (auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self)) {
        vkpagedialog->KPageDialog::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KPageDialog::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPageDialog_OnChangeEvent(KPageDialog* self, intptr_t slot) {
    if (auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self))
        vkpagedialog->kpagedialog_changeevent_callback = reinterpret_cast<VirtualKPageDialog::KPageDialog_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
int KPageDialog_Metric(const KPageDialog* self, int param1) {
    auto* vkpagedialog = const_cast<VirtualKPageDialog*>(dynamic_cast<const VirtualKPageDialog*>(self));
    if (vkpagedialog) {
        return vkpagedialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method KPageDialog::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int KPageDialog_SuperMetric(const KPageDialog* self, int param1) {
    if (auto* vkpagedialog = const_cast<VirtualKPageDialog*>(dynamic_cast<const VirtualKPageDialog*>(self))) {
        return vkpagedialog->KPageDialog::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method KPageDialog::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPageDialog_OnMetric(KPageDialog* self, intptr_t slot) {
    if (auto* vkpagedialog = const_cast<VirtualKPageDialog*>(dynamic_cast<const VirtualKPageDialog*>(self)))
        vkpagedialog->kpagedialog_metric_callback = reinterpret_cast<VirtualKPageDialog::KPageDialog_Metric_Callback>(slot);
}

// Derived class handler implementation
void KPageDialog_InitPainter(const KPageDialog* self, QPainter* painter) {
    auto* vkpagedialog = const_cast<VirtualKPageDialog*>(dynamic_cast<const VirtualKPageDialog*>(self));
    if (vkpagedialog) {
        vkpagedialog->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method KPageDialog::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void KPageDialog_SuperInitPainter(const KPageDialog* self, QPainter* painter) {
    if (auto* vkpagedialog = const_cast<VirtualKPageDialog*>(dynamic_cast<const VirtualKPageDialog*>(self))) {
        vkpagedialog->KPageDialog::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method KPageDialog::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPageDialog_OnInitPainter(KPageDialog* self, intptr_t slot) {
    if (auto* vkpagedialog = const_cast<VirtualKPageDialog*>(dynamic_cast<const VirtualKPageDialog*>(self)))
        vkpagedialog->kpagedialog_initpainter_callback = reinterpret_cast<VirtualKPageDialog::KPageDialog_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* KPageDialog_Redirected(const KPageDialog* self, QPoint* offset) {
    auto* vkpagedialog = const_cast<VirtualKPageDialog*>(dynamic_cast<const VirtualKPageDialog*>(self));
    if (vkpagedialog) {
        return vkpagedialog->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method KPageDialog::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* KPageDialog_SuperRedirected(const KPageDialog* self, QPoint* offset) {
    if (auto* vkpagedialog = const_cast<VirtualKPageDialog*>(dynamic_cast<const VirtualKPageDialog*>(self))) {
        return vkpagedialog->KPageDialog::redirected(offset);
    } else
        qFatal("Error: Protected virtual method KPageDialog::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPageDialog_OnRedirected(KPageDialog* self, intptr_t slot) {
    if (auto* vkpagedialog = const_cast<VirtualKPageDialog*>(dynamic_cast<const VirtualKPageDialog*>(self)))
        vkpagedialog->kpagedialog_redirected_callback = reinterpret_cast<VirtualKPageDialog::KPageDialog_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* KPageDialog_SharedPainter(const KPageDialog* self) {
    auto* vkpagedialog = const_cast<VirtualKPageDialog*>(dynamic_cast<const VirtualKPageDialog*>(self));
    if (vkpagedialog) {
        return vkpagedialog->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method KPageDialog::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* KPageDialog_SuperSharedPainter(const KPageDialog* self) {
    if (auto* vkpagedialog = const_cast<VirtualKPageDialog*>(dynamic_cast<const VirtualKPageDialog*>(self))) {
        return vkpagedialog->KPageDialog::sharedPainter();
    } else
        qFatal("Error: Protected virtual method KPageDialog::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPageDialog_OnSharedPainter(KPageDialog* self, intptr_t slot) {
    if (auto* vkpagedialog = const_cast<VirtualKPageDialog*>(dynamic_cast<const VirtualKPageDialog*>(self)))
        vkpagedialog->kpagedialog_sharedpainter_callback = reinterpret_cast<VirtualKPageDialog::KPageDialog_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void KPageDialog_InputMethodEvent(KPageDialog* self, QInputMethodEvent* param1) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog) {
        vkpagedialog->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KPageDialog::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPageDialog_SuperInputMethodEvent(KPageDialog* self, QInputMethodEvent* param1) {
    if (auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self)) {
        vkpagedialog->KPageDialog::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method KPageDialog::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPageDialog_OnInputMethodEvent(KPageDialog* self, intptr_t slot) {
    if (auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self))
        vkpagedialog->kpagedialog_inputmethodevent_callback = reinterpret_cast<VirtualKPageDialog::KPageDialog_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* KPageDialog_InputMethodQuery(const KPageDialog* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* KPageDialog_SuperInputMethodQuery(const KPageDialog* self, int param1) {
    return new QVariant(self->KPageDialog::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void KPageDialog_OnInputMethodQuery(KPageDialog* self, intptr_t slot) {
    if (auto* vkpagedialog = const_cast<VirtualKPageDialog*>(dynamic_cast<const VirtualKPageDialog*>(self)))
        vkpagedialog->kpagedialog_inputmethodquery_callback = reinterpret_cast<VirtualKPageDialog::KPageDialog_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool KPageDialog_FocusNextPrevChild(KPageDialog* self, bool next) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog) {
        return vkpagedialog->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method KPageDialog::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool KPageDialog_SuperFocusNextPrevChild(KPageDialog* self, bool next) {
    if (auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self)) {
        return vkpagedialog->KPageDialog::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method KPageDialog::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPageDialog_OnFocusNextPrevChild(KPageDialog* self, intptr_t slot) {
    if (auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self))
        vkpagedialog->kpagedialog_focusnextprevchild_callback = reinterpret_cast<VirtualKPageDialog::KPageDialog_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
void KPageDialog_TimerEvent(KPageDialog* self, QTimerEvent* event) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog) {
        vkpagedialog->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPageDialog::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPageDialog_SuperTimerEvent(KPageDialog* self, QTimerEvent* event) {
    if (auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self)) {
        vkpagedialog->KPageDialog::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KPageDialog::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPageDialog_OnTimerEvent(KPageDialog* self, intptr_t slot) {
    if (auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self))
        vkpagedialog->kpagedialog_timerevent_callback = reinterpret_cast<VirtualKPageDialog::KPageDialog_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KPageDialog_ChildEvent(KPageDialog* self, QChildEvent* event) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog) {
        vkpagedialog->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPageDialog::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPageDialog_SuperChildEvent(KPageDialog* self, QChildEvent* event) {
    if (auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self)) {
        vkpagedialog->KPageDialog::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KPageDialog::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPageDialog_OnChildEvent(KPageDialog* self, intptr_t slot) {
    if (auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self))
        vkpagedialog->kpagedialog_childevent_callback = reinterpret_cast<VirtualKPageDialog::KPageDialog_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KPageDialog_CustomEvent(KPageDialog* self, QEvent* event) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog) {
        vkpagedialog->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPageDialog::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPageDialog_SuperCustomEvent(KPageDialog* self, QEvent* event) {
    if (auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self)) {
        vkpagedialog->KPageDialog::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KPageDialog::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPageDialog_OnCustomEvent(KPageDialog* self, intptr_t slot) {
    if (auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self))
        vkpagedialog->kpagedialog_customevent_callback = reinterpret_cast<VirtualKPageDialog::KPageDialog_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KPageDialog_ConnectNotify(KPageDialog* self, const QMetaMethod* signal) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog) {
        vkpagedialog->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KPageDialog::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KPageDialog_SuperConnectNotify(KPageDialog* self, const QMetaMethod* signal) {
    if (auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self)) {
        vkpagedialog->KPageDialog::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KPageDialog::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPageDialog_OnConnectNotify(KPageDialog* self, intptr_t slot) {
    if (auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self))
        vkpagedialog->kpagedialog_connectnotify_callback = reinterpret_cast<VirtualKPageDialog::KPageDialog_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KPageDialog_DisconnectNotify(KPageDialog* self, const QMetaMethod* signal) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog) {
        vkpagedialog->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KPageDialog::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KPageDialog_SuperDisconnectNotify(KPageDialog* self, const QMetaMethod* signal) {
    if (auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self)) {
        vkpagedialog->KPageDialog::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KPageDialog::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPageDialog_OnDisconnectNotify(KPageDialog* self, intptr_t slot) {
    if (auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self))
        vkpagedialog->kpagedialog_disconnectnotify_callback = reinterpret_cast<VirtualKPageDialog::KPageDialog_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
KPageWidget* KPageDialog_PageWidget(KPageDialog* self) {
    if (auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self)) {
        return vkpagedialog->VirtualKPageDialog::pageWidget();
    } else
        qFatal("Error: Protected method KPageDialog::pageWidget called without a directly constructed type");
}

// Derived class protected handler implementation
KPageWidget* KPageDialog_PageWidget2(const KPageDialog* self) {
    if (auto* vkpagedialog = const_cast<VirtualKPageDialog*>(dynamic_cast<const VirtualKPageDialog*>(self))) {
        return (KPageWidget*)vkpagedialog->VirtualKPageDialog::pageWidget();
    } else
        qFatal("Error: Protected method KPageDialog::pageWidget2 called without a directly constructed type");
}

// Derived class protected handler implementation
void KPageDialog_SetPageWidget(KPageDialog* self, KPageWidget* widget) {
    if (auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self)) {
        vkpagedialog->VirtualKPageDialog::setPageWidget(widget);
    } else
        qFatal("Error: Protected method KPageDialog::setPageWidget called without a directly constructed type");
}

// Derived class protected handler implementation
QDialogButtonBox* KPageDialog_ButtonBox(KPageDialog* self) {
    if (auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self)) {
        return vkpagedialog->VirtualKPageDialog::buttonBox();
    } else
        qFatal("Error: Protected method KPageDialog::buttonBox called without a directly constructed type");
}

// Derived class protected handler implementation
QDialogButtonBox* KPageDialog_ButtonBox2(const KPageDialog* self) {
    if (auto* vkpagedialog = const_cast<VirtualKPageDialog*>(dynamic_cast<const VirtualKPageDialog*>(self))) {
        return (QDialogButtonBox*)vkpagedialog->VirtualKPageDialog::buttonBox();
    } else
        qFatal("Error: Protected method KPageDialog::buttonBox2 called without a directly constructed type");
}

// Derived class protected handler implementation
void KPageDialog_SetButtonBox(KPageDialog* self, QDialogButtonBox* box) {
    if (auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self)) {
        vkpagedialog->VirtualKPageDialog::setButtonBox(box);
    } else
        qFatal("Error: Protected method KPageDialog::setButtonBox called without a directly constructed type");
}

// Derived class protected handler implementation
void KPageDialog_AdjustPosition(KPageDialog* self, QWidget* param1) {
    if (auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self)) {
        vkpagedialog->VirtualKPageDialog::adjustPosition(param1);
    } else
        qFatal("Error: Protected method KPageDialog::adjustPosition called without a directly constructed type");
}

// Derived class protected handler implementation
void KPageDialog_UpdateMicroFocus(KPageDialog* self) {
    if (auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self)) {
        vkpagedialog->VirtualKPageDialog::updateMicroFocus();
    } else
        qFatal("Error: Protected method KPageDialog::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void KPageDialog_Create(KPageDialog* self) {
    if (auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self)) {
        vkpagedialog->VirtualKPageDialog::create();
    } else
        qFatal("Error: Protected method KPageDialog::create called without a directly constructed type");
}

// Derived class protected handler implementation
void KPageDialog_Destroy(KPageDialog* self) {
    if (auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self)) {
        vkpagedialog->VirtualKPageDialog::destroy();
    } else
        qFatal("Error: Protected method KPageDialog::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool KPageDialog_FocusNextChild(KPageDialog* self) {
    if (auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self)) {
        return vkpagedialog->VirtualKPageDialog::focusNextChild();
    } else
        qFatal("Error: Protected method KPageDialog::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool KPageDialog_FocusPreviousChild(KPageDialog* self) {
    if (auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self)) {
        return vkpagedialog->VirtualKPageDialog::focusPreviousChild();
    } else
        qFatal("Error: Protected method KPageDialog::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KPageDialog_Sender(const KPageDialog* self) {
    if (auto* vkpagedialog = const_cast<VirtualKPageDialog*>(dynamic_cast<const VirtualKPageDialog*>(self))) {
        return vkpagedialog->VirtualKPageDialog::sender();
    } else
        qFatal("Error: Protected method KPageDialog::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KPageDialog_SenderSignalIndex(const KPageDialog* self) {
    if (auto* vkpagedialog = const_cast<VirtualKPageDialog*>(dynamic_cast<const VirtualKPageDialog*>(self))) {
        return vkpagedialog->VirtualKPageDialog::senderSignalIndex();
    } else
        qFatal("Error: Protected method KPageDialog::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KPageDialog_Receivers(const KPageDialog* self, const char* signal) {
    if (auto* vkpagedialog = const_cast<VirtualKPageDialog*>(dynamic_cast<const VirtualKPageDialog*>(self))) {
        return vkpagedialog->VirtualKPageDialog::receivers(signal);
    } else
        qFatal("Error: Protected method KPageDialog::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KPageDialog_IsSignalConnected(const KPageDialog* self, const QMetaMethod* signal) {
    if (auto* vkpagedialog = const_cast<VirtualKPageDialog*>(dynamic_cast<const VirtualKPageDialog*>(self))) {
        return vkpagedialog->VirtualKPageDialog::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KPageDialog::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double KPageDialog_GetDecodedMetricF(const KPageDialog* self, int metricA, int metricB) {
    if (auto* vkpagedialog = const_cast<VirtualKPageDialog*>(dynamic_cast<const VirtualKPageDialog*>(self))) {
        return vkpagedialog->VirtualKPageDialog::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method KPageDialog::getDecodedMetricF called without a directly constructed type");
}

void KPageDialog_Delete(KPageDialog* self) {
    delete self;
}
