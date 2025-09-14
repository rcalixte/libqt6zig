#include <KOpenWithDialog>
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
#include <QByteArray>
#include <cstring>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QUrl>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <kopenwithdialog.h>
#include "libkopenwithdialog.h"
#include "libkopenwithdialog.hxx"

KOpenWithDialog* KOpenWithDialog_new(QWidget* parent) {
    return new VirtualKOpenWithDialog(parent);
}

KOpenWithDialog* KOpenWithDialog_new2(const libqt_list /* of QUrl* */ urls) {
    QList<QUrl> urls_QList;
    urls_QList.reserve(urls.len);
    QUrl** urls_arr = static_cast<QUrl**>(urls.data);
    for (size_t i = 0; i < urls.len; ++i) {
        urls_QList.push_back(*(urls_arr[i]));
    }
    return new VirtualKOpenWithDialog(urls_QList);
}

KOpenWithDialog* KOpenWithDialog_new3(const libqt_list /* of QUrl* */ urls, const libqt_string text, const libqt_string value) {
    QList<QUrl> urls_QList;
    urls_QList.reserve(urls.len);
    QUrl** urls_arr = static_cast<QUrl**>(urls.data);
    for (size_t i = 0; i < urls.len; ++i) {
        urls_QList.push_back(*(urls_arr[i]));
    }
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QString value_QString = QString::fromUtf8(value.data, value.len);
    return new VirtualKOpenWithDialog(urls_QList, text_QString, value_QString);
}

KOpenWithDialog* KOpenWithDialog_new4(const libqt_string mimeType, const libqt_string value) {
    QString mimeType_QString = QString::fromUtf8(mimeType.data, mimeType.len);
    QString value_QString = QString::fromUtf8(value.data, value.len);
    return new VirtualKOpenWithDialog(mimeType_QString, value_QString);
}

KOpenWithDialog* KOpenWithDialog_new5(const libqt_list /* of QUrl* */ urls, const libqt_string mimeType, const libqt_string text, const libqt_string value) {
    QList<QUrl> urls_QList;
    urls_QList.reserve(urls.len);
    QUrl** urls_arr = static_cast<QUrl**>(urls.data);
    for (size_t i = 0; i < urls.len; ++i) {
        urls_QList.push_back(*(urls_arr[i]));
    }
    QString mimeType_QString = QString::fromUtf8(mimeType.data, mimeType.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QString value_QString = QString::fromUtf8(value.data, value.len);
    return new VirtualKOpenWithDialog(urls_QList, mimeType_QString, text_QString, value_QString);
}

KOpenWithDialog* KOpenWithDialog_new6() {
    return new VirtualKOpenWithDialog();
}

KOpenWithDialog* KOpenWithDialog_new7(const libqt_list /* of QUrl* */ urls, QWidget* parent) {
    QList<QUrl> urls_QList;
    urls_QList.reserve(urls.len);
    QUrl** urls_arr = static_cast<QUrl**>(urls.data);
    for (size_t i = 0; i < urls.len; ++i) {
        urls_QList.push_back(*(urls_arr[i]));
    }
    return new VirtualKOpenWithDialog(urls_QList, parent);
}

KOpenWithDialog* KOpenWithDialog_new8(const libqt_list /* of QUrl* */ urls, const libqt_string text, const libqt_string value, QWidget* parent) {
    QList<QUrl> urls_QList;
    urls_QList.reserve(urls.len);
    QUrl** urls_arr = static_cast<QUrl**>(urls.data);
    for (size_t i = 0; i < urls.len; ++i) {
        urls_QList.push_back(*(urls_arr[i]));
    }
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QString value_QString = QString::fromUtf8(value.data, value.len);
    return new VirtualKOpenWithDialog(urls_QList, text_QString, value_QString, parent);
}

KOpenWithDialog* KOpenWithDialog_new9(const libqt_string mimeType, const libqt_string value, QWidget* parent) {
    QString mimeType_QString = QString::fromUtf8(mimeType.data, mimeType.len);
    QString value_QString = QString::fromUtf8(value.data, value.len);
    return new VirtualKOpenWithDialog(mimeType_QString, value_QString, parent);
}

KOpenWithDialog* KOpenWithDialog_new10(const libqt_list /* of QUrl* */ urls, const libqt_string mimeType, const libqt_string text, const libqt_string value, QWidget* parent) {
    QList<QUrl> urls_QList;
    urls_QList.reserve(urls.len);
    QUrl** urls_arr = static_cast<QUrl**>(urls.data);
    for (size_t i = 0; i < urls.len; ++i) {
        urls_QList.push_back(*(urls_arr[i]));
    }
    QString mimeType_QString = QString::fromUtf8(mimeType.data, mimeType.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QString value_QString = QString::fromUtf8(value.data, value.len);
    return new VirtualKOpenWithDialog(urls_QList, mimeType_QString, text_QString, value_QString, parent);
}

QMetaObject* KOpenWithDialog_MetaObject(const KOpenWithDialog* self) {
    return (QMetaObject*)self->metaObject();
}

void* KOpenWithDialog_Metacast(KOpenWithDialog* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KOpenWithDialog_Metacall(KOpenWithDialog* self, int param1, int param2, void** param3) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKOpenWithDialog*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KOpenWithDialog_Tr(const char* s) {
    QString _ret = KOpenWithDialog::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KOpenWithDialog_Text(const KOpenWithDialog* self) {
    QString _ret = self->text();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KOpenWithDialog_HideNoCloseOnExit(KOpenWithDialog* self) {
    self->hideNoCloseOnExit();
}

void KOpenWithDialog_HideRunInTerminal(KOpenWithDialog* self) {
    self->hideRunInTerminal();
}

void KOpenWithDialog_SetSaveNewApplications(KOpenWithDialog* self, bool b) {
    self->setSaveNewApplications(b);
}

void KOpenWithDialog_SlotSelected(KOpenWithDialog* self, const libqt_string _name, const libqt_string _exec) {
    QString _name_QString = QString::fromUtf8(_name.data, _name.len);
    QString _exec_QString = QString::fromUtf8(_exec.data, _exec.len);
    self->slotSelected(_name_QString, _exec_QString);
}

void KOpenWithDialog_SlotHighlighted(KOpenWithDialog* self, const libqt_string _name, const libqt_string _exec) {
    QString _name_QString = QString::fromUtf8(_name.data, _name.len);
    QString _exec_QString = QString::fromUtf8(_exec.data, _exec.len);
    self->slotHighlighted(_name_QString, _exec_QString);
}

void KOpenWithDialog_SlotTextChanged(KOpenWithDialog* self) {
    self->slotTextChanged();
}

void KOpenWithDialog_SlotTerminalToggled(KOpenWithDialog* self, bool param1) {
    self->slotTerminalToggled(param1);
}

void KOpenWithDialog_Accept(KOpenWithDialog* self) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->accept();
    }
}

libqt_string KOpenWithDialog_Tr2(const char* s, const char* c) {
    QString _ret = KOpenWithDialog::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KOpenWithDialog_Tr3(const char* s, const char* c, int n) {
    QString _ret = KOpenWithDialog::tr(s, c, static_cast<int>(n));
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
int KOpenWithDialog_QBaseMetacall(KOpenWithDialog* self, int param1, int param2, void** param3) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->setKOpenWithDialog_Metacall_IsBase(true);
        return vkopenwithdialog->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KOpenWithDialog::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KOpenWithDialog_OnMetacall(KOpenWithDialog* self, intptr_t slot) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->setKOpenWithDialog_Metacall_Callback(reinterpret_cast<VirtualKOpenWithDialog::KOpenWithDialog_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
void KOpenWithDialog_QBaseAccept(KOpenWithDialog* self) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->setKOpenWithDialog_Accept_IsBase(true);
        vkopenwithdialog->accept();
    } else {
        ((VirtualKOpenWithDialog*)self)->accept();
    }
}

// Auxiliary method to allow providing re-implementation
void KOpenWithDialog_OnAccept(KOpenWithDialog* self, intptr_t slot) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->setKOpenWithDialog_Accept_Callback(reinterpret_cast<VirtualKOpenWithDialog::KOpenWithDialog_Accept_Callback>(slot));
    }
}

// Derived class handler implementation
void KOpenWithDialog_SetVisible(KOpenWithDialog* self, bool visible) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->setVisible(visible);
    } else {
        self->KOpenWithDialog::setVisible(visible);
    }
}

// Base class handler implementation
void KOpenWithDialog_QBaseSetVisible(KOpenWithDialog* self, bool visible) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->setKOpenWithDialog_SetVisible_IsBase(true);
        vkopenwithdialog->setVisible(visible);
    } else {
        self->KOpenWithDialog::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void KOpenWithDialog_OnSetVisible(KOpenWithDialog* self, intptr_t slot) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->setKOpenWithDialog_SetVisible_Callback(reinterpret_cast<VirtualKOpenWithDialog::KOpenWithDialog_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KOpenWithDialog_SizeHint(const KOpenWithDialog* self) {
    auto* vkopenwithdialog = const_cast<VirtualKOpenWithDialog*>(dynamic_cast<const VirtualKOpenWithDialog*>(self));
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        return new QSize(vkopenwithdialog->sizeHint());
    } else {
        return new QSize(((VirtualKOpenWithDialog*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* KOpenWithDialog_QBaseSizeHint(const KOpenWithDialog* self) {
    auto* vkopenwithdialog = const_cast<VirtualKOpenWithDialog*>(dynamic_cast<const VirtualKOpenWithDialog*>(self));
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->setKOpenWithDialog_SizeHint_IsBase(true);
        return new QSize(vkopenwithdialog->sizeHint());
    } else {
        return new QSize(((VirtualKOpenWithDialog*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KOpenWithDialog_OnSizeHint(const KOpenWithDialog* self, intptr_t slot) {
    auto* vkopenwithdialog = const_cast<VirtualKOpenWithDialog*>(dynamic_cast<const VirtualKOpenWithDialog*>(self));
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->setKOpenWithDialog_SizeHint_Callback(reinterpret_cast<VirtualKOpenWithDialog::KOpenWithDialog_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KOpenWithDialog_MinimumSizeHint(const KOpenWithDialog* self) {
    auto* vkopenwithdialog = const_cast<VirtualKOpenWithDialog*>(dynamic_cast<const VirtualKOpenWithDialog*>(self));
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        return new QSize(vkopenwithdialog->minimumSizeHint());
    } else {
        return new QSize(((VirtualKOpenWithDialog*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* KOpenWithDialog_QBaseMinimumSizeHint(const KOpenWithDialog* self) {
    auto* vkopenwithdialog = const_cast<VirtualKOpenWithDialog*>(dynamic_cast<const VirtualKOpenWithDialog*>(self));
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->setKOpenWithDialog_MinimumSizeHint_IsBase(true);
        return new QSize(vkopenwithdialog->minimumSizeHint());
    } else {
        return new QSize(((VirtualKOpenWithDialog*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KOpenWithDialog_OnMinimumSizeHint(const KOpenWithDialog* self, intptr_t slot) {
    auto* vkopenwithdialog = const_cast<VirtualKOpenWithDialog*>(dynamic_cast<const VirtualKOpenWithDialog*>(self));
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->setKOpenWithDialog_MinimumSizeHint_Callback(reinterpret_cast<VirtualKOpenWithDialog::KOpenWithDialog_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void KOpenWithDialog_Open(KOpenWithDialog* self) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->open();
    } else {
        self->KOpenWithDialog::open();
    }
}

// Base class handler implementation
void KOpenWithDialog_QBaseOpen(KOpenWithDialog* self) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->setKOpenWithDialog_Open_IsBase(true);
        vkopenwithdialog->open();
    } else {
        self->KOpenWithDialog::open();
    }
}

// Auxiliary method to allow providing re-implementation
void KOpenWithDialog_OnOpen(KOpenWithDialog* self, intptr_t slot) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->setKOpenWithDialog_Open_Callback(reinterpret_cast<VirtualKOpenWithDialog::KOpenWithDialog_Open_Callback>(slot));
    }
}

// Derived class handler implementation
int KOpenWithDialog_Exec(KOpenWithDialog* self) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        return vkopenwithdialog->exec();
    } else {
        return self->KOpenWithDialog::exec();
    }
}

// Base class handler implementation
int KOpenWithDialog_QBaseExec(KOpenWithDialog* self) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->setKOpenWithDialog_Exec_IsBase(true);
        return vkopenwithdialog->exec();
    } else {
        return self->KOpenWithDialog::exec();
    }
}

// Auxiliary method to allow providing re-implementation
void KOpenWithDialog_OnExec(KOpenWithDialog* self, intptr_t slot) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->setKOpenWithDialog_Exec_Callback(reinterpret_cast<VirtualKOpenWithDialog::KOpenWithDialog_Exec_Callback>(slot));
    }
}

// Derived class handler implementation
void KOpenWithDialog_Done(KOpenWithDialog* self, int param1) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->done(static_cast<int>(param1));
    } else {
        self->KOpenWithDialog::done(static_cast<int>(param1));
    }
}

// Base class handler implementation
void KOpenWithDialog_QBaseDone(KOpenWithDialog* self, int param1) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->setKOpenWithDialog_Done_IsBase(true);
        vkopenwithdialog->done(static_cast<int>(param1));
    } else {
        self->KOpenWithDialog::done(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KOpenWithDialog_OnDone(KOpenWithDialog* self, intptr_t slot) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->setKOpenWithDialog_Done_Callback(reinterpret_cast<VirtualKOpenWithDialog::KOpenWithDialog_Done_Callback>(slot));
    }
}

// Derived class handler implementation
void KOpenWithDialog_Reject(KOpenWithDialog* self) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->reject();
    } else {
        self->KOpenWithDialog::reject();
    }
}

// Base class handler implementation
void KOpenWithDialog_QBaseReject(KOpenWithDialog* self) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->setKOpenWithDialog_Reject_IsBase(true);
        vkopenwithdialog->reject();
    } else {
        self->KOpenWithDialog::reject();
    }
}

// Auxiliary method to allow providing re-implementation
void KOpenWithDialog_OnReject(KOpenWithDialog* self, intptr_t slot) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->setKOpenWithDialog_Reject_Callback(reinterpret_cast<VirtualKOpenWithDialog::KOpenWithDialog_Reject_Callback>(slot));
    }
}

// Derived class handler implementation
void KOpenWithDialog_KeyPressEvent(KOpenWithDialog* self, QKeyEvent* param1) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->keyPressEvent(param1);
    } else {
        ((VirtualKOpenWithDialog*)self)->keyPressEvent(param1);
    }
}

// Base class handler implementation
void KOpenWithDialog_QBaseKeyPressEvent(KOpenWithDialog* self, QKeyEvent* param1) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->setKOpenWithDialog_KeyPressEvent_IsBase(true);
        vkopenwithdialog->keyPressEvent(param1);
    } else {
        ((VirtualKOpenWithDialog*)self)->keyPressEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KOpenWithDialog_OnKeyPressEvent(KOpenWithDialog* self, intptr_t slot) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->setKOpenWithDialog_KeyPressEvent_Callback(reinterpret_cast<VirtualKOpenWithDialog::KOpenWithDialog_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KOpenWithDialog_CloseEvent(KOpenWithDialog* self, QCloseEvent* param1) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->closeEvent(param1);
    } else {
        ((VirtualKOpenWithDialog*)self)->closeEvent(param1);
    }
}

// Base class handler implementation
void KOpenWithDialog_QBaseCloseEvent(KOpenWithDialog* self, QCloseEvent* param1) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->setKOpenWithDialog_CloseEvent_IsBase(true);
        vkopenwithdialog->closeEvent(param1);
    } else {
        ((VirtualKOpenWithDialog*)self)->closeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KOpenWithDialog_OnCloseEvent(KOpenWithDialog* self, intptr_t slot) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->setKOpenWithDialog_CloseEvent_Callback(reinterpret_cast<VirtualKOpenWithDialog::KOpenWithDialog_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KOpenWithDialog_ShowEvent(KOpenWithDialog* self, QShowEvent* param1) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->showEvent(param1);
    } else {
        ((VirtualKOpenWithDialog*)self)->showEvent(param1);
    }
}

// Base class handler implementation
void KOpenWithDialog_QBaseShowEvent(KOpenWithDialog* self, QShowEvent* param1) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->setKOpenWithDialog_ShowEvent_IsBase(true);
        vkopenwithdialog->showEvent(param1);
    } else {
        ((VirtualKOpenWithDialog*)self)->showEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KOpenWithDialog_OnShowEvent(KOpenWithDialog* self, intptr_t slot) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->setKOpenWithDialog_ShowEvent_Callback(reinterpret_cast<VirtualKOpenWithDialog::KOpenWithDialog_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KOpenWithDialog_ResizeEvent(KOpenWithDialog* self, QResizeEvent* param1) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->resizeEvent(param1);
    } else {
        ((VirtualKOpenWithDialog*)self)->resizeEvent(param1);
    }
}

// Base class handler implementation
void KOpenWithDialog_QBaseResizeEvent(KOpenWithDialog* self, QResizeEvent* param1) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->setKOpenWithDialog_ResizeEvent_IsBase(true);
        vkopenwithdialog->resizeEvent(param1);
    } else {
        ((VirtualKOpenWithDialog*)self)->resizeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KOpenWithDialog_OnResizeEvent(KOpenWithDialog* self, intptr_t slot) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->setKOpenWithDialog_ResizeEvent_Callback(reinterpret_cast<VirtualKOpenWithDialog::KOpenWithDialog_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KOpenWithDialog_ContextMenuEvent(KOpenWithDialog* self, QContextMenuEvent* param1) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->contextMenuEvent(param1);
    } else {
        ((VirtualKOpenWithDialog*)self)->contextMenuEvent(param1);
    }
}

// Base class handler implementation
void KOpenWithDialog_QBaseContextMenuEvent(KOpenWithDialog* self, QContextMenuEvent* param1) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->setKOpenWithDialog_ContextMenuEvent_IsBase(true);
        vkopenwithdialog->contextMenuEvent(param1);
    } else {
        ((VirtualKOpenWithDialog*)self)->contextMenuEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KOpenWithDialog_OnContextMenuEvent(KOpenWithDialog* self, intptr_t slot) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->setKOpenWithDialog_ContextMenuEvent_Callback(reinterpret_cast<VirtualKOpenWithDialog::KOpenWithDialog_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int KOpenWithDialog_DevType(const KOpenWithDialog* self) {
    auto* vkopenwithdialog = const_cast<VirtualKOpenWithDialog*>(dynamic_cast<const VirtualKOpenWithDialog*>(self));
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        return vkopenwithdialog->devType();
    } else {
        return self->KOpenWithDialog::devType();
    }
}

// Base class handler implementation
int KOpenWithDialog_QBaseDevType(const KOpenWithDialog* self) {
    auto* vkopenwithdialog = const_cast<VirtualKOpenWithDialog*>(dynamic_cast<const VirtualKOpenWithDialog*>(self));
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->setKOpenWithDialog_DevType_IsBase(true);
        return vkopenwithdialog->devType();
    } else {
        return self->KOpenWithDialog::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void KOpenWithDialog_OnDevType(const KOpenWithDialog* self, intptr_t slot) {
    auto* vkopenwithdialog = const_cast<VirtualKOpenWithDialog*>(dynamic_cast<const VirtualKOpenWithDialog*>(self));
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->setKOpenWithDialog_DevType_Callback(reinterpret_cast<VirtualKOpenWithDialog::KOpenWithDialog_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
int KOpenWithDialog_HeightForWidth(const KOpenWithDialog* self, int param1) {
    auto* vkopenwithdialog = const_cast<VirtualKOpenWithDialog*>(dynamic_cast<const VirtualKOpenWithDialog*>(self));
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        return vkopenwithdialog->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KOpenWithDialog::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int KOpenWithDialog_QBaseHeightForWidth(const KOpenWithDialog* self, int param1) {
    auto* vkopenwithdialog = const_cast<VirtualKOpenWithDialog*>(dynamic_cast<const VirtualKOpenWithDialog*>(self));
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->setKOpenWithDialog_HeightForWidth_IsBase(true);
        return vkopenwithdialog->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KOpenWithDialog::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KOpenWithDialog_OnHeightForWidth(const KOpenWithDialog* self, intptr_t slot) {
    auto* vkopenwithdialog = const_cast<VirtualKOpenWithDialog*>(dynamic_cast<const VirtualKOpenWithDialog*>(self));
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->setKOpenWithDialog_HeightForWidth_Callback(reinterpret_cast<VirtualKOpenWithDialog::KOpenWithDialog_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool KOpenWithDialog_HasHeightForWidth(const KOpenWithDialog* self) {
    auto* vkopenwithdialog = const_cast<VirtualKOpenWithDialog*>(dynamic_cast<const VirtualKOpenWithDialog*>(self));
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        return vkopenwithdialog->hasHeightForWidth();
    } else {
        return self->KOpenWithDialog::hasHeightForWidth();
    }
}

// Base class handler implementation
bool KOpenWithDialog_QBaseHasHeightForWidth(const KOpenWithDialog* self) {
    auto* vkopenwithdialog = const_cast<VirtualKOpenWithDialog*>(dynamic_cast<const VirtualKOpenWithDialog*>(self));
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->setKOpenWithDialog_HasHeightForWidth_IsBase(true);
        return vkopenwithdialog->hasHeightForWidth();
    } else {
        return self->KOpenWithDialog::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void KOpenWithDialog_OnHasHeightForWidth(const KOpenWithDialog* self, intptr_t slot) {
    auto* vkopenwithdialog = const_cast<VirtualKOpenWithDialog*>(dynamic_cast<const VirtualKOpenWithDialog*>(self));
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->setKOpenWithDialog_HasHeightForWidth_Callback(reinterpret_cast<VirtualKOpenWithDialog::KOpenWithDialog_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* KOpenWithDialog_PaintEngine(const KOpenWithDialog* self) {
    auto* vkopenwithdialog = const_cast<VirtualKOpenWithDialog*>(dynamic_cast<const VirtualKOpenWithDialog*>(self));
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        return vkopenwithdialog->paintEngine();
    } else {
        return self->KOpenWithDialog::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* KOpenWithDialog_QBasePaintEngine(const KOpenWithDialog* self) {
    auto* vkopenwithdialog = const_cast<VirtualKOpenWithDialog*>(dynamic_cast<const VirtualKOpenWithDialog*>(self));
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->setKOpenWithDialog_PaintEngine_IsBase(true);
        return vkopenwithdialog->paintEngine();
    } else {
        return self->KOpenWithDialog::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void KOpenWithDialog_OnPaintEngine(const KOpenWithDialog* self, intptr_t slot) {
    auto* vkopenwithdialog = const_cast<VirtualKOpenWithDialog*>(dynamic_cast<const VirtualKOpenWithDialog*>(self));
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->setKOpenWithDialog_PaintEngine_Callback(reinterpret_cast<VirtualKOpenWithDialog::KOpenWithDialog_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
bool KOpenWithDialog_Event(KOpenWithDialog* self, QEvent* event) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        return vkopenwithdialog->event(event);
    } else {
        return ((VirtualKOpenWithDialog*)self)->event(event);
    }
}

// Base class handler implementation
bool KOpenWithDialog_QBaseEvent(KOpenWithDialog* self, QEvent* event) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->setKOpenWithDialog_Event_IsBase(true);
        return vkopenwithdialog->event(event);
    } else {
        return ((VirtualKOpenWithDialog*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KOpenWithDialog_OnEvent(KOpenWithDialog* self, intptr_t slot) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->setKOpenWithDialog_Event_Callback(reinterpret_cast<VirtualKOpenWithDialog::KOpenWithDialog_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void KOpenWithDialog_MousePressEvent(KOpenWithDialog* self, QMouseEvent* event) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->mousePressEvent(event);
    } else {
        ((VirtualKOpenWithDialog*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void KOpenWithDialog_QBaseMousePressEvent(KOpenWithDialog* self, QMouseEvent* event) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->setKOpenWithDialog_MousePressEvent_IsBase(true);
        vkopenwithdialog->mousePressEvent(event);
    } else {
        ((VirtualKOpenWithDialog*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KOpenWithDialog_OnMousePressEvent(KOpenWithDialog* self, intptr_t slot) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->setKOpenWithDialog_MousePressEvent_Callback(reinterpret_cast<VirtualKOpenWithDialog::KOpenWithDialog_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KOpenWithDialog_MouseReleaseEvent(KOpenWithDialog* self, QMouseEvent* event) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->mouseReleaseEvent(event);
    } else {
        ((VirtualKOpenWithDialog*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void KOpenWithDialog_QBaseMouseReleaseEvent(KOpenWithDialog* self, QMouseEvent* event) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->setKOpenWithDialog_MouseReleaseEvent_IsBase(true);
        vkopenwithdialog->mouseReleaseEvent(event);
    } else {
        ((VirtualKOpenWithDialog*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KOpenWithDialog_OnMouseReleaseEvent(KOpenWithDialog* self, intptr_t slot) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->setKOpenWithDialog_MouseReleaseEvent_Callback(reinterpret_cast<VirtualKOpenWithDialog::KOpenWithDialog_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KOpenWithDialog_MouseDoubleClickEvent(KOpenWithDialog* self, QMouseEvent* event) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKOpenWithDialog*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void KOpenWithDialog_QBaseMouseDoubleClickEvent(KOpenWithDialog* self, QMouseEvent* event) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->setKOpenWithDialog_MouseDoubleClickEvent_IsBase(true);
        vkopenwithdialog->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKOpenWithDialog*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KOpenWithDialog_OnMouseDoubleClickEvent(KOpenWithDialog* self, intptr_t slot) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->setKOpenWithDialog_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualKOpenWithDialog::KOpenWithDialog_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KOpenWithDialog_MouseMoveEvent(KOpenWithDialog* self, QMouseEvent* event) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->mouseMoveEvent(event);
    } else {
        ((VirtualKOpenWithDialog*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void KOpenWithDialog_QBaseMouseMoveEvent(KOpenWithDialog* self, QMouseEvent* event) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->setKOpenWithDialog_MouseMoveEvent_IsBase(true);
        vkopenwithdialog->mouseMoveEvent(event);
    } else {
        ((VirtualKOpenWithDialog*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KOpenWithDialog_OnMouseMoveEvent(KOpenWithDialog* self, intptr_t slot) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->setKOpenWithDialog_MouseMoveEvent_Callback(reinterpret_cast<VirtualKOpenWithDialog::KOpenWithDialog_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KOpenWithDialog_WheelEvent(KOpenWithDialog* self, QWheelEvent* event) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->wheelEvent(event);
    } else {
        ((VirtualKOpenWithDialog*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void KOpenWithDialog_QBaseWheelEvent(KOpenWithDialog* self, QWheelEvent* event) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->setKOpenWithDialog_WheelEvent_IsBase(true);
        vkopenwithdialog->wheelEvent(event);
    } else {
        ((VirtualKOpenWithDialog*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KOpenWithDialog_OnWheelEvent(KOpenWithDialog* self, intptr_t slot) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->setKOpenWithDialog_WheelEvent_Callback(reinterpret_cast<VirtualKOpenWithDialog::KOpenWithDialog_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KOpenWithDialog_KeyReleaseEvent(KOpenWithDialog* self, QKeyEvent* event) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->keyReleaseEvent(event);
    } else {
        ((VirtualKOpenWithDialog*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void KOpenWithDialog_QBaseKeyReleaseEvent(KOpenWithDialog* self, QKeyEvent* event) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->setKOpenWithDialog_KeyReleaseEvent_IsBase(true);
        vkopenwithdialog->keyReleaseEvent(event);
    } else {
        ((VirtualKOpenWithDialog*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KOpenWithDialog_OnKeyReleaseEvent(KOpenWithDialog* self, intptr_t slot) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->setKOpenWithDialog_KeyReleaseEvent_Callback(reinterpret_cast<VirtualKOpenWithDialog::KOpenWithDialog_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KOpenWithDialog_FocusInEvent(KOpenWithDialog* self, QFocusEvent* event) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->focusInEvent(event);
    } else {
        ((VirtualKOpenWithDialog*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void KOpenWithDialog_QBaseFocusInEvent(KOpenWithDialog* self, QFocusEvent* event) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->setKOpenWithDialog_FocusInEvent_IsBase(true);
        vkopenwithdialog->focusInEvent(event);
    } else {
        ((VirtualKOpenWithDialog*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KOpenWithDialog_OnFocusInEvent(KOpenWithDialog* self, intptr_t slot) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->setKOpenWithDialog_FocusInEvent_Callback(reinterpret_cast<VirtualKOpenWithDialog::KOpenWithDialog_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KOpenWithDialog_FocusOutEvent(KOpenWithDialog* self, QFocusEvent* event) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->focusOutEvent(event);
    } else {
        ((VirtualKOpenWithDialog*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void KOpenWithDialog_QBaseFocusOutEvent(KOpenWithDialog* self, QFocusEvent* event) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->setKOpenWithDialog_FocusOutEvent_IsBase(true);
        vkopenwithdialog->focusOutEvent(event);
    } else {
        ((VirtualKOpenWithDialog*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KOpenWithDialog_OnFocusOutEvent(KOpenWithDialog* self, intptr_t slot) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->setKOpenWithDialog_FocusOutEvent_Callback(reinterpret_cast<VirtualKOpenWithDialog::KOpenWithDialog_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KOpenWithDialog_EnterEvent(KOpenWithDialog* self, QEnterEvent* event) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->enterEvent(event);
    } else {
        ((VirtualKOpenWithDialog*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void KOpenWithDialog_QBaseEnterEvent(KOpenWithDialog* self, QEnterEvent* event) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->setKOpenWithDialog_EnterEvent_IsBase(true);
        vkopenwithdialog->enterEvent(event);
    } else {
        ((VirtualKOpenWithDialog*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KOpenWithDialog_OnEnterEvent(KOpenWithDialog* self, intptr_t slot) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->setKOpenWithDialog_EnterEvent_Callback(reinterpret_cast<VirtualKOpenWithDialog::KOpenWithDialog_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KOpenWithDialog_LeaveEvent(KOpenWithDialog* self, QEvent* event) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->leaveEvent(event);
    } else {
        ((VirtualKOpenWithDialog*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void KOpenWithDialog_QBaseLeaveEvent(KOpenWithDialog* self, QEvent* event) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->setKOpenWithDialog_LeaveEvent_IsBase(true);
        vkopenwithdialog->leaveEvent(event);
    } else {
        ((VirtualKOpenWithDialog*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KOpenWithDialog_OnLeaveEvent(KOpenWithDialog* self, intptr_t slot) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->setKOpenWithDialog_LeaveEvent_Callback(reinterpret_cast<VirtualKOpenWithDialog::KOpenWithDialog_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KOpenWithDialog_PaintEvent(KOpenWithDialog* self, QPaintEvent* event) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->paintEvent(event);
    } else {
        ((VirtualKOpenWithDialog*)self)->paintEvent(event);
    }
}

// Base class handler implementation
void KOpenWithDialog_QBasePaintEvent(KOpenWithDialog* self, QPaintEvent* event) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->setKOpenWithDialog_PaintEvent_IsBase(true);
        vkopenwithdialog->paintEvent(event);
    } else {
        ((VirtualKOpenWithDialog*)self)->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KOpenWithDialog_OnPaintEvent(KOpenWithDialog* self, intptr_t slot) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->setKOpenWithDialog_PaintEvent_Callback(reinterpret_cast<VirtualKOpenWithDialog::KOpenWithDialog_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KOpenWithDialog_MoveEvent(KOpenWithDialog* self, QMoveEvent* event) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->moveEvent(event);
    } else {
        ((VirtualKOpenWithDialog*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void KOpenWithDialog_QBaseMoveEvent(KOpenWithDialog* self, QMoveEvent* event) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->setKOpenWithDialog_MoveEvent_IsBase(true);
        vkopenwithdialog->moveEvent(event);
    } else {
        ((VirtualKOpenWithDialog*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KOpenWithDialog_OnMoveEvent(KOpenWithDialog* self, intptr_t slot) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->setKOpenWithDialog_MoveEvent_Callback(reinterpret_cast<VirtualKOpenWithDialog::KOpenWithDialog_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KOpenWithDialog_TabletEvent(KOpenWithDialog* self, QTabletEvent* event) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->tabletEvent(event);
    } else {
        ((VirtualKOpenWithDialog*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void KOpenWithDialog_QBaseTabletEvent(KOpenWithDialog* self, QTabletEvent* event) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->setKOpenWithDialog_TabletEvent_IsBase(true);
        vkopenwithdialog->tabletEvent(event);
    } else {
        ((VirtualKOpenWithDialog*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KOpenWithDialog_OnTabletEvent(KOpenWithDialog* self, intptr_t slot) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->setKOpenWithDialog_TabletEvent_Callback(reinterpret_cast<VirtualKOpenWithDialog::KOpenWithDialog_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KOpenWithDialog_ActionEvent(KOpenWithDialog* self, QActionEvent* event) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->actionEvent(event);
    } else {
        ((VirtualKOpenWithDialog*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void KOpenWithDialog_QBaseActionEvent(KOpenWithDialog* self, QActionEvent* event) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->setKOpenWithDialog_ActionEvent_IsBase(true);
        vkopenwithdialog->actionEvent(event);
    } else {
        ((VirtualKOpenWithDialog*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KOpenWithDialog_OnActionEvent(KOpenWithDialog* self, intptr_t slot) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->setKOpenWithDialog_ActionEvent_Callback(reinterpret_cast<VirtualKOpenWithDialog::KOpenWithDialog_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KOpenWithDialog_DragEnterEvent(KOpenWithDialog* self, QDragEnterEvent* event) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->dragEnterEvent(event);
    } else {
        ((VirtualKOpenWithDialog*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void KOpenWithDialog_QBaseDragEnterEvent(KOpenWithDialog* self, QDragEnterEvent* event) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->setKOpenWithDialog_DragEnterEvent_IsBase(true);
        vkopenwithdialog->dragEnterEvent(event);
    } else {
        ((VirtualKOpenWithDialog*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KOpenWithDialog_OnDragEnterEvent(KOpenWithDialog* self, intptr_t slot) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->setKOpenWithDialog_DragEnterEvent_Callback(reinterpret_cast<VirtualKOpenWithDialog::KOpenWithDialog_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KOpenWithDialog_DragMoveEvent(KOpenWithDialog* self, QDragMoveEvent* event) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->dragMoveEvent(event);
    } else {
        ((VirtualKOpenWithDialog*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void KOpenWithDialog_QBaseDragMoveEvent(KOpenWithDialog* self, QDragMoveEvent* event) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->setKOpenWithDialog_DragMoveEvent_IsBase(true);
        vkopenwithdialog->dragMoveEvent(event);
    } else {
        ((VirtualKOpenWithDialog*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KOpenWithDialog_OnDragMoveEvent(KOpenWithDialog* self, intptr_t slot) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->setKOpenWithDialog_DragMoveEvent_Callback(reinterpret_cast<VirtualKOpenWithDialog::KOpenWithDialog_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KOpenWithDialog_DragLeaveEvent(KOpenWithDialog* self, QDragLeaveEvent* event) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->dragLeaveEvent(event);
    } else {
        ((VirtualKOpenWithDialog*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void KOpenWithDialog_QBaseDragLeaveEvent(KOpenWithDialog* self, QDragLeaveEvent* event) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->setKOpenWithDialog_DragLeaveEvent_IsBase(true);
        vkopenwithdialog->dragLeaveEvent(event);
    } else {
        ((VirtualKOpenWithDialog*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KOpenWithDialog_OnDragLeaveEvent(KOpenWithDialog* self, intptr_t slot) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->setKOpenWithDialog_DragLeaveEvent_Callback(reinterpret_cast<VirtualKOpenWithDialog::KOpenWithDialog_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KOpenWithDialog_DropEvent(KOpenWithDialog* self, QDropEvent* event) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->dropEvent(event);
    } else {
        ((VirtualKOpenWithDialog*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void KOpenWithDialog_QBaseDropEvent(KOpenWithDialog* self, QDropEvent* event) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->setKOpenWithDialog_DropEvent_IsBase(true);
        vkopenwithdialog->dropEvent(event);
    } else {
        ((VirtualKOpenWithDialog*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KOpenWithDialog_OnDropEvent(KOpenWithDialog* self, intptr_t slot) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->setKOpenWithDialog_DropEvent_Callback(reinterpret_cast<VirtualKOpenWithDialog::KOpenWithDialog_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KOpenWithDialog_HideEvent(KOpenWithDialog* self, QHideEvent* event) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->hideEvent(event);
    } else {
        ((VirtualKOpenWithDialog*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void KOpenWithDialog_QBaseHideEvent(KOpenWithDialog* self, QHideEvent* event) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->setKOpenWithDialog_HideEvent_IsBase(true);
        vkopenwithdialog->hideEvent(event);
    } else {
        ((VirtualKOpenWithDialog*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KOpenWithDialog_OnHideEvent(KOpenWithDialog* self, intptr_t slot) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->setKOpenWithDialog_HideEvent_Callback(reinterpret_cast<VirtualKOpenWithDialog::KOpenWithDialog_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KOpenWithDialog_NativeEvent(KOpenWithDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        return vkopenwithdialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKOpenWithDialog*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool KOpenWithDialog_QBaseNativeEvent(KOpenWithDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->setKOpenWithDialog_NativeEvent_IsBase(true);
        return vkopenwithdialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKOpenWithDialog*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void KOpenWithDialog_OnNativeEvent(KOpenWithDialog* self, intptr_t slot) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->setKOpenWithDialog_NativeEvent_Callback(reinterpret_cast<VirtualKOpenWithDialog::KOpenWithDialog_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KOpenWithDialog_ChangeEvent(KOpenWithDialog* self, QEvent* param1) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->changeEvent(param1);
    } else {
        ((VirtualKOpenWithDialog*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void KOpenWithDialog_QBaseChangeEvent(KOpenWithDialog* self, QEvent* param1) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->setKOpenWithDialog_ChangeEvent_IsBase(true);
        vkopenwithdialog->changeEvent(param1);
    } else {
        ((VirtualKOpenWithDialog*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KOpenWithDialog_OnChangeEvent(KOpenWithDialog* self, intptr_t slot) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->setKOpenWithDialog_ChangeEvent_Callback(reinterpret_cast<VirtualKOpenWithDialog::KOpenWithDialog_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int KOpenWithDialog_Metric(const KOpenWithDialog* self, int param1) {
    auto* vkopenwithdialog = const_cast<VirtualKOpenWithDialog*>(dynamic_cast<const VirtualKOpenWithDialog*>(self));
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        return vkopenwithdialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKOpenWithDialog*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int KOpenWithDialog_QBaseMetric(const KOpenWithDialog* self, int param1) {
    auto* vkopenwithdialog = const_cast<VirtualKOpenWithDialog*>(dynamic_cast<const VirtualKOpenWithDialog*>(self));
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->setKOpenWithDialog_Metric_IsBase(true);
        return vkopenwithdialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKOpenWithDialog*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KOpenWithDialog_OnMetric(const KOpenWithDialog* self, intptr_t slot) {
    auto* vkopenwithdialog = const_cast<VirtualKOpenWithDialog*>(dynamic_cast<const VirtualKOpenWithDialog*>(self));
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->setKOpenWithDialog_Metric_Callback(reinterpret_cast<VirtualKOpenWithDialog::KOpenWithDialog_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void KOpenWithDialog_InitPainter(const KOpenWithDialog* self, QPainter* painter) {
    auto* vkopenwithdialog = const_cast<VirtualKOpenWithDialog*>(dynamic_cast<const VirtualKOpenWithDialog*>(self));
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->initPainter(painter);
    } else {
        ((VirtualKOpenWithDialog*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void KOpenWithDialog_QBaseInitPainter(const KOpenWithDialog* self, QPainter* painter) {
    auto* vkopenwithdialog = const_cast<VirtualKOpenWithDialog*>(dynamic_cast<const VirtualKOpenWithDialog*>(self));
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->setKOpenWithDialog_InitPainter_IsBase(true);
        vkopenwithdialog->initPainter(painter);
    } else {
        ((VirtualKOpenWithDialog*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void KOpenWithDialog_OnInitPainter(const KOpenWithDialog* self, intptr_t slot) {
    auto* vkopenwithdialog = const_cast<VirtualKOpenWithDialog*>(dynamic_cast<const VirtualKOpenWithDialog*>(self));
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->setKOpenWithDialog_InitPainter_Callback(reinterpret_cast<VirtualKOpenWithDialog::KOpenWithDialog_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* KOpenWithDialog_Redirected(const KOpenWithDialog* self, QPoint* offset) {
    auto* vkopenwithdialog = const_cast<VirtualKOpenWithDialog*>(dynamic_cast<const VirtualKOpenWithDialog*>(self));
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        return vkopenwithdialog->redirected(offset);
    } else {
        return ((VirtualKOpenWithDialog*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* KOpenWithDialog_QBaseRedirected(const KOpenWithDialog* self, QPoint* offset) {
    auto* vkopenwithdialog = const_cast<VirtualKOpenWithDialog*>(dynamic_cast<const VirtualKOpenWithDialog*>(self));
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->setKOpenWithDialog_Redirected_IsBase(true);
        return vkopenwithdialog->redirected(offset);
    } else {
        return ((VirtualKOpenWithDialog*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void KOpenWithDialog_OnRedirected(const KOpenWithDialog* self, intptr_t slot) {
    auto* vkopenwithdialog = const_cast<VirtualKOpenWithDialog*>(dynamic_cast<const VirtualKOpenWithDialog*>(self));
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->setKOpenWithDialog_Redirected_Callback(reinterpret_cast<VirtualKOpenWithDialog::KOpenWithDialog_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* KOpenWithDialog_SharedPainter(const KOpenWithDialog* self) {
    auto* vkopenwithdialog = const_cast<VirtualKOpenWithDialog*>(dynamic_cast<const VirtualKOpenWithDialog*>(self));
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        return vkopenwithdialog->sharedPainter();
    } else {
        return ((VirtualKOpenWithDialog*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* KOpenWithDialog_QBaseSharedPainter(const KOpenWithDialog* self) {
    auto* vkopenwithdialog = const_cast<VirtualKOpenWithDialog*>(dynamic_cast<const VirtualKOpenWithDialog*>(self));
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->setKOpenWithDialog_SharedPainter_IsBase(true);
        return vkopenwithdialog->sharedPainter();
    } else {
        return ((VirtualKOpenWithDialog*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void KOpenWithDialog_OnSharedPainter(const KOpenWithDialog* self, intptr_t slot) {
    auto* vkopenwithdialog = const_cast<VirtualKOpenWithDialog*>(dynamic_cast<const VirtualKOpenWithDialog*>(self));
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->setKOpenWithDialog_SharedPainter_Callback(reinterpret_cast<VirtualKOpenWithDialog::KOpenWithDialog_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void KOpenWithDialog_InputMethodEvent(KOpenWithDialog* self, QInputMethodEvent* param1) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->inputMethodEvent(param1);
    } else {
        ((VirtualKOpenWithDialog*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void KOpenWithDialog_QBaseInputMethodEvent(KOpenWithDialog* self, QInputMethodEvent* param1) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->setKOpenWithDialog_InputMethodEvent_IsBase(true);
        vkopenwithdialog->inputMethodEvent(param1);
    } else {
        ((VirtualKOpenWithDialog*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KOpenWithDialog_OnInputMethodEvent(KOpenWithDialog* self, intptr_t slot) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->setKOpenWithDialog_InputMethodEvent_Callback(reinterpret_cast<VirtualKOpenWithDialog::KOpenWithDialog_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* KOpenWithDialog_InputMethodQuery(const KOpenWithDialog* self, int param1) {
    auto* vkopenwithdialog = const_cast<VirtualKOpenWithDialog*>(dynamic_cast<const VirtualKOpenWithDialog*>(self));
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        return new QVariant(vkopenwithdialog->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKOpenWithDialog*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* KOpenWithDialog_QBaseInputMethodQuery(const KOpenWithDialog* self, int param1) {
    auto* vkopenwithdialog = const_cast<VirtualKOpenWithDialog*>(dynamic_cast<const VirtualKOpenWithDialog*>(self));
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->setKOpenWithDialog_InputMethodQuery_IsBase(true);
        return new QVariant(vkopenwithdialog->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKOpenWithDialog*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void KOpenWithDialog_OnInputMethodQuery(const KOpenWithDialog* self, intptr_t slot) {
    auto* vkopenwithdialog = const_cast<VirtualKOpenWithDialog*>(dynamic_cast<const VirtualKOpenWithDialog*>(self));
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->setKOpenWithDialog_InputMethodQuery_Callback(reinterpret_cast<VirtualKOpenWithDialog::KOpenWithDialog_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool KOpenWithDialog_FocusNextPrevChild(KOpenWithDialog* self, bool next) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        return vkopenwithdialog->focusNextPrevChild(next);
    } else {
        return ((VirtualKOpenWithDialog*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool KOpenWithDialog_QBaseFocusNextPrevChild(KOpenWithDialog* self, bool next) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->setKOpenWithDialog_FocusNextPrevChild_IsBase(true);
        return vkopenwithdialog->focusNextPrevChild(next);
    } else {
        return ((VirtualKOpenWithDialog*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void KOpenWithDialog_OnFocusNextPrevChild(KOpenWithDialog* self, intptr_t slot) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->setKOpenWithDialog_FocusNextPrevChild_Callback(reinterpret_cast<VirtualKOpenWithDialog::KOpenWithDialog_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
void KOpenWithDialog_TimerEvent(KOpenWithDialog* self, QTimerEvent* event) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->timerEvent(event);
    } else {
        ((VirtualKOpenWithDialog*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KOpenWithDialog_QBaseTimerEvent(KOpenWithDialog* self, QTimerEvent* event) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->setKOpenWithDialog_TimerEvent_IsBase(true);
        vkopenwithdialog->timerEvent(event);
    } else {
        ((VirtualKOpenWithDialog*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KOpenWithDialog_OnTimerEvent(KOpenWithDialog* self, intptr_t slot) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->setKOpenWithDialog_TimerEvent_Callback(reinterpret_cast<VirtualKOpenWithDialog::KOpenWithDialog_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KOpenWithDialog_ChildEvent(KOpenWithDialog* self, QChildEvent* event) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->childEvent(event);
    } else {
        ((VirtualKOpenWithDialog*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KOpenWithDialog_QBaseChildEvent(KOpenWithDialog* self, QChildEvent* event) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->setKOpenWithDialog_ChildEvent_IsBase(true);
        vkopenwithdialog->childEvent(event);
    } else {
        ((VirtualKOpenWithDialog*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KOpenWithDialog_OnChildEvent(KOpenWithDialog* self, intptr_t slot) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->setKOpenWithDialog_ChildEvent_Callback(reinterpret_cast<VirtualKOpenWithDialog::KOpenWithDialog_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KOpenWithDialog_CustomEvent(KOpenWithDialog* self, QEvent* event) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->customEvent(event);
    } else {
        ((VirtualKOpenWithDialog*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KOpenWithDialog_QBaseCustomEvent(KOpenWithDialog* self, QEvent* event) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->setKOpenWithDialog_CustomEvent_IsBase(true);
        vkopenwithdialog->customEvent(event);
    } else {
        ((VirtualKOpenWithDialog*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KOpenWithDialog_OnCustomEvent(KOpenWithDialog* self, intptr_t slot) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->setKOpenWithDialog_CustomEvent_Callback(reinterpret_cast<VirtualKOpenWithDialog::KOpenWithDialog_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KOpenWithDialog_ConnectNotify(KOpenWithDialog* self, const QMetaMethod* signal) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->connectNotify(*signal);
    } else {
        ((VirtualKOpenWithDialog*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KOpenWithDialog_QBaseConnectNotify(KOpenWithDialog* self, const QMetaMethod* signal) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->setKOpenWithDialog_ConnectNotify_IsBase(true);
        vkopenwithdialog->connectNotify(*signal);
    } else {
        ((VirtualKOpenWithDialog*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KOpenWithDialog_OnConnectNotify(KOpenWithDialog* self, intptr_t slot) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->setKOpenWithDialog_ConnectNotify_Callback(reinterpret_cast<VirtualKOpenWithDialog::KOpenWithDialog_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KOpenWithDialog_DisconnectNotify(KOpenWithDialog* self, const QMetaMethod* signal) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->disconnectNotify(*signal);
    } else {
        ((VirtualKOpenWithDialog*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KOpenWithDialog_QBaseDisconnectNotify(KOpenWithDialog* self, const QMetaMethod* signal) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->setKOpenWithDialog_DisconnectNotify_IsBase(true);
        vkopenwithdialog->disconnectNotify(*signal);
    } else {
        ((VirtualKOpenWithDialog*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KOpenWithDialog_OnDisconnectNotify(KOpenWithDialog* self, intptr_t slot) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->setKOpenWithDialog_DisconnectNotify_Callback(reinterpret_cast<VirtualKOpenWithDialog::KOpenWithDialog_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KOpenWithDialog_AdjustPosition(KOpenWithDialog* self, QWidget* param1) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->adjustPosition(param1);
    } else {
        ((VirtualKOpenWithDialog*)self)->adjustPosition(param1);
    }
}

// Base class handler implementation
void KOpenWithDialog_QBaseAdjustPosition(KOpenWithDialog* self, QWidget* param1) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->setKOpenWithDialog_AdjustPosition_IsBase(true);
        vkopenwithdialog->adjustPosition(param1);
    } else {
        ((VirtualKOpenWithDialog*)self)->adjustPosition(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KOpenWithDialog_OnAdjustPosition(KOpenWithDialog* self, intptr_t slot) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->setKOpenWithDialog_AdjustPosition_Callback(reinterpret_cast<VirtualKOpenWithDialog::KOpenWithDialog_AdjustPosition_Callback>(slot));
    }
}

// Derived class handler implementation
void KOpenWithDialog_UpdateMicroFocus(KOpenWithDialog* self) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->updateMicroFocus();
    } else {
        ((VirtualKOpenWithDialog*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void KOpenWithDialog_QBaseUpdateMicroFocus(KOpenWithDialog* self) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->setKOpenWithDialog_UpdateMicroFocus_IsBase(true);
        vkopenwithdialog->updateMicroFocus();
    } else {
        ((VirtualKOpenWithDialog*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void KOpenWithDialog_OnUpdateMicroFocus(KOpenWithDialog* self, intptr_t slot) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->setKOpenWithDialog_UpdateMicroFocus_Callback(reinterpret_cast<VirtualKOpenWithDialog::KOpenWithDialog_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void KOpenWithDialog_Create(KOpenWithDialog* self) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->create();
    } else {
        ((VirtualKOpenWithDialog*)self)->create();
    }
}

// Base class handler implementation
void KOpenWithDialog_QBaseCreate(KOpenWithDialog* self) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->setKOpenWithDialog_Create_IsBase(true);
        vkopenwithdialog->create();
    } else {
        ((VirtualKOpenWithDialog*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void KOpenWithDialog_OnCreate(KOpenWithDialog* self, intptr_t slot) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->setKOpenWithDialog_Create_Callback(reinterpret_cast<VirtualKOpenWithDialog::KOpenWithDialog_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void KOpenWithDialog_Destroy(KOpenWithDialog* self) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->destroy();
    } else {
        ((VirtualKOpenWithDialog*)self)->destroy();
    }
}

// Base class handler implementation
void KOpenWithDialog_QBaseDestroy(KOpenWithDialog* self) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->setKOpenWithDialog_Destroy_IsBase(true);
        vkopenwithdialog->destroy();
    } else {
        ((VirtualKOpenWithDialog*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void KOpenWithDialog_OnDestroy(KOpenWithDialog* self, intptr_t slot) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->setKOpenWithDialog_Destroy_Callback(reinterpret_cast<VirtualKOpenWithDialog::KOpenWithDialog_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool KOpenWithDialog_FocusNextChild(KOpenWithDialog* self) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        return vkopenwithdialog->focusNextChild();
    } else {
        return ((VirtualKOpenWithDialog*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool KOpenWithDialog_QBaseFocusNextChild(KOpenWithDialog* self) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->setKOpenWithDialog_FocusNextChild_IsBase(true);
        return vkopenwithdialog->focusNextChild();
    } else {
        return ((VirtualKOpenWithDialog*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KOpenWithDialog_OnFocusNextChild(KOpenWithDialog* self, intptr_t slot) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->setKOpenWithDialog_FocusNextChild_Callback(reinterpret_cast<VirtualKOpenWithDialog::KOpenWithDialog_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KOpenWithDialog_FocusPreviousChild(KOpenWithDialog* self) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        return vkopenwithdialog->focusPreviousChild();
    } else {
        return ((VirtualKOpenWithDialog*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool KOpenWithDialog_QBaseFocusPreviousChild(KOpenWithDialog* self) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->setKOpenWithDialog_FocusPreviousChild_IsBase(true);
        return vkopenwithdialog->focusPreviousChild();
    } else {
        return ((VirtualKOpenWithDialog*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KOpenWithDialog_OnFocusPreviousChild(KOpenWithDialog* self, intptr_t slot) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->setKOpenWithDialog_FocusPreviousChild_Callback(reinterpret_cast<VirtualKOpenWithDialog::KOpenWithDialog_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KOpenWithDialog_Sender(const KOpenWithDialog* self) {
    auto* vkopenwithdialog = const_cast<VirtualKOpenWithDialog*>(dynamic_cast<const VirtualKOpenWithDialog*>(self));
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        return vkopenwithdialog->sender();
    } else {
        return ((VirtualKOpenWithDialog*)self)->sender();
    }
}

// Base class handler implementation
QObject* KOpenWithDialog_QBaseSender(const KOpenWithDialog* self) {
    auto* vkopenwithdialog = const_cast<VirtualKOpenWithDialog*>(dynamic_cast<const VirtualKOpenWithDialog*>(self));
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->setKOpenWithDialog_Sender_IsBase(true);
        return vkopenwithdialog->sender();
    } else {
        return ((VirtualKOpenWithDialog*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KOpenWithDialog_OnSender(const KOpenWithDialog* self, intptr_t slot) {
    auto* vkopenwithdialog = const_cast<VirtualKOpenWithDialog*>(dynamic_cast<const VirtualKOpenWithDialog*>(self));
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->setKOpenWithDialog_Sender_Callback(reinterpret_cast<VirtualKOpenWithDialog::KOpenWithDialog_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KOpenWithDialog_SenderSignalIndex(const KOpenWithDialog* self) {
    auto* vkopenwithdialog = const_cast<VirtualKOpenWithDialog*>(dynamic_cast<const VirtualKOpenWithDialog*>(self));
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        return vkopenwithdialog->senderSignalIndex();
    } else {
        return ((VirtualKOpenWithDialog*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KOpenWithDialog_QBaseSenderSignalIndex(const KOpenWithDialog* self) {
    auto* vkopenwithdialog = const_cast<VirtualKOpenWithDialog*>(dynamic_cast<const VirtualKOpenWithDialog*>(self));
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->setKOpenWithDialog_SenderSignalIndex_IsBase(true);
        return vkopenwithdialog->senderSignalIndex();
    } else {
        return ((VirtualKOpenWithDialog*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KOpenWithDialog_OnSenderSignalIndex(const KOpenWithDialog* self, intptr_t slot) {
    auto* vkopenwithdialog = const_cast<VirtualKOpenWithDialog*>(dynamic_cast<const VirtualKOpenWithDialog*>(self));
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->setKOpenWithDialog_SenderSignalIndex_Callback(reinterpret_cast<VirtualKOpenWithDialog::KOpenWithDialog_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KOpenWithDialog_Receivers(const KOpenWithDialog* self, const char* signal) {
    auto* vkopenwithdialog = const_cast<VirtualKOpenWithDialog*>(dynamic_cast<const VirtualKOpenWithDialog*>(self));
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        return vkopenwithdialog->receivers(signal);
    } else {
        return ((VirtualKOpenWithDialog*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KOpenWithDialog_QBaseReceivers(const KOpenWithDialog* self, const char* signal) {
    auto* vkopenwithdialog = const_cast<VirtualKOpenWithDialog*>(dynamic_cast<const VirtualKOpenWithDialog*>(self));
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->setKOpenWithDialog_Receivers_IsBase(true);
        return vkopenwithdialog->receivers(signal);
    } else {
        return ((VirtualKOpenWithDialog*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KOpenWithDialog_OnReceivers(const KOpenWithDialog* self, intptr_t slot) {
    auto* vkopenwithdialog = const_cast<VirtualKOpenWithDialog*>(dynamic_cast<const VirtualKOpenWithDialog*>(self));
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->setKOpenWithDialog_Receivers_Callback(reinterpret_cast<VirtualKOpenWithDialog::KOpenWithDialog_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KOpenWithDialog_IsSignalConnected(const KOpenWithDialog* self, const QMetaMethod* signal) {
    auto* vkopenwithdialog = const_cast<VirtualKOpenWithDialog*>(dynamic_cast<const VirtualKOpenWithDialog*>(self));
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        return vkopenwithdialog->isSignalConnected(*signal);
    } else {
        return ((VirtualKOpenWithDialog*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KOpenWithDialog_QBaseIsSignalConnected(const KOpenWithDialog* self, const QMetaMethod* signal) {
    auto* vkopenwithdialog = const_cast<VirtualKOpenWithDialog*>(dynamic_cast<const VirtualKOpenWithDialog*>(self));
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->setKOpenWithDialog_IsSignalConnected_IsBase(true);
        return vkopenwithdialog->isSignalConnected(*signal);
    } else {
        return ((VirtualKOpenWithDialog*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KOpenWithDialog_OnIsSignalConnected(const KOpenWithDialog* self, intptr_t slot) {
    auto* vkopenwithdialog = const_cast<VirtualKOpenWithDialog*>(dynamic_cast<const VirtualKOpenWithDialog*>(self));
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->setKOpenWithDialog_IsSignalConnected_Callback(reinterpret_cast<VirtualKOpenWithDialog::KOpenWithDialog_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double KOpenWithDialog_GetDecodedMetricF(const KOpenWithDialog* self, int metricA, int metricB) {
    auto* vkopenwithdialog = const_cast<VirtualKOpenWithDialog*>(dynamic_cast<const VirtualKOpenWithDialog*>(self));
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        return vkopenwithdialog->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKOpenWithDialog*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double KOpenWithDialog_QBaseGetDecodedMetricF(const KOpenWithDialog* self, int metricA, int metricB) {
    auto* vkopenwithdialog = const_cast<VirtualKOpenWithDialog*>(dynamic_cast<const VirtualKOpenWithDialog*>(self));
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->setKOpenWithDialog_GetDecodedMetricF_IsBase(true);
        return vkopenwithdialog->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKOpenWithDialog*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void KOpenWithDialog_OnGetDecodedMetricF(const KOpenWithDialog* self, intptr_t slot) {
    auto* vkopenwithdialog = const_cast<VirtualKOpenWithDialog*>(dynamic_cast<const VirtualKOpenWithDialog*>(self));
    if (vkopenwithdialog && vkopenwithdialog->isVirtualKOpenWithDialog) {
        vkopenwithdialog->setKOpenWithDialog_GetDecodedMetricF_Callback(reinterpret_cast<VirtualKOpenWithDialog::KOpenWithDialog_GetDecodedMetricF_Callback>(slot));
    }
}

void KOpenWithDialog_Delete(KOpenWithDialog* self) {
    delete self;
}
