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
#include <QByteArray>
#include <cstring>
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
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKPageDialog*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KPageDialog_Tr(const char* s) {
    QString _ret = KPageDialog::tr(s);
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
    KPageDialog::connect(self, &KPageDialog::currentPageChanged, [self, slotFunc](KPageWidgetItem* current, KPageWidgetItem* before) {
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
    KPageDialog::connect(self, &KPageDialog::pageRemoved, [self, slotFunc](KPageWidgetItem* page) {
        KPageWidgetItem* sigval1 = page;
        slotFunc(self, sigval1);
    });
}

libqt_string KPageDialog_Tr2(const char* s, const char* c) {
    QString _ret = KPageDialog::tr(s, c);
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
    QString _ret = KPageDialog::tr(s, c, static_cast<int>(n));
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
int KPageDialog_QBaseMetacall(KPageDialog* self, int param1, int param2, void** param3) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setKPageDialog_Metacall_IsBase(true);
        return vkpagedialog->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KPageDialog::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageDialog_OnMetacall(KPageDialog* self, intptr_t slot) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setKPageDialog_Metacall_Callback(reinterpret_cast<VirtualKPageDialog::KPageDialog_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageDialog_SetVisible(KPageDialog* self, bool visible) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setVisible(visible);
    } else {
        self->KPageDialog::setVisible(visible);
    }
}

// Base class handler implementation
void KPageDialog_QBaseSetVisible(KPageDialog* self, bool visible) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setKPageDialog_SetVisible_IsBase(true);
        vkpagedialog->setVisible(visible);
    } else {
        self->KPageDialog::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageDialog_OnSetVisible(KPageDialog* self, intptr_t slot) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setKPageDialog_SetVisible_Callback(reinterpret_cast<VirtualKPageDialog::KPageDialog_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KPageDialog_SizeHint(const KPageDialog* self) {
    auto* vkpagedialog = const_cast<VirtualKPageDialog*>(dynamic_cast<const VirtualKPageDialog*>(self));
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        return new QSize(vkpagedialog->sizeHint());
    } else {
        return new QSize(((VirtualKPageDialog*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* KPageDialog_QBaseSizeHint(const KPageDialog* self) {
    auto* vkpagedialog = const_cast<VirtualKPageDialog*>(dynamic_cast<const VirtualKPageDialog*>(self));
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setKPageDialog_SizeHint_IsBase(true);
        return new QSize(vkpagedialog->sizeHint());
    } else {
        return new QSize(((VirtualKPageDialog*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KPageDialog_OnSizeHint(const KPageDialog* self, intptr_t slot) {
    auto* vkpagedialog = const_cast<VirtualKPageDialog*>(dynamic_cast<const VirtualKPageDialog*>(self));
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setKPageDialog_SizeHint_Callback(reinterpret_cast<VirtualKPageDialog::KPageDialog_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KPageDialog_MinimumSizeHint(const KPageDialog* self) {
    auto* vkpagedialog = const_cast<VirtualKPageDialog*>(dynamic_cast<const VirtualKPageDialog*>(self));
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        return new QSize(vkpagedialog->minimumSizeHint());
    } else {
        return new QSize(((VirtualKPageDialog*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* KPageDialog_QBaseMinimumSizeHint(const KPageDialog* self) {
    auto* vkpagedialog = const_cast<VirtualKPageDialog*>(dynamic_cast<const VirtualKPageDialog*>(self));
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setKPageDialog_MinimumSizeHint_IsBase(true);
        return new QSize(vkpagedialog->minimumSizeHint());
    } else {
        return new QSize(((VirtualKPageDialog*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KPageDialog_OnMinimumSizeHint(const KPageDialog* self, intptr_t slot) {
    auto* vkpagedialog = const_cast<VirtualKPageDialog*>(dynamic_cast<const VirtualKPageDialog*>(self));
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setKPageDialog_MinimumSizeHint_Callback(reinterpret_cast<VirtualKPageDialog::KPageDialog_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageDialog_Open(KPageDialog* self) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->open();
    } else {
        self->KPageDialog::open();
    }
}

// Base class handler implementation
void KPageDialog_QBaseOpen(KPageDialog* self) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setKPageDialog_Open_IsBase(true);
        vkpagedialog->open();
    } else {
        self->KPageDialog::open();
    }
}

// Auxiliary method to allow providing re-implementation
void KPageDialog_OnOpen(KPageDialog* self, intptr_t slot) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setKPageDialog_Open_Callback(reinterpret_cast<VirtualKPageDialog::KPageDialog_Open_Callback>(slot));
    }
}

// Derived class handler implementation
int KPageDialog_Exec(KPageDialog* self) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        return vkpagedialog->exec();
    } else {
        return self->KPageDialog::exec();
    }
}

// Base class handler implementation
int KPageDialog_QBaseExec(KPageDialog* self) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setKPageDialog_Exec_IsBase(true);
        return vkpagedialog->exec();
    } else {
        return self->KPageDialog::exec();
    }
}

// Auxiliary method to allow providing re-implementation
void KPageDialog_OnExec(KPageDialog* self, intptr_t slot) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setKPageDialog_Exec_Callback(reinterpret_cast<VirtualKPageDialog::KPageDialog_Exec_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageDialog_Done(KPageDialog* self, int param1) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->done(static_cast<int>(param1));
    } else {
        self->KPageDialog::done(static_cast<int>(param1));
    }
}

// Base class handler implementation
void KPageDialog_QBaseDone(KPageDialog* self, int param1) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setKPageDialog_Done_IsBase(true);
        vkpagedialog->done(static_cast<int>(param1));
    } else {
        self->KPageDialog::done(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KPageDialog_OnDone(KPageDialog* self, intptr_t slot) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setKPageDialog_Done_Callback(reinterpret_cast<VirtualKPageDialog::KPageDialog_Done_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageDialog_Accept(KPageDialog* self) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->accept();
    } else {
        self->KPageDialog::accept();
    }
}

// Base class handler implementation
void KPageDialog_QBaseAccept(KPageDialog* self) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setKPageDialog_Accept_IsBase(true);
        vkpagedialog->accept();
    } else {
        self->KPageDialog::accept();
    }
}

// Auxiliary method to allow providing re-implementation
void KPageDialog_OnAccept(KPageDialog* self, intptr_t slot) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setKPageDialog_Accept_Callback(reinterpret_cast<VirtualKPageDialog::KPageDialog_Accept_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageDialog_Reject(KPageDialog* self) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->reject();
    } else {
        self->KPageDialog::reject();
    }
}

// Base class handler implementation
void KPageDialog_QBaseReject(KPageDialog* self) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setKPageDialog_Reject_IsBase(true);
        vkpagedialog->reject();
    } else {
        self->KPageDialog::reject();
    }
}

// Auxiliary method to allow providing re-implementation
void KPageDialog_OnReject(KPageDialog* self, intptr_t slot) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setKPageDialog_Reject_Callback(reinterpret_cast<VirtualKPageDialog::KPageDialog_Reject_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageDialog_KeyPressEvent(KPageDialog* self, QKeyEvent* param1) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->keyPressEvent(param1);
    } else {
        ((VirtualKPageDialog*)self)->keyPressEvent(param1);
    }
}

// Base class handler implementation
void KPageDialog_QBaseKeyPressEvent(KPageDialog* self, QKeyEvent* param1) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setKPageDialog_KeyPressEvent_IsBase(true);
        vkpagedialog->keyPressEvent(param1);
    } else {
        ((VirtualKPageDialog*)self)->keyPressEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageDialog_OnKeyPressEvent(KPageDialog* self, intptr_t slot) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setKPageDialog_KeyPressEvent_Callback(reinterpret_cast<VirtualKPageDialog::KPageDialog_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageDialog_CloseEvent(KPageDialog* self, QCloseEvent* param1) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->closeEvent(param1);
    } else {
        ((VirtualKPageDialog*)self)->closeEvent(param1);
    }
}

// Base class handler implementation
void KPageDialog_QBaseCloseEvent(KPageDialog* self, QCloseEvent* param1) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setKPageDialog_CloseEvent_IsBase(true);
        vkpagedialog->closeEvent(param1);
    } else {
        ((VirtualKPageDialog*)self)->closeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageDialog_OnCloseEvent(KPageDialog* self, intptr_t slot) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setKPageDialog_CloseEvent_Callback(reinterpret_cast<VirtualKPageDialog::KPageDialog_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageDialog_ShowEvent(KPageDialog* self, QShowEvent* param1) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->showEvent(param1);
    } else {
        ((VirtualKPageDialog*)self)->showEvent(param1);
    }
}

// Base class handler implementation
void KPageDialog_QBaseShowEvent(KPageDialog* self, QShowEvent* param1) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setKPageDialog_ShowEvent_IsBase(true);
        vkpagedialog->showEvent(param1);
    } else {
        ((VirtualKPageDialog*)self)->showEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageDialog_OnShowEvent(KPageDialog* self, intptr_t slot) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setKPageDialog_ShowEvent_Callback(reinterpret_cast<VirtualKPageDialog::KPageDialog_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageDialog_ResizeEvent(KPageDialog* self, QResizeEvent* param1) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->resizeEvent(param1);
    } else {
        ((VirtualKPageDialog*)self)->resizeEvent(param1);
    }
}

// Base class handler implementation
void KPageDialog_QBaseResizeEvent(KPageDialog* self, QResizeEvent* param1) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setKPageDialog_ResizeEvent_IsBase(true);
        vkpagedialog->resizeEvent(param1);
    } else {
        ((VirtualKPageDialog*)self)->resizeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageDialog_OnResizeEvent(KPageDialog* self, intptr_t slot) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setKPageDialog_ResizeEvent_Callback(reinterpret_cast<VirtualKPageDialog::KPageDialog_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageDialog_ContextMenuEvent(KPageDialog* self, QContextMenuEvent* param1) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->contextMenuEvent(param1);
    } else {
        ((VirtualKPageDialog*)self)->contextMenuEvent(param1);
    }
}

// Base class handler implementation
void KPageDialog_QBaseContextMenuEvent(KPageDialog* self, QContextMenuEvent* param1) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setKPageDialog_ContextMenuEvent_IsBase(true);
        vkpagedialog->contextMenuEvent(param1);
    } else {
        ((VirtualKPageDialog*)self)->contextMenuEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageDialog_OnContextMenuEvent(KPageDialog* self, intptr_t slot) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setKPageDialog_ContextMenuEvent_Callback(reinterpret_cast<VirtualKPageDialog::KPageDialog_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPageDialog_EventFilter(KPageDialog* self, QObject* param1, QEvent* param2) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        return vkpagedialog->eventFilter(param1, param2);
    } else {
        return ((VirtualKPageDialog*)self)->eventFilter(param1, param2);
    }
}

// Base class handler implementation
bool KPageDialog_QBaseEventFilter(KPageDialog* self, QObject* param1, QEvent* param2) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setKPageDialog_EventFilter_IsBase(true);
        return vkpagedialog->eventFilter(param1, param2);
    } else {
        return ((VirtualKPageDialog*)self)->eventFilter(param1, param2);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageDialog_OnEventFilter(KPageDialog* self, intptr_t slot) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setKPageDialog_EventFilter_Callback(reinterpret_cast<VirtualKPageDialog::KPageDialog_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
int KPageDialog_DevType(const KPageDialog* self) {
    auto* vkpagedialog = const_cast<VirtualKPageDialog*>(dynamic_cast<const VirtualKPageDialog*>(self));
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        return vkpagedialog->devType();
    } else {
        return self->KPageDialog::devType();
    }
}

// Base class handler implementation
int KPageDialog_QBaseDevType(const KPageDialog* self) {
    auto* vkpagedialog = const_cast<VirtualKPageDialog*>(dynamic_cast<const VirtualKPageDialog*>(self));
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setKPageDialog_DevType_IsBase(true);
        return vkpagedialog->devType();
    } else {
        return self->KPageDialog::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void KPageDialog_OnDevType(const KPageDialog* self, intptr_t slot) {
    auto* vkpagedialog = const_cast<VirtualKPageDialog*>(dynamic_cast<const VirtualKPageDialog*>(self));
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setKPageDialog_DevType_Callback(reinterpret_cast<VirtualKPageDialog::KPageDialog_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
int KPageDialog_HeightForWidth(const KPageDialog* self, int param1) {
    auto* vkpagedialog = const_cast<VirtualKPageDialog*>(dynamic_cast<const VirtualKPageDialog*>(self));
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        return vkpagedialog->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KPageDialog::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int KPageDialog_QBaseHeightForWidth(const KPageDialog* self, int param1) {
    auto* vkpagedialog = const_cast<VirtualKPageDialog*>(dynamic_cast<const VirtualKPageDialog*>(self));
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setKPageDialog_HeightForWidth_IsBase(true);
        return vkpagedialog->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KPageDialog::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KPageDialog_OnHeightForWidth(const KPageDialog* self, intptr_t slot) {
    auto* vkpagedialog = const_cast<VirtualKPageDialog*>(dynamic_cast<const VirtualKPageDialog*>(self));
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setKPageDialog_HeightForWidth_Callback(reinterpret_cast<VirtualKPageDialog::KPageDialog_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPageDialog_HasHeightForWidth(const KPageDialog* self) {
    auto* vkpagedialog = const_cast<VirtualKPageDialog*>(dynamic_cast<const VirtualKPageDialog*>(self));
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        return vkpagedialog->hasHeightForWidth();
    } else {
        return self->KPageDialog::hasHeightForWidth();
    }
}

// Base class handler implementation
bool KPageDialog_QBaseHasHeightForWidth(const KPageDialog* self) {
    auto* vkpagedialog = const_cast<VirtualKPageDialog*>(dynamic_cast<const VirtualKPageDialog*>(self));
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setKPageDialog_HasHeightForWidth_IsBase(true);
        return vkpagedialog->hasHeightForWidth();
    } else {
        return self->KPageDialog::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void KPageDialog_OnHasHeightForWidth(const KPageDialog* self, intptr_t slot) {
    auto* vkpagedialog = const_cast<VirtualKPageDialog*>(dynamic_cast<const VirtualKPageDialog*>(self));
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setKPageDialog_HasHeightForWidth_Callback(reinterpret_cast<VirtualKPageDialog::KPageDialog_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* KPageDialog_PaintEngine(const KPageDialog* self) {
    auto* vkpagedialog = const_cast<VirtualKPageDialog*>(dynamic_cast<const VirtualKPageDialog*>(self));
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        return vkpagedialog->paintEngine();
    } else {
        return self->KPageDialog::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* KPageDialog_QBasePaintEngine(const KPageDialog* self) {
    auto* vkpagedialog = const_cast<VirtualKPageDialog*>(dynamic_cast<const VirtualKPageDialog*>(self));
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setKPageDialog_PaintEngine_IsBase(true);
        return vkpagedialog->paintEngine();
    } else {
        return self->KPageDialog::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void KPageDialog_OnPaintEngine(const KPageDialog* self, intptr_t slot) {
    auto* vkpagedialog = const_cast<VirtualKPageDialog*>(dynamic_cast<const VirtualKPageDialog*>(self));
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setKPageDialog_PaintEngine_Callback(reinterpret_cast<VirtualKPageDialog::KPageDialog_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPageDialog_Event(KPageDialog* self, QEvent* event) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        return vkpagedialog->event(event);
    } else {
        return ((VirtualKPageDialog*)self)->event(event);
    }
}

// Base class handler implementation
bool KPageDialog_QBaseEvent(KPageDialog* self, QEvent* event) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setKPageDialog_Event_IsBase(true);
        return vkpagedialog->event(event);
    } else {
        return ((VirtualKPageDialog*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageDialog_OnEvent(KPageDialog* self, intptr_t slot) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setKPageDialog_Event_Callback(reinterpret_cast<VirtualKPageDialog::KPageDialog_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageDialog_MousePressEvent(KPageDialog* self, QMouseEvent* event) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->mousePressEvent(event);
    } else {
        ((VirtualKPageDialog*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void KPageDialog_QBaseMousePressEvent(KPageDialog* self, QMouseEvent* event) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setKPageDialog_MousePressEvent_IsBase(true);
        vkpagedialog->mousePressEvent(event);
    } else {
        ((VirtualKPageDialog*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageDialog_OnMousePressEvent(KPageDialog* self, intptr_t slot) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setKPageDialog_MousePressEvent_Callback(reinterpret_cast<VirtualKPageDialog::KPageDialog_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageDialog_MouseReleaseEvent(KPageDialog* self, QMouseEvent* event) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->mouseReleaseEvent(event);
    } else {
        ((VirtualKPageDialog*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void KPageDialog_QBaseMouseReleaseEvent(KPageDialog* self, QMouseEvent* event) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setKPageDialog_MouseReleaseEvent_IsBase(true);
        vkpagedialog->mouseReleaseEvent(event);
    } else {
        ((VirtualKPageDialog*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageDialog_OnMouseReleaseEvent(KPageDialog* self, intptr_t slot) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setKPageDialog_MouseReleaseEvent_Callback(reinterpret_cast<VirtualKPageDialog::KPageDialog_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageDialog_MouseDoubleClickEvent(KPageDialog* self, QMouseEvent* event) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKPageDialog*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void KPageDialog_QBaseMouseDoubleClickEvent(KPageDialog* self, QMouseEvent* event) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setKPageDialog_MouseDoubleClickEvent_IsBase(true);
        vkpagedialog->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKPageDialog*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageDialog_OnMouseDoubleClickEvent(KPageDialog* self, intptr_t slot) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setKPageDialog_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualKPageDialog::KPageDialog_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageDialog_MouseMoveEvent(KPageDialog* self, QMouseEvent* event) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->mouseMoveEvent(event);
    } else {
        ((VirtualKPageDialog*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void KPageDialog_QBaseMouseMoveEvent(KPageDialog* self, QMouseEvent* event) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setKPageDialog_MouseMoveEvent_IsBase(true);
        vkpagedialog->mouseMoveEvent(event);
    } else {
        ((VirtualKPageDialog*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageDialog_OnMouseMoveEvent(KPageDialog* self, intptr_t slot) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setKPageDialog_MouseMoveEvent_Callback(reinterpret_cast<VirtualKPageDialog::KPageDialog_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageDialog_WheelEvent(KPageDialog* self, QWheelEvent* event) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->wheelEvent(event);
    } else {
        ((VirtualKPageDialog*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void KPageDialog_QBaseWheelEvent(KPageDialog* self, QWheelEvent* event) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setKPageDialog_WheelEvent_IsBase(true);
        vkpagedialog->wheelEvent(event);
    } else {
        ((VirtualKPageDialog*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageDialog_OnWheelEvent(KPageDialog* self, intptr_t slot) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setKPageDialog_WheelEvent_Callback(reinterpret_cast<VirtualKPageDialog::KPageDialog_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageDialog_KeyReleaseEvent(KPageDialog* self, QKeyEvent* event) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->keyReleaseEvent(event);
    } else {
        ((VirtualKPageDialog*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void KPageDialog_QBaseKeyReleaseEvent(KPageDialog* self, QKeyEvent* event) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setKPageDialog_KeyReleaseEvent_IsBase(true);
        vkpagedialog->keyReleaseEvent(event);
    } else {
        ((VirtualKPageDialog*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageDialog_OnKeyReleaseEvent(KPageDialog* self, intptr_t slot) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setKPageDialog_KeyReleaseEvent_Callback(reinterpret_cast<VirtualKPageDialog::KPageDialog_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageDialog_FocusInEvent(KPageDialog* self, QFocusEvent* event) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->focusInEvent(event);
    } else {
        ((VirtualKPageDialog*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void KPageDialog_QBaseFocusInEvent(KPageDialog* self, QFocusEvent* event) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setKPageDialog_FocusInEvent_IsBase(true);
        vkpagedialog->focusInEvent(event);
    } else {
        ((VirtualKPageDialog*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageDialog_OnFocusInEvent(KPageDialog* self, intptr_t slot) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setKPageDialog_FocusInEvent_Callback(reinterpret_cast<VirtualKPageDialog::KPageDialog_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageDialog_FocusOutEvent(KPageDialog* self, QFocusEvent* event) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->focusOutEvent(event);
    } else {
        ((VirtualKPageDialog*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void KPageDialog_QBaseFocusOutEvent(KPageDialog* self, QFocusEvent* event) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setKPageDialog_FocusOutEvent_IsBase(true);
        vkpagedialog->focusOutEvent(event);
    } else {
        ((VirtualKPageDialog*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageDialog_OnFocusOutEvent(KPageDialog* self, intptr_t slot) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setKPageDialog_FocusOutEvent_Callback(reinterpret_cast<VirtualKPageDialog::KPageDialog_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageDialog_EnterEvent(KPageDialog* self, QEnterEvent* event) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->enterEvent(event);
    } else {
        ((VirtualKPageDialog*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void KPageDialog_QBaseEnterEvent(KPageDialog* self, QEnterEvent* event) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setKPageDialog_EnterEvent_IsBase(true);
        vkpagedialog->enterEvent(event);
    } else {
        ((VirtualKPageDialog*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageDialog_OnEnterEvent(KPageDialog* self, intptr_t slot) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setKPageDialog_EnterEvent_Callback(reinterpret_cast<VirtualKPageDialog::KPageDialog_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageDialog_LeaveEvent(KPageDialog* self, QEvent* event) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->leaveEvent(event);
    } else {
        ((VirtualKPageDialog*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void KPageDialog_QBaseLeaveEvent(KPageDialog* self, QEvent* event) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setKPageDialog_LeaveEvent_IsBase(true);
        vkpagedialog->leaveEvent(event);
    } else {
        ((VirtualKPageDialog*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageDialog_OnLeaveEvent(KPageDialog* self, intptr_t slot) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setKPageDialog_LeaveEvent_Callback(reinterpret_cast<VirtualKPageDialog::KPageDialog_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageDialog_PaintEvent(KPageDialog* self, QPaintEvent* event) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->paintEvent(event);
    } else {
        ((VirtualKPageDialog*)self)->paintEvent(event);
    }
}

// Base class handler implementation
void KPageDialog_QBasePaintEvent(KPageDialog* self, QPaintEvent* event) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setKPageDialog_PaintEvent_IsBase(true);
        vkpagedialog->paintEvent(event);
    } else {
        ((VirtualKPageDialog*)self)->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageDialog_OnPaintEvent(KPageDialog* self, intptr_t slot) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setKPageDialog_PaintEvent_Callback(reinterpret_cast<VirtualKPageDialog::KPageDialog_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageDialog_MoveEvent(KPageDialog* self, QMoveEvent* event) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->moveEvent(event);
    } else {
        ((VirtualKPageDialog*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void KPageDialog_QBaseMoveEvent(KPageDialog* self, QMoveEvent* event) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setKPageDialog_MoveEvent_IsBase(true);
        vkpagedialog->moveEvent(event);
    } else {
        ((VirtualKPageDialog*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageDialog_OnMoveEvent(KPageDialog* self, intptr_t slot) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setKPageDialog_MoveEvent_Callback(reinterpret_cast<VirtualKPageDialog::KPageDialog_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageDialog_TabletEvent(KPageDialog* self, QTabletEvent* event) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->tabletEvent(event);
    } else {
        ((VirtualKPageDialog*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void KPageDialog_QBaseTabletEvent(KPageDialog* self, QTabletEvent* event) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setKPageDialog_TabletEvent_IsBase(true);
        vkpagedialog->tabletEvent(event);
    } else {
        ((VirtualKPageDialog*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageDialog_OnTabletEvent(KPageDialog* self, intptr_t slot) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setKPageDialog_TabletEvent_Callback(reinterpret_cast<VirtualKPageDialog::KPageDialog_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageDialog_ActionEvent(KPageDialog* self, QActionEvent* event) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->actionEvent(event);
    } else {
        ((VirtualKPageDialog*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void KPageDialog_QBaseActionEvent(KPageDialog* self, QActionEvent* event) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setKPageDialog_ActionEvent_IsBase(true);
        vkpagedialog->actionEvent(event);
    } else {
        ((VirtualKPageDialog*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageDialog_OnActionEvent(KPageDialog* self, intptr_t slot) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setKPageDialog_ActionEvent_Callback(reinterpret_cast<VirtualKPageDialog::KPageDialog_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageDialog_DragEnterEvent(KPageDialog* self, QDragEnterEvent* event) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->dragEnterEvent(event);
    } else {
        ((VirtualKPageDialog*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void KPageDialog_QBaseDragEnterEvent(KPageDialog* self, QDragEnterEvent* event) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setKPageDialog_DragEnterEvent_IsBase(true);
        vkpagedialog->dragEnterEvent(event);
    } else {
        ((VirtualKPageDialog*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageDialog_OnDragEnterEvent(KPageDialog* self, intptr_t slot) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setKPageDialog_DragEnterEvent_Callback(reinterpret_cast<VirtualKPageDialog::KPageDialog_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageDialog_DragMoveEvent(KPageDialog* self, QDragMoveEvent* event) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->dragMoveEvent(event);
    } else {
        ((VirtualKPageDialog*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void KPageDialog_QBaseDragMoveEvent(KPageDialog* self, QDragMoveEvent* event) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setKPageDialog_DragMoveEvent_IsBase(true);
        vkpagedialog->dragMoveEvent(event);
    } else {
        ((VirtualKPageDialog*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageDialog_OnDragMoveEvent(KPageDialog* self, intptr_t slot) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setKPageDialog_DragMoveEvent_Callback(reinterpret_cast<VirtualKPageDialog::KPageDialog_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageDialog_DragLeaveEvent(KPageDialog* self, QDragLeaveEvent* event) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->dragLeaveEvent(event);
    } else {
        ((VirtualKPageDialog*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void KPageDialog_QBaseDragLeaveEvent(KPageDialog* self, QDragLeaveEvent* event) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setKPageDialog_DragLeaveEvent_IsBase(true);
        vkpagedialog->dragLeaveEvent(event);
    } else {
        ((VirtualKPageDialog*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageDialog_OnDragLeaveEvent(KPageDialog* self, intptr_t slot) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setKPageDialog_DragLeaveEvent_Callback(reinterpret_cast<VirtualKPageDialog::KPageDialog_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageDialog_DropEvent(KPageDialog* self, QDropEvent* event) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->dropEvent(event);
    } else {
        ((VirtualKPageDialog*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void KPageDialog_QBaseDropEvent(KPageDialog* self, QDropEvent* event) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setKPageDialog_DropEvent_IsBase(true);
        vkpagedialog->dropEvent(event);
    } else {
        ((VirtualKPageDialog*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageDialog_OnDropEvent(KPageDialog* self, intptr_t slot) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setKPageDialog_DropEvent_Callback(reinterpret_cast<VirtualKPageDialog::KPageDialog_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageDialog_HideEvent(KPageDialog* self, QHideEvent* event) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->hideEvent(event);
    } else {
        ((VirtualKPageDialog*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void KPageDialog_QBaseHideEvent(KPageDialog* self, QHideEvent* event) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setKPageDialog_HideEvent_IsBase(true);
        vkpagedialog->hideEvent(event);
    } else {
        ((VirtualKPageDialog*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageDialog_OnHideEvent(KPageDialog* self, intptr_t slot) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setKPageDialog_HideEvent_Callback(reinterpret_cast<VirtualKPageDialog::KPageDialog_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPageDialog_NativeEvent(KPageDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        return vkpagedialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKPageDialog*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool KPageDialog_QBaseNativeEvent(KPageDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setKPageDialog_NativeEvent_IsBase(true);
        return vkpagedialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKPageDialog*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void KPageDialog_OnNativeEvent(KPageDialog* self, intptr_t slot) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setKPageDialog_NativeEvent_Callback(reinterpret_cast<VirtualKPageDialog::KPageDialog_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageDialog_ChangeEvent(KPageDialog* self, QEvent* param1) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->changeEvent(param1);
    } else {
        ((VirtualKPageDialog*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void KPageDialog_QBaseChangeEvent(KPageDialog* self, QEvent* param1) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setKPageDialog_ChangeEvent_IsBase(true);
        vkpagedialog->changeEvent(param1);
    } else {
        ((VirtualKPageDialog*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageDialog_OnChangeEvent(KPageDialog* self, intptr_t slot) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setKPageDialog_ChangeEvent_Callback(reinterpret_cast<VirtualKPageDialog::KPageDialog_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int KPageDialog_Metric(const KPageDialog* self, int param1) {
    auto* vkpagedialog = const_cast<VirtualKPageDialog*>(dynamic_cast<const VirtualKPageDialog*>(self));
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        return vkpagedialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKPageDialog*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int KPageDialog_QBaseMetric(const KPageDialog* self, int param1) {
    auto* vkpagedialog = const_cast<VirtualKPageDialog*>(dynamic_cast<const VirtualKPageDialog*>(self));
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setKPageDialog_Metric_IsBase(true);
        return vkpagedialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKPageDialog*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KPageDialog_OnMetric(const KPageDialog* self, intptr_t slot) {
    auto* vkpagedialog = const_cast<VirtualKPageDialog*>(dynamic_cast<const VirtualKPageDialog*>(self));
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setKPageDialog_Metric_Callback(reinterpret_cast<VirtualKPageDialog::KPageDialog_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageDialog_InitPainter(const KPageDialog* self, QPainter* painter) {
    auto* vkpagedialog = const_cast<VirtualKPageDialog*>(dynamic_cast<const VirtualKPageDialog*>(self));
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->initPainter(painter);
    } else {
        ((VirtualKPageDialog*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void KPageDialog_QBaseInitPainter(const KPageDialog* self, QPainter* painter) {
    auto* vkpagedialog = const_cast<VirtualKPageDialog*>(dynamic_cast<const VirtualKPageDialog*>(self));
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setKPageDialog_InitPainter_IsBase(true);
        vkpagedialog->initPainter(painter);
    } else {
        ((VirtualKPageDialog*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageDialog_OnInitPainter(const KPageDialog* self, intptr_t slot) {
    auto* vkpagedialog = const_cast<VirtualKPageDialog*>(dynamic_cast<const VirtualKPageDialog*>(self));
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setKPageDialog_InitPainter_Callback(reinterpret_cast<VirtualKPageDialog::KPageDialog_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* KPageDialog_Redirected(const KPageDialog* self, QPoint* offset) {
    auto* vkpagedialog = const_cast<VirtualKPageDialog*>(dynamic_cast<const VirtualKPageDialog*>(self));
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        return vkpagedialog->redirected(offset);
    } else {
        return ((VirtualKPageDialog*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* KPageDialog_QBaseRedirected(const KPageDialog* self, QPoint* offset) {
    auto* vkpagedialog = const_cast<VirtualKPageDialog*>(dynamic_cast<const VirtualKPageDialog*>(self));
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setKPageDialog_Redirected_IsBase(true);
        return vkpagedialog->redirected(offset);
    } else {
        return ((VirtualKPageDialog*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageDialog_OnRedirected(const KPageDialog* self, intptr_t slot) {
    auto* vkpagedialog = const_cast<VirtualKPageDialog*>(dynamic_cast<const VirtualKPageDialog*>(self));
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setKPageDialog_Redirected_Callback(reinterpret_cast<VirtualKPageDialog::KPageDialog_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* KPageDialog_SharedPainter(const KPageDialog* self) {
    auto* vkpagedialog = const_cast<VirtualKPageDialog*>(dynamic_cast<const VirtualKPageDialog*>(self));
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        return vkpagedialog->sharedPainter();
    } else {
        return ((VirtualKPageDialog*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* KPageDialog_QBaseSharedPainter(const KPageDialog* self) {
    auto* vkpagedialog = const_cast<VirtualKPageDialog*>(dynamic_cast<const VirtualKPageDialog*>(self));
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setKPageDialog_SharedPainter_IsBase(true);
        return vkpagedialog->sharedPainter();
    } else {
        return ((VirtualKPageDialog*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void KPageDialog_OnSharedPainter(const KPageDialog* self, intptr_t slot) {
    auto* vkpagedialog = const_cast<VirtualKPageDialog*>(dynamic_cast<const VirtualKPageDialog*>(self));
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setKPageDialog_SharedPainter_Callback(reinterpret_cast<VirtualKPageDialog::KPageDialog_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageDialog_InputMethodEvent(KPageDialog* self, QInputMethodEvent* param1) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->inputMethodEvent(param1);
    } else {
        ((VirtualKPageDialog*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void KPageDialog_QBaseInputMethodEvent(KPageDialog* self, QInputMethodEvent* param1) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setKPageDialog_InputMethodEvent_IsBase(true);
        vkpagedialog->inputMethodEvent(param1);
    } else {
        ((VirtualKPageDialog*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageDialog_OnInputMethodEvent(KPageDialog* self, intptr_t slot) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setKPageDialog_InputMethodEvent_Callback(reinterpret_cast<VirtualKPageDialog::KPageDialog_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* KPageDialog_InputMethodQuery(const KPageDialog* self, int param1) {
    auto* vkpagedialog = const_cast<VirtualKPageDialog*>(dynamic_cast<const VirtualKPageDialog*>(self));
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        return new QVariant(vkpagedialog->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKPageDialog*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* KPageDialog_QBaseInputMethodQuery(const KPageDialog* self, int param1) {
    auto* vkpagedialog = const_cast<VirtualKPageDialog*>(dynamic_cast<const VirtualKPageDialog*>(self));
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setKPageDialog_InputMethodQuery_IsBase(true);
        return new QVariant(vkpagedialog->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKPageDialog*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void KPageDialog_OnInputMethodQuery(const KPageDialog* self, intptr_t slot) {
    auto* vkpagedialog = const_cast<VirtualKPageDialog*>(dynamic_cast<const VirtualKPageDialog*>(self));
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setKPageDialog_InputMethodQuery_Callback(reinterpret_cast<VirtualKPageDialog::KPageDialog_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPageDialog_FocusNextPrevChild(KPageDialog* self, bool next) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        return vkpagedialog->focusNextPrevChild(next);
    } else {
        return ((VirtualKPageDialog*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool KPageDialog_QBaseFocusNextPrevChild(KPageDialog* self, bool next) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setKPageDialog_FocusNextPrevChild_IsBase(true);
        return vkpagedialog->focusNextPrevChild(next);
    } else {
        return ((VirtualKPageDialog*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageDialog_OnFocusNextPrevChild(KPageDialog* self, intptr_t slot) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setKPageDialog_FocusNextPrevChild_Callback(reinterpret_cast<VirtualKPageDialog::KPageDialog_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageDialog_TimerEvent(KPageDialog* self, QTimerEvent* event) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->timerEvent(event);
    } else {
        ((VirtualKPageDialog*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KPageDialog_QBaseTimerEvent(KPageDialog* self, QTimerEvent* event) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setKPageDialog_TimerEvent_IsBase(true);
        vkpagedialog->timerEvent(event);
    } else {
        ((VirtualKPageDialog*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageDialog_OnTimerEvent(KPageDialog* self, intptr_t slot) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setKPageDialog_TimerEvent_Callback(reinterpret_cast<VirtualKPageDialog::KPageDialog_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageDialog_ChildEvent(KPageDialog* self, QChildEvent* event) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->childEvent(event);
    } else {
        ((VirtualKPageDialog*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KPageDialog_QBaseChildEvent(KPageDialog* self, QChildEvent* event) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setKPageDialog_ChildEvent_IsBase(true);
        vkpagedialog->childEvent(event);
    } else {
        ((VirtualKPageDialog*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageDialog_OnChildEvent(KPageDialog* self, intptr_t slot) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setKPageDialog_ChildEvent_Callback(reinterpret_cast<VirtualKPageDialog::KPageDialog_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageDialog_CustomEvent(KPageDialog* self, QEvent* event) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->customEvent(event);
    } else {
        ((VirtualKPageDialog*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KPageDialog_QBaseCustomEvent(KPageDialog* self, QEvent* event) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setKPageDialog_CustomEvent_IsBase(true);
        vkpagedialog->customEvent(event);
    } else {
        ((VirtualKPageDialog*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageDialog_OnCustomEvent(KPageDialog* self, intptr_t slot) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setKPageDialog_CustomEvent_Callback(reinterpret_cast<VirtualKPageDialog::KPageDialog_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageDialog_ConnectNotify(KPageDialog* self, const QMetaMethod* signal) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->connectNotify(*signal);
    } else {
        ((VirtualKPageDialog*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KPageDialog_QBaseConnectNotify(KPageDialog* self, const QMetaMethod* signal) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setKPageDialog_ConnectNotify_IsBase(true);
        vkpagedialog->connectNotify(*signal);
    } else {
        ((VirtualKPageDialog*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageDialog_OnConnectNotify(KPageDialog* self, intptr_t slot) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setKPageDialog_ConnectNotify_Callback(reinterpret_cast<VirtualKPageDialog::KPageDialog_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageDialog_DisconnectNotify(KPageDialog* self, const QMetaMethod* signal) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->disconnectNotify(*signal);
    } else {
        ((VirtualKPageDialog*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KPageDialog_QBaseDisconnectNotify(KPageDialog* self, const QMetaMethod* signal) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setKPageDialog_DisconnectNotify_IsBase(true);
        vkpagedialog->disconnectNotify(*signal);
    } else {
        ((VirtualKPageDialog*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageDialog_OnDisconnectNotify(KPageDialog* self, intptr_t slot) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setKPageDialog_DisconnectNotify_Callback(reinterpret_cast<VirtualKPageDialog::KPageDialog_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
KPageWidget* KPageDialog_PageWidget(KPageDialog* self) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        return vkpagedialog->pageWidget();
    } else {
        return ((VirtualKPageDialog*)self)->pageWidget();
    }
}

// Base class handler implementation
KPageWidget* KPageDialog_QBasePageWidget(KPageDialog* self) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setKPageDialog_PageWidget_IsBase(true);
        return vkpagedialog->pageWidget();
    } else {
        return ((VirtualKPageDialog*)self)->pageWidget();
    }
}

// Auxiliary method to allow providing re-implementation
void KPageDialog_OnPageWidget(KPageDialog* self, intptr_t slot) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setKPageDialog_PageWidget_Callback(reinterpret_cast<VirtualKPageDialog::KPageDialog_PageWidget_Callback>(slot));
    }
}

// Derived class handler implementation
KPageWidget* KPageDialog_PageWidget2(const KPageDialog* self) {
    auto* vkpagedialog = const_cast<VirtualKPageDialog*>(dynamic_cast<const VirtualKPageDialog*>(self));
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        return (KPageWidget*)vkpagedialog->pageWidget();
    } else {
        return (KPageWidget*)((VirtualKPageDialog*)self)->pageWidget();
    }
}

// Base class handler implementation
KPageWidget* KPageDialog_QBasePageWidget2(const KPageDialog* self) {
    auto* vkpagedialog = const_cast<VirtualKPageDialog*>(dynamic_cast<const VirtualKPageDialog*>(self));
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setKPageDialog_PageWidget2_IsBase(true);
        return (KPageWidget*)vkpagedialog->pageWidget();
    } else {
        return (KPageWidget*)((VirtualKPageDialog*)self)->pageWidget();
    }
}

// Auxiliary method to allow providing re-implementation
void KPageDialog_OnPageWidget2(const KPageDialog* self, intptr_t slot) {
    auto* vkpagedialog = const_cast<VirtualKPageDialog*>(dynamic_cast<const VirtualKPageDialog*>(self));
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setKPageDialog_PageWidget2_Callback(reinterpret_cast<VirtualKPageDialog::KPageDialog_PageWidget2_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageDialog_SetPageWidget(KPageDialog* self, KPageWidget* widget) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setPageWidget(widget);
    } else {
        ((VirtualKPageDialog*)self)->setPageWidget(widget);
    }
}

// Base class handler implementation
void KPageDialog_QBaseSetPageWidget(KPageDialog* self, KPageWidget* widget) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setKPageDialog_SetPageWidget_IsBase(true);
        vkpagedialog->setPageWidget(widget);
    } else {
        ((VirtualKPageDialog*)self)->setPageWidget(widget);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageDialog_OnSetPageWidget(KPageDialog* self, intptr_t slot) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setKPageDialog_SetPageWidget_Callback(reinterpret_cast<VirtualKPageDialog::KPageDialog_SetPageWidget_Callback>(slot));
    }
}

// Derived class handler implementation
QDialogButtonBox* KPageDialog_ButtonBox(KPageDialog* self) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        return vkpagedialog->buttonBox();
    } else {
        return ((VirtualKPageDialog*)self)->buttonBox();
    }
}

// Base class handler implementation
QDialogButtonBox* KPageDialog_QBaseButtonBox(KPageDialog* self) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setKPageDialog_ButtonBox_IsBase(true);
        return vkpagedialog->buttonBox();
    } else {
        return ((VirtualKPageDialog*)self)->buttonBox();
    }
}

// Auxiliary method to allow providing re-implementation
void KPageDialog_OnButtonBox(KPageDialog* self, intptr_t slot) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setKPageDialog_ButtonBox_Callback(reinterpret_cast<VirtualKPageDialog::KPageDialog_ButtonBox_Callback>(slot));
    }
}

// Derived class handler implementation
QDialogButtonBox* KPageDialog_ButtonBox2(const KPageDialog* self) {
    auto* vkpagedialog = const_cast<VirtualKPageDialog*>(dynamic_cast<const VirtualKPageDialog*>(self));
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        return (QDialogButtonBox*)vkpagedialog->buttonBox();
    } else {
        return (QDialogButtonBox*)((VirtualKPageDialog*)self)->buttonBox();
    }
}

// Base class handler implementation
QDialogButtonBox* KPageDialog_QBaseButtonBox2(const KPageDialog* self) {
    auto* vkpagedialog = const_cast<VirtualKPageDialog*>(dynamic_cast<const VirtualKPageDialog*>(self));
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setKPageDialog_ButtonBox2_IsBase(true);
        return (QDialogButtonBox*)vkpagedialog->buttonBox();
    } else {
        return (QDialogButtonBox*)((VirtualKPageDialog*)self)->buttonBox();
    }
}

// Auxiliary method to allow providing re-implementation
void KPageDialog_OnButtonBox2(const KPageDialog* self, intptr_t slot) {
    auto* vkpagedialog = const_cast<VirtualKPageDialog*>(dynamic_cast<const VirtualKPageDialog*>(self));
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setKPageDialog_ButtonBox2_Callback(reinterpret_cast<VirtualKPageDialog::KPageDialog_ButtonBox2_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageDialog_SetButtonBox(KPageDialog* self, QDialogButtonBox* box) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setButtonBox(box);
    } else {
        ((VirtualKPageDialog*)self)->setButtonBox(box);
    }
}

// Base class handler implementation
void KPageDialog_QBaseSetButtonBox(KPageDialog* self, QDialogButtonBox* box) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setKPageDialog_SetButtonBox_IsBase(true);
        vkpagedialog->setButtonBox(box);
    } else {
        ((VirtualKPageDialog*)self)->setButtonBox(box);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageDialog_OnSetButtonBox(KPageDialog* self, intptr_t slot) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setKPageDialog_SetButtonBox_Callback(reinterpret_cast<VirtualKPageDialog::KPageDialog_SetButtonBox_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageDialog_AdjustPosition(KPageDialog* self, QWidget* param1) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->adjustPosition(param1);
    } else {
        ((VirtualKPageDialog*)self)->adjustPosition(param1);
    }
}

// Base class handler implementation
void KPageDialog_QBaseAdjustPosition(KPageDialog* self, QWidget* param1) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setKPageDialog_AdjustPosition_IsBase(true);
        vkpagedialog->adjustPosition(param1);
    } else {
        ((VirtualKPageDialog*)self)->adjustPosition(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageDialog_OnAdjustPosition(KPageDialog* self, intptr_t slot) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setKPageDialog_AdjustPosition_Callback(reinterpret_cast<VirtualKPageDialog::KPageDialog_AdjustPosition_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageDialog_UpdateMicroFocus(KPageDialog* self) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->updateMicroFocus();
    } else {
        ((VirtualKPageDialog*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void KPageDialog_QBaseUpdateMicroFocus(KPageDialog* self) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setKPageDialog_UpdateMicroFocus_IsBase(true);
        vkpagedialog->updateMicroFocus();
    } else {
        ((VirtualKPageDialog*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void KPageDialog_OnUpdateMicroFocus(KPageDialog* self, intptr_t slot) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setKPageDialog_UpdateMicroFocus_Callback(reinterpret_cast<VirtualKPageDialog::KPageDialog_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageDialog_Create(KPageDialog* self) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->create();
    } else {
        ((VirtualKPageDialog*)self)->create();
    }
}

// Base class handler implementation
void KPageDialog_QBaseCreate(KPageDialog* self) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setKPageDialog_Create_IsBase(true);
        vkpagedialog->create();
    } else {
        ((VirtualKPageDialog*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void KPageDialog_OnCreate(KPageDialog* self, intptr_t slot) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setKPageDialog_Create_Callback(reinterpret_cast<VirtualKPageDialog::KPageDialog_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageDialog_Destroy(KPageDialog* self) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->destroy();
    } else {
        ((VirtualKPageDialog*)self)->destroy();
    }
}

// Base class handler implementation
void KPageDialog_QBaseDestroy(KPageDialog* self) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setKPageDialog_Destroy_IsBase(true);
        vkpagedialog->destroy();
    } else {
        ((VirtualKPageDialog*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void KPageDialog_OnDestroy(KPageDialog* self, intptr_t slot) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setKPageDialog_Destroy_Callback(reinterpret_cast<VirtualKPageDialog::KPageDialog_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPageDialog_FocusNextChild(KPageDialog* self) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        return vkpagedialog->focusNextChild();
    } else {
        return ((VirtualKPageDialog*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool KPageDialog_QBaseFocusNextChild(KPageDialog* self) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setKPageDialog_FocusNextChild_IsBase(true);
        return vkpagedialog->focusNextChild();
    } else {
        return ((VirtualKPageDialog*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KPageDialog_OnFocusNextChild(KPageDialog* self, intptr_t slot) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setKPageDialog_FocusNextChild_Callback(reinterpret_cast<VirtualKPageDialog::KPageDialog_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPageDialog_FocusPreviousChild(KPageDialog* self) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        return vkpagedialog->focusPreviousChild();
    } else {
        return ((VirtualKPageDialog*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool KPageDialog_QBaseFocusPreviousChild(KPageDialog* self) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setKPageDialog_FocusPreviousChild_IsBase(true);
        return vkpagedialog->focusPreviousChild();
    } else {
        return ((VirtualKPageDialog*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KPageDialog_OnFocusPreviousChild(KPageDialog* self, intptr_t slot) {
    auto* vkpagedialog = dynamic_cast<VirtualKPageDialog*>(self);
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setKPageDialog_FocusPreviousChild_Callback(reinterpret_cast<VirtualKPageDialog::KPageDialog_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KPageDialog_Sender(const KPageDialog* self) {
    auto* vkpagedialog = const_cast<VirtualKPageDialog*>(dynamic_cast<const VirtualKPageDialog*>(self));
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        return vkpagedialog->sender();
    } else {
        return ((VirtualKPageDialog*)self)->sender();
    }
}

// Base class handler implementation
QObject* KPageDialog_QBaseSender(const KPageDialog* self) {
    auto* vkpagedialog = const_cast<VirtualKPageDialog*>(dynamic_cast<const VirtualKPageDialog*>(self));
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setKPageDialog_Sender_IsBase(true);
        return vkpagedialog->sender();
    } else {
        return ((VirtualKPageDialog*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KPageDialog_OnSender(const KPageDialog* self, intptr_t slot) {
    auto* vkpagedialog = const_cast<VirtualKPageDialog*>(dynamic_cast<const VirtualKPageDialog*>(self));
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setKPageDialog_Sender_Callback(reinterpret_cast<VirtualKPageDialog::KPageDialog_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KPageDialog_SenderSignalIndex(const KPageDialog* self) {
    auto* vkpagedialog = const_cast<VirtualKPageDialog*>(dynamic_cast<const VirtualKPageDialog*>(self));
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        return vkpagedialog->senderSignalIndex();
    } else {
        return ((VirtualKPageDialog*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KPageDialog_QBaseSenderSignalIndex(const KPageDialog* self) {
    auto* vkpagedialog = const_cast<VirtualKPageDialog*>(dynamic_cast<const VirtualKPageDialog*>(self));
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setKPageDialog_SenderSignalIndex_IsBase(true);
        return vkpagedialog->senderSignalIndex();
    } else {
        return ((VirtualKPageDialog*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KPageDialog_OnSenderSignalIndex(const KPageDialog* self, intptr_t slot) {
    auto* vkpagedialog = const_cast<VirtualKPageDialog*>(dynamic_cast<const VirtualKPageDialog*>(self));
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setKPageDialog_SenderSignalIndex_Callback(reinterpret_cast<VirtualKPageDialog::KPageDialog_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KPageDialog_Receivers(const KPageDialog* self, const char* signal) {
    auto* vkpagedialog = const_cast<VirtualKPageDialog*>(dynamic_cast<const VirtualKPageDialog*>(self));
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        return vkpagedialog->receivers(signal);
    } else {
        return ((VirtualKPageDialog*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KPageDialog_QBaseReceivers(const KPageDialog* self, const char* signal) {
    auto* vkpagedialog = const_cast<VirtualKPageDialog*>(dynamic_cast<const VirtualKPageDialog*>(self));
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setKPageDialog_Receivers_IsBase(true);
        return vkpagedialog->receivers(signal);
    } else {
        return ((VirtualKPageDialog*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageDialog_OnReceivers(const KPageDialog* self, intptr_t slot) {
    auto* vkpagedialog = const_cast<VirtualKPageDialog*>(dynamic_cast<const VirtualKPageDialog*>(self));
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setKPageDialog_Receivers_Callback(reinterpret_cast<VirtualKPageDialog::KPageDialog_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPageDialog_IsSignalConnected(const KPageDialog* self, const QMetaMethod* signal) {
    auto* vkpagedialog = const_cast<VirtualKPageDialog*>(dynamic_cast<const VirtualKPageDialog*>(self));
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        return vkpagedialog->isSignalConnected(*signal);
    } else {
        return ((VirtualKPageDialog*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KPageDialog_QBaseIsSignalConnected(const KPageDialog* self, const QMetaMethod* signal) {
    auto* vkpagedialog = const_cast<VirtualKPageDialog*>(dynamic_cast<const VirtualKPageDialog*>(self));
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setKPageDialog_IsSignalConnected_IsBase(true);
        return vkpagedialog->isSignalConnected(*signal);
    } else {
        return ((VirtualKPageDialog*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageDialog_OnIsSignalConnected(const KPageDialog* self, intptr_t slot) {
    auto* vkpagedialog = const_cast<VirtualKPageDialog*>(dynamic_cast<const VirtualKPageDialog*>(self));
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setKPageDialog_IsSignalConnected_Callback(reinterpret_cast<VirtualKPageDialog::KPageDialog_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double KPageDialog_GetDecodedMetricF(const KPageDialog* self, int metricA, int metricB) {
    auto* vkpagedialog = const_cast<VirtualKPageDialog*>(dynamic_cast<const VirtualKPageDialog*>(self));
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        return vkpagedialog->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKPageDialog*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double KPageDialog_QBaseGetDecodedMetricF(const KPageDialog* self, int metricA, int metricB) {
    auto* vkpagedialog = const_cast<VirtualKPageDialog*>(dynamic_cast<const VirtualKPageDialog*>(self));
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setKPageDialog_GetDecodedMetricF_IsBase(true);
        return vkpagedialog->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKPageDialog*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void KPageDialog_OnGetDecodedMetricF(const KPageDialog* self, intptr_t slot) {
    auto* vkpagedialog = const_cast<VirtualKPageDialog*>(dynamic_cast<const VirtualKPageDialog*>(self));
    if (vkpagedialog && vkpagedialog->isVirtualKPageDialog) {
        vkpagedialog->setKPageDialog_GetDecodedMetricF_Callback(reinterpret_cast<VirtualKPageDialog::KPageDialog_GetDecodedMetricF_Callback>(slot));
    }
}

void KPageDialog_Delete(KPageDialog* self) {
    delete self;
}
