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
#define WORKAROUND_INNER_CLASS_DEFINITION_TextGrammarCheck__LanguageToolConfigDialog
#include <languagetoolconfigdialog.h>
#include "liblanguagetoolconfigdialog.h"
#include "liblanguagetoolconfigdialog.hxx"

TextGrammarCheck__LanguageToolConfigDialog* TextGrammarCheck__LanguageToolConfigDialog_new(QWidget* parent) {
    return new VirtualTextGrammarCheckLanguageToolConfigDialog(parent);
}

TextGrammarCheck__LanguageToolConfigDialog* TextGrammarCheck__LanguageToolConfigDialog_new2() {
    return new VirtualTextGrammarCheckLanguageToolConfigDialog();
}

QMetaObject* TextGrammarCheck__LanguageToolConfigDialog_MetaObject(const TextGrammarCheck__LanguageToolConfigDialog* self) {
    auto* vtextgrammarcheck__languagetoolconfigdialog = dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarcheck__languagetoolconfigdialog && vtextgrammarcheck__languagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        return (QMetaObject*)self->metaObject();
    } else {
        return (QMetaObject*)((VirtualTextGrammarCheckLanguageToolConfigDialog*)self)->metaObject();
    }
}

void* TextGrammarCheck__LanguageToolConfigDialog_Metacast(TextGrammarCheck__LanguageToolConfigDialog* self, const char* param1) {
    auto* vtextgrammarcheck__languagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarcheck__languagetoolconfigdialog && vtextgrammarcheck__languagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        return self->qt_metacast(param1);
    } else {
        return ((VirtualTextGrammarCheckLanguageToolConfigDialog*)self)->qt_metacast(param1);
    }
}

int TextGrammarCheck__LanguageToolConfigDialog_Metacall(TextGrammarCheck__LanguageToolConfigDialog* self, int param1, int param2, void** param3) {
    auto* vtextgrammarcheck__languagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarcheck__languagetoolconfigdialog && vtextgrammarcheck__languagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualTextGrammarCheckLanguageToolConfigDialog*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Base class handler implementation
QMetaObject* TextGrammarCheck__LanguageToolConfigDialog_SuperMetaObject(const TextGrammarCheck__LanguageToolConfigDialog* self) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = const_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigDialog*>(self));
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->setTextGrammarCheck__LanguageToolConfigDialog_MetaObject_IsBase(true);
        return (QMetaObject*)vtextgrammarchecklanguagetoolconfigdialog->metaObject();
    } else {
        return (QMetaObject*)self->TextGrammarCheck::LanguageToolConfigDialog::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigDialog_OnMetaObject(const TextGrammarCheck__LanguageToolConfigDialog* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = const_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigDialog*>(self));
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->setTextGrammarCheck__LanguageToolConfigDialog_MetaObject_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigDialog::TextGrammarCheck__LanguageToolConfigDialog_MetaObject_Callback>(slot));
    }
}

// Base class handler implementation
void* TextGrammarCheck__LanguageToolConfigDialog_SuperMetacast(TextGrammarCheck__LanguageToolConfigDialog* self, const char* param1) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->setTextGrammarCheck__LanguageToolConfigDialog_Metacast_IsBase(true);
        return vtextgrammarchecklanguagetoolconfigdialog->qt_metacast(param1);
    } else {
        return self->TextGrammarCheck::LanguageToolConfigDialog::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigDialog_OnMetacast(TextGrammarCheck__LanguageToolConfigDialog* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->setTextGrammarCheck__LanguageToolConfigDialog_Metacast_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigDialog::TextGrammarCheck__LanguageToolConfigDialog_Metacast_Callback>(slot));
    }
}

// Base class handler implementation
int TextGrammarCheck__LanguageToolConfigDialog_SuperMetacall(TextGrammarCheck__LanguageToolConfigDialog* self, int param1, int param2, void** param3) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->setTextGrammarCheck__LanguageToolConfigDialog_Metacall_IsBase(true);
        return vtextgrammarchecklanguagetoolconfigdialog->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->TextGrammarCheck::LanguageToolConfigDialog::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigDialog_OnMetacall(TextGrammarCheck__LanguageToolConfigDialog* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->setTextGrammarCheck__LanguageToolConfigDialog_Metacall_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigDialog::TextGrammarCheck__LanguageToolConfigDialog_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_SetVisible(TextGrammarCheck__LanguageToolConfigDialog* self, bool visible) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->setVisible(visible);
    } else {
        self->TextGrammarCheck::LanguageToolConfigDialog::setVisible(visible);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_SuperSetVisible(TextGrammarCheck__LanguageToolConfigDialog* self, bool visible) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->setTextGrammarCheck__LanguageToolConfigDialog_SetVisible_IsBase(true);
        vtextgrammarchecklanguagetoolconfigdialog->setVisible(visible);
    } else {
        self->TextGrammarCheck::LanguageToolConfigDialog::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigDialog_OnSetVisible(TextGrammarCheck__LanguageToolConfigDialog* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->setTextGrammarCheck__LanguageToolConfigDialog_SetVisible_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigDialog::TextGrammarCheck__LanguageToolConfigDialog_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* TextGrammarCheck__LanguageToolConfigDialog_SizeHint(const TextGrammarCheck__LanguageToolConfigDialog* self) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = const_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigDialog*>(self));
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        return new QSize(vtextgrammarchecklanguagetoolconfigdialog->sizeHint());
    } else {
        return new QSize(((VirtualTextGrammarCheckLanguageToolConfigDialog*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* TextGrammarCheck__LanguageToolConfigDialog_SuperSizeHint(const TextGrammarCheck__LanguageToolConfigDialog* self) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = const_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigDialog*>(self));
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->setTextGrammarCheck__LanguageToolConfigDialog_SizeHint_IsBase(true);
        return new QSize(vtextgrammarchecklanguagetoolconfigdialog->sizeHint());
    } else {
        return new QSize(((VirtualTextGrammarCheckLanguageToolConfigDialog*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigDialog_OnSizeHint(const TextGrammarCheck__LanguageToolConfigDialog* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = const_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigDialog*>(self));
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->setTextGrammarCheck__LanguageToolConfigDialog_SizeHint_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigDialog::TextGrammarCheck__LanguageToolConfigDialog_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* TextGrammarCheck__LanguageToolConfigDialog_MinimumSizeHint(const TextGrammarCheck__LanguageToolConfigDialog* self) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = const_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigDialog*>(self));
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        return new QSize(vtextgrammarchecklanguagetoolconfigdialog->minimumSizeHint());
    } else {
        return new QSize(((VirtualTextGrammarCheckLanguageToolConfigDialog*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* TextGrammarCheck__LanguageToolConfigDialog_SuperMinimumSizeHint(const TextGrammarCheck__LanguageToolConfigDialog* self) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = const_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigDialog*>(self));
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->setTextGrammarCheck__LanguageToolConfigDialog_MinimumSizeHint_IsBase(true);
        return new QSize(vtextgrammarchecklanguagetoolconfigdialog->minimumSizeHint());
    } else {
        return new QSize(((VirtualTextGrammarCheckLanguageToolConfigDialog*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigDialog_OnMinimumSizeHint(const TextGrammarCheck__LanguageToolConfigDialog* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = const_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigDialog*>(self));
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->setTextGrammarCheck__LanguageToolConfigDialog_MinimumSizeHint_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigDialog::TextGrammarCheck__LanguageToolConfigDialog_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_Open(TextGrammarCheck__LanguageToolConfigDialog* self) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->open();
    } else {
        self->TextGrammarCheck::LanguageToolConfigDialog::open();
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_SuperOpen(TextGrammarCheck__LanguageToolConfigDialog* self) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->setTextGrammarCheck__LanguageToolConfigDialog_Open_IsBase(true);
        vtextgrammarchecklanguagetoolconfigdialog->open();
    } else {
        self->TextGrammarCheck::LanguageToolConfigDialog::open();
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigDialog_OnOpen(TextGrammarCheck__LanguageToolConfigDialog* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->setTextGrammarCheck__LanguageToolConfigDialog_Open_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigDialog::TextGrammarCheck__LanguageToolConfigDialog_Open_Callback>(slot));
    }
}

// Derived class handler implementation
int TextGrammarCheck__LanguageToolConfigDialog_Exec(TextGrammarCheck__LanguageToolConfigDialog* self) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        return vtextgrammarchecklanguagetoolconfigdialog->exec();
    } else {
        return self->TextGrammarCheck::LanguageToolConfigDialog::exec();
    }
}

// Base class handler implementation
int TextGrammarCheck__LanguageToolConfigDialog_SuperExec(TextGrammarCheck__LanguageToolConfigDialog* self) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->setTextGrammarCheck__LanguageToolConfigDialog_Exec_IsBase(true);
        return vtextgrammarchecklanguagetoolconfigdialog->exec();
    } else {
        return self->TextGrammarCheck::LanguageToolConfigDialog::exec();
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigDialog_OnExec(TextGrammarCheck__LanguageToolConfigDialog* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->setTextGrammarCheck__LanguageToolConfigDialog_Exec_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigDialog::TextGrammarCheck__LanguageToolConfigDialog_Exec_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_Done(TextGrammarCheck__LanguageToolConfigDialog* self, int param1) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->done(static_cast<int>(param1));
    } else {
        self->TextGrammarCheck::LanguageToolConfigDialog::done(static_cast<int>(param1));
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_SuperDone(TextGrammarCheck__LanguageToolConfigDialog* self, int param1) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->setTextGrammarCheck__LanguageToolConfigDialog_Done_IsBase(true);
        vtextgrammarchecklanguagetoolconfigdialog->done(static_cast<int>(param1));
    } else {
        self->TextGrammarCheck::LanguageToolConfigDialog::done(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigDialog_OnDone(TextGrammarCheck__LanguageToolConfigDialog* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->setTextGrammarCheck__LanguageToolConfigDialog_Done_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigDialog::TextGrammarCheck__LanguageToolConfigDialog_Done_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_Accept(TextGrammarCheck__LanguageToolConfigDialog* self) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->accept();
    } else {
        self->TextGrammarCheck::LanguageToolConfigDialog::accept();
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_SuperAccept(TextGrammarCheck__LanguageToolConfigDialog* self) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->setTextGrammarCheck__LanguageToolConfigDialog_Accept_IsBase(true);
        vtextgrammarchecklanguagetoolconfigdialog->accept();
    } else {
        self->TextGrammarCheck::LanguageToolConfigDialog::accept();
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigDialog_OnAccept(TextGrammarCheck__LanguageToolConfigDialog* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->setTextGrammarCheck__LanguageToolConfigDialog_Accept_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigDialog::TextGrammarCheck__LanguageToolConfigDialog_Accept_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_Reject(TextGrammarCheck__LanguageToolConfigDialog* self) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->reject();
    } else {
        self->TextGrammarCheck::LanguageToolConfigDialog::reject();
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_SuperReject(TextGrammarCheck__LanguageToolConfigDialog* self) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->setTextGrammarCheck__LanguageToolConfigDialog_Reject_IsBase(true);
        vtextgrammarchecklanguagetoolconfigdialog->reject();
    } else {
        self->TextGrammarCheck::LanguageToolConfigDialog::reject();
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigDialog_OnReject(TextGrammarCheck__LanguageToolConfigDialog* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->setTextGrammarCheck__LanguageToolConfigDialog_Reject_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigDialog::TextGrammarCheck__LanguageToolConfigDialog_Reject_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_KeyPressEvent(TextGrammarCheck__LanguageToolConfigDialog* self, QKeyEvent* param1) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->keyPressEvent(param1);
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigDialog*)self)->keyPressEvent(param1);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_SuperKeyPressEvent(TextGrammarCheck__LanguageToolConfigDialog* self, QKeyEvent* param1) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->setTextGrammarCheck__LanguageToolConfigDialog_KeyPressEvent_IsBase(true);
        vtextgrammarchecklanguagetoolconfigdialog->keyPressEvent(param1);
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigDialog*)self)->keyPressEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigDialog_OnKeyPressEvent(TextGrammarCheck__LanguageToolConfigDialog* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->setTextGrammarCheck__LanguageToolConfigDialog_KeyPressEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigDialog::TextGrammarCheck__LanguageToolConfigDialog_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_CloseEvent(TextGrammarCheck__LanguageToolConfigDialog* self, QCloseEvent* param1) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->closeEvent(param1);
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigDialog*)self)->closeEvent(param1);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_SuperCloseEvent(TextGrammarCheck__LanguageToolConfigDialog* self, QCloseEvent* param1) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->setTextGrammarCheck__LanguageToolConfigDialog_CloseEvent_IsBase(true);
        vtextgrammarchecklanguagetoolconfigdialog->closeEvent(param1);
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigDialog*)self)->closeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigDialog_OnCloseEvent(TextGrammarCheck__LanguageToolConfigDialog* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->setTextGrammarCheck__LanguageToolConfigDialog_CloseEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigDialog::TextGrammarCheck__LanguageToolConfigDialog_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_ShowEvent(TextGrammarCheck__LanguageToolConfigDialog* self, QShowEvent* param1) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->showEvent(param1);
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigDialog*)self)->showEvent(param1);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_SuperShowEvent(TextGrammarCheck__LanguageToolConfigDialog* self, QShowEvent* param1) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->setTextGrammarCheck__LanguageToolConfigDialog_ShowEvent_IsBase(true);
        vtextgrammarchecklanguagetoolconfigdialog->showEvent(param1);
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigDialog*)self)->showEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigDialog_OnShowEvent(TextGrammarCheck__LanguageToolConfigDialog* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->setTextGrammarCheck__LanguageToolConfigDialog_ShowEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigDialog::TextGrammarCheck__LanguageToolConfigDialog_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_ResizeEvent(TextGrammarCheck__LanguageToolConfigDialog* self, QResizeEvent* param1) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->resizeEvent(param1);
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigDialog*)self)->resizeEvent(param1);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_SuperResizeEvent(TextGrammarCheck__LanguageToolConfigDialog* self, QResizeEvent* param1) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->setTextGrammarCheck__LanguageToolConfigDialog_ResizeEvent_IsBase(true);
        vtextgrammarchecklanguagetoolconfigdialog->resizeEvent(param1);
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigDialog*)self)->resizeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigDialog_OnResizeEvent(TextGrammarCheck__LanguageToolConfigDialog* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->setTextGrammarCheck__LanguageToolConfigDialog_ResizeEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigDialog::TextGrammarCheck__LanguageToolConfigDialog_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_ContextMenuEvent(TextGrammarCheck__LanguageToolConfigDialog* self, QContextMenuEvent* param1) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->contextMenuEvent(param1);
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigDialog*)self)->contextMenuEvent(param1);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_SuperContextMenuEvent(TextGrammarCheck__LanguageToolConfigDialog* self, QContextMenuEvent* param1) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->setTextGrammarCheck__LanguageToolConfigDialog_ContextMenuEvent_IsBase(true);
        vtextgrammarchecklanguagetoolconfigdialog->contextMenuEvent(param1);
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigDialog*)self)->contextMenuEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigDialog_OnContextMenuEvent(TextGrammarCheck__LanguageToolConfigDialog* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->setTextGrammarCheck__LanguageToolConfigDialog_ContextMenuEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigDialog::TextGrammarCheck__LanguageToolConfigDialog_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextGrammarCheck__LanguageToolConfigDialog_EventFilter(TextGrammarCheck__LanguageToolConfigDialog* self, QObject* param1, QEvent* param2) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        return vtextgrammarchecklanguagetoolconfigdialog->eventFilter(param1, param2);
    } else {
        return ((VirtualTextGrammarCheckLanguageToolConfigDialog*)self)->eventFilter(param1, param2);
    }
}

// Base class handler implementation
bool TextGrammarCheck__LanguageToolConfigDialog_SuperEventFilter(TextGrammarCheck__LanguageToolConfigDialog* self, QObject* param1, QEvent* param2) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->setTextGrammarCheck__LanguageToolConfigDialog_EventFilter_IsBase(true);
        return vtextgrammarchecklanguagetoolconfigdialog->eventFilter(param1, param2);
    } else {
        return ((VirtualTextGrammarCheckLanguageToolConfigDialog*)self)->eventFilter(param1, param2);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigDialog_OnEventFilter(TextGrammarCheck__LanguageToolConfigDialog* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->setTextGrammarCheck__LanguageToolConfigDialog_EventFilter_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigDialog::TextGrammarCheck__LanguageToolConfigDialog_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
int TextGrammarCheck__LanguageToolConfigDialog_DevType(const TextGrammarCheck__LanguageToolConfigDialog* self) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = const_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigDialog*>(self));
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        return vtextgrammarchecklanguagetoolconfigdialog->devType();
    } else {
        return self->TextGrammarCheck::LanguageToolConfigDialog::devType();
    }
}

// Base class handler implementation
int TextGrammarCheck__LanguageToolConfigDialog_SuperDevType(const TextGrammarCheck__LanguageToolConfigDialog* self) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = const_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigDialog*>(self));
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->setTextGrammarCheck__LanguageToolConfigDialog_DevType_IsBase(true);
        return vtextgrammarchecklanguagetoolconfigdialog->devType();
    } else {
        return self->TextGrammarCheck::LanguageToolConfigDialog::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigDialog_OnDevType(const TextGrammarCheck__LanguageToolConfigDialog* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = const_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigDialog*>(self));
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->setTextGrammarCheck__LanguageToolConfigDialog_DevType_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigDialog::TextGrammarCheck__LanguageToolConfigDialog_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
int TextGrammarCheck__LanguageToolConfigDialog_HeightForWidth(const TextGrammarCheck__LanguageToolConfigDialog* self, int param1) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = const_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigDialog*>(self));
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        return vtextgrammarchecklanguagetoolconfigdialog->heightForWidth(static_cast<int>(param1));
    } else {
        return self->TextGrammarCheck::LanguageToolConfigDialog::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int TextGrammarCheck__LanguageToolConfigDialog_SuperHeightForWidth(const TextGrammarCheck__LanguageToolConfigDialog* self, int param1) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = const_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigDialog*>(self));
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->setTextGrammarCheck__LanguageToolConfigDialog_HeightForWidth_IsBase(true);
        return vtextgrammarchecklanguagetoolconfigdialog->heightForWidth(static_cast<int>(param1));
    } else {
        return self->TextGrammarCheck::LanguageToolConfigDialog::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigDialog_OnHeightForWidth(const TextGrammarCheck__LanguageToolConfigDialog* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = const_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigDialog*>(self));
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->setTextGrammarCheck__LanguageToolConfigDialog_HeightForWidth_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigDialog::TextGrammarCheck__LanguageToolConfigDialog_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextGrammarCheck__LanguageToolConfigDialog_HasHeightForWidth(const TextGrammarCheck__LanguageToolConfigDialog* self) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = const_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigDialog*>(self));
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        return vtextgrammarchecklanguagetoolconfigdialog->hasHeightForWidth();
    } else {
        return self->TextGrammarCheck::LanguageToolConfigDialog::hasHeightForWidth();
    }
}

// Base class handler implementation
bool TextGrammarCheck__LanguageToolConfigDialog_SuperHasHeightForWidth(const TextGrammarCheck__LanguageToolConfigDialog* self) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = const_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigDialog*>(self));
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->setTextGrammarCheck__LanguageToolConfigDialog_HasHeightForWidth_IsBase(true);
        return vtextgrammarchecklanguagetoolconfigdialog->hasHeightForWidth();
    } else {
        return self->TextGrammarCheck::LanguageToolConfigDialog::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigDialog_OnHasHeightForWidth(const TextGrammarCheck__LanguageToolConfigDialog* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = const_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigDialog*>(self));
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->setTextGrammarCheck__LanguageToolConfigDialog_HasHeightForWidth_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigDialog::TextGrammarCheck__LanguageToolConfigDialog_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* TextGrammarCheck__LanguageToolConfigDialog_PaintEngine(const TextGrammarCheck__LanguageToolConfigDialog* self) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = const_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigDialog*>(self));
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        return vtextgrammarchecklanguagetoolconfigdialog->paintEngine();
    } else {
        return self->TextGrammarCheck::LanguageToolConfigDialog::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* TextGrammarCheck__LanguageToolConfigDialog_SuperPaintEngine(const TextGrammarCheck__LanguageToolConfigDialog* self) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = const_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigDialog*>(self));
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->setTextGrammarCheck__LanguageToolConfigDialog_PaintEngine_IsBase(true);
        return vtextgrammarchecklanguagetoolconfigdialog->paintEngine();
    } else {
        return self->TextGrammarCheck::LanguageToolConfigDialog::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigDialog_OnPaintEngine(const TextGrammarCheck__LanguageToolConfigDialog* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = const_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigDialog*>(self));
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->setTextGrammarCheck__LanguageToolConfigDialog_PaintEngine_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigDialog::TextGrammarCheck__LanguageToolConfigDialog_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextGrammarCheck__LanguageToolConfigDialog_Event(TextGrammarCheck__LanguageToolConfigDialog* self, QEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        return vtextgrammarchecklanguagetoolconfigdialog->event(event);
    } else {
        return ((VirtualTextGrammarCheckLanguageToolConfigDialog*)self)->event(event);
    }
}

// Base class handler implementation
bool TextGrammarCheck__LanguageToolConfigDialog_SuperEvent(TextGrammarCheck__LanguageToolConfigDialog* self, QEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->setTextGrammarCheck__LanguageToolConfigDialog_Event_IsBase(true);
        return vtextgrammarchecklanguagetoolconfigdialog->event(event);
    } else {
        return ((VirtualTextGrammarCheckLanguageToolConfigDialog*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigDialog_OnEvent(TextGrammarCheck__LanguageToolConfigDialog* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->setTextGrammarCheck__LanguageToolConfigDialog_Event_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigDialog::TextGrammarCheck__LanguageToolConfigDialog_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_MousePressEvent(TextGrammarCheck__LanguageToolConfigDialog* self, QMouseEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->mousePressEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigDialog*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_SuperMousePressEvent(TextGrammarCheck__LanguageToolConfigDialog* self, QMouseEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->setTextGrammarCheck__LanguageToolConfigDialog_MousePressEvent_IsBase(true);
        vtextgrammarchecklanguagetoolconfigdialog->mousePressEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigDialog*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigDialog_OnMousePressEvent(TextGrammarCheck__LanguageToolConfigDialog* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->setTextGrammarCheck__LanguageToolConfigDialog_MousePressEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigDialog::TextGrammarCheck__LanguageToolConfigDialog_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_MouseReleaseEvent(TextGrammarCheck__LanguageToolConfigDialog* self, QMouseEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->mouseReleaseEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigDialog*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_SuperMouseReleaseEvent(TextGrammarCheck__LanguageToolConfigDialog* self, QMouseEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->setTextGrammarCheck__LanguageToolConfigDialog_MouseReleaseEvent_IsBase(true);
        vtextgrammarchecklanguagetoolconfigdialog->mouseReleaseEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigDialog*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigDialog_OnMouseReleaseEvent(TextGrammarCheck__LanguageToolConfigDialog* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->setTextGrammarCheck__LanguageToolConfigDialog_MouseReleaseEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigDialog::TextGrammarCheck__LanguageToolConfigDialog_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_MouseDoubleClickEvent(TextGrammarCheck__LanguageToolConfigDialog* self, QMouseEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->mouseDoubleClickEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigDialog*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_SuperMouseDoubleClickEvent(TextGrammarCheck__LanguageToolConfigDialog* self, QMouseEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->setTextGrammarCheck__LanguageToolConfigDialog_MouseDoubleClickEvent_IsBase(true);
        vtextgrammarchecklanguagetoolconfigdialog->mouseDoubleClickEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigDialog*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigDialog_OnMouseDoubleClickEvent(TextGrammarCheck__LanguageToolConfigDialog* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->setTextGrammarCheck__LanguageToolConfigDialog_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigDialog::TextGrammarCheck__LanguageToolConfigDialog_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_MouseMoveEvent(TextGrammarCheck__LanguageToolConfigDialog* self, QMouseEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->mouseMoveEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigDialog*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_SuperMouseMoveEvent(TextGrammarCheck__LanguageToolConfigDialog* self, QMouseEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->setTextGrammarCheck__LanguageToolConfigDialog_MouseMoveEvent_IsBase(true);
        vtextgrammarchecklanguagetoolconfigdialog->mouseMoveEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigDialog*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigDialog_OnMouseMoveEvent(TextGrammarCheck__LanguageToolConfigDialog* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->setTextGrammarCheck__LanguageToolConfigDialog_MouseMoveEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigDialog::TextGrammarCheck__LanguageToolConfigDialog_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_WheelEvent(TextGrammarCheck__LanguageToolConfigDialog* self, QWheelEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->wheelEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigDialog*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_SuperWheelEvent(TextGrammarCheck__LanguageToolConfigDialog* self, QWheelEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->setTextGrammarCheck__LanguageToolConfigDialog_WheelEvent_IsBase(true);
        vtextgrammarchecklanguagetoolconfigdialog->wheelEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigDialog*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigDialog_OnWheelEvent(TextGrammarCheck__LanguageToolConfigDialog* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->setTextGrammarCheck__LanguageToolConfigDialog_WheelEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigDialog::TextGrammarCheck__LanguageToolConfigDialog_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_KeyReleaseEvent(TextGrammarCheck__LanguageToolConfigDialog* self, QKeyEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->keyReleaseEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigDialog*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_SuperKeyReleaseEvent(TextGrammarCheck__LanguageToolConfigDialog* self, QKeyEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->setTextGrammarCheck__LanguageToolConfigDialog_KeyReleaseEvent_IsBase(true);
        vtextgrammarchecklanguagetoolconfigdialog->keyReleaseEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigDialog*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigDialog_OnKeyReleaseEvent(TextGrammarCheck__LanguageToolConfigDialog* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->setTextGrammarCheck__LanguageToolConfigDialog_KeyReleaseEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigDialog::TextGrammarCheck__LanguageToolConfigDialog_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_FocusInEvent(TextGrammarCheck__LanguageToolConfigDialog* self, QFocusEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->focusInEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigDialog*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_SuperFocusInEvent(TextGrammarCheck__LanguageToolConfigDialog* self, QFocusEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->setTextGrammarCheck__LanguageToolConfigDialog_FocusInEvent_IsBase(true);
        vtextgrammarchecklanguagetoolconfigdialog->focusInEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigDialog*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigDialog_OnFocusInEvent(TextGrammarCheck__LanguageToolConfigDialog* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->setTextGrammarCheck__LanguageToolConfigDialog_FocusInEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigDialog::TextGrammarCheck__LanguageToolConfigDialog_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_FocusOutEvent(TextGrammarCheck__LanguageToolConfigDialog* self, QFocusEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->focusOutEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigDialog*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_SuperFocusOutEvent(TextGrammarCheck__LanguageToolConfigDialog* self, QFocusEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->setTextGrammarCheck__LanguageToolConfigDialog_FocusOutEvent_IsBase(true);
        vtextgrammarchecklanguagetoolconfigdialog->focusOutEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigDialog*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigDialog_OnFocusOutEvent(TextGrammarCheck__LanguageToolConfigDialog* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->setTextGrammarCheck__LanguageToolConfigDialog_FocusOutEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigDialog::TextGrammarCheck__LanguageToolConfigDialog_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_EnterEvent(TextGrammarCheck__LanguageToolConfigDialog* self, QEnterEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->enterEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigDialog*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_SuperEnterEvent(TextGrammarCheck__LanguageToolConfigDialog* self, QEnterEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->setTextGrammarCheck__LanguageToolConfigDialog_EnterEvent_IsBase(true);
        vtextgrammarchecklanguagetoolconfigdialog->enterEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigDialog*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigDialog_OnEnterEvent(TextGrammarCheck__LanguageToolConfigDialog* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->setTextGrammarCheck__LanguageToolConfigDialog_EnterEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigDialog::TextGrammarCheck__LanguageToolConfigDialog_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_LeaveEvent(TextGrammarCheck__LanguageToolConfigDialog* self, QEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->leaveEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigDialog*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_SuperLeaveEvent(TextGrammarCheck__LanguageToolConfigDialog* self, QEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->setTextGrammarCheck__LanguageToolConfigDialog_LeaveEvent_IsBase(true);
        vtextgrammarchecklanguagetoolconfigdialog->leaveEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigDialog*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigDialog_OnLeaveEvent(TextGrammarCheck__LanguageToolConfigDialog* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->setTextGrammarCheck__LanguageToolConfigDialog_LeaveEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigDialog::TextGrammarCheck__LanguageToolConfigDialog_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_PaintEvent(TextGrammarCheck__LanguageToolConfigDialog* self, QPaintEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->paintEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigDialog*)self)->paintEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_SuperPaintEvent(TextGrammarCheck__LanguageToolConfigDialog* self, QPaintEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->setTextGrammarCheck__LanguageToolConfigDialog_PaintEvent_IsBase(true);
        vtextgrammarchecklanguagetoolconfigdialog->paintEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigDialog*)self)->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigDialog_OnPaintEvent(TextGrammarCheck__LanguageToolConfigDialog* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->setTextGrammarCheck__LanguageToolConfigDialog_PaintEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigDialog::TextGrammarCheck__LanguageToolConfigDialog_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_MoveEvent(TextGrammarCheck__LanguageToolConfigDialog* self, QMoveEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->moveEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigDialog*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_SuperMoveEvent(TextGrammarCheck__LanguageToolConfigDialog* self, QMoveEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->setTextGrammarCheck__LanguageToolConfigDialog_MoveEvent_IsBase(true);
        vtextgrammarchecklanguagetoolconfigdialog->moveEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigDialog*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigDialog_OnMoveEvent(TextGrammarCheck__LanguageToolConfigDialog* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->setTextGrammarCheck__LanguageToolConfigDialog_MoveEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigDialog::TextGrammarCheck__LanguageToolConfigDialog_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_TabletEvent(TextGrammarCheck__LanguageToolConfigDialog* self, QTabletEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->tabletEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigDialog*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_SuperTabletEvent(TextGrammarCheck__LanguageToolConfigDialog* self, QTabletEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->setTextGrammarCheck__LanguageToolConfigDialog_TabletEvent_IsBase(true);
        vtextgrammarchecklanguagetoolconfigdialog->tabletEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigDialog*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigDialog_OnTabletEvent(TextGrammarCheck__LanguageToolConfigDialog* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->setTextGrammarCheck__LanguageToolConfigDialog_TabletEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigDialog::TextGrammarCheck__LanguageToolConfigDialog_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_ActionEvent(TextGrammarCheck__LanguageToolConfigDialog* self, QActionEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->actionEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigDialog*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_SuperActionEvent(TextGrammarCheck__LanguageToolConfigDialog* self, QActionEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->setTextGrammarCheck__LanguageToolConfigDialog_ActionEvent_IsBase(true);
        vtextgrammarchecklanguagetoolconfigdialog->actionEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigDialog*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigDialog_OnActionEvent(TextGrammarCheck__LanguageToolConfigDialog* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->setTextGrammarCheck__LanguageToolConfigDialog_ActionEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigDialog::TextGrammarCheck__LanguageToolConfigDialog_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_DragEnterEvent(TextGrammarCheck__LanguageToolConfigDialog* self, QDragEnterEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->dragEnterEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigDialog*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_SuperDragEnterEvent(TextGrammarCheck__LanguageToolConfigDialog* self, QDragEnterEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->setTextGrammarCheck__LanguageToolConfigDialog_DragEnterEvent_IsBase(true);
        vtextgrammarchecklanguagetoolconfigdialog->dragEnterEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigDialog*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigDialog_OnDragEnterEvent(TextGrammarCheck__LanguageToolConfigDialog* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->setTextGrammarCheck__LanguageToolConfigDialog_DragEnterEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigDialog::TextGrammarCheck__LanguageToolConfigDialog_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_DragMoveEvent(TextGrammarCheck__LanguageToolConfigDialog* self, QDragMoveEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->dragMoveEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigDialog*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_SuperDragMoveEvent(TextGrammarCheck__LanguageToolConfigDialog* self, QDragMoveEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->setTextGrammarCheck__LanguageToolConfigDialog_DragMoveEvent_IsBase(true);
        vtextgrammarchecklanguagetoolconfigdialog->dragMoveEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigDialog*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigDialog_OnDragMoveEvent(TextGrammarCheck__LanguageToolConfigDialog* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->setTextGrammarCheck__LanguageToolConfigDialog_DragMoveEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigDialog::TextGrammarCheck__LanguageToolConfigDialog_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_DragLeaveEvent(TextGrammarCheck__LanguageToolConfigDialog* self, QDragLeaveEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->dragLeaveEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigDialog*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_SuperDragLeaveEvent(TextGrammarCheck__LanguageToolConfigDialog* self, QDragLeaveEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->setTextGrammarCheck__LanguageToolConfigDialog_DragLeaveEvent_IsBase(true);
        vtextgrammarchecklanguagetoolconfigdialog->dragLeaveEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigDialog*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigDialog_OnDragLeaveEvent(TextGrammarCheck__LanguageToolConfigDialog* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->setTextGrammarCheck__LanguageToolConfigDialog_DragLeaveEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigDialog::TextGrammarCheck__LanguageToolConfigDialog_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_DropEvent(TextGrammarCheck__LanguageToolConfigDialog* self, QDropEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->dropEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigDialog*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_SuperDropEvent(TextGrammarCheck__LanguageToolConfigDialog* self, QDropEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->setTextGrammarCheck__LanguageToolConfigDialog_DropEvent_IsBase(true);
        vtextgrammarchecklanguagetoolconfigdialog->dropEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigDialog*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigDialog_OnDropEvent(TextGrammarCheck__LanguageToolConfigDialog* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->setTextGrammarCheck__LanguageToolConfigDialog_DropEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigDialog::TextGrammarCheck__LanguageToolConfigDialog_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_HideEvent(TextGrammarCheck__LanguageToolConfigDialog* self, QHideEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->hideEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigDialog*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_SuperHideEvent(TextGrammarCheck__LanguageToolConfigDialog* self, QHideEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->setTextGrammarCheck__LanguageToolConfigDialog_HideEvent_IsBase(true);
        vtextgrammarchecklanguagetoolconfigdialog->hideEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigDialog*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigDialog_OnHideEvent(TextGrammarCheck__LanguageToolConfigDialog* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->setTextGrammarCheck__LanguageToolConfigDialog_HideEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigDialog::TextGrammarCheck__LanguageToolConfigDialog_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextGrammarCheck__LanguageToolConfigDialog_NativeEvent(TextGrammarCheck__LanguageToolConfigDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        return vtextgrammarchecklanguagetoolconfigdialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualTextGrammarCheckLanguageToolConfigDialog*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool TextGrammarCheck__LanguageToolConfigDialog_SuperNativeEvent(TextGrammarCheck__LanguageToolConfigDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->setTextGrammarCheck__LanguageToolConfigDialog_NativeEvent_IsBase(true);
        return vtextgrammarchecklanguagetoolconfigdialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualTextGrammarCheckLanguageToolConfigDialog*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigDialog_OnNativeEvent(TextGrammarCheck__LanguageToolConfigDialog* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->setTextGrammarCheck__LanguageToolConfigDialog_NativeEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigDialog::TextGrammarCheck__LanguageToolConfigDialog_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_ChangeEvent(TextGrammarCheck__LanguageToolConfigDialog* self, QEvent* param1) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->changeEvent(param1);
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigDialog*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_SuperChangeEvent(TextGrammarCheck__LanguageToolConfigDialog* self, QEvent* param1) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->setTextGrammarCheck__LanguageToolConfigDialog_ChangeEvent_IsBase(true);
        vtextgrammarchecklanguagetoolconfigdialog->changeEvent(param1);
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigDialog*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigDialog_OnChangeEvent(TextGrammarCheck__LanguageToolConfigDialog* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->setTextGrammarCheck__LanguageToolConfigDialog_ChangeEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigDialog::TextGrammarCheck__LanguageToolConfigDialog_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int TextGrammarCheck__LanguageToolConfigDialog_Metric(const TextGrammarCheck__LanguageToolConfigDialog* self, int param1) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = const_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigDialog*>(self));
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        return vtextgrammarchecklanguagetoolconfigdialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualTextGrammarCheckLanguageToolConfigDialog*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int TextGrammarCheck__LanguageToolConfigDialog_SuperMetric(const TextGrammarCheck__LanguageToolConfigDialog* self, int param1) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = const_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigDialog*>(self));
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->setTextGrammarCheck__LanguageToolConfigDialog_Metric_IsBase(true);
        return vtextgrammarchecklanguagetoolconfigdialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualTextGrammarCheckLanguageToolConfigDialog*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigDialog_OnMetric(const TextGrammarCheck__LanguageToolConfigDialog* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = const_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigDialog*>(self));
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->setTextGrammarCheck__LanguageToolConfigDialog_Metric_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigDialog::TextGrammarCheck__LanguageToolConfigDialog_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_InitPainter(const TextGrammarCheck__LanguageToolConfigDialog* self, QPainter* painter) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = const_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigDialog*>(self));
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->initPainter(painter);
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigDialog*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_SuperInitPainter(const TextGrammarCheck__LanguageToolConfigDialog* self, QPainter* painter) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = const_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigDialog*>(self));
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->setTextGrammarCheck__LanguageToolConfigDialog_InitPainter_IsBase(true);
        vtextgrammarchecklanguagetoolconfigdialog->initPainter(painter);
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigDialog*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigDialog_OnInitPainter(const TextGrammarCheck__LanguageToolConfigDialog* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = const_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigDialog*>(self));
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->setTextGrammarCheck__LanguageToolConfigDialog_InitPainter_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigDialog::TextGrammarCheck__LanguageToolConfigDialog_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* TextGrammarCheck__LanguageToolConfigDialog_Redirected(const TextGrammarCheck__LanguageToolConfigDialog* self, QPoint* offset) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = const_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigDialog*>(self));
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        return vtextgrammarchecklanguagetoolconfigdialog->redirected(offset);
    } else {
        return ((VirtualTextGrammarCheckLanguageToolConfigDialog*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* TextGrammarCheck__LanguageToolConfigDialog_SuperRedirected(const TextGrammarCheck__LanguageToolConfigDialog* self, QPoint* offset) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = const_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigDialog*>(self));
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->setTextGrammarCheck__LanguageToolConfigDialog_Redirected_IsBase(true);
        return vtextgrammarchecklanguagetoolconfigdialog->redirected(offset);
    } else {
        return ((VirtualTextGrammarCheckLanguageToolConfigDialog*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigDialog_OnRedirected(const TextGrammarCheck__LanguageToolConfigDialog* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = const_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigDialog*>(self));
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->setTextGrammarCheck__LanguageToolConfigDialog_Redirected_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigDialog::TextGrammarCheck__LanguageToolConfigDialog_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* TextGrammarCheck__LanguageToolConfigDialog_SharedPainter(const TextGrammarCheck__LanguageToolConfigDialog* self) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = const_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigDialog*>(self));
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        return vtextgrammarchecklanguagetoolconfigdialog->sharedPainter();
    } else {
        return ((VirtualTextGrammarCheckLanguageToolConfigDialog*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* TextGrammarCheck__LanguageToolConfigDialog_SuperSharedPainter(const TextGrammarCheck__LanguageToolConfigDialog* self) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = const_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigDialog*>(self));
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->setTextGrammarCheck__LanguageToolConfigDialog_SharedPainter_IsBase(true);
        return vtextgrammarchecklanguagetoolconfigdialog->sharedPainter();
    } else {
        return ((VirtualTextGrammarCheckLanguageToolConfigDialog*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigDialog_OnSharedPainter(const TextGrammarCheck__LanguageToolConfigDialog* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = const_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigDialog*>(self));
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->setTextGrammarCheck__LanguageToolConfigDialog_SharedPainter_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigDialog::TextGrammarCheck__LanguageToolConfigDialog_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_InputMethodEvent(TextGrammarCheck__LanguageToolConfigDialog* self, QInputMethodEvent* param1) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->inputMethodEvent(param1);
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigDialog*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_SuperInputMethodEvent(TextGrammarCheck__LanguageToolConfigDialog* self, QInputMethodEvent* param1) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->setTextGrammarCheck__LanguageToolConfigDialog_InputMethodEvent_IsBase(true);
        vtextgrammarchecklanguagetoolconfigdialog->inputMethodEvent(param1);
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigDialog*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigDialog_OnInputMethodEvent(TextGrammarCheck__LanguageToolConfigDialog* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->setTextGrammarCheck__LanguageToolConfigDialog_InputMethodEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigDialog::TextGrammarCheck__LanguageToolConfigDialog_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* TextGrammarCheck__LanguageToolConfigDialog_InputMethodQuery(const TextGrammarCheck__LanguageToolConfigDialog* self, int param1) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = const_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigDialog*>(self));
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        return new QVariant(vtextgrammarchecklanguagetoolconfigdialog->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualTextGrammarCheckLanguageToolConfigDialog*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* TextGrammarCheck__LanguageToolConfigDialog_SuperInputMethodQuery(const TextGrammarCheck__LanguageToolConfigDialog* self, int param1) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = const_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigDialog*>(self));
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->setTextGrammarCheck__LanguageToolConfigDialog_InputMethodQuery_IsBase(true);
        return new QVariant(vtextgrammarchecklanguagetoolconfigdialog->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualTextGrammarCheckLanguageToolConfigDialog*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigDialog_OnInputMethodQuery(const TextGrammarCheck__LanguageToolConfigDialog* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = const_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigDialog*>(self));
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->setTextGrammarCheck__LanguageToolConfigDialog_InputMethodQuery_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigDialog::TextGrammarCheck__LanguageToolConfigDialog_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextGrammarCheck__LanguageToolConfigDialog_FocusNextPrevChild(TextGrammarCheck__LanguageToolConfigDialog* self, bool next) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        return vtextgrammarchecklanguagetoolconfigdialog->focusNextPrevChild(next);
    } else {
        return ((VirtualTextGrammarCheckLanguageToolConfigDialog*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool TextGrammarCheck__LanguageToolConfigDialog_SuperFocusNextPrevChild(TextGrammarCheck__LanguageToolConfigDialog* self, bool next) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->setTextGrammarCheck__LanguageToolConfigDialog_FocusNextPrevChild_IsBase(true);
        return vtextgrammarchecklanguagetoolconfigdialog->focusNextPrevChild(next);
    } else {
        return ((VirtualTextGrammarCheckLanguageToolConfigDialog*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigDialog_OnFocusNextPrevChild(TextGrammarCheck__LanguageToolConfigDialog* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->setTextGrammarCheck__LanguageToolConfigDialog_FocusNextPrevChild_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigDialog::TextGrammarCheck__LanguageToolConfigDialog_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_TimerEvent(TextGrammarCheck__LanguageToolConfigDialog* self, QTimerEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->timerEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigDialog*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_SuperTimerEvent(TextGrammarCheck__LanguageToolConfigDialog* self, QTimerEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->setTextGrammarCheck__LanguageToolConfigDialog_TimerEvent_IsBase(true);
        vtextgrammarchecklanguagetoolconfigdialog->timerEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigDialog*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigDialog_OnTimerEvent(TextGrammarCheck__LanguageToolConfigDialog* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->setTextGrammarCheck__LanguageToolConfigDialog_TimerEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigDialog::TextGrammarCheck__LanguageToolConfigDialog_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_ChildEvent(TextGrammarCheck__LanguageToolConfigDialog* self, QChildEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->childEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigDialog*)self)->childEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_SuperChildEvent(TextGrammarCheck__LanguageToolConfigDialog* self, QChildEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->setTextGrammarCheck__LanguageToolConfigDialog_ChildEvent_IsBase(true);
        vtextgrammarchecklanguagetoolconfigdialog->childEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigDialog*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigDialog_OnChildEvent(TextGrammarCheck__LanguageToolConfigDialog* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->setTextGrammarCheck__LanguageToolConfigDialog_ChildEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigDialog::TextGrammarCheck__LanguageToolConfigDialog_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_CustomEvent(TextGrammarCheck__LanguageToolConfigDialog* self, QEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->customEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigDialog*)self)->customEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_SuperCustomEvent(TextGrammarCheck__LanguageToolConfigDialog* self, QEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->setTextGrammarCheck__LanguageToolConfigDialog_CustomEvent_IsBase(true);
        vtextgrammarchecklanguagetoolconfigdialog->customEvent(event);
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigDialog*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigDialog_OnCustomEvent(TextGrammarCheck__LanguageToolConfigDialog* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->setTextGrammarCheck__LanguageToolConfigDialog_CustomEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigDialog::TextGrammarCheck__LanguageToolConfigDialog_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_ConnectNotify(TextGrammarCheck__LanguageToolConfigDialog* self, const QMetaMethod* signal) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->connectNotify(*signal);
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigDialog*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_SuperConnectNotify(TextGrammarCheck__LanguageToolConfigDialog* self, const QMetaMethod* signal) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->setTextGrammarCheck__LanguageToolConfigDialog_ConnectNotify_IsBase(true);
        vtextgrammarchecklanguagetoolconfigdialog->connectNotify(*signal);
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigDialog*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigDialog_OnConnectNotify(TextGrammarCheck__LanguageToolConfigDialog* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->setTextGrammarCheck__LanguageToolConfigDialog_ConnectNotify_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigDialog::TextGrammarCheck__LanguageToolConfigDialog_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_DisconnectNotify(TextGrammarCheck__LanguageToolConfigDialog* self, const QMetaMethod* signal) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->disconnectNotify(*signal);
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigDialog*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_SuperDisconnectNotify(TextGrammarCheck__LanguageToolConfigDialog* self, const QMetaMethod* signal) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->setTextGrammarCheck__LanguageToolConfigDialog_DisconnectNotify_IsBase(true);
        vtextgrammarchecklanguagetoolconfigdialog->disconnectNotify(*signal);
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigDialog*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigDialog_OnDisconnectNotify(TextGrammarCheck__LanguageToolConfigDialog* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->setTextGrammarCheck__LanguageToolConfigDialog_DisconnectNotify_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigDialog::TextGrammarCheck__LanguageToolConfigDialog_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_AdjustPosition(TextGrammarCheck__LanguageToolConfigDialog* self, QWidget* param1) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->adjustPosition(param1);
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigDialog*)self)->adjustPosition(param1);
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_SuperAdjustPosition(TextGrammarCheck__LanguageToolConfigDialog* self, QWidget* param1) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->setTextGrammarCheck__LanguageToolConfigDialog_AdjustPosition_IsBase(true);
        vtextgrammarchecklanguagetoolconfigdialog->adjustPosition(param1);
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigDialog*)self)->adjustPosition(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigDialog_OnAdjustPosition(TextGrammarCheck__LanguageToolConfigDialog* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->setTextGrammarCheck__LanguageToolConfigDialog_AdjustPosition_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigDialog::TextGrammarCheck__LanguageToolConfigDialog_AdjustPosition_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_UpdateMicroFocus(TextGrammarCheck__LanguageToolConfigDialog* self) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->updateMicroFocus();
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigDialog*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_SuperUpdateMicroFocus(TextGrammarCheck__LanguageToolConfigDialog* self) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->setTextGrammarCheck__LanguageToolConfigDialog_UpdateMicroFocus_IsBase(true);
        vtextgrammarchecklanguagetoolconfigdialog->updateMicroFocus();
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigDialog*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigDialog_OnUpdateMicroFocus(TextGrammarCheck__LanguageToolConfigDialog* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->setTextGrammarCheck__LanguageToolConfigDialog_UpdateMicroFocus_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigDialog::TextGrammarCheck__LanguageToolConfigDialog_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_Create(TextGrammarCheck__LanguageToolConfigDialog* self) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->create();
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigDialog*)self)->create();
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_SuperCreate(TextGrammarCheck__LanguageToolConfigDialog* self) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->setTextGrammarCheck__LanguageToolConfigDialog_Create_IsBase(true);
        vtextgrammarchecklanguagetoolconfigdialog->create();
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigDialog*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigDialog_OnCreate(TextGrammarCheck__LanguageToolConfigDialog* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->setTextGrammarCheck__LanguageToolConfigDialog_Create_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigDialog::TextGrammarCheck__LanguageToolConfigDialog_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_Destroy(TextGrammarCheck__LanguageToolConfigDialog* self) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->destroy();
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigDialog*)self)->destroy();
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_SuperDestroy(TextGrammarCheck__LanguageToolConfigDialog* self) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->setTextGrammarCheck__LanguageToolConfigDialog_Destroy_IsBase(true);
        vtextgrammarchecklanguagetoolconfigdialog->destroy();
    } else {
        ((VirtualTextGrammarCheckLanguageToolConfigDialog*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigDialog_OnDestroy(TextGrammarCheck__LanguageToolConfigDialog* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->setTextGrammarCheck__LanguageToolConfigDialog_Destroy_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigDialog::TextGrammarCheck__LanguageToolConfigDialog_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextGrammarCheck__LanguageToolConfigDialog_FocusNextChild(TextGrammarCheck__LanguageToolConfigDialog* self) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        return vtextgrammarchecklanguagetoolconfigdialog->focusNextChild();
    } else {
        return ((VirtualTextGrammarCheckLanguageToolConfigDialog*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool TextGrammarCheck__LanguageToolConfigDialog_SuperFocusNextChild(TextGrammarCheck__LanguageToolConfigDialog* self) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->setTextGrammarCheck__LanguageToolConfigDialog_FocusNextChild_IsBase(true);
        return vtextgrammarchecklanguagetoolconfigdialog->focusNextChild();
    } else {
        return ((VirtualTextGrammarCheckLanguageToolConfigDialog*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigDialog_OnFocusNextChild(TextGrammarCheck__LanguageToolConfigDialog* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->setTextGrammarCheck__LanguageToolConfigDialog_FocusNextChild_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigDialog::TextGrammarCheck__LanguageToolConfigDialog_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextGrammarCheck__LanguageToolConfigDialog_FocusPreviousChild(TextGrammarCheck__LanguageToolConfigDialog* self) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        return vtextgrammarchecklanguagetoolconfigdialog->focusPreviousChild();
    } else {
        return ((VirtualTextGrammarCheckLanguageToolConfigDialog*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool TextGrammarCheck__LanguageToolConfigDialog_SuperFocusPreviousChild(TextGrammarCheck__LanguageToolConfigDialog* self) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->setTextGrammarCheck__LanguageToolConfigDialog_FocusPreviousChild_IsBase(true);
        return vtextgrammarchecklanguagetoolconfigdialog->focusPreviousChild();
    } else {
        return ((VirtualTextGrammarCheckLanguageToolConfigDialog*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigDialog_OnFocusPreviousChild(TextGrammarCheck__LanguageToolConfigDialog* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->setTextGrammarCheck__LanguageToolConfigDialog_FocusPreviousChild_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigDialog::TextGrammarCheck__LanguageToolConfigDialog_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* TextGrammarCheck__LanguageToolConfigDialog_Sender(const TextGrammarCheck__LanguageToolConfigDialog* self) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = const_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigDialog*>(self));
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        return vtextgrammarchecklanguagetoolconfigdialog->sender();
    } else {
        return ((VirtualTextGrammarCheckLanguageToolConfigDialog*)self)->sender();
    }
}

// Base class handler implementation
QObject* TextGrammarCheck__LanguageToolConfigDialog_SuperSender(const TextGrammarCheck__LanguageToolConfigDialog* self) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = const_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigDialog*>(self));
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->setTextGrammarCheck__LanguageToolConfigDialog_Sender_IsBase(true);
        return vtextgrammarchecklanguagetoolconfigdialog->sender();
    } else {
        return ((VirtualTextGrammarCheckLanguageToolConfigDialog*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigDialog_OnSender(const TextGrammarCheck__LanguageToolConfigDialog* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = const_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigDialog*>(self));
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->setTextGrammarCheck__LanguageToolConfigDialog_Sender_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigDialog::TextGrammarCheck__LanguageToolConfigDialog_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int TextGrammarCheck__LanguageToolConfigDialog_SenderSignalIndex(const TextGrammarCheck__LanguageToolConfigDialog* self) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = const_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigDialog*>(self));
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        return vtextgrammarchecklanguagetoolconfigdialog->senderSignalIndex();
    } else {
        return ((VirtualTextGrammarCheckLanguageToolConfigDialog*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int TextGrammarCheck__LanguageToolConfigDialog_SuperSenderSignalIndex(const TextGrammarCheck__LanguageToolConfigDialog* self) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = const_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigDialog*>(self));
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->setTextGrammarCheck__LanguageToolConfigDialog_SenderSignalIndex_IsBase(true);
        return vtextgrammarchecklanguagetoolconfigdialog->senderSignalIndex();
    } else {
        return ((VirtualTextGrammarCheckLanguageToolConfigDialog*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigDialog_OnSenderSignalIndex(const TextGrammarCheck__LanguageToolConfigDialog* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = const_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigDialog*>(self));
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->setTextGrammarCheck__LanguageToolConfigDialog_SenderSignalIndex_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigDialog::TextGrammarCheck__LanguageToolConfigDialog_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int TextGrammarCheck__LanguageToolConfigDialog_Receivers(const TextGrammarCheck__LanguageToolConfigDialog* self, const char* signal) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = const_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigDialog*>(self));
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        return vtextgrammarchecklanguagetoolconfigdialog->receivers(signal);
    } else {
        return ((VirtualTextGrammarCheckLanguageToolConfigDialog*)self)->receivers(signal);
    }
}

// Base class handler implementation
int TextGrammarCheck__LanguageToolConfigDialog_SuperReceivers(const TextGrammarCheck__LanguageToolConfigDialog* self, const char* signal) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = const_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigDialog*>(self));
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->setTextGrammarCheck__LanguageToolConfigDialog_Receivers_IsBase(true);
        return vtextgrammarchecklanguagetoolconfigdialog->receivers(signal);
    } else {
        return ((VirtualTextGrammarCheckLanguageToolConfigDialog*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigDialog_OnReceivers(const TextGrammarCheck__LanguageToolConfigDialog* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = const_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigDialog*>(self));
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->setTextGrammarCheck__LanguageToolConfigDialog_Receivers_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigDialog::TextGrammarCheck__LanguageToolConfigDialog_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextGrammarCheck__LanguageToolConfigDialog_IsSignalConnected(const TextGrammarCheck__LanguageToolConfigDialog* self, const QMetaMethod* signal) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = const_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigDialog*>(self));
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        return vtextgrammarchecklanguagetoolconfigdialog->isSignalConnected(*signal);
    } else {
        return ((VirtualTextGrammarCheckLanguageToolConfigDialog*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool TextGrammarCheck__LanguageToolConfigDialog_SuperIsSignalConnected(const TextGrammarCheck__LanguageToolConfigDialog* self, const QMetaMethod* signal) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = const_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigDialog*>(self));
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->setTextGrammarCheck__LanguageToolConfigDialog_IsSignalConnected_IsBase(true);
        return vtextgrammarchecklanguagetoolconfigdialog->isSignalConnected(*signal);
    } else {
        return ((VirtualTextGrammarCheckLanguageToolConfigDialog*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigDialog_OnIsSignalConnected(const TextGrammarCheck__LanguageToolConfigDialog* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = const_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigDialog*>(self));
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->setTextGrammarCheck__LanguageToolConfigDialog_IsSignalConnected_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigDialog::TextGrammarCheck__LanguageToolConfigDialog_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double TextGrammarCheck__LanguageToolConfigDialog_GetDecodedMetricF(const TextGrammarCheck__LanguageToolConfigDialog* self, int metricA, int metricB) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = const_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigDialog*>(self));
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        return vtextgrammarchecklanguagetoolconfigdialog->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualTextGrammarCheckLanguageToolConfigDialog*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double TextGrammarCheck__LanguageToolConfigDialog_SuperGetDecodedMetricF(const TextGrammarCheck__LanguageToolConfigDialog* self, int metricA, int metricB) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = const_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigDialog*>(self));
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->setTextGrammarCheck__LanguageToolConfigDialog_GetDecodedMetricF_IsBase(true);
        return vtextgrammarchecklanguagetoolconfigdialog->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualTextGrammarCheckLanguageToolConfigDialog*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigDialog_OnGetDecodedMetricF(const TextGrammarCheck__LanguageToolConfigDialog* self, intptr_t slot) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = const_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigDialog*>(self));
    if (vtextgrammarchecklanguagetoolconfigdialog && vtextgrammarchecklanguagetoolconfigdialog->isVirtualTextGrammarCheckLanguageToolConfigDialog) {
        vtextgrammarchecklanguagetoolconfigdialog->setTextGrammarCheck__LanguageToolConfigDialog_GetDecodedMetricF_Callback(reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigDialog::TextGrammarCheck__LanguageToolConfigDialog_GetDecodedMetricF_Callback>(slot));
    }
}

void TextGrammarCheck__LanguageToolConfigDialog_Delete(TextGrammarCheck__LanguageToolConfigDialog* self) {
    delete self;
}
