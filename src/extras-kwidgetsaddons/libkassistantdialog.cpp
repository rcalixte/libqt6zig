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
#include <QByteArray>
#include <cstring>
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
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKAssistantDialog*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KAssistantDialog_Tr(const char* s) {
    QString _ret = KAssistantDialog::tr(s);
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
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        self->back();
    } else {
        ((VirtualKAssistantDialog*)self)->back();
    }
}

void KAssistantDialog_Next(KAssistantDialog* self) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        self->next();
    } else {
        ((VirtualKAssistantDialog*)self)->next();
    }
}

void KAssistantDialog_ShowEvent(KAssistantDialog* self, QShowEvent* event) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->showEvent(event);
    }
}

libqt_string KAssistantDialog_Tr2(const char* s, const char* c) {
    QString _ret = KAssistantDialog::tr(s, c);
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
    QString _ret = KAssistantDialog::tr(s, c, static_cast<int>(n));
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
int KAssistantDialog_QBaseMetacall(KAssistantDialog* self, int param1, int param2, void** param3) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setKAssistantDialog_Metacall_IsBase(true);
        return vkassistantdialog->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KAssistantDialog::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KAssistantDialog_OnMetacall(KAssistantDialog* self, intptr_t slot) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setKAssistantDialog_Metacall_Callback(reinterpret_cast<VirtualKAssistantDialog::KAssistantDialog_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
void KAssistantDialog_QBaseBack(KAssistantDialog* self) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setKAssistantDialog_Back_IsBase(true);
        vkassistantdialog->back();
    } else {
        self->KAssistantDialog::back();
    }
}

// Auxiliary method to allow providing re-implementation
void KAssistantDialog_OnBack(KAssistantDialog* self, intptr_t slot) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setKAssistantDialog_Back_Callback(reinterpret_cast<VirtualKAssistantDialog::KAssistantDialog_Back_Callback>(slot));
    }
}

// Base class handler implementation
void KAssistantDialog_QBaseNext(KAssistantDialog* self) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setKAssistantDialog_Next_IsBase(true);
        vkassistantdialog->next();
    } else {
        self->KAssistantDialog::next();
    }
}

// Auxiliary method to allow providing re-implementation
void KAssistantDialog_OnNext(KAssistantDialog* self, intptr_t slot) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setKAssistantDialog_Next_Callback(reinterpret_cast<VirtualKAssistantDialog::KAssistantDialog_Next_Callback>(slot));
    }
}

// Base class handler implementation
void KAssistantDialog_QBaseShowEvent(KAssistantDialog* self, QShowEvent* event) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setKAssistantDialog_ShowEvent_IsBase(true);
        vkassistantdialog->showEvent(event);
    } else {
        ((VirtualKAssistantDialog*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KAssistantDialog_OnShowEvent(KAssistantDialog* self, intptr_t slot) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setKAssistantDialog_ShowEvent_Callback(reinterpret_cast<VirtualKAssistantDialog::KAssistantDialog_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAssistantDialog_SetVisible(KAssistantDialog* self, bool visible) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setVisible(visible);
    } else {
        self->KAssistantDialog::setVisible(visible);
    }
}

// Base class handler implementation
void KAssistantDialog_QBaseSetVisible(KAssistantDialog* self, bool visible) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setKAssistantDialog_SetVisible_IsBase(true);
        vkassistantdialog->setVisible(visible);
    } else {
        self->KAssistantDialog::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void KAssistantDialog_OnSetVisible(KAssistantDialog* self, intptr_t slot) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setKAssistantDialog_SetVisible_Callback(reinterpret_cast<VirtualKAssistantDialog::KAssistantDialog_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KAssistantDialog_SizeHint(const KAssistantDialog* self) {
    auto* vkassistantdialog = const_cast<VirtualKAssistantDialog*>(dynamic_cast<const VirtualKAssistantDialog*>(self));
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        return new QSize(vkassistantdialog->sizeHint());
    } else {
        return new QSize(((VirtualKAssistantDialog*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* KAssistantDialog_QBaseSizeHint(const KAssistantDialog* self) {
    auto* vkassistantdialog = const_cast<VirtualKAssistantDialog*>(dynamic_cast<const VirtualKAssistantDialog*>(self));
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setKAssistantDialog_SizeHint_IsBase(true);
        return new QSize(vkassistantdialog->sizeHint());
    } else {
        return new QSize(((VirtualKAssistantDialog*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KAssistantDialog_OnSizeHint(const KAssistantDialog* self, intptr_t slot) {
    auto* vkassistantdialog = const_cast<VirtualKAssistantDialog*>(dynamic_cast<const VirtualKAssistantDialog*>(self));
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setKAssistantDialog_SizeHint_Callback(reinterpret_cast<VirtualKAssistantDialog::KAssistantDialog_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KAssistantDialog_MinimumSizeHint(const KAssistantDialog* self) {
    auto* vkassistantdialog = const_cast<VirtualKAssistantDialog*>(dynamic_cast<const VirtualKAssistantDialog*>(self));
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        return new QSize(vkassistantdialog->minimumSizeHint());
    } else {
        return new QSize(((VirtualKAssistantDialog*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* KAssistantDialog_QBaseMinimumSizeHint(const KAssistantDialog* self) {
    auto* vkassistantdialog = const_cast<VirtualKAssistantDialog*>(dynamic_cast<const VirtualKAssistantDialog*>(self));
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setKAssistantDialog_MinimumSizeHint_IsBase(true);
        return new QSize(vkassistantdialog->minimumSizeHint());
    } else {
        return new QSize(((VirtualKAssistantDialog*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KAssistantDialog_OnMinimumSizeHint(const KAssistantDialog* self, intptr_t slot) {
    auto* vkassistantdialog = const_cast<VirtualKAssistantDialog*>(dynamic_cast<const VirtualKAssistantDialog*>(self));
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setKAssistantDialog_MinimumSizeHint_Callback(reinterpret_cast<VirtualKAssistantDialog::KAssistantDialog_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void KAssistantDialog_Open(KAssistantDialog* self) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->open();
    } else {
        self->KAssistantDialog::open();
    }
}

// Base class handler implementation
void KAssistantDialog_QBaseOpen(KAssistantDialog* self) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setKAssistantDialog_Open_IsBase(true);
        vkassistantdialog->open();
    } else {
        self->KAssistantDialog::open();
    }
}

// Auxiliary method to allow providing re-implementation
void KAssistantDialog_OnOpen(KAssistantDialog* self, intptr_t slot) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setKAssistantDialog_Open_Callback(reinterpret_cast<VirtualKAssistantDialog::KAssistantDialog_Open_Callback>(slot));
    }
}

// Derived class handler implementation
int KAssistantDialog_Exec(KAssistantDialog* self) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        return vkassistantdialog->exec();
    } else {
        return self->KAssistantDialog::exec();
    }
}

// Base class handler implementation
int KAssistantDialog_QBaseExec(KAssistantDialog* self) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setKAssistantDialog_Exec_IsBase(true);
        return vkassistantdialog->exec();
    } else {
        return self->KAssistantDialog::exec();
    }
}

// Auxiliary method to allow providing re-implementation
void KAssistantDialog_OnExec(KAssistantDialog* self, intptr_t slot) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setKAssistantDialog_Exec_Callback(reinterpret_cast<VirtualKAssistantDialog::KAssistantDialog_Exec_Callback>(slot));
    }
}

// Derived class handler implementation
void KAssistantDialog_Done(KAssistantDialog* self, int param1) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->done(static_cast<int>(param1));
    } else {
        self->KAssistantDialog::done(static_cast<int>(param1));
    }
}

// Base class handler implementation
void KAssistantDialog_QBaseDone(KAssistantDialog* self, int param1) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setKAssistantDialog_Done_IsBase(true);
        vkassistantdialog->done(static_cast<int>(param1));
    } else {
        self->KAssistantDialog::done(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KAssistantDialog_OnDone(KAssistantDialog* self, intptr_t slot) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setKAssistantDialog_Done_Callback(reinterpret_cast<VirtualKAssistantDialog::KAssistantDialog_Done_Callback>(slot));
    }
}

// Derived class handler implementation
void KAssistantDialog_Accept(KAssistantDialog* self) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->accept();
    } else {
        self->KAssistantDialog::accept();
    }
}

// Base class handler implementation
void KAssistantDialog_QBaseAccept(KAssistantDialog* self) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setKAssistantDialog_Accept_IsBase(true);
        vkassistantdialog->accept();
    } else {
        self->KAssistantDialog::accept();
    }
}

// Auxiliary method to allow providing re-implementation
void KAssistantDialog_OnAccept(KAssistantDialog* self, intptr_t slot) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setKAssistantDialog_Accept_Callback(reinterpret_cast<VirtualKAssistantDialog::KAssistantDialog_Accept_Callback>(slot));
    }
}

// Derived class handler implementation
void KAssistantDialog_Reject(KAssistantDialog* self) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->reject();
    } else {
        self->KAssistantDialog::reject();
    }
}

// Base class handler implementation
void KAssistantDialog_QBaseReject(KAssistantDialog* self) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setKAssistantDialog_Reject_IsBase(true);
        vkassistantdialog->reject();
    } else {
        self->KAssistantDialog::reject();
    }
}

// Auxiliary method to allow providing re-implementation
void KAssistantDialog_OnReject(KAssistantDialog* self, intptr_t slot) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setKAssistantDialog_Reject_Callback(reinterpret_cast<VirtualKAssistantDialog::KAssistantDialog_Reject_Callback>(slot));
    }
}

// Derived class handler implementation
void KAssistantDialog_KeyPressEvent(KAssistantDialog* self, QKeyEvent* param1) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->keyPressEvent(param1);
    } else {
        ((VirtualKAssistantDialog*)self)->keyPressEvent(param1);
    }
}

// Base class handler implementation
void KAssistantDialog_QBaseKeyPressEvent(KAssistantDialog* self, QKeyEvent* param1) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setKAssistantDialog_KeyPressEvent_IsBase(true);
        vkassistantdialog->keyPressEvent(param1);
    } else {
        ((VirtualKAssistantDialog*)self)->keyPressEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KAssistantDialog_OnKeyPressEvent(KAssistantDialog* self, intptr_t slot) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setKAssistantDialog_KeyPressEvent_Callback(reinterpret_cast<VirtualKAssistantDialog::KAssistantDialog_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAssistantDialog_CloseEvent(KAssistantDialog* self, QCloseEvent* param1) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->closeEvent(param1);
    } else {
        ((VirtualKAssistantDialog*)self)->closeEvent(param1);
    }
}

// Base class handler implementation
void KAssistantDialog_QBaseCloseEvent(KAssistantDialog* self, QCloseEvent* param1) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setKAssistantDialog_CloseEvent_IsBase(true);
        vkassistantdialog->closeEvent(param1);
    } else {
        ((VirtualKAssistantDialog*)self)->closeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KAssistantDialog_OnCloseEvent(KAssistantDialog* self, intptr_t slot) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setKAssistantDialog_CloseEvent_Callback(reinterpret_cast<VirtualKAssistantDialog::KAssistantDialog_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAssistantDialog_ResizeEvent(KAssistantDialog* self, QResizeEvent* param1) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->resizeEvent(param1);
    } else {
        ((VirtualKAssistantDialog*)self)->resizeEvent(param1);
    }
}

// Base class handler implementation
void KAssistantDialog_QBaseResizeEvent(KAssistantDialog* self, QResizeEvent* param1) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setKAssistantDialog_ResizeEvent_IsBase(true);
        vkassistantdialog->resizeEvent(param1);
    } else {
        ((VirtualKAssistantDialog*)self)->resizeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KAssistantDialog_OnResizeEvent(KAssistantDialog* self, intptr_t slot) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setKAssistantDialog_ResizeEvent_Callback(reinterpret_cast<VirtualKAssistantDialog::KAssistantDialog_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAssistantDialog_ContextMenuEvent(KAssistantDialog* self, QContextMenuEvent* param1) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->contextMenuEvent(param1);
    } else {
        ((VirtualKAssistantDialog*)self)->contextMenuEvent(param1);
    }
}

// Base class handler implementation
void KAssistantDialog_QBaseContextMenuEvent(KAssistantDialog* self, QContextMenuEvent* param1) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setKAssistantDialog_ContextMenuEvent_IsBase(true);
        vkassistantdialog->contextMenuEvent(param1);
    } else {
        ((VirtualKAssistantDialog*)self)->contextMenuEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KAssistantDialog_OnContextMenuEvent(KAssistantDialog* self, intptr_t slot) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setKAssistantDialog_ContextMenuEvent_Callback(reinterpret_cast<VirtualKAssistantDialog::KAssistantDialog_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KAssistantDialog_EventFilter(KAssistantDialog* self, QObject* param1, QEvent* param2) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        return vkassistantdialog->eventFilter(param1, param2);
    } else {
        return ((VirtualKAssistantDialog*)self)->eventFilter(param1, param2);
    }
}

// Base class handler implementation
bool KAssistantDialog_QBaseEventFilter(KAssistantDialog* self, QObject* param1, QEvent* param2) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setKAssistantDialog_EventFilter_IsBase(true);
        return vkassistantdialog->eventFilter(param1, param2);
    } else {
        return ((VirtualKAssistantDialog*)self)->eventFilter(param1, param2);
    }
}

// Auxiliary method to allow providing re-implementation
void KAssistantDialog_OnEventFilter(KAssistantDialog* self, intptr_t slot) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setKAssistantDialog_EventFilter_Callback(reinterpret_cast<VirtualKAssistantDialog::KAssistantDialog_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
int KAssistantDialog_DevType(const KAssistantDialog* self) {
    auto* vkassistantdialog = const_cast<VirtualKAssistantDialog*>(dynamic_cast<const VirtualKAssistantDialog*>(self));
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        return vkassistantdialog->devType();
    } else {
        return self->KAssistantDialog::devType();
    }
}

// Base class handler implementation
int KAssistantDialog_QBaseDevType(const KAssistantDialog* self) {
    auto* vkassistantdialog = const_cast<VirtualKAssistantDialog*>(dynamic_cast<const VirtualKAssistantDialog*>(self));
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setKAssistantDialog_DevType_IsBase(true);
        return vkassistantdialog->devType();
    } else {
        return self->KAssistantDialog::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void KAssistantDialog_OnDevType(const KAssistantDialog* self, intptr_t slot) {
    auto* vkassistantdialog = const_cast<VirtualKAssistantDialog*>(dynamic_cast<const VirtualKAssistantDialog*>(self));
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setKAssistantDialog_DevType_Callback(reinterpret_cast<VirtualKAssistantDialog::KAssistantDialog_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
int KAssistantDialog_HeightForWidth(const KAssistantDialog* self, int param1) {
    auto* vkassistantdialog = const_cast<VirtualKAssistantDialog*>(dynamic_cast<const VirtualKAssistantDialog*>(self));
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        return vkassistantdialog->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KAssistantDialog::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int KAssistantDialog_QBaseHeightForWidth(const KAssistantDialog* self, int param1) {
    auto* vkassistantdialog = const_cast<VirtualKAssistantDialog*>(dynamic_cast<const VirtualKAssistantDialog*>(self));
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setKAssistantDialog_HeightForWidth_IsBase(true);
        return vkassistantdialog->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KAssistantDialog::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KAssistantDialog_OnHeightForWidth(const KAssistantDialog* self, intptr_t slot) {
    auto* vkassistantdialog = const_cast<VirtualKAssistantDialog*>(dynamic_cast<const VirtualKAssistantDialog*>(self));
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setKAssistantDialog_HeightForWidth_Callback(reinterpret_cast<VirtualKAssistantDialog::KAssistantDialog_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool KAssistantDialog_HasHeightForWidth(const KAssistantDialog* self) {
    auto* vkassistantdialog = const_cast<VirtualKAssistantDialog*>(dynamic_cast<const VirtualKAssistantDialog*>(self));
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        return vkassistantdialog->hasHeightForWidth();
    } else {
        return self->KAssistantDialog::hasHeightForWidth();
    }
}

// Base class handler implementation
bool KAssistantDialog_QBaseHasHeightForWidth(const KAssistantDialog* self) {
    auto* vkassistantdialog = const_cast<VirtualKAssistantDialog*>(dynamic_cast<const VirtualKAssistantDialog*>(self));
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setKAssistantDialog_HasHeightForWidth_IsBase(true);
        return vkassistantdialog->hasHeightForWidth();
    } else {
        return self->KAssistantDialog::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void KAssistantDialog_OnHasHeightForWidth(const KAssistantDialog* self, intptr_t slot) {
    auto* vkassistantdialog = const_cast<VirtualKAssistantDialog*>(dynamic_cast<const VirtualKAssistantDialog*>(self));
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setKAssistantDialog_HasHeightForWidth_Callback(reinterpret_cast<VirtualKAssistantDialog::KAssistantDialog_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* KAssistantDialog_PaintEngine(const KAssistantDialog* self) {
    auto* vkassistantdialog = const_cast<VirtualKAssistantDialog*>(dynamic_cast<const VirtualKAssistantDialog*>(self));
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        return vkassistantdialog->paintEngine();
    } else {
        return self->KAssistantDialog::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* KAssistantDialog_QBasePaintEngine(const KAssistantDialog* self) {
    auto* vkassistantdialog = const_cast<VirtualKAssistantDialog*>(dynamic_cast<const VirtualKAssistantDialog*>(self));
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setKAssistantDialog_PaintEngine_IsBase(true);
        return vkassistantdialog->paintEngine();
    } else {
        return self->KAssistantDialog::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void KAssistantDialog_OnPaintEngine(const KAssistantDialog* self, intptr_t slot) {
    auto* vkassistantdialog = const_cast<VirtualKAssistantDialog*>(dynamic_cast<const VirtualKAssistantDialog*>(self));
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setKAssistantDialog_PaintEngine_Callback(reinterpret_cast<VirtualKAssistantDialog::KAssistantDialog_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
bool KAssistantDialog_Event(KAssistantDialog* self, QEvent* event) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        return vkassistantdialog->event(event);
    } else {
        return ((VirtualKAssistantDialog*)self)->event(event);
    }
}

// Base class handler implementation
bool KAssistantDialog_QBaseEvent(KAssistantDialog* self, QEvent* event) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setKAssistantDialog_Event_IsBase(true);
        return vkassistantdialog->event(event);
    } else {
        return ((VirtualKAssistantDialog*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KAssistantDialog_OnEvent(KAssistantDialog* self, intptr_t slot) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setKAssistantDialog_Event_Callback(reinterpret_cast<VirtualKAssistantDialog::KAssistantDialog_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void KAssistantDialog_MousePressEvent(KAssistantDialog* self, QMouseEvent* event) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->mousePressEvent(event);
    } else {
        ((VirtualKAssistantDialog*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void KAssistantDialog_QBaseMousePressEvent(KAssistantDialog* self, QMouseEvent* event) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setKAssistantDialog_MousePressEvent_IsBase(true);
        vkassistantdialog->mousePressEvent(event);
    } else {
        ((VirtualKAssistantDialog*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KAssistantDialog_OnMousePressEvent(KAssistantDialog* self, intptr_t slot) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setKAssistantDialog_MousePressEvent_Callback(reinterpret_cast<VirtualKAssistantDialog::KAssistantDialog_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAssistantDialog_MouseReleaseEvent(KAssistantDialog* self, QMouseEvent* event) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->mouseReleaseEvent(event);
    } else {
        ((VirtualKAssistantDialog*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void KAssistantDialog_QBaseMouseReleaseEvent(KAssistantDialog* self, QMouseEvent* event) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setKAssistantDialog_MouseReleaseEvent_IsBase(true);
        vkassistantdialog->mouseReleaseEvent(event);
    } else {
        ((VirtualKAssistantDialog*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KAssistantDialog_OnMouseReleaseEvent(KAssistantDialog* self, intptr_t slot) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setKAssistantDialog_MouseReleaseEvent_Callback(reinterpret_cast<VirtualKAssistantDialog::KAssistantDialog_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAssistantDialog_MouseDoubleClickEvent(KAssistantDialog* self, QMouseEvent* event) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKAssistantDialog*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void KAssistantDialog_QBaseMouseDoubleClickEvent(KAssistantDialog* self, QMouseEvent* event) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setKAssistantDialog_MouseDoubleClickEvent_IsBase(true);
        vkassistantdialog->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKAssistantDialog*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KAssistantDialog_OnMouseDoubleClickEvent(KAssistantDialog* self, intptr_t slot) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setKAssistantDialog_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualKAssistantDialog::KAssistantDialog_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAssistantDialog_MouseMoveEvent(KAssistantDialog* self, QMouseEvent* event) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->mouseMoveEvent(event);
    } else {
        ((VirtualKAssistantDialog*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void KAssistantDialog_QBaseMouseMoveEvent(KAssistantDialog* self, QMouseEvent* event) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setKAssistantDialog_MouseMoveEvent_IsBase(true);
        vkassistantdialog->mouseMoveEvent(event);
    } else {
        ((VirtualKAssistantDialog*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KAssistantDialog_OnMouseMoveEvent(KAssistantDialog* self, intptr_t slot) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setKAssistantDialog_MouseMoveEvent_Callback(reinterpret_cast<VirtualKAssistantDialog::KAssistantDialog_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAssistantDialog_WheelEvent(KAssistantDialog* self, QWheelEvent* event) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->wheelEvent(event);
    } else {
        ((VirtualKAssistantDialog*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void KAssistantDialog_QBaseWheelEvent(KAssistantDialog* self, QWheelEvent* event) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setKAssistantDialog_WheelEvent_IsBase(true);
        vkassistantdialog->wheelEvent(event);
    } else {
        ((VirtualKAssistantDialog*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KAssistantDialog_OnWheelEvent(KAssistantDialog* self, intptr_t slot) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setKAssistantDialog_WheelEvent_Callback(reinterpret_cast<VirtualKAssistantDialog::KAssistantDialog_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAssistantDialog_KeyReleaseEvent(KAssistantDialog* self, QKeyEvent* event) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->keyReleaseEvent(event);
    } else {
        ((VirtualKAssistantDialog*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void KAssistantDialog_QBaseKeyReleaseEvent(KAssistantDialog* self, QKeyEvent* event) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setKAssistantDialog_KeyReleaseEvent_IsBase(true);
        vkassistantdialog->keyReleaseEvent(event);
    } else {
        ((VirtualKAssistantDialog*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KAssistantDialog_OnKeyReleaseEvent(KAssistantDialog* self, intptr_t slot) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setKAssistantDialog_KeyReleaseEvent_Callback(reinterpret_cast<VirtualKAssistantDialog::KAssistantDialog_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAssistantDialog_FocusInEvent(KAssistantDialog* self, QFocusEvent* event) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->focusInEvent(event);
    } else {
        ((VirtualKAssistantDialog*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void KAssistantDialog_QBaseFocusInEvent(KAssistantDialog* self, QFocusEvent* event) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setKAssistantDialog_FocusInEvent_IsBase(true);
        vkassistantdialog->focusInEvent(event);
    } else {
        ((VirtualKAssistantDialog*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KAssistantDialog_OnFocusInEvent(KAssistantDialog* self, intptr_t slot) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setKAssistantDialog_FocusInEvent_Callback(reinterpret_cast<VirtualKAssistantDialog::KAssistantDialog_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAssistantDialog_FocusOutEvent(KAssistantDialog* self, QFocusEvent* event) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->focusOutEvent(event);
    } else {
        ((VirtualKAssistantDialog*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void KAssistantDialog_QBaseFocusOutEvent(KAssistantDialog* self, QFocusEvent* event) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setKAssistantDialog_FocusOutEvent_IsBase(true);
        vkassistantdialog->focusOutEvent(event);
    } else {
        ((VirtualKAssistantDialog*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KAssistantDialog_OnFocusOutEvent(KAssistantDialog* self, intptr_t slot) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setKAssistantDialog_FocusOutEvent_Callback(reinterpret_cast<VirtualKAssistantDialog::KAssistantDialog_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAssistantDialog_EnterEvent(KAssistantDialog* self, QEnterEvent* event) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->enterEvent(event);
    } else {
        ((VirtualKAssistantDialog*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void KAssistantDialog_QBaseEnterEvent(KAssistantDialog* self, QEnterEvent* event) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setKAssistantDialog_EnterEvent_IsBase(true);
        vkassistantdialog->enterEvent(event);
    } else {
        ((VirtualKAssistantDialog*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KAssistantDialog_OnEnterEvent(KAssistantDialog* self, intptr_t slot) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setKAssistantDialog_EnterEvent_Callback(reinterpret_cast<VirtualKAssistantDialog::KAssistantDialog_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAssistantDialog_LeaveEvent(KAssistantDialog* self, QEvent* event) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->leaveEvent(event);
    } else {
        ((VirtualKAssistantDialog*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void KAssistantDialog_QBaseLeaveEvent(KAssistantDialog* self, QEvent* event) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setKAssistantDialog_LeaveEvent_IsBase(true);
        vkassistantdialog->leaveEvent(event);
    } else {
        ((VirtualKAssistantDialog*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KAssistantDialog_OnLeaveEvent(KAssistantDialog* self, intptr_t slot) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setKAssistantDialog_LeaveEvent_Callback(reinterpret_cast<VirtualKAssistantDialog::KAssistantDialog_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAssistantDialog_PaintEvent(KAssistantDialog* self, QPaintEvent* event) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->paintEvent(event);
    } else {
        ((VirtualKAssistantDialog*)self)->paintEvent(event);
    }
}

// Base class handler implementation
void KAssistantDialog_QBasePaintEvent(KAssistantDialog* self, QPaintEvent* event) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setKAssistantDialog_PaintEvent_IsBase(true);
        vkassistantdialog->paintEvent(event);
    } else {
        ((VirtualKAssistantDialog*)self)->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KAssistantDialog_OnPaintEvent(KAssistantDialog* self, intptr_t slot) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setKAssistantDialog_PaintEvent_Callback(reinterpret_cast<VirtualKAssistantDialog::KAssistantDialog_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAssistantDialog_MoveEvent(KAssistantDialog* self, QMoveEvent* event) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->moveEvent(event);
    } else {
        ((VirtualKAssistantDialog*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void KAssistantDialog_QBaseMoveEvent(KAssistantDialog* self, QMoveEvent* event) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setKAssistantDialog_MoveEvent_IsBase(true);
        vkassistantdialog->moveEvent(event);
    } else {
        ((VirtualKAssistantDialog*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KAssistantDialog_OnMoveEvent(KAssistantDialog* self, intptr_t slot) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setKAssistantDialog_MoveEvent_Callback(reinterpret_cast<VirtualKAssistantDialog::KAssistantDialog_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAssistantDialog_TabletEvent(KAssistantDialog* self, QTabletEvent* event) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->tabletEvent(event);
    } else {
        ((VirtualKAssistantDialog*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void KAssistantDialog_QBaseTabletEvent(KAssistantDialog* self, QTabletEvent* event) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setKAssistantDialog_TabletEvent_IsBase(true);
        vkassistantdialog->tabletEvent(event);
    } else {
        ((VirtualKAssistantDialog*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KAssistantDialog_OnTabletEvent(KAssistantDialog* self, intptr_t slot) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setKAssistantDialog_TabletEvent_Callback(reinterpret_cast<VirtualKAssistantDialog::KAssistantDialog_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAssistantDialog_ActionEvent(KAssistantDialog* self, QActionEvent* event) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->actionEvent(event);
    } else {
        ((VirtualKAssistantDialog*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void KAssistantDialog_QBaseActionEvent(KAssistantDialog* self, QActionEvent* event) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setKAssistantDialog_ActionEvent_IsBase(true);
        vkassistantdialog->actionEvent(event);
    } else {
        ((VirtualKAssistantDialog*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KAssistantDialog_OnActionEvent(KAssistantDialog* self, intptr_t slot) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setKAssistantDialog_ActionEvent_Callback(reinterpret_cast<VirtualKAssistantDialog::KAssistantDialog_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAssistantDialog_DragEnterEvent(KAssistantDialog* self, QDragEnterEvent* event) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->dragEnterEvent(event);
    } else {
        ((VirtualKAssistantDialog*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void KAssistantDialog_QBaseDragEnterEvent(KAssistantDialog* self, QDragEnterEvent* event) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setKAssistantDialog_DragEnterEvent_IsBase(true);
        vkassistantdialog->dragEnterEvent(event);
    } else {
        ((VirtualKAssistantDialog*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KAssistantDialog_OnDragEnterEvent(KAssistantDialog* self, intptr_t slot) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setKAssistantDialog_DragEnterEvent_Callback(reinterpret_cast<VirtualKAssistantDialog::KAssistantDialog_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAssistantDialog_DragMoveEvent(KAssistantDialog* self, QDragMoveEvent* event) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->dragMoveEvent(event);
    } else {
        ((VirtualKAssistantDialog*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void KAssistantDialog_QBaseDragMoveEvent(KAssistantDialog* self, QDragMoveEvent* event) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setKAssistantDialog_DragMoveEvent_IsBase(true);
        vkassistantdialog->dragMoveEvent(event);
    } else {
        ((VirtualKAssistantDialog*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KAssistantDialog_OnDragMoveEvent(KAssistantDialog* self, intptr_t slot) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setKAssistantDialog_DragMoveEvent_Callback(reinterpret_cast<VirtualKAssistantDialog::KAssistantDialog_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAssistantDialog_DragLeaveEvent(KAssistantDialog* self, QDragLeaveEvent* event) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->dragLeaveEvent(event);
    } else {
        ((VirtualKAssistantDialog*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void KAssistantDialog_QBaseDragLeaveEvent(KAssistantDialog* self, QDragLeaveEvent* event) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setKAssistantDialog_DragLeaveEvent_IsBase(true);
        vkassistantdialog->dragLeaveEvent(event);
    } else {
        ((VirtualKAssistantDialog*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KAssistantDialog_OnDragLeaveEvent(KAssistantDialog* self, intptr_t slot) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setKAssistantDialog_DragLeaveEvent_Callback(reinterpret_cast<VirtualKAssistantDialog::KAssistantDialog_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAssistantDialog_DropEvent(KAssistantDialog* self, QDropEvent* event) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->dropEvent(event);
    } else {
        ((VirtualKAssistantDialog*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void KAssistantDialog_QBaseDropEvent(KAssistantDialog* self, QDropEvent* event) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setKAssistantDialog_DropEvent_IsBase(true);
        vkassistantdialog->dropEvent(event);
    } else {
        ((VirtualKAssistantDialog*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KAssistantDialog_OnDropEvent(KAssistantDialog* self, intptr_t slot) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setKAssistantDialog_DropEvent_Callback(reinterpret_cast<VirtualKAssistantDialog::KAssistantDialog_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAssistantDialog_HideEvent(KAssistantDialog* self, QHideEvent* event) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->hideEvent(event);
    } else {
        ((VirtualKAssistantDialog*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void KAssistantDialog_QBaseHideEvent(KAssistantDialog* self, QHideEvent* event) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setKAssistantDialog_HideEvent_IsBase(true);
        vkassistantdialog->hideEvent(event);
    } else {
        ((VirtualKAssistantDialog*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KAssistantDialog_OnHideEvent(KAssistantDialog* self, intptr_t slot) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setKAssistantDialog_HideEvent_Callback(reinterpret_cast<VirtualKAssistantDialog::KAssistantDialog_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KAssistantDialog_NativeEvent(KAssistantDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        return vkassistantdialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKAssistantDialog*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool KAssistantDialog_QBaseNativeEvent(KAssistantDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setKAssistantDialog_NativeEvent_IsBase(true);
        return vkassistantdialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKAssistantDialog*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void KAssistantDialog_OnNativeEvent(KAssistantDialog* self, intptr_t slot) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setKAssistantDialog_NativeEvent_Callback(reinterpret_cast<VirtualKAssistantDialog::KAssistantDialog_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAssistantDialog_ChangeEvent(KAssistantDialog* self, QEvent* param1) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->changeEvent(param1);
    } else {
        ((VirtualKAssistantDialog*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void KAssistantDialog_QBaseChangeEvent(KAssistantDialog* self, QEvent* param1) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setKAssistantDialog_ChangeEvent_IsBase(true);
        vkassistantdialog->changeEvent(param1);
    } else {
        ((VirtualKAssistantDialog*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KAssistantDialog_OnChangeEvent(KAssistantDialog* self, intptr_t slot) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setKAssistantDialog_ChangeEvent_Callback(reinterpret_cast<VirtualKAssistantDialog::KAssistantDialog_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int KAssistantDialog_Metric(const KAssistantDialog* self, int param1) {
    auto* vkassistantdialog = const_cast<VirtualKAssistantDialog*>(dynamic_cast<const VirtualKAssistantDialog*>(self));
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        return vkassistantdialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKAssistantDialog*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int KAssistantDialog_QBaseMetric(const KAssistantDialog* self, int param1) {
    auto* vkassistantdialog = const_cast<VirtualKAssistantDialog*>(dynamic_cast<const VirtualKAssistantDialog*>(self));
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setKAssistantDialog_Metric_IsBase(true);
        return vkassistantdialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKAssistantDialog*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KAssistantDialog_OnMetric(const KAssistantDialog* self, intptr_t slot) {
    auto* vkassistantdialog = const_cast<VirtualKAssistantDialog*>(dynamic_cast<const VirtualKAssistantDialog*>(self));
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setKAssistantDialog_Metric_Callback(reinterpret_cast<VirtualKAssistantDialog::KAssistantDialog_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void KAssistantDialog_InitPainter(const KAssistantDialog* self, QPainter* painter) {
    auto* vkassistantdialog = const_cast<VirtualKAssistantDialog*>(dynamic_cast<const VirtualKAssistantDialog*>(self));
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->initPainter(painter);
    } else {
        ((VirtualKAssistantDialog*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void KAssistantDialog_QBaseInitPainter(const KAssistantDialog* self, QPainter* painter) {
    auto* vkassistantdialog = const_cast<VirtualKAssistantDialog*>(dynamic_cast<const VirtualKAssistantDialog*>(self));
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setKAssistantDialog_InitPainter_IsBase(true);
        vkassistantdialog->initPainter(painter);
    } else {
        ((VirtualKAssistantDialog*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void KAssistantDialog_OnInitPainter(const KAssistantDialog* self, intptr_t slot) {
    auto* vkassistantdialog = const_cast<VirtualKAssistantDialog*>(dynamic_cast<const VirtualKAssistantDialog*>(self));
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setKAssistantDialog_InitPainter_Callback(reinterpret_cast<VirtualKAssistantDialog::KAssistantDialog_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* KAssistantDialog_Redirected(const KAssistantDialog* self, QPoint* offset) {
    auto* vkassistantdialog = const_cast<VirtualKAssistantDialog*>(dynamic_cast<const VirtualKAssistantDialog*>(self));
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        return vkassistantdialog->redirected(offset);
    } else {
        return ((VirtualKAssistantDialog*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* KAssistantDialog_QBaseRedirected(const KAssistantDialog* self, QPoint* offset) {
    auto* vkassistantdialog = const_cast<VirtualKAssistantDialog*>(dynamic_cast<const VirtualKAssistantDialog*>(self));
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setKAssistantDialog_Redirected_IsBase(true);
        return vkassistantdialog->redirected(offset);
    } else {
        return ((VirtualKAssistantDialog*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void KAssistantDialog_OnRedirected(const KAssistantDialog* self, intptr_t slot) {
    auto* vkassistantdialog = const_cast<VirtualKAssistantDialog*>(dynamic_cast<const VirtualKAssistantDialog*>(self));
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setKAssistantDialog_Redirected_Callback(reinterpret_cast<VirtualKAssistantDialog::KAssistantDialog_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* KAssistantDialog_SharedPainter(const KAssistantDialog* self) {
    auto* vkassistantdialog = const_cast<VirtualKAssistantDialog*>(dynamic_cast<const VirtualKAssistantDialog*>(self));
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        return vkassistantdialog->sharedPainter();
    } else {
        return ((VirtualKAssistantDialog*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* KAssistantDialog_QBaseSharedPainter(const KAssistantDialog* self) {
    auto* vkassistantdialog = const_cast<VirtualKAssistantDialog*>(dynamic_cast<const VirtualKAssistantDialog*>(self));
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setKAssistantDialog_SharedPainter_IsBase(true);
        return vkassistantdialog->sharedPainter();
    } else {
        return ((VirtualKAssistantDialog*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void KAssistantDialog_OnSharedPainter(const KAssistantDialog* self, intptr_t slot) {
    auto* vkassistantdialog = const_cast<VirtualKAssistantDialog*>(dynamic_cast<const VirtualKAssistantDialog*>(self));
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setKAssistantDialog_SharedPainter_Callback(reinterpret_cast<VirtualKAssistantDialog::KAssistantDialog_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void KAssistantDialog_InputMethodEvent(KAssistantDialog* self, QInputMethodEvent* param1) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->inputMethodEvent(param1);
    } else {
        ((VirtualKAssistantDialog*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void KAssistantDialog_QBaseInputMethodEvent(KAssistantDialog* self, QInputMethodEvent* param1) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setKAssistantDialog_InputMethodEvent_IsBase(true);
        vkassistantdialog->inputMethodEvent(param1);
    } else {
        ((VirtualKAssistantDialog*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KAssistantDialog_OnInputMethodEvent(KAssistantDialog* self, intptr_t slot) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setKAssistantDialog_InputMethodEvent_Callback(reinterpret_cast<VirtualKAssistantDialog::KAssistantDialog_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* KAssistantDialog_InputMethodQuery(const KAssistantDialog* self, int param1) {
    auto* vkassistantdialog = const_cast<VirtualKAssistantDialog*>(dynamic_cast<const VirtualKAssistantDialog*>(self));
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        return new QVariant(vkassistantdialog->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKAssistantDialog*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* KAssistantDialog_QBaseInputMethodQuery(const KAssistantDialog* self, int param1) {
    auto* vkassistantdialog = const_cast<VirtualKAssistantDialog*>(dynamic_cast<const VirtualKAssistantDialog*>(self));
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setKAssistantDialog_InputMethodQuery_IsBase(true);
        return new QVariant(vkassistantdialog->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKAssistantDialog*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void KAssistantDialog_OnInputMethodQuery(const KAssistantDialog* self, intptr_t slot) {
    auto* vkassistantdialog = const_cast<VirtualKAssistantDialog*>(dynamic_cast<const VirtualKAssistantDialog*>(self));
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setKAssistantDialog_InputMethodQuery_Callback(reinterpret_cast<VirtualKAssistantDialog::KAssistantDialog_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool KAssistantDialog_FocusNextPrevChild(KAssistantDialog* self, bool next) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        return vkassistantdialog->focusNextPrevChild(next);
    } else {
        return ((VirtualKAssistantDialog*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool KAssistantDialog_QBaseFocusNextPrevChild(KAssistantDialog* self, bool next) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setKAssistantDialog_FocusNextPrevChild_IsBase(true);
        return vkassistantdialog->focusNextPrevChild(next);
    } else {
        return ((VirtualKAssistantDialog*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void KAssistantDialog_OnFocusNextPrevChild(KAssistantDialog* self, intptr_t slot) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setKAssistantDialog_FocusNextPrevChild_Callback(reinterpret_cast<VirtualKAssistantDialog::KAssistantDialog_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
void KAssistantDialog_TimerEvent(KAssistantDialog* self, QTimerEvent* event) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->timerEvent(event);
    } else {
        ((VirtualKAssistantDialog*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KAssistantDialog_QBaseTimerEvent(KAssistantDialog* self, QTimerEvent* event) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setKAssistantDialog_TimerEvent_IsBase(true);
        vkassistantdialog->timerEvent(event);
    } else {
        ((VirtualKAssistantDialog*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KAssistantDialog_OnTimerEvent(KAssistantDialog* self, intptr_t slot) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setKAssistantDialog_TimerEvent_Callback(reinterpret_cast<VirtualKAssistantDialog::KAssistantDialog_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAssistantDialog_ChildEvent(KAssistantDialog* self, QChildEvent* event) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->childEvent(event);
    } else {
        ((VirtualKAssistantDialog*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KAssistantDialog_QBaseChildEvent(KAssistantDialog* self, QChildEvent* event) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setKAssistantDialog_ChildEvent_IsBase(true);
        vkassistantdialog->childEvent(event);
    } else {
        ((VirtualKAssistantDialog*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KAssistantDialog_OnChildEvent(KAssistantDialog* self, intptr_t slot) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setKAssistantDialog_ChildEvent_Callback(reinterpret_cast<VirtualKAssistantDialog::KAssistantDialog_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAssistantDialog_CustomEvent(KAssistantDialog* self, QEvent* event) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->customEvent(event);
    } else {
        ((VirtualKAssistantDialog*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KAssistantDialog_QBaseCustomEvent(KAssistantDialog* self, QEvent* event) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setKAssistantDialog_CustomEvent_IsBase(true);
        vkassistantdialog->customEvent(event);
    } else {
        ((VirtualKAssistantDialog*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KAssistantDialog_OnCustomEvent(KAssistantDialog* self, intptr_t slot) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setKAssistantDialog_CustomEvent_Callback(reinterpret_cast<VirtualKAssistantDialog::KAssistantDialog_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAssistantDialog_ConnectNotify(KAssistantDialog* self, const QMetaMethod* signal) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->connectNotify(*signal);
    } else {
        ((VirtualKAssistantDialog*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KAssistantDialog_QBaseConnectNotify(KAssistantDialog* self, const QMetaMethod* signal) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setKAssistantDialog_ConnectNotify_IsBase(true);
        vkassistantdialog->connectNotify(*signal);
    } else {
        ((VirtualKAssistantDialog*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KAssistantDialog_OnConnectNotify(KAssistantDialog* self, intptr_t slot) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setKAssistantDialog_ConnectNotify_Callback(reinterpret_cast<VirtualKAssistantDialog::KAssistantDialog_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KAssistantDialog_DisconnectNotify(KAssistantDialog* self, const QMetaMethod* signal) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->disconnectNotify(*signal);
    } else {
        ((VirtualKAssistantDialog*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KAssistantDialog_QBaseDisconnectNotify(KAssistantDialog* self, const QMetaMethod* signal) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setKAssistantDialog_DisconnectNotify_IsBase(true);
        vkassistantdialog->disconnectNotify(*signal);
    } else {
        ((VirtualKAssistantDialog*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KAssistantDialog_OnDisconnectNotify(KAssistantDialog* self, intptr_t slot) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setKAssistantDialog_DisconnectNotify_Callback(reinterpret_cast<VirtualKAssistantDialog::KAssistantDialog_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
KPageWidget* KAssistantDialog_PageWidget(KAssistantDialog* self) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        return vkassistantdialog->pageWidget();
    } else {
        return ((VirtualKAssistantDialog*)self)->pageWidget();
    }
}

// Base class handler implementation
KPageWidget* KAssistantDialog_QBasePageWidget(KAssistantDialog* self) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setKAssistantDialog_PageWidget_IsBase(true);
        return vkassistantdialog->pageWidget();
    } else {
        return ((VirtualKAssistantDialog*)self)->pageWidget();
    }
}

// Auxiliary method to allow providing re-implementation
void KAssistantDialog_OnPageWidget(KAssistantDialog* self, intptr_t slot) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setKAssistantDialog_PageWidget_Callback(reinterpret_cast<VirtualKAssistantDialog::KAssistantDialog_PageWidget_Callback>(slot));
    }
}

// Derived class handler implementation
void KAssistantDialog_SetPageWidget(KAssistantDialog* self, KPageWidget* widget) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setPageWidget(widget);
    } else {
        ((VirtualKAssistantDialog*)self)->setPageWidget(widget);
    }
}

// Base class handler implementation
void KAssistantDialog_QBaseSetPageWidget(KAssistantDialog* self, KPageWidget* widget) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setKAssistantDialog_SetPageWidget_IsBase(true);
        vkassistantdialog->setPageWidget(widget);
    } else {
        ((VirtualKAssistantDialog*)self)->setPageWidget(widget);
    }
}

// Auxiliary method to allow providing re-implementation
void KAssistantDialog_OnSetPageWidget(KAssistantDialog* self, intptr_t slot) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setKAssistantDialog_SetPageWidget_Callback(reinterpret_cast<VirtualKAssistantDialog::KAssistantDialog_SetPageWidget_Callback>(slot));
    }
}

// Derived class handler implementation
QDialogButtonBox* KAssistantDialog_ButtonBox(KAssistantDialog* self) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        return vkassistantdialog->buttonBox();
    } else {
        return ((VirtualKAssistantDialog*)self)->buttonBox();
    }
}

// Base class handler implementation
QDialogButtonBox* KAssistantDialog_QBaseButtonBox(KAssistantDialog* self) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setKAssistantDialog_ButtonBox_IsBase(true);
        return vkassistantdialog->buttonBox();
    } else {
        return ((VirtualKAssistantDialog*)self)->buttonBox();
    }
}

// Auxiliary method to allow providing re-implementation
void KAssistantDialog_OnButtonBox(KAssistantDialog* self, intptr_t slot) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setKAssistantDialog_ButtonBox_Callback(reinterpret_cast<VirtualKAssistantDialog::KAssistantDialog_ButtonBox_Callback>(slot));
    }
}

// Derived class handler implementation
void KAssistantDialog_SetButtonBox(KAssistantDialog* self, QDialogButtonBox* box) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setButtonBox(box);
    } else {
        ((VirtualKAssistantDialog*)self)->setButtonBox(box);
    }
}

// Base class handler implementation
void KAssistantDialog_QBaseSetButtonBox(KAssistantDialog* self, QDialogButtonBox* box) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setKAssistantDialog_SetButtonBox_IsBase(true);
        vkassistantdialog->setButtonBox(box);
    } else {
        ((VirtualKAssistantDialog*)self)->setButtonBox(box);
    }
}

// Auxiliary method to allow providing re-implementation
void KAssistantDialog_OnSetButtonBox(KAssistantDialog* self, intptr_t slot) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setKAssistantDialog_SetButtonBox_Callback(reinterpret_cast<VirtualKAssistantDialog::KAssistantDialog_SetButtonBox_Callback>(slot));
    }
}

// Derived class handler implementation
void KAssistantDialog_AdjustPosition(KAssistantDialog* self, QWidget* param1) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->adjustPosition(param1);
    } else {
        ((VirtualKAssistantDialog*)self)->adjustPosition(param1);
    }
}

// Base class handler implementation
void KAssistantDialog_QBaseAdjustPosition(KAssistantDialog* self, QWidget* param1) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setKAssistantDialog_AdjustPosition_IsBase(true);
        vkassistantdialog->adjustPosition(param1);
    } else {
        ((VirtualKAssistantDialog*)self)->adjustPosition(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KAssistantDialog_OnAdjustPosition(KAssistantDialog* self, intptr_t slot) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setKAssistantDialog_AdjustPosition_Callback(reinterpret_cast<VirtualKAssistantDialog::KAssistantDialog_AdjustPosition_Callback>(slot));
    }
}

// Derived class handler implementation
void KAssistantDialog_UpdateMicroFocus(KAssistantDialog* self) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->updateMicroFocus();
    } else {
        ((VirtualKAssistantDialog*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void KAssistantDialog_QBaseUpdateMicroFocus(KAssistantDialog* self) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setKAssistantDialog_UpdateMicroFocus_IsBase(true);
        vkassistantdialog->updateMicroFocus();
    } else {
        ((VirtualKAssistantDialog*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void KAssistantDialog_OnUpdateMicroFocus(KAssistantDialog* self, intptr_t slot) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setKAssistantDialog_UpdateMicroFocus_Callback(reinterpret_cast<VirtualKAssistantDialog::KAssistantDialog_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void KAssistantDialog_Create(KAssistantDialog* self) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->create();
    } else {
        ((VirtualKAssistantDialog*)self)->create();
    }
}

// Base class handler implementation
void KAssistantDialog_QBaseCreate(KAssistantDialog* self) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setKAssistantDialog_Create_IsBase(true);
        vkassistantdialog->create();
    } else {
        ((VirtualKAssistantDialog*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void KAssistantDialog_OnCreate(KAssistantDialog* self, intptr_t slot) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setKAssistantDialog_Create_Callback(reinterpret_cast<VirtualKAssistantDialog::KAssistantDialog_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void KAssistantDialog_Destroy(KAssistantDialog* self) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->destroy();
    } else {
        ((VirtualKAssistantDialog*)self)->destroy();
    }
}

// Base class handler implementation
void KAssistantDialog_QBaseDestroy(KAssistantDialog* self) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setKAssistantDialog_Destroy_IsBase(true);
        vkassistantdialog->destroy();
    } else {
        ((VirtualKAssistantDialog*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void KAssistantDialog_OnDestroy(KAssistantDialog* self, intptr_t slot) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setKAssistantDialog_Destroy_Callback(reinterpret_cast<VirtualKAssistantDialog::KAssistantDialog_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool KAssistantDialog_FocusNextChild(KAssistantDialog* self) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        return vkassistantdialog->focusNextChild();
    } else {
        return ((VirtualKAssistantDialog*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool KAssistantDialog_QBaseFocusNextChild(KAssistantDialog* self) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setKAssistantDialog_FocusNextChild_IsBase(true);
        return vkassistantdialog->focusNextChild();
    } else {
        return ((VirtualKAssistantDialog*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KAssistantDialog_OnFocusNextChild(KAssistantDialog* self, intptr_t slot) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setKAssistantDialog_FocusNextChild_Callback(reinterpret_cast<VirtualKAssistantDialog::KAssistantDialog_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KAssistantDialog_FocusPreviousChild(KAssistantDialog* self) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        return vkassistantdialog->focusPreviousChild();
    } else {
        return ((VirtualKAssistantDialog*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool KAssistantDialog_QBaseFocusPreviousChild(KAssistantDialog* self) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setKAssistantDialog_FocusPreviousChild_IsBase(true);
        return vkassistantdialog->focusPreviousChild();
    } else {
        return ((VirtualKAssistantDialog*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KAssistantDialog_OnFocusPreviousChild(KAssistantDialog* self, intptr_t slot) {
    auto* vkassistantdialog = dynamic_cast<VirtualKAssistantDialog*>(self);
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setKAssistantDialog_FocusPreviousChild_Callback(reinterpret_cast<VirtualKAssistantDialog::KAssistantDialog_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KAssistantDialog_Sender(const KAssistantDialog* self) {
    auto* vkassistantdialog = const_cast<VirtualKAssistantDialog*>(dynamic_cast<const VirtualKAssistantDialog*>(self));
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        return vkassistantdialog->sender();
    } else {
        return ((VirtualKAssistantDialog*)self)->sender();
    }
}

// Base class handler implementation
QObject* KAssistantDialog_QBaseSender(const KAssistantDialog* self) {
    auto* vkassistantdialog = const_cast<VirtualKAssistantDialog*>(dynamic_cast<const VirtualKAssistantDialog*>(self));
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setKAssistantDialog_Sender_IsBase(true);
        return vkassistantdialog->sender();
    } else {
        return ((VirtualKAssistantDialog*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KAssistantDialog_OnSender(const KAssistantDialog* self, intptr_t slot) {
    auto* vkassistantdialog = const_cast<VirtualKAssistantDialog*>(dynamic_cast<const VirtualKAssistantDialog*>(self));
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setKAssistantDialog_Sender_Callback(reinterpret_cast<VirtualKAssistantDialog::KAssistantDialog_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KAssistantDialog_SenderSignalIndex(const KAssistantDialog* self) {
    auto* vkassistantdialog = const_cast<VirtualKAssistantDialog*>(dynamic_cast<const VirtualKAssistantDialog*>(self));
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        return vkassistantdialog->senderSignalIndex();
    } else {
        return ((VirtualKAssistantDialog*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KAssistantDialog_QBaseSenderSignalIndex(const KAssistantDialog* self) {
    auto* vkassistantdialog = const_cast<VirtualKAssistantDialog*>(dynamic_cast<const VirtualKAssistantDialog*>(self));
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setKAssistantDialog_SenderSignalIndex_IsBase(true);
        return vkassistantdialog->senderSignalIndex();
    } else {
        return ((VirtualKAssistantDialog*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KAssistantDialog_OnSenderSignalIndex(const KAssistantDialog* self, intptr_t slot) {
    auto* vkassistantdialog = const_cast<VirtualKAssistantDialog*>(dynamic_cast<const VirtualKAssistantDialog*>(self));
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setKAssistantDialog_SenderSignalIndex_Callback(reinterpret_cast<VirtualKAssistantDialog::KAssistantDialog_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KAssistantDialog_Receivers(const KAssistantDialog* self, const char* signal) {
    auto* vkassistantdialog = const_cast<VirtualKAssistantDialog*>(dynamic_cast<const VirtualKAssistantDialog*>(self));
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        return vkassistantdialog->receivers(signal);
    } else {
        return ((VirtualKAssistantDialog*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KAssistantDialog_QBaseReceivers(const KAssistantDialog* self, const char* signal) {
    auto* vkassistantdialog = const_cast<VirtualKAssistantDialog*>(dynamic_cast<const VirtualKAssistantDialog*>(self));
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setKAssistantDialog_Receivers_IsBase(true);
        return vkassistantdialog->receivers(signal);
    } else {
        return ((VirtualKAssistantDialog*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KAssistantDialog_OnReceivers(const KAssistantDialog* self, intptr_t slot) {
    auto* vkassistantdialog = const_cast<VirtualKAssistantDialog*>(dynamic_cast<const VirtualKAssistantDialog*>(self));
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setKAssistantDialog_Receivers_Callback(reinterpret_cast<VirtualKAssistantDialog::KAssistantDialog_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KAssistantDialog_IsSignalConnected(const KAssistantDialog* self, const QMetaMethod* signal) {
    auto* vkassistantdialog = const_cast<VirtualKAssistantDialog*>(dynamic_cast<const VirtualKAssistantDialog*>(self));
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        return vkassistantdialog->isSignalConnected(*signal);
    } else {
        return ((VirtualKAssistantDialog*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KAssistantDialog_QBaseIsSignalConnected(const KAssistantDialog* self, const QMetaMethod* signal) {
    auto* vkassistantdialog = const_cast<VirtualKAssistantDialog*>(dynamic_cast<const VirtualKAssistantDialog*>(self));
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setKAssistantDialog_IsSignalConnected_IsBase(true);
        return vkassistantdialog->isSignalConnected(*signal);
    } else {
        return ((VirtualKAssistantDialog*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KAssistantDialog_OnIsSignalConnected(const KAssistantDialog* self, intptr_t slot) {
    auto* vkassistantdialog = const_cast<VirtualKAssistantDialog*>(dynamic_cast<const VirtualKAssistantDialog*>(self));
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setKAssistantDialog_IsSignalConnected_Callback(reinterpret_cast<VirtualKAssistantDialog::KAssistantDialog_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double KAssistantDialog_GetDecodedMetricF(const KAssistantDialog* self, int metricA, int metricB) {
    auto* vkassistantdialog = const_cast<VirtualKAssistantDialog*>(dynamic_cast<const VirtualKAssistantDialog*>(self));
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        return vkassistantdialog->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKAssistantDialog*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double KAssistantDialog_QBaseGetDecodedMetricF(const KAssistantDialog* self, int metricA, int metricB) {
    auto* vkassistantdialog = const_cast<VirtualKAssistantDialog*>(dynamic_cast<const VirtualKAssistantDialog*>(self));
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setKAssistantDialog_GetDecodedMetricF_IsBase(true);
        return vkassistantdialog->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKAssistantDialog*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void KAssistantDialog_OnGetDecodedMetricF(const KAssistantDialog* self, intptr_t slot) {
    auto* vkassistantdialog = const_cast<VirtualKAssistantDialog*>(dynamic_cast<const VirtualKAssistantDialog*>(self));
    if (vkassistantdialog && vkassistantdialog->isVirtualKAssistantDialog) {
        vkassistantdialog->setKAssistantDialog_GetDecodedMetricF_Callback(reinterpret_cast<VirtualKAssistantDialog::KAssistantDialog_GetDecodedMetricF_Callback>(slot));
    }
}

void KAssistantDialog_Delete(KAssistantDialog* self) {
    delete self;
}
