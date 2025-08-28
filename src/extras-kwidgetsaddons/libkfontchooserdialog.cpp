#include <KFontChooserDialog>
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
#include <QFont>
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
#include <kfontchooserdialog.h>
#include "libkfontchooserdialog.h"
#include "libkfontchooserdialog.hxx"

KFontChooserDialog* KFontChooserDialog_new() {
    return new VirtualKFontChooserDialog();
}

KFontChooserDialog* KFontChooserDialog_new2(const int* flags) {
    return new VirtualKFontChooserDialog((const KFontChooser::DisplayFlags&)(*flags));
}

KFontChooserDialog* KFontChooserDialog_new3(const int* flags, QWidget* parent) {
    return new VirtualKFontChooserDialog((const KFontChooser::DisplayFlags&)(*flags), parent);
}

QMetaObject* KFontChooserDialog_MetaObject(const KFontChooserDialog* self) {
    return (QMetaObject*)self->metaObject();
}

void* KFontChooserDialog_Metacast(KFontChooserDialog* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KFontChooserDialog_Metacall(KFontChooserDialog* self, int param1, int param2, void** param3) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKFontChooserDialog*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KFontChooserDialog_Tr(const char* s) {
    QString _ret = KFontChooserDialog::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KFontChooserDialog_SetFont(KFontChooserDialog* self, const QFont* font) {
    self->setFont(*font);
}

QFont* KFontChooserDialog_Font(const KFontChooserDialog* self) {
    return new QFont(self->font());
}

int KFontChooserDialog_GetFont(QFont* theFont) {
    return KFontChooserDialog::getFont(*theFont);
}

int KFontChooserDialog_GetFontDiff(QFont* theFont, int* diffFlags) {
    return KFontChooserDialog::getFontDiff(*theFont, (KFontChooser::FontDiffFlags&)(*diffFlags));
}

void KFontChooserDialog_FontSelected(KFontChooserDialog* self, const QFont* font) {
    self->fontSelected(*font);
}

void KFontChooserDialog_Connect_FontSelected(KFontChooserDialog* self, intptr_t slot) {
    void (*slotFunc)(KFontChooserDialog*, QFont*) = reinterpret_cast<void (*)(KFontChooserDialog*, QFont*)>(slot);
    KFontChooserDialog::connect(self, &KFontChooserDialog::fontSelected, [self, slotFunc](const QFont& font) {
        const QFont& font_ret = font;
        // Cast returned reference into pointer
        QFont* sigval1 = const_cast<QFont*>(&font_ret);
        slotFunc(self, sigval1);
    });
}

libqt_string KFontChooserDialog_Tr2(const char* s, const char* c) {
    QString _ret = KFontChooserDialog::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KFontChooserDialog_Tr3(const char* s, const char* c, int n) {
    QString _ret = KFontChooserDialog::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KFontChooserDialog_SetFont2(KFontChooserDialog* self, const QFont* font, bool onlyFixed) {
    self->setFont(*font, onlyFixed);
}

int KFontChooserDialog_GetFont2(QFont* theFont, const int* flags) {
    return KFontChooserDialog::getFont(*theFont, (const KFontChooser::DisplayFlags&)(*flags));
}

int KFontChooserDialog_GetFont3(QFont* theFont, const int* flags, QWidget* parent) {
    return KFontChooserDialog::getFont(*theFont, (const KFontChooser::DisplayFlags&)(*flags), parent);
}

int KFontChooserDialog_GetFontDiff3(QFont* theFont, int* diffFlags, const int* flags) {
    return KFontChooserDialog::getFontDiff(*theFont, (KFontChooser::FontDiffFlags&)(*diffFlags), (const KFontChooser::DisplayFlags&)(*flags));
}

int KFontChooserDialog_GetFontDiff4(QFont* theFont, int* diffFlags, const int* flags, QWidget* parent) {
    return KFontChooserDialog::getFontDiff(*theFont, (KFontChooser::FontDiffFlags&)(*diffFlags), (const KFontChooser::DisplayFlags&)(*flags), parent);
}

// Base class handler implementation
int KFontChooserDialog_QBaseMetacall(KFontChooserDialog* self, int param1, int param2, void** param3) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->setKFontChooserDialog_Metacall_IsBase(true);
        return vkfontchooserdialog->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KFontChooserDialog::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontChooserDialog_OnMetacall(KFontChooserDialog* self, intptr_t slot) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->setKFontChooserDialog_Metacall_Callback(reinterpret_cast<VirtualKFontChooserDialog::KFontChooserDialog_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
void KFontChooserDialog_SetVisible(KFontChooserDialog* self, bool visible) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->setVisible(visible);
    } else {
        self->KFontChooserDialog::setVisible(visible);
    }
}

// Base class handler implementation
void KFontChooserDialog_QBaseSetVisible(KFontChooserDialog* self, bool visible) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->setKFontChooserDialog_SetVisible_IsBase(true);
        vkfontchooserdialog->setVisible(visible);
    } else {
        self->KFontChooserDialog::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontChooserDialog_OnSetVisible(KFontChooserDialog* self, intptr_t slot) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->setKFontChooserDialog_SetVisible_Callback(reinterpret_cast<VirtualKFontChooserDialog::KFontChooserDialog_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KFontChooserDialog_SizeHint(const KFontChooserDialog* self) {
    auto* vkfontchooserdialog = const_cast<VirtualKFontChooserDialog*>(dynamic_cast<const VirtualKFontChooserDialog*>(self));
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        return new QSize(vkfontchooserdialog->sizeHint());
    } else {
        return new QSize(((VirtualKFontChooserDialog*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* KFontChooserDialog_QBaseSizeHint(const KFontChooserDialog* self) {
    auto* vkfontchooserdialog = const_cast<VirtualKFontChooserDialog*>(dynamic_cast<const VirtualKFontChooserDialog*>(self));
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->setKFontChooserDialog_SizeHint_IsBase(true);
        return new QSize(vkfontchooserdialog->sizeHint());
    } else {
        return new QSize(((VirtualKFontChooserDialog*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KFontChooserDialog_OnSizeHint(const KFontChooserDialog* self, intptr_t slot) {
    auto* vkfontchooserdialog = const_cast<VirtualKFontChooserDialog*>(dynamic_cast<const VirtualKFontChooserDialog*>(self));
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->setKFontChooserDialog_SizeHint_Callback(reinterpret_cast<VirtualKFontChooserDialog::KFontChooserDialog_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KFontChooserDialog_MinimumSizeHint(const KFontChooserDialog* self) {
    auto* vkfontchooserdialog = const_cast<VirtualKFontChooserDialog*>(dynamic_cast<const VirtualKFontChooserDialog*>(self));
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        return new QSize(vkfontchooserdialog->minimumSizeHint());
    } else {
        return new QSize(((VirtualKFontChooserDialog*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* KFontChooserDialog_QBaseMinimumSizeHint(const KFontChooserDialog* self) {
    auto* vkfontchooserdialog = const_cast<VirtualKFontChooserDialog*>(dynamic_cast<const VirtualKFontChooserDialog*>(self));
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->setKFontChooserDialog_MinimumSizeHint_IsBase(true);
        return new QSize(vkfontchooserdialog->minimumSizeHint());
    } else {
        return new QSize(((VirtualKFontChooserDialog*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KFontChooserDialog_OnMinimumSizeHint(const KFontChooserDialog* self, intptr_t slot) {
    auto* vkfontchooserdialog = const_cast<VirtualKFontChooserDialog*>(dynamic_cast<const VirtualKFontChooserDialog*>(self));
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->setKFontChooserDialog_MinimumSizeHint_Callback(reinterpret_cast<VirtualKFontChooserDialog::KFontChooserDialog_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void KFontChooserDialog_Open(KFontChooserDialog* self) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->open();
    } else {
        self->KFontChooserDialog::open();
    }
}

// Base class handler implementation
void KFontChooserDialog_QBaseOpen(KFontChooserDialog* self) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->setKFontChooserDialog_Open_IsBase(true);
        vkfontchooserdialog->open();
    } else {
        self->KFontChooserDialog::open();
    }
}

// Auxiliary method to allow providing re-implementation
void KFontChooserDialog_OnOpen(KFontChooserDialog* self, intptr_t slot) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->setKFontChooserDialog_Open_Callback(reinterpret_cast<VirtualKFontChooserDialog::KFontChooserDialog_Open_Callback>(slot));
    }
}

// Derived class handler implementation
int KFontChooserDialog_Exec(KFontChooserDialog* self) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        return vkfontchooserdialog->exec();
    } else {
        return self->KFontChooserDialog::exec();
    }
}

// Base class handler implementation
int KFontChooserDialog_QBaseExec(KFontChooserDialog* self) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->setKFontChooserDialog_Exec_IsBase(true);
        return vkfontchooserdialog->exec();
    } else {
        return self->KFontChooserDialog::exec();
    }
}

// Auxiliary method to allow providing re-implementation
void KFontChooserDialog_OnExec(KFontChooserDialog* self, intptr_t slot) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->setKFontChooserDialog_Exec_Callback(reinterpret_cast<VirtualKFontChooserDialog::KFontChooserDialog_Exec_Callback>(slot));
    }
}

// Derived class handler implementation
void KFontChooserDialog_Done(KFontChooserDialog* self, int param1) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->done(static_cast<int>(param1));
    } else {
        self->KFontChooserDialog::done(static_cast<int>(param1));
    }
}

// Base class handler implementation
void KFontChooserDialog_QBaseDone(KFontChooserDialog* self, int param1) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->setKFontChooserDialog_Done_IsBase(true);
        vkfontchooserdialog->done(static_cast<int>(param1));
    } else {
        self->KFontChooserDialog::done(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KFontChooserDialog_OnDone(KFontChooserDialog* self, intptr_t slot) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->setKFontChooserDialog_Done_Callback(reinterpret_cast<VirtualKFontChooserDialog::KFontChooserDialog_Done_Callback>(slot));
    }
}

// Derived class handler implementation
void KFontChooserDialog_Accept(KFontChooserDialog* self) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->accept();
    } else {
        self->KFontChooserDialog::accept();
    }
}

// Base class handler implementation
void KFontChooserDialog_QBaseAccept(KFontChooserDialog* self) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->setKFontChooserDialog_Accept_IsBase(true);
        vkfontchooserdialog->accept();
    } else {
        self->KFontChooserDialog::accept();
    }
}

// Auxiliary method to allow providing re-implementation
void KFontChooserDialog_OnAccept(KFontChooserDialog* self, intptr_t slot) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->setKFontChooserDialog_Accept_Callback(reinterpret_cast<VirtualKFontChooserDialog::KFontChooserDialog_Accept_Callback>(slot));
    }
}

// Derived class handler implementation
void KFontChooserDialog_Reject(KFontChooserDialog* self) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->reject();
    } else {
        self->KFontChooserDialog::reject();
    }
}

// Base class handler implementation
void KFontChooserDialog_QBaseReject(KFontChooserDialog* self) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->setKFontChooserDialog_Reject_IsBase(true);
        vkfontchooserdialog->reject();
    } else {
        self->KFontChooserDialog::reject();
    }
}

// Auxiliary method to allow providing re-implementation
void KFontChooserDialog_OnReject(KFontChooserDialog* self, intptr_t slot) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->setKFontChooserDialog_Reject_Callback(reinterpret_cast<VirtualKFontChooserDialog::KFontChooserDialog_Reject_Callback>(slot));
    }
}

// Derived class handler implementation
void KFontChooserDialog_KeyPressEvent(KFontChooserDialog* self, QKeyEvent* param1) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->keyPressEvent(param1);
    } else {
        ((VirtualKFontChooserDialog*)self)->keyPressEvent(param1);
    }
}

// Base class handler implementation
void KFontChooserDialog_QBaseKeyPressEvent(KFontChooserDialog* self, QKeyEvent* param1) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->setKFontChooserDialog_KeyPressEvent_IsBase(true);
        vkfontchooserdialog->keyPressEvent(param1);
    } else {
        ((VirtualKFontChooserDialog*)self)->keyPressEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontChooserDialog_OnKeyPressEvent(KFontChooserDialog* self, intptr_t slot) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->setKFontChooserDialog_KeyPressEvent_Callback(reinterpret_cast<VirtualKFontChooserDialog::KFontChooserDialog_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFontChooserDialog_CloseEvent(KFontChooserDialog* self, QCloseEvent* param1) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->closeEvent(param1);
    } else {
        ((VirtualKFontChooserDialog*)self)->closeEvent(param1);
    }
}

// Base class handler implementation
void KFontChooserDialog_QBaseCloseEvent(KFontChooserDialog* self, QCloseEvent* param1) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->setKFontChooserDialog_CloseEvent_IsBase(true);
        vkfontchooserdialog->closeEvent(param1);
    } else {
        ((VirtualKFontChooserDialog*)self)->closeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontChooserDialog_OnCloseEvent(KFontChooserDialog* self, intptr_t slot) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->setKFontChooserDialog_CloseEvent_Callback(reinterpret_cast<VirtualKFontChooserDialog::KFontChooserDialog_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFontChooserDialog_ShowEvent(KFontChooserDialog* self, QShowEvent* param1) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->showEvent(param1);
    } else {
        ((VirtualKFontChooserDialog*)self)->showEvent(param1);
    }
}

// Base class handler implementation
void KFontChooserDialog_QBaseShowEvent(KFontChooserDialog* self, QShowEvent* param1) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->setKFontChooserDialog_ShowEvent_IsBase(true);
        vkfontchooserdialog->showEvent(param1);
    } else {
        ((VirtualKFontChooserDialog*)self)->showEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontChooserDialog_OnShowEvent(KFontChooserDialog* self, intptr_t slot) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->setKFontChooserDialog_ShowEvent_Callback(reinterpret_cast<VirtualKFontChooserDialog::KFontChooserDialog_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFontChooserDialog_ResizeEvent(KFontChooserDialog* self, QResizeEvent* param1) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->resizeEvent(param1);
    } else {
        ((VirtualKFontChooserDialog*)self)->resizeEvent(param1);
    }
}

// Base class handler implementation
void KFontChooserDialog_QBaseResizeEvent(KFontChooserDialog* self, QResizeEvent* param1) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->setKFontChooserDialog_ResizeEvent_IsBase(true);
        vkfontchooserdialog->resizeEvent(param1);
    } else {
        ((VirtualKFontChooserDialog*)self)->resizeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontChooserDialog_OnResizeEvent(KFontChooserDialog* self, intptr_t slot) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->setKFontChooserDialog_ResizeEvent_Callback(reinterpret_cast<VirtualKFontChooserDialog::KFontChooserDialog_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFontChooserDialog_ContextMenuEvent(KFontChooserDialog* self, QContextMenuEvent* param1) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->contextMenuEvent(param1);
    } else {
        ((VirtualKFontChooserDialog*)self)->contextMenuEvent(param1);
    }
}

// Base class handler implementation
void KFontChooserDialog_QBaseContextMenuEvent(KFontChooserDialog* self, QContextMenuEvent* param1) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->setKFontChooserDialog_ContextMenuEvent_IsBase(true);
        vkfontchooserdialog->contextMenuEvent(param1);
    } else {
        ((VirtualKFontChooserDialog*)self)->contextMenuEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontChooserDialog_OnContextMenuEvent(KFontChooserDialog* self, intptr_t slot) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->setKFontChooserDialog_ContextMenuEvent_Callback(reinterpret_cast<VirtualKFontChooserDialog::KFontChooserDialog_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KFontChooserDialog_EventFilter(KFontChooserDialog* self, QObject* param1, QEvent* param2) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        return vkfontchooserdialog->eventFilter(param1, param2);
    } else {
        return ((VirtualKFontChooserDialog*)self)->eventFilter(param1, param2);
    }
}

// Base class handler implementation
bool KFontChooserDialog_QBaseEventFilter(KFontChooserDialog* self, QObject* param1, QEvent* param2) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->setKFontChooserDialog_EventFilter_IsBase(true);
        return vkfontchooserdialog->eventFilter(param1, param2);
    } else {
        return ((VirtualKFontChooserDialog*)self)->eventFilter(param1, param2);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontChooserDialog_OnEventFilter(KFontChooserDialog* self, intptr_t slot) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->setKFontChooserDialog_EventFilter_Callback(reinterpret_cast<VirtualKFontChooserDialog::KFontChooserDialog_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
int KFontChooserDialog_DevType(const KFontChooserDialog* self) {
    auto* vkfontchooserdialog = const_cast<VirtualKFontChooserDialog*>(dynamic_cast<const VirtualKFontChooserDialog*>(self));
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        return vkfontchooserdialog->devType();
    } else {
        return self->KFontChooserDialog::devType();
    }
}

// Base class handler implementation
int KFontChooserDialog_QBaseDevType(const KFontChooserDialog* self) {
    auto* vkfontchooserdialog = const_cast<VirtualKFontChooserDialog*>(dynamic_cast<const VirtualKFontChooserDialog*>(self));
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->setKFontChooserDialog_DevType_IsBase(true);
        return vkfontchooserdialog->devType();
    } else {
        return self->KFontChooserDialog::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void KFontChooserDialog_OnDevType(const KFontChooserDialog* self, intptr_t slot) {
    auto* vkfontchooserdialog = const_cast<VirtualKFontChooserDialog*>(dynamic_cast<const VirtualKFontChooserDialog*>(self));
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->setKFontChooserDialog_DevType_Callback(reinterpret_cast<VirtualKFontChooserDialog::KFontChooserDialog_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
int KFontChooserDialog_HeightForWidth(const KFontChooserDialog* self, int param1) {
    auto* vkfontchooserdialog = const_cast<VirtualKFontChooserDialog*>(dynamic_cast<const VirtualKFontChooserDialog*>(self));
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        return vkfontchooserdialog->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KFontChooserDialog::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int KFontChooserDialog_QBaseHeightForWidth(const KFontChooserDialog* self, int param1) {
    auto* vkfontchooserdialog = const_cast<VirtualKFontChooserDialog*>(dynamic_cast<const VirtualKFontChooserDialog*>(self));
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->setKFontChooserDialog_HeightForWidth_IsBase(true);
        return vkfontchooserdialog->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KFontChooserDialog::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KFontChooserDialog_OnHeightForWidth(const KFontChooserDialog* self, intptr_t slot) {
    auto* vkfontchooserdialog = const_cast<VirtualKFontChooserDialog*>(dynamic_cast<const VirtualKFontChooserDialog*>(self));
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->setKFontChooserDialog_HeightForWidth_Callback(reinterpret_cast<VirtualKFontChooserDialog::KFontChooserDialog_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool KFontChooserDialog_HasHeightForWidth(const KFontChooserDialog* self) {
    auto* vkfontchooserdialog = const_cast<VirtualKFontChooserDialog*>(dynamic_cast<const VirtualKFontChooserDialog*>(self));
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        return vkfontchooserdialog->hasHeightForWidth();
    } else {
        return self->KFontChooserDialog::hasHeightForWidth();
    }
}

// Base class handler implementation
bool KFontChooserDialog_QBaseHasHeightForWidth(const KFontChooserDialog* self) {
    auto* vkfontchooserdialog = const_cast<VirtualKFontChooserDialog*>(dynamic_cast<const VirtualKFontChooserDialog*>(self));
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->setKFontChooserDialog_HasHeightForWidth_IsBase(true);
        return vkfontchooserdialog->hasHeightForWidth();
    } else {
        return self->KFontChooserDialog::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void KFontChooserDialog_OnHasHeightForWidth(const KFontChooserDialog* self, intptr_t slot) {
    auto* vkfontchooserdialog = const_cast<VirtualKFontChooserDialog*>(dynamic_cast<const VirtualKFontChooserDialog*>(self));
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->setKFontChooserDialog_HasHeightForWidth_Callback(reinterpret_cast<VirtualKFontChooserDialog::KFontChooserDialog_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* KFontChooserDialog_PaintEngine(const KFontChooserDialog* self) {
    auto* vkfontchooserdialog = const_cast<VirtualKFontChooserDialog*>(dynamic_cast<const VirtualKFontChooserDialog*>(self));
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        return vkfontchooserdialog->paintEngine();
    } else {
        return self->KFontChooserDialog::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* KFontChooserDialog_QBasePaintEngine(const KFontChooserDialog* self) {
    auto* vkfontchooserdialog = const_cast<VirtualKFontChooserDialog*>(dynamic_cast<const VirtualKFontChooserDialog*>(self));
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->setKFontChooserDialog_PaintEngine_IsBase(true);
        return vkfontchooserdialog->paintEngine();
    } else {
        return self->KFontChooserDialog::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void KFontChooserDialog_OnPaintEngine(const KFontChooserDialog* self, intptr_t slot) {
    auto* vkfontchooserdialog = const_cast<VirtualKFontChooserDialog*>(dynamic_cast<const VirtualKFontChooserDialog*>(self));
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->setKFontChooserDialog_PaintEngine_Callback(reinterpret_cast<VirtualKFontChooserDialog::KFontChooserDialog_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
bool KFontChooserDialog_Event(KFontChooserDialog* self, QEvent* event) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        return vkfontchooserdialog->event(event);
    } else {
        return ((VirtualKFontChooserDialog*)self)->event(event);
    }
}

// Base class handler implementation
bool KFontChooserDialog_QBaseEvent(KFontChooserDialog* self, QEvent* event) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->setKFontChooserDialog_Event_IsBase(true);
        return vkfontchooserdialog->event(event);
    } else {
        return ((VirtualKFontChooserDialog*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontChooserDialog_OnEvent(KFontChooserDialog* self, intptr_t slot) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->setKFontChooserDialog_Event_Callback(reinterpret_cast<VirtualKFontChooserDialog::KFontChooserDialog_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void KFontChooserDialog_MousePressEvent(KFontChooserDialog* self, QMouseEvent* event) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->mousePressEvent(event);
    } else {
        ((VirtualKFontChooserDialog*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void KFontChooserDialog_QBaseMousePressEvent(KFontChooserDialog* self, QMouseEvent* event) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->setKFontChooserDialog_MousePressEvent_IsBase(true);
        vkfontchooserdialog->mousePressEvent(event);
    } else {
        ((VirtualKFontChooserDialog*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontChooserDialog_OnMousePressEvent(KFontChooserDialog* self, intptr_t slot) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->setKFontChooserDialog_MousePressEvent_Callback(reinterpret_cast<VirtualKFontChooserDialog::KFontChooserDialog_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFontChooserDialog_MouseReleaseEvent(KFontChooserDialog* self, QMouseEvent* event) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->mouseReleaseEvent(event);
    } else {
        ((VirtualKFontChooserDialog*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void KFontChooserDialog_QBaseMouseReleaseEvent(KFontChooserDialog* self, QMouseEvent* event) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->setKFontChooserDialog_MouseReleaseEvent_IsBase(true);
        vkfontchooserdialog->mouseReleaseEvent(event);
    } else {
        ((VirtualKFontChooserDialog*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontChooserDialog_OnMouseReleaseEvent(KFontChooserDialog* self, intptr_t slot) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->setKFontChooserDialog_MouseReleaseEvent_Callback(reinterpret_cast<VirtualKFontChooserDialog::KFontChooserDialog_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFontChooserDialog_MouseDoubleClickEvent(KFontChooserDialog* self, QMouseEvent* event) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKFontChooserDialog*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void KFontChooserDialog_QBaseMouseDoubleClickEvent(KFontChooserDialog* self, QMouseEvent* event) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->setKFontChooserDialog_MouseDoubleClickEvent_IsBase(true);
        vkfontchooserdialog->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKFontChooserDialog*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontChooserDialog_OnMouseDoubleClickEvent(KFontChooserDialog* self, intptr_t slot) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->setKFontChooserDialog_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualKFontChooserDialog::KFontChooserDialog_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFontChooserDialog_MouseMoveEvent(KFontChooserDialog* self, QMouseEvent* event) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->mouseMoveEvent(event);
    } else {
        ((VirtualKFontChooserDialog*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void KFontChooserDialog_QBaseMouseMoveEvent(KFontChooserDialog* self, QMouseEvent* event) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->setKFontChooserDialog_MouseMoveEvent_IsBase(true);
        vkfontchooserdialog->mouseMoveEvent(event);
    } else {
        ((VirtualKFontChooserDialog*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontChooserDialog_OnMouseMoveEvent(KFontChooserDialog* self, intptr_t slot) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->setKFontChooserDialog_MouseMoveEvent_Callback(reinterpret_cast<VirtualKFontChooserDialog::KFontChooserDialog_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFontChooserDialog_WheelEvent(KFontChooserDialog* self, QWheelEvent* event) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->wheelEvent(event);
    } else {
        ((VirtualKFontChooserDialog*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void KFontChooserDialog_QBaseWheelEvent(KFontChooserDialog* self, QWheelEvent* event) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->setKFontChooserDialog_WheelEvent_IsBase(true);
        vkfontchooserdialog->wheelEvent(event);
    } else {
        ((VirtualKFontChooserDialog*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontChooserDialog_OnWheelEvent(KFontChooserDialog* self, intptr_t slot) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->setKFontChooserDialog_WheelEvent_Callback(reinterpret_cast<VirtualKFontChooserDialog::KFontChooserDialog_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFontChooserDialog_KeyReleaseEvent(KFontChooserDialog* self, QKeyEvent* event) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->keyReleaseEvent(event);
    } else {
        ((VirtualKFontChooserDialog*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void KFontChooserDialog_QBaseKeyReleaseEvent(KFontChooserDialog* self, QKeyEvent* event) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->setKFontChooserDialog_KeyReleaseEvent_IsBase(true);
        vkfontchooserdialog->keyReleaseEvent(event);
    } else {
        ((VirtualKFontChooserDialog*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontChooserDialog_OnKeyReleaseEvent(KFontChooserDialog* self, intptr_t slot) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->setKFontChooserDialog_KeyReleaseEvent_Callback(reinterpret_cast<VirtualKFontChooserDialog::KFontChooserDialog_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFontChooserDialog_FocusInEvent(KFontChooserDialog* self, QFocusEvent* event) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->focusInEvent(event);
    } else {
        ((VirtualKFontChooserDialog*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void KFontChooserDialog_QBaseFocusInEvent(KFontChooserDialog* self, QFocusEvent* event) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->setKFontChooserDialog_FocusInEvent_IsBase(true);
        vkfontchooserdialog->focusInEvent(event);
    } else {
        ((VirtualKFontChooserDialog*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontChooserDialog_OnFocusInEvent(KFontChooserDialog* self, intptr_t slot) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->setKFontChooserDialog_FocusInEvent_Callback(reinterpret_cast<VirtualKFontChooserDialog::KFontChooserDialog_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFontChooserDialog_FocusOutEvent(KFontChooserDialog* self, QFocusEvent* event) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->focusOutEvent(event);
    } else {
        ((VirtualKFontChooserDialog*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void KFontChooserDialog_QBaseFocusOutEvent(KFontChooserDialog* self, QFocusEvent* event) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->setKFontChooserDialog_FocusOutEvent_IsBase(true);
        vkfontchooserdialog->focusOutEvent(event);
    } else {
        ((VirtualKFontChooserDialog*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontChooserDialog_OnFocusOutEvent(KFontChooserDialog* self, intptr_t slot) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->setKFontChooserDialog_FocusOutEvent_Callback(reinterpret_cast<VirtualKFontChooserDialog::KFontChooserDialog_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFontChooserDialog_EnterEvent(KFontChooserDialog* self, QEnterEvent* event) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->enterEvent(event);
    } else {
        ((VirtualKFontChooserDialog*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void KFontChooserDialog_QBaseEnterEvent(KFontChooserDialog* self, QEnterEvent* event) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->setKFontChooserDialog_EnterEvent_IsBase(true);
        vkfontchooserdialog->enterEvent(event);
    } else {
        ((VirtualKFontChooserDialog*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontChooserDialog_OnEnterEvent(KFontChooserDialog* self, intptr_t slot) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->setKFontChooserDialog_EnterEvent_Callback(reinterpret_cast<VirtualKFontChooserDialog::KFontChooserDialog_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFontChooserDialog_LeaveEvent(KFontChooserDialog* self, QEvent* event) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->leaveEvent(event);
    } else {
        ((VirtualKFontChooserDialog*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void KFontChooserDialog_QBaseLeaveEvent(KFontChooserDialog* self, QEvent* event) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->setKFontChooserDialog_LeaveEvent_IsBase(true);
        vkfontchooserdialog->leaveEvent(event);
    } else {
        ((VirtualKFontChooserDialog*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontChooserDialog_OnLeaveEvent(KFontChooserDialog* self, intptr_t slot) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->setKFontChooserDialog_LeaveEvent_Callback(reinterpret_cast<VirtualKFontChooserDialog::KFontChooserDialog_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFontChooserDialog_PaintEvent(KFontChooserDialog* self, QPaintEvent* event) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->paintEvent(event);
    } else {
        ((VirtualKFontChooserDialog*)self)->paintEvent(event);
    }
}

// Base class handler implementation
void KFontChooserDialog_QBasePaintEvent(KFontChooserDialog* self, QPaintEvent* event) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->setKFontChooserDialog_PaintEvent_IsBase(true);
        vkfontchooserdialog->paintEvent(event);
    } else {
        ((VirtualKFontChooserDialog*)self)->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontChooserDialog_OnPaintEvent(KFontChooserDialog* self, intptr_t slot) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->setKFontChooserDialog_PaintEvent_Callback(reinterpret_cast<VirtualKFontChooserDialog::KFontChooserDialog_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFontChooserDialog_MoveEvent(KFontChooserDialog* self, QMoveEvent* event) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->moveEvent(event);
    } else {
        ((VirtualKFontChooserDialog*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void KFontChooserDialog_QBaseMoveEvent(KFontChooserDialog* self, QMoveEvent* event) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->setKFontChooserDialog_MoveEvent_IsBase(true);
        vkfontchooserdialog->moveEvent(event);
    } else {
        ((VirtualKFontChooserDialog*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontChooserDialog_OnMoveEvent(KFontChooserDialog* self, intptr_t slot) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->setKFontChooserDialog_MoveEvent_Callback(reinterpret_cast<VirtualKFontChooserDialog::KFontChooserDialog_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFontChooserDialog_TabletEvent(KFontChooserDialog* self, QTabletEvent* event) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->tabletEvent(event);
    } else {
        ((VirtualKFontChooserDialog*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void KFontChooserDialog_QBaseTabletEvent(KFontChooserDialog* self, QTabletEvent* event) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->setKFontChooserDialog_TabletEvent_IsBase(true);
        vkfontchooserdialog->tabletEvent(event);
    } else {
        ((VirtualKFontChooserDialog*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontChooserDialog_OnTabletEvent(KFontChooserDialog* self, intptr_t slot) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->setKFontChooserDialog_TabletEvent_Callback(reinterpret_cast<VirtualKFontChooserDialog::KFontChooserDialog_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFontChooserDialog_ActionEvent(KFontChooserDialog* self, QActionEvent* event) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->actionEvent(event);
    } else {
        ((VirtualKFontChooserDialog*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void KFontChooserDialog_QBaseActionEvent(KFontChooserDialog* self, QActionEvent* event) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->setKFontChooserDialog_ActionEvent_IsBase(true);
        vkfontchooserdialog->actionEvent(event);
    } else {
        ((VirtualKFontChooserDialog*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontChooserDialog_OnActionEvent(KFontChooserDialog* self, intptr_t slot) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->setKFontChooserDialog_ActionEvent_Callback(reinterpret_cast<VirtualKFontChooserDialog::KFontChooserDialog_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFontChooserDialog_DragEnterEvent(KFontChooserDialog* self, QDragEnterEvent* event) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->dragEnterEvent(event);
    } else {
        ((VirtualKFontChooserDialog*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void KFontChooserDialog_QBaseDragEnterEvent(KFontChooserDialog* self, QDragEnterEvent* event) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->setKFontChooserDialog_DragEnterEvent_IsBase(true);
        vkfontchooserdialog->dragEnterEvent(event);
    } else {
        ((VirtualKFontChooserDialog*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontChooserDialog_OnDragEnterEvent(KFontChooserDialog* self, intptr_t slot) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->setKFontChooserDialog_DragEnterEvent_Callback(reinterpret_cast<VirtualKFontChooserDialog::KFontChooserDialog_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFontChooserDialog_DragMoveEvent(KFontChooserDialog* self, QDragMoveEvent* event) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->dragMoveEvent(event);
    } else {
        ((VirtualKFontChooserDialog*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void KFontChooserDialog_QBaseDragMoveEvent(KFontChooserDialog* self, QDragMoveEvent* event) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->setKFontChooserDialog_DragMoveEvent_IsBase(true);
        vkfontchooserdialog->dragMoveEvent(event);
    } else {
        ((VirtualKFontChooserDialog*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontChooserDialog_OnDragMoveEvent(KFontChooserDialog* self, intptr_t slot) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->setKFontChooserDialog_DragMoveEvent_Callback(reinterpret_cast<VirtualKFontChooserDialog::KFontChooserDialog_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFontChooserDialog_DragLeaveEvent(KFontChooserDialog* self, QDragLeaveEvent* event) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->dragLeaveEvent(event);
    } else {
        ((VirtualKFontChooserDialog*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void KFontChooserDialog_QBaseDragLeaveEvent(KFontChooserDialog* self, QDragLeaveEvent* event) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->setKFontChooserDialog_DragLeaveEvent_IsBase(true);
        vkfontchooserdialog->dragLeaveEvent(event);
    } else {
        ((VirtualKFontChooserDialog*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontChooserDialog_OnDragLeaveEvent(KFontChooserDialog* self, intptr_t slot) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->setKFontChooserDialog_DragLeaveEvent_Callback(reinterpret_cast<VirtualKFontChooserDialog::KFontChooserDialog_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFontChooserDialog_DropEvent(KFontChooserDialog* self, QDropEvent* event) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->dropEvent(event);
    } else {
        ((VirtualKFontChooserDialog*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void KFontChooserDialog_QBaseDropEvent(KFontChooserDialog* self, QDropEvent* event) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->setKFontChooserDialog_DropEvent_IsBase(true);
        vkfontchooserdialog->dropEvent(event);
    } else {
        ((VirtualKFontChooserDialog*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontChooserDialog_OnDropEvent(KFontChooserDialog* self, intptr_t slot) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->setKFontChooserDialog_DropEvent_Callback(reinterpret_cast<VirtualKFontChooserDialog::KFontChooserDialog_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFontChooserDialog_HideEvent(KFontChooserDialog* self, QHideEvent* event) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->hideEvent(event);
    } else {
        ((VirtualKFontChooserDialog*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void KFontChooserDialog_QBaseHideEvent(KFontChooserDialog* self, QHideEvent* event) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->setKFontChooserDialog_HideEvent_IsBase(true);
        vkfontchooserdialog->hideEvent(event);
    } else {
        ((VirtualKFontChooserDialog*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontChooserDialog_OnHideEvent(KFontChooserDialog* self, intptr_t slot) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->setKFontChooserDialog_HideEvent_Callback(reinterpret_cast<VirtualKFontChooserDialog::KFontChooserDialog_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KFontChooserDialog_NativeEvent(KFontChooserDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        return vkfontchooserdialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKFontChooserDialog*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool KFontChooserDialog_QBaseNativeEvent(KFontChooserDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->setKFontChooserDialog_NativeEvent_IsBase(true);
        return vkfontchooserdialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKFontChooserDialog*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void KFontChooserDialog_OnNativeEvent(KFontChooserDialog* self, intptr_t slot) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->setKFontChooserDialog_NativeEvent_Callback(reinterpret_cast<VirtualKFontChooserDialog::KFontChooserDialog_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFontChooserDialog_ChangeEvent(KFontChooserDialog* self, QEvent* param1) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->changeEvent(param1);
    } else {
        ((VirtualKFontChooserDialog*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void KFontChooserDialog_QBaseChangeEvent(KFontChooserDialog* self, QEvent* param1) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->setKFontChooserDialog_ChangeEvent_IsBase(true);
        vkfontchooserdialog->changeEvent(param1);
    } else {
        ((VirtualKFontChooserDialog*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontChooserDialog_OnChangeEvent(KFontChooserDialog* self, intptr_t slot) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->setKFontChooserDialog_ChangeEvent_Callback(reinterpret_cast<VirtualKFontChooserDialog::KFontChooserDialog_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int KFontChooserDialog_Metric(const KFontChooserDialog* self, int param1) {
    auto* vkfontchooserdialog = const_cast<VirtualKFontChooserDialog*>(dynamic_cast<const VirtualKFontChooserDialog*>(self));
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        return vkfontchooserdialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKFontChooserDialog*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int KFontChooserDialog_QBaseMetric(const KFontChooserDialog* self, int param1) {
    auto* vkfontchooserdialog = const_cast<VirtualKFontChooserDialog*>(dynamic_cast<const VirtualKFontChooserDialog*>(self));
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->setKFontChooserDialog_Metric_IsBase(true);
        return vkfontchooserdialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKFontChooserDialog*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KFontChooserDialog_OnMetric(const KFontChooserDialog* self, intptr_t slot) {
    auto* vkfontchooserdialog = const_cast<VirtualKFontChooserDialog*>(dynamic_cast<const VirtualKFontChooserDialog*>(self));
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->setKFontChooserDialog_Metric_Callback(reinterpret_cast<VirtualKFontChooserDialog::KFontChooserDialog_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void KFontChooserDialog_InitPainter(const KFontChooserDialog* self, QPainter* painter) {
    auto* vkfontchooserdialog = const_cast<VirtualKFontChooserDialog*>(dynamic_cast<const VirtualKFontChooserDialog*>(self));
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->initPainter(painter);
    } else {
        ((VirtualKFontChooserDialog*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void KFontChooserDialog_QBaseInitPainter(const KFontChooserDialog* self, QPainter* painter) {
    auto* vkfontchooserdialog = const_cast<VirtualKFontChooserDialog*>(dynamic_cast<const VirtualKFontChooserDialog*>(self));
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->setKFontChooserDialog_InitPainter_IsBase(true);
        vkfontchooserdialog->initPainter(painter);
    } else {
        ((VirtualKFontChooserDialog*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontChooserDialog_OnInitPainter(const KFontChooserDialog* self, intptr_t slot) {
    auto* vkfontchooserdialog = const_cast<VirtualKFontChooserDialog*>(dynamic_cast<const VirtualKFontChooserDialog*>(self));
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->setKFontChooserDialog_InitPainter_Callback(reinterpret_cast<VirtualKFontChooserDialog::KFontChooserDialog_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* KFontChooserDialog_Redirected(const KFontChooserDialog* self, QPoint* offset) {
    auto* vkfontchooserdialog = const_cast<VirtualKFontChooserDialog*>(dynamic_cast<const VirtualKFontChooserDialog*>(self));
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        return vkfontchooserdialog->redirected(offset);
    } else {
        return ((VirtualKFontChooserDialog*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* KFontChooserDialog_QBaseRedirected(const KFontChooserDialog* self, QPoint* offset) {
    auto* vkfontchooserdialog = const_cast<VirtualKFontChooserDialog*>(dynamic_cast<const VirtualKFontChooserDialog*>(self));
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->setKFontChooserDialog_Redirected_IsBase(true);
        return vkfontchooserdialog->redirected(offset);
    } else {
        return ((VirtualKFontChooserDialog*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontChooserDialog_OnRedirected(const KFontChooserDialog* self, intptr_t slot) {
    auto* vkfontchooserdialog = const_cast<VirtualKFontChooserDialog*>(dynamic_cast<const VirtualKFontChooserDialog*>(self));
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->setKFontChooserDialog_Redirected_Callback(reinterpret_cast<VirtualKFontChooserDialog::KFontChooserDialog_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* KFontChooserDialog_SharedPainter(const KFontChooserDialog* self) {
    auto* vkfontchooserdialog = const_cast<VirtualKFontChooserDialog*>(dynamic_cast<const VirtualKFontChooserDialog*>(self));
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        return vkfontchooserdialog->sharedPainter();
    } else {
        return ((VirtualKFontChooserDialog*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* KFontChooserDialog_QBaseSharedPainter(const KFontChooserDialog* self) {
    auto* vkfontchooserdialog = const_cast<VirtualKFontChooserDialog*>(dynamic_cast<const VirtualKFontChooserDialog*>(self));
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->setKFontChooserDialog_SharedPainter_IsBase(true);
        return vkfontchooserdialog->sharedPainter();
    } else {
        return ((VirtualKFontChooserDialog*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void KFontChooserDialog_OnSharedPainter(const KFontChooserDialog* self, intptr_t slot) {
    auto* vkfontchooserdialog = const_cast<VirtualKFontChooserDialog*>(dynamic_cast<const VirtualKFontChooserDialog*>(self));
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->setKFontChooserDialog_SharedPainter_Callback(reinterpret_cast<VirtualKFontChooserDialog::KFontChooserDialog_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void KFontChooserDialog_InputMethodEvent(KFontChooserDialog* self, QInputMethodEvent* param1) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->inputMethodEvent(param1);
    } else {
        ((VirtualKFontChooserDialog*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void KFontChooserDialog_QBaseInputMethodEvent(KFontChooserDialog* self, QInputMethodEvent* param1) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->setKFontChooserDialog_InputMethodEvent_IsBase(true);
        vkfontchooserdialog->inputMethodEvent(param1);
    } else {
        ((VirtualKFontChooserDialog*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontChooserDialog_OnInputMethodEvent(KFontChooserDialog* self, intptr_t slot) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->setKFontChooserDialog_InputMethodEvent_Callback(reinterpret_cast<VirtualKFontChooserDialog::KFontChooserDialog_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* KFontChooserDialog_InputMethodQuery(const KFontChooserDialog* self, int param1) {
    auto* vkfontchooserdialog = const_cast<VirtualKFontChooserDialog*>(dynamic_cast<const VirtualKFontChooserDialog*>(self));
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        return new QVariant(vkfontchooserdialog->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKFontChooserDialog*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* KFontChooserDialog_QBaseInputMethodQuery(const KFontChooserDialog* self, int param1) {
    auto* vkfontchooserdialog = const_cast<VirtualKFontChooserDialog*>(dynamic_cast<const VirtualKFontChooserDialog*>(self));
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->setKFontChooserDialog_InputMethodQuery_IsBase(true);
        return new QVariant(vkfontchooserdialog->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKFontChooserDialog*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void KFontChooserDialog_OnInputMethodQuery(const KFontChooserDialog* self, intptr_t slot) {
    auto* vkfontchooserdialog = const_cast<VirtualKFontChooserDialog*>(dynamic_cast<const VirtualKFontChooserDialog*>(self));
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->setKFontChooserDialog_InputMethodQuery_Callback(reinterpret_cast<VirtualKFontChooserDialog::KFontChooserDialog_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool KFontChooserDialog_FocusNextPrevChild(KFontChooserDialog* self, bool next) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        return vkfontchooserdialog->focusNextPrevChild(next);
    } else {
        return ((VirtualKFontChooserDialog*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool KFontChooserDialog_QBaseFocusNextPrevChild(KFontChooserDialog* self, bool next) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->setKFontChooserDialog_FocusNextPrevChild_IsBase(true);
        return vkfontchooserdialog->focusNextPrevChild(next);
    } else {
        return ((VirtualKFontChooserDialog*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontChooserDialog_OnFocusNextPrevChild(KFontChooserDialog* self, intptr_t slot) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->setKFontChooserDialog_FocusNextPrevChild_Callback(reinterpret_cast<VirtualKFontChooserDialog::KFontChooserDialog_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
void KFontChooserDialog_TimerEvent(KFontChooserDialog* self, QTimerEvent* event) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->timerEvent(event);
    } else {
        ((VirtualKFontChooserDialog*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KFontChooserDialog_QBaseTimerEvent(KFontChooserDialog* self, QTimerEvent* event) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->setKFontChooserDialog_TimerEvent_IsBase(true);
        vkfontchooserdialog->timerEvent(event);
    } else {
        ((VirtualKFontChooserDialog*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontChooserDialog_OnTimerEvent(KFontChooserDialog* self, intptr_t slot) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->setKFontChooserDialog_TimerEvent_Callback(reinterpret_cast<VirtualKFontChooserDialog::KFontChooserDialog_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFontChooserDialog_ChildEvent(KFontChooserDialog* self, QChildEvent* event) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->childEvent(event);
    } else {
        ((VirtualKFontChooserDialog*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KFontChooserDialog_QBaseChildEvent(KFontChooserDialog* self, QChildEvent* event) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->setKFontChooserDialog_ChildEvent_IsBase(true);
        vkfontchooserdialog->childEvent(event);
    } else {
        ((VirtualKFontChooserDialog*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontChooserDialog_OnChildEvent(KFontChooserDialog* self, intptr_t slot) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->setKFontChooserDialog_ChildEvent_Callback(reinterpret_cast<VirtualKFontChooserDialog::KFontChooserDialog_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFontChooserDialog_CustomEvent(KFontChooserDialog* self, QEvent* event) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->customEvent(event);
    } else {
        ((VirtualKFontChooserDialog*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KFontChooserDialog_QBaseCustomEvent(KFontChooserDialog* self, QEvent* event) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->setKFontChooserDialog_CustomEvent_IsBase(true);
        vkfontchooserdialog->customEvent(event);
    } else {
        ((VirtualKFontChooserDialog*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontChooserDialog_OnCustomEvent(KFontChooserDialog* self, intptr_t slot) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->setKFontChooserDialog_CustomEvent_Callback(reinterpret_cast<VirtualKFontChooserDialog::KFontChooserDialog_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFontChooserDialog_ConnectNotify(KFontChooserDialog* self, const QMetaMethod* signal) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->connectNotify(*signal);
    } else {
        ((VirtualKFontChooserDialog*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KFontChooserDialog_QBaseConnectNotify(KFontChooserDialog* self, const QMetaMethod* signal) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->setKFontChooserDialog_ConnectNotify_IsBase(true);
        vkfontchooserdialog->connectNotify(*signal);
    } else {
        ((VirtualKFontChooserDialog*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontChooserDialog_OnConnectNotify(KFontChooserDialog* self, intptr_t slot) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->setKFontChooserDialog_ConnectNotify_Callback(reinterpret_cast<VirtualKFontChooserDialog::KFontChooserDialog_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KFontChooserDialog_DisconnectNotify(KFontChooserDialog* self, const QMetaMethod* signal) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->disconnectNotify(*signal);
    } else {
        ((VirtualKFontChooserDialog*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KFontChooserDialog_QBaseDisconnectNotify(KFontChooserDialog* self, const QMetaMethod* signal) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->setKFontChooserDialog_DisconnectNotify_IsBase(true);
        vkfontchooserdialog->disconnectNotify(*signal);
    } else {
        ((VirtualKFontChooserDialog*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontChooserDialog_OnDisconnectNotify(KFontChooserDialog* self, intptr_t slot) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->setKFontChooserDialog_DisconnectNotify_Callback(reinterpret_cast<VirtualKFontChooserDialog::KFontChooserDialog_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KFontChooserDialog_AdjustPosition(KFontChooserDialog* self, QWidget* param1) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->adjustPosition(param1);
    } else {
        ((VirtualKFontChooserDialog*)self)->adjustPosition(param1);
    }
}

// Base class handler implementation
void KFontChooserDialog_QBaseAdjustPosition(KFontChooserDialog* self, QWidget* param1) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->setKFontChooserDialog_AdjustPosition_IsBase(true);
        vkfontchooserdialog->adjustPosition(param1);
    } else {
        ((VirtualKFontChooserDialog*)self)->adjustPosition(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontChooserDialog_OnAdjustPosition(KFontChooserDialog* self, intptr_t slot) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->setKFontChooserDialog_AdjustPosition_Callback(reinterpret_cast<VirtualKFontChooserDialog::KFontChooserDialog_AdjustPosition_Callback>(slot));
    }
}

// Derived class handler implementation
void KFontChooserDialog_UpdateMicroFocus(KFontChooserDialog* self) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->updateMicroFocus();
    } else {
        ((VirtualKFontChooserDialog*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void KFontChooserDialog_QBaseUpdateMicroFocus(KFontChooserDialog* self) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->setKFontChooserDialog_UpdateMicroFocus_IsBase(true);
        vkfontchooserdialog->updateMicroFocus();
    } else {
        ((VirtualKFontChooserDialog*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void KFontChooserDialog_OnUpdateMicroFocus(KFontChooserDialog* self, intptr_t slot) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->setKFontChooserDialog_UpdateMicroFocus_Callback(reinterpret_cast<VirtualKFontChooserDialog::KFontChooserDialog_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void KFontChooserDialog_Create(KFontChooserDialog* self) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->create();
    } else {
        ((VirtualKFontChooserDialog*)self)->create();
    }
}

// Base class handler implementation
void KFontChooserDialog_QBaseCreate(KFontChooserDialog* self) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->setKFontChooserDialog_Create_IsBase(true);
        vkfontchooserdialog->create();
    } else {
        ((VirtualKFontChooserDialog*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void KFontChooserDialog_OnCreate(KFontChooserDialog* self, intptr_t slot) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->setKFontChooserDialog_Create_Callback(reinterpret_cast<VirtualKFontChooserDialog::KFontChooserDialog_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void KFontChooserDialog_Destroy(KFontChooserDialog* self) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->destroy();
    } else {
        ((VirtualKFontChooserDialog*)self)->destroy();
    }
}

// Base class handler implementation
void KFontChooserDialog_QBaseDestroy(KFontChooserDialog* self) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->setKFontChooserDialog_Destroy_IsBase(true);
        vkfontchooserdialog->destroy();
    } else {
        ((VirtualKFontChooserDialog*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void KFontChooserDialog_OnDestroy(KFontChooserDialog* self, intptr_t slot) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->setKFontChooserDialog_Destroy_Callback(reinterpret_cast<VirtualKFontChooserDialog::KFontChooserDialog_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool KFontChooserDialog_FocusNextChild(KFontChooserDialog* self) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        return vkfontchooserdialog->focusNextChild();
    } else {
        return ((VirtualKFontChooserDialog*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool KFontChooserDialog_QBaseFocusNextChild(KFontChooserDialog* self) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->setKFontChooserDialog_FocusNextChild_IsBase(true);
        return vkfontchooserdialog->focusNextChild();
    } else {
        return ((VirtualKFontChooserDialog*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KFontChooserDialog_OnFocusNextChild(KFontChooserDialog* self, intptr_t slot) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->setKFontChooserDialog_FocusNextChild_Callback(reinterpret_cast<VirtualKFontChooserDialog::KFontChooserDialog_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KFontChooserDialog_FocusPreviousChild(KFontChooserDialog* self) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        return vkfontchooserdialog->focusPreviousChild();
    } else {
        return ((VirtualKFontChooserDialog*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool KFontChooserDialog_QBaseFocusPreviousChild(KFontChooserDialog* self) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->setKFontChooserDialog_FocusPreviousChild_IsBase(true);
        return vkfontchooserdialog->focusPreviousChild();
    } else {
        return ((VirtualKFontChooserDialog*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KFontChooserDialog_OnFocusPreviousChild(KFontChooserDialog* self, intptr_t slot) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->setKFontChooserDialog_FocusPreviousChild_Callback(reinterpret_cast<VirtualKFontChooserDialog::KFontChooserDialog_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KFontChooserDialog_Sender(const KFontChooserDialog* self) {
    auto* vkfontchooserdialog = const_cast<VirtualKFontChooserDialog*>(dynamic_cast<const VirtualKFontChooserDialog*>(self));
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        return vkfontchooserdialog->sender();
    } else {
        return ((VirtualKFontChooserDialog*)self)->sender();
    }
}

// Base class handler implementation
QObject* KFontChooserDialog_QBaseSender(const KFontChooserDialog* self) {
    auto* vkfontchooserdialog = const_cast<VirtualKFontChooserDialog*>(dynamic_cast<const VirtualKFontChooserDialog*>(self));
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->setKFontChooserDialog_Sender_IsBase(true);
        return vkfontchooserdialog->sender();
    } else {
        return ((VirtualKFontChooserDialog*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KFontChooserDialog_OnSender(const KFontChooserDialog* self, intptr_t slot) {
    auto* vkfontchooserdialog = const_cast<VirtualKFontChooserDialog*>(dynamic_cast<const VirtualKFontChooserDialog*>(self));
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->setKFontChooserDialog_Sender_Callback(reinterpret_cast<VirtualKFontChooserDialog::KFontChooserDialog_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KFontChooserDialog_SenderSignalIndex(const KFontChooserDialog* self) {
    auto* vkfontchooserdialog = const_cast<VirtualKFontChooserDialog*>(dynamic_cast<const VirtualKFontChooserDialog*>(self));
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        return vkfontchooserdialog->senderSignalIndex();
    } else {
        return ((VirtualKFontChooserDialog*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KFontChooserDialog_QBaseSenderSignalIndex(const KFontChooserDialog* self) {
    auto* vkfontchooserdialog = const_cast<VirtualKFontChooserDialog*>(dynamic_cast<const VirtualKFontChooserDialog*>(self));
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->setKFontChooserDialog_SenderSignalIndex_IsBase(true);
        return vkfontchooserdialog->senderSignalIndex();
    } else {
        return ((VirtualKFontChooserDialog*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KFontChooserDialog_OnSenderSignalIndex(const KFontChooserDialog* self, intptr_t slot) {
    auto* vkfontchooserdialog = const_cast<VirtualKFontChooserDialog*>(dynamic_cast<const VirtualKFontChooserDialog*>(self));
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->setKFontChooserDialog_SenderSignalIndex_Callback(reinterpret_cast<VirtualKFontChooserDialog::KFontChooserDialog_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KFontChooserDialog_Receivers(const KFontChooserDialog* self, const char* signal) {
    auto* vkfontchooserdialog = const_cast<VirtualKFontChooserDialog*>(dynamic_cast<const VirtualKFontChooserDialog*>(self));
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        return vkfontchooserdialog->receivers(signal);
    } else {
        return ((VirtualKFontChooserDialog*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KFontChooserDialog_QBaseReceivers(const KFontChooserDialog* self, const char* signal) {
    auto* vkfontchooserdialog = const_cast<VirtualKFontChooserDialog*>(dynamic_cast<const VirtualKFontChooserDialog*>(self));
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->setKFontChooserDialog_Receivers_IsBase(true);
        return vkfontchooserdialog->receivers(signal);
    } else {
        return ((VirtualKFontChooserDialog*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontChooserDialog_OnReceivers(const KFontChooserDialog* self, intptr_t slot) {
    auto* vkfontchooserdialog = const_cast<VirtualKFontChooserDialog*>(dynamic_cast<const VirtualKFontChooserDialog*>(self));
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->setKFontChooserDialog_Receivers_Callback(reinterpret_cast<VirtualKFontChooserDialog::KFontChooserDialog_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KFontChooserDialog_IsSignalConnected(const KFontChooserDialog* self, const QMetaMethod* signal) {
    auto* vkfontchooserdialog = const_cast<VirtualKFontChooserDialog*>(dynamic_cast<const VirtualKFontChooserDialog*>(self));
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        return vkfontchooserdialog->isSignalConnected(*signal);
    } else {
        return ((VirtualKFontChooserDialog*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KFontChooserDialog_QBaseIsSignalConnected(const KFontChooserDialog* self, const QMetaMethod* signal) {
    auto* vkfontchooserdialog = const_cast<VirtualKFontChooserDialog*>(dynamic_cast<const VirtualKFontChooserDialog*>(self));
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->setKFontChooserDialog_IsSignalConnected_IsBase(true);
        return vkfontchooserdialog->isSignalConnected(*signal);
    } else {
        return ((VirtualKFontChooserDialog*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontChooserDialog_OnIsSignalConnected(const KFontChooserDialog* self, intptr_t slot) {
    auto* vkfontchooserdialog = const_cast<VirtualKFontChooserDialog*>(dynamic_cast<const VirtualKFontChooserDialog*>(self));
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->setKFontChooserDialog_IsSignalConnected_Callback(reinterpret_cast<VirtualKFontChooserDialog::KFontChooserDialog_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double KFontChooserDialog_GetDecodedMetricF(const KFontChooserDialog* self, int metricA, int metricB) {
    auto* vkfontchooserdialog = const_cast<VirtualKFontChooserDialog*>(dynamic_cast<const VirtualKFontChooserDialog*>(self));
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        return vkfontchooserdialog->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKFontChooserDialog*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double KFontChooserDialog_QBaseGetDecodedMetricF(const KFontChooserDialog* self, int metricA, int metricB) {
    auto* vkfontchooserdialog = const_cast<VirtualKFontChooserDialog*>(dynamic_cast<const VirtualKFontChooserDialog*>(self));
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->setKFontChooserDialog_GetDecodedMetricF_IsBase(true);
        return vkfontchooserdialog->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKFontChooserDialog*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void KFontChooserDialog_OnGetDecodedMetricF(const KFontChooserDialog* self, intptr_t slot) {
    auto* vkfontchooserdialog = const_cast<VirtualKFontChooserDialog*>(dynamic_cast<const VirtualKFontChooserDialog*>(self));
    if (vkfontchooserdialog && vkfontchooserdialog->isVirtualKFontChooserDialog) {
        vkfontchooserdialog->setKFontChooserDialog_GetDecodedMetricF_Callback(reinterpret_cast<VirtualKFontChooserDialog::KFontChooserDialog_GetDecodedMetricF_Callback>(slot));
    }
}

void KFontChooserDialog_Delete(KFontChooserDialog* self) {
    delete self;
}
