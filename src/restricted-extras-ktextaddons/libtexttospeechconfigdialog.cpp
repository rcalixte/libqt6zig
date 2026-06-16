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
#define WORKAROUND_INNER_CLASS_DEFINITION_TextEditTextToSpeech__TextToSpeechConfigDialog
#include <texttospeechconfigdialog.h>
#include "libtexttospeechconfigdialog.h"
#include "libtexttospeechconfigdialog.hxx"

TextEditTextToSpeech__TextToSpeechConfigDialog* TextEditTextToSpeech__TextToSpeechConfigDialog_new(QWidget* parent) {
    return new VirtualTextEditTextToSpeechTextToSpeechConfigDialog(parent);
}

TextEditTextToSpeech__TextToSpeechConfigDialog* TextEditTextToSpeech__TextToSpeechConfigDialog_new2() {
    return new VirtualTextEditTextToSpeechTextToSpeechConfigDialog();
}

QMetaObject* TextEditTextToSpeech__TextToSpeechConfigDialog_MetaObject(const TextEditTextToSpeech__TextToSpeechConfigDialog* self) {
    return (QMetaObject*)self->metaObject();
}

void* TextEditTextToSpeech__TextToSpeechConfigDialog_Metacast(TextEditTextToSpeech__TextToSpeechConfigDialog* self, const char* param1) {
    return self->qt_metacast(param1);
}

int TextEditTextToSpeech__TextToSpeechConfigDialog_Metacall(TextEditTextToSpeech__TextToSpeechConfigDialog* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Base class handler implementation
QMetaObject* TextEditTextToSpeech__TextToSpeechConfigDialog_SuperMetaObject(const TextEditTextToSpeech__TextToSpeechConfigDialog* self) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self));
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->setTextEditTextToSpeech__TextToSpeechConfigDialog_MetaObject_IsBase(true);
        return (QMetaObject*)vtextedittexttospeechtexttospeechconfigdialog->metaObject();
    } else {
        return (QMetaObject*)self->TextEditTextToSpeech::TextToSpeechConfigDialog::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_OnMetaObject(const TextEditTextToSpeech__TextToSpeechConfigDialog* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self));
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->setTextEditTextToSpeech__TextToSpeechConfigDialog_MetaObject_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog::TextEditTextToSpeech__TextToSpeechConfigDialog_MetaObject_Callback>(slot));
    }
}

// Base class handler implementation
void* TextEditTextToSpeech__TextToSpeechConfigDialog_SuperMetacast(TextEditTextToSpeech__TextToSpeechConfigDialog* self, const char* param1) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->setTextEditTextToSpeech__TextToSpeechConfigDialog_Metacast_IsBase(true);
        return vtextedittexttospeechtexttospeechconfigdialog->qt_metacast(param1);
    } else {
        return self->TextEditTextToSpeech::TextToSpeechConfigDialog::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_OnMetacast(TextEditTextToSpeech__TextToSpeechConfigDialog* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->setTextEditTextToSpeech__TextToSpeechConfigDialog_Metacast_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog::TextEditTextToSpeech__TextToSpeechConfigDialog_Metacast_Callback>(slot));
    }
}

// Base class handler implementation
int TextEditTextToSpeech__TextToSpeechConfigDialog_SuperMetacall(TextEditTextToSpeech__TextToSpeechConfigDialog* self, int param1, int param2, void** param3) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->setTextEditTextToSpeech__TextToSpeechConfigDialog_Metacall_IsBase(true);
        return vtextedittexttospeechtexttospeechconfigdialog->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->TextEditTextToSpeech::TextToSpeechConfigDialog::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_OnMetacall(TextEditTextToSpeech__TextToSpeechConfigDialog* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->setTextEditTextToSpeech__TextToSpeechConfigDialog_Metacall_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog::TextEditTextToSpeech__TextToSpeechConfigDialog_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_SetVisible(TextEditTextToSpeech__TextToSpeechConfigDialog* self, bool visible) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->setVisible(visible);
    } else {
        self->TextEditTextToSpeech::TextToSpeechConfigDialog::setVisible(visible);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_SuperSetVisible(TextEditTextToSpeech__TextToSpeechConfigDialog* self, bool visible) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->setTextEditTextToSpeech__TextToSpeechConfigDialog_SetVisible_IsBase(true);
        vtextedittexttospeechtexttospeechconfigdialog->setVisible(visible);
    } else {
        self->TextEditTextToSpeech::TextToSpeechConfigDialog::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_OnSetVisible(TextEditTextToSpeech__TextToSpeechConfigDialog* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->setTextEditTextToSpeech__TextToSpeechConfigDialog_SetVisible_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog::TextEditTextToSpeech__TextToSpeechConfigDialog_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* TextEditTextToSpeech__TextToSpeechConfigDialog_SizeHint(const TextEditTextToSpeech__TextToSpeechConfigDialog* self) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self));
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        return new QSize(vtextedittexttospeechtexttospeechconfigdialog->sizeHint());
    } else {
        return new QSize(((VirtualTextEditTextToSpeechTextToSpeechConfigDialog*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* TextEditTextToSpeech__TextToSpeechConfigDialog_SuperSizeHint(const TextEditTextToSpeech__TextToSpeechConfigDialog* self) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self));
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->setTextEditTextToSpeech__TextToSpeechConfigDialog_SizeHint_IsBase(true);
        return new QSize(vtextedittexttospeechtexttospeechconfigdialog->sizeHint());
    } else {
        return new QSize(((VirtualTextEditTextToSpeechTextToSpeechConfigDialog*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_OnSizeHint(const TextEditTextToSpeech__TextToSpeechConfigDialog* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self));
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->setTextEditTextToSpeech__TextToSpeechConfigDialog_SizeHint_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog::TextEditTextToSpeech__TextToSpeechConfigDialog_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* TextEditTextToSpeech__TextToSpeechConfigDialog_MinimumSizeHint(const TextEditTextToSpeech__TextToSpeechConfigDialog* self) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self));
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        return new QSize(vtextedittexttospeechtexttospeechconfigdialog->minimumSizeHint());
    } else {
        return new QSize(((VirtualTextEditTextToSpeechTextToSpeechConfigDialog*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* TextEditTextToSpeech__TextToSpeechConfigDialog_SuperMinimumSizeHint(const TextEditTextToSpeech__TextToSpeechConfigDialog* self) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self));
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->setTextEditTextToSpeech__TextToSpeechConfigDialog_MinimumSizeHint_IsBase(true);
        return new QSize(vtextedittexttospeechtexttospeechconfigdialog->minimumSizeHint());
    } else {
        return new QSize(((VirtualTextEditTextToSpeechTextToSpeechConfigDialog*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_OnMinimumSizeHint(const TextEditTextToSpeech__TextToSpeechConfigDialog* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self));
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->setTextEditTextToSpeech__TextToSpeechConfigDialog_MinimumSizeHint_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog::TextEditTextToSpeech__TextToSpeechConfigDialog_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_Open(TextEditTextToSpeech__TextToSpeechConfigDialog* self) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->open();
    } else {
        self->TextEditTextToSpeech::TextToSpeechConfigDialog::open();
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_SuperOpen(TextEditTextToSpeech__TextToSpeechConfigDialog* self) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->setTextEditTextToSpeech__TextToSpeechConfigDialog_Open_IsBase(true);
        vtextedittexttospeechtexttospeechconfigdialog->open();
    } else {
        self->TextEditTextToSpeech::TextToSpeechConfigDialog::open();
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_OnOpen(TextEditTextToSpeech__TextToSpeechConfigDialog* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->setTextEditTextToSpeech__TextToSpeechConfigDialog_Open_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog::TextEditTextToSpeech__TextToSpeechConfigDialog_Open_Callback>(slot));
    }
}

// Derived class handler implementation
int TextEditTextToSpeech__TextToSpeechConfigDialog_Exec(TextEditTextToSpeech__TextToSpeechConfigDialog* self) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        return vtextedittexttospeechtexttospeechconfigdialog->exec();
    } else {
        return self->TextEditTextToSpeech::TextToSpeechConfigDialog::exec();
    }
}

// Base class handler implementation
int TextEditTextToSpeech__TextToSpeechConfigDialog_SuperExec(TextEditTextToSpeech__TextToSpeechConfigDialog* self) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->setTextEditTextToSpeech__TextToSpeechConfigDialog_Exec_IsBase(true);
        return vtextedittexttospeechtexttospeechconfigdialog->exec();
    } else {
        return self->TextEditTextToSpeech::TextToSpeechConfigDialog::exec();
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_OnExec(TextEditTextToSpeech__TextToSpeechConfigDialog* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->setTextEditTextToSpeech__TextToSpeechConfigDialog_Exec_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog::TextEditTextToSpeech__TextToSpeechConfigDialog_Exec_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_Done(TextEditTextToSpeech__TextToSpeechConfigDialog* self, int param1) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->done(static_cast<int>(param1));
    } else {
        self->TextEditTextToSpeech::TextToSpeechConfigDialog::done(static_cast<int>(param1));
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_SuperDone(TextEditTextToSpeech__TextToSpeechConfigDialog* self, int param1) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->setTextEditTextToSpeech__TextToSpeechConfigDialog_Done_IsBase(true);
        vtextedittexttospeechtexttospeechconfigdialog->done(static_cast<int>(param1));
    } else {
        self->TextEditTextToSpeech::TextToSpeechConfigDialog::done(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_OnDone(TextEditTextToSpeech__TextToSpeechConfigDialog* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->setTextEditTextToSpeech__TextToSpeechConfigDialog_Done_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog::TextEditTextToSpeech__TextToSpeechConfigDialog_Done_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_Accept(TextEditTextToSpeech__TextToSpeechConfigDialog* self) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->accept();
    } else {
        self->TextEditTextToSpeech::TextToSpeechConfigDialog::accept();
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_SuperAccept(TextEditTextToSpeech__TextToSpeechConfigDialog* self) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->setTextEditTextToSpeech__TextToSpeechConfigDialog_Accept_IsBase(true);
        vtextedittexttospeechtexttospeechconfigdialog->accept();
    } else {
        self->TextEditTextToSpeech::TextToSpeechConfigDialog::accept();
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_OnAccept(TextEditTextToSpeech__TextToSpeechConfigDialog* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->setTextEditTextToSpeech__TextToSpeechConfigDialog_Accept_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog::TextEditTextToSpeech__TextToSpeechConfigDialog_Accept_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_Reject(TextEditTextToSpeech__TextToSpeechConfigDialog* self) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->reject();
    } else {
        self->TextEditTextToSpeech::TextToSpeechConfigDialog::reject();
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_SuperReject(TextEditTextToSpeech__TextToSpeechConfigDialog* self) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->setTextEditTextToSpeech__TextToSpeechConfigDialog_Reject_IsBase(true);
        vtextedittexttospeechtexttospeechconfigdialog->reject();
    } else {
        self->TextEditTextToSpeech::TextToSpeechConfigDialog::reject();
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_OnReject(TextEditTextToSpeech__TextToSpeechConfigDialog* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->setTextEditTextToSpeech__TextToSpeechConfigDialog_Reject_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog::TextEditTextToSpeech__TextToSpeechConfigDialog_Reject_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_KeyPressEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, QKeyEvent* param1) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->keyPressEvent(param1);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigDialog*)self)->keyPressEvent(param1);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_SuperKeyPressEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, QKeyEvent* param1) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->setTextEditTextToSpeech__TextToSpeechConfigDialog_KeyPressEvent_IsBase(true);
        vtextedittexttospeechtexttospeechconfigdialog->keyPressEvent(param1);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigDialog*)self)->keyPressEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_OnKeyPressEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->setTextEditTextToSpeech__TextToSpeechConfigDialog_KeyPressEvent_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog::TextEditTextToSpeech__TextToSpeechConfigDialog_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_CloseEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, QCloseEvent* param1) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->closeEvent(param1);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigDialog*)self)->closeEvent(param1);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_SuperCloseEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, QCloseEvent* param1) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->setTextEditTextToSpeech__TextToSpeechConfigDialog_CloseEvent_IsBase(true);
        vtextedittexttospeechtexttospeechconfigdialog->closeEvent(param1);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigDialog*)self)->closeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_OnCloseEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->setTextEditTextToSpeech__TextToSpeechConfigDialog_CloseEvent_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog::TextEditTextToSpeech__TextToSpeechConfigDialog_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_ShowEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, QShowEvent* param1) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->showEvent(param1);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigDialog*)self)->showEvent(param1);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_SuperShowEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, QShowEvent* param1) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->setTextEditTextToSpeech__TextToSpeechConfigDialog_ShowEvent_IsBase(true);
        vtextedittexttospeechtexttospeechconfigdialog->showEvent(param1);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigDialog*)self)->showEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_OnShowEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->setTextEditTextToSpeech__TextToSpeechConfigDialog_ShowEvent_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog::TextEditTextToSpeech__TextToSpeechConfigDialog_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_ResizeEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, QResizeEvent* param1) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->resizeEvent(param1);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigDialog*)self)->resizeEvent(param1);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_SuperResizeEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, QResizeEvent* param1) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->setTextEditTextToSpeech__TextToSpeechConfigDialog_ResizeEvent_IsBase(true);
        vtextedittexttospeechtexttospeechconfigdialog->resizeEvent(param1);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigDialog*)self)->resizeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_OnResizeEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->setTextEditTextToSpeech__TextToSpeechConfigDialog_ResizeEvent_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog::TextEditTextToSpeech__TextToSpeechConfigDialog_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_ContextMenuEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, QContextMenuEvent* param1) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->contextMenuEvent(param1);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigDialog*)self)->contextMenuEvent(param1);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_SuperContextMenuEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, QContextMenuEvent* param1) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->setTextEditTextToSpeech__TextToSpeechConfigDialog_ContextMenuEvent_IsBase(true);
        vtextedittexttospeechtexttospeechconfigdialog->contextMenuEvent(param1);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigDialog*)self)->contextMenuEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_OnContextMenuEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->setTextEditTextToSpeech__TextToSpeechConfigDialog_ContextMenuEvent_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog::TextEditTextToSpeech__TextToSpeechConfigDialog_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextEditTextToSpeech__TextToSpeechConfigDialog_EventFilter(TextEditTextToSpeech__TextToSpeechConfigDialog* self, QObject* param1, QEvent* param2) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        return vtextedittexttospeechtexttospeechconfigdialog->eventFilter(param1, param2);
    } else {
        return ((VirtualTextEditTextToSpeechTextToSpeechConfigDialog*)self)->eventFilter(param1, param2);
    }
}

// Base class handler implementation
bool TextEditTextToSpeech__TextToSpeechConfigDialog_SuperEventFilter(TextEditTextToSpeech__TextToSpeechConfigDialog* self, QObject* param1, QEvent* param2) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->setTextEditTextToSpeech__TextToSpeechConfigDialog_EventFilter_IsBase(true);
        return vtextedittexttospeechtexttospeechconfigdialog->eventFilter(param1, param2);
    } else {
        return ((VirtualTextEditTextToSpeechTextToSpeechConfigDialog*)self)->eventFilter(param1, param2);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_OnEventFilter(TextEditTextToSpeech__TextToSpeechConfigDialog* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->setTextEditTextToSpeech__TextToSpeechConfigDialog_EventFilter_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog::TextEditTextToSpeech__TextToSpeechConfigDialog_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
int TextEditTextToSpeech__TextToSpeechConfigDialog_DevType(const TextEditTextToSpeech__TextToSpeechConfigDialog* self) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self));
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        return vtextedittexttospeechtexttospeechconfigdialog->devType();
    } else {
        return self->TextEditTextToSpeech::TextToSpeechConfigDialog::devType();
    }
}

// Base class handler implementation
int TextEditTextToSpeech__TextToSpeechConfigDialog_SuperDevType(const TextEditTextToSpeech__TextToSpeechConfigDialog* self) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self));
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->setTextEditTextToSpeech__TextToSpeechConfigDialog_DevType_IsBase(true);
        return vtextedittexttospeechtexttospeechconfigdialog->devType();
    } else {
        return self->TextEditTextToSpeech::TextToSpeechConfigDialog::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_OnDevType(const TextEditTextToSpeech__TextToSpeechConfigDialog* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self));
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->setTextEditTextToSpeech__TextToSpeechConfigDialog_DevType_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog::TextEditTextToSpeech__TextToSpeechConfigDialog_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
int TextEditTextToSpeech__TextToSpeechConfigDialog_HeightForWidth(const TextEditTextToSpeech__TextToSpeechConfigDialog* self, int param1) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self));
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        return vtextedittexttospeechtexttospeechconfigdialog->heightForWidth(static_cast<int>(param1));
    } else {
        return self->TextEditTextToSpeech::TextToSpeechConfigDialog::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int TextEditTextToSpeech__TextToSpeechConfigDialog_SuperHeightForWidth(const TextEditTextToSpeech__TextToSpeechConfigDialog* self, int param1) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self));
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->setTextEditTextToSpeech__TextToSpeechConfigDialog_HeightForWidth_IsBase(true);
        return vtextedittexttospeechtexttospeechconfigdialog->heightForWidth(static_cast<int>(param1));
    } else {
        return self->TextEditTextToSpeech::TextToSpeechConfigDialog::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_OnHeightForWidth(const TextEditTextToSpeech__TextToSpeechConfigDialog* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self));
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->setTextEditTextToSpeech__TextToSpeechConfigDialog_HeightForWidth_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog::TextEditTextToSpeech__TextToSpeechConfigDialog_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextEditTextToSpeech__TextToSpeechConfigDialog_HasHeightForWidth(const TextEditTextToSpeech__TextToSpeechConfigDialog* self) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self));
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        return vtextedittexttospeechtexttospeechconfigdialog->hasHeightForWidth();
    } else {
        return self->TextEditTextToSpeech::TextToSpeechConfigDialog::hasHeightForWidth();
    }
}

// Base class handler implementation
bool TextEditTextToSpeech__TextToSpeechConfigDialog_SuperHasHeightForWidth(const TextEditTextToSpeech__TextToSpeechConfigDialog* self) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self));
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->setTextEditTextToSpeech__TextToSpeechConfigDialog_HasHeightForWidth_IsBase(true);
        return vtextedittexttospeechtexttospeechconfigdialog->hasHeightForWidth();
    } else {
        return self->TextEditTextToSpeech::TextToSpeechConfigDialog::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_OnHasHeightForWidth(const TextEditTextToSpeech__TextToSpeechConfigDialog* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self));
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->setTextEditTextToSpeech__TextToSpeechConfigDialog_HasHeightForWidth_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog::TextEditTextToSpeech__TextToSpeechConfigDialog_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* TextEditTextToSpeech__TextToSpeechConfigDialog_PaintEngine(const TextEditTextToSpeech__TextToSpeechConfigDialog* self) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self));
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        return vtextedittexttospeechtexttospeechconfigdialog->paintEngine();
    } else {
        return self->TextEditTextToSpeech::TextToSpeechConfigDialog::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* TextEditTextToSpeech__TextToSpeechConfigDialog_SuperPaintEngine(const TextEditTextToSpeech__TextToSpeechConfigDialog* self) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self));
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->setTextEditTextToSpeech__TextToSpeechConfigDialog_PaintEngine_IsBase(true);
        return vtextedittexttospeechtexttospeechconfigdialog->paintEngine();
    } else {
        return self->TextEditTextToSpeech::TextToSpeechConfigDialog::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_OnPaintEngine(const TextEditTextToSpeech__TextToSpeechConfigDialog* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self));
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->setTextEditTextToSpeech__TextToSpeechConfigDialog_PaintEngine_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog::TextEditTextToSpeech__TextToSpeechConfigDialog_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextEditTextToSpeech__TextToSpeechConfigDialog_Event(TextEditTextToSpeech__TextToSpeechConfigDialog* self, QEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        return vtextedittexttospeechtexttospeechconfigdialog->event(event);
    } else {
        return ((VirtualTextEditTextToSpeechTextToSpeechConfigDialog*)self)->event(event);
    }
}

// Base class handler implementation
bool TextEditTextToSpeech__TextToSpeechConfigDialog_SuperEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, QEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->setTextEditTextToSpeech__TextToSpeechConfigDialog_Event_IsBase(true);
        return vtextedittexttospeechtexttospeechconfigdialog->event(event);
    } else {
        return ((VirtualTextEditTextToSpeechTextToSpeechConfigDialog*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_OnEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->setTextEditTextToSpeech__TextToSpeechConfigDialog_Event_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog::TextEditTextToSpeech__TextToSpeechConfigDialog_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_MousePressEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, QMouseEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->mousePressEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigDialog*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_SuperMousePressEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, QMouseEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->setTextEditTextToSpeech__TextToSpeechConfigDialog_MousePressEvent_IsBase(true);
        vtextedittexttospeechtexttospeechconfigdialog->mousePressEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigDialog*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_OnMousePressEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->setTextEditTextToSpeech__TextToSpeechConfigDialog_MousePressEvent_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog::TextEditTextToSpeech__TextToSpeechConfigDialog_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_MouseReleaseEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, QMouseEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->mouseReleaseEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigDialog*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_SuperMouseReleaseEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, QMouseEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->setTextEditTextToSpeech__TextToSpeechConfigDialog_MouseReleaseEvent_IsBase(true);
        vtextedittexttospeechtexttospeechconfigdialog->mouseReleaseEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigDialog*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_OnMouseReleaseEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->setTextEditTextToSpeech__TextToSpeechConfigDialog_MouseReleaseEvent_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog::TextEditTextToSpeech__TextToSpeechConfigDialog_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_MouseDoubleClickEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, QMouseEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->mouseDoubleClickEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigDialog*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_SuperMouseDoubleClickEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, QMouseEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->setTextEditTextToSpeech__TextToSpeechConfigDialog_MouseDoubleClickEvent_IsBase(true);
        vtextedittexttospeechtexttospeechconfigdialog->mouseDoubleClickEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigDialog*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_OnMouseDoubleClickEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->setTextEditTextToSpeech__TextToSpeechConfigDialog_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog::TextEditTextToSpeech__TextToSpeechConfigDialog_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_MouseMoveEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, QMouseEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->mouseMoveEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigDialog*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_SuperMouseMoveEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, QMouseEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->setTextEditTextToSpeech__TextToSpeechConfigDialog_MouseMoveEvent_IsBase(true);
        vtextedittexttospeechtexttospeechconfigdialog->mouseMoveEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigDialog*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_OnMouseMoveEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->setTextEditTextToSpeech__TextToSpeechConfigDialog_MouseMoveEvent_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog::TextEditTextToSpeech__TextToSpeechConfigDialog_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_WheelEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, QWheelEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->wheelEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigDialog*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_SuperWheelEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, QWheelEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->setTextEditTextToSpeech__TextToSpeechConfigDialog_WheelEvent_IsBase(true);
        vtextedittexttospeechtexttospeechconfigdialog->wheelEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigDialog*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_OnWheelEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->setTextEditTextToSpeech__TextToSpeechConfigDialog_WheelEvent_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog::TextEditTextToSpeech__TextToSpeechConfigDialog_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_KeyReleaseEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, QKeyEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->keyReleaseEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigDialog*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_SuperKeyReleaseEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, QKeyEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->setTextEditTextToSpeech__TextToSpeechConfigDialog_KeyReleaseEvent_IsBase(true);
        vtextedittexttospeechtexttospeechconfigdialog->keyReleaseEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigDialog*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_OnKeyReleaseEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->setTextEditTextToSpeech__TextToSpeechConfigDialog_KeyReleaseEvent_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog::TextEditTextToSpeech__TextToSpeechConfigDialog_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_FocusInEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, QFocusEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->focusInEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigDialog*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_SuperFocusInEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, QFocusEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->setTextEditTextToSpeech__TextToSpeechConfigDialog_FocusInEvent_IsBase(true);
        vtextedittexttospeechtexttospeechconfigdialog->focusInEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigDialog*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_OnFocusInEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->setTextEditTextToSpeech__TextToSpeechConfigDialog_FocusInEvent_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog::TextEditTextToSpeech__TextToSpeechConfigDialog_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_FocusOutEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, QFocusEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->focusOutEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigDialog*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_SuperFocusOutEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, QFocusEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->setTextEditTextToSpeech__TextToSpeechConfigDialog_FocusOutEvent_IsBase(true);
        vtextedittexttospeechtexttospeechconfigdialog->focusOutEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigDialog*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_OnFocusOutEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->setTextEditTextToSpeech__TextToSpeechConfigDialog_FocusOutEvent_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog::TextEditTextToSpeech__TextToSpeechConfigDialog_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_EnterEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, QEnterEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->enterEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigDialog*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_SuperEnterEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, QEnterEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->setTextEditTextToSpeech__TextToSpeechConfigDialog_EnterEvent_IsBase(true);
        vtextedittexttospeechtexttospeechconfigdialog->enterEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigDialog*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_OnEnterEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->setTextEditTextToSpeech__TextToSpeechConfigDialog_EnterEvent_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog::TextEditTextToSpeech__TextToSpeechConfigDialog_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_LeaveEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, QEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->leaveEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigDialog*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_SuperLeaveEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, QEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->setTextEditTextToSpeech__TextToSpeechConfigDialog_LeaveEvent_IsBase(true);
        vtextedittexttospeechtexttospeechconfigdialog->leaveEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigDialog*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_OnLeaveEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->setTextEditTextToSpeech__TextToSpeechConfigDialog_LeaveEvent_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog::TextEditTextToSpeech__TextToSpeechConfigDialog_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_PaintEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, QPaintEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->paintEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigDialog*)self)->paintEvent(event);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_SuperPaintEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, QPaintEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->setTextEditTextToSpeech__TextToSpeechConfigDialog_PaintEvent_IsBase(true);
        vtextedittexttospeechtexttospeechconfigdialog->paintEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigDialog*)self)->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_OnPaintEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->setTextEditTextToSpeech__TextToSpeechConfigDialog_PaintEvent_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog::TextEditTextToSpeech__TextToSpeechConfigDialog_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_MoveEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, QMoveEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->moveEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigDialog*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_SuperMoveEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, QMoveEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->setTextEditTextToSpeech__TextToSpeechConfigDialog_MoveEvent_IsBase(true);
        vtextedittexttospeechtexttospeechconfigdialog->moveEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigDialog*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_OnMoveEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->setTextEditTextToSpeech__TextToSpeechConfigDialog_MoveEvent_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog::TextEditTextToSpeech__TextToSpeechConfigDialog_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_TabletEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, QTabletEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->tabletEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigDialog*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_SuperTabletEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, QTabletEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->setTextEditTextToSpeech__TextToSpeechConfigDialog_TabletEvent_IsBase(true);
        vtextedittexttospeechtexttospeechconfigdialog->tabletEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigDialog*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_OnTabletEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->setTextEditTextToSpeech__TextToSpeechConfigDialog_TabletEvent_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog::TextEditTextToSpeech__TextToSpeechConfigDialog_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_ActionEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, QActionEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->actionEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigDialog*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_SuperActionEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, QActionEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->setTextEditTextToSpeech__TextToSpeechConfigDialog_ActionEvent_IsBase(true);
        vtextedittexttospeechtexttospeechconfigdialog->actionEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigDialog*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_OnActionEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->setTextEditTextToSpeech__TextToSpeechConfigDialog_ActionEvent_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog::TextEditTextToSpeech__TextToSpeechConfigDialog_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_DragEnterEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, QDragEnterEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->dragEnterEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigDialog*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_SuperDragEnterEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, QDragEnterEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->setTextEditTextToSpeech__TextToSpeechConfigDialog_DragEnterEvent_IsBase(true);
        vtextedittexttospeechtexttospeechconfigdialog->dragEnterEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigDialog*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_OnDragEnterEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->setTextEditTextToSpeech__TextToSpeechConfigDialog_DragEnterEvent_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog::TextEditTextToSpeech__TextToSpeechConfigDialog_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_DragMoveEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, QDragMoveEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->dragMoveEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigDialog*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_SuperDragMoveEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, QDragMoveEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->setTextEditTextToSpeech__TextToSpeechConfigDialog_DragMoveEvent_IsBase(true);
        vtextedittexttospeechtexttospeechconfigdialog->dragMoveEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigDialog*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_OnDragMoveEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->setTextEditTextToSpeech__TextToSpeechConfigDialog_DragMoveEvent_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog::TextEditTextToSpeech__TextToSpeechConfigDialog_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_DragLeaveEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, QDragLeaveEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->dragLeaveEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigDialog*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_SuperDragLeaveEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, QDragLeaveEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->setTextEditTextToSpeech__TextToSpeechConfigDialog_DragLeaveEvent_IsBase(true);
        vtextedittexttospeechtexttospeechconfigdialog->dragLeaveEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigDialog*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_OnDragLeaveEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->setTextEditTextToSpeech__TextToSpeechConfigDialog_DragLeaveEvent_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog::TextEditTextToSpeech__TextToSpeechConfigDialog_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_DropEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, QDropEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->dropEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigDialog*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_SuperDropEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, QDropEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->setTextEditTextToSpeech__TextToSpeechConfigDialog_DropEvent_IsBase(true);
        vtextedittexttospeechtexttospeechconfigdialog->dropEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigDialog*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_OnDropEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->setTextEditTextToSpeech__TextToSpeechConfigDialog_DropEvent_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog::TextEditTextToSpeech__TextToSpeechConfigDialog_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_HideEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, QHideEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->hideEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigDialog*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_SuperHideEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, QHideEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->setTextEditTextToSpeech__TextToSpeechConfigDialog_HideEvent_IsBase(true);
        vtextedittexttospeechtexttospeechconfigdialog->hideEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigDialog*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_OnHideEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->setTextEditTextToSpeech__TextToSpeechConfigDialog_HideEvent_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog::TextEditTextToSpeech__TextToSpeechConfigDialog_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextEditTextToSpeech__TextToSpeechConfigDialog_NativeEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        return vtextedittexttospeechtexttospeechconfigdialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualTextEditTextToSpeechTextToSpeechConfigDialog*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool TextEditTextToSpeech__TextToSpeechConfigDialog_SuperNativeEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->setTextEditTextToSpeech__TextToSpeechConfigDialog_NativeEvent_IsBase(true);
        return vtextedittexttospeechtexttospeechconfigdialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualTextEditTextToSpeechTextToSpeechConfigDialog*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_OnNativeEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->setTextEditTextToSpeech__TextToSpeechConfigDialog_NativeEvent_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog::TextEditTextToSpeech__TextToSpeechConfigDialog_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_ChangeEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, QEvent* param1) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->changeEvent(param1);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigDialog*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_SuperChangeEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, QEvent* param1) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->setTextEditTextToSpeech__TextToSpeechConfigDialog_ChangeEvent_IsBase(true);
        vtextedittexttospeechtexttospeechconfigdialog->changeEvent(param1);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigDialog*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_OnChangeEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->setTextEditTextToSpeech__TextToSpeechConfigDialog_ChangeEvent_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog::TextEditTextToSpeech__TextToSpeechConfigDialog_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int TextEditTextToSpeech__TextToSpeechConfigDialog_Metric(const TextEditTextToSpeech__TextToSpeechConfigDialog* self, int param1) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self));
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        return vtextedittexttospeechtexttospeechconfigdialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualTextEditTextToSpeechTextToSpeechConfigDialog*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int TextEditTextToSpeech__TextToSpeechConfigDialog_SuperMetric(const TextEditTextToSpeech__TextToSpeechConfigDialog* self, int param1) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self));
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->setTextEditTextToSpeech__TextToSpeechConfigDialog_Metric_IsBase(true);
        return vtextedittexttospeechtexttospeechconfigdialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualTextEditTextToSpeechTextToSpeechConfigDialog*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_OnMetric(const TextEditTextToSpeech__TextToSpeechConfigDialog* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self));
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->setTextEditTextToSpeech__TextToSpeechConfigDialog_Metric_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog::TextEditTextToSpeech__TextToSpeechConfigDialog_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_InitPainter(const TextEditTextToSpeech__TextToSpeechConfigDialog* self, QPainter* painter) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self));
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->initPainter(painter);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigDialog*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_SuperInitPainter(const TextEditTextToSpeech__TextToSpeechConfigDialog* self, QPainter* painter) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self));
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->setTextEditTextToSpeech__TextToSpeechConfigDialog_InitPainter_IsBase(true);
        vtextedittexttospeechtexttospeechconfigdialog->initPainter(painter);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigDialog*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_OnInitPainter(const TextEditTextToSpeech__TextToSpeechConfigDialog* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self));
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->setTextEditTextToSpeech__TextToSpeechConfigDialog_InitPainter_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog::TextEditTextToSpeech__TextToSpeechConfigDialog_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* TextEditTextToSpeech__TextToSpeechConfigDialog_Redirected(const TextEditTextToSpeech__TextToSpeechConfigDialog* self, QPoint* offset) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self));
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        return vtextedittexttospeechtexttospeechconfigdialog->redirected(offset);
    } else {
        return ((VirtualTextEditTextToSpeechTextToSpeechConfigDialog*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* TextEditTextToSpeech__TextToSpeechConfigDialog_SuperRedirected(const TextEditTextToSpeech__TextToSpeechConfigDialog* self, QPoint* offset) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self));
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->setTextEditTextToSpeech__TextToSpeechConfigDialog_Redirected_IsBase(true);
        return vtextedittexttospeechtexttospeechconfigdialog->redirected(offset);
    } else {
        return ((VirtualTextEditTextToSpeechTextToSpeechConfigDialog*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_OnRedirected(const TextEditTextToSpeech__TextToSpeechConfigDialog* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self));
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->setTextEditTextToSpeech__TextToSpeechConfigDialog_Redirected_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog::TextEditTextToSpeech__TextToSpeechConfigDialog_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* TextEditTextToSpeech__TextToSpeechConfigDialog_SharedPainter(const TextEditTextToSpeech__TextToSpeechConfigDialog* self) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self));
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        return vtextedittexttospeechtexttospeechconfigdialog->sharedPainter();
    } else {
        return ((VirtualTextEditTextToSpeechTextToSpeechConfigDialog*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* TextEditTextToSpeech__TextToSpeechConfigDialog_SuperSharedPainter(const TextEditTextToSpeech__TextToSpeechConfigDialog* self) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self));
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->setTextEditTextToSpeech__TextToSpeechConfigDialog_SharedPainter_IsBase(true);
        return vtextedittexttospeechtexttospeechconfigdialog->sharedPainter();
    } else {
        return ((VirtualTextEditTextToSpeechTextToSpeechConfigDialog*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_OnSharedPainter(const TextEditTextToSpeech__TextToSpeechConfigDialog* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self));
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->setTextEditTextToSpeech__TextToSpeechConfigDialog_SharedPainter_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog::TextEditTextToSpeech__TextToSpeechConfigDialog_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_InputMethodEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, QInputMethodEvent* param1) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->inputMethodEvent(param1);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigDialog*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_SuperInputMethodEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, QInputMethodEvent* param1) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->setTextEditTextToSpeech__TextToSpeechConfigDialog_InputMethodEvent_IsBase(true);
        vtextedittexttospeechtexttospeechconfigdialog->inputMethodEvent(param1);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigDialog*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_OnInputMethodEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->setTextEditTextToSpeech__TextToSpeechConfigDialog_InputMethodEvent_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog::TextEditTextToSpeech__TextToSpeechConfigDialog_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* TextEditTextToSpeech__TextToSpeechConfigDialog_InputMethodQuery(const TextEditTextToSpeech__TextToSpeechConfigDialog* self, int param1) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self));
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        return new QVariant(vtextedittexttospeechtexttospeechconfigdialog->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualTextEditTextToSpeechTextToSpeechConfigDialog*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* TextEditTextToSpeech__TextToSpeechConfigDialog_SuperInputMethodQuery(const TextEditTextToSpeech__TextToSpeechConfigDialog* self, int param1) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self));
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->setTextEditTextToSpeech__TextToSpeechConfigDialog_InputMethodQuery_IsBase(true);
        return new QVariant(vtextedittexttospeechtexttospeechconfigdialog->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualTextEditTextToSpeechTextToSpeechConfigDialog*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_OnInputMethodQuery(const TextEditTextToSpeech__TextToSpeechConfigDialog* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self));
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->setTextEditTextToSpeech__TextToSpeechConfigDialog_InputMethodQuery_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog::TextEditTextToSpeech__TextToSpeechConfigDialog_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextEditTextToSpeech__TextToSpeechConfigDialog_FocusNextPrevChild(TextEditTextToSpeech__TextToSpeechConfigDialog* self, bool next) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        return vtextedittexttospeechtexttospeechconfigdialog->focusNextPrevChild(next);
    } else {
        return ((VirtualTextEditTextToSpeechTextToSpeechConfigDialog*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool TextEditTextToSpeech__TextToSpeechConfigDialog_SuperFocusNextPrevChild(TextEditTextToSpeech__TextToSpeechConfigDialog* self, bool next) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->setTextEditTextToSpeech__TextToSpeechConfigDialog_FocusNextPrevChild_IsBase(true);
        return vtextedittexttospeechtexttospeechconfigdialog->focusNextPrevChild(next);
    } else {
        return ((VirtualTextEditTextToSpeechTextToSpeechConfigDialog*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_OnFocusNextPrevChild(TextEditTextToSpeech__TextToSpeechConfigDialog* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->setTextEditTextToSpeech__TextToSpeechConfigDialog_FocusNextPrevChild_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog::TextEditTextToSpeech__TextToSpeechConfigDialog_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_TimerEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, QTimerEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->timerEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigDialog*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_SuperTimerEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, QTimerEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->setTextEditTextToSpeech__TextToSpeechConfigDialog_TimerEvent_IsBase(true);
        vtextedittexttospeechtexttospeechconfigdialog->timerEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigDialog*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_OnTimerEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->setTextEditTextToSpeech__TextToSpeechConfigDialog_TimerEvent_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog::TextEditTextToSpeech__TextToSpeechConfigDialog_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_ChildEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, QChildEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->childEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigDialog*)self)->childEvent(event);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_SuperChildEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, QChildEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->setTextEditTextToSpeech__TextToSpeechConfigDialog_ChildEvent_IsBase(true);
        vtextedittexttospeechtexttospeechconfigdialog->childEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigDialog*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_OnChildEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->setTextEditTextToSpeech__TextToSpeechConfigDialog_ChildEvent_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog::TextEditTextToSpeech__TextToSpeechConfigDialog_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_CustomEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, QEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->customEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigDialog*)self)->customEvent(event);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_SuperCustomEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, QEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->setTextEditTextToSpeech__TextToSpeechConfigDialog_CustomEvent_IsBase(true);
        vtextedittexttospeechtexttospeechconfigdialog->customEvent(event);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigDialog*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_OnCustomEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->setTextEditTextToSpeech__TextToSpeechConfigDialog_CustomEvent_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog::TextEditTextToSpeech__TextToSpeechConfigDialog_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_ConnectNotify(TextEditTextToSpeech__TextToSpeechConfigDialog* self, const QMetaMethod* signal) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->connectNotify(*signal);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigDialog*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_SuperConnectNotify(TextEditTextToSpeech__TextToSpeechConfigDialog* self, const QMetaMethod* signal) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->setTextEditTextToSpeech__TextToSpeechConfigDialog_ConnectNotify_IsBase(true);
        vtextedittexttospeechtexttospeechconfigdialog->connectNotify(*signal);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigDialog*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_OnConnectNotify(TextEditTextToSpeech__TextToSpeechConfigDialog* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->setTextEditTextToSpeech__TextToSpeechConfigDialog_ConnectNotify_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog::TextEditTextToSpeech__TextToSpeechConfigDialog_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_DisconnectNotify(TextEditTextToSpeech__TextToSpeechConfigDialog* self, const QMetaMethod* signal) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->disconnectNotify(*signal);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigDialog*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_SuperDisconnectNotify(TextEditTextToSpeech__TextToSpeechConfigDialog* self, const QMetaMethod* signal) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->setTextEditTextToSpeech__TextToSpeechConfigDialog_DisconnectNotify_IsBase(true);
        vtextedittexttospeechtexttospeechconfigdialog->disconnectNotify(*signal);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigDialog*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_OnDisconnectNotify(TextEditTextToSpeech__TextToSpeechConfigDialog* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->setTextEditTextToSpeech__TextToSpeechConfigDialog_DisconnectNotify_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog::TextEditTextToSpeech__TextToSpeechConfigDialog_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_AdjustPosition(TextEditTextToSpeech__TextToSpeechConfigDialog* self, QWidget* param1) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->adjustPosition(param1);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigDialog*)self)->adjustPosition(param1);
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_SuperAdjustPosition(TextEditTextToSpeech__TextToSpeechConfigDialog* self, QWidget* param1) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->setTextEditTextToSpeech__TextToSpeechConfigDialog_AdjustPosition_IsBase(true);
        vtextedittexttospeechtexttospeechconfigdialog->adjustPosition(param1);
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigDialog*)self)->adjustPosition(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_OnAdjustPosition(TextEditTextToSpeech__TextToSpeechConfigDialog* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->setTextEditTextToSpeech__TextToSpeechConfigDialog_AdjustPosition_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog::TextEditTextToSpeech__TextToSpeechConfigDialog_AdjustPosition_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_UpdateMicroFocus(TextEditTextToSpeech__TextToSpeechConfigDialog* self) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->updateMicroFocus();
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigDialog*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_SuperUpdateMicroFocus(TextEditTextToSpeech__TextToSpeechConfigDialog* self) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->setTextEditTextToSpeech__TextToSpeechConfigDialog_UpdateMicroFocus_IsBase(true);
        vtextedittexttospeechtexttospeechconfigdialog->updateMicroFocus();
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigDialog*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_OnUpdateMicroFocus(TextEditTextToSpeech__TextToSpeechConfigDialog* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->setTextEditTextToSpeech__TextToSpeechConfigDialog_UpdateMicroFocus_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog::TextEditTextToSpeech__TextToSpeechConfigDialog_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_Create(TextEditTextToSpeech__TextToSpeechConfigDialog* self) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->create();
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigDialog*)self)->create();
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_SuperCreate(TextEditTextToSpeech__TextToSpeechConfigDialog* self) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->setTextEditTextToSpeech__TextToSpeechConfigDialog_Create_IsBase(true);
        vtextedittexttospeechtexttospeechconfigdialog->create();
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigDialog*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_OnCreate(TextEditTextToSpeech__TextToSpeechConfigDialog* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->setTextEditTextToSpeech__TextToSpeechConfigDialog_Create_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog::TextEditTextToSpeech__TextToSpeechConfigDialog_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_Destroy(TextEditTextToSpeech__TextToSpeechConfigDialog* self) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->destroy();
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigDialog*)self)->destroy();
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_SuperDestroy(TextEditTextToSpeech__TextToSpeechConfigDialog* self) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->setTextEditTextToSpeech__TextToSpeechConfigDialog_Destroy_IsBase(true);
        vtextedittexttospeechtexttospeechconfigdialog->destroy();
    } else {
        ((VirtualTextEditTextToSpeechTextToSpeechConfigDialog*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_OnDestroy(TextEditTextToSpeech__TextToSpeechConfigDialog* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->setTextEditTextToSpeech__TextToSpeechConfigDialog_Destroy_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog::TextEditTextToSpeech__TextToSpeechConfigDialog_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextEditTextToSpeech__TextToSpeechConfigDialog_FocusNextChild(TextEditTextToSpeech__TextToSpeechConfigDialog* self) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        return vtextedittexttospeechtexttospeechconfigdialog->focusNextChild();
    } else {
        return ((VirtualTextEditTextToSpeechTextToSpeechConfigDialog*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool TextEditTextToSpeech__TextToSpeechConfigDialog_SuperFocusNextChild(TextEditTextToSpeech__TextToSpeechConfigDialog* self) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->setTextEditTextToSpeech__TextToSpeechConfigDialog_FocusNextChild_IsBase(true);
        return vtextedittexttospeechtexttospeechconfigdialog->focusNextChild();
    } else {
        return ((VirtualTextEditTextToSpeechTextToSpeechConfigDialog*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_OnFocusNextChild(TextEditTextToSpeech__TextToSpeechConfigDialog* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->setTextEditTextToSpeech__TextToSpeechConfigDialog_FocusNextChild_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog::TextEditTextToSpeech__TextToSpeechConfigDialog_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextEditTextToSpeech__TextToSpeechConfigDialog_FocusPreviousChild(TextEditTextToSpeech__TextToSpeechConfigDialog* self) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        return vtextedittexttospeechtexttospeechconfigdialog->focusPreviousChild();
    } else {
        return ((VirtualTextEditTextToSpeechTextToSpeechConfigDialog*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool TextEditTextToSpeech__TextToSpeechConfigDialog_SuperFocusPreviousChild(TextEditTextToSpeech__TextToSpeechConfigDialog* self) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->setTextEditTextToSpeech__TextToSpeechConfigDialog_FocusPreviousChild_IsBase(true);
        return vtextedittexttospeechtexttospeechconfigdialog->focusPreviousChild();
    } else {
        return ((VirtualTextEditTextToSpeechTextToSpeechConfigDialog*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_OnFocusPreviousChild(TextEditTextToSpeech__TextToSpeechConfigDialog* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->setTextEditTextToSpeech__TextToSpeechConfigDialog_FocusPreviousChild_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog::TextEditTextToSpeech__TextToSpeechConfigDialog_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* TextEditTextToSpeech__TextToSpeechConfigDialog_Sender(const TextEditTextToSpeech__TextToSpeechConfigDialog* self) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self));
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        return vtextedittexttospeechtexttospeechconfigdialog->sender();
    } else {
        return ((VirtualTextEditTextToSpeechTextToSpeechConfigDialog*)self)->sender();
    }
}

// Base class handler implementation
QObject* TextEditTextToSpeech__TextToSpeechConfigDialog_SuperSender(const TextEditTextToSpeech__TextToSpeechConfigDialog* self) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self));
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->setTextEditTextToSpeech__TextToSpeechConfigDialog_Sender_IsBase(true);
        return vtextedittexttospeechtexttospeechconfigdialog->sender();
    } else {
        return ((VirtualTextEditTextToSpeechTextToSpeechConfigDialog*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_OnSender(const TextEditTextToSpeech__TextToSpeechConfigDialog* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self));
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->setTextEditTextToSpeech__TextToSpeechConfigDialog_Sender_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog::TextEditTextToSpeech__TextToSpeechConfigDialog_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int TextEditTextToSpeech__TextToSpeechConfigDialog_SenderSignalIndex(const TextEditTextToSpeech__TextToSpeechConfigDialog* self) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self));
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        return vtextedittexttospeechtexttospeechconfigdialog->senderSignalIndex();
    } else {
        return ((VirtualTextEditTextToSpeechTextToSpeechConfigDialog*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int TextEditTextToSpeech__TextToSpeechConfigDialog_SuperSenderSignalIndex(const TextEditTextToSpeech__TextToSpeechConfigDialog* self) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self));
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->setTextEditTextToSpeech__TextToSpeechConfigDialog_SenderSignalIndex_IsBase(true);
        return vtextedittexttospeechtexttospeechconfigdialog->senderSignalIndex();
    } else {
        return ((VirtualTextEditTextToSpeechTextToSpeechConfigDialog*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_OnSenderSignalIndex(const TextEditTextToSpeech__TextToSpeechConfigDialog* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self));
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->setTextEditTextToSpeech__TextToSpeechConfigDialog_SenderSignalIndex_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog::TextEditTextToSpeech__TextToSpeechConfigDialog_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int TextEditTextToSpeech__TextToSpeechConfigDialog_Receivers(const TextEditTextToSpeech__TextToSpeechConfigDialog* self, const char* signal) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self));
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        return vtextedittexttospeechtexttospeechconfigdialog->receivers(signal);
    } else {
        return ((VirtualTextEditTextToSpeechTextToSpeechConfigDialog*)self)->receivers(signal);
    }
}

// Base class handler implementation
int TextEditTextToSpeech__TextToSpeechConfigDialog_SuperReceivers(const TextEditTextToSpeech__TextToSpeechConfigDialog* self, const char* signal) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self));
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->setTextEditTextToSpeech__TextToSpeechConfigDialog_Receivers_IsBase(true);
        return vtextedittexttospeechtexttospeechconfigdialog->receivers(signal);
    } else {
        return ((VirtualTextEditTextToSpeechTextToSpeechConfigDialog*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_OnReceivers(const TextEditTextToSpeech__TextToSpeechConfigDialog* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self));
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->setTextEditTextToSpeech__TextToSpeechConfigDialog_Receivers_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog::TextEditTextToSpeech__TextToSpeechConfigDialog_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextEditTextToSpeech__TextToSpeechConfigDialog_IsSignalConnected(const TextEditTextToSpeech__TextToSpeechConfigDialog* self, const QMetaMethod* signal) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self));
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        return vtextedittexttospeechtexttospeechconfigdialog->isSignalConnected(*signal);
    } else {
        return ((VirtualTextEditTextToSpeechTextToSpeechConfigDialog*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool TextEditTextToSpeech__TextToSpeechConfigDialog_SuperIsSignalConnected(const TextEditTextToSpeech__TextToSpeechConfigDialog* self, const QMetaMethod* signal) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self));
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->setTextEditTextToSpeech__TextToSpeechConfigDialog_IsSignalConnected_IsBase(true);
        return vtextedittexttospeechtexttospeechconfigdialog->isSignalConnected(*signal);
    } else {
        return ((VirtualTextEditTextToSpeechTextToSpeechConfigDialog*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_OnIsSignalConnected(const TextEditTextToSpeech__TextToSpeechConfigDialog* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self));
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->setTextEditTextToSpeech__TextToSpeechConfigDialog_IsSignalConnected_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog::TextEditTextToSpeech__TextToSpeechConfigDialog_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double TextEditTextToSpeech__TextToSpeechConfigDialog_GetDecodedMetricF(const TextEditTextToSpeech__TextToSpeechConfigDialog* self, int metricA, int metricB) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self));
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        return vtextedittexttospeechtexttospeechconfigdialog->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualTextEditTextToSpeechTextToSpeechConfigDialog*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double TextEditTextToSpeech__TextToSpeechConfigDialog_SuperGetDecodedMetricF(const TextEditTextToSpeech__TextToSpeechConfigDialog* self, int metricA, int metricB) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self));
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->setTextEditTextToSpeech__TextToSpeechConfigDialog_GetDecodedMetricF_IsBase(true);
        return vtextedittexttospeechtexttospeechconfigdialog->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualTextEditTextToSpeechTextToSpeechConfigDialog*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_OnGetDecodedMetricF(const TextEditTextToSpeech__TextToSpeechConfigDialog* self, intptr_t slot) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self));
    if (vtextedittexttospeechtexttospeechconfigdialog && vtextedittexttospeechtexttospeechconfigdialog->isVirtualTextEditTextToSpeechTextToSpeechConfigDialog) {
        vtextedittexttospeechtexttospeechconfigdialog->setTextEditTextToSpeech__TextToSpeechConfigDialog_GetDecodedMetricF_Callback(reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog::TextEditTextToSpeech__TextToSpeechConfigDialog_GetDecodedMetricF_Callback>(slot));
    }
}

void TextEditTextToSpeech__TextToSpeechConfigDialog_Delete(TextEditTextToSpeech__TextToSpeechConfigDialog* self) {
    delete self;
}
