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
    return (QMetaObject*)self->metaObject();
}

// Base class handler implementation
QMetaObject* TextTranslator__TranslatorConfigureDialog_SuperMetaObject(const TextTranslator__TranslatorConfigureDialog* self) {
    return (QMetaObject*)self->TextTranslator::TranslatorConfigureDialog::metaObject();
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureDialog_OnMetaObject(TextTranslator__TranslatorConfigureDialog* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfiguredialog = const_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureDialog*>(self)))
        vtexttranslatortranslatorconfiguredialog->texttranslator__translatorconfiguredialog_metaobject_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureDialog::TextTranslator__TranslatorConfigureDialog_MetaObject_Callback>(slot);
}

// Derived class handler implementation
void* TextTranslator__TranslatorConfigureDialog_Metacast(TextTranslator__TranslatorConfigureDialog* self, const char* param1) {
    return self->qt_metacast(param1);
}

// Base class handler implementation
void* TextTranslator__TranslatorConfigureDialog_SuperMetacast(TextTranslator__TranslatorConfigureDialog* self, const char* param1) {
    return self->TextTranslator::TranslatorConfigureDialog::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureDialog_OnMetacast(TextTranslator__TranslatorConfigureDialog* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self))
        vtexttranslatortranslatorconfiguredialog->texttranslator__translatorconfiguredialog_metacast_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureDialog::TextTranslator__TranslatorConfigureDialog_Metacast_Callback>(slot);
}

// Derived class handler implementation
int TextTranslator__TranslatorConfigureDialog_Metacall(TextTranslator__TranslatorConfigureDialog* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Base class handler implementation
int TextTranslator__TranslatorConfigureDialog_SuperMetacall(TextTranslator__TranslatorConfigureDialog* self, int param1, int param2, void** param3) {
    return self->TextTranslator::TranslatorConfigureDialog::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureDialog_OnMetacall(TextTranslator__TranslatorConfigureDialog* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self))
        vtexttranslatortranslatorconfiguredialog->texttranslator__translatorconfiguredialog_metacall_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureDialog::TextTranslator__TranslatorConfigureDialog_Metacall_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureDialog_SetVisible(TextTranslator__TranslatorConfigureDialog* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureDialog_SuperSetVisible(TextTranslator__TranslatorConfigureDialog* self, bool visible) {
    self->TextTranslator::TranslatorConfigureDialog::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureDialog_OnSetVisible(TextTranslator__TranslatorConfigureDialog* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self))
        vtexttranslatortranslatorconfiguredialog->texttranslator__translatorconfiguredialog_setvisible_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureDialog::TextTranslator__TranslatorConfigureDialog_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* TextTranslator__TranslatorConfigureDialog_SizeHint(const TextTranslator__TranslatorConfigureDialog* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* TextTranslator__TranslatorConfigureDialog_SuperSizeHint(const TextTranslator__TranslatorConfigureDialog* self) {
    return new QSize(self->TextTranslator::TranslatorConfigureDialog::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureDialog_OnSizeHint(TextTranslator__TranslatorConfigureDialog* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfiguredialog = const_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureDialog*>(self)))
        vtexttranslatortranslatorconfiguredialog->texttranslator__translatorconfiguredialog_sizehint_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureDialog::TextTranslator__TranslatorConfigureDialog_SizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* TextTranslator__TranslatorConfigureDialog_MinimumSizeHint(const TextTranslator__TranslatorConfigureDialog* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* TextTranslator__TranslatorConfigureDialog_SuperMinimumSizeHint(const TextTranslator__TranslatorConfigureDialog* self) {
    return new QSize(self->TextTranslator::TranslatorConfigureDialog::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureDialog_OnMinimumSizeHint(TextTranslator__TranslatorConfigureDialog* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfiguredialog = const_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureDialog*>(self)))
        vtexttranslatortranslatorconfiguredialog->texttranslator__translatorconfiguredialog_minimumsizehint_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureDialog::TextTranslator__TranslatorConfigureDialog_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureDialog_Open(TextTranslator__TranslatorConfigureDialog* self) {
    self->open();
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureDialog_SuperOpen(TextTranslator__TranslatorConfigureDialog* self) {
    self->TextTranslator::TranslatorConfigureDialog::open();
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureDialog_OnOpen(TextTranslator__TranslatorConfigureDialog* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self))
        vtexttranslatortranslatorconfiguredialog->texttranslator__translatorconfiguredialog_open_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureDialog::TextTranslator__TranslatorConfigureDialog_Open_Callback>(slot);
}

// Derived class handler implementation
int TextTranslator__TranslatorConfigureDialog_Exec(TextTranslator__TranslatorConfigureDialog* self) {
    return self->exec();
}

// Base class handler implementation
int TextTranslator__TranslatorConfigureDialog_SuperExec(TextTranslator__TranslatorConfigureDialog* self) {
    return self->TextTranslator::TranslatorConfigureDialog::exec();
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureDialog_OnExec(TextTranslator__TranslatorConfigureDialog* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self))
        vtexttranslatortranslatorconfiguredialog->texttranslator__translatorconfiguredialog_exec_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureDialog::TextTranslator__TranslatorConfigureDialog_Exec_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureDialog_Done(TextTranslator__TranslatorConfigureDialog* self, int param1) {
    self->done(static_cast<int>(param1));
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureDialog_SuperDone(TextTranslator__TranslatorConfigureDialog* self, int param1) {
    self->TextTranslator::TranslatorConfigureDialog::done(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureDialog_OnDone(TextTranslator__TranslatorConfigureDialog* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self))
        vtexttranslatortranslatorconfiguredialog->texttranslator__translatorconfiguredialog_done_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureDialog::TextTranslator__TranslatorConfigureDialog_Done_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureDialog_Accept(TextTranslator__TranslatorConfigureDialog* self) {
    self->accept();
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureDialog_SuperAccept(TextTranslator__TranslatorConfigureDialog* self) {
    self->TextTranslator::TranslatorConfigureDialog::accept();
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureDialog_OnAccept(TextTranslator__TranslatorConfigureDialog* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self))
        vtexttranslatortranslatorconfiguredialog->texttranslator__translatorconfiguredialog_accept_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureDialog::TextTranslator__TranslatorConfigureDialog_Accept_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureDialog_Reject(TextTranslator__TranslatorConfigureDialog* self) {
    self->reject();
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureDialog_SuperReject(TextTranslator__TranslatorConfigureDialog* self) {
    self->TextTranslator::TranslatorConfigureDialog::reject();
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureDialog_OnReject(TextTranslator__TranslatorConfigureDialog* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self))
        vtexttranslatortranslatorconfiguredialog->texttranslator__translatorconfiguredialog_reject_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureDialog::TextTranslator__TranslatorConfigureDialog_Reject_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureDialog_KeyPressEvent(TextTranslator__TranslatorConfigureDialog* self, QKeyEvent* param1) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog) {
        vtexttranslatortranslatorconfiguredialog->keyPressEvent(param1);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureDialog::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureDialog_SuperKeyPressEvent(TextTranslator__TranslatorConfigureDialog* self, QKeyEvent* param1) {
    if (auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self)) {
        vtexttranslatortranslatorconfiguredialog->TextTranslator::TranslatorConfigureDialog::keyPressEvent(param1);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureDialog::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureDialog_OnKeyPressEvent(TextTranslator__TranslatorConfigureDialog* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self))
        vtexttranslatortranslatorconfiguredialog->texttranslator__translatorconfiguredialog_keypressevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureDialog::TextTranslator__TranslatorConfigureDialog_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureDialog_CloseEvent(TextTranslator__TranslatorConfigureDialog* self, QCloseEvent* param1) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog) {
        vtexttranslatortranslatorconfiguredialog->closeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureDialog::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureDialog_SuperCloseEvent(TextTranslator__TranslatorConfigureDialog* self, QCloseEvent* param1) {
    if (auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self)) {
        vtexttranslatortranslatorconfiguredialog->TextTranslator::TranslatorConfigureDialog::closeEvent(param1);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureDialog::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureDialog_OnCloseEvent(TextTranslator__TranslatorConfigureDialog* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self))
        vtexttranslatortranslatorconfiguredialog->texttranslator__translatorconfiguredialog_closeevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureDialog::TextTranslator__TranslatorConfigureDialog_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureDialog_ShowEvent(TextTranslator__TranslatorConfigureDialog* self, QShowEvent* param1) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog) {
        vtexttranslatortranslatorconfiguredialog->showEvent(param1);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureDialog::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureDialog_SuperShowEvent(TextTranslator__TranslatorConfigureDialog* self, QShowEvent* param1) {
    if (auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self)) {
        vtexttranslatortranslatorconfiguredialog->TextTranslator::TranslatorConfigureDialog::showEvent(param1);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureDialog::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureDialog_OnShowEvent(TextTranslator__TranslatorConfigureDialog* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self))
        vtexttranslatortranslatorconfiguredialog->texttranslator__translatorconfiguredialog_showevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureDialog::TextTranslator__TranslatorConfigureDialog_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureDialog_ResizeEvent(TextTranslator__TranslatorConfigureDialog* self, QResizeEvent* param1) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog) {
        vtexttranslatortranslatorconfiguredialog->resizeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureDialog::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureDialog_SuperResizeEvent(TextTranslator__TranslatorConfigureDialog* self, QResizeEvent* param1) {
    if (auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self)) {
        vtexttranslatortranslatorconfiguredialog->TextTranslator::TranslatorConfigureDialog::resizeEvent(param1);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureDialog::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureDialog_OnResizeEvent(TextTranslator__TranslatorConfigureDialog* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self))
        vtexttranslatortranslatorconfiguredialog->texttranslator__translatorconfiguredialog_resizeevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureDialog::TextTranslator__TranslatorConfigureDialog_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureDialog_ContextMenuEvent(TextTranslator__TranslatorConfigureDialog* self, QContextMenuEvent* param1) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog) {
        vtexttranslatortranslatorconfiguredialog->contextMenuEvent(param1);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureDialog::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureDialog_SuperContextMenuEvent(TextTranslator__TranslatorConfigureDialog* self, QContextMenuEvent* param1) {
    if (auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self)) {
        vtexttranslatortranslatorconfiguredialog->TextTranslator::TranslatorConfigureDialog::contextMenuEvent(param1);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureDialog::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureDialog_OnContextMenuEvent(TextTranslator__TranslatorConfigureDialog* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self))
        vtexttranslatortranslatorconfiguredialog->texttranslator__translatorconfiguredialog_contextmenuevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureDialog::TextTranslator__TranslatorConfigureDialog_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
bool TextTranslator__TranslatorConfigureDialog_EventFilter(TextTranslator__TranslatorConfigureDialog* self, QObject* param1, QEvent* param2) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog) {
        return vtexttranslatortranslatorconfiguredialog->eventFilter(param1, param2);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureDialog::eventFilter called without a directly constructed type");
    }
}

// Base class handler implementation
bool TextTranslator__TranslatorConfigureDialog_SuperEventFilter(TextTranslator__TranslatorConfigureDialog* self, QObject* param1, QEvent* param2) {
    if (auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self)) {
        return vtexttranslatortranslatorconfiguredialog->TextTranslator::TranslatorConfigureDialog::eventFilter(param1, param2);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureDialog::eventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureDialog_OnEventFilter(TextTranslator__TranslatorConfigureDialog* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self))
        vtexttranslatortranslatorconfiguredialog->texttranslator__translatorconfiguredialog_eventfilter_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureDialog::TextTranslator__TranslatorConfigureDialog_EventFilter_Callback>(slot);
}

// Derived class handler implementation
int TextTranslator__TranslatorConfigureDialog_DevType(const TextTranslator__TranslatorConfigureDialog* self) {
    return self->devType();
}

// Base class handler implementation
int TextTranslator__TranslatorConfigureDialog_SuperDevType(const TextTranslator__TranslatorConfigureDialog* self) {
    return self->TextTranslator::TranslatorConfigureDialog::devType();
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureDialog_OnDevType(TextTranslator__TranslatorConfigureDialog* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfiguredialog = const_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureDialog*>(self)))
        vtexttranslatortranslatorconfiguredialog->texttranslator__translatorconfiguredialog_devtype_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureDialog::TextTranslator__TranslatorConfigureDialog_DevType_Callback>(slot);
}

// Derived class handler implementation
int TextTranslator__TranslatorConfigureDialog_HeightForWidth(const TextTranslator__TranslatorConfigureDialog* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int TextTranslator__TranslatorConfigureDialog_SuperHeightForWidth(const TextTranslator__TranslatorConfigureDialog* self, int param1) {
    return self->TextTranslator::TranslatorConfigureDialog::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureDialog_OnHeightForWidth(TextTranslator__TranslatorConfigureDialog* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfiguredialog = const_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureDialog*>(self)))
        vtexttranslatortranslatorconfiguredialog->texttranslator__translatorconfiguredialog_heightforwidth_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureDialog::TextTranslator__TranslatorConfigureDialog_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool TextTranslator__TranslatorConfigureDialog_HasHeightForWidth(const TextTranslator__TranslatorConfigureDialog* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool TextTranslator__TranslatorConfigureDialog_SuperHasHeightForWidth(const TextTranslator__TranslatorConfigureDialog* self) {
    return self->TextTranslator::TranslatorConfigureDialog::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureDialog_OnHasHeightForWidth(TextTranslator__TranslatorConfigureDialog* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfiguredialog = const_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureDialog*>(self)))
        vtexttranslatortranslatorconfiguredialog->texttranslator__translatorconfiguredialog_hasheightforwidth_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureDialog::TextTranslator__TranslatorConfigureDialog_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* TextTranslator__TranslatorConfigureDialog_PaintEngine(const TextTranslator__TranslatorConfigureDialog* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* TextTranslator__TranslatorConfigureDialog_SuperPaintEngine(const TextTranslator__TranslatorConfigureDialog* self) {
    return self->TextTranslator::TranslatorConfigureDialog::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureDialog_OnPaintEngine(TextTranslator__TranslatorConfigureDialog* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfiguredialog = const_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureDialog*>(self)))
        vtexttranslatortranslatorconfiguredialog->texttranslator__translatorconfiguredialog_paintengine_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureDialog::TextTranslator__TranslatorConfigureDialog_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
bool TextTranslator__TranslatorConfigureDialog_Event(TextTranslator__TranslatorConfigureDialog* self, QEvent* event) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog) {
        return vtexttranslatortranslatorconfiguredialog->event(event);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureDialog::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool TextTranslator__TranslatorConfigureDialog_SuperEvent(TextTranslator__TranslatorConfigureDialog* self, QEvent* event) {
    if (auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self)) {
        return vtexttranslatortranslatorconfiguredialog->TextTranslator::TranslatorConfigureDialog::event(event);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureDialog::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureDialog_OnEvent(TextTranslator__TranslatorConfigureDialog* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self))
        vtexttranslatortranslatorconfiguredialog->texttranslator__translatorconfiguredialog_event_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureDialog::TextTranslator__TranslatorConfigureDialog_Event_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureDialog_MousePressEvent(TextTranslator__TranslatorConfigureDialog* self, QMouseEvent* event) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog) {
        vtexttranslatortranslatorconfiguredialog->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureDialog::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureDialog_SuperMousePressEvent(TextTranslator__TranslatorConfigureDialog* self, QMouseEvent* event) {
    if (auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self)) {
        vtexttranslatortranslatorconfiguredialog->TextTranslator::TranslatorConfigureDialog::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureDialog::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureDialog_OnMousePressEvent(TextTranslator__TranslatorConfigureDialog* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self))
        vtexttranslatortranslatorconfiguredialog->texttranslator__translatorconfiguredialog_mousepressevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureDialog::TextTranslator__TranslatorConfigureDialog_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureDialog_MouseReleaseEvent(TextTranslator__TranslatorConfigureDialog* self, QMouseEvent* event) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog) {
        vtexttranslatortranslatorconfiguredialog->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureDialog::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureDialog_SuperMouseReleaseEvent(TextTranslator__TranslatorConfigureDialog* self, QMouseEvent* event) {
    if (auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self)) {
        vtexttranslatortranslatorconfiguredialog->TextTranslator::TranslatorConfigureDialog::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureDialog::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureDialog_OnMouseReleaseEvent(TextTranslator__TranslatorConfigureDialog* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self))
        vtexttranslatortranslatorconfiguredialog->texttranslator__translatorconfiguredialog_mousereleaseevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureDialog::TextTranslator__TranslatorConfigureDialog_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureDialog_MouseDoubleClickEvent(TextTranslator__TranslatorConfigureDialog* self, QMouseEvent* event) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog) {
        vtexttranslatortranslatorconfiguredialog->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureDialog::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureDialog_SuperMouseDoubleClickEvent(TextTranslator__TranslatorConfigureDialog* self, QMouseEvent* event) {
    if (auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self)) {
        vtexttranslatortranslatorconfiguredialog->TextTranslator::TranslatorConfigureDialog::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureDialog::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureDialog_OnMouseDoubleClickEvent(TextTranslator__TranslatorConfigureDialog* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self))
        vtexttranslatortranslatorconfiguredialog->texttranslator__translatorconfiguredialog_mousedoubleclickevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureDialog::TextTranslator__TranslatorConfigureDialog_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureDialog_MouseMoveEvent(TextTranslator__TranslatorConfigureDialog* self, QMouseEvent* event) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog) {
        vtexttranslatortranslatorconfiguredialog->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureDialog::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureDialog_SuperMouseMoveEvent(TextTranslator__TranslatorConfigureDialog* self, QMouseEvent* event) {
    if (auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self)) {
        vtexttranslatortranslatorconfiguredialog->TextTranslator::TranslatorConfigureDialog::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureDialog::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureDialog_OnMouseMoveEvent(TextTranslator__TranslatorConfigureDialog* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self))
        vtexttranslatortranslatorconfiguredialog->texttranslator__translatorconfiguredialog_mousemoveevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureDialog::TextTranslator__TranslatorConfigureDialog_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureDialog_WheelEvent(TextTranslator__TranslatorConfigureDialog* self, QWheelEvent* event) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog) {
        vtexttranslatortranslatorconfiguredialog->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureDialog::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureDialog_SuperWheelEvent(TextTranslator__TranslatorConfigureDialog* self, QWheelEvent* event) {
    if (auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self)) {
        vtexttranslatortranslatorconfiguredialog->TextTranslator::TranslatorConfigureDialog::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureDialog::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureDialog_OnWheelEvent(TextTranslator__TranslatorConfigureDialog* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self))
        vtexttranslatortranslatorconfiguredialog->texttranslator__translatorconfiguredialog_wheelevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureDialog::TextTranslator__TranslatorConfigureDialog_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureDialog_KeyReleaseEvent(TextTranslator__TranslatorConfigureDialog* self, QKeyEvent* event) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog) {
        vtexttranslatortranslatorconfiguredialog->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureDialog::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureDialog_SuperKeyReleaseEvent(TextTranslator__TranslatorConfigureDialog* self, QKeyEvent* event) {
    if (auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self)) {
        vtexttranslatortranslatorconfiguredialog->TextTranslator::TranslatorConfigureDialog::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureDialog::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureDialog_OnKeyReleaseEvent(TextTranslator__TranslatorConfigureDialog* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self))
        vtexttranslatortranslatorconfiguredialog->texttranslator__translatorconfiguredialog_keyreleaseevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureDialog::TextTranslator__TranslatorConfigureDialog_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureDialog_FocusInEvent(TextTranslator__TranslatorConfigureDialog* self, QFocusEvent* event) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog) {
        vtexttranslatortranslatorconfiguredialog->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureDialog::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureDialog_SuperFocusInEvent(TextTranslator__TranslatorConfigureDialog* self, QFocusEvent* event) {
    if (auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self)) {
        vtexttranslatortranslatorconfiguredialog->TextTranslator::TranslatorConfigureDialog::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureDialog::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureDialog_OnFocusInEvent(TextTranslator__TranslatorConfigureDialog* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self))
        vtexttranslatortranslatorconfiguredialog->texttranslator__translatorconfiguredialog_focusinevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureDialog::TextTranslator__TranslatorConfigureDialog_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureDialog_FocusOutEvent(TextTranslator__TranslatorConfigureDialog* self, QFocusEvent* event) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog) {
        vtexttranslatortranslatorconfiguredialog->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureDialog::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureDialog_SuperFocusOutEvent(TextTranslator__TranslatorConfigureDialog* self, QFocusEvent* event) {
    if (auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self)) {
        vtexttranslatortranslatorconfiguredialog->TextTranslator::TranslatorConfigureDialog::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureDialog::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureDialog_OnFocusOutEvent(TextTranslator__TranslatorConfigureDialog* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self))
        vtexttranslatortranslatorconfiguredialog->texttranslator__translatorconfiguredialog_focusoutevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureDialog::TextTranslator__TranslatorConfigureDialog_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureDialog_EnterEvent(TextTranslator__TranslatorConfigureDialog* self, QEnterEvent* event) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog) {
        vtexttranslatortranslatorconfiguredialog->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureDialog::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureDialog_SuperEnterEvent(TextTranslator__TranslatorConfigureDialog* self, QEnterEvent* event) {
    if (auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self)) {
        vtexttranslatortranslatorconfiguredialog->TextTranslator::TranslatorConfigureDialog::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureDialog::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureDialog_OnEnterEvent(TextTranslator__TranslatorConfigureDialog* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self))
        vtexttranslatortranslatorconfiguredialog->texttranslator__translatorconfiguredialog_enterevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureDialog::TextTranslator__TranslatorConfigureDialog_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureDialog_LeaveEvent(TextTranslator__TranslatorConfigureDialog* self, QEvent* event) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog) {
        vtexttranslatortranslatorconfiguredialog->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureDialog::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureDialog_SuperLeaveEvent(TextTranslator__TranslatorConfigureDialog* self, QEvent* event) {
    if (auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self)) {
        vtexttranslatortranslatorconfiguredialog->TextTranslator::TranslatorConfigureDialog::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureDialog::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureDialog_OnLeaveEvent(TextTranslator__TranslatorConfigureDialog* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self))
        vtexttranslatortranslatorconfiguredialog->texttranslator__translatorconfiguredialog_leaveevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureDialog::TextTranslator__TranslatorConfigureDialog_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureDialog_PaintEvent(TextTranslator__TranslatorConfigureDialog* self, QPaintEvent* event) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog) {
        vtexttranslatortranslatorconfiguredialog->paintEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureDialog::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureDialog_SuperPaintEvent(TextTranslator__TranslatorConfigureDialog* self, QPaintEvent* event) {
    if (auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self)) {
        vtexttranslatortranslatorconfiguredialog->TextTranslator::TranslatorConfigureDialog::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureDialog::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureDialog_OnPaintEvent(TextTranslator__TranslatorConfigureDialog* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self))
        vtexttranslatortranslatorconfiguredialog->texttranslator__translatorconfiguredialog_paintevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureDialog::TextTranslator__TranslatorConfigureDialog_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureDialog_MoveEvent(TextTranslator__TranslatorConfigureDialog* self, QMoveEvent* event) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog) {
        vtexttranslatortranslatorconfiguredialog->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureDialog::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureDialog_SuperMoveEvent(TextTranslator__TranslatorConfigureDialog* self, QMoveEvent* event) {
    if (auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self)) {
        vtexttranslatortranslatorconfiguredialog->TextTranslator::TranslatorConfigureDialog::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureDialog::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureDialog_OnMoveEvent(TextTranslator__TranslatorConfigureDialog* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self))
        vtexttranslatortranslatorconfiguredialog->texttranslator__translatorconfiguredialog_moveevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureDialog::TextTranslator__TranslatorConfigureDialog_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureDialog_TabletEvent(TextTranslator__TranslatorConfigureDialog* self, QTabletEvent* event) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog) {
        vtexttranslatortranslatorconfiguredialog->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureDialog::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureDialog_SuperTabletEvent(TextTranslator__TranslatorConfigureDialog* self, QTabletEvent* event) {
    if (auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self)) {
        vtexttranslatortranslatorconfiguredialog->TextTranslator::TranslatorConfigureDialog::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureDialog::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureDialog_OnTabletEvent(TextTranslator__TranslatorConfigureDialog* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self))
        vtexttranslatortranslatorconfiguredialog->texttranslator__translatorconfiguredialog_tabletevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureDialog::TextTranslator__TranslatorConfigureDialog_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureDialog_ActionEvent(TextTranslator__TranslatorConfigureDialog* self, QActionEvent* event) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog) {
        vtexttranslatortranslatorconfiguredialog->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureDialog::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureDialog_SuperActionEvent(TextTranslator__TranslatorConfigureDialog* self, QActionEvent* event) {
    if (auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self)) {
        vtexttranslatortranslatorconfiguredialog->TextTranslator::TranslatorConfigureDialog::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureDialog::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureDialog_OnActionEvent(TextTranslator__TranslatorConfigureDialog* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self))
        vtexttranslatortranslatorconfiguredialog->texttranslator__translatorconfiguredialog_actionevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureDialog::TextTranslator__TranslatorConfigureDialog_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureDialog_DragEnterEvent(TextTranslator__TranslatorConfigureDialog* self, QDragEnterEvent* event) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog) {
        vtexttranslatortranslatorconfiguredialog->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureDialog::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureDialog_SuperDragEnterEvent(TextTranslator__TranslatorConfigureDialog* self, QDragEnterEvent* event) {
    if (auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self)) {
        vtexttranslatortranslatorconfiguredialog->TextTranslator::TranslatorConfigureDialog::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureDialog::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureDialog_OnDragEnterEvent(TextTranslator__TranslatorConfigureDialog* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self))
        vtexttranslatortranslatorconfiguredialog->texttranslator__translatorconfiguredialog_dragenterevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureDialog::TextTranslator__TranslatorConfigureDialog_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureDialog_DragMoveEvent(TextTranslator__TranslatorConfigureDialog* self, QDragMoveEvent* event) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog) {
        vtexttranslatortranslatorconfiguredialog->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureDialog::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureDialog_SuperDragMoveEvent(TextTranslator__TranslatorConfigureDialog* self, QDragMoveEvent* event) {
    if (auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self)) {
        vtexttranslatortranslatorconfiguredialog->TextTranslator::TranslatorConfigureDialog::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureDialog::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureDialog_OnDragMoveEvent(TextTranslator__TranslatorConfigureDialog* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self))
        vtexttranslatortranslatorconfiguredialog->texttranslator__translatorconfiguredialog_dragmoveevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureDialog::TextTranslator__TranslatorConfigureDialog_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureDialog_DragLeaveEvent(TextTranslator__TranslatorConfigureDialog* self, QDragLeaveEvent* event) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog) {
        vtexttranslatortranslatorconfiguredialog->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureDialog::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureDialog_SuperDragLeaveEvent(TextTranslator__TranslatorConfigureDialog* self, QDragLeaveEvent* event) {
    if (auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self)) {
        vtexttranslatortranslatorconfiguredialog->TextTranslator::TranslatorConfigureDialog::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureDialog::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureDialog_OnDragLeaveEvent(TextTranslator__TranslatorConfigureDialog* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self))
        vtexttranslatortranslatorconfiguredialog->texttranslator__translatorconfiguredialog_dragleaveevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureDialog::TextTranslator__TranslatorConfigureDialog_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureDialog_DropEvent(TextTranslator__TranslatorConfigureDialog* self, QDropEvent* event) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog) {
        vtexttranslatortranslatorconfiguredialog->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureDialog::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureDialog_SuperDropEvent(TextTranslator__TranslatorConfigureDialog* self, QDropEvent* event) {
    if (auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self)) {
        vtexttranslatortranslatorconfiguredialog->TextTranslator::TranslatorConfigureDialog::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureDialog::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureDialog_OnDropEvent(TextTranslator__TranslatorConfigureDialog* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self))
        vtexttranslatortranslatorconfiguredialog->texttranslator__translatorconfiguredialog_dropevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureDialog::TextTranslator__TranslatorConfigureDialog_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureDialog_HideEvent(TextTranslator__TranslatorConfigureDialog* self, QHideEvent* event) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog) {
        vtexttranslatortranslatorconfiguredialog->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureDialog::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureDialog_SuperHideEvent(TextTranslator__TranslatorConfigureDialog* self, QHideEvent* event) {
    if (auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self)) {
        vtexttranslatortranslatorconfiguredialog->TextTranslator::TranslatorConfigureDialog::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureDialog::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureDialog_OnHideEvent(TextTranslator__TranslatorConfigureDialog* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self))
        vtexttranslatortranslatorconfiguredialog->texttranslator__translatorconfiguredialog_hideevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureDialog::TextTranslator__TranslatorConfigureDialog_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool TextTranslator__TranslatorConfigureDialog_NativeEvent(TextTranslator__TranslatorConfigureDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog) {
        return vtexttranslatortranslatorconfiguredialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureDialog::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool TextTranslator__TranslatorConfigureDialog_SuperNativeEvent(TextTranslator__TranslatorConfigureDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self)) {
        return vtexttranslatortranslatorconfiguredialog->TextTranslator::TranslatorConfigureDialog::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureDialog::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureDialog_OnNativeEvent(TextTranslator__TranslatorConfigureDialog* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self))
        vtexttranslatortranslatorconfiguredialog->texttranslator__translatorconfiguredialog_nativeevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureDialog::TextTranslator__TranslatorConfigureDialog_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureDialog_ChangeEvent(TextTranslator__TranslatorConfigureDialog* self, QEvent* param1) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog) {
        vtexttranslatortranslatorconfiguredialog->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureDialog::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureDialog_SuperChangeEvent(TextTranslator__TranslatorConfigureDialog* self, QEvent* param1) {
    if (auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self)) {
        vtexttranslatortranslatorconfiguredialog->TextTranslator::TranslatorConfigureDialog::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureDialog::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureDialog_OnChangeEvent(TextTranslator__TranslatorConfigureDialog* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self))
        vtexttranslatortranslatorconfiguredialog->texttranslator__translatorconfiguredialog_changeevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureDialog::TextTranslator__TranslatorConfigureDialog_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
int TextTranslator__TranslatorConfigureDialog_Metric(const TextTranslator__TranslatorConfigureDialog* self, int param1) {
    auto* vtexttranslatortranslatorconfiguredialog = const_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureDialog*>(self));
    if (vtexttranslatortranslatorconfiguredialog) {
        return vtexttranslatortranslatorconfiguredialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureDialog::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int TextTranslator__TranslatorConfigureDialog_SuperMetric(const TextTranslator__TranslatorConfigureDialog* self, int param1) {
    if (auto* vtexttranslatortranslatorconfiguredialog = const_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureDialog*>(self))) {
        return vtexttranslatortranslatorconfiguredialog->TextTranslator::TranslatorConfigureDialog::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureDialog::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureDialog_OnMetric(TextTranslator__TranslatorConfigureDialog* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfiguredialog = const_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureDialog*>(self)))
        vtexttranslatortranslatorconfiguredialog->texttranslator__translatorconfiguredialog_metric_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureDialog::TextTranslator__TranslatorConfigureDialog_Metric_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureDialog_InitPainter(const TextTranslator__TranslatorConfigureDialog* self, QPainter* painter) {
    auto* vtexttranslatortranslatorconfiguredialog = const_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureDialog*>(self));
    if (vtexttranslatortranslatorconfiguredialog) {
        vtexttranslatortranslatorconfiguredialog->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureDialog::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureDialog_SuperInitPainter(const TextTranslator__TranslatorConfigureDialog* self, QPainter* painter) {
    if (auto* vtexttranslatortranslatorconfiguredialog = const_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureDialog*>(self))) {
        vtexttranslatortranslatorconfiguredialog->TextTranslator::TranslatorConfigureDialog::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureDialog::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureDialog_OnInitPainter(TextTranslator__TranslatorConfigureDialog* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfiguredialog = const_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureDialog*>(self)))
        vtexttranslatortranslatorconfiguredialog->texttranslator__translatorconfiguredialog_initpainter_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureDialog::TextTranslator__TranslatorConfigureDialog_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* TextTranslator__TranslatorConfigureDialog_Redirected(const TextTranslator__TranslatorConfigureDialog* self, QPoint* offset) {
    auto* vtexttranslatortranslatorconfiguredialog = const_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureDialog*>(self));
    if (vtexttranslatortranslatorconfiguredialog) {
        return vtexttranslatortranslatorconfiguredialog->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureDialog::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* TextTranslator__TranslatorConfigureDialog_SuperRedirected(const TextTranslator__TranslatorConfigureDialog* self, QPoint* offset) {
    if (auto* vtexttranslatortranslatorconfiguredialog = const_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureDialog*>(self))) {
        return vtexttranslatortranslatorconfiguredialog->TextTranslator::TranslatorConfigureDialog::redirected(offset);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureDialog::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureDialog_OnRedirected(TextTranslator__TranslatorConfigureDialog* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfiguredialog = const_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureDialog*>(self)))
        vtexttranslatortranslatorconfiguredialog->texttranslator__translatorconfiguredialog_redirected_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureDialog::TextTranslator__TranslatorConfigureDialog_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* TextTranslator__TranslatorConfigureDialog_SharedPainter(const TextTranslator__TranslatorConfigureDialog* self) {
    auto* vtexttranslatortranslatorconfiguredialog = const_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureDialog*>(self));
    if (vtexttranslatortranslatorconfiguredialog) {
        return vtexttranslatortranslatorconfiguredialog->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureDialog::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* TextTranslator__TranslatorConfigureDialog_SuperSharedPainter(const TextTranslator__TranslatorConfigureDialog* self) {
    if (auto* vtexttranslatortranslatorconfiguredialog = const_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureDialog*>(self))) {
        return vtexttranslatortranslatorconfiguredialog->TextTranslator::TranslatorConfigureDialog::sharedPainter();
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureDialog::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureDialog_OnSharedPainter(TextTranslator__TranslatorConfigureDialog* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfiguredialog = const_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureDialog*>(self)))
        vtexttranslatortranslatorconfiguredialog->texttranslator__translatorconfiguredialog_sharedpainter_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureDialog::TextTranslator__TranslatorConfigureDialog_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureDialog_InputMethodEvent(TextTranslator__TranslatorConfigureDialog* self, QInputMethodEvent* param1) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog) {
        vtexttranslatortranslatorconfiguredialog->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureDialog::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureDialog_SuperInputMethodEvent(TextTranslator__TranslatorConfigureDialog* self, QInputMethodEvent* param1) {
    if (auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self)) {
        vtexttranslatortranslatorconfiguredialog->TextTranslator::TranslatorConfigureDialog::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureDialog::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureDialog_OnInputMethodEvent(TextTranslator__TranslatorConfigureDialog* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self))
        vtexttranslatortranslatorconfiguredialog->texttranslator__translatorconfiguredialog_inputmethodevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureDialog::TextTranslator__TranslatorConfigureDialog_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* TextTranslator__TranslatorConfigureDialog_InputMethodQuery(const TextTranslator__TranslatorConfigureDialog* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* TextTranslator__TranslatorConfigureDialog_SuperInputMethodQuery(const TextTranslator__TranslatorConfigureDialog* self, int param1) {
    return new QVariant(self->TextTranslator::TranslatorConfigureDialog::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureDialog_OnInputMethodQuery(TextTranslator__TranslatorConfigureDialog* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfiguredialog = const_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureDialog*>(self)))
        vtexttranslatortranslatorconfiguredialog->texttranslator__translatorconfiguredialog_inputmethodquery_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureDialog::TextTranslator__TranslatorConfigureDialog_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool TextTranslator__TranslatorConfigureDialog_FocusNextPrevChild(TextTranslator__TranslatorConfigureDialog* self, bool next) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog) {
        return vtexttranslatortranslatorconfiguredialog->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureDialog::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool TextTranslator__TranslatorConfigureDialog_SuperFocusNextPrevChild(TextTranslator__TranslatorConfigureDialog* self, bool next) {
    if (auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self)) {
        return vtexttranslatortranslatorconfiguredialog->TextTranslator::TranslatorConfigureDialog::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureDialog::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureDialog_OnFocusNextPrevChild(TextTranslator__TranslatorConfigureDialog* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self))
        vtexttranslatortranslatorconfiguredialog->texttranslator__translatorconfiguredialog_focusnextprevchild_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureDialog::TextTranslator__TranslatorConfigureDialog_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureDialog_TimerEvent(TextTranslator__TranslatorConfigureDialog* self, QTimerEvent* event) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog) {
        vtexttranslatortranslatorconfiguredialog->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureDialog::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureDialog_SuperTimerEvent(TextTranslator__TranslatorConfigureDialog* self, QTimerEvent* event) {
    if (auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self)) {
        vtexttranslatortranslatorconfiguredialog->TextTranslator::TranslatorConfigureDialog::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureDialog::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureDialog_OnTimerEvent(TextTranslator__TranslatorConfigureDialog* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self))
        vtexttranslatortranslatorconfiguredialog->texttranslator__translatorconfiguredialog_timerevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureDialog::TextTranslator__TranslatorConfigureDialog_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureDialog_ChildEvent(TextTranslator__TranslatorConfigureDialog* self, QChildEvent* event) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog) {
        vtexttranslatortranslatorconfiguredialog->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureDialog::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureDialog_SuperChildEvent(TextTranslator__TranslatorConfigureDialog* self, QChildEvent* event) {
    if (auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self)) {
        vtexttranslatortranslatorconfiguredialog->TextTranslator::TranslatorConfigureDialog::childEvent(event);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureDialog::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureDialog_OnChildEvent(TextTranslator__TranslatorConfigureDialog* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self))
        vtexttranslatortranslatorconfiguredialog->texttranslator__translatorconfiguredialog_childevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureDialog::TextTranslator__TranslatorConfigureDialog_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureDialog_CustomEvent(TextTranslator__TranslatorConfigureDialog* self, QEvent* event) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog) {
        vtexttranslatortranslatorconfiguredialog->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureDialog::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureDialog_SuperCustomEvent(TextTranslator__TranslatorConfigureDialog* self, QEvent* event) {
    if (auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self)) {
        vtexttranslatortranslatorconfiguredialog->TextTranslator::TranslatorConfigureDialog::customEvent(event);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureDialog::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureDialog_OnCustomEvent(TextTranslator__TranslatorConfigureDialog* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self))
        vtexttranslatortranslatorconfiguredialog->texttranslator__translatorconfiguredialog_customevent_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureDialog::TextTranslator__TranslatorConfigureDialog_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureDialog_ConnectNotify(TextTranslator__TranslatorConfigureDialog* self, const QMetaMethod* signal) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog) {
        vtexttranslatortranslatorconfiguredialog->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureDialog::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureDialog_SuperConnectNotify(TextTranslator__TranslatorConfigureDialog* self, const QMetaMethod* signal) {
    if (auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self)) {
        vtexttranslatortranslatorconfiguredialog->TextTranslator::TranslatorConfigureDialog::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureDialog::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureDialog_OnConnectNotify(TextTranslator__TranslatorConfigureDialog* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self))
        vtexttranslatortranslatorconfiguredialog->texttranslator__translatorconfiguredialog_connectnotify_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureDialog::TextTranslator__TranslatorConfigureDialog_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void TextTranslator__TranslatorConfigureDialog_DisconnectNotify(TextTranslator__TranslatorConfigureDialog* self, const QMetaMethod* signal) {
    auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self);
    if (vtexttranslatortranslatorconfiguredialog) {
        vtexttranslatortranslatorconfiguredialog->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureDialog::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void TextTranslator__TranslatorConfigureDialog_SuperDisconnectNotify(TextTranslator__TranslatorConfigureDialog* self, const QMetaMethod* signal) {
    if (auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self)) {
        vtexttranslatortranslatorconfiguredialog->TextTranslator::TranslatorConfigureDialog::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method TextTranslator::TranslatorConfigureDialog::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextTranslator__TranslatorConfigureDialog_OnDisconnectNotify(TextTranslator__TranslatorConfigureDialog* self, intptr_t slot) {
    if (auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self))
        vtexttranslatortranslatorconfiguredialog->texttranslator__translatorconfiguredialog_disconnectnotify_callback = reinterpret_cast<VirtualTextTranslatorTranslatorConfigureDialog::TextTranslator__TranslatorConfigureDialog_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void TextTranslator__TranslatorConfigureDialog_AdjustPosition(TextTranslator__TranslatorConfigureDialog* self, QWidget* param1) {
    if (auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self)) {
        vtexttranslatortranslatorconfiguredialog->VirtualTextTranslatorTranslatorConfigureDialog::adjustPosition(param1);
    } else
        qFatal("Error: Protected method TextTranslator::TranslatorConfigureDialog::adjustPosition called without a directly constructed type");
}

// Derived class protected handler implementation
void TextTranslator__TranslatorConfigureDialog_UpdateMicroFocus(TextTranslator__TranslatorConfigureDialog* self) {
    if (auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self)) {
        vtexttranslatortranslatorconfiguredialog->VirtualTextTranslatorTranslatorConfigureDialog::updateMicroFocus();
    } else
        qFatal("Error: Protected method TextTranslator::TranslatorConfigureDialog::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void TextTranslator__TranslatorConfigureDialog_Create(TextTranslator__TranslatorConfigureDialog* self) {
    if (auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self)) {
        vtexttranslatortranslatorconfiguredialog->VirtualTextTranslatorTranslatorConfigureDialog::create();
    } else
        qFatal("Error: Protected method TextTranslator::TranslatorConfigureDialog::create called without a directly constructed type");
}

// Derived class protected handler implementation
void TextTranslator__TranslatorConfigureDialog_Destroy(TextTranslator__TranslatorConfigureDialog* self) {
    if (auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self)) {
        vtexttranslatortranslatorconfiguredialog->VirtualTextTranslatorTranslatorConfigureDialog::destroy();
    } else
        qFatal("Error: Protected method TextTranslator::TranslatorConfigureDialog::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool TextTranslator__TranslatorConfigureDialog_FocusNextChild(TextTranslator__TranslatorConfigureDialog* self) {
    if (auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self)) {
        return vtexttranslatortranslatorconfiguredialog->VirtualTextTranslatorTranslatorConfigureDialog::focusNextChild();
    } else
        qFatal("Error: Protected method TextTranslator::TranslatorConfigureDialog::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool TextTranslator__TranslatorConfigureDialog_FocusPreviousChild(TextTranslator__TranslatorConfigureDialog* self) {
    if (auto* vtexttranslatortranslatorconfiguredialog = dynamic_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(self)) {
        return vtexttranslatortranslatorconfiguredialog->VirtualTextTranslatorTranslatorConfigureDialog::focusPreviousChild();
    } else
        qFatal("Error: Protected method TextTranslator::TranslatorConfigureDialog::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* TextTranslator__TranslatorConfigureDialog_Sender(const TextTranslator__TranslatorConfigureDialog* self) {
    if (auto* vtexttranslatortranslatorconfiguredialog = const_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureDialog*>(self))) {
        return vtexttranslatortranslatorconfiguredialog->VirtualTextTranslatorTranslatorConfigureDialog::sender();
    } else
        qFatal("Error: Protected method TextTranslator::TranslatorConfigureDialog::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int TextTranslator__TranslatorConfigureDialog_SenderSignalIndex(const TextTranslator__TranslatorConfigureDialog* self) {
    if (auto* vtexttranslatortranslatorconfiguredialog = const_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureDialog*>(self))) {
        return vtexttranslatortranslatorconfiguredialog->VirtualTextTranslatorTranslatorConfigureDialog::senderSignalIndex();
    } else
        qFatal("Error: Protected method TextTranslator::TranslatorConfigureDialog::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int TextTranslator__TranslatorConfigureDialog_Receivers(const TextTranslator__TranslatorConfigureDialog* self, const char* signal) {
    if (auto* vtexttranslatortranslatorconfiguredialog = const_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureDialog*>(self))) {
        return vtexttranslatortranslatorconfiguredialog->VirtualTextTranslatorTranslatorConfigureDialog::receivers(signal);
    } else
        qFatal("Error: Protected method TextTranslator::TranslatorConfigureDialog::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool TextTranslator__TranslatorConfigureDialog_IsSignalConnected(const TextTranslator__TranslatorConfigureDialog* self, const QMetaMethod* signal) {
    if (auto* vtexttranslatortranslatorconfiguredialog = const_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureDialog*>(self))) {
        return vtexttranslatortranslatorconfiguredialog->VirtualTextTranslatorTranslatorConfigureDialog::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method TextTranslator::TranslatorConfigureDialog::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double TextTranslator__TranslatorConfigureDialog_GetDecodedMetricF(const TextTranslator__TranslatorConfigureDialog* self, int metricA, int metricB) {
    if (auto* vtexttranslatortranslatorconfiguredialog = const_cast<VirtualTextTranslatorTranslatorConfigureDialog*>(dynamic_cast<const VirtualTextTranslatorTranslatorConfigureDialog*>(self))) {
        return vtexttranslatortranslatorconfiguredialog->VirtualTextTranslatorTranslatorConfigureDialog::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method TextTranslator::TranslatorConfigureDialog::getDecodedMetricF called without a directly constructed type");
}

void TextTranslator__TranslatorConfigureDialog_Delete(TextTranslator__TranslatorConfigureDialog* self) {
    delete self;
}
