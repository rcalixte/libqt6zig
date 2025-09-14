#include <KUrlRequester>
#include <KUrlRequesterDialog>
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
#include <QByteArray>
#include <cstring>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QUrl>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <kurlrequesterdialog.h>
#include "libkurlrequesterdialog.h"
#include "libkurlrequesterdialog.hxx"

KUrlRequesterDialog* KUrlRequesterDialog_new(const QUrl* url) {
    return new VirtualKUrlRequesterDialog(*url);
}

KUrlRequesterDialog* KUrlRequesterDialog_new2(const QUrl* url, const libqt_string text, QWidget* parent) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualKUrlRequesterDialog(*url, text_QString, parent);
}

KUrlRequesterDialog* KUrlRequesterDialog_new3(const QUrl* url, QWidget* parent) {
    return new VirtualKUrlRequesterDialog(*url, parent);
}

QMetaObject* KUrlRequesterDialog_MetaObject(const KUrlRequesterDialog* self) {
    return (QMetaObject*)self->metaObject();
}

void* KUrlRequesterDialog_Metacast(KUrlRequesterDialog* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KUrlRequesterDialog_Metacall(KUrlRequesterDialog* self, int param1, int param2, void** param3) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKUrlRequesterDialog*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KUrlRequesterDialog_Tr(const char* s) {
    QString _ret = KUrlRequesterDialog::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QUrl* KUrlRequesterDialog_SelectedUrl(const KUrlRequesterDialog* self) {
    return new QUrl(self->selectedUrl());
}

QUrl* KUrlRequesterDialog_GetUrl() {
    return new QUrl(KUrlRequesterDialog::getUrl());
}

KUrlRequester* KUrlRequesterDialog_UrlRequester(KUrlRequesterDialog* self) {
    return self->urlRequester();
}

libqt_string KUrlRequesterDialog_Tr2(const char* s, const char* c) {
    QString _ret = KUrlRequesterDialog::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KUrlRequesterDialog_Tr3(const char* s, const char* c, int n) {
    QString _ret = KUrlRequesterDialog::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QUrl* KUrlRequesterDialog_GetUrl1(const QUrl* url) {
    return new QUrl(KUrlRequesterDialog::getUrl(*url));
}

QUrl* KUrlRequesterDialog_GetUrl2(const QUrl* url, QWidget* parent) {
    return new QUrl(KUrlRequesterDialog::getUrl(*url, parent));
}

QUrl* KUrlRequesterDialog_GetUrl3(const QUrl* url, QWidget* parent, const libqt_string title) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    return new QUrl(KUrlRequesterDialog::getUrl(*url, parent, title_QString));
}

// Base class handler implementation
int KUrlRequesterDialog_QBaseMetacall(KUrlRequesterDialog* self, int param1, int param2, void** param3) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->setKUrlRequesterDialog_Metacall_IsBase(true);
        return vkurlrequesterdialog->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KUrlRequesterDialog::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlRequesterDialog_OnMetacall(KUrlRequesterDialog* self, intptr_t slot) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->setKUrlRequesterDialog_Metacall_Callback(reinterpret_cast<VirtualKUrlRequesterDialog::KUrlRequesterDialog_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlRequesterDialog_SetVisible(KUrlRequesterDialog* self, bool visible) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->setVisible(visible);
    } else {
        self->KUrlRequesterDialog::setVisible(visible);
    }
}

// Base class handler implementation
void KUrlRequesterDialog_QBaseSetVisible(KUrlRequesterDialog* self, bool visible) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->setKUrlRequesterDialog_SetVisible_IsBase(true);
        vkurlrequesterdialog->setVisible(visible);
    } else {
        self->KUrlRequesterDialog::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlRequesterDialog_OnSetVisible(KUrlRequesterDialog* self, intptr_t slot) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->setKUrlRequesterDialog_SetVisible_Callback(reinterpret_cast<VirtualKUrlRequesterDialog::KUrlRequesterDialog_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KUrlRequesterDialog_SizeHint(const KUrlRequesterDialog* self) {
    auto* vkurlrequesterdialog = const_cast<VirtualKUrlRequesterDialog*>(dynamic_cast<const VirtualKUrlRequesterDialog*>(self));
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        return new QSize(vkurlrequesterdialog->sizeHint());
    } else {
        return new QSize(((VirtualKUrlRequesterDialog*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* KUrlRequesterDialog_QBaseSizeHint(const KUrlRequesterDialog* self) {
    auto* vkurlrequesterdialog = const_cast<VirtualKUrlRequesterDialog*>(dynamic_cast<const VirtualKUrlRequesterDialog*>(self));
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->setKUrlRequesterDialog_SizeHint_IsBase(true);
        return new QSize(vkurlrequesterdialog->sizeHint());
    } else {
        return new QSize(((VirtualKUrlRequesterDialog*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlRequesterDialog_OnSizeHint(const KUrlRequesterDialog* self, intptr_t slot) {
    auto* vkurlrequesterdialog = const_cast<VirtualKUrlRequesterDialog*>(dynamic_cast<const VirtualKUrlRequesterDialog*>(self));
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->setKUrlRequesterDialog_SizeHint_Callback(reinterpret_cast<VirtualKUrlRequesterDialog::KUrlRequesterDialog_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KUrlRequesterDialog_MinimumSizeHint(const KUrlRequesterDialog* self) {
    auto* vkurlrequesterdialog = const_cast<VirtualKUrlRequesterDialog*>(dynamic_cast<const VirtualKUrlRequesterDialog*>(self));
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        return new QSize(vkurlrequesterdialog->minimumSizeHint());
    } else {
        return new QSize(((VirtualKUrlRequesterDialog*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* KUrlRequesterDialog_QBaseMinimumSizeHint(const KUrlRequesterDialog* self) {
    auto* vkurlrequesterdialog = const_cast<VirtualKUrlRequesterDialog*>(dynamic_cast<const VirtualKUrlRequesterDialog*>(self));
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->setKUrlRequesterDialog_MinimumSizeHint_IsBase(true);
        return new QSize(vkurlrequesterdialog->minimumSizeHint());
    } else {
        return new QSize(((VirtualKUrlRequesterDialog*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlRequesterDialog_OnMinimumSizeHint(const KUrlRequesterDialog* self, intptr_t slot) {
    auto* vkurlrequesterdialog = const_cast<VirtualKUrlRequesterDialog*>(dynamic_cast<const VirtualKUrlRequesterDialog*>(self));
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->setKUrlRequesterDialog_MinimumSizeHint_Callback(reinterpret_cast<VirtualKUrlRequesterDialog::KUrlRequesterDialog_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlRequesterDialog_Open(KUrlRequesterDialog* self) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->open();
    } else {
        self->KUrlRequesterDialog::open();
    }
}

// Base class handler implementation
void KUrlRequesterDialog_QBaseOpen(KUrlRequesterDialog* self) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->setKUrlRequesterDialog_Open_IsBase(true);
        vkurlrequesterdialog->open();
    } else {
        self->KUrlRequesterDialog::open();
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlRequesterDialog_OnOpen(KUrlRequesterDialog* self, intptr_t slot) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->setKUrlRequesterDialog_Open_Callback(reinterpret_cast<VirtualKUrlRequesterDialog::KUrlRequesterDialog_Open_Callback>(slot));
    }
}

// Derived class handler implementation
int KUrlRequesterDialog_Exec(KUrlRequesterDialog* self) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        return vkurlrequesterdialog->exec();
    } else {
        return self->KUrlRequesterDialog::exec();
    }
}

// Base class handler implementation
int KUrlRequesterDialog_QBaseExec(KUrlRequesterDialog* self) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->setKUrlRequesterDialog_Exec_IsBase(true);
        return vkurlrequesterdialog->exec();
    } else {
        return self->KUrlRequesterDialog::exec();
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlRequesterDialog_OnExec(KUrlRequesterDialog* self, intptr_t slot) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->setKUrlRequesterDialog_Exec_Callback(reinterpret_cast<VirtualKUrlRequesterDialog::KUrlRequesterDialog_Exec_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlRequesterDialog_Done(KUrlRequesterDialog* self, int param1) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->done(static_cast<int>(param1));
    } else {
        self->KUrlRequesterDialog::done(static_cast<int>(param1));
    }
}

// Base class handler implementation
void KUrlRequesterDialog_QBaseDone(KUrlRequesterDialog* self, int param1) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->setKUrlRequesterDialog_Done_IsBase(true);
        vkurlrequesterdialog->done(static_cast<int>(param1));
    } else {
        self->KUrlRequesterDialog::done(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlRequesterDialog_OnDone(KUrlRequesterDialog* self, intptr_t slot) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->setKUrlRequesterDialog_Done_Callback(reinterpret_cast<VirtualKUrlRequesterDialog::KUrlRequesterDialog_Done_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlRequesterDialog_Accept(KUrlRequesterDialog* self) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->accept();
    } else {
        self->KUrlRequesterDialog::accept();
    }
}

// Base class handler implementation
void KUrlRequesterDialog_QBaseAccept(KUrlRequesterDialog* self) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->setKUrlRequesterDialog_Accept_IsBase(true);
        vkurlrequesterdialog->accept();
    } else {
        self->KUrlRequesterDialog::accept();
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlRequesterDialog_OnAccept(KUrlRequesterDialog* self, intptr_t slot) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->setKUrlRequesterDialog_Accept_Callback(reinterpret_cast<VirtualKUrlRequesterDialog::KUrlRequesterDialog_Accept_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlRequesterDialog_Reject(KUrlRequesterDialog* self) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->reject();
    } else {
        self->KUrlRequesterDialog::reject();
    }
}

// Base class handler implementation
void KUrlRequesterDialog_QBaseReject(KUrlRequesterDialog* self) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->setKUrlRequesterDialog_Reject_IsBase(true);
        vkurlrequesterdialog->reject();
    } else {
        self->KUrlRequesterDialog::reject();
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlRequesterDialog_OnReject(KUrlRequesterDialog* self, intptr_t slot) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->setKUrlRequesterDialog_Reject_Callback(reinterpret_cast<VirtualKUrlRequesterDialog::KUrlRequesterDialog_Reject_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlRequesterDialog_KeyPressEvent(KUrlRequesterDialog* self, QKeyEvent* param1) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->keyPressEvent(param1);
    } else {
        ((VirtualKUrlRequesterDialog*)self)->keyPressEvent(param1);
    }
}

// Base class handler implementation
void KUrlRequesterDialog_QBaseKeyPressEvent(KUrlRequesterDialog* self, QKeyEvent* param1) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->setKUrlRequesterDialog_KeyPressEvent_IsBase(true);
        vkurlrequesterdialog->keyPressEvent(param1);
    } else {
        ((VirtualKUrlRequesterDialog*)self)->keyPressEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlRequesterDialog_OnKeyPressEvent(KUrlRequesterDialog* self, intptr_t slot) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->setKUrlRequesterDialog_KeyPressEvent_Callback(reinterpret_cast<VirtualKUrlRequesterDialog::KUrlRequesterDialog_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlRequesterDialog_CloseEvent(KUrlRequesterDialog* self, QCloseEvent* param1) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->closeEvent(param1);
    } else {
        ((VirtualKUrlRequesterDialog*)self)->closeEvent(param1);
    }
}

// Base class handler implementation
void KUrlRequesterDialog_QBaseCloseEvent(KUrlRequesterDialog* self, QCloseEvent* param1) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->setKUrlRequesterDialog_CloseEvent_IsBase(true);
        vkurlrequesterdialog->closeEvent(param1);
    } else {
        ((VirtualKUrlRequesterDialog*)self)->closeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlRequesterDialog_OnCloseEvent(KUrlRequesterDialog* self, intptr_t slot) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->setKUrlRequesterDialog_CloseEvent_Callback(reinterpret_cast<VirtualKUrlRequesterDialog::KUrlRequesterDialog_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlRequesterDialog_ShowEvent(KUrlRequesterDialog* self, QShowEvent* param1) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->showEvent(param1);
    } else {
        ((VirtualKUrlRequesterDialog*)self)->showEvent(param1);
    }
}

// Base class handler implementation
void KUrlRequesterDialog_QBaseShowEvent(KUrlRequesterDialog* self, QShowEvent* param1) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->setKUrlRequesterDialog_ShowEvent_IsBase(true);
        vkurlrequesterdialog->showEvent(param1);
    } else {
        ((VirtualKUrlRequesterDialog*)self)->showEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlRequesterDialog_OnShowEvent(KUrlRequesterDialog* self, intptr_t slot) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->setKUrlRequesterDialog_ShowEvent_Callback(reinterpret_cast<VirtualKUrlRequesterDialog::KUrlRequesterDialog_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlRequesterDialog_ResizeEvent(KUrlRequesterDialog* self, QResizeEvent* param1) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->resizeEvent(param1);
    } else {
        ((VirtualKUrlRequesterDialog*)self)->resizeEvent(param1);
    }
}

// Base class handler implementation
void KUrlRequesterDialog_QBaseResizeEvent(KUrlRequesterDialog* self, QResizeEvent* param1) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->setKUrlRequesterDialog_ResizeEvent_IsBase(true);
        vkurlrequesterdialog->resizeEvent(param1);
    } else {
        ((VirtualKUrlRequesterDialog*)self)->resizeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlRequesterDialog_OnResizeEvent(KUrlRequesterDialog* self, intptr_t slot) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->setKUrlRequesterDialog_ResizeEvent_Callback(reinterpret_cast<VirtualKUrlRequesterDialog::KUrlRequesterDialog_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlRequesterDialog_ContextMenuEvent(KUrlRequesterDialog* self, QContextMenuEvent* param1) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->contextMenuEvent(param1);
    } else {
        ((VirtualKUrlRequesterDialog*)self)->contextMenuEvent(param1);
    }
}

// Base class handler implementation
void KUrlRequesterDialog_QBaseContextMenuEvent(KUrlRequesterDialog* self, QContextMenuEvent* param1) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->setKUrlRequesterDialog_ContextMenuEvent_IsBase(true);
        vkurlrequesterdialog->contextMenuEvent(param1);
    } else {
        ((VirtualKUrlRequesterDialog*)self)->contextMenuEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlRequesterDialog_OnContextMenuEvent(KUrlRequesterDialog* self, intptr_t slot) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->setKUrlRequesterDialog_ContextMenuEvent_Callback(reinterpret_cast<VirtualKUrlRequesterDialog::KUrlRequesterDialog_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KUrlRequesterDialog_EventFilter(KUrlRequesterDialog* self, QObject* param1, QEvent* param2) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        return vkurlrequesterdialog->eventFilter(param1, param2);
    } else {
        return ((VirtualKUrlRequesterDialog*)self)->eventFilter(param1, param2);
    }
}

// Base class handler implementation
bool KUrlRequesterDialog_QBaseEventFilter(KUrlRequesterDialog* self, QObject* param1, QEvent* param2) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->setKUrlRequesterDialog_EventFilter_IsBase(true);
        return vkurlrequesterdialog->eventFilter(param1, param2);
    } else {
        return ((VirtualKUrlRequesterDialog*)self)->eventFilter(param1, param2);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlRequesterDialog_OnEventFilter(KUrlRequesterDialog* self, intptr_t slot) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->setKUrlRequesterDialog_EventFilter_Callback(reinterpret_cast<VirtualKUrlRequesterDialog::KUrlRequesterDialog_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
int KUrlRequesterDialog_DevType(const KUrlRequesterDialog* self) {
    auto* vkurlrequesterdialog = const_cast<VirtualKUrlRequesterDialog*>(dynamic_cast<const VirtualKUrlRequesterDialog*>(self));
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        return vkurlrequesterdialog->devType();
    } else {
        return self->KUrlRequesterDialog::devType();
    }
}

// Base class handler implementation
int KUrlRequesterDialog_QBaseDevType(const KUrlRequesterDialog* self) {
    auto* vkurlrequesterdialog = const_cast<VirtualKUrlRequesterDialog*>(dynamic_cast<const VirtualKUrlRequesterDialog*>(self));
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->setKUrlRequesterDialog_DevType_IsBase(true);
        return vkurlrequesterdialog->devType();
    } else {
        return self->KUrlRequesterDialog::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlRequesterDialog_OnDevType(const KUrlRequesterDialog* self, intptr_t slot) {
    auto* vkurlrequesterdialog = const_cast<VirtualKUrlRequesterDialog*>(dynamic_cast<const VirtualKUrlRequesterDialog*>(self));
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->setKUrlRequesterDialog_DevType_Callback(reinterpret_cast<VirtualKUrlRequesterDialog::KUrlRequesterDialog_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
int KUrlRequesterDialog_HeightForWidth(const KUrlRequesterDialog* self, int param1) {
    auto* vkurlrequesterdialog = const_cast<VirtualKUrlRequesterDialog*>(dynamic_cast<const VirtualKUrlRequesterDialog*>(self));
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        return vkurlrequesterdialog->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KUrlRequesterDialog::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int KUrlRequesterDialog_QBaseHeightForWidth(const KUrlRequesterDialog* self, int param1) {
    auto* vkurlrequesterdialog = const_cast<VirtualKUrlRequesterDialog*>(dynamic_cast<const VirtualKUrlRequesterDialog*>(self));
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->setKUrlRequesterDialog_HeightForWidth_IsBase(true);
        return vkurlrequesterdialog->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KUrlRequesterDialog::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlRequesterDialog_OnHeightForWidth(const KUrlRequesterDialog* self, intptr_t slot) {
    auto* vkurlrequesterdialog = const_cast<VirtualKUrlRequesterDialog*>(dynamic_cast<const VirtualKUrlRequesterDialog*>(self));
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->setKUrlRequesterDialog_HeightForWidth_Callback(reinterpret_cast<VirtualKUrlRequesterDialog::KUrlRequesterDialog_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool KUrlRequesterDialog_HasHeightForWidth(const KUrlRequesterDialog* self) {
    auto* vkurlrequesterdialog = const_cast<VirtualKUrlRequesterDialog*>(dynamic_cast<const VirtualKUrlRequesterDialog*>(self));
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        return vkurlrequesterdialog->hasHeightForWidth();
    } else {
        return self->KUrlRequesterDialog::hasHeightForWidth();
    }
}

// Base class handler implementation
bool KUrlRequesterDialog_QBaseHasHeightForWidth(const KUrlRequesterDialog* self) {
    auto* vkurlrequesterdialog = const_cast<VirtualKUrlRequesterDialog*>(dynamic_cast<const VirtualKUrlRequesterDialog*>(self));
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->setKUrlRequesterDialog_HasHeightForWidth_IsBase(true);
        return vkurlrequesterdialog->hasHeightForWidth();
    } else {
        return self->KUrlRequesterDialog::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlRequesterDialog_OnHasHeightForWidth(const KUrlRequesterDialog* self, intptr_t slot) {
    auto* vkurlrequesterdialog = const_cast<VirtualKUrlRequesterDialog*>(dynamic_cast<const VirtualKUrlRequesterDialog*>(self));
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->setKUrlRequesterDialog_HasHeightForWidth_Callback(reinterpret_cast<VirtualKUrlRequesterDialog::KUrlRequesterDialog_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* KUrlRequesterDialog_PaintEngine(const KUrlRequesterDialog* self) {
    auto* vkurlrequesterdialog = const_cast<VirtualKUrlRequesterDialog*>(dynamic_cast<const VirtualKUrlRequesterDialog*>(self));
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        return vkurlrequesterdialog->paintEngine();
    } else {
        return self->KUrlRequesterDialog::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* KUrlRequesterDialog_QBasePaintEngine(const KUrlRequesterDialog* self) {
    auto* vkurlrequesterdialog = const_cast<VirtualKUrlRequesterDialog*>(dynamic_cast<const VirtualKUrlRequesterDialog*>(self));
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->setKUrlRequesterDialog_PaintEngine_IsBase(true);
        return vkurlrequesterdialog->paintEngine();
    } else {
        return self->KUrlRequesterDialog::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlRequesterDialog_OnPaintEngine(const KUrlRequesterDialog* self, intptr_t slot) {
    auto* vkurlrequesterdialog = const_cast<VirtualKUrlRequesterDialog*>(dynamic_cast<const VirtualKUrlRequesterDialog*>(self));
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->setKUrlRequesterDialog_PaintEngine_Callback(reinterpret_cast<VirtualKUrlRequesterDialog::KUrlRequesterDialog_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
bool KUrlRequesterDialog_Event(KUrlRequesterDialog* self, QEvent* event) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        return vkurlrequesterdialog->event(event);
    } else {
        return ((VirtualKUrlRequesterDialog*)self)->event(event);
    }
}

// Base class handler implementation
bool KUrlRequesterDialog_QBaseEvent(KUrlRequesterDialog* self, QEvent* event) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->setKUrlRequesterDialog_Event_IsBase(true);
        return vkurlrequesterdialog->event(event);
    } else {
        return ((VirtualKUrlRequesterDialog*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlRequesterDialog_OnEvent(KUrlRequesterDialog* self, intptr_t slot) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->setKUrlRequesterDialog_Event_Callback(reinterpret_cast<VirtualKUrlRequesterDialog::KUrlRequesterDialog_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlRequesterDialog_MousePressEvent(KUrlRequesterDialog* self, QMouseEvent* event) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->mousePressEvent(event);
    } else {
        ((VirtualKUrlRequesterDialog*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void KUrlRequesterDialog_QBaseMousePressEvent(KUrlRequesterDialog* self, QMouseEvent* event) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->setKUrlRequesterDialog_MousePressEvent_IsBase(true);
        vkurlrequesterdialog->mousePressEvent(event);
    } else {
        ((VirtualKUrlRequesterDialog*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlRequesterDialog_OnMousePressEvent(KUrlRequesterDialog* self, intptr_t slot) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->setKUrlRequesterDialog_MousePressEvent_Callback(reinterpret_cast<VirtualKUrlRequesterDialog::KUrlRequesterDialog_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlRequesterDialog_MouseReleaseEvent(KUrlRequesterDialog* self, QMouseEvent* event) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->mouseReleaseEvent(event);
    } else {
        ((VirtualKUrlRequesterDialog*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void KUrlRequesterDialog_QBaseMouseReleaseEvent(KUrlRequesterDialog* self, QMouseEvent* event) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->setKUrlRequesterDialog_MouseReleaseEvent_IsBase(true);
        vkurlrequesterdialog->mouseReleaseEvent(event);
    } else {
        ((VirtualKUrlRequesterDialog*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlRequesterDialog_OnMouseReleaseEvent(KUrlRequesterDialog* self, intptr_t slot) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->setKUrlRequesterDialog_MouseReleaseEvent_Callback(reinterpret_cast<VirtualKUrlRequesterDialog::KUrlRequesterDialog_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlRequesterDialog_MouseDoubleClickEvent(KUrlRequesterDialog* self, QMouseEvent* event) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKUrlRequesterDialog*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void KUrlRequesterDialog_QBaseMouseDoubleClickEvent(KUrlRequesterDialog* self, QMouseEvent* event) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->setKUrlRequesterDialog_MouseDoubleClickEvent_IsBase(true);
        vkurlrequesterdialog->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKUrlRequesterDialog*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlRequesterDialog_OnMouseDoubleClickEvent(KUrlRequesterDialog* self, intptr_t slot) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->setKUrlRequesterDialog_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualKUrlRequesterDialog::KUrlRequesterDialog_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlRequesterDialog_MouseMoveEvent(KUrlRequesterDialog* self, QMouseEvent* event) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->mouseMoveEvent(event);
    } else {
        ((VirtualKUrlRequesterDialog*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void KUrlRequesterDialog_QBaseMouseMoveEvent(KUrlRequesterDialog* self, QMouseEvent* event) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->setKUrlRequesterDialog_MouseMoveEvent_IsBase(true);
        vkurlrequesterdialog->mouseMoveEvent(event);
    } else {
        ((VirtualKUrlRequesterDialog*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlRequesterDialog_OnMouseMoveEvent(KUrlRequesterDialog* self, intptr_t slot) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->setKUrlRequesterDialog_MouseMoveEvent_Callback(reinterpret_cast<VirtualKUrlRequesterDialog::KUrlRequesterDialog_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlRequesterDialog_WheelEvent(KUrlRequesterDialog* self, QWheelEvent* event) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->wheelEvent(event);
    } else {
        ((VirtualKUrlRequesterDialog*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void KUrlRequesterDialog_QBaseWheelEvent(KUrlRequesterDialog* self, QWheelEvent* event) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->setKUrlRequesterDialog_WheelEvent_IsBase(true);
        vkurlrequesterdialog->wheelEvent(event);
    } else {
        ((VirtualKUrlRequesterDialog*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlRequesterDialog_OnWheelEvent(KUrlRequesterDialog* self, intptr_t slot) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->setKUrlRequesterDialog_WheelEvent_Callback(reinterpret_cast<VirtualKUrlRequesterDialog::KUrlRequesterDialog_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlRequesterDialog_KeyReleaseEvent(KUrlRequesterDialog* self, QKeyEvent* event) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->keyReleaseEvent(event);
    } else {
        ((VirtualKUrlRequesterDialog*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void KUrlRequesterDialog_QBaseKeyReleaseEvent(KUrlRequesterDialog* self, QKeyEvent* event) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->setKUrlRequesterDialog_KeyReleaseEvent_IsBase(true);
        vkurlrequesterdialog->keyReleaseEvent(event);
    } else {
        ((VirtualKUrlRequesterDialog*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlRequesterDialog_OnKeyReleaseEvent(KUrlRequesterDialog* self, intptr_t slot) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->setKUrlRequesterDialog_KeyReleaseEvent_Callback(reinterpret_cast<VirtualKUrlRequesterDialog::KUrlRequesterDialog_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlRequesterDialog_FocusInEvent(KUrlRequesterDialog* self, QFocusEvent* event) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->focusInEvent(event);
    } else {
        ((VirtualKUrlRequesterDialog*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void KUrlRequesterDialog_QBaseFocusInEvent(KUrlRequesterDialog* self, QFocusEvent* event) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->setKUrlRequesterDialog_FocusInEvent_IsBase(true);
        vkurlrequesterdialog->focusInEvent(event);
    } else {
        ((VirtualKUrlRequesterDialog*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlRequesterDialog_OnFocusInEvent(KUrlRequesterDialog* self, intptr_t slot) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->setKUrlRequesterDialog_FocusInEvent_Callback(reinterpret_cast<VirtualKUrlRequesterDialog::KUrlRequesterDialog_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlRequesterDialog_FocusOutEvent(KUrlRequesterDialog* self, QFocusEvent* event) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->focusOutEvent(event);
    } else {
        ((VirtualKUrlRequesterDialog*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void KUrlRequesterDialog_QBaseFocusOutEvent(KUrlRequesterDialog* self, QFocusEvent* event) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->setKUrlRequesterDialog_FocusOutEvent_IsBase(true);
        vkurlrequesterdialog->focusOutEvent(event);
    } else {
        ((VirtualKUrlRequesterDialog*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlRequesterDialog_OnFocusOutEvent(KUrlRequesterDialog* self, intptr_t slot) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->setKUrlRequesterDialog_FocusOutEvent_Callback(reinterpret_cast<VirtualKUrlRequesterDialog::KUrlRequesterDialog_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlRequesterDialog_EnterEvent(KUrlRequesterDialog* self, QEnterEvent* event) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->enterEvent(event);
    } else {
        ((VirtualKUrlRequesterDialog*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void KUrlRequesterDialog_QBaseEnterEvent(KUrlRequesterDialog* self, QEnterEvent* event) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->setKUrlRequesterDialog_EnterEvent_IsBase(true);
        vkurlrequesterdialog->enterEvent(event);
    } else {
        ((VirtualKUrlRequesterDialog*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlRequesterDialog_OnEnterEvent(KUrlRequesterDialog* self, intptr_t slot) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->setKUrlRequesterDialog_EnterEvent_Callback(reinterpret_cast<VirtualKUrlRequesterDialog::KUrlRequesterDialog_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlRequesterDialog_LeaveEvent(KUrlRequesterDialog* self, QEvent* event) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->leaveEvent(event);
    } else {
        ((VirtualKUrlRequesterDialog*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void KUrlRequesterDialog_QBaseLeaveEvent(KUrlRequesterDialog* self, QEvent* event) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->setKUrlRequesterDialog_LeaveEvent_IsBase(true);
        vkurlrequesterdialog->leaveEvent(event);
    } else {
        ((VirtualKUrlRequesterDialog*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlRequesterDialog_OnLeaveEvent(KUrlRequesterDialog* self, intptr_t slot) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->setKUrlRequesterDialog_LeaveEvent_Callback(reinterpret_cast<VirtualKUrlRequesterDialog::KUrlRequesterDialog_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlRequesterDialog_PaintEvent(KUrlRequesterDialog* self, QPaintEvent* event) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->paintEvent(event);
    } else {
        ((VirtualKUrlRequesterDialog*)self)->paintEvent(event);
    }
}

// Base class handler implementation
void KUrlRequesterDialog_QBasePaintEvent(KUrlRequesterDialog* self, QPaintEvent* event) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->setKUrlRequesterDialog_PaintEvent_IsBase(true);
        vkurlrequesterdialog->paintEvent(event);
    } else {
        ((VirtualKUrlRequesterDialog*)self)->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlRequesterDialog_OnPaintEvent(KUrlRequesterDialog* self, intptr_t slot) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->setKUrlRequesterDialog_PaintEvent_Callback(reinterpret_cast<VirtualKUrlRequesterDialog::KUrlRequesterDialog_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlRequesterDialog_MoveEvent(KUrlRequesterDialog* self, QMoveEvent* event) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->moveEvent(event);
    } else {
        ((VirtualKUrlRequesterDialog*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void KUrlRequesterDialog_QBaseMoveEvent(KUrlRequesterDialog* self, QMoveEvent* event) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->setKUrlRequesterDialog_MoveEvent_IsBase(true);
        vkurlrequesterdialog->moveEvent(event);
    } else {
        ((VirtualKUrlRequesterDialog*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlRequesterDialog_OnMoveEvent(KUrlRequesterDialog* self, intptr_t slot) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->setKUrlRequesterDialog_MoveEvent_Callback(reinterpret_cast<VirtualKUrlRequesterDialog::KUrlRequesterDialog_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlRequesterDialog_TabletEvent(KUrlRequesterDialog* self, QTabletEvent* event) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->tabletEvent(event);
    } else {
        ((VirtualKUrlRequesterDialog*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void KUrlRequesterDialog_QBaseTabletEvent(KUrlRequesterDialog* self, QTabletEvent* event) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->setKUrlRequesterDialog_TabletEvent_IsBase(true);
        vkurlrequesterdialog->tabletEvent(event);
    } else {
        ((VirtualKUrlRequesterDialog*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlRequesterDialog_OnTabletEvent(KUrlRequesterDialog* self, intptr_t slot) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->setKUrlRequesterDialog_TabletEvent_Callback(reinterpret_cast<VirtualKUrlRequesterDialog::KUrlRequesterDialog_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlRequesterDialog_ActionEvent(KUrlRequesterDialog* self, QActionEvent* event) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->actionEvent(event);
    } else {
        ((VirtualKUrlRequesterDialog*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void KUrlRequesterDialog_QBaseActionEvent(KUrlRequesterDialog* self, QActionEvent* event) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->setKUrlRequesterDialog_ActionEvent_IsBase(true);
        vkurlrequesterdialog->actionEvent(event);
    } else {
        ((VirtualKUrlRequesterDialog*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlRequesterDialog_OnActionEvent(KUrlRequesterDialog* self, intptr_t slot) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->setKUrlRequesterDialog_ActionEvent_Callback(reinterpret_cast<VirtualKUrlRequesterDialog::KUrlRequesterDialog_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlRequesterDialog_DragEnterEvent(KUrlRequesterDialog* self, QDragEnterEvent* event) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->dragEnterEvent(event);
    } else {
        ((VirtualKUrlRequesterDialog*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void KUrlRequesterDialog_QBaseDragEnterEvent(KUrlRequesterDialog* self, QDragEnterEvent* event) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->setKUrlRequesterDialog_DragEnterEvent_IsBase(true);
        vkurlrequesterdialog->dragEnterEvent(event);
    } else {
        ((VirtualKUrlRequesterDialog*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlRequesterDialog_OnDragEnterEvent(KUrlRequesterDialog* self, intptr_t slot) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->setKUrlRequesterDialog_DragEnterEvent_Callback(reinterpret_cast<VirtualKUrlRequesterDialog::KUrlRequesterDialog_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlRequesterDialog_DragMoveEvent(KUrlRequesterDialog* self, QDragMoveEvent* event) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->dragMoveEvent(event);
    } else {
        ((VirtualKUrlRequesterDialog*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void KUrlRequesterDialog_QBaseDragMoveEvent(KUrlRequesterDialog* self, QDragMoveEvent* event) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->setKUrlRequesterDialog_DragMoveEvent_IsBase(true);
        vkurlrequesterdialog->dragMoveEvent(event);
    } else {
        ((VirtualKUrlRequesterDialog*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlRequesterDialog_OnDragMoveEvent(KUrlRequesterDialog* self, intptr_t slot) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->setKUrlRequesterDialog_DragMoveEvent_Callback(reinterpret_cast<VirtualKUrlRequesterDialog::KUrlRequesterDialog_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlRequesterDialog_DragLeaveEvent(KUrlRequesterDialog* self, QDragLeaveEvent* event) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->dragLeaveEvent(event);
    } else {
        ((VirtualKUrlRequesterDialog*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void KUrlRequesterDialog_QBaseDragLeaveEvent(KUrlRequesterDialog* self, QDragLeaveEvent* event) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->setKUrlRequesterDialog_DragLeaveEvent_IsBase(true);
        vkurlrequesterdialog->dragLeaveEvent(event);
    } else {
        ((VirtualKUrlRequesterDialog*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlRequesterDialog_OnDragLeaveEvent(KUrlRequesterDialog* self, intptr_t slot) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->setKUrlRequesterDialog_DragLeaveEvent_Callback(reinterpret_cast<VirtualKUrlRequesterDialog::KUrlRequesterDialog_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlRequesterDialog_DropEvent(KUrlRequesterDialog* self, QDropEvent* event) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->dropEvent(event);
    } else {
        ((VirtualKUrlRequesterDialog*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void KUrlRequesterDialog_QBaseDropEvent(KUrlRequesterDialog* self, QDropEvent* event) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->setKUrlRequesterDialog_DropEvent_IsBase(true);
        vkurlrequesterdialog->dropEvent(event);
    } else {
        ((VirtualKUrlRequesterDialog*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlRequesterDialog_OnDropEvent(KUrlRequesterDialog* self, intptr_t slot) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->setKUrlRequesterDialog_DropEvent_Callback(reinterpret_cast<VirtualKUrlRequesterDialog::KUrlRequesterDialog_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlRequesterDialog_HideEvent(KUrlRequesterDialog* self, QHideEvent* event) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->hideEvent(event);
    } else {
        ((VirtualKUrlRequesterDialog*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void KUrlRequesterDialog_QBaseHideEvent(KUrlRequesterDialog* self, QHideEvent* event) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->setKUrlRequesterDialog_HideEvent_IsBase(true);
        vkurlrequesterdialog->hideEvent(event);
    } else {
        ((VirtualKUrlRequesterDialog*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlRequesterDialog_OnHideEvent(KUrlRequesterDialog* self, intptr_t slot) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->setKUrlRequesterDialog_HideEvent_Callback(reinterpret_cast<VirtualKUrlRequesterDialog::KUrlRequesterDialog_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KUrlRequesterDialog_NativeEvent(KUrlRequesterDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        return vkurlrequesterdialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKUrlRequesterDialog*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool KUrlRequesterDialog_QBaseNativeEvent(KUrlRequesterDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->setKUrlRequesterDialog_NativeEvent_IsBase(true);
        return vkurlrequesterdialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKUrlRequesterDialog*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlRequesterDialog_OnNativeEvent(KUrlRequesterDialog* self, intptr_t slot) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->setKUrlRequesterDialog_NativeEvent_Callback(reinterpret_cast<VirtualKUrlRequesterDialog::KUrlRequesterDialog_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlRequesterDialog_ChangeEvent(KUrlRequesterDialog* self, QEvent* param1) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->changeEvent(param1);
    } else {
        ((VirtualKUrlRequesterDialog*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void KUrlRequesterDialog_QBaseChangeEvent(KUrlRequesterDialog* self, QEvent* param1) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->setKUrlRequesterDialog_ChangeEvent_IsBase(true);
        vkurlrequesterdialog->changeEvent(param1);
    } else {
        ((VirtualKUrlRequesterDialog*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlRequesterDialog_OnChangeEvent(KUrlRequesterDialog* self, intptr_t slot) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->setKUrlRequesterDialog_ChangeEvent_Callback(reinterpret_cast<VirtualKUrlRequesterDialog::KUrlRequesterDialog_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int KUrlRequesterDialog_Metric(const KUrlRequesterDialog* self, int param1) {
    auto* vkurlrequesterdialog = const_cast<VirtualKUrlRequesterDialog*>(dynamic_cast<const VirtualKUrlRequesterDialog*>(self));
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        return vkurlrequesterdialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKUrlRequesterDialog*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int KUrlRequesterDialog_QBaseMetric(const KUrlRequesterDialog* self, int param1) {
    auto* vkurlrequesterdialog = const_cast<VirtualKUrlRequesterDialog*>(dynamic_cast<const VirtualKUrlRequesterDialog*>(self));
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->setKUrlRequesterDialog_Metric_IsBase(true);
        return vkurlrequesterdialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKUrlRequesterDialog*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlRequesterDialog_OnMetric(const KUrlRequesterDialog* self, intptr_t slot) {
    auto* vkurlrequesterdialog = const_cast<VirtualKUrlRequesterDialog*>(dynamic_cast<const VirtualKUrlRequesterDialog*>(self));
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->setKUrlRequesterDialog_Metric_Callback(reinterpret_cast<VirtualKUrlRequesterDialog::KUrlRequesterDialog_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlRequesterDialog_InitPainter(const KUrlRequesterDialog* self, QPainter* painter) {
    auto* vkurlrequesterdialog = const_cast<VirtualKUrlRequesterDialog*>(dynamic_cast<const VirtualKUrlRequesterDialog*>(self));
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->initPainter(painter);
    } else {
        ((VirtualKUrlRequesterDialog*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void KUrlRequesterDialog_QBaseInitPainter(const KUrlRequesterDialog* self, QPainter* painter) {
    auto* vkurlrequesterdialog = const_cast<VirtualKUrlRequesterDialog*>(dynamic_cast<const VirtualKUrlRequesterDialog*>(self));
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->setKUrlRequesterDialog_InitPainter_IsBase(true);
        vkurlrequesterdialog->initPainter(painter);
    } else {
        ((VirtualKUrlRequesterDialog*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlRequesterDialog_OnInitPainter(const KUrlRequesterDialog* self, intptr_t slot) {
    auto* vkurlrequesterdialog = const_cast<VirtualKUrlRequesterDialog*>(dynamic_cast<const VirtualKUrlRequesterDialog*>(self));
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->setKUrlRequesterDialog_InitPainter_Callback(reinterpret_cast<VirtualKUrlRequesterDialog::KUrlRequesterDialog_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* KUrlRequesterDialog_Redirected(const KUrlRequesterDialog* self, QPoint* offset) {
    auto* vkurlrequesterdialog = const_cast<VirtualKUrlRequesterDialog*>(dynamic_cast<const VirtualKUrlRequesterDialog*>(self));
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        return vkurlrequesterdialog->redirected(offset);
    } else {
        return ((VirtualKUrlRequesterDialog*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* KUrlRequesterDialog_QBaseRedirected(const KUrlRequesterDialog* self, QPoint* offset) {
    auto* vkurlrequesterdialog = const_cast<VirtualKUrlRequesterDialog*>(dynamic_cast<const VirtualKUrlRequesterDialog*>(self));
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->setKUrlRequesterDialog_Redirected_IsBase(true);
        return vkurlrequesterdialog->redirected(offset);
    } else {
        return ((VirtualKUrlRequesterDialog*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlRequesterDialog_OnRedirected(const KUrlRequesterDialog* self, intptr_t slot) {
    auto* vkurlrequesterdialog = const_cast<VirtualKUrlRequesterDialog*>(dynamic_cast<const VirtualKUrlRequesterDialog*>(self));
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->setKUrlRequesterDialog_Redirected_Callback(reinterpret_cast<VirtualKUrlRequesterDialog::KUrlRequesterDialog_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* KUrlRequesterDialog_SharedPainter(const KUrlRequesterDialog* self) {
    auto* vkurlrequesterdialog = const_cast<VirtualKUrlRequesterDialog*>(dynamic_cast<const VirtualKUrlRequesterDialog*>(self));
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        return vkurlrequesterdialog->sharedPainter();
    } else {
        return ((VirtualKUrlRequesterDialog*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* KUrlRequesterDialog_QBaseSharedPainter(const KUrlRequesterDialog* self) {
    auto* vkurlrequesterdialog = const_cast<VirtualKUrlRequesterDialog*>(dynamic_cast<const VirtualKUrlRequesterDialog*>(self));
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->setKUrlRequesterDialog_SharedPainter_IsBase(true);
        return vkurlrequesterdialog->sharedPainter();
    } else {
        return ((VirtualKUrlRequesterDialog*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlRequesterDialog_OnSharedPainter(const KUrlRequesterDialog* self, intptr_t slot) {
    auto* vkurlrequesterdialog = const_cast<VirtualKUrlRequesterDialog*>(dynamic_cast<const VirtualKUrlRequesterDialog*>(self));
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->setKUrlRequesterDialog_SharedPainter_Callback(reinterpret_cast<VirtualKUrlRequesterDialog::KUrlRequesterDialog_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlRequesterDialog_InputMethodEvent(KUrlRequesterDialog* self, QInputMethodEvent* param1) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->inputMethodEvent(param1);
    } else {
        ((VirtualKUrlRequesterDialog*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void KUrlRequesterDialog_QBaseInputMethodEvent(KUrlRequesterDialog* self, QInputMethodEvent* param1) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->setKUrlRequesterDialog_InputMethodEvent_IsBase(true);
        vkurlrequesterdialog->inputMethodEvent(param1);
    } else {
        ((VirtualKUrlRequesterDialog*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlRequesterDialog_OnInputMethodEvent(KUrlRequesterDialog* self, intptr_t slot) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->setKUrlRequesterDialog_InputMethodEvent_Callback(reinterpret_cast<VirtualKUrlRequesterDialog::KUrlRequesterDialog_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* KUrlRequesterDialog_InputMethodQuery(const KUrlRequesterDialog* self, int param1) {
    auto* vkurlrequesterdialog = const_cast<VirtualKUrlRequesterDialog*>(dynamic_cast<const VirtualKUrlRequesterDialog*>(self));
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        return new QVariant(vkurlrequesterdialog->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKUrlRequesterDialog*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* KUrlRequesterDialog_QBaseInputMethodQuery(const KUrlRequesterDialog* self, int param1) {
    auto* vkurlrequesterdialog = const_cast<VirtualKUrlRequesterDialog*>(dynamic_cast<const VirtualKUrlRequesterDialog*>(self));
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->setKUrlRequesterDialog_InputMethodQuery_IsBase(true);
        return new QVariant(vkurlrequesterdialog->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKUrlRequesterDialog*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlRequesterDialog_OnInputMethodQuery(const KUrlRequesterDialog* self, intptr_t slot) {
    auto* vkurlrequesterdialog = const_cast<VirtualKUrlRequesterDialog*>(dynamic_cast<const VirtualKUrlRequesterDialog*>(self));
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->setKUrlRequesterDialog_InputMethodQuery_Callback(reinterpret_cast<VirtualKUrlRequesterDialog::KUrlRequesterDialog_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool KUrlRequesterDialog_FocusNextPrevChild(KUrlRequesterDialog* self, bool next) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        return vkurlrequesterdialog->focusNextPrevChild(next);
    } else {
        return ((VirtualKUrlRequesterDialog*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool KUrlRequesterDialog_QBaseFocusNextPrevChild(KUrlRequesterDialog* self, bool next) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->setKUrlRequesterDialog_FocusNextPrevChild_IsBase(true);
        return vkurlrequesterdialog->focusNextPrevChild(next);
    } else {
        return ((VirtualKUrlRequesterDialog*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlRequesterDialog_OnFocusNextPrevChild(KUrlRequesterDialog* self, intptr_t slot) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->setKUrlRequesterDialog_FocusNextPrevChild_Callback(reinterpret_cast<VirtualKUrlRequesterDialog::KUrlRequesterDialog_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlRequesterDialog_TimerEvent(KUrlRequesterDialog* self, QTimerEvent* event) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->timerEvent(event);
    } else {
        ((VirtualKUrlRequesterDialog*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KUrlRequesterDialog_QBaseTimerEvent(KUrlRequesterDialog* self, QTimerEvent* event) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->setKUrlRequesterDialog_TimerEvent_IsBase(true);
        vkurlrequesterdialog->timerEvent(event);
    } else {
        ((VirtualKUrlRequesterDialog*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlRequesterDialog_OnTimerEvent(KUrlRequesterDialog* self, intptr_t slot) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->setKUrlRequesterDialog_TimerEvent_Callback(reinterpret_cast<VirtualKUrlRequesterDialog::KUrlRequesterDialog_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlRequesterDialog_ChildEvent(KUrlRequesterDialog* self, QChildEvent* event) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->childEvent(event);
    } else {
        ((VirtualKUrlRequesterDialog*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KUrlRequesterDialog_QBaseChildEvent(KUrlRequesterDialog* self, QChildEvent* event) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->setKUrlRequesterDialog_ChildEvent_IsBase(true);
        vkurlrequesterdialog->childEvent(event);
    } else {
        ((VirtualKUrlRequesterDialog*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlRequesterDialog_OnChildEvent(KUrlRequesterDialog* self, intptr_t slot) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->setKUrlRequesterDialog_ChildEvent_Callback(reinterpret_cast<VirtualKUrlRequesterDialog::KUrlRequesterDialog_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlRequesterDialog_CustomEvent(KUrlRequesterDialog* self, QEvent* event) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->customEvent(event);
    } else {
        ((VirtualKUrlRequesterDialog*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KUrlRequesterDialog_QBaseCustomEvent(KUrlRequesterDialog* self, QEvent* event) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->setKUrlRequesterDialog_CustomEvent_IsBase(true);
        vkurlrequesterdialog->customEvent(event);
    } else {
        ((VirtualKUrlRequesterDialog*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlRequesterDialog_OnCustomEvent(KUrlRequesterDialog* self, intptr_t slot) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->setKUrlRequesterDialog_CustomEvent_Callback(reinterpret_cast<VirtualKUrlRequesterDialog::KUrlRequesterDialog_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlRequesterDialog_ConnectNotify(KUrlRequesterDialog* self, const QMetaMethod* signal) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->connectNotify(*signal);
    } else {
        ((VirtualKUrlRequesterDialog*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KUrlRequesterDialog_QBaseConnectNotify(KUrlRequesterDialog* self, const QMetaMethod* signal) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->setKUrlRequesterDialog_ConnectNotify_IsBase(true);
        vkurlrequesterdialog->connectNotify(*signal);
    } else {
        ((VirtualKUrlRequesterDialog*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlRequesterDialog_OnConnectNotify(KUrlRequesterDialog* self, intptr_t slot) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->setKUrlRequesterDialog_ConnectNotify_Callback(reinterpret_cast<VirtualKUrlRequesterDialog::KUrlRequesterDialog_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlRequesterDialog_DisconnectNotify(KUrlRequesterDialog* self, const QMetaMethod* signal) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->disconnectNotify(*signal);
    } else {
        ((VirtualKUrlRequesterDialog*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KUrlRequesterDialog_QBaseDisconnectNotify(KUrlRequesterDialog* self, const QMetaMethod* signal) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->setKUrlRequesterDialog_DisconnectNotify_IsBase(true);
        vkurlrequesterdialog->disconnectNotify(*signal);
    } else {
        ((VirtualKUrlRequesterDialog*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlRequesterDialog_OnDisconnectNotify(KUrlRequesterDialog* self, intptr_t slot) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->setKUrlRequesterDialog_DisconnectNotify_Callback(reinterpret_cast<VirtualKUrlRequesterDialog::KUrlRequesterDialog_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlRequesterDialog_AdjustPosition(KUrlRequesterDialog* self, QWidget* param1) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->adjustPosition(param1);
    } else {
        ((VirtualKUrlRequesterDialog*)self)->adjustPosition(param1);
    }
}

// Base class handler implementation
void KUrlRequesterDialog_QBaseAdjustPosition(KUrlRequesterDialog* self, QWidget* param1) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->setKUrlRequesterDialog_AdjustPosition_IsBase(true);
        vkurlrequesterdialog->adjustPosition(param1);
    } else {
        ((VirtualKUrlRequesterDialog*)self)->adjustPosition(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlRequesterDialog_OnAdjustPosition(KUrlRequesterDialog* self, intptr_t slot) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->setKUrlRequesterDialog_AdjustPosition_Callback(reinterpret_cast<VirtualKUrlRequesterDialog::KUrlRequesterDialog_AdjustPosition_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlRequesterDialog_UpdateMicroFocus(KUrlRequesterDialog* self) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->updateMicroFocus();
    } else {
        ((VirtualKUrlRequesterDialog*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void KUrlRequesterDialog_QBaseUpdateMicroFocus(KUrlRequesterDialog* self) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->setKUrlRequesterDialog_UpdateMicroFocus_IsBase(true);
        vkurlrequesterdialog->updateMicroFocus();
    } else {
        ((VirtualKUrlRequesterDialog*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlRequesterDialog_OnUpdateMicroFocus(KUrlRequesterDialog* self, intptr_t slot) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->setKUrlRequesterDialog_UpdateMicroFocus_Callback(reinterpret_cast<VirtualKUrlRequesterDialog::KUrlRequesterDialog_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlRequesterDialog_Create(KUrlRequesterDialog* self) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->create();
    } else {
        ((VirtualKUrlRequesterDialog*)self)->create();
    }
}

// Base class handler implementation
void KUrlRequesterDialog_QBaseCreate(KUrlRequesterDialog* self) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->setKUrlRequesterDialog_Create_IsBase(true);
        vkurlrequesterdialog->create();
    } else {
        ((VirtualKUrlRequesterDialog*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlRequesterDialog_OnCreate(KUrlRequesterDialog* self, intptr_t slot) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->setKUrlRequesterDialog_Create_Callback(reinterpret_cast<VirtualKUrlRequesterDialog::KUrlRequesterDialog_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlRequesterDialog_Destroy(KUrlRequesterDialog* self) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->destroy();
    } else {
        ((VirtualKUrlRequesterDialog*)self)->destroy();
    }
}

// Base class handler implementation
void KUrlRequesterDialog_QBaseDestroy(KUrlRequesterDialog* self) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->setKUrlRequesterDialog_Destroy_IsBase(true);
        vkurlrequesterdialog->destroy();
    } else {
        ((VirtualKUrlRequesterDialog*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlRequesterDialog_OnDestroy(KUrlRequesterDialog* self, intptr_t slot) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->setKUrlRequesterDialog_Destroy_Callback(reinterpret_cast<VirtualKUrlRequesterDialog::KUrlRequesterDialog_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool KUrlRequesterDialog_FocusNextChild(KUrlRequesterDialog* self) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        return vkurlrequesterdialog->focusNextChild();
    } else {
        return ((VirtualKUrlRequesterDialog*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool KUrlRequesterDialog_QBaseFocusNextChild(KUrlRequesterDialog* self) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->setKUrlRequesterDialog_FocusNextChild_IsBase(true);
        return vkurlrequesterdialog->focusNextChild();
    } else {
        return ((VirtualKUrlRequesterDialog*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlRequesterDialog_OnFocusNextChild(KUrlRequesterDialog* self, intptr_t slot) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->setKUrlRequesterDialog_FocusNextChild_Callback(reinterpret_cast<VirtualKUrlRequesterDialog::KUrlRequesterDialog_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KUrlRequesterDialog_FocusPreviousChild(KUrlRequesterDialog* self) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        return vkurlrequesterdialog->focusPreviousChild();
    } else {
        return ((VirtualKUrlRequesterDialog*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool KUrlRequesterDialog_QBaseFocusPreviousChild(KUrlRequesterDialog* self) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->setKUrlRequesterDialog_FocusPreviousChild_IsBase(true);
        return vkurlrequesterdialog->focusPreviousChild();
    } else {
        return ((VirtualKUrlRequesterDialog*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlRequesterDialog_OnFocusPreviousChild(KUrlRequesterDialog* self, intptr_t slot) {
    auto* vkurlrequesterdialog = dynamic_cast<VirtualKUrlRequesterDialog*>(self);
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->setKUrlRequesterDialog_FocusPreviousChild_Callback(reinterpret_cast<VirtualKUrlRequesterDialog::KUrlRequesterDialog_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KUrlRequesterDialog_Sender(const KUrlRequesterDialog* self) {
    auto* vkurlrequesterdialog = const_cast<VirtualKUrlRequesterDialog*>(dynamic_cast<const VirtualKUrlRequesterDialog*>(self));
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        return vkurlrequesterdialog->sender();
    } else {
        return ((VirtualKUrlRequesterDialog*)self)->sender();
    }
}

// Base class handler implementation
QObject* KUrlRequesterDialog_QBaseSender(const KUrlRequesterDialog* self) {
    auto* vkurlrequesterdialog = const_cast<VirtualKUrlRequesterDialog*>(dynamic_cast<const VirtualKUrlRequesterDialog*>(self));
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->setKUrlRequesterDialog_Sender_IsBase(true);
        return vkurlrequesterdialog->sender();
    } else {
        return ((VirtualKUrlRequesterDialog*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlRequesterDialog_OnSender(const KUrlRequesterDialog* self, intptr_t slot) {
    auto* vkurlrequesterdialog = const_cast<VirtualKUrlRequesterDialog*>(dynamic_cast<const VirtualKUrlRequesterDialog*>(self));
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->setKUrlRequesterDialog_Sender_Callback(reinterpret_cast<VirtualKUrlRequesterDialog::KUrlRequesterDialog_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KUrlRequesterDialog_SenderSignalIndex(const KUrlRequesterDialog* self) {
    auto* vkurlrequesterdialog = const_cast<VirtualKUrlRequesterDialog*>(dynamic_cast<const VirtualKUrlRequesterDialog*>(self));
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        return vkurlrequesterdialog->senderSignalIndex();
    } else {
        return ((VirtualKUrlRequesterDialog*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KUrlRequesterDialog_QBaseSenderSignalIndex(const KUrlRequesterDialog* self) {
    auto* vkurlrequesterdialog = const_cast<VirtualKUrlRequesterDialog*>(dynamic_cast<const VirtualKUrlRequesterDialog*>(self));
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->setKUrlRequesterDialog_SenderSignalIndex_IsBase(true);
        return vkurlrequesterdialog->senderSignalIndex();
    } else {
        return ((VirtualKUrlRequesterDialog*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlRequesterDialog_OnSenderSignalIndex(const KUrlRequesterDialog* self, intptr_t slot) {
    auto* vkurlrequesterdialog = const_cast<VirtualKUrlRequesterDialog*>(dynamic_cast<const VirtualKUrlRequesterDialog*>(self));
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->setKUrlRequesterDialog_SenderSignalIndex_Callback(reinterpret_cast<VirtualKUrlRequesterDialog::KUrlRequesterDialog_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KUrlRequesterDialog_Receivers(const KUrlRequesterDialog* self, const char* signal) {
    auto* vkurlrequesterdialog = const_cast<VirtualKUrlRequesterDialog*>(dynamic_cast<const VirtualKUrlRequesterDialog*>(self));
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        return vkurlrequesterdialog->receivers(signal);
    } else {
        return ((VirtualKUrlRequesterDialog*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KUrlRequesterDialog_QBaseReceivers(const KUrlRequesterDialog* self, const char* signal) {
    auto* vkurlrequesterdialog = const_cast<VirtualKUrlRequesterDialog*>(dynamic_cast<const VirtualKUrlRequesterDialog*>(self));
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->setKUrlRequesterDialog_Receivers_IsBase(true);
        return vkurlrequesterdialog->receivers(signal);
    } else {
        return ((VirtualKUrlRequesterDialog*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlRequesterDialog_OnReceivers(const KUrlRequesterDialog* self, intptr_t slot) {
    auto* vkurlrequesterdialog = const_cast<VirtualKUrlRequesterDialog*>(dynamic_cast<const VirtualKUrlRequesterDialog*>(self));
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->setKUrlRequesterDialog_Receivers_Callback(reinterpret_cast<VirtualKUrlRequesterDialog::KUrlRequesterDialog_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KUrlRequesterDialog_IsSignalConnected(const KUrlRequesterDialog* self, const QMetaMethod* signal) {
    auto* vkurlrequesterdialog = const_cast<VirtualKUrlRequesterDialog*>(dynamic_cast<const VirtualKUrlRequesterDialog*>(self));
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        return vkurlrequesterdialog->isSignalConnected(*signal);
    } else {
        return ((VirtualKUrlRequesterDialog*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KUrlRequesterDialog_QBaseIsSignalConnected(const KUrlRequesterDialog* self, const QMetaMethod* signal) {
    auto* vkurlrequesterdialog = const_cast<VirtualKUrlRequesterDialog*>(dynamic_cast<const VirtualKUrlRequesterDialog*>(self));
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->setKUrlRequesterDialog_IsSignalConnected_IsBase(true);
        return vkurlrequesterdialog->isSignalConnected(*signal);
    } else {
        return ((VirtualKUrlRequesterDialog*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlRequesterDialog_OnIsSignalConnected(const KUrlRequesterDialog* self, intptr_t slot) {
    auto* vkurlrequesterdialog = const_cast<VirtualKUrlRequesterDialog*>(dynamic_cast<const VirtualKUrlRequesterDialog*>(self));
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->setKUrlRequesterDialog_IsSignalConnected_Callback(reinterpret_cast<VirtualKUrlRequesterDialog::KUrlRequesterDialog_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double KUrlRequesterDialog_GetDecodedMetricF(const KUrlRequesterDialog* self, int metricA, int metricB) {
    auto* vkurlrequesterdialog = const_cast<VirtualKUrlRequesterDialog*>(dynamic_cast<const VirtualKUrlRequesterDialog*>(self));
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        return vkurlrequesterdialog->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKUrlRequesterDialog*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double KUrlRequesterDialog_QBaseGetDecodedMetricF(const KUrlRequesterDialog* self, int metricA, int metricB) {
    auto* vkurlrequesterdialog = const_cast<VirtualKUrlRequesterDialog*>(dynamic_cast<const VirtualKUrlRequesterDialog*>(self));
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->setKUrlRequesterDialog_GetDecodedMetricF_IsBase(true);
        return vkurlrequesterdialog->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKUrlRequesterDialog*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlRequesterDialog_OnGetDecodedMetricF(const KUrlRequesterDialog* self, intptr_t slot) {
    auto* vkurlrequesterdialog = const_cast<VirtualKUrlRequesterDialog*>(dynamic_cast<const VirtualKUrlRequesterDialog*>(self));
    if (vkurlrequesterdialog && vkurlrequesterdialog->isVirtualKUrlRequesterDialog) {
        vkurlrequesterdialog->setKUrlRequesterDialog_GetDecodedMetricF_Callback(reinterpret_cast<VirtualKUrlRequesterDialog::KUrlRequesterDialog_GetDecodedMetricF_Callback>(slot));
    }
}

void KUrlRequesterDialog_Delete(KUrlRequesterDialog* self) {
    delete self;
}
