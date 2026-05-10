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
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#define WORKAROUND_INNER_CLASS_DEFINITION_TextTranslator__TranslatorConfigureDialog
#include <translatorconfiguredialog.h>
#include "libtranslatorconfiguredialog.h"
#include "libtranslatorconfiguredialog.hxx"

TextTranslator__TranslatorConfigureDialog* TextTranslator__TranslatorConfigureDialog_new(QWidget* parent) {
    return new VirtualTextTranslatorTranslatorConfigureDialog(parent);
}

TextTranslator__TranslatorConfigureDialog* TextTranslator__TranslatorConfigureDialog_new2() {
    return new VirtualTextTranslatorTranslatorConfigureDialog();
}

// Derived class handler implementation
QMetaObject* TextTranslator__TranslatorConfigureDialog_MetaObject(const TextTranslator__TranslatorConfigureDialog* self) {
    auto* vtexttranslatortranslatorconfiguredialog = const_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureDialog*>(self));
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        return (QMetaObject*)vtexttranslatortranslatorconfiguredialog->metaObject();
    } else {
        return (QMetaObject*)self->TextTranslator::TranslatorConfigureDialog::metaObject();
    }
}

// Base class handler implementation
QMetaObject* TextTranslator__TranslatorConfigureDialog_SuperMetaObject(const TextTranslator__TranslatorConfigureDialog* self) {
    auto* vtexttranslatortranslatorconfiguredialog = const_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureDialog*>(self));
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->setTextTranslator__TranslatorConfigureDialog_MetaObject_IsBase(true);
        return (QMetaObject*)vtexttranslatortranslatorconfiguredialog->metaObject();
    } else {
        return (QMetaObject*)self->TextTranslator::TranslatorConfigureDialog::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureDialog_OnMetaObject(const TextTranslator__TranslatorConfigureDialog* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfiguredialog = const_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureDialog*>(self));
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->setTextTranslator__TranslatorConfigureDialog_MetaObject_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureDialog::TextTranslator__TranslatorConfigureDialog_MetaObject_Callback>(slot));
    }
}

// Derived class handler implementation
void* TextTranslator__TranslatorConfigureDialog_Metacast(TextTranslator__TranslatorConfigureDialog* self, const char* param1) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        return vtexttranslatortranslatorconfiguredialog->qt_metacast(param1);
    } else {
        return self->TextTranslator::TranslatorConfigureDialog::qt_metacast(param1);
    }
}

// Base class handler implementation
void* TextTranslator__TranslatorConfigureDialog_SuperMetacast(TextTranslator__TranslatorConfigureDialog* self, const char* param1) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->setTextTranslator__TranslatorConfigureDialog_Metacast_IsBase(true);
        return vtexttranslatortranslatorconfiguredialog->qt_metacast(param1);
    } else {
        return self->TextTranslator::TranslatorConfigureDialog::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureDialog_OnMetacast(TextTranslator__TranslatorConfigureDialog* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->setTextTranslator__TranslatorConfigureDialog_Metacast_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureDialog::TextTranslator__TranslatorConfigureDialog_Metacast_Callback>(slot));
    }
}

// Derived class handler implementation
int TextTranslator__TranslatorConfigureDialog_Metacall(TextTranslator__TranslatorConfigureDialog* self, int param1, int param2, void** param3) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        return vtexttranslatortranslatorconfiguredialog->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->TextTranslator::TranslatorConfigureDialog::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Base class handler implementation
int TextTranslator__TranslatorConfigureDialog_SuperMetacall(TextTranslator__TranslatorConfigureDialog* self, int param1, int param2, void** param3) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->setTextTranslator__TranslatorConfigureDialog_Metacall_IsBase(true);
        return vtexttranslatortranslatorconfiguredialog->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->TextTranslator::TranslatorConfigureDialog::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureDialog_OnMetacall(TextTranslator__TranslatorConfigureDialog* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->setTextTranslator__TranslatorConfigureDialog_Metacall_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureDialog::TextTranslator__TranslatorConfigureDialog_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureDialog_SetVisible(TextTranslator__TranslatorConfigureDialog* self, bool visible) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->setVisible(visible);
    } else {
        self->TextTranslator::TranslatorConfigureDialog::setVisible(visible);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureDialog_SuperSetVisible(TextTranslator__TranslatorConfigureDialog* self, bool visible) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->setTextTranslator__TranslatorConfigureDialog_SetVisible_IsBase(true);
        vtexttranslatortranslatorconfiguredialog->setVisible(visible);
    } else {
        self->TextTranslator::TranslatorConfigureDialog::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureDialog_OnSetVisible(TextTranslator__TranslatorConfigureDialog* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->setTextTranslator__TranslatorConfigureDialog_SetVisible_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureDialog::TextTranslator__TranslatorConfigureDialog_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* TextTranslator__TranslatorConfigureDialog_SizeHint(const TextTranslator__TranslatorConfigureDialog* self) {
    auto* vtexttranslatortranslatorconfiguredialog = const_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureDialog*>(self));
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        return new QSize(vtexttranslatortranslatorconfiguredialog->sizeHint());
    } else {
        return new QSize(((VirtualTextTranslatorTranslatorConfigureDialog*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* TextTranslator__TranslatorConfigureDialog_SuperSizeHint(const TextTranslator__TranslatorConfigureDialog* self) {
    auto* vtexttranslatortranslatorconfiguredialog = const_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureDialog*>(self));
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->setTextTranslator__TranslatorConfigureDialog_SizeHint_IsBase(true);
        return new QSize(vtexttranslatortranslatorconfiguredialog->sizeHint());
    } else {
        return new QSize(((VirtualTextTranslatorTranslatorConfigureDialog*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureDialog_OnSizeHint(const TextTranslator__TranslatorConfigureDialog* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfiguredialog = const_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureDialog*>(self));
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->setTextTranslator__TranslatorConfigureDialog_SizeHint_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureDialog::TextTranslator__TranslatorConfigureDialog_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* TextTranslator__TranslatorConfigureDialog_MinimumSizeHint(const TextTranslator__TranslatorConfigureDialog* self) {
    auto* vtexttranslatortranslatorconfiguredialog = const_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureDialog*>(self));
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        return new QSize(vtexttranslatortranslatorconfiguredialog->minimumSizeHint());
    } else {
        return new QSize(((VirtualTextTranslatorTranslatorConfigureDialog*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* TextTranslator__TranslatorConfigureDialog_SuperMinimumSizeHint(const TextTranslator__TranslatorConfigureDialog* self) {
    auto* vtexttranslatortranslatorconfiguredialog = const_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureDialog*>(self));
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->setTextTranslator__TranslatorConfigureDialog_MinimumSizeHint_IsBase(true);
        return new QSize(vtexttranslatortranslatorconfiguredialog->minimumSizeHint());
    } else {
        return new QSize(((VirtualTextTranslatorTranslatorConfigureDialog*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureDialog_OnMinimumSizeHint(const TextTranslator__TranslatorConfigureDialog* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfiguredialog = const_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureDialog*>(self));
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->setTextTranslator__TranslatorConfigureDialog_MinimumSizeHint_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureDialog::TextTranslator__TranslatorConfigureDialog_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureDialog_Open(TextTranslator__TranslatorConfigureDialog* self) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->open();
    } else {
        self->TextTranslator::TranslatorConfigureDialog::open();
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureDialog_SuperOpen(TextTranslator__TranslatorConfigureDialog* self) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->setTextTranslator__TranslatorConfigureDialog_Open_IsBase(true);
        vtexttranslatortranslatorconfiguredialog->open();
    } else {
        self->TextTranslator::TranslatorConfigureDialog::open();
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureDialog_OnOpen(TextTranslator__TranslatorConfigureDialog* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->setTextTranslator__TranslatorConfigureDialog_Open_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureDialog::TextTranslator__TranslatorConfigureDialog_Open_Callback>(slot));
    }
}

// Derived class handler implementation
int TextTranslator__TranslatorConfigureDialog_Exec(TextTranslator__TranslatorConfigureDialog* self) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        return vtexttranslatortranslatorconfiguredialog->exec();
    } else {
        return self->TextTranslator::TranslatorConfigureDialog::exec();
    }
}

// Base class handler implementation
int TextTranslator__TranslatorConfigureDialog_SuperExec(TextTranslator__TranslatorConfigureDialog* self) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->setTextTranslator__TranslatorConfigureDialog_Exec_IsBase(true);
        return vtexttranslatortranslatorconfiguredialog->exec();
    } else {
        return self->TextTranslator::TranslatorConfigureDialog::exec();
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureDialog_OnExec(TextTranslator__TranslatorConfigureDialog* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->setTextTranslator__TranslatorConfigureDialog_Exec_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureDialog::TextTranslator__TranslatorConfigureDialog_Exec_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureDialog_Done(TextTranslator__TranslatorConfigureDialog* self, int param1) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->done(static_cast<int>(param1));
    } else {
        self->TextTranslator::TranslatorConfigureDialog::done(static_cast<int>(param1));
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureDialog_SuperDone(TextTranslator__TranslatorConfigureDialog* self, int param1) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->setTextTranslator__TranslatorConfigureDialog_Done_IsBase(true);
        vtexttranslatortranslatorconfiguredialog->done(static_cast<int>(param1));
    } else {
        self->TextTranslator::TranslatorConfigureDialog::done(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureDialog_OnDone(TextTranslator__TranslatorConfigureDialog* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->setTextTranslator__TranslatorConfigureDialog_Done_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureDialog::TextTranslator__TranslatorConfigureDialog_Done_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureDialog_Accept(TextTranslator__TranslatorConfigureDialog* self) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->accept();
    } else {
        self->TextTranslator::TranslatorConfigureDialog::accept();
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureDialog_SuperAccept(TextTranslator__TranslatorConfigureDialog* self) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->setTextTranslator__TranslatorConfigureDialog_Accept_IsBase(true);
        vtexttranslatortranslatorconfiguredialog->accept();
    } else {
        self->TextTranslator::TranslatorConfigureDialog::accept();
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureDialog_OnAccept(TextTranslator__TranslatorConfigureDialog* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->setTextTranslator__TranslatorConfigureDialog_Accept_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureDialog::TextTranslator__TranslatorConfigureDialog_Accept_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureDialog_Reject(TextTranslator__TranslatorConfigureDialog* self) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->reject();
    } else {
        self->TextTranslator::TranslatorConfigureDialog::reject();
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureDialog_SuperReject(TextTranslator__TranslatorConfigureDialog* self) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->setTextTranslator__TranslatorConfigureDialog_Reject_IsBase(true);
        vtexttranslatortranslatorconfiguredialog->reject();
    } else {
        self->TextTranslator::TranslatorConfigureDialog::reject();
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureDialog_OnReject(TextTranslator__TranslatorConfigureDialog* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->setTextTranslator__TranslatorConfigureDialog_Reject_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureDialog::TextTranslator__TranslatorConfigureDialog_Reject_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureDialog_KeyPressEvent(TextTranslator__TranslatorConfigureDialog* self, QKeyEvent* param1) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->keyPressEvent(param1);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureDialog*)self)->keyPressEvent(param1);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureDialog_SuperKeyPressEvent(TextTranslator__TranslatorConfigureDialog* self, QKeyEvent* param1) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->setTextTranslator__TranslatorConfigureDialog_KeyPressEvent_IsBase(true);
        vtexttranslatortranslatorconfiguredialog->keyPressEvent(param1);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureDialog*)self)->keyPressEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureDialog_OnKeyPressEvent(TextTranslator__TranslatorConfigureDialog* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->setTextTranslator__TranslatorConfigureDialog_KeyPressEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureDialog::TextTranslator__TranslatorConfigureDialog_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureDialog_CloseEvent(TextTranslator__TranslatorConfigureDialog* self, QCloseEvent* param1) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->closeEvent(param1);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureDialog*)self)->closeEvent(param1);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureDialog_SuperCloseEvent(TextTranslator__TranslatorConfigureDialog* self, QCloseEvent* param1) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->setTextTranslator__TranslatorConfigureDialog_CloseEvent_IsBase(true);
        vtexttranslatortranslatorconfiguredialog->closeEvent(param1);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureDialog*)self)->closeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureDialog_OnCloseEvent(TextTranslator__TranslatorConfigureDialog* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->setTextTranslator__TranslatorConfigureDialog_CloseEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureDialog::TextTranslator__TranslatorConfigureDialog_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureDialog_ShowEvent(TextTranslator__TranslatorConfigureDialog* self, QShowEvent* param1) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->showEvent(param1);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureDialog*)self)->showEvent(param1);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureDialog_SuperShowEvent(TextTranslator__TranslatorConfigureDialog* self, QShowEvent* param1) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->setTextTranslator__TranslatorConfigureDialog_ShowEvent_IsBase(true);
        vtexttranslatortranslatorconfiguredialog->showEvent(param1);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureDialog*)self)->showEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureDialog_OnShowEvent(TextTranslator__TranslatorConfigureDialog* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->setTextTranslator__TranslatorConfigureDialog_ShowEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureDialog::TextTranslator__TranslatorConfigureDialog_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureDialog_ResizeEvent(TextTranslator__TranslatorConfigureDialog* self, QResizeEvent* param1) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->resizeEvent(param1);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureDialog*)self)->resizeEvent(param1);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureDialog_SuperResizeEvent(TextTranslator__TranslatorConfigureDialog* self, QResizeEvent* param1) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->setTextTranslator__TranslatorConfigureDialog_ResizeEvent_IsBase(true);
        vtexttranslatortranslatorconfiguredialog->resizeEvent(param1);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureDialog*)self)->resizeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureDialog_OnResizeEvent(TextTranslator__TranslatorConfigureDialog* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->setTextTranslator__TranslatorConfigureDialog_ResizeEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureDialog::TextTranslator__TranslatorConfigureDialog_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureDialog_ContextMenuEvent(TextTranslator__TranslatorConfigureDialog* self, QContextMenuEvent* param1) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->contextMenuEvent(param1);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureDialog*)self)->contextMenuEvent(param1);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureDialog_SuperContextMenuEvent(TextTranslator__TranslatorConfigureDialog* self, QContextMenuEvent* param1) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->setTextTranslator__TranslatorConfigureDialog_ContextMenuEvent_IsBase(true);
        vtexttranslatortranslatorconfiguredialog->contextMenuEvent(param1);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureDialog*)self)->contextMenuEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureDialog_OnContextMenuEvent(TextTranslator__TranslatorConfigureDialog* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->setTextTranslator__TranslatorConfigureDialog_ContextMenuEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureDialog::TextTranslator__TranslatorConfigureDialog_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextTranslator__TranslatorConfigureDialog_EventFilter(TextTranslator__TranslatorConfigureDialog* self, QObject* param1, QEvent* param2) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        return vtexttranslatortranslatorconfiguredialog->eventFilter(param1, param2);
    } else {
        return ((VirtualTextTranslatorTranslatorConfigureDialog*)self)->eventFilter(param1, param2);
    }
}

// Base class handler implementation
bool TextTranslator__TranslatorConfigureDialog_SuperEventFilter(TextTranslator__TranslatorConfigureDialog* self, QObject* param1, QEvent* param2) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->setTextTranslator__TranslatorConfigureDialog_EventFilter_IsBase(true);
        return vtexttranslatortranslatorconfiguredialog->eventFilter(param1, param2);
    } else {
        return ((VirtualTextTranslatorTranslatorConfigureDialog*)self)->eventFilter(param1, param2);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureDialog_OnEventFilter(TextTranslator__TranslatorConfigureDialog* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->setTextTranslator__TranslatorConfigureDialog_EventFilter_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureDialog::TextTranslator__TranslatorConfigureDialog_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
int TextTranslator__TranslatorConfigureDialog_DevType(const TextTranslator__TranslatorConfigureDialog* self) {
    auto* vtexttranslatortranslatorconfiguredialog = const_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureDialog*>(self));
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        return vtexttranslatortranslatorconfiguredialog->devType();
    } else {
        return self->TextTranslator::TranslatorConfigureDialog::devType();
    }
}

// Base class handler implementation
int TextTranslator__TranslatorConfigureDialog_SuperDevType(const TextTranslator__TranslatorConfigureDialog* self) {
    auto* vtexttranslatortranslatorconfiguredialog = const_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureDialog*>(self));
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->setTextTranslator__TranslatorConfigureDialog_DevType_IsBase(true);
        return vtexttranslatortranslatorconfiguredialog->devType();
    } else {
        return self->TextTranslator::TranslatorConfigureDialog::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureDialog_OnDevType(const TextTranslator__TranslatorConfigureDialog* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfiguredialog = const_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureDialog*>(self));
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->setTextTranslator__TranslatorConfigureDialog_DevType_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureDialog::TextTranslator__TranslatorConfigureDialog_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
int TextTranslator__TranslatorConfigureDialog_HeightForWidth(const TextTranslator__TranslatorConfigureDialog* self, int param1) {
    auto* vtexttranslatortranslatorconfiguredialog = const_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureDialog*>(self));
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        return vtexttranslatortranslatorconfiguredialog->heightForWidth(static_cast<int>(param1));
    } else {
        return self->TextTranslator::TranslatorConfigureDialog::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int TextTranslator__TranslatorConfigureDialog_SuperHeightForWidth(const TextTranslator__TranslatorConfigureDialog* self, int param1) {
    auto* vtexttranslatortranslatorconfiguredialog = const_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureDialog*>(self));
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->setTextTranslator__TranslatorConfigureDialog_HeightForWidth_IsBase(true);
        return vtexttranslatortranslatorconfiguredialog->heightForWidth(static_cast<int>(param1));
    } else {
        return self->TextTranslator::TranslatorConfigureDialog::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureDialog_OnHeightForWidth(const TextTranslator__TranslatorConfigureDialog* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfiguredialog = const_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureDialog*>(self));
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->setTextTranslator__TranslatorConfigureDialog_HeightForWidth_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureDialog::TextTranslator__TranslatorConfigureDialog_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextTranslator__TranslatorConfigureDialog_HasHeightForWidth(const TextTranslator__TranslatorConfigureDialog* self) {
    auto* vtexttranslatortranslatorconfiguredialog = const_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureDialog*>(self));
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        return vtexttranslatortranslatorconfiguredialog->hasHeightForWidth();
    } else {
        return self->TextTranslator::TranslatorConfigureDialog::hasHeightForWidth();
    }
}

// Base class handler implementation
bool TextTranslator__TranslatorConfigureDialog_SuperHasHeightForWidth(const TextTranslator__TranslatorConfigureDialog* self) {
    auto* vtexttranslatortranslatorconfiguredialog = const_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureDialog*>(self));
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->setTextTranslator__TranslatorConfigureDialog_HasHeightForWidth_IsBase(true);
        return vtexttranslatortranslatorconfiguredialog->hasHeightForWidth();
    } else {
        return self->TextTranslator::TranslatorConfigureDialog::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureDialog_OnHasHeightForWidth(const TextTranslator__TranslatorConfigureDialog* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfiguredialog = const_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureDialog*>(self));
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->setTextTranslator__TranslatorConfigureDialog_HasHeightForWidth_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureDialog::TextTranslator__TranslatorConfigureDialog_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* TextTranslator__TranslatorConfigureDialog_PaintEngine(const TextTranslator__TranslatorConfigureDialog* self) {
    auto* vtexttranslatortranslatorconfiguredialog = const_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureDialog*>(self));
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        return vtexttranslatortranslatorconfiguredialog->paintEngine();
    } else {
        return self->TextTranslator::TranslatorConfigureDialog::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* TextTranslator__TranslatorConfigureDialog_SuperPaintEngine(const TextTranslator__TranslatorConfigureDialog* self) {
    auto* vtexttranslatortranslatorconfiguredialog = const_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureDialog*>(self));
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->setTextTranslator__TranslatorConfigureDialog_PaintEngine_IsBase(true);
        return vtexttranslatortranslatorconfiguredialog->paintEngine();
    } else {
        return self->TextTranslator::TranslatorConfigureDialog::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureDialog_OnPaintEngine(const TextTranslator__TranslatorConfigureDialog* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfiguredialog = const_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureDialog*>(self));
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->setTextTranslator__TranslatorConfigureDialog_PaintEngine_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureDialog::TextTranslator__TranslatorConfigureDialog_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextTranslator__TranslatorConfigureDialog_Event(TextTranslator__TranslatorConfigureDialog* self, QEvent* event) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        return vtexttranslatortranslatorconfiguredialog->event(event);
    } else {
        return ((VirtualTextTranslatorTranslatorConfigureDialog*)self)->event(event);
    }
}

// Base class handler implementation
bool TextTranslator__TranslatorConfigureDialog_SuperEvent(TextTranslator__TranslatorConfigureDialog* self, QEvent* event) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->setTextTranslator__TranslatorConfigureDialog_Event_IsBase(true);
        return vtexttranslatortranslatorconfiguredialog->event(event);
    } else {
        return ((VirtualTextTranslatorTranslatorConfigureDialog*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureDialog_OnEvent(TextTranslator__TranslatorConfigureDialog* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->setTextTranslator__TranslatorConfigureDialog_Event_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureDialog::TextTranslator__TranslatorConfigureDialog_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureDialog_MousePressEvent(TextTranslator__TranslatorConfigureDialog* self, QMouseEvent* event) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->mousePressEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureDialog*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureDialog_SuperMousePressEvent(TextTranslator__TranslatorConfigureDialog* self, QMouseEvent* event) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->setTextTranslator__TranslatorConfigureDialog_MousePressEvent_IsBase(true);
        vtexttranslatortranslatorconfiguredialog->mousePressEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureDialog*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureDialog_OnMousePressEvent(TextTranslator__TranslatorConfigureDialog* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->setTextTranslator__TranslatorConfigureDialog_MousePressEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureDialog::TextTranslator__TranslatorConfigureDialog_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureDialog_MouseReleaseEvent(TextTranslator__TranslatorConfigureDialog* self, QMouseEvent* event) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->mouseReleaseEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureDialog*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureDialog_SuperMouseReleaseEvent(TextTranslator__TranslatorConfigureDialog* self, QMouseEvent* event) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->setTextTranslator__TranslatorConfigureDialog_MouseReleaseEvent_IsBase(true);
        vtexttranslatortranslatorconfiguredialog->mouseReleaseEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureDialog*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureDialog_OnMouseReleaseEvent(TextTranslator__TranslatorConfigureDialog* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->setTextTranslator__TranslatorConfigureDialog_MouseReleaseEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureDialog::TextTranslator__TranslatorConfigureDialog_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureDialog_MouseDoubleClickEvent(TextTranslator__TranslatorConfigureDialog* self, QMouseEvent* event) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->mouseDoubleClickEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureDialog*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureDialog_SuperMouseDoubleClickEvent(TextTranslator__TranslatorConfigureDialog* self, QMouseEvent* event) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->setTextTranslator__TranslatorConfigureDialog_MouseDoubleClickEvent_IsBase(true);
        vtexttranslatortranslatorconfiguredialog->mouseDoubleClickEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureDialog*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureDialog_OnMouseDoubleClickEvent(TextTranslator__TranslatorConfigureDialog* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->setTextTranslator__TranslatorConfigureDialog_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureDialog::TextTranslator__TranslatorConfigureDialog_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureDialog_MouseMoveEvent(TextTranslator__TranslatorConfigureDialog* self, QMouseEvent* event) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->mouseMoveEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureDialog*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureDialog_SuperMouseMoveEvent(TextTranslator__TranslatorConfigureDialog* self, QMouseEvent* event) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->setTextTranslator__TranslatorConfigureDialog_MouseMoveEvent_IsBase(true);
        vtexttranslatortranslatorconfiguredialog->mouseMoveEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureDialog*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureDialog_OnMouseMoveEvent(TextTranslator__TranslatorConfigureDialog* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->setTextTranslator__TranslatorConfigureDialog_MouseMoveEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureDialog::TextTranslator__TranslatorConfigureDialog_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureDialog_WheelEvent(TextTranslator__TranslatorConfigureDialog* self, QWheelEvent* event) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->wheelEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureDialog*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureDialog_SuperWheelEvent(TextTranslator__TranslatorConfigureDialog* self, QWheelEvent* event) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->setTextTranslator__TranslatorConfigureDialog_WheelEvent_IsBase(true);
        vtexttranslatortranslatorconfiguredialog->wheelEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureDialog*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureDialog_OnWheelEvent(TextTranslator__TranslatorConfigureDialog* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->setTextTranslator__TranslatorConfigureDialog_WheelEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureDialog::TextTranslator__TranslatorConfigureDialog_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureDialog_KeyReleaseEvent(TextTranslator__TranslatorConfigureDialog* self, QKeyEvent* event) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->keyReleaseEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureDialog*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureDialog_SuperKeyReleaseEvent(TextTranslator__TranslatorConfigureDialog* self, QKeyEvent* event) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->setTextTranslator__TranslatorConfigureDialog_KeyReleaseEvent_IsBase(true);
        vtexttranslatortranslatorconfiguredialog->keyReleaseEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureDialog*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureDialog_OnKeyReleaseEvent(TextTranslator__TranslatorConfigureDialog* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->setTextTranslator__TranslatorConfigureDialog_KeyReleaseEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureDialog::TextTranslator__TranslatorConfigureDialog_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureDialog_FocusInEvent(TextTranslator__TranslatorConfigureDialog* self, QFocusEvent* event) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->focusInEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureDialog*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureDialog_SuperFocusInEvent(TextTranslator__TranslatorConfigureDialog* self, QFocusEvent* event) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->setTextTranslator__TranslatorConfigureDialog_FocusInEvent_IsBase(true);
        vtexttranslatortranslatorconfiguredialog->focusInEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureDialog*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureDialog_OnFocusInEvent(TextTranslator__TranslatorConfigureDialog* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->setTextTranslator__TranslatorConfigureDialog_FocusInEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureDialog::TextTranslator__TranslatorConfigureDialog_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureDialog_FocusOutEvent(TextTranslator__TranslatorConfigureDialog* self, QFocusEvent* event) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->focusOutEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureDialog*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureDialog_SuperFocusOutEvent(TextTranslator__TranslatorConfigureDialog* self, QFocusEvent* event) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->setTextTranslator__TranslatorConfigureDialog_FocusOutEvent_IsBase(true);
        vtexttranslatortranslatorconfiguredialog->focusOutEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureDialog*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureDialog_OnFocusOutEvent(TextTranslator__TranslatorConfigureDialog* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->setTextTranslator__TranslatorConfigureDialog_FocusOutEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureDialog::TextTranslator__TranslatorConfigureDialog_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureDialog_EnterEvent(TextTranslator__TranslatorConfigureDialog* self, QEnterEvent* event) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->enterEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureDialog*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureDialog_SuperEnterEvent(TextTranslator__TranslatorConfigureDialog* self, QEnterEvent* event) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->setTextTranslator__TranslatorConfigureDialog_EnterEvent_IsBase(true);
        vtexttranslatortranslatorconfiguredialog->enterEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureDialog*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureDialog_OnEnterEvent(TextTranslator__TranslatorConfigureDialog* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->setTextTranslator__TranslatorConfigureDialog_EnterEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureDialog::TextTranslator__TranslatorConfigureDialog_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureDialog_LeaveEvent(TextTranslator__TranslatorConfigureDialog* self, QEvent* event) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->leaveEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureDialog*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureDialog_SuperLeaveEvent(TextTranslator__TranslatorConfigureDialog* self, QEvent* event) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->setTextTranslator__TranslatorConfigureDialog_LeaveEvent_IsBase(true);
        vtexttranslatortranslatorconfiguredialog->leaveEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureDialog*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureDialog_OnLeaveEvent(TextTranslator__TranslatorConfigureDialog* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->setTextTranslator__TranslatorConfigureDialog_LeaveEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureDialog::TextTranslator__TranslatorConfigureDialog_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureDialog_PaintEvent(TextTranslator__TranslatorConfigureDialog* self, QPaintEvent* event) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->paintEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureDialog*)self)->paintEvent(event);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureDialog_SuperPaintEvent(TextTranslator__TranslatorConfigureDialog* self, QPaintEvent* event) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->setTextTranslator__TranslatorConfigureDialog_PaintEvent_IsBase(true);
        vtexttranslatortranslatorconfiguredialog->paintEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureDialog*)self)->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureDialog_OnPaintEvent(TextTranslator__TranslatorConfigureDialog* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->setTextTranslator__TranslatorConfigureDialog_PaintEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureDialog::TextTranslator__TranslatorConfigureDialog_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureDialog_MoveEvent(TextTranslator__TranslatorConfigureDialog* self, QMoveEvent* event) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->moveEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureDialog*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureDialog_SuperMoveEvent(TextTranslator__TranslatorConfigureDialog* self, QMoveEvent* event) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->setTextTranslator__TranslatorConfigureDialog_MoveEvent_IsBase(true);
        vtexttranslatortranslatorconfiguredialog->moveEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureDialog*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureDialog_OnMoveEvent(TextTranslator__TranslatorConfigureDialog* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->setTextTranslator__TranslatorConfigureDialog_MoveEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureDialog::TextTranslator__TranslatorConfigureDialog_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureDialog_TabletEvent(TextTranslator__TranslatorConfigureDialog* self, QTabletEvent* event) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->tabletEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureDialog*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureDialog_SuperTabletEvent(TextTranslator__TranslatorConfigureDialog* self, QTabletEvent* event) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->setTextTranslator__TranslatorConfigureDialog_TabletEvent_IsBase(true);
        vtexttranslatortranslatorconfiguredialog->tabletEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureDialog*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureDialog_OnTabletEvent(TextTranslator__TranslatorConfigureDialog* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->setTextTranslator__TranslatorConfigureDialog_TabletEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureDialog::TextTranslator__TranslatorConfigureDialog_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureDialog_ActionEvent(TextTranslator__TranslatorConfigureDialog* self, QActionEvent* event) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->actionEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureDialog*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureDialog_SuperActionEvent(TextTranslator__TranslatorConfigureDialog* self, QActionEvent* event) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->setTextTranslator__TranslatorConfigureDialog_ActionEvent_IsBase(true);
        vtexttranslatortranslatorconfiguredialog->actionEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureDialog*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureDialog_OnActionEvent(TextTranslator__TranslatorConfigureDialog* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->setTextTranslator__TranslatorConfigureDialog_ActionEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureDialog::TextTranslator__TranslatorConfigureDialog_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureDialog_DragEnterEvent(TextTranslator__TranslatorConfigureDialog* self, QDragEnterEvent* event) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->dragEnterEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureDialog*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureDialog_SuperDragEnterEvent(TextTranslator__TranslatorConfigureDialog* self, QDragEnterEvent* event) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->setTextTranslator__TranslatorConfigureDialog_DragEnterEvent_IsBase(true);
        vtexttranslatortranslatorconfiguredialog->dragEnterEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureDialog*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureDialog_OnDragEnterEvent(TextTranslator__TranslatorConfigureDialog* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->setTextTranslator__TranslatorConfigureDialog_DragEnterEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureDialog::TextTranslator__TranslatorConfigureDialog_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureDialog_DragMoveEvent(TextTranslator__TranslatorConfigureDialog* self, QDragMoveEvent* event) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->dragMoveEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureDialog*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureDialog_SuperDragMoveEvent(TextTranslator__TranslatorConfigureDialog* self, QDragMoveEvent* event) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->setTextTranslator__TranslatorConfigureDialog_DragMoveEvent_IsBase(true);
        vtexttranslatortranslatorconfiguredialog->dragMoveEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureDialog*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureDialog_OnDragMoveEvent(TextTranslator__TranslatorConfigureDialog* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->setTextTranslator__TranslatorConfigureDialog_DragMoveEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureDialog::TextTranslator__TranslatorConfigureDialog_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureDialog_DragLeaveEvent(TextTranslator__TranslatorConfigureDialog* self, QDragLeaveEvent* event) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->dragLeaveEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureDialog*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureDialog_SuperDragLeaveEvent(TextTranslator__TranslatorConfigureDialog* self, QDragLeaveEvent* event) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->setTextTranslator__TranslatorConfigureDialog_DragLeaveEvent_IsBase(true);
        vtexttranslatortranslatorconfiguredialog->dragLeaveEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureDialog*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureDialog_OnDragLeaveEvent(TextTranslator__TranslatorConfigureDialog* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->setTextTranslator__TranslatorConfigureDialog_DragLeaveEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureDialog::TextTranslator__TranslatorConfigureDialog_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureDialog_DropEvent(TextTranslator__TranslatorConfigureDialog* self, QDropEvent* event) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->dropEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureDialog*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureDialog_SuperDropEvent(TextTranslator__TranslatorConfigureDialog* self, QDropEvent* event) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->setTextTranslator__TranslatorConfigureDialog_DropEvent_IsBase(true);
        vtexttranslatortranslatorconfiguredialog->dropEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureDialog*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureDialog_OnDropEvent(TextTranslator__TranslatorConfigureDialog* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->setTextTranslator__TranslatorConfigureDialog_DropEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureDialog::TextTranslator__TranslatorConfigureDialog_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureDialog_HideEvent(TextTranslator__TranslatorConfigureDialog* self, QHideEvent* event) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->hideEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureDialog*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureDialog_SuperHideEvent(TextTranslator__TranslatorConfigureDialog* self, QHideEvent* event) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->setTextTranslator__TranslatorConfigureDialog_HideEvent_IsBase(true);
        vtexttranslatortranslatorconfiguredialog->hideEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureDialog*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureDialog_OnHideEvent(TextTranslator__TranslatorConfigureDialog* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->setTextTranslator__TranslatorConfigureDialog_HideEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureDialog::TextTranslator__TranslatorConfigureDialog_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextTranslator__TranslatorConfigureDialog_NativeEvent(TextTranslator__TranslatorConfigureDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        return vtexttranslatortranslatorconfiguredialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualTextTranslatorTranslatorConfigureDialog*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool TextTranslator__TranslatorConfigureDialog_SuperNativeEvent(TextTranslator__TranslatorConfigureDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->setTextTranslator__TranslatorConfigureDialog_NativeEvent_IsBase(true);
        return vtexttranslatortranslatorconfiguredialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualTextTranslatorTranslatorConfigureDialog*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureDialog_OnNativeEvent(TextTranslator__TranslatorConfigureDialog* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->setTextTranslator__TranslatorConfigureDialog_NativeEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureDialog::TextTranslator__TranslatorConfigureDialog_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureDialog_ChangeEvent(TextTranslator__TranslatorConfigureDialog* self, QEvent* param1) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->changeEvent(param1);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureDialog*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureDialog_SuperChangeEvent(TextTranslator__TranslatorConfigureDialog* self, QEvent* param1) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->setTextTranslator__TranslatorConfigureDialog_ChangeEvent_IsBase(true);
        vtexttranslatortranslatorconfiguredialog->changeEvent(param1);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureDialog*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureDialog_OnChangeEvent(TextTranslator__TranslatorConfigureDialog* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->setTextTranslator__TranslatorConfigureDialog_ChangeEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureDialog::TextTranslator__TranslatorConfigureDialog_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int TextTranslator__TranslatorConfigureDialog_Metric(const TextTranslator__TranslatorConfigureDialog* self, int param1) {
    auto* vtexttranslatortranslatorconfiguredialog = const_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureDialog*>(self));
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        return vtexttranslatortranslatorconfiguredialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualTextTranslatorTranslatorConfigureDialog*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int TextTranslator__TranslatorConfigureDialog_SuperMetric(const TextTranslator__TranslatorConfigureDialog* self, int param1) {
    auto* vtexttranslatortranslatorconfiguredialog = const_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureDialog*>(self));
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->setTextTranslator__TranslatorConfigureDialog_Metric_IsBase(true);
        return vtexttranslatortranslatorconfiguredialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualTextTranslatorTranslatorConfigureDialog*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureDialog_OnMetric(const TextTranslator__TranslatorConfigureDialog* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfiguredialog = const_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureDialog*>(self));
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->setTextTranslator__TranslatorConfigureDialog_Metric_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureDialog::TextTranslator__TranslatorConfigureDialog_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureDialog_InitPainter(const TextTranslator__TranslatorConfigureDialog* self, QPainter* painter) {
    auto* vtexttranslatortranslatorconfiguredialog = const_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureDialog*>(self));
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->initPainter(painter);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureDialog*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureDialog_SuperInitPainter(const TextTranslator__TranslatorConfigureDialog* self, QPainter* painter) {
    auto* vtexttranslatortranslatorconfiguredialog = const_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureDialog*>(self));
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->setTextTranslator__TranslatorConfigureDialog_InitPainter_IsBase(true);
        vtexttranslatortranslatorconfiguredialog->initPainter(painter);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureDialog*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureDialog_OnInitPainter(const TextTranslator__TranslatorConfigureDialog* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfiguredialog = const_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureDialog*>(self));
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->setTextTranslator__TranslatorConfigureDialog_InitPainter_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureDialog::TextTranslator__TranslatorConfigureDialog_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* TextTranslator__TranslatorConfigureDialog_Redirected(const TextTranslator__TranslatorConfigureDialog* self, QPoint* offset) {
    auto* vtexttranslatortranslatorconfiguredialog = const_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureDialog*>(self));
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        return vtexttranslatortranslatorconfiguredialog->redirected(offset);
    } else {
        return ((VirtualTextTranslatorTranslatorConfigureDialog*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* TextTranslator__TranslatorConfigureDialog_SuperRedirected(const TextTranslator__TranslatorConfigureDialog* self, QPoint* offset) {
    auto* vtexttranslatortranslatorconfiguredialog = const_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureDialog*>(self));
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->setTextTranslator__TranslatorConfigureDialog_Redirected_IsBase(true);
        return vtexttranslatortranslatorconfiguredialog->redirected(offset);
    } else {
        return ((VirtualTextTranslatorTranslatorConfigureDialog*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureDialog_OnRedirected(const TextTranslator__TranslatorConfigureDialog* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfiguredialog = const_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureDialog*>(self));
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->setTextTranslator__TranslatorConfigureDialog_Redirected_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureDialog::TextTranslator__TranslatorConfigureDialog_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* TextTranslator__TranslatorConfigureDialog_SharedPainter(const TextTranslator__TranslatorConfigureDialog* self) {
    auto* vtexttranslatortranslatorconfiguredialog = const_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureDialog*>(self));
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        return vtexttranslatortranslatorconfiguredialog->sharedPainter();
    } else {
        return ((VirtualTextTranslatorTranslatorConfigureDialog*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* TextTranslator__TranslatorConfigureDialog_SuperSharedPainter(const TextTranslator__TranslatorConfigureDialog* self) {
    auto* vtexttranslatortranslatorconfiguredialog = const_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureDialog*>(self));
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->setTextTranslator__TranslatorConfigureDialog_SharedPainter_IsBase(true);
        return vtexttranslatortranslatorconfiguredialog->sharedPainter();
    } else {
        return ((VirtualTextTranslatorTranslatorConfigureDialog*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureDialog_OnSharedPainter(const TextTranslator__TranslatorConfigureDialog* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfiguredialog = const_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureDialog*>(self));
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->setTextTranslator__TranslatorConfigureDialog_SharedPainter_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureDialog::TextTranslator__TranslatorConfigureDialog_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureDialog_InputMethodEvent(TextTranslator__TranslatorConfigureDialog* self, QInputMethodEvent* param1) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->inputMethodEvent(param1);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureDialog*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureDialog_SuperInputMethodEvent(TextTranslator__TranslatorConfigureDialog* self, QInputMethodEvent* param1) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->setTextTranslator__TranslatorConfigureDialog_InputMethodEvent_IsBase(true);
        vtexttranslatortranslatorconfiguredialog->inputMethodEvent(param1);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureDialog*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureDialog_OnInputMethodEvent(TextTranslator__TranslatorConfigureDialog* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->setTextTranslator__TranslatorConfigureDialog_InputMethodEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureDialog::TextTranslator__TranslatorConfigureDialog_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* TextTranslator__TranslatorConfigureDialog_InputMethodQuery(const TextTranslator__TranslatorConfigureDialog* self, int param1) {
    auto* vtexttranslatortranslatorconfiguredialog = const_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureDialog*>(self));
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        return new QVariant(vtexttranslatortranslatorconfiguredialog->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualTextTranslatorTranslatorConfigureDialog*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* TextTranslator__TranslatorConfigureDialog_SuperInputMethodQuery(const TextTranslator__TranslatorConfigureDialog* self, int param1) {
    auto* vtexttranslatortranslatorconfiguredialog = const_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureDialog*>(self));
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->setTextTranslator__TranslatorConfigureDialog_InputMethodQuery_IsBase(true);
        return new QVariant(vtexttranslatortranslatorconfiguredialog->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualTextTranslatorTranslatorConfigureDialog*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureDialog_OnInputMethodQuery(const TextTranslator__TranslatorConfigureDialog* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfiguredialog = const_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureDialog*>(self));
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->setTextTranslator__TranslatorConfigureDialog_InputMethodQuery_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureDialog::TextTranslator__TranslatorConfigureDialog_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextTranslator__TranslatorConfigureDialog_FocusNextPrevChild(TextTranslator__TranslatorConfigureDialog* self, bool next) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        return vtexttranslatortranslatorconfiguredialog->focusNextPrevChild(next);
    } else {
        return ((VirtualTextTranslatorTranslatorConfigureDialog*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool TextTranslator__TranslatorConfigureDialog_SuperFocusNextPrevChild(TextTranslator__TranslatorConfigureDialog* self, bool next) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->setTextTranslator__TranslatorConfigureDialog_FocusNextPrevChild_IsBase(true);
        return vtexttranslatortranslatorconfiguredialog->focusNextPrevChild(next);
    } else {
        return ((VirtualTextTranslatorTranslatorConfigureDialog*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureDialog_OnFocusNextPrevChild(TextTranslator__TranslatorConfigureDialog* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->setTextTranslator__TranslatorConfigureDialog_FocusNextPrevChild_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureDialog::TextTranslator__TranslatorConfigureDialog_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureDialog_TimerEvent(TextTranslator__TranslatorConfigureDialog* self, QTimerEvent* event) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->timerEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureDialog*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureDialog_SuperTimerEvent(TextTranslator__TranslatorConfigureDialog* self, QTimerEvent* event) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->setTextTranslator__TranslatorConfigureDialog_TimerEvent_IsBase(true);
        vtexttranslatortranslatorconfiguredialog->timerEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureDialog*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureDialog_OnTimerEvent(TextTranslator__TranslatorConfigureDialog* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->setTextTranslator__TranslatorConfigureDialog_TimerEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureDialog::TextTranslator__TranslatorConfigureDialog_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureDialog_ChildEvent(TextTranslator__TranslatorConfigureDialog* self, QChildEvent* event) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->childEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureDialog*)self)->childEvent(event);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureDialog_SuperChildEvent(TextTranslator__TranslatorConfigureDialog* self, QChildEvent* event) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->setTextTranslator__TranslatorConfigureDialog_ChildEvent_IsBase(true);
        vtexttranslatortranslatorconfiguredialog->childEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureDialog*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureDialog_OnChildEvent(TextTranslator__TranslatorConfigureDialog* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->setTextTranslator__TranslatorConfigureDialog_ChildEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureDialog::TextTranslator__TranslatorConfigureDialog_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureDialog_CustomEvent(TextTranslator__TranslatorConfigureDialog* self, QEvent* event) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->customEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureDialog*)self)->customEvent(event);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureDialog_SuperCustomEvent(TextTranslator__TranslatorConfigureDialog* self, QEvent* event) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->setTextTranslator__TranslatorConfigureDialog_CustomEvent_IsBase(true);
        vtexttranslatortranslatorconfiguredialog->customEvent(event);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureDialog*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureDialog_OnCustomEvent(TextTranslator__TranslatorConfigureDialog* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->setTextTranslator__TranslatorConfigureDialog_CustomEvent_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureDialog::TextTranslator__TranslatorConfigureDialog_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureDialog_ConnectNotify(TextTranslator__TranslatorConfigureDialog* self, const QMetaMethod* signal) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->connectNotify(*signal);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureDialog*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureDialog_SuperConnectNotify(TextTranslator__TranslatorConfigureDialog* self, const QMetaMethod* signal) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->setTextTranslator__TranslatorConfigureDialog_ConnectNotify_IsBase(true);
        vtexttranslatortranslatorconfiguredialog->connectNotify(*signal);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureDialog*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureDialog_OnConnectNotify(TextTranslator__TranslatorConfigureDialog* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->setTextTranslator__TranslatorConfigureDialog_ConnectNotify_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureDialog::TextTranslator__TranslatorConfigureDialog_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureDialog_DisconnectNotify(TextTranslator__TranslatorConfigureDialog* self, const QMetaMethod* signal) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->disconnectNotify(*signal);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureDialog*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureDialog_SuperDisconnectNotify(TextTranslator__TranslatorConfigureDialog* self, const QMetaMethod* signal) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->setTextTranslator__TranslatorConfigureDialog_DisconnectNotify_IsBase(true);
        vtexttranslatortranslatorconfiguredialog->disconnectNotify(*signal);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureDialog*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureDialog_OnDisconnectNotify(TextTranslator__TranslatorConfigureDialog* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->setTextTranslator__TranslatorConfigureDialog_DisconnectNotify_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureDialog::TextTranslator__TranslatorConfigureDialog_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureDialog_AdjustPosition(TextTranslator__TranslatorConfigureDialog* self, QWidget* param1) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->adjustPosition(param1);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureDialog*)self)->adjustPosition(param1);
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureDialog_SuperAdjustPosition(TextTranslator__TranslatorConfigureDialog* self, QWidget* param1) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->setTextTranslator__TranslatorConfigureDialog_AdjustPosition_IsBase(true);
        vtexttranslatortranslatorconfiguredialog->adjustPosition(param1);
    } else {
        ((VirtualTextTranslatorTranslatorConfigureDialog*)self)->adjustPosition(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureDialog_OnAdjustPosition(TextTranslator__TranslatorConfigureDialog* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->setTextTranslator__TranslatorConfigureDialog_AdjustPosition_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureDialog::TextTranslator__TranslatorConfigureDialog_AdjustPosition_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureDialog_UpdateMicroFocus(TextTranslator__TranslatorConfigureDialog* self) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->updateMicroFocus();
    } else {
        ((VirtualTextTranslatorTranslatorConfigureDialog*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureDialog_SuperUpdateMicroFocus(TextTranslator__TranslatorConfigureDialog* self) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->setTextTranslator__TranslatorConfigureDialog_UpdateMicroFocus_IsBase(true);
        vtexttranslatortranslatorconfiguredialog->updateMicroFocus();
    } else {
        ((VirtualTextTranslatorTranslatorConfigureDialog*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureDialog_OnUpdateMicroFocus(TextTranslator__TranslatorConfigureDialog* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->setTextTranslator__TranslatorConfigureDialog_UpdateMicroFocus_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureDialog::TextTranslator__TranslatorConfigureDialog_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureDialog_Create(TextTranslator__TranslatorConfigureDialog* self) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->create();
    } else {
        ((VirtualTextTranslatorTranslatorConfigureDialog*)self)->create();
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureDialog_SuperCreate(TextTranslator__TranslatorConfigureDialog* self) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->setTextTranslator__TranslatorConfigureDialog_Create_IsBase(true);
        vtexttranslatortranslatorconfiguredialog->create();
    } else {
        ((VirtualTextTranslatorTranslatorConfigureDialog*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureDialog_OnCreate(TextTranslator__TranslatorConfigureDialog* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->setTextTranslator__TranslatorConfigureDialog_Create_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureDialog::TextTranslator__TranslatorConfigureDialog_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureDialog_Destroy(TextTranslator__TranslatorConfigureDialog* self) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->destroy();
    } else {
        ((VirtualTextTranslatorTranslatorConfigureDialog*)self)->destroy();
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureDialog_SuperDestroy(TextTranslator__TranslatorConfigureDialog* self) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->setTextTranslator__TranslatorConfigureDialog_Destroy_IsBase(true);
        vtexttranslatortranslatorconfiguredialog->destroy();
    } else {
        ((VirtualTextTranslatorTranslatorConfigureDialog*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureDialog_OnDestroy(TextTranslator__TranslatorConfigureDialog* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->setTextTranslator__TranslatorConfigureDialog_Destroy_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureDialog::TextTranslator__TranslatorConfigureDialog_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextTranslator__TranslatorConfigureDialog_FocusNextChild(TextTranslator__TranslatorConfigureDialog* self) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        return vtexttranslatortranslatorconfiguredialog->focusNextChild();
    } else {
        return ((VirtualTextTranslatorTranslatorConfigureDialog*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool TextTranslator__TranslatorConfigureDialog_SuperFocusNextChild(TextTranslator__TranslatorConfigureDialog* self) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->setTextTranslator__TranslatorConfigureDialog_FocusNextChild_IsBase(true);
        return vtexttranslatortranslatorconfiguredialog->focusNextChild();
    } else {
        return ((VirtualTextTranslatorTranslatorConfigureDialog*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureDialog_OnFocusNextChild(TextTranslator__TranslatorConfigureDialog* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->setTextTranslator__TranslatorConfigureDialog_FocusNextChild_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureDialog::TextTranslator__TranslatorConfigureDialog_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextTranslator__TranslatorConfigureDialog_FocusPreviousChild(TextTranslator__TranslatorConfigureDialog* self) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        return vtexttranslatortranslatorconfiguredialog->focusPreviousChild();
    } else {
        return ((VirtualTextTranslatorTranslatorConfigureDialog*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool TextTranslator__TranslatorConfigureDialog_SuperFocusPreviousChild(TextTranslator__TranslatorConfigureDialog* self) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->setTextTranslator__TranslatorConfigureDialog_FocusPreviousChild_IsBase(true);
        return vtexttranslatortranslatorconfiguredialog->focusPreviousChild();
    } else {
        return ((VirtualTextTranslatorTranslatorConfigureDialog*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureDialog_OnFocusPreviousChild(TextTranslator__TranslatorConfigureDialog* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->setTextTranslator__TranslatorConfigureDialog_FocusPreviousChild_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureDialog::TextTranslator__TranslatorConfigureDialog_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* TextTranslator__TranslatorConfigureDialog_Sender(const TextTranslator__TranslatorConfigureDialog* self) {
    auto* vtexttranslatortranslatorconfiguredialog = const_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureDialog*>(self));
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        return vtexttranslatortranslatorconfiguredialog->sender();
    } else {
        return ((VirtualTextTranslatorTranslatorConfigureDialog*)self)->sender();
    }
}

// Base class handler implementation
QObject* TextTranslator__TranslatorConfigureDialog_SuperSender(const TextTranslator__TranslatorConfigureDialog* self) {
    auto* vtexttranslatortranslatorconfiguredialog = const_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureDialog*>(self));
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->setTextTranslator__TranslatorConfigureDialog_Sender_IsBase(true);
        return vtexttranslatortranslatorconfiguredialog->sender();
    } else {
        return ((VirtualTextTranslatorTranslatorConfigureDialog*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureDialog_OnSender(const TextTranslator__TranslatorConfigureDialog* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfiguredialog = const_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureDialog*>(self));
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->setTextTranslator__TranslatorConfigureDialog_Sender_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureDialog::TextTranslator__TranslatorConfigureDialog_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int TextTranslator__TranslatorConfigureDialog_SenderSignalIndex(const TextTranslator__TranslatorConfigureDialog* self) {
    auto* vtexttranslatortranslatorconfiguredialog = const_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureDialog*>(self));
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        return vtexttranslatortranslatorconfiguredialog->senderSignalIndex();
    } else {
        return ((VirtualTextTranslatorTranslatorConfigureDialog*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int TextTranslator__TranslatorConfigureDialog_SuperSenderSignalIndex(const TextTranslator__TranslatorConfigureDialog* self) {
    auto* vtexttranslatortranslatorconfiguredialog = const_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureDialog*>(self));
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->setTextTranslator__TranslatorConfigureDialog_SenderSignalIndex_IsBase(true);
        return vtexttranslatortranslatorconfiguredialog->senderSignalIndex();
    } else {
        return ((VirtualTextTranslatorTranslatorConfigureDialog*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureDialog_OnSenderSignalIndex(const TextTranslator__TranslatorConfigureDialog* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfiguredialog = const_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureDialog*>(self));
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->setTextTranslator__TranslatorConfigureDialog_SenderSignalIndex_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureDialog::TextTranslator__TranslatorConfigureDialog_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int TextTranslator__TranslatorConfigureDialog_Receivers(const TextTranslator__TranslatorConfigureDialog* self, const char* signal) {
    auto* vtexttranslatortranslatorconfiguredialog = const_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureDialog*>(self));
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        return vtexttranslatortranslatorconfiguredialog->receivers(signal);
    } else {
        return ((VirtualTextTranslatorTranslatorConfigureDialog*)self)->receivers(signal);
    }
}

// Base class handler implementation
int TextTranslator__TranslatorConfigureDialog_SuperReceivers(const TextTranslator__TranslatorConfigureDialog* self, const char* signal) {
    auto* vtexttranslatortranslatorconfiguredialog = const_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureDialog*>(self));
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->setTextTranslator__TranslatorConfigureDialog_Receivers_IsBase(true);
        return vtexttranslatortranslatorconfiguredialog->receivers(signal);
    } else {
        return ((VirtualTextTranslatorTranslatorConfigureDialog*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureDialog_OnReceivers(const TextTranslator__TranslatorConfigureDialog* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfiguredialog = const_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureDialog*>(self));
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->setTextTranslator__TranslatorConfigureDialog_Receivers_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureDialog::TextTranslator__TranslatorConfigureDialog_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextTranslator__TranslatorConfigureDialog_IsSignalConnected(const TextTranslator__TranslatorConfigureDialog* self, const QMetaMethod* signal) {
    auto* vtexttranslatortranslatorconfiguredialog = const_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureDialog*>(self));
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        return vtexttranslatortranslatorconfiguredialog->isSignalConnected(*signal);
    } else {
        return ((VirtualTextTranslatorTranslatorConfigureDialog*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool TextTranslator__TranslatorConfigureDialog_SuperIsSignalConnected(const TextTranslator__TranslatorConfigureDialog* self, const QMetaMethod* signal) {
    auto* vtexttranslatortranslatorconfiguredialog = const_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureDialog*>(self));
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->setTextTranslator__TranslatorConfigureDialog_IsSignalConnected_IsBase(true);
        return vtexttranslatortranslatorconfiguredialog->isSignalConnected(*signal);
    } else {
        return ((VirtualTextTranslatorTranslatorConfigureDialog*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureDialog_OnIsSignalConnected(const TextTranslator__TranslatorConfigureDialog* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfiguredialog = const_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureDialog*>(self));
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->setTextTranslator__TranslatorConfigureDialog_IsSignalConnected_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureDialog::TextTranslator__TranslatorConfigureDialog_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double TextTranslator__TranslatorConfigureDialog_GetDecodedMetricF(const TextTranslator__TranslatorConfigureDialog* self, int metricA, int metricB) {
    auto* vtexttranslatortranslatorconfiguredialog = const_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureDialog*>(self));
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        return vtexttranslatortranslatorconfiguredialog->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualTextTranslatorTranslatorConfigureDialog*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double TextTranslator__TranslatorConfigureDialog_SuperGetDecodedMetricF(const TextTranslator__TranslatorConfigureDialog* self, int metricA, int metricB) {
    auto* vtexttranslatortranslatorconfiguredialog = const_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureDialog*>(self));
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->setTextTranslator__TranslatorConfigureDialog_GetDecodedMetricF_IsBase(true);
        return vtexttranslatortranslatorconfiguredialog->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualTextTranslatorTranslatorConfigureDialog*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureDialog_OnGetDecodedMetricF(const TextTranslator__TranslatorConfigureDialog* self, intptr_t slot) {
    auto* vtexttranslatortranslatorconfiguredialog = const_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureDialog*>(self));
    if (vtexttranslatortranslatorconfiguredialog && vtexttranslatortranslatorconfiguredialog->isVirtualTextTranslatorTranslatorConfigureDialog) {
        vtexttranslatortranslatorconfiguredialog->setTextTranslator__TranslatorConfigureDialog_GetDecodedMetricF_Callback(reinterpret_cast<VirtualTextTranslatorTranslatorConfigureDialog::TextTranslator__TranslatorConfigureDialog_GetDecodedMetricF_Callback>(slot));
    }
}

void TextTranslator__TranslatorConfigureDialog_Delete(TextTranslator__TranslatorConfigureDialog* self) {
    delete self;
}
