#include <QActionEvent>
#include <QByteArray>
#include <QChar>
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
#define WORKAROUND_INNER_CLASS_DEFINITION_TextAddonsWidgets__SelectSpecialCharDialog
#include <selectspecialchardialog.h>
#include "libselectspecialchardialog.h"
#include "libselectspecialchardialog.hxx"

TextAddonsWidgets__SelectSpecialCharDialog* TextAddonsWidgets__SelectSpecialCharDialog_new(QWidget* parent) {
    return new VirtualTextAddonsWidgetsSelectSpecialCharDialog(parent);
}

QMetaObject* TextAddonsWidgets__SelectSpecialCharDialog_MetaObject(const TextAddonsWidgets__SelectSpecialCharDialog* self) {
    auto* vtextaddonswidgets__selectspecialchardialog = dynamic_cast<const VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgets__selectspecialchardialog && vtextaddonswidgets__selectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        return (QMetaObject*)self->metaObject();
    } else {
        return (QMetaObject*)((VirtualTextAddonsWidgetsSelectSpecialCharDialog*)self)->metaObject();
    }
}

void* TextAddonsWidgets__SelectSpecialCharDialog_Metacast(TextAddonsWidgets__SelectSpecialCharDialog* self, const char* param1) {
    auto* vtextaddonswidgets__selectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgets__selectspecialchardialog && vtextaddonswidgets__selectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        return self->qt_metacast(param1);
    } else {
        return ((VirtualTextAddonsWidgetsSelectSpecialCharDialog*)self)->qt_metacast(param1);
    }
}

int TextAddonsWidgets__SelectSpecialCharDialog_Metacall(TextAddonsWidgets__SelectSpecialCharDialog* self, int param1, int param2, void** param3) {
    auto* vtextaddonswidgets__selectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgets__selectspecialchardialog && vtextaddonswidgets__selectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualTextAddonsWidgetsSelectSpecialCharDialog*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

void TextAddonsWidgets__SelectSpecialCharDialog_SetCurrentChar(TextAddonsWidgets__SelectSpecialCharDialog* self, QChar* c) {
    self->setCurrentChar(*c);
}

QChar* TextAddonsWidgets__SelectSpecialCharDialog_CurrentChar(const TextAddonsWidgets__SelectSpecialCharDialog* self) {
    return new QChar(self->currentChar());
}

void TextAddonsWidgets__SelectSpecialCharDialog_SetOkButtonText(TextAddonsWidgets__SelectSpecialCharDialog* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->setOkButtonText(text_QString);
}

void TextAddonsWidgets__SelectSpecialCharDialog_ShowSelectButton(TextAddonsWidgets__SelectSpecialCharDialog* self, bool show) {
    self->showSelectButton(show);
}

void TextAddonsWidgets__SelectSpecialCharDialog_AutoInsertChar(TextAddonsWidgets__SelectSpecialCharDialog* self) {
    self->autoInsertChar();
}

void TextAddonsWidgets__SelectSpecialCharDialog_CharSelected(TextAddonsWidgets__SelectSpecialCharDialog* self, QChar* param1) {
    self->charSelected(*param1);
}

void TextAddonsWidgets__SelectSpecialCharDialog_Connect_CharSelected(TextAddonsWidgets__SelectSpecialCharDialog* self, intptr_t slot) {
    void (*slotFunc)(TextAddonsWidgets__SelectSpecialCharDialog*, QChar*) = reinterpret_cast<void (*)(TextAddonsWidgets__SelectSpecialCharDialog*, QChar*)>(slot);
    TextAddonsWidgets::SelectSpecialCharDialog::connect(self, &TextAddonsWidgets::SelectSpecialCharDialog::charSelected, [self, slotFunc](QChar param1) {
        QChar* sigval1 = new QChar(param1);
        slotFunc(self, sigval1);
    });
}

// Base class handler implementation
QMetaObject* TextAddonsWidgets__SelectSpecialCharDialog_SuperMetaObject(const TextAddonsWidgets__SelectSpecialCharDialog* self) {
    auto* vtextaddonswidgetsselectspecialchardialog = const_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(dynamic_cast<const VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self));
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->setTextAddonsWidgets__SelectSpecialCharDialog_MetaObject_IsBase(true);
        return (QMetaObject*)vtextaddonswidgetsselectspecialchardialog->metaObject();
    } else {
        return (QMetaObject*)self->TextAddonsWidgets::SelectSpecialCharDialog::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SelectSpecialCharDialog_OnMetaObject(const TextAddonsWidgets__SelectSpecialCharDialog* self, intptr_t slot) {
    auto* vtextaddonswidgetsselectspecialchardialog = const_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(dynamic_cast<const VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self));
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->setTextAddonsWidgets__SelectSpecialCharDialog_MetaObject_Callback(reinterpret_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog::TextAddonsWidgets__SelectSpecialCharDialog_MetaObject_Callback>(slot));
    }
}

// Base class handler implementation
void* TextAddonsWidgets__SelectSpecialCharDialog_SuperMetacast(TextAddonsWidgets__SelectSpecialCharDialog* self, const char* param1) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->setTextAddonsWidgets__SelectSpecialCharDialog_Metacast_IsBase(true);
        return vtextaddonswidgetsselectspecialchardialog->qt_metacast(param1);
    } else {
        return self->TextAddonsWidgets::SelectSpecialCharDialog::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SelectSpecialCharDialog_OnMetacast(TextAddonsWidgets__SelectSpecialCharDialog* self, intptr_t slot) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->setTextAddonsWidgets__SelectSpecialCharDialog_Metacast_Callback(reinterpret_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog::TextAddonsWidgets__SelectSpecialCharDialog_Metacast_Callback>(slot));
    }
}

// Base class handler implementation
int TextAddonsWidgets__SelectSpecialCharDialog_SuperMetacall(TextAddonsWidgets__SelectSpecialCharDialog* self, int param1, int param2, void** param3) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->setTextAddonsWidgets__SelectSpecialCharDialog_Metacall_IsBase(true);
        return vtextaddonswidgetsselectspecialchardialog->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->TextAddonsWidgets::SelectSpecialCharDialog::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SelectSpecialCharDialog_OnMetacall(TextAddonsWidgets__SelectSpecialCharDialog* self, intptr_t slot) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->setTextAddonsWidgets__SelectSpecialCharDialog_Metacall_Callback(reinterpret_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog::TextAddonsWidgets__SelectSpecialCharDialog_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_SetVisible(TextAddonsWidgets__SelectSpecialCharDialog* self, bool visible) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->setVisible(visible);
    } else {
        self->TextAddonsWidgets::SelectSpecialCharDialog::setVisible(visible);
    }
}

// Base class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_SuperSetVisible(TextAddonsWidgets__SelectSpecialCharDialog* self, bool visible) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->setTextAddonsWidgets__SelectSpecialCharDialog_SetVisible_IsBase(true);
        vtextaddonswidgetsselectspecialchardialog->setVisible(visible);
    } else {
        self->TextAddonsWidgets::SelectSpecialCharDialog::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SelectSpecialCharDialog_OnSetVisible(TextAddonsWidgets__SelectSpecialCharDialog* self, intptr_t slot) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->setTextAddonsWidgets__SelectSpecialCharDialog_SetVisible_Callback(reinterpret_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog::TextAddonsWidgets__SelectSpecialCharDialog_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* TextAddonsWidgets__SelectSpecialCharDialog_SizeHint(const TextAddonsWidgets__SelectSpecialCharDialog* self) {
    auto* vtextaddonswidgetsselectspecialchardialog = const_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(dynamic_cast<const VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self));
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        return new QSize(vtextaddonswidgetsselectspecialchardialog->sizeHint());
    } else {
        return new QSize(((VirtualTextAddonsWidgetsSelectSpecialCharDialog*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* TextAddonsWidgets__SelectSpecialCharDialog_SuperSizeHint(const TextAddonsWidgets__SelectSpecialCharDialog* self) {
    auto* vtextaddonswidgetsselectspecialchardialog = const_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(dynamic_cast<const VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self));
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->setTextAddonsWidgets__SelectSpecialCharDialog_SizeHint_IsBase(true);
        return new QSize(vtextaddonswidgetsselectspecialchardialog->sizeHint());
    } else {
        return new QSize(((VirtualTextAddonsWidgetsSelectSpecialCharDialog*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SelectSpecialCharDialog_OnSizeHint(const TextAddonsWidgets__SelectSpecialCharDialog* self, intptr_t slot) {
    auto* vtextaddonswidgetsselectspecialchardialog = const_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(dynamic_cast<const VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self));
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->setTextAddonsWidgets__SelectSpecialCharDialog_SizeHint_Callback(reinterpret_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog::TextAddonsWidgets__SelectSpecialCharDialog_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* TextAddonsWidgets__SelectSpecialCharDialog_MinimumSizeHint(const TextAddonsWidgets__SelectSpecialCharDialog* self) {
    auto* vtextaddonswidgetsselectspecialchardialog = const_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(dynamic_cast<const VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self));
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        return new QSize(vtextaddonswidgetsselectspecialchardialog->minimumSizeHint());
    } else {
        return new QSize(((VirtualTextAddonsWidgetsSelectSpecialCharDialog*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* TextAddonsWidgets__SelectSpecialCharDialog_SuperMinimumSizeHint(const TextAddonsWidgets__SelectSpecialCharDialog* self) {
    auto* vtextaddonswidgetsselectspecialchardialog = const_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(dynamic_cast<const VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self));
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->setTextAddonsWidgets__SelectSpecialCharDialog_MinimumSizeHint_IsBase(true);
        return new QSize(vtextaddonswidgetsselectspecialchardialog->minimumSizeHint());
    } else {
        return new QSize(((VirtualTextAddonsWidgetsSelectSpecialCharDialog*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SelectSpecialCharDialog_OnMinimumSizeHint(const TextAddonsWidgets__SelectSpecialCharDialog* self, intptr_t slot) {
    auto* vtextaddonswidgetsselectspecialchardialog = const_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(dynamic_cast<const VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self));
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->setTextAddonsWidgets__SelectSpecialCharDialog_MinimumSizeHint_Callback(reinterpret_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog::TextAddonsWidgets__SelectSpecialCharDialog_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_Open(TextAddonsWidgets__SelectSpecialCharDialog* self) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->open();
    } else {
        self->TextAddonsWidgets::SelectSpecialCharDialog::open();
    }
}

// Base class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_SuperOpen(TextAddonsWidgets__SelectSpecialCharDialog* self) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->setTextAddonsWidgets__SelectSpecialCharDialog_Open_IsBase(true);
        vtextaddonswidgetsselectspecialchardialog->open();
    } else {
        self->TextAddonsWidgets::SelectSpecialCharDialog::open();
    }
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SelectSpecialCharDialog_OnOpen(TextAddonsWidgets__SelectSpecialCharDialog* self, intptr_t slot) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->setTextAddonsWidgets__SelectSpecialCharDialog_Open_Callback(reinterpret_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog::TextAddonsWidgets__SelectSpecialCharDialog_Open_Callback>(slot));
    }
}

// Derived class handler implementation
int TextAddonsWidgets__SelectSpecialCharDialog_Exec(TextAddonsWidgets__SelectSpecialCharDialog* self) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        return vtextaddonswidgetsselectspecialchardialog->exec();
    } else {
        return self->TextAddonsWidgets::SelectSpecialCharDialog::exec();
    }
}

// Base class handler implementation
int TextAddonsWidgets__SelectSpecialCharDialog_SuperExec(TextAddonsWidgets__SelectSpecialCharDialog* self) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->setTextAddonsWidgets__SelectSpecialCharDialog_Exec_IsBase(true);
        return vtextaddonswidgetsselectspecialchardialog->exec();
    } else {
        return self->TextAddonsWidgets::SelectSpecialCharDialog::exec();
    }
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SelectSpecialCharDialog_OnExec(TextAddonsWidgets__SelectSpecialCharDialog* self, intptr_t slot) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->setTextAddonsWidgets__SelectSpecialCharDialog_Exec_Callback(reinterpret_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog::TextAddonsWidgets__SelectSpecialCharDialog_Exec_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_Done(TextAddonsWidgets__SelectSpecialCharDialog* self, int param1) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->done(static_cast<int>(param1));
    } else {
        self->TextAddonsWidgets::SelectSpecialCharDialog::done(static_cast<int>(param1));
    }
}

// Base class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_SuperDone(TextAddonsWidgets__SelectSpecialCharDialog* self, int param1) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->setTextAddonsWidgets__SelectSpecialCharDialog_Done_IsBase(true);
        vtextaddonswidgetsselectspecialchardialog->done(static_cast<int>(param1));
    } else {
        self->TextAddonsWidgets::SelectSpecialCharDialog::done(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SelectSpecialCharDialog_OnDone(TextAddonsWidgets__SelectSpecialCharDialog* self, intptr_t slot) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->setTextAddonsWidgets__SelectSpecialCharDialog_Done_Callback(reinterpret_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog::TextAddonsWidgets__SelectSpecialCharDialog_Done_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_Accept(TextAddonsWidgets__SelectSpecialCharDialog* self) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->accept();
    } else {
        self->TextAddonsWidgets::SelectSpecialCharDialog::accept();
    }
}

// Base class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_SuperAccept(TextAddonsWidgets__SelectSpecialCharDialog* self) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->setTextAddonsWidgets__SelectSpecialCharDialog_Accept_IsBase(true);
        vtextaddonswidgetsselectspecialchardialog->accept();
    } else {
        self->TextAddonsWidgets::SelectSpecialCharDialog::accept();
    }
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SelectSpecialCharDialog_OnAccept(TextAddonsWidgets__SelectSpecialCharDialog* self, intptr_t slot) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->setTextAddonsWidgets__SelectSpecialCharDialog_Accept_Callback(reinterpret_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog::TextAddonsWidgets__SelectSpecialCharDialog_Accept_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_Reject(TextAddonsWidgets__SelectSpecialCharDialog* self) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->reject();
    } else {
        self->TextAddonsWidgets::SelectSpecialCharDialog::reject();
    }
}

// Base class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_SuperReject(TextAddonsWidgets__SelectSpecialCharDialog* self) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->setTextAddonsWidgets__SelectSpecialCharDialog_Reject_IsBase(true);
        vtextaddonswidgetsselectspecialchardialog->reject();
    } else {
        self->TextAddonsWidgets::SelectSpecialCharDialog::reject();
    }
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SelectSpecialCharDialog_OnReject(TextAddonsWidgets__SelectSpecialCharDialog* self, intptr_t slot) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->setTextAddonsWidgets__SelectSpecialCharDialog_Reject_Callback(reinterpret_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog::TextAddonsWidgets__SelectSpecialCharDialog_Reject_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_KeyPressEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, QKeyEvent* param1) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->keyPressEvent(param1);
    } else {
        ((VirtualTextAddonsWidgetsSelectSpecialCharDialog*)self)->keyPressEvent(param1);
    }
}

// Base class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_SuperKeyPressEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, QKeyEvent* param1) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->setTextAddonsWidgets__SelectSpecialCharDialog_KeyPressEvent_IsBase(true);
        vtextaddonswidgetsselectspecialchardialog->keyPressEvent(param1);
    } else {
        ((VirtualTextAddonsWidgetsSelectSpecialCharDialog*)self)->keyPressEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SelectSpecialCharDialog_OnKeyPressEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, intptr_t slot) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->setTextAddonsWidgets__SelectSpecialCharDialog_KeyPressEvent_Callback(reinterpret_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog::TextAddonsWidgets__SelectSpecialCharDialog_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_CloseEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, QCloseEvent* param1) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->closeEvent(param1);
    } else {
        ((VirtualTextAddonsWidgetsSelectSpecialCharDialog*)self)->closeEvent(param1);
    }
}

// Base class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_SuperCloseEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, QCloseEvent* param1) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->setTextAddonsWidgets__SelectSpecialCharDialog_CloseEvent_IsBase(true);
        vtextaddonswidgetsselectspecialchardialog->closeEvent(param1);
    } else {
        ((VirtualTextAddonsWidgetsSelectSpecialCharDialog*)self)->closeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SelectSpecialCharDialog_OnCloseEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, intptr_t slot) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->setTextAddonsWidgets__SelectSpecialCharDialog_CloseEvent_Callback(reinterpret_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog::TextAddonsWidgets__SelectSpecialCharDialog_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_ShowEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, QShowEvent* param1) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->showEvent(param1);
    } else {
        ((VirtualTextAddonsWidgetsSelectSpecialCharDialog*)self)->showEvent(param1);
    }
}

// Base class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_SuperShowEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, QShowEvent* param1) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->setTextAddonsWidgets__SelectSpecialCharDialog_ShowEvent_IsBase(true);
        vtextaddonswidgetsselectspecialchardialog->showEvent(param1);
    } else {
        ((VirtualTextAddonsWidgetsSelectSpecialCharDialog*)self)->showEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SelectSpecialCharDialog_OnShowEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, intptr_t slot) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->setTextAddonsWidgets__SelectSpecialCharDialog_ShowEvent_Callback(reinterpret_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog::TextAddonsWidgets__SelectSpecialCharDialog_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_ResizeEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, QResizeEvent* param1) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->resizeEvent(param1);
    } else {
        ((VirtualTextAddonsWidgetsSelectSpecialCharDialog*)self)->resizeEvent(param1);
    }
}

// Base class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_SuperResizeEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, QResizeEvent* param1) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->setTextAddonsWidgets__SelectSpecialCharDialog_ResizeEvent_IsBase(true);
        vtextaddonswidgetsselectspecialchardialog->resizeEvent(param1);
    } else {
        ((VirtualTextAddonsWidgetsSelectSpecialCharDialog*)self)->resizeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SelectSpecialCharDialog_OnResizeEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, intptr_t slot) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->setTextAddonsWidgets__SelectSpecialCharDialog_ResizeEvent_Callback(reinterpret_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog::TextAddonsWidgets__SelectSpecialCharDialog_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_ContextMenuEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, QContextMenuEvent* param1) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->contextMenuEvent(param1);
    } else {
        ((VirtualTextAddonsWidgetsSelectSpecialCharDialog*)self)->contextMenuEvent(param1);
    }
}

// Base class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_SuperContextMenuEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, QContextMenuEvent* param1) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->setTextAddonsWidgets__SelectSpecialCharDialog_ContextMenuEvent_IsBase(true);
        vtextaddonswidgetsselectspecialchardialog->contextMenuEvent(param1);
    } else {
        ((VirtualTextAddonsWidgetsSelectSpecialCharDialog*)self)->contextMenuEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SelectSpecialCharDialog_OnContextMenuEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, intptr_t slot) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->setTextAddonsWidgets__SelectSpecialCharDialog_ContextMenuEvent_Callback(reinterpret_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog::TextAddonsWidgets__SelectSpecialCharDialog_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextAddonsWidgets__SelectSpecialCharDialog_EventFilter(TextAddonsWidgets__SelectSpecialCharDialog* self, QObject* param1, QEvent* param2) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        return vtextaddonswidgetsselectspecialchardialog->eventFilter(param1, param2);
    } else {
        return ((VirtualTextAddonsWidgetsSelectSpecialCharDialog*)self)->eventFilter(param1, param2);
    }
}

// Base class handler implementation
bool TextAddonsWidgets__SelectSpecialCharDialog_SuperEventFilter(TextAddonsWidgets__SelectSpecialCharDialog* self, QObject* param1, QEvent* param2) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->setTextAddonsWidgets__SelectSpecialCharDialog_EventFilter_IsBase(true);
        return vtextaddonswidgetsselectspecialchardialog->eventFilter(param1, param2);
    } else {
        return ((VirtualTextAddonsWidgetsSelectSpecialCharDialog*)self)->eventFilter(param1, param2);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SelectSpecialCharDialog_OnEventFilter(TextAddonsWidgets__SelectSpecialCharDialog* self, intptr_t slot) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->setTextAddonsWidgets__SelectSpecialCharDialog_EventFilter_Callback(reinterpret_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog::TextAddonsWidgets__SelectSpecialCharDialog_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
int TextAddonsWidgets__SelectSpecialCharDialog_DevType(const TextAddonsWidgets__SelectSpecialCharDialog* self) {
    auto* vtextaddonswidgetsselectspecialchardialog = const_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(dynamic_cast<const VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self));
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        return vtextaddonswidgetsselectspecialchardialog->devType();
    } else {
        return self->TextAddonsWidgets::SelectSpecialCharDialog::devType();
    }
}

// Base class handler implementation
int TextAddonsWidgets__SelectSpecialCharDialog_SuperDevType(const TextAddonsWidgets__SelectSpecialCharDialog* self) {
    auto* vtextaddonswidgetsselectspecialchardialog = const_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(dynamic_cast<const VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self));
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->setTextAddonsWidgets__SelectSpecialCharDialog_DevType_IsBase(true);
        return vtextaddonswidgetsselectspecialchardialog->devType();
    } else {
        return self->TextAddonsWidgets::SelectSpecialCharDialog::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SelectSpecialCharDialog_OnDevType(const TextAddonsWidgets__SelectSpecialCharDialog* self, intptr_t slot) {
    auto* vtextaddonswidgetsselectspecialchardialog = const_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(dynamic_cast<const VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self));
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->setTextAddonsWidgets__SelectSpecialCharDialog_DevType_Callback(reinterpret_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog::TextAddonsWidgets__SelectSpecialCharDialog_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
int TextAddonsWidgets__SelectSpecialCharDialog_HeightForWidth(const TextAddonsWidgets__SelectSpecialCharDialog* self, int param1) {
    auto* vtextaddonswidgetsselectspecialchardialog = const_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(dynamic_cast<const VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self));
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        return vtextaddonswidgetsselectspecialchardialog->heightForWidth(static_cast<int>(param1));
    } else {
        return self->TextAddonsWidgets::SelectSpecialCharDialog::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int TextAddonsWidgets__SelectSpecialCharDialog_SuperHeightForWidth(const TextAddonsWidgets__SelectSpecialCharDialog* self, int param1) {
    auto* vtextaddonswidgetsselectspecialchardialog = const_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(dynamic_cast<const VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self));
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->setTextAddonsWidgets__SelectSpecialCharDialog_HeightForWidth_IsBase(true);
        return vtextaddonswidgetsselectspecialchardialog->heightForWidth(static_cast<int>(param1));
    } else {
        return self->TextAddonsWidgets::SelectSpecialCharDialog::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SelectSpecialCharDialog_OnHeightForWidth(const TextAddonsWidgets__SelectSpecialCharDialog* self, intptr_t slot) {
    auto* vtextaddonswidgetsselectspecialchardialog = const_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(dynamic_cast<const VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self));
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->setTextAddonsWidgets__SelectSpecialCharDialog_HeightForWidth_Callback(reinterpret_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog::TextAddonsWidgets__SelectSpecialCharDialog_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextAddonsWidgets__SelectSpecialCharDialog_HasHeightForWidth(const TextAddonsWidgets__SelectSpecialCharDialog* self) {
    auto* vtextaddonswidgetsselectspecialchardialog = const_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(dynamic_cast<const VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self));
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        return vtextaddonswidgetsselectspecialchardialog->hasHeightForWidth();
    } else {
        return self->TextAddonsWidgets::SelectSpecialCharDialog::hasHeightForWidth();
    }
}

// Base class handler implementation
bool TextAddonsWidgets__SelectSpecialCharDialog_SuperHasHeightForWidth(const TextAddonsWidgets__SelectSpecialCharDialog* self) {
    auto* vtextaddonswidgetsselectspecialchardialog = const_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(dynamic_cast<const VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self));
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->setTextAddonsWidgets__SelectSpecialCharDialog_HasHeightForWidth_IsBase(true);
        return vtextaddonswidgetsselectspecialchardialog->hasHeightForWidth();
    } else {
        return self->TextAddonsWidgets::SelectSpecialCharDialog::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SelectSpecialCharDialog_OnHasHeightForWidth(const TextAddonsWidgets__SelectSpecialCharDialog* self, intptr_t slot) {
    auto* vtextaddonswidgetsselectspecialchardialog = const_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(dynamic_cast<const VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self));
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->setTextAddonsWidgets__SelectSpecialCharDialog_HasHeightForWidth_Callback(reinterpret_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog::TextAddonsWidgets__SelectSpecialCharDialog_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* TextAddonsWidgets__SelectSpecialCharDialog_PaintEngine(const TextAddonsWidgets__SelectSpecialCharDialog* self) {
    auto* vtextaddonswidgetsselectspecialchardialog = const_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(dynamic_cast<const VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self));
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        return vtextaddonswidgetsselectspecialchardialog->paintEngine();
    } else {
        return self->TextAddonsWidgets::SelectSpecialCharDialog::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* TextAddonsWidgets__SelectSpecialCharDialog_SuperPaintEngine(const TextAddonsWidgets__SelectSpecialCharDialog* self) {
    auto* vtextaddonswidgetsselectspecialchardialog = const_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(dynamic_cast<const VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self));
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->setTextAddonsWidgets__SelectSpecialCharDialog_PaintEngine_IsBase(true);
        return vtextaddonswidgetsselectspecialchardialog->paintEngine();
    } else {
        return self->TextAddonsWidgets::SelectSpecialCharDialog::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SelectSpecialCharDialog_OnPaintEngine(const TextAddonsWidgets__SelectSpecialCharDialog* self, intptr_t slot) {
    auto* vtextaddonswidgetsselectspecialchardialog = const_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(dynamic_cast<const VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self));
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->setTextAddonsWidgets__SelectSpecialCharDialog_PaintEngine_Callback(reinterpret_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog::TextAddonsWidgets__SelectSpecialCharDialog_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextAddonsWidgets__SelectSpecialCharDialog_Event(TextAddonsWidgets__SelectSpecialCharDialog* self, QEvent* event) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        return vtextaddonswidgetsselectspecialchardialog->event(event);
    } else {
        return ((VirtualTextAddonsWidgetsSelectSpecialCharDialog*)self)->event(event);
    }
}

// Base class handler implementation
bool TextAddonsWidgets__SelectSpecialCharDialog_SuperEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, QEvent* event) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->setTextAddonsWidgets__SelectSpecialCharDialog_Event_IsBase(true);
        return vtextaddonswidgetsselectspecialchardialog->event(event);
    } else {
        return ((VirtualTextAddonsWidgetsSelectSpecialCharDialog*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SelectSpecialCharDialog_OnEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, intptr_t slot) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->setTextAddonsWidgets__SelectSpecialCharDialog_Event_Callback(reinterpret_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog::TextAddonsWidgets__SelectSpecialCharDialog_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_MousePressEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, QMouseEvent* event) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->mousePressEvent(event);
    } else {
        ((VirtualTextAddonsWidgetsSelectSpecialCharDialog*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_SuperMousePressEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, QMouseEvent* event) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->setTextAddonsWidgets__SelectSpecialCharDialog_MousePressEvent_IsBase(true);
        vtextaddonswidgetsselectspecialchardialog->mousePressEvent(event);
    } else {
        ((VirtualTextAddonsWidgetsSelectSpecialCharDialog*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SelectSpecialCharDialog_OnMousePressEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, intptr_t slot) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->setTextAddonsWidgets__SelectSpecialCharDialog_MousePressEvent_Callback(reinterpret_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog::TextAddonsWidgets__SelectSpecialCharDialog_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_MouseReleaseEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, QMouseEvent* event) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->mouseReleaseEvent(event);
    } else {
        ((VirtualTextAddonsWidgetsSelectSpecialCharDialog*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_SuperMouseReleaseEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, QMouseEvent* event) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->setTextAddonsWidgets__SelectSpecialCharDialog_MouseReleaseEvent_IsBase(true);
        vtextaddonswidgetsselectspecialchardialog->mouseReleaseEvent(event);
    } else {
        ((VirtualTextAddonsWidgetsSelectSpecialCharDialog*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SelectSpecialCharDialog_OnMouseReleaseEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, intptr_t slot) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->setTextAddonsWidgets__SelectSpecialCharDialog_MouseReleaseEvent_Callback(reinterpret_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog::TextAddonsWidgets__SelectSpecialCharDialog_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_MouseDoubleClickEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, QMouseEvent* event) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->mouseDoubleClickEvent(event);
    } else {
        ((VirtualTextAddonsWidgetsSelectSpecialCharDialog*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_SuperMouseDoubleClickEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, QMouseEvent* event) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->setTextAddonsWidgets__SelectSpecialCharDialog_MouseDoubleClickEvent_IsBase(true);
        vtextaddonswidgetsselectspecialchardialog->mouseDoubleClickEvent(event);
    } else {
        ((VirtualTextAddonsWidgetsSelectSpecialCharDialog*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SelectSpecialCharDialog_OnMouseDoubleClickEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, intptr_t slot) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->setTextAddonsWidgets__SelectSpecialCharDialog_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog::TextAddonsWidgets__SelectSpecialCharDialog_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_MouseMoveEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, QMouseEvent* event) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->mouseMoveEvent(event);
    } else {
        ((VirtualTextAddonsWidgetsSelectSpecialCharDialog*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_SuperMouseMoveEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, QMouseEvent* event) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->setTextAddonsWidgets__SelectSpecialCharDialog_MouseMoveEvent_IsBase(true);
        vtextaddonswidgetsselectspecialchardialog->mouseMoveEvent(event);
    } else {
        ((VirtualTextAddonsWidgetsSelectSpecialCharDialog*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SelectSpecialCharDialog_OnMouseMoveEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, intptr_t slot) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->setTextAddonsWidgets__SelectSpecialCharDialog_MouseMoveEvent_Callback(reinterpret_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog::TextAddonsWidgets__SelectSpecialCharDialog_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_WheelEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, QWheelEvent* event) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->wheelEvent(event);
    } else {
        ((VirtualTextAddonsWidgetsSelectSpecialCharDialog*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_SuperWheelEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, QWheelEvent* event) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->setTextAddonsWidgets__SelectSpecialCharDialog_WheelEvent_IsBase(true);
        vtextaddonswidgetsselectspecialchardialog->wheelEvent(event);
    } else {
        ((VirtualTextAddonsWidgetsSelectSpecialCharDialog*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SelectSpecialCharDialog_OnWheelEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, intptr_t slot) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->setTextAddonsWidgets__SelectSpecialCharDialog_WheelEvent_Callback(reinterpret_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog::TextAddonsWidgets__SelectSpecialCharDialog_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_KeyReleaseEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, QKeyEvent* event) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->keyReleaseEvent(event);
    } else {
        ((VirtualTextAddonsWidgetsSelectSpecialCharDialog*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_SuperKeyReleaseEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, QKeyEvent* event) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->setTextAddonsWidgets__SelectSpecialCharDialog_KeyReleaseEvent_IsBase(true);
        vtextaddonswidgetsselectspecialchardialog->keyReleaseEvent(event);
    } else {
        ((VirtualTextAddonsWidgetsSelectSpecialCharDialog*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SelectSpecialCharDialog_OnKeyReleaseEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, intptr_t slot) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->setTextAddonsWidgets__SelectSpecialCharDialog_KeyReleaseEvent_Callback(reinterpret_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog::TextAddonsWidgets__SelectSpecialCharDialog_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_FocusInEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, QFocusEvent* event) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->focusInEvent(event);
    } else {
        ((VirtualTextAddonsWidgetsSelectSpecialCharDialog*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_SuperFocusInEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, QFocusEvent* event) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->setTextAddonsWidgets__SelectSpecialCharDialog_FocusInEvent_IsBase(true);
        vtextaddonswidgetsselectspecialchardialog->focusInEvent(event);
    } else {
        ((VirtualTextAddonsWidgetsSelectSpecialCharDialog*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SelectSpecialCharDialog_OnFocusInEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, intptr_t slot) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->setTextAddonsWidgets__SelectSpecialCharDialog_FocusInEvent_Callback(reinterpret_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog::TextAddonsWidgets__SelectSpecialCharDialog_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_FocusOutEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, QFocusEvent* event) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->focusOutEvent(event);
    } else {
        ((VirtualTextAddonsWidgetsSelectSpecialCharDialog*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_SuperFocusOutEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, QFocusEvent* event) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->setTextAddonsWidgets__SelectSpecialCharDialog_FocusOutEvent_IsBase(true);
        vtextaddonswidgetsselectspecialchardialog->focusOutEvent(event);
    } else {
        ((VirtualTextAddonsWidgetsSelectSpecialCharDialog*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SelectSpecialCharDialog_OnFocusOutEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, intptr_t slot) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->setTextAddonsWidgets__SelectSpecialCharDialog_FocusOutEvent_Callback(reinterpret_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog::TextAddonsWidgets__SelectSpecialCharDialog_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_EnterEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, QEnterEvent* event) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->enterEvent(event);
    } else {
        ((VirtualTextAddonsWidgetsSelectSpecialCharDialog*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_SuperEnterEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, QEnterEvent* event) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->setTextAddonsWidgets__SelectSpecialCharDialog_EnterEvent_IsBase(true);
        vtextaddonswidgetsselectspecialchardialog->enterEvent(event);
    } else {
        ((VirtualTextAddonsWidgetsSelectSpecialCharDialog*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SelectSpecialCharDialog_OnEnterEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, intptr_t slot) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->setTextAddonsWidgets__SelectSpecialCharDialog_EnterEvent_Callback(reinterpret_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog::TextAddonsWidgets__SelectSpecialCharDialog_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_LeaveEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, QEvent* event) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->leaveEvent(event);
    } else {
        ((VirtualTextAddonsWidgetsSelectSpecialCharDialog*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_SuperLeaveEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, QEvent* event) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->setTextAddonsWidgets__SelectSpecialCharDialog_LeaveEvent_IsBase(true);
        vtextaddonswidgetsselectspecialchardialog->leaveEvent(event);
    } else {
        ((VirtualTextAddonsWidgetsSelectSpecialCharDialog*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SelectSpecialCharDialog_OnLeaveEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, intptr_t slot) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->setTextAddonsWidgets__SelectSpecialCharDialog_LeaveEvent_Callback(reinterpret_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog::TextAddonsWidgets__SelectSpecialCharDialog_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_PaintEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, QPaintEvent* event) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->paintEvent(event);
    } else {
        ((VirtualTextAddonsWidgetsSelectSpecialCharDialog*)self)->paintEvent(event);
    }
}

// Base class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_SuperPaintEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, QPaintEvent* event) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->setTextAddonsWidgets__SelectSpecialCharDialog_PaintEvent_IsBase(true);
        vtextaddonswidgetsselectspecialchardialog->paintEvent(event);
    } else {
        ((VirtualTextAddonsWidgetsSelectSpecialCharDialog*)self)->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SelectSpecialCharDialog_OnPaintEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, intptr_t slot) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->setTextAddonsWidgets__SelectSpecialCharDialog_PaintEvent_Callback(reinterpret_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog::TextAddonsWidgets__SelectSpecialCharDialog_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_MoveEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, QMoveEvent* event) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->moveEvent(event);
    } else {
        ((VirtualTextAddonsWidgetsSelectSpecialCharDialog*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_SuperMoveEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, QMoveEvent* event) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->setTextAddonsWidgets__SelectSpecialCharDialog_MoveEvent_IsBase(true);
        vtextaddonswidgetsselectspecialchardialog->moveEvent(event);
    } else {
        ((VirtualTextAddonsWidgetsSelectSpecialCharDialog*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SelectSpecialCharDialog_OnMoveEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, intptr_t slot) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->setTextAddonsWidgets__SelectSpecialCharDialog_MoveEvent_Callback(reinterpret_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog::TextAddonsWidgets__SelectSpecialCharDialog_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_TabletEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, QTabletEvent* event) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->tabletEvent(event);
    } else {
        ((VirtualTextAddonsWidgetsSelectSpecialCharDialog*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_SuperTabletEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, QTabletEvent* event) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->setTextAddonsWidgets__SelectSpecialCharDialog_TabletEvent_IsBase(true);
        vtextaddonswidgetsselectspecialchardialog->tabletEvent(event);
    } else {
        ((VirtualTextAddonsWidgetsSelectSpecialCharDialog*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SelectSpecialCharDialog_OnTabletEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, intptr_t slot) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->setTextAddonsWidgets__SelectSpecialCharDialog_TabletEvent_Callback(reinterpret_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog::TextAddonsWidgets__SelectSpecialCharDialog_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_ActionEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, QActionEvent* event) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->actionEvent(event);
    } else {
        ((VirtualTextAddonsWidgetsSelectSpecialCharDialog*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_SuperActionEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, QActionEvent* event) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->setTextAddonsWidgets__SelectSpecialCharDialog_ActionEvent_IsBase(true);
        vtextaddonswidgetsselectspecialchardialog->actionEvent(event);
    } else {
        ((VirtualTextAddonsWidgetsSelectSpecialCharDialog*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SelectSpecialCharDialog_OnActionEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, intptr_t slot) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->setTextAddonsWidgets__SelectSpecialCharDialog_ActionEvent_Callback(reinterpret_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog::TextAddonsWidgets__SelectSpecialCharDialog_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_DragEnterEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, QDragEnterEvent* event) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->dragEnterEvent(event);
    } else {
        ((VirtualTextAddonsWidgetsSelectSpecialCharDialog*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_SuperDragEnterEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, QDragEnterEvent* event) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->setTextAddonsWidgets__SelectSpecialCharDialog_DragEnterEvent_IsBase(true);
        vtextaddonswidgetsselectspecialchardialog->dragEnterEvent(event);
    } else {
        ((VirtualTextAddonsWidgetsSelectSpecialCharDialog*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SelectSpecialCharDialog_OnDragEnterEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, intptr_t slot) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->setTextAddonsWidgets__SelectSpecialCharDialog_DragEnterEvent_Callback(reinterpret_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog::TextAddonsWidgets__SelectSpecialCharDialog_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_DragMoveEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, QDragMoveEvent* event) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->dragMoveEvent(event);
    } else {
        ((VirtualTextAddonsWidgetsSelectSpecialCharDialog*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_SuperDragMoveEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, QDragMoveEvent* event) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->setTextAddonsWidgets__SelectSpecialCharDialog_DragMoveEvent_IsBase(true);
        vtextaddonswidgetsselectspecialchardialog->dragMoveEvent(event);
    } else {
        ((VirtualTextAddonsWidgetsSelectSpecialCharDialog*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SelectSpecialCharDialog_OnDragMoveEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, intptr_t slot) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->setTextAddonsWidgets__SelectSpecialCharDialog_DragMoveEvent_Callback(reinterpret_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog::TextAddonsWidgets__SelectSpecialCharDialog_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_DragLeaveEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, QDragLeaveEvent* event) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->dragLeaveEvent(event);
    } else {
        ((VirtualTextAddonsWidgetsSelectSpecialCharDialog*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_SuperDragLeaveEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, QDragLeaveEvent* event) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->setTextAddonsWidgets__SelectSpecialCharDialog_DragLeaveEvent_IsBase(true);
        vtextaddonswidgetsselectspecialchardialog->dragLeaveEvent(event);
    } else {
        ((VirtualTextAddonsWidgetsSelectSpecialCharDialog*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SelectSpecialCharDialog_OnDragLeaveEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, intptr_t slot) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->setTextAddonsWidgets__SelectSpecialCharDialog_DragLeaveEvent_Callback(reinterpret_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog::TextAddonsWidgets__SelectSpecialCharDialog_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_DropEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, QDropEvent* event) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->dropEvent(event);
    } else {
        ((VirtualTextAddonsWidgetsSelectSpecialCharDialog*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_SuperDropEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, QDropEvent* event) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->setTextAddonsWidgets__SelectSpecialCharDialog_DropEvent_IsBase(true);
        vtextaddonswidgetsselectspecialchardialog->dropEvent(event);
    } else {
        ((VirtualTextAddonsWidgetsSelectSpecialCharDialog*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SelectSpecialCharDialog_OnDropEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, intptr_t slot) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->setTextAddonsWidgets__SelectSpecialCharDialog_DropEvent_Callback(reinterpret_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog::TextAddonsWidgets__SelectSpecialCharDialog_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_HideEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, QHideEvent* event) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->hideEvent(event);
    } else {
        ((VirtualTextAddonsWidgetsSelectSpecialCharDialog*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_SuperHideEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, QHideEvent* event) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->setTextAddonsWidgets__SelectSpecialCharDialog_HideEvent_IsBase(true);
        vtextaddonswidgetsselectspecialchardialog->hideEvent(event);
    } else {
        ((VirtualTextAddonsWidgetsSelectSpecialCharDialog*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SelectSpecialCharDialog_OnHideEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, intptr_t slot) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->setTextAddonsWidgets__SelectSpecialCharDialog_HideEvent_Callback(reinterpret_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog::TextAddonsWidgets__SelectSpecialCharDialog_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextAddonsWidgets__SelectSpecialCharDialog_NativeEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        return vtextaddonswidgetsselectspecialchardialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualTextAddonsWidgetsSelectSpecialCharDialog*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool TextAddonsWidgets__SelectSpecialCharDialog_SuperNativeEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->setTextAddonsWidgets__SelectSpecialCharDialog_NativeEvent_IsBase(true);
        return vtextaddonswidgetsselectspecialchardialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualTextAddonsWidgetsSelectSpecialCharDialog*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SelectSpecialCharDialog_OnNativeEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, intptr_t slot) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->setTextAddonsWidgets__SelectSpecialCharDialog_NativeEvent_Callback(reinterpret_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog::TextAddonsWidgets__SelectSpecialCharDialog_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_ChangeEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, QEvent* param1) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->changeEvent(param1);
    } else {
        ((VirtualTextAddonsWidgetsSelectSpecialCharDialog*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_SuperChangeEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, QEvent* param1) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->setTextAddonsWidgets__SelectSpecialCharDialog_ChangeEvent_IsBase(true);
        vtextaddonswidgetsselectspecialchardialog->changeEvent(param1);
    } else {
        ((VirtualTextAddonsWidgetsSelectSpecialCharDialog*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SelectSpecialCharDialog_OnChangeEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, intptr_t slot) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->setTextAddonsWidgets__SelectSpecialCharDialog_ChangeEvent_Callback(reinterpret_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog::TextAddonsWidgets__SelectSpecialCharDialog_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int TextAddonsWidgets__SelectSpecialCharDialog_Metric(const TextAddonsWidgets__SelectSpecialCharDialog* self, int param1) {
    auto* vtextaddonswidgetsselectspecialchardialog = const_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(dynamic_cast<const VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self));
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        return vtextaddonswidgetsselectspecialchardialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualTextAddonsWidgetsSelectSpecialCharDialog*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int TextAddonsWidgets__SelectSpecialCharDialog_SuperMetric(const TextAddonsWidgets__SelectSpecialCharDialog* self, int param1) {
    auto* vtextaddonswidgetsselectspecialchardialog = const_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(dynamic_cast<const VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self));
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->setTextAddonsWidgets__SelectSpecialCharDialog_Metric_IsBase(true);
        return vtextaddonswidgetsselectspecialchardialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualTextAddonsWidgetsSelectSpecialCharDialog*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SelectSpecialCharDialog_OnMetric(const TextAddonsWidgets__SelectSpecialCharDialog* self, intptr_t slot) {
    auto* vtextaddonswidgetsselectspecialchardialog = const_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(dynamic_cast<const VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self));
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->setTextAddonsWidgets__SelectSpecialCharDialog_Metric_Callback(reinterpret_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog::TextAddonsWidgets__SelectSpecialCharDialog_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_InitPainter(const TextAddonsWidgets__SelectSpecialCharDialog* self, QPainter* painter) {
    auto* vtextaddonswidgetsselectspecialchardialog = const_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(dynamic_cast<const VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self));
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->initPainter(painter);
    } else {
        ((VirtualTextAddonsWidgetsSelectSpecialCharDialog*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_SuperInitPainter(const TextAddonsWidgets__SelectSpecialCharDialog* self, QPainter* painter) {
    auto* vtextaddonswidgetsselectspecialchardialog = const_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(dynamic_cast<const VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self));
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->setTextAddonsWidgets__SelectSpecialCharDialog_InitPainter_IsBase(true);
        vtextaddonswidgetsselectspecialchardialog->initPainter(painter);
    } else {
        ((VirtualTextAddonsWidgetsSelectSpecialCharDialog*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SelectSpecialCharDialog_OnInitPainter(const TextAddonsWidgets__SelectSpecialCharDialog* self, intptr_t slot) {
    auto* vtextaddonswidgetsselectspecialchardialog = const_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(dynamic_cast<const VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self));
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->setTextAddonsWidgets__SelectSpecialCharDialog_InitPainter_Callback(reinterpret_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog::TextAddonsWidgets__SelectSpecialCharDialog_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* TextAddonsWidgets__SelectSpecialCharDialog_Redirected(const TextAddonsWidgets__SelectSpecialCharDialog* self, QPoint* offset) {
    auto* vtextaddonswidgetsselectspecialchardialog = const_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(dynamic_cast<const VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self));
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        return vtextaddonswidgetsselectspecialchardialog->redirected(offset);
    } else {
        return ((VirtualTextAddonsWidgetsSelectSpecialCharDialog*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* TextAddonsWidgets__SelectSpecialCharDialog_SuperRedirected(const TextAddonsWidgets__SelectSpecialCharDialog* self, QPoint* offset) {
    auto* vtextaddonswidgetsselectspecialchardialog = const_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(dynamic_cast<const VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self));
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->setTextAddonsWidgets__SelectSpecialCharDialog_Redirected_IsBase(true);
        return vtextaddonswidgetsselectspecialchardialog->redirected(offset);
    } else {
        return ((VirtualTextAddonsWidgetsSelectSpecialCharDialog*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SelectSpecialCharDialog_OnRedirected(const TextAddonsWidgets__SelectSpecialCharDialog* self, intptr_t slot) {
    auto* vtextaddonswidgetsselectspecialchardialog = const_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(dynamic_cast<const VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self));
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->setTextAddonsWidgets__SelectSpecialCharDialog_Redirected_Callback(reinterpret_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog::TextAddonsWidgets__SelectSpecialCharDialog_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* TextAddonsWidgets__SelectSpecialCharDialog_SharedPainter(const TextAddonsWidgets__SelectSpecialCharDialog* self) {
    auto* vtextaddonswidgetsselectspecialchardialog = const_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(dynamic_cast<const VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self));
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        return vtextaddonswidgetsselectspecialchardialog->sharedPainter();
    } else {
        return ((VirtualTextAddonsWidgetsSelectSpecialCharDialog*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* TextAddonsWidgets__SelectSpecialCharDialog_SuperSharedPainter(const TextAddonsWidgets__SelectSpecialCharDialog* self) {
    auto* vtextaddonswidgetsselectspecialchardialog = const_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(dynamic_cast<const VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self));
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->setTextAddonsWidgets__SelectSpecialCharDialog_SharedPainter_IsBase(true);
        return vtextaddonswidgetsselectspecialchardialog->sharedPainter();
    } else {
        return ((VirtualTextAddonsWidgetsSelectSpecialCharDialog*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SelectSpecialCharDialog_OnSharedPainter(const TextAddonsWidgets__SelectSpecialCharDialog* self, intptr_t slot) {
    auto* vtextaddonswidgetsselectspecialchardialog = const_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(dynamic_cast<const VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self));
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->setTextAddonsWidgets__SelectSpecialCharDialog_SharedPainter_Callback(reinterpret_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog::TextAddonsWidgets__SelectSpecialCharDialog_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_InputMethodEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, QInputMethodEvent* param1) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->inputMethodEvent(param1);
    } else {
        ((VirtualTextAddonsWidgetsSelectSpecialCharDialog*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_SuperInputMethodEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, QInputMethodEvent* param1) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->setTextAddonsWidgets__SelectSpecialCharDialog_InputMethodEvent_IsBase(true);
        vtextaddonswidgetsselectspecialchardialog->inputMethodEvent(param1);
    } else {
        ((VirtualTextAddonsWidgetsSelectSpecialCharDialog*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SelectSpecialCharDialog_OnInputMethodEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, intptr_t slot) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->setTextAddonsWidgets__SelectSpecialCharDialog_InputMethodEvent_Callback(reinterpret_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog::TextAddonsWidgets__SelectSpecialCharDialog_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* TextAddonsWidgets__SelectSpecialCharDialog_InputMethodQuery(const TextAddonsWidgets__SelectSpecialCharDialog* self, int param1) {
    auto* vtextaddonswidgetsselectspecialchardialog = const_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(dynamic_cast<const VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self));
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        return new QVariant(vtextaddonswidgetsselectspecialchardialog->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualTextAddonsWidgetsSelectSpecialCharDialog*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* TextAddonsWidgets__SelectSpecialCharDialog_SuperInputMethodQuery(const TextAddonsWidgets__SelectSpecialCharDialog* self, int param1) {
    auto* vtextaddonswidgetsselectspecialchardialog = const_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(dynamic_cast<const VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self));
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->setTextAddonsWidgets__SelectSpecialCharDialog_InputMethodQuery_IsBase(true);
        return new QVariant(vtextaddonswidgetsselectspecialchardialog->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualTextAddonsWidgetsSelectSpecialCharDialog*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SelectSpecialCharDialog_OnInputMethodQuery(const TextAddonsWidgets__SelectSpecialCharDialog* self, intptr_t slot) {
    auto* vtextaddonswidgetsselectspecialchardialog = const_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(dynamic_cast<const VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self));
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->setTextAddonsWidgets__SelectSpecialCharDialog_InputMethodQuery_Callback(reinterpret_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog::TextAddonsWidgets__SelectSpecialCharDialog_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextAddonsWidgets__SelectSpecialCharDialog_FocusNextPrevChild(TextAddonsWidgets__SelectSpecialCharDialog* self, bool next) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        return vtextaddonswidgetsselectspecialchardialog->focusNextPrevChild(next);
    } else {
        return ((VirtualTextAddonsWidgetsSelectSpecialCharDialog*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool TextAddonsWidgets__SelectSpecialCharDialog_SuperFocusNextPrevChild(TextAddonsWidgets__SelectSpecialCharDialog* self, bool next) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->setTextAddonsWidgets__SelectSpecialCharDialog_FocusNextPrevChild_IsBase(true);
        return vtextaddonswidgetsselectspecialchardialog->focusNextPrevChild(next);
    } else {
        return ((VirtualTextAddonsWidgetsSelectSpecialCharDialog*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SelectSpecialCharDialog_OnFocusNextPrevChild(TextAddonsWidgets__SelectSpecialCharDialog* self, intptr_t slot) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->setTextAddonsWidgets__SelectSpecialCharDialog_FocusNextPrevChild_Callback(reinterpret_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog::TextAddonsWidgets__SelectSpecialCharDialog_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_TimerEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, QTimerEvent* event) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->timerEvent(event);
    } else {
        ((VirtualTextAddonsWidgetsSelectSpecialCharDialog*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_SuperTimerEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, QTimerEvent* event) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->setTextAddonsWidgets__SelectSpecialCharDialog_TimerEvent_IsBase(true);
        vtextaddonswidgetsselectspecialchardialog->timerEvent(event);
    } else {
        ((VirtualTextAddonsWidgetsSelectSpecialCharDialog*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SelectSpecialCharDialog_OnTimerEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, intptr_t slot) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->setTextAddonsWidgets__SelectSpecialCharDialog_TimerEvent_Callback(reinterpret_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog::TextAddonsWidgets__SelectSpecialCharDialog_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_ChildEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, QChildEvent* event) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->childEvent(event);
    } else {
        ((VirtualTextAddonsWidgetsSelectSpecialCharDialog*)self)->childEvent(event);
    }
}

// Base class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_SuperChildEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, QChildEvent* event) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->setTextAddonsWidgets__SelectSpecialCharDialog_ChildEvent_IsBase(true);
        vtextaddonswidgetsselectspecialchardialog->childEvent(event);
    } else {
        ((VirtualTextAddonsWidgetsSelectSpecialCharDialog*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SelectSpecialCharDialog_OnChildEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, intptr_t slot) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->setTextAddonsWidgets__SelectSpecialCharDialog_ChildEvent_Callback(reinterpret_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog::TextAddonsWidgets__SelectSpecialCharDialog_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_CustomEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, QEvent* event) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->customEvent(event);
    } else {
        ((VirtualTextAddonsWidgetsSelectSpecialCharDialog*)self)->customEvent(event);
    }
}

// Base class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_SuperCustomEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, QEvent* event) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->setTextAddonsWidgets__SelectSpecialCharDialog_CustomEvent_IsBase(true);
        vtextaddonswidgetsselectspecialchardialog->customEvent(event);
    } else {
        ((VirtualTextAddonsWidgetsSelectSpecialCharDialog*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SelectSpecialCharDialog_OnCustomEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, intptr_t slot) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->setTextAddonsWidgets__SelectSpecialCharDialog_CustomEvent_Callback(reinterpret_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog::TextAddonsWidgets__SelectSpecialCharDialog_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_ConnectNotify(TextAddonsWidgets__SelectSpecialCharDialog* self, const QMetaMethod* signal) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->connectNotify(*signal);
    } else {
        ((VirtualTextAddonsWidgetsSelectSpecialCharDialog*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_SuperConnectNotify(TextAddonsWidgets__SelectSpecialCharDialog* self, const QMetaMethod* signal) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->setTextAddonsWidgets__SelectSpecialCharDialog_ConnectNotify_IsBase(true);
        vtextaddonswidgetsselectspecialchardialog->connectNotify(*signal);
    } else {
        ((VirtualTextAddonsWidgetsSelectSpecialCharDialog*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SelectSpecialCharDialog_OnConnectNotify(TextAddonsWidgets__SelectSpecialCharDialog* self, intptr_t slot) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->setTextAddonsWidgets__SelectSpecialCharDialog_ConnectNotify_Callback(reinterpret_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog::TextAddonsWidgets__SelectSpecialCharDialog_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_DisconnectNotify(TextAddonsWidgets__SelectSpecialCharDialog* self, const QMetaMethod* signal) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->disconnectNotify(*signal);
    } else {
        ((VirtualTextAddonsWidgetsSelectSpecialCharDialog*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_SuperDisconnectNotify(TextAddonsWidgets__SelectSpecialCharDialog* self, const QMetaMethod* signal) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->setTextAddonsWidgets__SelectSpecialCharDialog_DisconnectNotify_IsBase(true);
        vtextaddonswidgetsselectspecialchardialog->disconnectNotify(*signal);
    } else {
        ((VirtualTextAddonsWidgetsSelectSpecialCharDialog*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SelectSpecialCharDialog_OnDisconnectNotify(TextAddonsWidgets__SelectSpecialCharDialog* self, intptr_t slot) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->setTextAddonsWidgets__SelectSpecialCharDialog_DisconnectNotify_Callback(reinterpret_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog::TextAddonsWidgets__SelectSpecialCharDialog_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_AdjustPosition(TextAddonsWidgets__SelectSpecialCharDialog* self, QWidget* param1) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->adjustPosition(param1);
    } else {
        ((VirtualTextAddonsWidgetsSelectSpecialCharDialog*)self)->adjustPosition(param1);
    }
}

// Base class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_SuperAdjustPosition(TextAddonsWidgets__SelectSpecialCharDialog* self, QWidget* param1) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->setTextAddonsWidgets__SelectSpecialCharDialog_AdjustPosition_IsBase(true);
        vtextaddonswidgetsselectspecialchardialog->adjustPosition(param1);
    } else {
        ((VirtualTextAddonsWidgetsSelectSpecialCharDialog*)self)->adjustPosition(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SelectSpecialCharDialog_OnAdjustPosition(TextAddonsWidgets__SelectSpecialCharDialog* self, intptr_t slot) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->setTextAddonsWidgets__SelectSpecialCharDialog_AdjustPosition_Callback(reinterpret_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog::TextAddonsWidgets__SelectSpecialCharDialog_AdjustPosition_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_UpdateMicroFocus(TextAddonsWidgets__SelectSpecialCharDialog* self) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->updateMicroFocus();
    } else {
        ((VirtualTextAddonsWidgetsSelectSpecialCharDialog*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_SuperUpdateMicroFocus(TextAddonsWidgets__SelectSpecialCharDialog* self) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->setTextAddonsWidgets__SelectSpecialCharDialog_UpdateMicroFocus_IsBase(true);
        vtextaddonswidgetsselectspecialchardialog->updateMicroFocus();
    } else {
        ((VirtualTextAddonsWidgetsSelectSpecialCharDialog*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SelectSpecialCharDialog_OnUpdateMicroFocus(TextAddonsWidgets__SelectSpecialCharDialog* self, intptr_t slot) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->setTextAddonsWidgets__SelectSpecialCharDialog_UpdateMicroFocus_Callback(reinterpret_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog::TextAddonsWidgets__SelectSpecialCharDialog_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_Create(TextAddonsWidgets__SelectSpecialCharDialog* self) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->create();
    } else {
        ((VirtualTextAddonsWidgetsSelectSpecialCharDialog*)self)->create();
    }
}

// Base class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_SuperCreate(TextAddonsWidgets__SelectSpecialCharDialog* self) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->setTextAddonsWidgets__SelectSpecialCharDialog_Create_IsBase(true);
        vtextaddonswidgetsselectspecialchardialog->create();
    } else {
        ((VirtualTextAddonsWidgetsSelectSpecialCharDialog*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SelectSpecialCharDialog_OnCreate(TextAddonsWidgets__SelectSpecialCharDialog* self, intptr_t slot) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->setTextAddonsWidgets__SelectSpecialCharDialog_Create_Callback(reinterpret_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog::TextAddonsWidgets__SelectSpecialCharDialog_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_Destroy(TextAddonsWidgets__SelectSpecialCharDialog* self) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->destroy();
    } else {
        ((VirtualTextAddonsWidgetsSelectSpecialCharDialog*)self)->destroy();
    }
}

// Base class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_SuperDestroy(TextAddonsWidgets__SelectSpecialCharDialog* self) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->setTextAddonsWidgets__SelectSpecialCharDialog_Destroy_IsBase(true);
        vtextaddonswidgetsselectspecialchardialog->destroy();
    } else {
        ((VirtualTextAddonsWidgetsSelectSpecialCharDialog*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SelectSpecialCharDialog_OnDestroy(TextAddonsWidgets__SelectSpecialCharDialog* self, intptr_t slot) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->setTextAddonsWidgets__SelectSpecialCharDialog_Destroy_Callback(reinterpret_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog::TextAddonsWidgets__SelectSpecialCharDialog_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextAddonsWidgets__SelectSpecialCharDialog_FocusNextChild(TextAddonsWidgets__SelectSpecialCharDialog* self) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        return vtextaddonswidgetsselectspecialchardialog->focusNextChild();
    } else {
        return ((VirtualTextAddonsWidgetsSelectSpecialCharDialog*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool TextAddonsWidgets__SelectSpecialCharDialog_SuperFocusNextChild(TextAddonsWidgets__SelectSpecialCharDialog* self) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->setTextAddonsWidgets__SelectSpecialCharDialog_FocusNextChild_IsBase(true);
        return vtextaddonswidgetsselectspecialchardialog->focusNextChild();
    } else {
        return ((VirtualTextAddonsWidgetsSelectSpecialCharDialog*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SelectSpecialCharDialog_OnFocusNextChild(TextAddonsWidgets__SelectSpecialCharDialog* self, intptr_t slot) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->setTextAddonsWidgets__SelectSpecialCharDialog_FocusNextChild_Callback(reinterpret_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog::TextAddonsWidgets__SelectSpecialCharDialog_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextAddonsWidgets__SelectSpecialCharDialog_FocusPreviousChild(TextAddonsWidgets__SelectSpecialCharDialog* self) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        return vtextaddonswidgetsselectspecialchardialog->focusPreviousChild();
    } else {
        return ((VirtualTextAddonsWidgetsSelectSpecialCharDialog*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool TextAddonsWidgets__SelectSpecialCharDialog_SuperFocusPreviousChild(TextAddonsWidgets__SelectSpecialCharDialog* self) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->setTextAddonsWidgets__SelectSpecialCharDialog_FocusPreviousChild_IsBase(true);
        return vtextaddonswidgetsselectspecialchardialog->focusPreviousChild();
    } else {
        return ((VirtualTextAddonsWidgetsSelectSpecialCharDialog*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SelectSpecialCharDialog_OnFocusPreviousChild(TextAddonsWidgets__SelectSpecialCharDialog* self, intptr_t slot) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->setTextAddonsWidgets__SelectSpecialCharDialog_FocusPreviousChild_Callback(reinterpret_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog::TextAddonsWidgets__SelectSpecialCharDialog_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* TextAddonsWidgets__SelectSpecialCharDialog_Sender(const TextAddonsWidgets__SelectSpecialCharDialog* self) {
    auto* vtextaddonswidgetsselectspecialchardialog = const_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(dynamic_cast<const VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self));
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        return vtextaddonswidgetsselectspecialchardialog->sender();
    } else {
        return ((VirtualTextAddonsWidgetsSelectSpecialCharDialog*)self)->sender();
    }
}

// Base class handler implementation
QObject* TextAddonsWidgets__SelectSpecialCharDialog_SuperSender(const TextAddonsWidgets__SelectSpecialCharDialog* self) {
    auto* vtextaddonswidgetsselectspecialchardialog = const_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(dynamic_cast<const VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self));
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->setTextAddonsWidgets__SelectSpecialCharDialog_Sender_IsBase(true);
        return vtextaddonswidgetsselectspecialchardialog->sender();
    } else {
        return ((VirtualTextAddonsWidgetsSelectSpecialCharDialog*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SelectSpecialCharDialog_OnSender(const TextAddonsWidgets__SelectSpecialCharDialog* self, intptr_t slot) {
    auto* vtextaddonswidgetsselectspecialchardialog = const_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(dynamic_cast<const VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self));
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->setTextAddonsWidgets__SelectSpecialCharDialog_Sender_Callback(reinterpret_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog::TextAddonsWidgets__SelectSpecialCharDialog_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int TextAddonsWidgets__SelectSpecialCharDialog_SenderSignalIndex(const TextAddonsWidgets__SelectSpecialCharDialog* self) {
    auto* vtextaddonswidgetsselectspecialchardialog = const_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(dynamic_cast<const VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self));
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        return vtextaddonswidgetsselectspecialchardialog->senderSignalIndex();
    } else {
        return ((VirtualTextAddonsWidgetsSelectSpecialCharDialog*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int TextAddonsWidgets__SelectSpecialCharDialog_SuperSenderSignalIndex(const TextAddonsWidgets__SelectSpecialCharDialog* self) {
    auto* vtextaddonswidgetsselectspecialchardialog = const_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(dynamic_cast<const VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self));
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->setTextAddonsWidgets__SelectSpecialCharDialog_SenderSignalIndex_IsBase(true);
        return vtextaddonswidgetsselectspecialchardialog->senderSignalIndex();
    } else {
        return ((VirtualTextAddonsWidgetsSelectSpecialCharDialog*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SelectSpecialCharDialog_OnSenderSignalIndex(const TextAddonsWidgets__SelectSpecialCharDialog* self, intptr_t slot) {
    auto* vtextaddonswidgetsselectspecialchardialog = const_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(dynamic_cast<const VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self));
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->setTextAddonsWidgets__SelectSpecialCharDialog_SenderSignalIndex_Callback(reinterpret_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog::TextAddonsWidgets__SelectSpecialCharDialog_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int TextAddonsWidgets__SelectSpecialCharDialog_Receivers(const TextAddonsWidgets__SelectSpecialCharDialog* self, const char* signal) {
    auto* vtextaddonswidgetsselectspecialchardialog = const_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(dynamic_cast<const VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self));
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        return vtextaddonswidgetsselectspecialchardialog->receivers(signal);
    } else {
        return ((VirtualTextAddonsWidgetsSelectSpecialCharDialog*)self)->receivers(signal);
    }
}

// Base class handler implementation
int TextAddonsWidgets__SelectSpecialCharDialog_SuperReceivers(const TextAddonsWidgets__SelectSpecialCharDialog* self, const char* signal) {
    auto* vtextaddonswidgetsselectspecialchardialog = const_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(dynamic_cast<const VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self));
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->setTextAddonsWidgets__SelectSpecialCharDialog_Receivers_IsBase(true);
        return vtextaddonswidgetsselectspecialchardialog->receivers(signal);
    } else {
        return ((VirtualTextAddonsWidgetsSelectSpecialCharDialog*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SelectSpecialCharDialog_OnReceivers(const TextAddonsWidgets__SelectSpecialCharDialog* self, intptr_t slot) {
    auto* vtextaddonswidgetsselectspecialchardialog = const_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(dynamic_cast<const VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self));
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->setTextAddonsWidgets__SelectSpecialCharDialog_Receivers_Callback(reinterpret_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog::TextAddonsWidgets__SelectSpecialCharDialog_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextAddonsWidgets__SelectSpecialCharDialog_IsSignalConnected(const TextAddonsWidgets__SelectSpecialCharDialog* self, const QMetaMethod* signal) {
    auto* vtextaddonswidgetsselectspecialchardialog = const_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(dynamic_cast<const VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self));
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        return vtextaddonswidgetsselectspecialchardialog->isSignalConnected(*signal);
    } else {
        return ((VirtualTextAddonsWidgetsSelectSpecialCharDialog*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool TextAddonsWidgets__SelectSpecialCharDialog_SuperIsSignalConnected(const TextAddonsWidgets__SelectSpecialCharDialog* self, const QMetaMethod* signal) {
    auto* vtextaddonswidgetsselectspecialchardialog = const_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(dynamic_cast<const VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self));
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->setTextAddonsWidgets__SelectSpecialCharDialog_IsSignalConnected_IsBase(true);
        return vtextaddonswidgetsselectspecialchardialog->isSignalConnected(*signal);
    } else {
        return ((VirtualTextAddonsWidgetsSelectSpecialCharDialog*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SelectSpecialCharDialog_OnIsSignalConnected(const TextAddonsWidgets__SelectSpecialCharDialog* self, intptr_t slot) {
    auto* vtextaddonswidgetsselectspecialchardialog = const_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(dynamic_cast<const VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self));
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->setTextAddonsWidgets__SelectSpecialCharDialog_IsSignalConnected_Callback(reinterpret_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog::TextAddonsWidgets__SelectSpecialCharDialog_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double TextAddonsWidgets__SelectSpecialCharDialog_GetDecodedMetricF(const TextAddonsWidgets__SelectSpecialCharDialog* self, int metricA, int metricB) {
    auto* vtextaddonswidgetsselectspecialchardialog = const_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(dynamic_cast<const VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self));
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        return vtextaddonswidgetsselectspecialchardialog->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualTextAddonsWidgetsSelectSpecialCharDialog*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double TextAddonsWidgets__SelectSpecialCharDialog_SuperGetDecodedMetricF(const TextAddonsWidgets__SelectSpecialCharDialog* self, int metricA, int metricB) {
    auto* vtextaddonswidgetsselectspecialchardialog = const_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(dynamic_cast<const VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self));
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->setTextAddonsWidgets__SelectSpecialCharDialog_GetDecodedMetricF_IsBase(true);
        return vtextaddonswidgetsselectspecialchardialog->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualTextAddonsWidgetsSelectSpecialCharDialog*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SelectSpecialCharDialog_OnGetDecodedMetricF(const TextAddonsWidgets__SelectSpecialCharDialog* self, intptr_t slot) {
    auto* vtextaddonswidgetsselectspecialchardialog = const_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(dynamic_cast<const VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self));
    if (vtextaddonswidgetsselectspecialchardialog && vtextaddonswidgetsselectspecialchardialog->isVirtualTextAddonsWidgetsSelectSpecialCharDialog) {
        vtextaddonswidgetsselectspecialchardialog->setTextAddonsWidgets__SelectSpecialCharDialog_GetDecodedMetricF_Callback(reinterpret_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog::TextAddonsWidgets__SelectSpecialCharDialog_GetDecodedMetricF_Callback>(slot));
    }
}

void TextAddonsWidgets__SelectSpecialCharDialog_Delete(TextAddonsWidgets__SelectSpecialCharDialog* self) {
    delete self;
}
