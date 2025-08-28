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
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#define WORKAROUND_INNER_CLASS_DEFINITION_Sonnet__ConfigDialog
#include <configdialog.h>
#include "libconfigdialog.h"
#include "libconfigdialog.hxx"

Sonnet__ConfigDialog* Sonnet__ConfigDialog_new(QWidget* parent) {
    return new VirtualSonnetConfigDialog(parent);
}

QMetaObject* Sonnet__ConfigDialog_MetaObject(const Sonnet__ConfigDialog* self) {
    return (QMetaObject*)self->metaObject();
}

void* Sonnet__ConfigDialog_Metacast(Sonnet__ConfigDialog* self, const char* param1) {
    return self->qt_metacast(param1);
}

int Sonnet__ConfigDialog_Metacall(Sonnet__ConfigDialog* self, int param1, int param2, void** param3) {
    auto* vsonnet__configdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnet__configdialog && vsonnet__configdialog->isVirtualSonnetConfigDialog) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualSonnetConfigDialog*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string Sonnet__ConfigDialog_Tr(const char* s) {
    QString _ret = Sonnet::ConfigDialog::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void Sonnet__ConfigDialog_SetLanguage(Sonnet__ConfigDialog* self, const libqt_string language) {
    QString language_QString = QString::fromUtf8(language.data, language.len);
    self->setLanguage(language_QString);
}

libqt_string Sonnet__ConfigDialog_Language(const Sonnet__ConfigDialog* self) {
    QString _ret = self->language();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void Sonnet__ConfigDialog_SlotOk(Sonnet__ConfigDialog* self) {
    auto* vsonnet__configdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnet__configdialog && vsonnet__configdialog->isVirtualSonnetConfigDialog) {
        vsonnet__configdialog->slotOk();
    }
}

void Sonnet__ConfigDialog_SlotApply(Sonnet__ConfigDialog* self) {
    auto* vsonnet__configdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnet__configdialog && vsonnet__configdialog->isVirtualSonnetConfigDialog) {
        vsonnet__configdialog->slotApply();
    }
}

void Sonnet__ConfigDialog_LanguageChanged(Sonnet__ConfigDialog* self, const libqt_string language) {
    QString language_QString = QString::fromUtf8(language.data, language.len);
    self->languageChanged(language_QString);
}

void Sonnet__ConfigDialog_Connect_LanguageChanged(Sonnet__ConfigDialog* self, intptr_t slot) {
    void (*slotFunc)(Sonnet__ConfigDialog*, const char*) = reinterpret_cast<void (*)(Sonnet__ConfigDialog*, const char*)>(slot);
    Sonnet::ConfigDialog::connect(self, &Sonnet::ConfigDialog::languageChanged, [self, slotFunc](const QString& language) {
        const QString language_ret = language;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray language_b = language_ret.toUtf8();
        const char* language_str = static_cast<const char*>(malloc(language_b.length() + 1));
        memcpy((void*)language_str, language_b.data(), language_b.length());
        ((char*)language_str)[language_b.length()] = '\0';
        const char* sigval1 = language_str;
        slotFunc(self, sigval1);
        libqt_free(language_str);
    });
}

void Sonnet__ConfigDialog_ConfigChanged(Sonnet__ConfigDialog* self) {
    self->configChanged();
}

void Sonnet__ConfigDialog_Connect_ConfigChanged(Sonnet__ConfigDialog* self, intptr_t slot) {
    void (*slotFunc)(Sonnet__ConfigDialog*) = reinterpret_cast<void (*)(Sonnet__ConfigDialog*)>(slot);
    Sonnet::ConfigDialog::connect(self, &Sonnet::ConfigDialog::configChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

libqt_string Sonnet__ConfigDialog_Tr2(const char* s, const char* c) {
    QString _ret = Sonnet::ConfigDialog::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string Sonnet__ConfigDialog_Tr3(const char* s, const char* c, int n) {
    QString _ret = Sonnet::ConfigDialog::tr(s, c, static_cast<int>(n));
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
int Sonnet__ConfigDialog_QBaseMetacall(Sonnet__ConfigDialog* self, int param1, int param2, void** param3) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->setSonnet__ConfigDialog_Metacall_IsBase(true);
        return vsonnetconfigdialog->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->Sonnet::ConfigDialog::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigDialog_OnMetacall(Sonnet__ConfigDialog* self, intptr_t slot) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->setSonnet__ConfigDialog_Metacall_Callback(reinterpret_cast<VirtualSonnetConfigDialog::Sonnet__ConfigDialog_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
void Sonnet__ConfigDialog_QBaseSlotOk(Sonnet__ConfigDialog* self) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->setSonnet__ConfigDialog_SlotOk_IsBase(true);
        vsonnetconfigdialog->slotOk();
    } else {
        ((VirtualSonnetConfigDialog*)self)->slotOk();
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigDialog_OnSlotOk(Sonnet__ConfigDialog* self, intptr_t slot) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->setSonnet__ConfigDialog_SlotOk_Callback(reinterpret_cast<VirtualSonnetConfigDialog::Sonnet__ConfigDialog_SlotOk_Callback>(slot));
    }
}

// Base class handler implementation
void Sonnet__ConfigDialog_QBaseSlotApply(Sonnet__ConfigDialog* self) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->setSonnet__ConfigDialog_SlotApply_IsBase(true);
        vsonnetconfigdialog->slotApply();
    } else {
        ((VirtualSonnetConfigDialog*)self)->slotApply();
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigDialog_OnSlotApply(Sonnet__ConfigDialog* self, intptr_t slot) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->setSonnet__ConfigDialog_SlotApply_Callback(reinterpret_cast<VirtualSonnetConfigDialog::Sonnet__ConfigDialog_SlotApply_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__ConfigDialog_SetVisible(Sonnet__ConfigDialog* self, bool visible) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->setVisible(visible);
    } else {
        self->Sonnet::ConfigDialog::setVisible(visible);
    }
}

// Base class handler implementation
void Sonnet__ConfigDialog_QBaseSetVisible(Sonnet__ConfigDialog* self, bool visible) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->setSonnet__ConfigDialog_SetVisible_IsBase(true);
        vsonnetconfigdialog->setVisible(visible);
    } else {
        self->Sonnet::ConfigDialog::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigDialog_OnSetVisible(Sonnet__ConfigDialog* self, intptr_t slot) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->setSonnet__ConfigDialog_SetVisible_Callback(reinterpret_cast<VirtualSonnetConfigDialog::Sonnet__ConfigDialog_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* Sonnet__ConfigDialog_SizeHint(const Sonnet__ConfigDialog* self) {
    auto* vsonnetconfigdialog = const_cast<VirtualSonnetConfigDialog*>(dynamic_cast<const VirtualSonnetConfigDialog*>(self));
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        return new QSize(vsonnetconfigdialog->sizeHint());
    } else {
        return new QSize(((VirtualSonnetConfigDialog*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* Sonnet__ConfigDialog_QBaseSizeHint(const Sonnet__ConfigDialog* self) {
    auto* vsonnetconfigdialog = const_cast<VirtualSonnetConfigDialog*>(dynamic_cast<const VirtualSonnetConfigDialog*>(self));
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->setSonnet__ConfigDialog_SizeHint_IsBase(true);
        return new QSize(vsonnetconfigdialog->sizeHint());
    } else {
        return new QSize(((VirtualSonnetConfigDialog*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigDialog_OnSizeHint(const Sonnet__ConfigDialog* self, intptr_t slot) {
    auto* vsonnetconfigdialog = const_cast<VirtualSonnetConfigDialog*>(dynamic_cast<const VirtualSonnetConfigDialog*>(self));
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->setSonnet__ConfigDialog_SizeHint_Callback(reinterpret_cast<VirtualSonnetConfigDialog::Sonnet__ConfigDialog_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* Sonnet__ConfigDialog_MinimumSizeHint(const Sonnet__ConfigDialog* self) {
    auto* vsonnetconfigdialog = const_cast<VirtualSonnetConfigDialog*>(dynamic_cast<const VirtualSonnetConfigDialog*>(self));
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        return new QSize(vsonnetconfigdialog->minimumSizeHint());
    } else {
        return new QSize(((VirtualSonnetConfigDialog*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* Sonnet__ConfigDialog_QBaseMinimumSizeHint(const Sonnet__ConfigDialog* self) {
    auto* vsonnetconfigdialog = const_cast<VirtualSonnetConfigDialog*>(dynamic_cast<const VirtualSonnetConfigDialog*>(self));
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->setSonnet__ConfigDialog_MinimumSizeHint_IsBase(true);
        return new QSize(vsonnetconfigdialog->minimumSizeHint());
    } else {
        return new QSize(((VirtualSonnetConfigDialog*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigDialog_OnMinimumSizeHint(const Sonnet__ConfigDialog* self, intptr_t slot) {
    auto* vsonnetconfigdialog = const_cast<VirtualSonnetConfigDialog*>(dynamic_cast<const VirtualSonnetConfigDialog*>(self));
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->setSonnet__ConfigDialog_MinimumSizeHint_Callback(reinterpret_cast<VirtualSonnetConfigDialog::Sonnet__ConfigDialog_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__ConfigDialog_Open(Sonnet__ConfigDialog* self) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->open();
    } else {
        self->Sonnet::ConfigDialog::open();
    }
}

// Base class handler implementation
void Sonnet__ConfigDialog_QBaseOpen(Sonnet__ConfigDialog* self) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->setSonnet__ConfigDialog_Open_IsBase(true);
        vsonnetconfigdialog->open();
    } else {
        self->Sonnet::ConfigDialog::open();
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigDialog_OnOpen(Sonnet__ConfigDialog* self, intptr_t slot) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->setSonnet__ConfigDialog_Open_Callback(reinterpret_cast<VirtualSonnetConfigDialog::Sonnet__ConfigDialog_Open_Callback>(slot));
    }
}

// Derived class handler implementation
int Sonnet__ConfigDialog_Exec(Sonnet__ConfigDialog* self) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        return vsonnetconfigdialog->exec();
    } else {
        return self->Sonnet::ConfigDialog::exec();
    }
}

// Base class handler implementation
int Sonnet__ConfigDialog_QBaseExec(Sonnet__ConfigDialog* self) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->setSonnet__ConfigDialog_Exec_IsBase(true);
        return vsonnetconfigdialog->exec();
    } else {
        return self->Sonnet::ConfigDialog::exec();
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigDialog_OnExec(Sonnet__ConfigDialog* self, intptr_t slot) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->setSonnet__ConfigDialog_Exec_Callback(reinterpret_cast<VirtualSonnetConfigDialog::Sonnet__ConfigDialog_Exec_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__ConfigDialog_Done(Sonnet__ConfigDialog* self, int param1) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->done(static_cast<int>(param1));
    } else {
        self->Sonnet::ConfigDialog::done(static_cast<int>(param1));
    }
}

// Base class handler implementation
void Sonnet__ConfigDialog_QBaseDone(Sonnet__ConfigDialog* self, int param1) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->setSonnet__ConfigDialog_Done_IsBase(true);
        vsonnetconfigdialog->done(static_cast<int>(param1));
    } else {
        self->Sonnet::ConfigDialog::done(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigDialog_OnDone(Sonnet__ConfigDialog* self, intptr_t slot) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->setSonnet__ConfigDialog_Done_Callback(reinterpret_cast<VirtualSonnetConfigDialog::Sonnet__ConfigDialog_Done_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__ConfigDialog_Accept(Sonnet__ConfigDialog* self) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->accept();
    } else {
        self->Sonnet::ConfigDialog::accept();
    }
}

// Base class handler implementation
void Sonnet__ConfigDialog_QBaseAccept(Sonnet__ConfigDialog* self) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->setSonnet__ConfigDialog_Accept_IsBase(true);
        vsonnetconfigdialog->accept();
    } else {
        self->Sonnet::ConfigDialog::accept();
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigDialog_OnAccept(Sonnet__ConfigDialog* self, intptr_t slot) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->setSonnet__ConfigDialog_Accept_Callback(reinterpret_cast<VirtualSonnetConfigDialog::Sonnet__ConfigDialog_Accept_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__ConfigDialog_Reject(Sonnet__ConfigDialog* self) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->reject();
    } else {
        self->Sonnet::ConfigDialog::reject();
    }
}

// Base class handler implementation
void Sonnet__ConfigDialog_QBaseReject(Sonnet__ConfigDialog* self) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->setSonnet__ConfigDialog_Reject_IsBase(true);
        vsonnetconfigdialog->reject();
    } else {
        self->Sonnet::ConfigDialog::reject();
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigDialog_OnReject(Sonnet__ConfigDialog* self, intptr_t slot) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->setSonnet__ConfigDialog_Reject_Callback(reinterpret_cast<VirtualSonnetConfigDialog::Sonnet__ConfigDialog_Reject_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__ConfigDialog_KeyPressEvent(Sonnet__ConfigDialog* self, QKeyEvent* param1) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->keyPressEvent(param1);
    } else {
        ((VirtualSonnetConfigDialog*)self)->keyPressEvent(param1);
    }
}

// Base class handler implementation
void Sonnet__ConfigDialog_QBaseKeyPressEvent(Sonnet__ConfigDialog* self, QKeyEvent* param1) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->setSonnet__ConfigDialog_KeyPressEvent_IsBase(true);
        vsonnetconfigdialog->keyPressEvent(param1);
    } else {
        ((VirtualSonnetConfigDialog*)self)->keyPressEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigDialog_OnKeyPressEvent(Sonnet__ConfigDialog* self, intptr_t slot) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->setSonnet__ConfigDialog_KeyPressEvent_Callback(reinterpret_cast<VirtualSonnetConfigDialog::Sonnet__ConfigDialog_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__ConfigDialog_CloseEvent(Sonnet__ConfigDialog* self, QCloseEvent* param1) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->closeEvent(param1);
    } else {
        ((VirtualSonnetConfigDialog*)self)->closeEvent(param1);
    }
}

// Base class handler implementation
void Sonnet__ConfigDialog_QBaseCloseEvent(Sonnet__ConfigDialog* self, QCloseEvent* param1) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->setSonnet__ConfigDialog_CloseEvent_IsBase(true);
        vsonnetconfigdialog->closeEvent(param1);
    } else {
        ((VirtualSonnetConfigDialog*)self)->closeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigDialog_OnCloseEvent(Sonnet__ConfigDialog* self, intptr_t slot) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->setSonnet__ConfigDialog_CloseEvent_Callback(reinterpret_cast<VirtualSonnetConfigDialog::Sonnet__ConfigDialog_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__ConfigDialog_ShowEvent(Sonnet__ConfigDialog* self, QShowEvent* param1) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->showEvent(param1);
    } else {
        ((VirtualSonnetConfigDialog*)self)->showEvent(param1);
    }
}

// Base class handler implementation
void Sonnet__ConfigDialog_QBaseShowEvent(Sonnet__ConfigDialog* self, QShowEvent* param1) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->setSonnet__ConfigDialog_ShowEvent_IsBase(true);
        vsonnetconfigdialog->showEvent(param1);
    } else {
        ((VirtualSonnetConfigDialog*)self)->showEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigDialog_OnShowEvent(Sonnet__ConfigDialog* self, intptr_t slot) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->setSonnet__ConfigDialog_ShowEvent_Callback(reinterpret_cast<VirtualSonnetConfigDialog::Sonnet__ConfigDialog_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__ConfigDialog_ResizeEvent(Sonnet__ConfigDialog* self, QResizeEvent* param1) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->resizeEvent(param1);
    } else {
        ((VirtualSonnetConfigDialog*)self)->resizeEvent(param1);
    }
}

// Base class handler implementation
void Sonnet__ConfigDialog_QBaseResizeEvent(Sonnet__ConfigDialog* self, QResizeEvent* param1) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->setSonnet__ConfigDialog_ResizeEvent_IsBase(true);
        vsonnetconfigdialog->resizeEvent(param1);
    } else {
        ((VirtualSonnetConfigDialog*)self)->resizeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigDialog_OnResizeEvent(Sonnet__ConfigDialog* self, intptr_t slot) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->setSonnet__ConfigDialog_ResizeEvent_Callback(reinterpret_cast<VirtualSonnetConfigDialog::Sonnet__ConfigDialog_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__ConfigDialog_ContextMenuEvent(Sonnet__ConfigDialog* self, QContextMenuEvent* param1) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->contextMenuEvent(param1);
    } else {
        ((VirtualSonnetConfigDialog*)self)->contextMenuEvent(param1);
    }
}

// Base class handler implementation
void Sonnet__ConfigDialog_QBaseContextMenuEvent(Sonnet__ConfigDialog* self, QContextMenuEvent* param1) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->setSonnet__ConfigDialog_ContextMenuEvent_IsBase(true);
        vsonnetconfigdialog->contextMenuEvent(param1);
    } else {
        ((VirtualSonnetConfigDialog*)self)->contextMenuEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigDialog_OnContextMenuEvent(Sonnet__ConfigDialog* self, intptr_t slot) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->setSonnet__ConfigDialog_ContextMenuEvent_Callback(reinterpret_cast<VirtualSonnetConfigDialog::Sonnet__ConfigDialog_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool Sonnet__ConfigDialog_EventFilter(Sonnet__ConfigDialog* self, QObject* param1, QEvent* param2) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        return vsonnetconfigdialog->eventFilter(param1, param2);
    } else {
        return ((VirtualSonnetConfigDialog*)self)->eventFilter(param1, param2);
    }
}

// Base class handler implementation
bool Sonnet__ConfigDialog_QBaseEventFilter(Sonnet__ConfigDialog* self, QObject* param1, QEvent* param2) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->setSonnet__ConfigDialog_EventFilter_IsBase(true);
        return vsonnetconfigdialog->eventFilter(param1, param2);
    } else {
        return ((VirtualSonnetConfigDialog*)self)->eventFilter(param1, param2);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigDialog_OnEventFilter(Sonnet__ConfigDialog* self, intptr_t slot) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->setSonnet__ConfigDialog_EventFilter_Callback(reinterpret_cast<VirtualSonnetConfigDialog::Sonnet__ConfigDialog_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
int Sonnet__ConfigDialog_DevType(const Sonnet__ConfigDialog* self) {
    auto* vsonnetconfigdialog = const_cast<VirtualSonnetConfigDialog*>(dynamic_cast<const VirtualSonnetConfigDialog*>(self));
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        return vsonnetconfigdialog->devType();
    } else {
        return self->Sonnet::ConfigDialog::devType();
    }
}

// Base class handler implementation
int Sonnet__ConfigDialog_QBaseDevType(const Sonnet__ConfigDialog* self) {
    auto* vsonnetconfigdialog = const_cast<VirtualSonnetConfigDialog*>(dynamic_cast<const VirtualSonnetConfigDialog*>(self));
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->setSonnet__ConfigDialog_DevType_IsBase(true);
        return vsonnetconfigdialog->devType();
    } else {
        return self->Sonnet::ConfigDialog::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigDialog_OnDevType(const Sonnet__ConfigDialog* self, intptr_t slot) {
    auto* vsonnetconfigdialog = const_cast<VirtualSonnetConfigDialog*>(dynamic_cast<const VirtualSonnetConfigDialog*>(self));
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->setSonnet__ConfigDialog_DevType_Callback(reinterpret_cast<VirtualSonnetConfigDialog::Sonnet__ConfigDialog_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
int Sonnet__ConfigDialog_HeightForWidth(const Sonnet__ConfigDialog* self, int param1) {
    auto* vsonnetconfigdialog = const_cast<VirtualSonnetConfigDialog*>(dynamic_cast<const VirtualSonnetConfigDialog*>(self));
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        return vsonnetconfigdialog->heightForWidth(static_cast<int>(param1));
    } else {
        return self->Sonnet::ConfigDialog::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int Sonnet__ConfigDialog_QBaseHeightForWidth(const Sonnet__ConfigDialog* self, int param1) {
    auto* vsonnetconfigdialog = const_cast<VirtualSonnetConfigDialog*>(dynamic_cast<const VirtualSonnetConfigDialog*>(self));
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->setSonnet__ConfigDialog_HeightForWidth_IsBase(true);
        return vsonnetconfigdialog->heightForWidth(static_cast<int>(param1));
    } else {
        return self->Sonnet::ConfigDialog::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigDialog_OnHeightForWidth(const Sonnet__ConfigDialog* self, intptr_t slot) {
    auto* vsonnetconfigdialog = const_cast<VirtualSonnetConfigDialog*>(dynamic_cast<const VirtualSonnetConfigDialog*>(self));
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->setSonnet__ConfigDialog_HeightForWidth_Callback(reinterpret_cast<VirtualSonnetConfigDialog::Sonnet__ConfigDialog_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool Sonnet__ConfigDialog_HasHeightForWidth(const Sonnet__ConfigDialog* self) {
    auto* vsonnetconfigdialog = const_cast<VirtualSonnetConfigDialog*>(dynamic_cast<const VirtualSonnetConfigDialog*>(self));
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        return vsonnetconfigdialog->hasHeightForWidth();
    } else {
        return self->Sonnet::ConfigDialog::hasHeightForWidth();
    }
}

// Base class handler implementation
bool Sonnet__ConfigDialog_QBaseHasHeightForWidth(const Sonnet__ConfigDialog* self) {
    auto* vsonnetconfigdialog = const_cast<VirtualSonnetConfigDialog*>(dynamic_cast<const VirtualSonnetConfigDialog*>(self));
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->setSonnet__ConfigDialog_HasHeightForWidth_IsBase(true);
        return vsonnetconfigdialog->hasHeightForWidth();
    } else {
        return self->Sonnet::ConfigDialog::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigDialog_OnHasHeightForWidth(const Sonnet__ConfigDialog* self, intptr_t slot) {
    auto* vsonnetconfigdialog = const_cast<VirtualSonnetConfigDialog*>(dynamic_cast<const VirtualSonnetConfigDialog*>(self));
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->setSonnet__ConfigDialog_HasHeightForWidth_Callback(reinterpret_cast<VirtualSonnetConfigDialog::Sonnet__ConfigDialog_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* Sonnet__ConfigDialog_PaintEngine(const Sonnet__ConfigDialog* self) {
    auto* vsonnetconfigdialog = const_cast<VirtualSonnetConfigDialog*>(dynamic_cast<const VirtualSonnetConfigDialog*>(self));
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        return vsonnetconfigdialog->paintEngine();
    } else {
        return self->Sonnet::ConfigDialog::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* Sonnet__ConfigDialog_QBasePaintEngine(const Sonnet__ConfigDialog* self) {
    auto* vsonnetconfigdialog = const_cast<VirtualSonnetConfigDialog*>(dynamic_cast<const VirtualSonnetConfigDialog*>(self));
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->setSonnet__ConfigDialog_PaintEngine_IsBase(true);
        return vsonnetconfigdialog->paintEngine();
    } else {
        return self->Sonnet::ConfigDialog::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigDialog_OnPaintEngine(const Sonnet__ConfigDialog* self, intptr_t slot) {
    auto* vsonnetconfigdialog = const_cast<VirtualSonnetConfigDialog*>(dynamic_cast<const VirtualSonnetConfigDialog*>(self));
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->setSonnet__ConfigDialog_PaintEngine_Callback(reinterpret_cast<VirtualSonnetConfigDialog::Sonnet__ConfigDialog_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
bool Sonnet__ConfigDialog_Event(Sonnet__ConfigDialog* self, QEvent* event) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        return vsonnetconfigdialog->event(event);
    } else {
        return ((VirtualSonnetConfigDialog*)self)->event(event);
    }
}

// Base class handler implementation
bool Sonnet__ConfigDialog_QBaseEvent(Sonnet__ConfigDialog* self, QEvent* event) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->setSonnet__ConfigDialog_Event_IsBase(true);
        return vsonnetconfigdialog->event(event);
    } else {
        return ((VirtualSonnetConfigDialog*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigDialog_OnEvent(Sonnet__ConfigDialog* self, intptr_t slot) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->setSonnet__ConfigDialog_Event_Callback(reinterpret_cast<VirtualSonnetConfigDialog::Sonnet__ConfigDialog_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__ConfigDialog_MousePressEvent(Sonnet__ConfigDialog* self, QMouseEvent* event) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->mousePressEvent(event);
    } else {
        ((VirtualSonnetConfigDialog*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void Sonnet__ConfigDialog_QBaseMousePressEvent(Sonnet__ConfigDialog* self, QMouseEvent* event) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->setSonnet__ConfigDialog_MousePressEvent_IsBase(true);
        vsonnetconfigdialog->mousePressEvent(event);
    } else {
        ((VirtualSonnetConfigDialog*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigDialog_OnMousePressEvent(Sonnet__ConfigDialog* self, intptr_t slot) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->setSonnet__ConfigDialog_MousePressEvent_Callback(reinterpret_cast<VirtualSonnetConfigDialog::Sonnet__ConfigDialog_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__ConfigDialog_MouseReleaseEvent(Sonnet__ConfigDialog* self, QMouseEvent* event) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->mouseReleaseEvent(event);
    } else {
        ((VirtualSonnetConfigDialog*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void Sonnet__ConfigDialog_QBaseMouseReleaseEvent(Sonnet__ConfigDialog* self, QMouseEvent* event) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->setSonnet__ConfigDialog_MouseReleaseEvent_IsBase(true);
        vsonnetconfigdialog->mouseReleaseEvent(event);
    } else {
        ((VirtualSonnetConfigDialog*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigDialog_OnMouseReleaseEvent(Sonnet__ConfigDialog* self, intptr_t slot) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->setSonnet__ConfigDialog_MouseReleaseEvent_Callback(reinterpret_cast<VirtualSonnetConfigDialog::Sonnet__ConfigDialog_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__ConfigDialog_MouseDoubleClickEvent(Sonnet__ConfigDialog* self, QMouseEvent* event) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->mouseDoubleClickEvent(event);
    } else {
        ((VirtualSonnetConfigDialog*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void Sonnet__ConfigDialog_QBaseMouseDoubleClickEvent(Sonnet__ConfigDialog* self, QMouseEvent* event) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->setSonnet__ConfigDialog_MouseDoubleClickEvent_IsBase(true);
        vsonnetconfigdialog->mouseDoubleClickEvent(event);
    } else {
        ((VirtualSonnetConfigDialog*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigDialog_OnMouseDoubleClickEvent(Sonnet__ConfigDialog* self, intptr_t slot) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->setSonnet__ConfigDialog_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualSonnetConfigDialog::Sonnet__ConfigDialog_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__ConfigDialog_MouseMoveEvent(Sonnet__ConfigDialog* self, QMouseEvent* event) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->mouseMoveEvent(event);
    } else {
        ((VirtualSonnetConfigDialog*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void Sonnet__ConfigDialog_QBaseMouseMoveEvent(Sonnet__ConfigDialog* self, QMouseEvent* event) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->setSonnet__ConfigDialog_MouseMoveEvent_IsBase(true);
        vsonnetconfigdialog->mouseMoveEvent(event);
    } else {
        ((VirtualSonnetConfigDialog*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigDialog_OnMouseMoveEvent(Sonnet__ConfigDialog* self, intptr_t slot) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->setSonnet__ConfigDialog_MouseMoveEvent_Callback(reinterpret_cast<VirtualSonnetConfigDialog::Sonnet__ConfigDialog_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__ConfigDialog_WheelEvent(Sonnet__ConfigDialog* self, QWheelEvent* event) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->wheelEvent(event);
    } else {
        ((VirtualSonnetConfigDialog*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void Sonnet__ConfigDialog_QBaseWheelEvent(Sonnet__ConfigDialog* self, QWheelEvent* event) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->setSonnet__ConfigDialog_WheelEvent_IsBase(true);
        vsonnetconfigdialog->wheelEvent(event);
    } else {
        ((VirtualSonnetConfigDialog*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigDialog_OnWheelEvent(Sonnet__ConfigDialog* self, intptr_t slot) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->setSonnet__ConfigDialog_WheelEvent_Callback(reinterpret_cast<VirtualSonnetConfigDialog::Sonnet__ConfigDialog_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__ConfigDialog_KeyReleaseEvent(Sonnet__ConfigDialog* self, QKeyEvent* event) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->keyReleaseEvent(event);
    } else {
        ((VirtualSonnetConfigDialog*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void Sonnet__ConfigDialog_QBaseKeyReleaseEvent(Sonnet__ConfigDialog* self, QKeyEvent* event) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->setSonnet__ConfigDialog_KeyReleaseEvent_IsBase(true);
        vsonnetconfigdialog->keyReleaseEvent(event);
    } else {
        ((VirtualSonnetConfigDialog*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigDialog_OnKeyReleaseEvent(Sonnet__ConfigDialog* self, intptr_t slot) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->setSonnet__ConfigDialog_KeyReleaseEvent_Callback(reinterpret_cast<VirtualSonnetConfigDialog::Sonnet__ConfigDialog_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__ConfigDialog_FocusInEvent(Sonnet__ConfigDialog* self, QFocusEvent* event) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->focusInEvent(event);
    } else {
        ((VirtualSonnetConfigDialog*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void Sonnet__ConfigDialog_QBaseFocusInEvent(Sonnet__ConfigDialog* self, QFocusEvent* event) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->setSonnet__ConfigDialog_FocusInEvent_IsBase(true);
        vsonnetconfigdialog->focusInEvent(event);
    } else {
        ((VirtualSonnetConfigDialog*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigDialog_OnFocusInEvent(Sonnet__ConfigDialog* self, intptr_t slot) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->setSonnet__ConfigDialog_FocusInEvent_Callback(reinterpret_cast<VirtualSonnetConfigDialog::Sonnet__ConfigDialog_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__ConfigDialog_FocusOutEvent(Sonnet__ConfigDialog* self, QFocusEvent* event) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->focusOutEvent(event);
    } else {
        ((VirtualSonnetConfigDialog*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void Sonnet__ConfigDialog_QBaseFocusOutEvent(Sonnet__ConfigDialog* self, QFocusEvent* event) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->setSonnet__ConfigDialog_FocusOutEvent_IsBase(true);
        vsonnetconfigdialog->focusOutEvent(event);
    } else {
        ((VirtualSonnetConfigDialog*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigDialog_OnFocusOutEvent(Sonnet__ConfigDialog* self, intptr_t slot) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->setSonnet__ConfigDialog_FocusOutEvent_Callback(reinterpret_cast<VirtualSonnetConfigDialog::Sonnet__ConfigDialog_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__ConfigDialog_EnterEvent(Sonnet__ConfigDialog* self, QEnterEvent* event) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->enterEvent(event);
    } else {
        ((VirtualSonnetConfigDialog*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void Sonnet__ConfigDialog_QBaseEnterEvent(Sonnet__ConfigDialog* self, QEnterEvent* event) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->setSonnet__ConfigDialog_EnterEvent_IsBase(true);
        vsonnetconfigdialog->enterEvent(event);
    } else {
        ((VirtualSonnetConfigDialog*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigDialog_OnEnterEvent(Sonnet__ConfigDialog* self, intptr_t slot) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->setSonnet__ConfigDialog_EnterEvent_Callback(reinterpret_cast<VirtualSonnetConfigDialog::Sonnet__ConfigDialog_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__ConfigDialog_LeaveEvent(Sonnet__ConfigDialog* self, QEvent* event) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->leaveEvent(event);
    } else {
        ((VirtualSonnetConfigDialog*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void Sonnet__ConfigDialog_QBaseLeaveEvent(Sonnet__ConfigDialog* self, QEvent* event) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->setSonnet__ConfigDialog_LeaveEvent_IsBase(true);
        vsonnetconfigdialog->leaveEvent(event);
    } else {
        ((VirtualSonnetConfigDialog*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigDialog_OnLeaveEvent(Sonnet__ConfigDialog* self, intptr_t slot) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->setSonnet__ConfigDialog_LeaveEvent_Callback(reinterpret_cast<VirtualSonnetConfigDialog::Sonnet__ConfigDialog_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__ConfigDialog_PaintEvent(Sonnet__ConfigDialog* self, QPaintEvent* event) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->paintEvent(event);
    } else {
        ((VirtualSonnetConfigDialog*)self)->paintEvent(event);
    }
}

// Base class handler implementation
void Sonnet__ConfigDialog_QBasePaintEvent(Sonnet__ConfigDialog* self, QPaintEvent* event) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->setSonnet__ConfigDialog_PaintEvent_IsBase(true);
        vsonnetconfigdialog->paintEvent(event);
    } else {
        ((VirtualSonnetConfigDialog*)self)->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigDialog_OnPaintEvent(Sonnet__ConfigDialog* self, intptr_t slot) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->setSonnet__ConfigDialog_PaintEvent_Callback(reinterpret_cast<VirtualSonnetConfigDialog::Sonnet__ConfigDialog_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__ConfigDialog_MoveEvent(Sonnet__ConfigDialog* self, QMoveEvent* event) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->moveEvent(event);
    } else {
        ((VirtualSonnetConfigDialog*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void Sonnet__ConfigDialog_QBaseMoveEvent(Sonnet__ConfigDialog* self, QMoveEvent* event) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->setSonnet__ConfigDialog_MoveEvent_IsBase(true);
        vsonnetconfigdialog->moveEvent(event);
    } else {
        ((VirtualSonnetConfigDialog*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigDialog_OnMoveEvent(Sonnet__ConfigDialog* self, intptr_t slot) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->setSonnet__ConfigDialog_MoveEvent_Callback(reinterpret_cast<VirtualSonnetConfigDialog::Sonnet__ConfigDialog_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__ConfigDialog_TabletEvent(Sonnet__ConfigDialog* self, QTabletEvent* event) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->tabletEvent(event);
    } else {
        ((VirtualSonnetConfigDialog*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void Sonnet__ConfigDialog_QBaseTabletEvent(Sonnet__ConfigDialog* self, QTabletEvent* event) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->setSonnet__ConfigDialog_TabletEvent_IsBase(true);
        vsonnetconfigdialog->tabletEvent(event);
    } else {
        ((VirtualSonnetConfigDialog*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigDialog_OnTabletEvent(Sonnet__ConfigDialog* self, intptr_t slot) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->setSonnet__ConfigDialog_TabletEvent_Callback(reinterpret_cast<VirtualSonnetConfigDialog::Sonnet__ConfigDialog_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__ConfigDialog_ActionEvent(Sonnet__ConfigDialog* self, QActionEvent* event) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->actionEvent(event);
    } else {
        ((VirtualSonnetConfigDialog*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void Sonnet__ConfigDialog_QBaseActionEvent(Sonnet__ConfigDialog* self, QActionEvent* event) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->setSonnet__ConfigDialog_ActionEvent_IsBase(true);
        vsonnetconfigdialog->actionEvent(event);
    } else {
        ((VirtualSonnetConfigDialog*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigDialog_OnActionEvent(Sonnet__ConfigDialog* self, intptr_t slot) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->setSonnet__ConfigDialog_ActionEvent_Callback(reinterpret_cast<VirtualSonnetConfigDialog::Sonnet__ConfigDialog_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__ConfigDialog_DragEnterEvent(Sonnet__ConfigDialog* self, QDragEnterEvent* event) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->dragEnterEvent(event);
    } else {
        ((VirtualSonnetConfigDialog*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void Sonnet__ConfigDialog_QBaseDragEnterEvent(Sonnet__ConfigDialog* self, QDragEnterEvent* event) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->setSonnet__ConfigDialog_DragEnterEvent_IsBase(true);
        vsonnetconfigdialog->dragEnterEvent(event);
    } else {
        ((VirtualSonnetConfigDialog*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigDialog_OnDragEnterEvent(Sonnet__ConfigDialog* self, intptr_t slot) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->setSonnet__ConfigDialog_DragEnterEvent_Callback(reinterpret_cast<VirtualSonnetConfigDialog::Sonnet__ConfigDialog_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__ConfigDialog_DragMoveEvent(Sonnet__ConfigDialog* self, QDragMoveEvent* event) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->dragMoveEvent(event);
    } else {
        ((VirtualSonnetConfigDialog*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void Sonnet__ConfigDialog_QBaseDragMoveEvent(Sonnet__ConfigDialog* self, QDragMoveEvent* event) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->setSonnet__ConfigDialog_DragMoveEvent_IsBase(true);
        vsonnetconfigdialog->dragMoveEvent(event);
    } else {
        ((VirtualSonnetConfigDialog*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigDialog_OnDragMoveEvent(Sonnet__ConfigDialog* self, intptr_t slot) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->setSonnet__ConfigDialog_DragMoveEvent_Callback(reinterpret_cast<VirtualSonnetConfigDialog::Sonnet__ConfigDialog_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__ConfigDialog_DragLeaveEvent(Sonnet__ConfigDialog* self, QDragLeaveEvent* event) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->dragLeaveEvent(event);
    } else {
        ((VirtualSonnetConfigDialog*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void Sonnet__ConfigDialog_QBaseDragLeaveEvent(Sonnet__ConfigDialog* self, QDragLeaveEvent* event) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->setSonnet__ConfigDialog_DragLeaveEvent_IsBase(true);
        vsonnetconfigdialog->dragLeaveEvent(event);
    } else {
        ((VirtualSonnetConfigDialog*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigDialog_OnDragLeaveEvent(Sonnet__ConfigDialog* self, intptr_t slot) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->setSonnet__ConfigDialog_DragLeaveEvent_Callback(reinterpret_cast<VirtualSonnetConfigDialog::Sonnet__ConfigDialog_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__ConfigDialog_DropEvent(Sonnet__ConfigDialog* self, QDropEvent* event) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->dropEvent(event);
    } else {
        ((VirtualSonnetConfigDialog*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void Sonnet__ConfigDialog_QBaseDropEvent(Sonnet__ConfigDialog* self, QDropEvent* event) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->setSonnet__ConfigDialog_DropEvent_IsBase(true);
        vsonnetconfigdialog->dropEvent(event);
    } else {
        ((VirtualSonnetConfigDialog*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigDialog_OnDropEvent(Sonnet__ConfigDialog* self, intptr_t slot) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->setSonnet__ConfigDialog_DropEvent_Callback(reinterpret_cast<VirtualSonnetConfigDialog::Sonnet__ConfigDialog_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__ConfigDialog_HideEvent(Sonnet__ConfigDialog* self, QHideEvent* event) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->hideEvent(event);
    } else {
        ((VirtualSonnetConfigDialog*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void Sonnet__ConfigDialog_QBaseHideEvent(Sonnet__ConfigDialog* self, QHideEvent* event) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->setSonnet__ConfigDialog_HideEvent_IsBase(true);
        vsonnetconfigdialog->hideEvent(event);
    } else {
        ((VirtualSonnetConfigDialog*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigDialog_OnHideEvent(Sonnet__ConfigDialog* self, intptr_t slot) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->setSonnet__ConfigDialog_HideEvent_Callback(reinterpret_cast<VirtualSonnetConfigDialog::Sonnet__ConfigDialog_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool Sonnet__ConfigDialog_NativeEvent(Sonnet__ConfigDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        return vsonnetconfigdialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualSonnetConfigDialog*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool Sonnet__ConfigDialog_QBaseNativeEvent(Sonnet__ConfigDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->setSonnet__ConfigDialog_NativeEvent_IsBase(true);
        return vsonnetconfigdialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualSonnetConfigDialog*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigDialog_OnNativeEvent(Sonnet__ConfigDialog* self, intptr_t slot) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->setSonnet__ConfigDialog_NativeEvent_Callback(reinterpret_cast<VirtualSonnetConfigDialog::Sonnet__ConfigDialog_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__ConfigDialog_ChangeEvent(Sonnet__ConfigDialog* self, QEvent* param1) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->changeEvent(param1);
    } else {
        ((VirtualSonnetConfigDialog*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void Sonnet__ConfigDialog_QBaseChangeEvent(Sonnet__ConfigDialog* self, QEvent* param1) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->setSonnet__ConfigDialog_ChangeEvent_IsBase(true);
        vsonnetconfigdialog->changeEvent(param1);
    } else {
        ((VirtualSonnetConfigDialog*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigDialog_OnChangeEvent(Sonnet__ConfigDialog* self, intptr_t slot) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->setSonnet__ConfigDialog_ChangeEvent_Callback(reinterpret_cast<VirtualSonnetConfigDialog::Sonnet__ConfigDialog_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int Sonnet__ConfigDialog_Metric(const Sonnet__ConfigDialog* self, int param1) {
    auto* vsonnetconfigdialog = const_cast<VirtualSonnetConfigDialog*>(dynamic_cast<const VirtualSonnetConfigDialog*>(self));
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        return vsonnetconfigdialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualSonnetConfigDialog*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int Sonnet__ConfigDialog_QBaseMetric(const Sonnet__ConfigDialog* self, int param1) {
    auto* vsonnetconfigdialog = const_cast<VirtualSonnetConfigDialog*>(dynamic_cast<const VirtualSonnetConfigDialog*>(self));
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->setSonnet__ConfigDialog_Metric_IsBase(true);
        return vsonnetconfigdialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualSonnetConfigDialog*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigDialog_OnMetric(const Sonnet__ConfigDialog* self, intptr_t slot) {
    auto* vsonnetconfigdialog = const_cast<VirtualSonnetConfigDialog*>(dynamic_cast<const VirtualSonnetConfigDialog*>(self));
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->setSonnet__ConfigDialog_Metric_Callback(reinterpret_cast<VirtualSonnetConfigDialog::Sonnet__ConfigDialog_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__ConfigDialog_InitPainter(const Sonnet__ConfigDialog* self, QPainter* painter) {
    auto* vsonnetconfigdialog = const_cast<VirtualSonnetConfigDialog*>(dynamic_cast<const VirtualSonnetConfigDialog*>(self));
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->initPainter(painter);
    } else {
        ((VirtualSonnetConfigDialog*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void Sonnet__ConfigDialog_QBaseInitPainter(const Sonnet__ConfigDialog* self, QPainter* painter) {
    auto* vsonnetconfigdialog = const_cast<VirtualSonnetConfigDialog*>(dynamic_cast<const VirtualSonnetConfigDialog*>(self));
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->setSonnet__ConfigDialog_InitPainter_IsBase(true);
        vsonnetconfigdialog->initPainter(painter);
    } else {
        ((VirtualSonnetConfigDialog*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigDialog_OnInitPainter(const Sonnet__ConfigDialog* self, intptr_t slot) {
    auto* vsonnetconfigdialog = const_cast<VirtualSonnetConfigDialog*>(dynamic_cast<const VirtualSonnetConfigDialog*>(self));
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->setSonnet__ConfigDialog_InitPainter_Callback(reinterpret_cast<VirtualSonnetConfigDialog::Sonnet__ConfigDialog_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* Sonnet__ConfigDialog_Redirected(const Sonnet__ConfigDialog* self, QPoint* offset) {
    auto* vsonnetconfigdialog = const_cast<VirtualSonnetConfigDialog*>(dynamic_cast<const VirtualSonnetConfigDialog*>(self));
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        return vsonnetconfigdialog->redirected(offset);
    } else {
        return ((VirtualSonnetConfigDialog*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* Sonnet__ConfigDialog_QBaseRedirected(const Sonnet__ConfigDialog* self, QPoint* offset) {
    auto* vsonnetconfigdialog = const_cast<VirtualSonnetConfigDialog*>(dynamic_cast<const VirtualSonnetConfigDialog*>(self));
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->setSonnet__ConfigDialog_Redirected_IsBase(true);
        return vsonnetconfigdialog->redirected(offset);
    } else {
        return ((VirtualSonnetConfigDialog*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigDialog_OnRedirected(const Sonnet__ConfigDialog* self, intptr_t slot) {
    auto* vsonnetconfigdialog = const_cast<VirtualSonnetConfigDialog*>(dynamic_cast<const VirtualSonnetConfigDialog*>(self));
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->setSonnet__ConfigDialog_Redirected_Callback(reinterpret_cast<VirtualSonnetConfigDialog::Sonnet__ConfigDialog_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* Sonnet__ConfigDialog_SharedPainter(const Sonnet__ConfigDialog* self) {
    auto* vsonnetconfigdialog = const_cast<VirtualSonnetConfigDialog*>(dynamic_cast<const VirtualSonnetConfigDialog*>(self));
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        return vsonnetconfigdialog->sharedPainter();
    } else {
        return ((VirtualSonnetConfigDialog*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* Sonnet__ConfigDialog_QBaseSharedPainter(const Sonnet__ConfigDialog* self) {
    auto* vsonnetconfigdialog = const_cast<VirtualSonnetConfigDialog*>(dynamic_cast<const VirtualSonnetConfigDialog*>(self));
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->setSonnet__ConfigDialog_SharedPainter_IsBase(true);
        return vsonnetconfigdialog->sharedPainter();
    } else {
        return ((VirtualSonnetConfigDialog*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigDialog_OnSharedPainter(const Sonnet__ConfigDialog* self, intptr_t slot) {
    auto* vsonnetconfigdialog = const_cast<VirtualSonnetConfigDialog*>(dynamic_cast<const VirtualSonnetConfigDialog*>(self));
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->setSonnet__ConfigDialog_SharedPainter_Callback(reinterpret_cast<VirtualSonnetConfigDialog::Sonnet__ConfigDialog_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__ConfigDialog_InputMethodEvent(Sonnet__ConfigDialog* self, QInputMethodEvent* param1) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->inputMethodEvent(param1);
    } else {
        ((VirtualSonnetConfigDialog*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void Sonnet__ConfigDialog_QBaseInputMethodEvent(Sonnet__ConfigDialog* self, QInputMethodEvent* param1) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->setSonnet__ConfigDialog_InputMethodEvent_IsBase(true);
        vsonnetconfigdialog->inputMethodEvent(param1);
    } else {
        ((VirtualSonnetConfigDialog*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigDialog_OnInputMethodEvent(Sonnet__ConfigDialog* self, intptr_t slot) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->setSonnet__ConfigDialog_InputMethodEvent_Callback(reinterpret_cast<VirtualSonnetConfigDialog::Sonnet__ConfigDialog_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* Sonnet__ConfigDialog_InputMethodQuery(const Sonnet__ConfigDialog* self, int param1) {
    auto* vsonnetconfigdialog = const_cast<VirtualSonnetConfigDialog*>(dynamic_cast<const VirtualSonnetConfigDialog*>(self));
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        return new QVariant(vsonnetconfigdialog->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualSonnetConfigDialog*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* Sonnet__ConfigDialog_QBaseInputMethodQuery(const Sonnet__ConfigDialog* self, int param1) {
    auto* vsonnetconfigdialog = const_cast<VirtualSonnetConfigDialog*>(dynamic_cast<const VirtualSonnetConfigDialog*>(self));
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->setSonnet__ConfigDialog_InputMethodQuery_IsBase(true);
        return new QVariant(vsonnetconfigdialog->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualSonnetConfigDialog*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigDialog_OnInputMethodQuery(const Sonnet__ConfigDialog* self, intptr_t slot) {
    auto* vsonnetconfigdialog = const_cast<VirtualSonnetConfigDialog*>(dynamic_cast<const VirtualSonnetConfigDialog*>(self));
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->setSonnet__ConfigDialog_InputMethodQuery_Callback(reinterpret_cast<VirtualSonnetConfigDialog::Sonnet__ConfigDialog_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool Sonnet__ConfigDialog_FocusNextPrevChild(Sonnet__ConfigDialog* self, bool next) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        return vsonnetconfigdialog->focusNextPrevChild(next);
    } else {
        return ((VirtualSonnetConfigDialog*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool Sonnet__ConfigDialog_QBaseFocusNextPrevChild(Sonnet__ConfigDialog* self, bool next) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->setSonnet__ConfigDialog_FocusNextPrevChild_IsBase(true);
        return vsonnetconfigdialog->focusNextPrevChild(next);
    } else {
        return ((VirtualSonnetConfigDialog*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigDialog_OnFocusNextPrevChild(Sonnet__ConfigDialog* self, intptr_t slot) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->setSonnet__ConfigDialog_FocusNextPrevChild_Callback(reinterpret_cast<VirtualSonnetConfigDialog::Sonnet__ConfigDialog_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__ConfigDialog_TimerEvent(Sonnet__ConfigDialog* self, QTimerEvent* event) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->timerEvent(event);
    } else {
        ((VirtualSonnetConfigDialog*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void Sonnet__ConfigDialog_QBaseTimerEvent(Sonnet__ConfigDialog* self, QTimerEvent* event) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->setSonnet__ConfigDialog_TimerEvent_IsBase(true);
        vsonnetconfigdialog->timerEvent(event);
    } else {
        ((VirtualSonnetConfigDialog*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigDialog_OnTimerEvent(Sonnet__ConfigDialog* self, intptr_t slot) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->setSonnet__ConfigDialog_TimerEvent_Callback(reinterpret_cast<VirtualSonnetConfigDialog::Sonnet__ConfigDialog_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__ConfigDialog_ChildEvent(Sonnet__ConfigDialog* self, QChildEvent* event) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->childEvent(event);
    } else {
        ((VirtualSonnetConfigDialog*)self)->childEvent(event);
    }
}

// Base class handler implementation
void Sonnet__ConfigDialog_QBaseChildEvent(Sonnet__ConfigDialog* self, QChildEvent* event) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->setSonnet__ConfigDialog_ChildEvent_IsBase(true);
        vsonnetconfigdialog->childEvent(event);
    } else {
        ((VirtualSonnetConfigDialog*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigDialog_OnChildEvent(Sonnet__ConfigDialog* self, intptr_t slot) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->setSonnet__ConfigDialog_ChildEvent_Callback(reinterpret_cast<VirtualSonnetConfigDialog::Sonnet__ConfigDialog_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__ConfigDialog_CustomEvent(Sonnet__ConfigDialog* self, QEvent* event) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->customEvent(event);
    } else {
        ((VirtualSonnetConfigDialog*)self)->customEvent(event);
    }
}

// Base class handler implementation
void Sonnet__ConfigDialog_QBaseCustomEvent(Sonnet__ConfigDialog* self, QEvent* event) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->setSonnet__ConfigDialog_CustomEvent_IsBase(true);
        vsonnetconfigdialog->customEvent(event);
    } else {
        ((VirtualSonnetConfigDialog*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigDialog_OnCustomEvent(Sonnet__ConfigDialog* self, intptr_t slot) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->setSonnet__ConfigDialog_CustomEvent_Callback(reinterpret_cast<VirtualSonnetConfigDialog::Sonnet__ConfigDialog_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__ConfigDialog_ConnectNotify(Sonnet__ConfigDialog* self, const QMetaMethod* signal) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->connectNotify(*signal);
    } else {
        ((VirtualSonnetConfigDialog*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void Sonnet__ConfigDialog_QBaseConnectNotify(Sonnet__ConfigDialog* self, const QMetaMethod* signal) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->setSonnet__ConfigDialog_ConnectNotify_IsBase(true);
        vsonnetconfigdialog->connectNotify(*signal);
    } else {
        ((VirtualSonnetConfigDialog*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigDialog_OnConnectNotify(Sonnet__ConfigDialog* self, intptr_t slot) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->setSonnet__ConfigDialog_ConnectNotify_Callback(reinterpret_cast<VirtualSonnetConfigDialog::Sonnet__ConfigDialog_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__ConfigDialog_DisconnectNotify(Sonnet__ConfigDialog* self, const QMetaMethod* signal) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->disconnectNotify(*signal);
    } else {
        ((VirtualSonnetConfigDialog*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void Sonnet__ConfigDialog_QBaseDisconnectNotify(Sonnet__ConfigDialog* self, const QMetaMethod* signal) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->setSonnet__ConfigDialog_DisconnectNotify_IsBase(true);
        vsonnetconfigdialog->disconnectNotify(*signal);
    } else {
        ((VirtualSonnetConfigDialog*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigDialog_OnDisconnectNotify(Sonnet__ConfigDialog* self, intptr_t slot) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->setSonnet__ConfigDialog_DisconnectNotify_Callback(reinterpret_cast<VirtualSonnetConfigDialog::Sonnet__ConfigDialog_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__ConfigDialog_AdjustPosition(Sonnet__ConfigDialog* self, QWidget* param1) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->adjustPosition(param1);
    } else {
        ((VirtualSonnetConfigDialog*)self)->adjustPosition(param1);
    }
}

// Base class handler implementation
void Sonnet__ConfigDialog_QBaseAdjustPosition(Sonnet__ConfigDialog* self, QWidget* param1) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->setSonnet__ConfigDialog_AdjustPosition_IsBase(true);
        vsonnetconfigdialog->adjustPosition(param1);
    } else {
        ((VirtualSonnetConfigDialog*)self)->adjustPosition(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigDialog_OnAdjustPosition(Sonnet__ConfigDialog* self, intptr_t slot) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->setSonnet__ConfigDialog_AdjustPosition_Callback(reinterpret_cast<VirtualSonnetConfigDialog::Sonnet__ConfigDialog_AdjustPosition_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__ConfigDialog_UpdateMicroFocus(Sonnet__ConfigDialog* self) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->updateMicroFocus();
    } else {
        ((VirtualSonnetConfigDialog*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void Sonnet__ConfigDialog_QBaseUpdateMicroFocus(Sonnet__ConfigDialog* self) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->setSonnet__ConfigDialog_UpdateMicroFocus_IsBase(true);
        vsonnetconfigdialog->updateMicroFocus();
    } else {
        ((VirtualSonnetConfigDialog*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigDialog_OnUpdateMicroFocus(Sonnet__ConfigDialog* self, intptr_t slot) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->setSonnet__ConfigDialog_UpdateMicroFocus_Callback(reinterpret_cast<VirtualSonnetConfigDialog::Sonnet__ConfigDialog_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__ConfigDialog_Create(Sonnet__ConfigDialog* self) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->create();
    } else {
        ((VirtualSonnetConfigDialog*)self)->create();
    }
}

// Base class handler implementation
void Sonnet__ConfigDialog_QBaseCreate(Sonnet__ConfigDialog* self) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->setSonnet__ConfigDialog_Create_IsBase(true);
        vsonnetconfigdialog->create();
    } else {
        ((VirtualSonnetConfigDialog*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigDialog_OnCreate(Sonnet__ConfigDialog* self, intptr_t slot) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->setSonnet__ConfigDialog_Create_Callback(reinterpret_cast<VirtualSonnetConfigDialog::Sonnet__ConfigDialog_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__ConfigDialog_Destroy(Sonnet__ConfigDialog* self) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->destroy();
    } else {
        ((VirtualSonnetConfigDialog*)self)->destroy();
    }
}

// Base class handler implementation
void Sonnet__ConfigDialog_QBaseDestroy(Sonnet__ConfigDialog* self) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->setSonnet__ConfigDialog_Destroy_IsBase(true);
        vsonnetconfigdialog->destroy();
    } else {
        ((VirtualSonnetConfigDialog*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigDialog_OnDestroy(Sonnet__ConfigDialog* self, intptr_t slot) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->setSonnet__ConfigDialog_Destroy_Callback(reinterpret_cast<VirtualSonnetConfigDialog::Sonnet__ConfigDialog_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool Sonnet__ConfigDialog_FocusNextChild(Sonnet__ConfigDialog* self) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        return vsonnetconfigdialog->focusNextChild();
    } else {
        return ((VirtualSonnetConfigDialog*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool Sonnet__ConfigDialog_QBaseFocusNextChild(Sonnet__ConfigDialog* self) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->setSonnet__ConfigDialog_FocusNextChild_IsBase(true);
        return vsonnetconfigdialog->focusNextChild();
    } else {
        return ((VirtualSonnetConfigDialog*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigDialog_OnFocusNextChild(Sonnet__ConfigDialog* self, intptr_t slot) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->setSonnet__ConfigDialog_FocusNextChild_Callback(reinterpret_cast<VirtualSonnetConfigDialog::Sonnet__ConfigDialog_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool Sonnet__ConfigDialog_FocusPreviousChild(Sonnet__ConfigDialog* self) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        return vsonnetconfigdialog->focusPreviousChild();
    } else {
        return ((VirtualSonnetConfigDialog*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool Sonnet__ConfigDialog_QBaseFocusPreviousChild(Sonnet__ConfigDialog* self) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->setSonnet__ConfigDialog_FocusPreviousChild_IsBase(true);
        return vsonnetconfigdialog->focusPreviousChild();
    } else {
        return ((VirtualSonnetConfigDialog*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigDialog_OnFocusPreviousChild(Sonnet__ConfigDialog* self, intptr_t slot) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->setSonnet__ConfigDialog_FocusPreviousChild_Callback(reinterpret_cast<VirtualSonnetConfigDialog::Sonnet__ConfigDialog_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* Sonnet__ConfigDialog_Sender(const Sonnet__ConfigDialog* self) {
    auto* vsonnetconfigdialog = const_cast<VirtualSonnetConfigDialog*>(dynamic_cast<const VirtualSonnetConfigDialog*>(self));
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        return vsonnetconfigdialog->sender();
    } else {
        return ((VirtualSonnetConfigDialog*)self)->sender();
    }
}

// Base class handler implementation
QObject* Sonnet__ConfigDialog_QBaseSender(const Sonnet__ConfigDialog* self) {
    auto* vsonnetconfigdialog = const_cast<VirtualSonnetConfigDialog*>(dynamic_cast<const VirtualSonnetConfigDialog*>(self));
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->setSonnet__ConfigDialog_Sender_IsBase(true);
        return vsonnetconfigdialog->sender();
    } else {
        return ((VirtualSonnetConfigDialog*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigDialog_OnSender(const Sonnet__ConfigDialog* self, intptr_t slot) {
    auto* vsonnetconfigdialog = const_cast<VirtualSonnetConfigDialog*>(dynamic_cast<const VirtualSonnetConfigDialog*>(self));
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->setSonnet__ConfigDialog_Sender_Callback(reinterpret_cast<VirtualSonnetConfigDialog::Sonnet__ConfigDialog_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int Sonnet__ConfigDialog_SenderSignalIndex(const Sonnet__ConfigDialog* self) {
    auto* vsonnetconfigdialog = const_cast<VirtualSonnetConfigDialog*>(dynamic_cast<const VirtualSonnetConfigDialog*>(self));
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        return vsonnetconfigdialog->senderSignalIndex();
    } else {
        return ((VirtualSonnetConfigDialog*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int Sonnet__ConfigDialog_QBaseSenderSignalIndex(const Sonnet__ConfigDialog* self) {
    auto* vsonnetconfigdialog = const_cast<VirtualSonnetConfigDialog*>(dynamic_cast<const VirtualSonnetConfigDialog*>(self));
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->setSonnet__ConfigDialog_SenderSignalIndex_IsBase(true);
        return vsonnetconfigdialog->senderSignalIndex();
    } else {
        return ((VirtualSonnetConfigDialog*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigDialog_OnSenderSignalIndex(const Sonnet__ConfigDialog* self, intptr_t slot) {
    auto* vsonnetconfigdialog = const_cast<VirtualSonnetConfigDialog*>(dynamic_cast<const VirtualSonnetConfigDialog*>(self));
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->setSonnet__ConfigDialog_SenderSignalIndex_Callback(reinterpret_cast<VirtualSonnetConfigDialog::Sonnet__ConfigDialog_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int Sonnet__ConfigDialog_Receivers(const Sonnet__ConfigDialog* self, const char* signal) {
    auto* vsonnetconfigdialog = const_cast<VirtualSonnetConfigDialog*>(dynamic_cast<const VirtualSonnetConfigDialog*>(self));
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        return vsonnetconfigdialog->receivers(signal);
    } else {
        return ((VirtualSonnetConfigDialog*)self)->receivers(signal);
    }
}

// Base class handler implementation
int Sonnet__ConfigDialog_QBaseReceivers(const Sonnet__ConfigDialog* self, const char* signal) {
    auto* vsonnetconfigdialog = const_cast<VirtualSonnetConfigDialog*>(dynamic_cast<const VirtualSonnetConfigDialog*>(self));
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->setSonnet__ConfigDialog_Receivers_IsBase(true);
        return vsonnetconfigdialog->receivers(signal);
    } else {
        return ((VirtualSonnetConfigDialog*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigDialog_OnReceivers(const Sonnet__ConfigDialog* self, intptr_t slot) {
    auto* vsonnetconfigdialog = const_cast<VirtualSonnetConfigDialog*>(dynamic_cast<const VirtualSonnetConfigDialog*>(self));
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->setSonnet__ConfigDialog_Receivers_Callback(reinterpret_cast<VirtualSonnetConfigDialog::Sonnet__ConfigDialog_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool Sonnet__ConfigDialog_IsSignalConnected(const Sonnet__ConfigDialog* self, const QMetaMethod* signal) {
    auto* vsonnetconfigdialog = const_cast<VirtualSonnetConfigDialog*>(dynamic_cast<const VirtualSonnetConfigDialog*>(self));
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        return vsonnetconfigdialog->isSignalConnected(*signal);
    } else {
        return ((VirtualSonnetConfigDialog*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool Sonnet__ConfigDialog_QBaseIsSignalConnected(const Sonnet__ConfigDialog* self, const QMetaMethod* signal) {
    auto* vsonnetconfigdialog = const_cast<VirtualSonnetConfigDialog*>(dynamic_cast<const VirtualSonnetConfigDialog*>(self));
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->setSonnet__ConfigDialog_IsSignalConnected_IsBase(true);
        return vsonnetconfigdialog->isSignalConnected(*signal);
    } else {
        return ((VirtualSonnetConfigDialog*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigDialog_OnIsSignalConnected(const Sonnet__ConfigDialog* self, intptr_t slot) {
    auto* vsonnetconfigdialog = const_cast<VirtualSonnetConfigDialog*>(dynamic_cast<const VirtualSonnetConfigDialog*>(self));
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->setSonnet__ConfigDialog_IsSignalConnected_Callback(reinterpret_cast<VirtualSonnetConfigDialog::Sonnet__ConfigDialog_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double Sonnet__ConfigDialog_GetDecodedMetricF(const Sonnet__ConfigDialog* self, int metricA, int metricB) {
    auto* vsonnetconfigdialog = const_cast<VirtualSonnetConfigDialog*>(dynamic_cast<const VirtualSonnetConfigDialog*>(self));
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        return vsonnetconfigdialog->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualSonnetConfigDialog*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double Sonnet__ConfigDialog_QBaseGetDecodedMetricF(const Sonnet__ConfigDialog* self, int metricA, int metricB) {
    auto* vsonnetconfigdialog = const_cast<VirtualSonnetConfigDialog*>(dynamic_cast<const VirtualSonnetConfigDialog*>(self));
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->setSonnet__ConfigDialog_GetDecodedMetricF_IsBase(true);
        return vsonnetconfigdialog->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualSonnetConfigDialog*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigDialog_OnGetDecodedMetricF(const Sonnet__ConfigDialog* self, intptr_t slot) {
    auto* vsonnetconfigdialog = const_cast<VirtualSonnetConfigDialog*>(dynamic_cast<const VirtualSonnetConfigDialog*>(self));
    if (vsonnetconfigdialog && vsonnetconfigdialog->isVirtualSonnetConfigDialog) {
        vsonnetconfigdialog->setSonnet__ConfigDialog_GetDecodedMetricF_Callback(reinterpret_cast<VirtualSonnetConfigDialog::Sonnet__ConfigDialog_GetDecodedMetricF_Callback>(slot));
    }
}

void Sonnet__ConfigDialog_Delete(Sonnet__ConfigDialog* self) {
    delete self;
}
