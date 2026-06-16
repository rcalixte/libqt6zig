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
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#define WORKAROUND_INNER_CLASS_DEFINITION_TextGrammarCheck__GrammalecteConfigDialog
#include <grammalecteconfigdialog.h>
#include "libgrammalecteconfigdialog.h"
#include "libgrammalecteconfigdialog.hxx"

TextGrammarCheck__GrammalecteConfigDialog* TextGrammarCheck__GrammalecteConfigDialog_new(QWidget* parent) {
    return new VirtualTextGrammarCheckGrammalecteConfigDialog(parent);
}

TextGrammarCheck__GrammalecteConfigDialog* TextGrammarCheck__GrammalecteConfigDialog_new2() {
    return new VirtualTextGrammarCheckGrammalecteConfigDialog();
}

TextGrammarCheck__GrammalecteConfigDialog* TextGrammarCheck__GrammalecteConfigDialog_new3(QWidget* parent, bool disableMessageBox) {
    return new VirtualTextGrammarCheckGrammalecteConfigDialog(parent, disableMessageBox);
}

QMetaObject* TextGrammarCheck__GrammalecteConfigDialog_MetaObject(const TextGrammarCheck__GrammalecteConfigDialog* self) {
    return (QMetaObject*)self->metaObject();
}

void* TextGrammarCheck__GrammalecteConfigDialog_Metacast(TextGrammarCheck__GrammalecteConfigDialog* self, const char* param1) {
    return self->qt_metacast(param1);
}

int TextGrammarCheck__GrammalecteConfigDialog_Metacall(TextGrammarCheck__GrammalecteConfigDialog* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Base class handler implementation
QMetaObject* TextGrammarCheck__GrammalecteConfigDialog_SuperMetaObject(const TextGrammarCheck__GrammalecteConfigDialog* self) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = const_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigDialog*>(self));
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->setTextGrammarCheck__GrammalecteConfigDialog_MetaObject_IsBase(true);
        return (QMetaObject*)vtextgrammarcheckgrammalecteconfigdialog->metaObject();
    } else {
        return (QMetaObject*)self->TextGrammarCheck::GrammalecteConfigDialog::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigDialog_OnMetaObject(const TextGrammarCheck__GrammalecteConfigDialog* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = const_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigDialog*>(self));
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->setTextGrammarCheck__GrammalecteConfigDialog_MetaObject_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigDialog::TextGrammarCheck__GrammalecteConfigDialog_MetaObject_Callback>(slot));
    }
}

// Base class handler implementation
void* TextGrammarCheck__GrammalecteConfigDialog_SuperMetacast(TextGrammarCheck__GrammalecteConfigDialog* self, const char* param1) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->setTextGrammarCheck__GrammalecteConfigDialog_Metacast_IsBase(true);
        return vtextgrammarcheckgrammalecteconfigdialog->qt_metacast(param1);
    } else {
        return self->TextGrammarCheck::GrammalecteConfigDialog::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigDialog_OnMetacast(TextGrammarCheck__GrammalecteConfigDialog* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->setTextGrammarCheck__GrammalecteConfigDialog_Metacast_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigDialog::TextGrammarCheck__GrammalecteConfigDialog_Metacast_Callback>(slot));
    }
}

// Base class handler implementation
int TextGrammarCheck__GrammalecteConfigDialog_SuperMetacall(TextGrammarCheck__GrammalecteConfigDialog* self, int param1, int param2, void** param3) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->setTextGrammarCheck__GrammalecteConfigDialog_Metacall_IsBase(true);
        return vtextgrammarcheckgrammalecteconfigdialog->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->TextGrammarCheck::GrammalecteConfigDialog::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigDialog_OnMetacall(TextGrammarCheck__GrammalecteConfigDialog* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->setTextGrammarCheck__GrammalecteConfigDialog_Metacall_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigDialog::TextGrammarCheck__GrammalecteConfigDialog_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_SetVisible(TextGrammarCheck__GrammalecteConfigDialog* self, bool visible) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->setVisible(visible);
    } else {
        self->TextGrammarCheck::GrammalecteConfigDialog::setVisible(visible);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_SuperSetVisible(TextGrammarCheck__GrammalecteConfigDialog* self, bool visible) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->setTextGrammarCheck__GrammalecteConfigDialog_SetVisible_IsBase(true);
        vtextgrammarcheckgrammalecteconfigdialog->setVisible(visible);
    } else {
        self->TextGrammarCheck::GrammalecteConfigDialog::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigDialog_OnSetVisible(TextGrammarCheck__GrammalecteConfigDialog* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->setTextGrammarCheck__GrammalecteConfigDialog_SetVisible_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigDialog::TextGrammarCheck__GrammalecteConfigDialog_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* TextGrammarCheck__GrammalecteConfigDialog_SizeHint(const TextGrammarCheck__GrammalecteConfigDialog* self) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = const_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigDialog*>(self));
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        return new QSize(vtextgrammarcheckgrammalecteconfigdialog->sizeHint());
    } else {
        return new QSize(((VirtualTextGrammarCheckGrammalecteConfigDialog*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* TextGrammarCheck__GrammalecteConfigDialog_SuperSizeHint(const TextGrammarCheck__GrammalecteConfigDialog* self) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = const_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigDialog*>(self));
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->setTextGrammarCheck__GrammalecteConfigDialog_SizeHint_IsBase(true);
        return new QSize(vtextgrammarcheckgrammalecteconfigdialog->sizeHint());
    } else {
        return new QSize(((VirtualTextGrammarCheckGrammalecteConfigDialog*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigDialog_OnSizeHint(const TextGrammarCheck__GrammalecteConfigDialog* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = const_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigDialog*>(self));
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->setTextGrammarCheck__GrammalecteConfigDialog_SizeHint_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigDialog::TextGrammarCheck__GrammalecteConfigDialog_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* TextGrammarCheck__GrammalecteConfigDialog_MinimumSizeHint(const TextGrammarCheck__GrammalecteConfigDialog* self) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = const_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigDialog*>(self));
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        return new QSize(vtextgrammarcheckgrammalecteconfigdialog->minimumSizeHint());
    } else {
        return new QSize(((VirtualTextGrammarCheckGrammalecteConfigDialog*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* TextGrammarCheck__GrammalecteConfigDialog_SuperMinimumSizeHint(const TextGrammarCheck__GrammalecteConfigDialog* self) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = const_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigDialog*>(self));
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->setTextGrammarCheck__GrammalecteConfigDialog_MinimumSizeHint_IsBase(true);
        return new QSize(vtextgrammarcheckgrammalecteconfigdialog->minimumSizeHint());
    } else {
        return new QSize(((VirtualTextGrammarCheckGrammalecteConfigDialog*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigDialog_OnMinimumSizeHint(const TextGrammarCheck__GrammalecteConfigDialog* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = const_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigDialog*>(self));
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->setTextGrammarCheck__GrammalecteConfigDialog_MinimumSizeHint_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigDialog::TextGrammarCheck__GrammalecteConfigDialog_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_Open(TextGrammarCheck__GrammalecteConfigDialog* self) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->open();
    } else {
        self->TextGrammarCheck::GrammalecteConfigDialog::open();
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_SuperOpen(TextGrammarCheck__GrammalecteConfigDialog* self) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->setTextGrammarCheck__GrammalecteConfigDialog_Open_IsBase(true);
        vtextgrammarcheckgrammalecteconfigdialog->open();
    } else {
        self->TextGrammarCheck::GrammalecteConfigDialog::open();
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigDialog_OnOpen(TextGrammarCheck__GrammalecteConfigDialog* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->setTextGrammarCheck__GrammalecteConfigDialog_Open_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigDialog::TextGrammarCheck__GrammalecteConfigDialog_Open_Callback>(slot));
    }
}

// Derived class handler implementation
int TextGrammarCheck__GrammalecteConfigDialog_Exec(TextGrammarCheck__GrammalecteConfigDialog* self) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        return vtextgrammarcheckgrammalecteconfigdialog->exec();
    } else {
        return self->TextGrammarCheck::GrammalecteConfigDialog::exec();
    }
}

// Base class handler implementation
int TextGrammarCheck__GrammalecteConfigDialog_SuperExec(TextGrammarCheck__GrammalecteConfigDialog* self) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->setTextGrammarCheck__GrammalecteConfigDialog_Exec_IsBase(true);
        return vtextgrammarcheckgrammalecteconfigdialog->exec();
    } else {
        return self->TextGrammarCheck::GrammalecteConfigDialog::exec();
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigDialog_OnExec(TextGrammarCheck__GrammalecteConfigDialog* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->setTextGrammarCheck__GrammalecteConfigDialog_Exec_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigDialog::TextGrammarCheck__GrammalecteConfigDialog_Exec_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_Done(TextGrammarCheck__GrammalecteConfigDialog* self, int param1) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->done(static_cast<int>(param1));
    } else {
        self->TextGrammarCheck::GrammalecteConfigDialog::done(static_cast<int>(param1));
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_SuperDone(TextGrammarCheck__GrammalecteConfigDialog* self, int param1) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->setTextGrammarCheck__GrammalecteConfigDialog_Done_IsBase(true);
        vtextgrammarcheckgrammalecteconfigdialog->done(static_cast<int>(param1));
    } else {
        self->TextGrammarCheck::GrammalecteConfigDialog::done(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigDialog_OnDone(TextGrammarCheck__GrammalecteConfigDialog* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->setTextGrammarCheck__GrammalecteConfigDialog_Done_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigDialog::TextGrammarCheck__GrammalecteConfigDialog_Done_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_Accept(TextGrammarCheck__GrammalecteConfigDialog* self) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->accept();
    } else {
        self->TextGrammarCheck::GrammalecteConfigDialog::accept();
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_SuperAccept(TextGrammarCheck__GrammalecteConfigDialog* self) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->setTextGrammarCheck__GrammalecteConfigDialog_Accept_IsBase(true);
        vtextgrammarcheckgrammalecteconfigdialog->accept();
    } else {
        self->TextGrammarCheck::GrammalecteConfigDialog::accept();
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigDialog_OnAccept(TextGrammarCheck__GrammalecteConfigDialog* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->setTextGrammarCheck__GrammalecteConfigDialog_Accept_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigDialog::TextGrammarCheck__GrammalecteConfigDialog_Accept_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_Reject(TextGrammarCheck__GrammalecteConfigDialog* self) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->reject();
    } else {
        self->TextGrammarCheck::GrammalecteConfigDialog::reject();
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_SuperReject(TextGrammarCheck__GrammalecteConfigDialog* self) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->setTextGrammarCheck__GrammalecteConfigDialog_Reject_IsBase(true);
        vtextgrammarcheckgrammalecteconfigdialog->reject();
    } else {
        self->TextGrammarCheck::GrammalecteConfigDialog::reject();
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigDialog_OnReject(TextGrammarCheck__GrammalecteConfigDialog* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->setTextGrammarCheck__GrammalecteConfigDialog_Reject_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigDialog::TextGrammarCheck__GrammalecteConfigDialog_Reject_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_KeyPressEvent(TextGrammarCheck__GrammalecteConfigDialog* self, QKeyEvent* param1) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->keyPressEvent(param1);
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigDialog*)self)->keyPressEvent(param1);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_SuperKeyPressEvent(TextGrammarCheck__GrammalecteConfigDialog* self, QKeyEvent* param1) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->setTextGrammarCheck__GrammalecteConfigDialog_KeyPressEvent_IsBase(true);
        vtextgrammarcheckgrammalecteconfigdialog->keyPressEvent(param1);
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigDialog*)self)->keyPressEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigDialog_OnKeyPressEvent(TextGrammarCheck__GrammalecteConfigDialog* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->setTextGrammarCheck__GrammalecteConfigDialog_KeyPressEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigDialog::TextGrammarCheck__GrammalecteConfigDialog_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_CloseEvent(TextGrammarCheck__GrammalecteConfigDialog* self, QCloseEvent* param1) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->closeEvent(param1);
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigDialog*)self)->closeEvent(param1);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_SuperCloseEvent(TextGrammarCheck__GrammalecteConfigDialog* self, QCloseEvent* param1) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->setTextGrammarCheck__GrammalecteConfigDialog_CloseEvent_IsBase(true);
        vtextgrammarcheckgrammalecteconfigdialog->closeEvent(param1);
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigDialog*)self)->closeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigDialog_OnCloseEvent(TextGrammarCheck__GrammalecteConfigDialog* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->setTextGrammarCheck__GrammalecteConfigDialog_CloseEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigDialog::TextGrammarCheck__GrammalecteConfigDialog_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_ShowEvent(TextGrammarCheck__GrammalecteConfigDialog* self, QShowEvent* param1) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->showEvent(param1);
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigDialog*)self)->showEvent(param1);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_SuperShowEvent(TextGrammarCheck__GrammalecteConfigDialog* self, QShowEvent* param1) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->setTextGrammarCheck__GrammalecteConfigDialog_ShowEvent_IsBase(true);
        vtextgrammarcheckgrammalecteconfigdialog->showEvent(param1);
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigDialog*)self)->showEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigDialog_OnShowEvent(TextGrammarCheck__GrammalecteConfigDialog* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->setTextGrammarCheck__GrammalecteConfigDialog_ShowEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigDialog::TextGrammarCheck__GrammalecteConfigDialog_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_ResizeEvent(TextGrammarCheck__GrammalecteConfigDialog* self, QResizeEvent* param1) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->resizeEvent(param1);
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigDialog*)self)->resizeEvent(param1);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_SuperResizeEvent(TextGrammarCheck__GrammalecteConfigDialog* self, QResizeEvent* param1) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->setTextGrammarCheck__GrammalecteConfigDialog_ResizeEvent_IsBase(true);
        vtextgrammarcheckgrammalecteconfigdialog->resizeEvent(param1);
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigDialog*)self)->resizeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigDialog_OnResizeEvent(TextGrammarCheck__GrammalecteConfigDialog* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->setTextGrammarCheck__GrammalecteConfigDialog_ResizeEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigDialog::TextGrammarCheck__GrammalecteConfigDialog_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_ContextMenuEvent(TextGrammarCheck__GrammalecteConfigDialog* self, QContextMenuEvent* param1) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->contextMenuEvent(param1);
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigDialog*)self)->contextMenuEvent(param1);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_SuperContextMenuEvent(TextGrammarCheck__GrammalecteConfigDialog* self, QContextMenuEvent* param1) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->setTextGrammarCheck__GrammalecteConfigDialog_ContextMenuEvent_IsBase(true);
        vtextgrammarcheckgrammalecteconfigdialog->contextMenuEvent(param1);
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigDialog*)self)->contextMenuEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigDialog_OnContextMenuEvent(TextGrammarCheck__GrammalecteConfigDialog* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->setTextGrammarCheck__GrammalecteConfigDialog_ContextMenuEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigDialog::TextGrammarCheck__GrammalecteConfigDialog_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextGrammarCheck__GrammalecteConfigDialog_EventFilter(TextGrammarCheck__GrammalecteConfigDialog* self, QObject* param1, QEvent* param2) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        return vtextgrammarcheckgrammalecteconfigdialog->eventFilter(param1, param2);
    } else {
        return ((VirtualTextGrammarCheckGrammalecteConfigDialog*)self)->eventFilter(param1, param2);
    }
}

// Base class handler implementation
bool TextGrammarCheck__GrammalecteConfigDialog_SuperEventFilter(TextGrammarCheck__GrammalecteConfigDialog* self, QObject* param1, QEvent* param2) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->setTextGrammarCheck__GrammalecteConfigDialog_EventFilter_IsBase(true);
        return vtextgrammarcheckgrammalecteconfigdialog->eventFilter(param1, param2);
    } else {
        return ((VirtualTextGrammarCheckGrammalecteConfigDialog*)self)->eventFilter(param1, param2);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigDialog_OnEventFilter(TextGrammarCheck__GrammalecteConfigDialog* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->setTextGrammarCheck__GrammalecteConfigDialog_EventFilter_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigDialog::TextGrammarCheck__GrammalecteConfigDialog_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
int TextGrammarCheck__GrammalecteConfigDialog_DevType(const TextGrammarCheck__GrammalecteConfigDialog* self) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = const_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigDialog*>(self));
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        return vtextgrammarcheckgrammalecteconfigdialog->devType();
    } else {
        return self->TextGrammarCheck::GrammalecteConfigDialog::devType();
    }
}

// Base class handler implementation
int TextGrammarCheck__GrammalecteConfigDialog_SuperDevType(const TextGrammarCheck__GrammalecteConfigDialog* self) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = const_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigDialog*>(self));
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->setTextGrammarCheck__GrammalecteConfigDialog_DevType_IsBase(true);
        return vtextgrammarcheckgrammalecteconfigdialog->devType();
    } else {
        return self->TextGrammarCheck::GrammalecteConfigDialog::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigDialog_OnDevType(const TextGrammarCheck__GrammalecteConfigDialog* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = const_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigDialog*>(self));
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->setTextGrammarCheck__GrammalecteConfigDialog_DevType_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigDialog::TextGrammarCheck__GrammalecteConfigDialog_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
int TextGrammarCheck__GrammalecteConfigDialog_HeightForWidth(const TextGrammarCheck__GrammalecteConfigDialog* self, int param1) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = const_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigDialog*>(self));
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        return vtextgrammarcheckgrammalecteconfigdialog->heightForWidth(static_cast<int>(param1));
    } else {
        return self->TextGrammarCheck::GrammalecteConfigDialog::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int TextGrammarCheck__GrammalecteConfigDialog_SuperHeightForWidth(const TextGrammarCheck__GrammalecteConfigDialog* self, int param1) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = const_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigDialog*>(self));
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->setTextGrammarCheck__GrammalecteConfigDialog_HeightForWidth_IsBase(true);
        return vtextgrammarcheckgrammalecteconfigdialog->heightForWidth(static_cast<int>(param1));
    } else {
        return self->TextGrammarCheck::GrammalecteConfigDialog::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigDialog_OnHeightForWidth(const TextGrammarCheck__GrammalecteConfigDialog* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = const_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigDialog*>(self));
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->setTextGrammarCheck__GrammalecteConfigDialog_HeightForWidth_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigDialog::TextGrammarCheck__GrammalecteConfigDialog_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextGrammarCheck__GrammalecteConfigDialog_HasHeightForWidth(const TextGrammarCheck__GrammalecteConfigDialog* self) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = const_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigDialog*>(self));
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        return vtextgrammarcheckgrammalecteconfigdialog->hasHeightForWidth();
    } else {
        return self->TextGrammarCheck::GrammalecteConfigDialog::hasHeightForWidth();
    }
}

// Base class handler implementation
bool TextGrammarCheck__GrammalecteConfigDialog_SuperHasHeightForWidth(const TextGrammarCheck__GrammalecteConfigDialog* self) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = const_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigDialog*>(self));
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->setTextGrammarCheck__GrammalecteConfigDialog_HasHeightForWidth_IsBase(true);
        return vtextgrammarcheckgrammalecteconfigdialog->hasHeightForWidth();
    } else {
        return self->TextGrammarCheck::GrammalecteConfigDialog::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigDialog_OnHasHeightForWidth(const TextGrammarCheck__GrammalecteConfigDialog* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = const_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigDialog*>(self));
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->setTextGrammarCheck__GrammalecteConfigDialog_HasHeightForWidth_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigDialog::TextGrammarCheck__GrammalecteConfigDialog_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* TextGrammarCheck__GrammalecteConfigDialog_PaintEngine(const TextGrammarCheck__GrammalecteConfigDialog* self) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = const_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigDialog*>(self));
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        return vtextgrammarcheckgrammalecteconfigdialog->paintEngine();
    } else {
        return self->TextGrammarCheck::GrammalecteConfigDialog::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* TextGrammarCheck__GrammalecteConfigDialog_SuperPaintEngine(const TextGrammarCheck__GrammalecteConfigDialog* self) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = const_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigDialog*>(self));
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->setTextGrammarCheck__GrammalecteConfigDialog_PaintEngine_IsBase(true);
        return vtextgrammarcheckgrammalecteconfigdialog->paintEngine();
    } else {
        return self->TextGrammarCheck::GrammalecteConfigDialog::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigDialog_OnPaintEngine(const TextGrammarCheck__GrammalecteConfigDialog* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = const_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigDialog*>(self));
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->setTextGrammarCheck__GrammalecteConfigDialog_PaintEngine_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigDialog::TextGrammarCheck__GrammalecteConfigDialog_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextGrammarCheck__GrammalecteConfigDialog_Event(TextGrammarCheck__GrammalecteConfigDialog* self, QEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        return vtextgrammarcheckgrammalecteconfigdialog->event(event);
    } else {
        return ((VirtualTextGrammarCheckGrammalecteConfigDialog*)self)->event(event);
    }
}

// Base class handler implementation
bool TextGrammarCheck__GrammalecteConfigDialog_SuperEvent(TextGrammarCheck__GrammalecteConfigDialog* self, QEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->setTextGrammarCheck__GrammalecteConfigDialog_Event_IsBase(true);
        return vtextgrammarcheckgrammalecteconfigdialog->event(event);
    } else {
        return ((VirtualTextGrammarCheckGrammalecteConfigDialog*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigDialog_OnEvent(TextGrammarCheck__GrammalecteConfigDialog* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->setTextGrammarCheck__GrammalecteConfigDialog_Event_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigDialog::TextGrammarCheck__GrammalecteConfigDialog_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_MousePressEvent(TextGrammarCheck__GrammalecteConfigDialog* self, QMouseEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->mousePressEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigDialog*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_SuperMousePressEvent(TextGrammarCheck__GrammalecteConfigDialog* self, QMouseEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->setTextGrammarCheck__GrammalecteConfigDialog_MousePressEvent_IsBase(true);
        vtextgrammarcheckgrammalecteconfigdialog->mousePressEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigDialog*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigDialog_OnMousePressEvent(TextGrammarCheck__GrammalecteConfigDialog* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->setTextGrammarCheck__GrammalecteConfigDialog_MousePressEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigDialog::TextGrammarCheck__GrammalecteConfigDialog_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_MouseReleaseEvent(TextGrammarCheck__GrammalecteConfigDialog* self, QMouseEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->mouseReleaseEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigDialog*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_SuperMouseReleaseEvent(TextGrammarCheck__GrammalecteConfigDialog* self, QMouseEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->setTextGrammarCheck__GrammalecteConfigDialog_MouseReleaseEvent_IsBase(true);
        vtextgrammarcheckgrammalecteconfigdialog->mouseReleaseEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigDialog*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigDialog_OnMouseReleaseEvent(TextGrammarCheck__GrammalecteConfigDialog* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->setTextGrammarCheck__GrammalecteConfigDialog_MouseReleaseEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigDialog::TextGrammarCheck__GrammalecteConfigDialog_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_MouseDoubleClickEvent(TextGrammarCheck__GrammalecteConfigDialog* self, QMouseEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->mouseDoubleClickEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigDialog*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_SuperMouseDoubleClickEvent(TextGrammarCheck__GrammalecteConfigDialog* self, QMouseEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->setTextGrammarCheck__GrammalecteConfigDialog_MouseDoubleClickEvent_IsBase(true);
        vtextgrammarcheckgrammalecteconfigdialog->mouseDoubleClickEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigDialog*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigDialog_OnMouseDoubleClickEvent(TextGrammarCheck__GrammalecteConfigDialog* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->setTextGrammarCheck__GrammalecteConfigDialog_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigDialog::TextGrammarCheck__GrammalecteConfigDialog_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_MouseMoveEvent(TextGrammarCheck__GrammalecteConfigDialog* self, QMouseEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->mouseMoveEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigDialog*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_SuperMouseMoveEvent(TextGrammarCheck__GrammalecteConfigDialog* self, QMouseEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->setTextGrammarCheck__GrammalecteConfigDialog_MouseMoveEvent_IsBase(true);
        vtextgrammarcheckgrammalecteconfigdialog->mouseMoveEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigDialog*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigDialog_OnMouseMoveEvent(TextGrammarCheck__GrammalecteConfigDialog* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->setTextGrammarCheck__GrammalecteConfigDialog_MouseMoveEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigDialog::TextGrammarCheck__GrammalecteConfigDialog_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_WheelEvent(TextGrammarCheck__GrammalecteConfigDialog* self, QWheelEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->wheelEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigDialog*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_SuperWheelEvent(TextGrammarCheck__GrammalecteConfigDialog* self, QWheelEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->setTextGrammarCheck__GrammalecteConfigDialog_WheelEvent_IsBase(true);
        vtextgrammarcheckgrammalecteconfigdialog->wheelEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigDialog*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigDialog_OnWheelEvent(TextGrammarCheck__GrammalecteConfigDialog* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->setTextGrammarCheck__GrammalecteConfigDialog_WheelEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigDialog::TextGrammarCheck__GrammalecteConfigDialog_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_KeyReleaseEvent(TextGrammarCheck__GrammalecteConfigDialog* self, QKeyEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->keyReleaseEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigDialog*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_SuperKeyReleaseEvent(TextGrammarCheck__GrammalecteConfigDialog* self, QKeyEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->setTextGrammarCheck__GrammalecteConfigDialog_KeyReleaseEvent_IsBase(true);
        vtextgrammarcheckgrammalecteconfigdialog->keyReleaseEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigDialog*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigDialog_OnKeyReleaseEvent(TextGrammarCheck__GrammalecteConfigDialog* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->setTextGrammarCheck__GrammalecteConfigDialog_KeyReleaseEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigDialog::TextGrammarCheck__GrammalecteConfigDialog_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_FocusInEvent(TextGrammarCheck__GrammalecteConfigDialog* self, QFocusEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->focusInEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigDialog*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_SuperFocusInEvent(TextGrammarCheck__GrammalecteConfigDialog* self, QFocusEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->setTextGrammarCheck__GrammalecteConfigDialog_FocusInEvent_IsBase(true);
        vtextgrammarcheckgrammalecteconfigdialog->focusInEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigDialog*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigDialog_OnFocusInEvent(TextGrammarCheck__GrammalecteConfigDialog* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->setTextGrammarCheck__GrammalecteConfigDialog_FocusInEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigDialog::TextGrammarCheck__GrammalecteConfigDialog_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_FocusOutEvent(TextGrammarCheck__GrammalecteConfigDialog* self, QFocusEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->focusOutEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigDialog*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_SuperFocusOutEvent(TextGrammarCheck__GrammalecteConfigDialog* self, QFocusEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->setTextGrammarCheck__GrammalecteConfigDialog_FocusOutEvent_IsBase(true);
        vtextgrammarcheckgrammalecteconfigdialog->focusOutEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigDialog*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigDialog_OnFocusOutEvent(TextGrammarCheck__GrammalecteConfigDialog* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->setTextGrammarCheck__GrammalecteConfigDialog_FocusOutEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigDialog::TextGrammarCheck__GrammalecteConfigDialog_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_EnterEvent(TextGrammarCheck__GrammalecteConfigDialog* self, QEnterEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->enterEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigDialog*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_SuperEnterEvent(TextGrammarCheck__GrammalecteConfigDialog* self, QEnterEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->setTextGrammarCheck__GrammalecteConfigDialog_EnterEvent_IsBase(true);
        vtextgrammarcheckgrammalecteconfigdialog->enterEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigDialog*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigDialog_OnEnterEvent(TextGrammarCheck__GrammalecteConfigDialog* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->setTextGrammarCheck__GrammalecteConfigDialog_EnterEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigDialog::TextGrammarCheck__GrammalecteConfigDialog_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_LeaveEvent(TextGrammarCheck__GrammalecteConfigDialog* self, QEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->leaveEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigDialog*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_SuperLeaveEvent(TextGrammarCheck__GrammalecteConfigDialog* self, QEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->setTextGrammarCheck__GrammalecteConfigDialog_LeaveEvent_IsBase(true);
        vtextgrammarcheckgrammalecteconfigdialog->leaveEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigDialog*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigDialog_OnLeaveEvent(TextGrammarCheck__GrammalecteConfigDialog* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->setTextGrammarCheck__GrammalecteConfigDialog_LeaveEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigDialog::TextGrammarCheck__GrammalecteConfigDialog_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_PaintEvent(TextGrammarCheck__GrammalecteConfigDialog* self, QPaintEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->paintEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigDialog*)self)->paintEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_SuperPaintEvent(TextGrammarCheck__GrammalecteConfigDialog* self, QPaintEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->setTextGrammarCheck__GrammalecteConfigDialog_PaintEvent_IsBase(true);
        vtextgrammarcheckgrammalecteconfigdialog->paintEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigDialog*)self)->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigDialog_OnPaintEvent(TextGrammarCheck__GrammalecteConfigDialog* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->setTextGrammarCheck__GrammalecteConfigDialog_PaintEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigDialog::TextGrammarCheck__GrammalecteConfigDialog_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_MoveEvent(TextGrammarCheck__GrammalecteConfigDialog* self, QMoveEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->moveEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigDialog*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_SuperMoveEvent(TextGrammarCheck__GrammalecteConfigDialog* self, QMoveEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->setTextGrammarCheck__GrammalecteConfigDialog_MoveEvent_IsBase(true);
        vtextgrammarcheckgrammalecteconfigdialog->moveEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigDialog*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigDialog_OnMoveEvent(TextGrammarCheck__GrammalecteConfigDialog* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->setTextGrammarCheck__GrammalecteConfigDialog_MoveEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigDialog::TextGrammarCheck__GrammalecteConfigDialog_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_TabletEvent(TextGrammarCheck__GrammalecteConfigDialog* self, QTabletEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->tabletEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigDialog*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_SuperTabletEvent(TextGrammarCheck__GrammalecteConfigDialog* self, QTabletEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->setTextGrammarCheck__GrammalecteConfigDialog_TabletEvent_IsBase(true);
        vtextgrammarcheckgrammalecteconfigdialog->tabletEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigDialog*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigDialog_OnTabletEvent(TextGrammarCheck__GrammalecteConfigDialog* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->setTextGrammarCheck__GrammalecteConfigDialog_TabletEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigDialog::TextGrammarCheck__GrammalecteConfigDialog_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_ActionEvent(TextGrammarCheck__GrammalecteConfigDialog* self, QActionEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->actionEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigDialog*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_SuperActionEvent(TextGrammarCheck__GrammalecteConfigDialog* self, QActionEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->setTextGrammarCheck__GrammalecteConfigDialog_ActionEvent_IsBase(true);
        vtextgrammarcheckgrammalecteconfigdialog->actionEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigDialog*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigDialog_OnActionEvent(TextGrammarCheck__GrammalecteConfigDialog* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->setTextGrammarCheck__GrammalecteConfigDialog_ActionEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigDialog::TextGrammarCheck__GrammalecteConfigDialog_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_DragEnterEvent(TextGrammarCheck__GrammalecteConfigDialog* self, QDragEnterEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->dragEnterEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigDialog*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_SuperDragEnterEvent(TextGrammarCheck__GrammalecteConfigDialog* self, QDragEnterEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->setTextGrammarCheck__GrammalecteConfigDialog_DragEnterEvent_IsBase(true);
        vtextgrammarcheckgrammalecteconfigdialog->dragEnterEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigDialog*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigDialog_OnDragEnterEvent(TextGrammarCheck__GrammalecteConfigDialog* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->setTextGrammarCheck__GrammalecteConfigDialog_DragEnterEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigDialog::TextGrammarCheck__GrammalecteConfigDialog_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_DragMoveEvent(TextGrammarCheck__GrammalecteConfigDialog* self, QDragMoveEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->dragMoveEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigDialog*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_SuperDragMoveEvent(TextGrammarCheck__GrammalecteConfigDialog* self, QDragMoveEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->setTextGrammarCheck__GrammalecteConfigDialog_DragMoveEvent_IsBase(true);
        vtextgrammarcheckgrammalecteconfigdialog->dragMoveEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigDialog*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigDialog_OnDragMoveEvent(TextGrammarCheck__GrammalecteConfigDialog* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->setTextGrammarCheck__GrammalecteConfigDialog_DragMoveEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigDialog::TextGrammarCheck__GrammalecteConfigDialog_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_DragLeaveEvent(TextGrammarCheck__GrammalecteConfigDialog* self, QDragLeaveEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->dragLeaveEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigDialog*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_SuperDragLeaveEvent(TextGrammarCheck__GrammalecteConfigDialog* self, QDragLeaveEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->setTextGrammarCheck__GrammalecteConfigDialog_DragLeaveEvent_IsBase(true);
        vtextgrammarcheckgrammalecteconfigdialog->dragLeaveEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigDialog*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigDialog_OnDragLeaveEvent(TextGrammarCheck__GrammalecteConfigDialog* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->setTextGrammarCheck__GrammalecteConfigDialog_DragLeaveEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigDialog::TextGrammarCheck__GrammalecteConfigDialog_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_DropEvent(TextGrammarCheck__GrammalecteConfigDialog* self, QDropEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->dropEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigDialog*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_SuperDropEvent(TextGrammarCheck__GrammalecteConfigDialog* self, QDropEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->setTextGrammarCheck__GrammalecteConfigDialog_DropEvent_IsBase(true);
        vtextgrammarcheckgrammalecteconfigdialog->dropEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigDialog*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigDialog_OnDropEvent(TextGrammarCheck__GrammalecteConfigDialog* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->setTextGrammarCheck__GrammalecteConfigDialog_DropEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigDialog::TextGrammarCheck__GrammalecteConfigDialog_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_HideEvent(TextGrammarCheck__GrammalecteConfigDialog* self, QHideEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->hideEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigDialog*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_SuperHideEvent(TextGrammarCheck__GrammalecteConfigDialog* self, QHideEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->setTextGrammarCheck__GrammalecteConfigDialog_HideEvent_IsBase(true);
        vtextgrammarcheckgrammalecteconfigdialog->hideEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigDialog*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigDialog_OnHideEvent(TextGrammarCheck__GrammalecteConfigDialog* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->setTextGrammarCheck__GrammalecteConfigDialog_HideEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigDialog::TextGrammarCheck__GrammalecteConfigDialog_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextGrammarCheck__GrammalecteConfigDialog_NativeEvent(TextGrammarCheck__GrammalecteConfigDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        return vtextgrammarcheckgrammalecteconfigdialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualTextGrammarCheckGrammalecteConfigDialog*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool TextGrammarCheck__GrammalecteConfigDialog_SuperNativeEvent(TextGrammarCheck__GrammalecteConfigDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->setTextGrammarCheck__GrammalecteConfigDialog_NativeEvent_IsBase(true);
        return vtextgrammarcheckgrammalecteconfigdialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualTextGrammarCheckGrammalecteConfigDialog*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigDialog_OnNativeEvent(TextGrammarCheck__GrammalecteConfigDialog* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->setTextGrammarCheck__GrammalecteConfigDialog_NativeEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigDialog::TextGrammarCheck__GrammalecteConfigDialog_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_ChangeEvent(TextGrammarCheck__GrammalecteConfigDialog* self, QEvent* param1) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->changeEvent(param1);
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigDialog*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_SuperChangeEvent(TextGrammarCheck__GrammalecteConfigDialog* self, QEvent* param1) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->setTextGrammarCheck__GrammalecteConfigDialog_ChangeEvent_IsBase(true);
        vtextgrammarcheckgrammalecteconfigdialog->changeEvent(param1);
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigDialog*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigDialog_OnChangeEvent(TextGrammarCheck__GrammalecteConfigDialog* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->setTextGrammarCheck__GrammalecteConfigDialog_ChangeEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigDialog::TextGrammarCheck__GrammalecteConfigDialog_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int TextGrammarCheck__GrammalecteConfigDialog_Metric(const TextGrammarCheck__GrammalecteConfigDialog* self, int param1) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = const_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigDialog*>(self));
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        return vtextgrammarcheckgrammalecteconfigdialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualTextGrammarCheckGrammalecteConfigDialog*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int TextGrammarCheck__GrammalecteConfigDialog_SuperMetric(const TextGrammarCheck__GrammalecteConfigDialog* self, int param1) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = const_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigDialog*>(self));
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->setTextGrammarCheck__GrammalecteConfigDialog_Metric_IsBase(true);
        return vtextgrammarcheckgrammalecteconfigdialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualTextGrammarCheckGrammalecteConfigDialog*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigDialog_OnMetric(const TextGrammarCheck__GrammalecteConfigDialog* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = const_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigDialog*>(self));
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->setTextGrammarCheck__GrammalecteConfigDialog_Metric_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigDialog::TextGrammarCheck__GrammalecteConfigDialog_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_InitPainter(const TextGrammarCheck__GrammalecteConfigDialog* self, QPainter* painter) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = const_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigDialog*>(self));
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->initPainter(painter);
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigDialog*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_SuperInitPainter(const TextGrammarCheck__GrammalecteConfigDialog* self, QPainter* painter) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = const_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigDialog*>(self));
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->setTextGrammarCheck__GrammalecteConfigDialog_InitPainter_IsBase(true);
        vtextgrammarcheckgrammalecteconfigdialog->initPainter(painter);
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigDialog*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigDialog_OnInitPainter(const TextGrammarCheck__GrammalecteConfigDialog* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = const_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigDialog*>(self));
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->setTextGrammarCheck__GrammalecteConfigDialog_InitPainter_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigDialog::TextGrammarCheck__GrammalecteConfigDialog_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* TextGrammarCheck__GrammalecteConfigDialog_Redirected(const TextGrammarCheck__GrammalecteConfigDialog* self, QPoint* offset) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = const_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigDialog*>(self));
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        return vtextgrammarcheckgrammalecteconfigdialog->redirected(offset);
    } else {
        return ((VirtualTextGrammarCheckGrammalecteConfigDialog*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* TextGrammarCheck__GrammalecteConfigDialog_SuperRedirected(const TextGrammarCheck__GrammalecteConfigDialog* self, QPoint* offset) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = const_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigDialog*>(self));
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->setTextGrammarCheck__GrammalecteConfigDialog_Redirected_IsBase(true);
        return vtextgrammarcheckgrammalecteconfigdialog->redirected(offset);
    } else {
        return ((VirtualTextGrammarCheckGrammalecteConfigDialog*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigDialog_OnRedirected(const TextGrammarCheck__GrammalecteConfigDialog* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = const_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigDialog*>(self));
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->setTextGrammarCheck__GrammalecteConfigDialog_Redirected_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigDialog::TextGrammarCheck__GrammalecteConfigDialog_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* TextGrammarCheck__GrammalecteConfigDialog_SharedPainter(const TextGrammarCheck__GrammalecteConfigDialog* self) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = const_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigDialog*>(self));
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        return vtextgrammarcheckgrammalecteconfigdialog->sharedPainter();
    } else {
        return ((VirtualTextGrammarCheckGrammalecteConfigDialog*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* TextGrammarCheck__GrammalecteConfigDialog_SuperSharedPainter(const TextGrammarCheck__GrammalecteConfigDialog* self) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = const_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigDialog*>(self));
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->setTextGrammarCheck__GrammalecteConfigDialog_SharedPainter_IsBase(true);
        return vtextgrammarcheckgrammalecteconfigdialog->sharedPainter();
    } else {
        return ((VirtualTextGrammarCheckGrammalecteConfigDialog*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigDialog_OnSharedPainter(const TextGrammarCheck__GrammalecteConfigDialog* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = const_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigDialog*>(self));
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->setTextGrammarCheck__GrammalecteConfigDialog_SharedPainter_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigDialog::TextGrammarCheck__GrammalecteConfigDialog_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_InputMethodEvent(TextGrammarCheck__GrammalecteConfigDialog* self, QInputMethodEvent* param1) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->inputMethodEvent(param1);
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigDialog*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_SuperInputMethodEvent(TextGrammarCheck__GrammalecteConfigDialog* self, QInputMethodEvent* param1) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->setTextGrammarCheck__GrammalecteConfigDialog_InputMethodEvent_IsBase(true);
        vtextgrammarcheckgrammalecteconfigdialog->inputMethodEvent(param1);
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigDialog*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigDialog_OnInputMethodEvent(TextGrammarCheck__GrammalecteConfigDialog* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->setTextGrammarCheck__GrammalecteConfigDialog_InputMethodEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigDialog::TextGrammarCheck__GrammalecteConfigDialog_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* TextGrammarCheck__GrammalecteConfigDialog_InputMethodQuery(const TextGrammarCheck__GrammalecteConfigDialog* self, int param1) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = const_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigDialog*>(self));
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        return new QVariant(vtextgrammarcheckgrammalecteconfigdialog->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualTextGrammarCheckGrammalecteConfigDialog*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* TextGrammarCheck__GrammalecteConfigDialog_SuperInputMethodQuery(const TextGrammarCheck__GrammalecteConfigDialog* self, int param1) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = const_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigDialog*>(self));
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->setTextGrammarCheck__GrammalecteConfigDialog_InputMethodQuery_IsBase(true);
        return new QVariant(vtextgrammarcheckgrammalecteconfigdialog->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualTextGrammarCheckGrammalecteConfigDialog*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigDialog_OnInputMethodQuery(const TextGrammarCheck__GrammalecteConfigDialog* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = const_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigDialog*>(self));
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->setTextGrammarCheck__GrammalecteConfigDialog_InputMethodQuery_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigDialog::TextGrammarCheck__GrammalecteConfigDialog_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextGrammarCheck__GrammalecteConfigDialog_FocusNextPrevChild(TextGrammarCheck__GrammalecteConfigDialog* self, bool next) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        return vtextgrammarcheckgrammalecteconfigdialog->focusNextPrevChild(next);
    } else {
        return ((VirtualTextGrammarCheckGrammalecteConfigDialog*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool TextGrammarCheck__GrammalecteConfigDialog_SuperFocusNextPrevChild(TextGrammarCheck__GrammalecteConfigDialog* self, bool next) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->setTextGrammarCheck__GrammalecteConfigDialog_FocusNextPrevChild_IsBase(true);
        return vtextgrammarcheckgrammalecteconfigdialog->focusNextPrevChild(next);
    } else {
        return ((VirtualTextGrammarCheckGrammalecteConfigDialog*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigDialog_OnFocusNextPrevChild(TextGrammarCheck__GrammalecteConfigDialog* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->setTextGrammarCheck__GrammalecteConfigDialog_FocusNextPrevChild_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigDialog::TextGrammarCheck__GrammalecteConfigDialog_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_TimerEvent(TextGrammarCheck__GrammalecteConfigDialog* self, QTimerEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->timerEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigDialog*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_SuperTimerEvent(TextGrammarCheck__GrammalecteConfigDialog* self, QTimerEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->setTextGrammarCheck__GrammalecteConfigDialog_TimerEvent_IsBase(true);
        vtextgrammarcheckgrammalecteconfigdialog->timerEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigDialog*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigDialog_OnTimerEvent(TextGrammarCheck__GrammalecteConfigDialog* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->setTextGrammarCheck__GrammalecteConfigDialog_TimerEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigDialog::TextGrammarCheck__GrammalecteConfigDialog_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_ChildEvent(TextGrammarCheck__GrammalecteConfigDialog* self, QChildEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->childEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigDialog*)self)->childEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_SuperChildEvent(TextGrammarCheck__GrammalecteConfigDialog* self, QChildEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->setTextGrammarCheck__GrammalecteConfigDialog_ChildEvent_IsBase(true);
        vtextgrammarcheckgrammalecteconfigdialog->childEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigDialog*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigDialog_OnChildEvent(TextGrammarCheck__GrammalecteConfigDialog* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->setTextGrammarCheck__GrammalecteConfigDialog_ChildEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigDialog::TextGrammarCheck__GrammalecteConfigDialog_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_CustomEvent(TextGrammarCheck__GrammalecteConfigDialog* self, QEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->customEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigDialog*)self)->customEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_SuperCustomEvent(TextGrammarCheck__GrammalecteConfigDialog* self, QEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->setTextGrammarCheck__GrammalecteConfigDialog_CustomEvent_IsBase(true);
        vtextgrammarcheckgrammalecteconfigdialog->customEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigDialog*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigDialog_OnCustomEvent(TextGrammarCheck__GrammalecteConfigDialog* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->setTextGrammarCheck__GrammalecteConfigDialog_CustomEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigDialog::TextGrammarCheck__GrammalecteConfigDialog_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_ConnectNotify(TextGrammarCheck__GrammalecteConfigDialog* self, const QMetaMethod* signal) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->connectNotify(*signal);
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigDialog*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_SuperConnectNotify(TextGrammarCheck__GrammalecteConfigDialog* self, const QMetaMethod* signal) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->setTextGrammarCheck__GrammalecteConfigDialog_ConnectNotify_IsBase(true);
        vtextgrammarcheckgrammalecteconfigdialog->connectNotify(*signal);
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigDialog*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigDialog_OnConnectNotify(TextGrammarCheck__GrammalecteConfigDialog* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->setTextGrammarCheck__GrammalecteConfigDialog_ConnectNotify_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigDialog::TextGrammarCheck__GrammalecteConfigDialog_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_DisconnectNotify(TextGrammarCheck__GrammalecteConfigDialog* self, const QMetaMethod* signal) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->disconnectNotify(*signal);
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigDialog*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_SuperDisconnectNotify(TextGrammarCheck__GrammalecteConfigDialog* self, const QMetaMethod* signal) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->setTextGrammarCheck__GrammalecteConfigDialog_DisconnectNotify_IsBase(true);
        vtextgrammarcheckgrammalecteconfigdialog->disconnectNotify(*signal);
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigDialog*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigDialog_OnDisconnectNotify(TextGrammarCheck__GrammalecteConfigDialog* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->setTextGrammarCheck__GrammalecteConfigDialog_DisconnectNotify_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigDialog::TextGrammarCheck__GrammalecteConfigDialog_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_AdjustPosition(TextGrammarCheck__GrammalecteConfigDialog* self, QWidget* param1) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->adjustPosition(param1);
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigDialog*)self)->adjustPosition(param1);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_SuperAdjustPosition(TextGrammarCheck__GrammalecteConfigDialog* self, QWidget* param1) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->setTextGrammarCheck__GrammalecteConfigDialog_AdjustPosition_IsBase(true);
        vtextgrammarcheckgrammalecteconfigdialog->adjustPosition(param1);
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigDialog*)self)->adjustPosition(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigDialog_OnAdjustPosition(TextGrammarCheck__GrammalecteConfigDialog* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->setTextGrammarCheck__GrammalecteConfigDialog_AdjustPosition_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigDialog::TextGrammarCheck__GrammalecteConfigDialog_AdjustPosition_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_UpdateMicroFocus(TextGrammarCheck__GrammalecteConfigDialog* self) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->updateMicroFocus();
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigDialog*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_SuperUpdateMicroFocus(TextGrammarCheck__GrammalecteConfigDialog* self) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->setTextGrammarCheck__GrammalecteConfigDialog_UpdateMicroFocus_IsBase(true);
        vtextgrammarcheckgrammalecteconfigdialog->updateMicroFocus();
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigDialog*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigDialog_OnUpdateMicroFocus(TextGrammarCheck__GrammalecteConfigDialog* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->setTextGrammarCheck__GrammalecteConfigDialog_UpdateMicroFocus_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigDialog::TextGrammarCheck__GrammalecteConfigDialog_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_Create(TextGrammarCheck__GrammalecteConfigDialog* self) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->create();
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigDialog*)self)->create();
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_SuperCreate(TextGrammarCheck__GrammalecteConfigDialog* self) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->setTextGrammarCheck__GrammalecteConfigDialog_Create_IsBase(true);
        vtextgrammarcheckgrammalecteconfigdialog->create();
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigDialog*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigDialog_OnCreate(TextGrammarCheck__GrammalecteConfigDialog* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->setTextGrammarCheck__GrammalecteConfigDialog_Create_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigDialog::TextGrammarCheck__GrammalecteConfigDialog_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_Destroy(TextGrammarCheck__GrammalecteConfigDialog* self) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->destroy();
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigDialog*)self)->destroy();
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_SuperDestroy(TextGrammarCheck__GrammalecteConfigDialog* self) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->setTextGrammarCheck__GrammalecteConfigDialog_Destroy_IsBase(true);
        vtextgrammarcheckgrammalecteconfigdialog->destroy();
    } else {
        ((VirtualTextGrammarCheckGrammalecteConfigDialog*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigDialog_OnDestroy(TextGrammarCheck__GrammalecteConfigDialog* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->setTextGrammarCheck__GrammalecteConfigDialog_Destroy_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigDialog::TextGrammarCheck__GrammalecteConfigDialog_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextGrammarCheck__GrammalecteConfigDialog_FocusNextChild(TextGrammarCheck__GrammalecteConfigDialog* self) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        return vtextgrammarcheckgrammalecteconfigdialog->focusNextChild();
    } else {
        return ((VirtualTextGrammarCheckGrammalecteConfigDialog*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool TextGrammarCheck__GrammalecteConfigDialog_SuperFocusNextChild(TextGrammarCheck__GrammalecteConfigDialog* self) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->setTextGrammarCheck__GrammalecteConfigDialog_FocusNextChild_IsBase(true);
        return vtextgrammarcheckgrammalecteconfigdialog->focusNextChild();
    } else {
        return ((VirtualTextGrammarCheckGrammalecteConfigDialog*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigDialog_OnFocusNextChild(TextGrammarCheck__GrammalecteConfigDialog* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->setTextGrammarCheck__GrammalecteConfigDialog_FocusNextChild_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigDialog::TextGrammarCheck__GrammalecteConfigDialog_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextGrammarCheck__GrammalecteConfigDialog_FocusPreviousChild(TextGrammarCheck__GrammalecteConfigDialog* self) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        return vtextgrammarcheckgrammalecteconfigdialog->focusPreviousChild();
    } else {
        return ((VirtualTextGrammarCheckGrammalecteConfigDialog*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool TextGrammarCheck__GrammalecteConfigDialog_SuperFocusPreviousChild(TextGrammarCheck__GrammalecteConfigDialog* self) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->setTextGrammarCheck__GrammalecteConfigDialog_FocusPreviousChild_IsBase(true);
        return vtextgrammarcheckgrammalecteconfigdialog->focusPreviousChild();
    } else {
        return ((VirtualTextGrammarCheckGrammalecteConfigDialog*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigDialog_OnFocusPreviousChild(TextGrammarCheck__GrammalecteConfigDialog* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->setTextGrammarCheck__GrammalecteConfigDialog_FocusPreviousChild_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigDialog::TextGrammarCheck__GrammalecteConfigDialog_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* TextGrammarCheck__GrammalecteConfigDialog_Sender(const TextGrammarCheck__GrammalecteConfigDialog* self) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = const_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigDialog*>(self));
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        return vtextgrammarcheckgrammalecteconfigdialog->sender();
    } else {
        return ((VirtualTextGrammarCheckGrammalecteConfigDialog*)self)->sender();
    }
}

// Base class handler implementation
QObject* TextGrammarCheck__GrammalecteConfigDialog_SuperSender(const TextGrammarCheck__GrammalecteConfigDialog* self) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = const_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigDialog*>(self));
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->setTextGrammarCheck__GrammalecteConfigDialog_Sender_IsBase(true);
        return vtextgrammarcheckgrammalecteconfigdialog->sender();
    } else {
        return ((VirtualTextGrammarCheckGrammalecteConfigDialog*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigDialog_OnSender(const TextGrammarCheck__GrammalecteConfigDialog* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = const_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigDialog*>(self));
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->setTextGrammarCheck__GrammalecteConfigDialog_Sender_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigDialog::TextGrammarCheck__GrammalecteConfigDialog_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int TextGrammarCheck__GrammalecteConfigDialog_SenderSignalIndex(const TextGrammarCheck__GrammalecteConfigDialog* self) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = const_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigDialog*>(self));
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        return vtextgrammarcheckgrammalecteconfigdialog->senderSignalIndex();
    } else {
        return ((VirtualTextGrammarCheckGrammalecteConfigDialog*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int TextGrammarCheck__GrammalecteConfigDialog_SuperSenderSignalIndex(const TextGrammarCheck__GrammalecteConfigDialog* self) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = const_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigDialog*>(self));
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->setTextGrammarCheck__GrammalecteConfigDialog_SenderSignalIndex_IsBase(true);
        return vtextgrammarcheckgrammalecteconfigdialog->senderSignalIndex();
    } else {
        return ((VirtualTextGrammarCheckGrammalecteConfigDialog*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigDialog_OnSenderSignalIndex(const TextGrammarCheck__GrammalecteConfigDialog* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = const_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigDialog*>(self));
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->setTextGrammarCheck__GrammalecteConfigDialog_SenderSignalIndex_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigDialog::TextGrammarCheck__GrammalecteConfigDialog_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int TextGrammarCheck__GrammalecteConfigDialog_Receivers(const TextGrammarCheck__GrammalecteConfigDialog* self, const char* signal) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = const_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigDialog*>(self));
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        return vtextgrammarcheckgrammalecteconfigdialog->receivers(signal);
    } else {
        return ((VirtualTextGrammarCheckGrammalecteConfigDialog*)self)->receivers(signal);
    }
}

// Base class handler implementation
int TextGrammarCheck__GrammalecteConfigDialog_SuperReceivers(const TextGrammarCheck__GrammalecteConfigDialog* self, const char* signal) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = const_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigDialog*>(self));
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->setTextGrammarCheck__GrammalecteConfigDialog_Receivers_IsBase(true);
        return vtextgrammarcheckgrammalecteconfigdialog->receivers(signal);
    } else {
        return ((VirtualTextGrammarCheckGrammalecteConfigDialog*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigDialog_OnReceivers(const TextGrammarCheck__GrammalecteConfigDialog* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = const_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigDialog*>(self));
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->setTextGrammarCheck__GrammalecteConfigDialog_Receivers_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigDialog::TextGrammarCheck__GrammalecteConfigDialog_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextGrammarCheck__GrammalecteConfigDialog_IsSignalConnected(const TextGrammarCheck__GrammalecteConfigDialog* self, const QMetaMethod* signal) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = const_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigDialog*>(self));
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        return vtextgrammarcheckgrammalecteconfigdialog->isSignalConnected(*signal);
    } else {
        return ((VirtualTextGrammarCheckGrammalecteConfigDialog*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool TextGrammarCheck__GrammalecteConfigDialog_SuperIsSignalConnected(const TextGrammarCheck__GrammalecteConfigDialog* self, const QMetaMethod* signal) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = const_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigDialog*>(self));
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->setTextGrammarCheck__GrammalecteConfigDialog_IsSignalConnected_IsBase(true);
        return vtextgrammarcheckgrammalecteconfigdialog->isSignalConnected(*signal);
    } else {
        return ((VirtualTextGrammarCheckGrammalecteConfigDialog*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigDialog_OnIsSignalConnected(const TextGrammarCheck__GrammalecteConfigDialog* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = const_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigDialog*>(self));
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->setTextGrammarCheck__GrammalecteConfigDialog_IsSignalConnected_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigDialog::TextGrammarCheck__GrammalecteConfigDialog_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double TextGrammarCheck__GrammalecteConfigDialog_GetDecodedMetricF(const TextGrammarCheck__GrammalecteConfigDialog* self, int metricA, int metricB) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = const_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigDialog*>(self));
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        return vtextgrammarcheckgrammalecteconfigdialog->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualTextGrammarCheckGrammalecteConfigDialog*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double TextGrammarCheck__GrammalecteConfigDialog_SuperGetDecodedMetricF(const TextGrammarCheck__GrammalecteConfigDialog* self, int metricA, int metricB) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = const_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigDialog*>(self));
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->setTextGrammarCheck__GrammalecteConfigDialog_GetDecodedMetricF_IsBase(true);
        return vtextgrammarcheckgrammalecteconfigdialog->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualTextGrammarCheckGrammalecteConfigDialog*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigDialog_OnGetDecodedMetricF(const TextGrammarCheck__GrammalecteConfigDialog* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = const_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigDialog*>(self));
    if (vtextgrammarcheckgrammalecteconfigdialog && vtextgrammarcheckgrammalecteconfigdialog->isVirtualTextGrammarCheckGrammalecteConfigDialog) {
        vtextgrammarcheckgrammalecteconfigdialog->setTextGrammarCheck__GrammalecteConfigDialog_GetDecodedMetricF_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigDialog::TextGrammarCheck__GrammalecteConfigDialog_GetDecodedMetricF_Callback>(slot));
    }
}

void TextGrammarCheck__GrammalecteConfigDialog_Delete(TextGrammarCheck__GrammalecteConfigDialog* self) {
    delete self;
}
