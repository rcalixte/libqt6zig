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
    return (QMetaObject*)self->metaObject();
}

void* TextGrammarCheck__LanguageToolConfigDialog_Metacast(TextGrammarCheck__LanguageToolConfigDialog* self, const char* param1) {
    return self->qt_metacast(param1);
}

int TextGrammarCheck__LanguageToolConfigDialog_Metacall(TextGrammarCheck__LanguageToolConfigDialog* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string TextGrammarCheck__LanguageToolConfigDialog_Tr(const char* s) {
    auto _ret = TextGrammarCheck::LanguageToolConfigDialog::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string TextGrammarCheck__LanguageToolConfigDialog_Tr2(const char* s, const char* c) {
    auto _ret = TextGrammarCheck::LanguageToolConfigDialog::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string TextGrammarCheck__LanguageToolConfigDialog_Tr3(const char* s, const char* c, int n) {
    auto _ret = TextGrammarCheck::LanguageToolConfigDialog::tr(s, c, static_cast<int>(n));
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
QMetaObject* TextGrammarCheck__LanguageToolConfigDialog_SuperMetaObject(const TextGrammarCheck__LanguageToolConfigDialog* self) {
    return (QMetaObject*)self->TextGrammarCheck::LanguageToolConfigDialog::metaObject();
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigDialog_OnMetaObject(TextGrammarCheck__LanguageToolConfigDialog* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolconfigdialog = const_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigDialog*>(self)))
        vtextgrammarchecklanguagetoolconfigdialog->textgrammarcheck__languagetoolconfigdialog_metaobject_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigDialog::TextGrammarCheck__LanguageToolConfigDialog_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* TextGrammarCheck__LanguageToolConfigDialog_SuperMetacast(TextGrammarCheck__LanguageToolConfigDialog* self, const char* param1) {
    return self->TextGrammarCheck::LanguageToolConfigDialog::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigDialog_OnMetacast(TextGrammarCheck__LanguageToolConfigDialog* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self))
        vtextgrammarchecklanguagetoolconfigdialog->textgrammarcheck__languagetoolconfigdialog_metacast_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigDialog::TextGrammarCheck__LanguageToolConfigDialog_Metacast_Callback>(slot);
}

// Base class handler implementation
int TextGrammarCheck__LanguageToolConfigDialog_SuperMetacall(TextGrammarCheck__LanguageToolConfigDialog* self, int param1, int param2, void** param3) {
    return self->TextGrammarCheck::LanguageToolConfigDialog::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigDialog_OnMetacall(TextGrammarCheck__LanguageToolConfigDialog* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self))
        vtextgrammarchecklanguagetoolconfigdialog->textgrammarcheck__languagetoolconfigdialog_metacall_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigDialog::TextGrammarCheck__LanguageToolConfigDialog_Metacall_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_SetVisible(TextGrammarCheck__LanguageToolConfigDialog* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_SuperSetVisible(TextGrammarCheck__LanguageToolConfigDialog* self, bool visible) {
    self->TextGrammarCheck::LanguageToolConfigDialog::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigDialog_OnSetVisible(TextGrammarCheck__LanguageToolConfigDialog* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self))
        vtextgrammarchecklanguagetoolconfigdialog->textgrammarcheck__languagetoolconfigdialog_setvisible_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigDialog::TextGrammarCheck__LanguageToolConfigDialog_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* TextGrammarCheck__LanguageToolConfigDialog_SizeHint(const TextGrammarCheck__LanguageToolConfigDialog* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* TextGrammarCheck__LanguageToolConfigDialog_SuperSizeHint(const TextGrammarCheck__LanguageToolConfigDialog* self) {
    return new QSize(self->TextGrammarCheck::LanguageToolConfigDialog::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigDialog_OnSizeHint(TextGrammarCheck__LanguageToolConfigDialog* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolconfigdialog = const_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigDialog*>(self)))
        vtextgrammarchecklanguagetoolconfigdialog->textgrammarcheck__languagetoolconfigdialog_sizehint_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigDialog::TextGrammarCheck__LanguageToolConfigDialog_SizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* TextGrammarCheck__LanguageToolConfigDialog_MinimumSizeHint(const TextGrammarCheck__LanguageToolConfigDialog* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* TextGrammarCheck__LanguageToolConfigDialog_SuperMinimumSizeHint(const TextGrammarCheck__LanguageToolConfigDialog* self) {
    return new QSize(self->TextGrammarCheck::LanguageToolConfigDialog::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigDialog_OnMinimumSizeHint(TextGrammarCheck__LanguageToolConfigDialog* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolconfigdialog = const_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigDialog*>(self)))
        vtextgrammarchecklanguagetoolconfigdialog->textgrammarcheck__languagetoolconfigdialog_minimumsizehint_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigDialog::TextGrammarCheck__LanguageToolConfigDialog_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_Open(TextGrammarCheck__LanguageToolConfigDialog* self) {
    self->open();
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_SuperOpen(TextGrammarCheck__LanguageToolConfigDialog* self) {
    self->TextGrammarCheck::LanguageToolConfigDialog::open();
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigDialog_OnOpen(TextGrammarCheck__LanguageToolConfigDialog* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self))
        vtextgrammarchecklanguagetoolconfigdialog->textgrammarcheck__languagetoolconfigdialog_open_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigDialog::TextGrammarCheck__LanguageToolConfigDialog_Open_Callback>(slot);
}

// Derived class handler implementation
int TextGrammarCheck__LanguageToolConfigDialog_Exec(TextGrammarCheck__LanguageToolConfigDialog* self) {
    return self->exec();
}

// Base class handler implementation
int TextGrammarCheck__LanguageToolConfigDialog_SuperExec(TextGrammarCheck__LanguageToolConfigDialog* self) {
    return self->TextGrammarCheck::LanguageToolConfigDialog::exec();
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigDialog_OnExec(TextGrammarCheck__LanguageToolConfigDialog* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self))
        vtextgrammarchecklanguagetoolconfigdialog->textgrammarcheck__languagetoolconfigdialog_exec_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigDialog::TextGrammarCheck__LanguageToolConfigDialog_Exec_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_Done(TextGrammarCheck__LanguageToolConfigDialog* self, int param1) {
    self->done(static_cast<int>(param1));
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_SuperDone(TextGrammarCheck__LanguageToolConfigDialog* self, int param1) {
    self->TextGrammarCheck::LanguageToolConfigDialog::done(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigDialog_OnDone(TextGrammarCheck__LanguageToolConfigDialog* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self))
        vtextgrammarchecklanguagetoolconfigdialog->textgrammarcheck__languagetoolconfigdialog_done_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigDialog::TextGrammarCheck__LanguageToolConfigDialog_Done_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_Accept(TextGrammarCheck__LanguageToolConfigDialog* self) {
    self->accept();
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_SuperAccept(TextGrammarCheck__LanguageToolConfigDialog* self) {
    self->TextGrammarCheck::LanguageToolConfigDialog::accept();
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigDialog_OnAccept(TextGrammarCheck__LanguageToolConfigDialog* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self))
        vtextgrammarchecklanguagetoolconfigdialog->textgrammarcheck__languagetoolconfigdialog_accept_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigDialog::TextGrammarCheck__LanguageToolConfigDialog_Accept_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_Reject(TextGrammarCheck__LanguageToolConfigDialog* self) {
    self->reject();
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_SuperReject(TextGrammarCheck__LanguageToolConfigDialog* self) {
    self->TextGrammarCheck::LanguageToolConfigDialog::reject();
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigDialog_OnReject(TextGrammarCheck__LanguageToolConfigDialog* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self))
        vtextgrammarchecklanguagetoolconfigdialog->textgrammarcheck__languagetoolconfigdialog_reject_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigDialog::TextGrammarCheck__LanguageToolConfigDialog_Reject_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_KeyPressEvent(TextGrammarCheck__LanguageToolConfigDialog* self, QKeyEvent* param1) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog) {
        vtextgrammarchecklanguagetoolconfigdialog->keyPressEvent(param1);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigDialog::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_SuperKeyPressEvent(TextGrammarCheck__LanguageToolConfigDialog* self, QKeyEvent* param1) {
    if (auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self)) {
        vtextgrammarchecklanguagetoolconfigdialog->TextGrammarCheck::LanguageToolConfigDialog::keyPressEvent(param1);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigDialog::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigDialog_OnKeyPressEvent(TextGrammarCheck__LanguageToolConfigDialog* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self))
        vtextgrammarchecklanguagetoolconfigdialog->textgrammarcheck__languagetoolconfigdialog_keypressevent_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigDialog::TextGrammarCheck__LanguageToolConfigDialog_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_CloseEvent(TextGrammarCheck__LanguageToolConfigDialog* self, QCloseEvent* param1) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog) {
        vtextgrammarchecklanguagetoolconfigdialog->closeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigDialog::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_SuperCloseEvent(TextGrammarCheck__LanguageToolConfigDialog* self, QCloseEvent* param1) {
    if (auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self)) {
        vtextgrammarchecklanguagetoolconfigdialog->TextGrammarCheck::LanguageToolConfigDialog::closeEvent(param1);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigDialog::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigDialog_OnCloseEvent(TextGrammarCheck__LanguageToolConfigDialog* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self))
        vtextgrammarchecklanguagetoolconfigdialog->textgrammarcheck__languagetoolconfigdialog_closeevent_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigDialog::TextGrammarCheck__LanguageToolConfigDialog_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_ShowEvent(TextGrammarCheck__LanguageToolConfigDialog* self, QShowEvent* param1) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog) {
        vtextgrammarchecklanguagetoolconfigdialog->showEvent(param1);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigDialog::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_SuperShowEvent(TextGrammarCheck__LanguageToolConfigDialog* self, QShowEvent* param1) {
    if (auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self)) {
        vtextgrammarchecklanguagetoolconfigdialog->TextGrammarCheck::LanguageToolConfigDialog::showEvent(param1);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigDialog::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigDialog_OnShowEvent(TextGrammarCheck__LanguageToolConfigDialog* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self))
        vtextgrammarchecklanguagetoolconfigdialog->textgrammarcheck__languagetoolconfigdialog_showevent_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigDialog::TextGrammarCheck__LanguageToolConfigDialog_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_ResizeEvent(TextGrammarCheck__LanguageToolConfigDialog* self, QResizeEvent* param1) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog) {
        vtextgrammarchecklanguagetoolconfigdialog->resizeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigDialog::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_SuperResizeEvent(TextGrammarCheck__LanguageToolConfigDialog* self, QResizeEvent* param1) {
    if (auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self)) {
        vtextgrammarchecklanguagetoolconfigdialog->TextGrammarCheck::LanguageToolConfigDialog::resizeEvent(param1);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigDialog::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigDialog_OnResizeEvent(TextGrammarCheck__LanguageToolConfigDialog* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self))
        vtextgrammarchecklanguagetoolconfigdialog->textgrammarcheck__languagetoolconfigdialog_resizeevent_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigDialog::TextGrammarCheck__LanguageToolConfigDialog_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_ContextMenuEvent(TextGrammarCheck__LanguageToolConfigDialog* self, QContextMenuEvent* param1) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog) {
        vtextgrammarchecklanguagetoolconfigdialog->contextMenuEvent(param1);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigDialog::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_SuperContextMenuEvent(TextGrammarCheck__LanguageToolConfigDialog* self, QContextMenuEvent* param1) {
    if (auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self)) {
        vtextgrammarchecklanguagetoolconfigdialog->TextGrammarCheck::LanguageToolConfigDialog::contextMenuEvent(param1);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigDialog::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigDialog_OnContextMenuEvent(TextGrammarCheck__LanguageToolConfigDialog* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self))
        vtextgrammarchecklanguagetoolconfigdialog->textgrammarcheck__languagetoolconfigdialog_contextmenuevent_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigDialog::TextGrammarCheck__LanguageToolConfigDialog_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
bool TextGrammarCheck__LanguageToolConfigDialog_EventFilter(TextGrammarCheck__LanguageToolConfigDialog* self, QObject* param1, QEvent* param2) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog) {
        return vtextgrammarchecklanguagetoolconfigdialog->eventFilter(param1, param2);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigDialog::eventFilter called without a directly constructed type");
    }
}

// Base class handler implementation
bool TextGrammarCheck__LanguageToolConfigDialog_SuperEventFilter(TextGrammarCheck__LanguageToolConfigDialog* self, QObject* param1, QEvent* param2) {
    if (auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self)) {
        return vtextgrammarchecklanguagetoolconfigdialog->TextGrammarCheck::LanguageToolConfigDialog::eventFilter(param1, param2);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigDialog::eventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigDialog_OnEventFilter(TextGrammarCheck__LanguageToolConfigDialog* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self))
        vtextgrammarchecklanguagetoolconfigdialog->textgrammarcheck__languagetoolconfigdialog_eventfilter_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigDialog::TextGrammarCheck__LanguageToolConfigDialog_EventFilter_Callback>(slot);
}

// Derived class handler implementation
int TextGrammarCheck__LanguageToolConfigDialog_DevType(const TextGrammarCheck__LanguageToolConfigDialog* self) {
    return self->devType();
}

// Base class handler implementation
int TextGrammarCheck__LanguageToolConfigDialog_SuperDevType(const TextGrammarCheck__LanguageToolConfigDialog* self) {
    return self->TextGrammarCheck::LanguageToolConfigDialog::devType();
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigDialog_OnDevType(TextGrammarCheck__LanguageToolConfigDialog* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolconfigdialog = const_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigDialog*>(self)))
        vtextgrammarchecklanguagetoolconfigdialog->textgrammarcheck__languagetoolconfigdialog_devtype_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigDialog::TextGrammarCheck__LanguageToolConfigDialog_DevType_Callback>(slot);
}

// Derived class handler implementation
int TextGrammarCheck__LanguageToolConfigDialog_HeightForWidth(const TextGrammarCheck__LanguageToolConfigDialog* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int TextGrammarCheck__LanguageToolConfigDialog_SuperHeightForWidth(const TextGrammarCheck__LanguageToolConfigDialog* self, int param1) {
    return self->TextGrammarCheck::LanguageToolConfigDialog::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigDialog_OnHeightForWidth(TextGrammarCheck__LanguageToolConfigDialog* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolconfigdialog = const_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigDialog*>(self)))
        vtextgrammarchecklanguagetoolconfigdialog->textgrammarcheck__languagetoolconfigdialog_heightforwidth_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigDialog::TextGrammarCheck__LanguageToolConfigDialog_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool TextGrammarCheck__LanguageToolConfigDialog_HasHeightForWidth(const TextGrammarCheck__LanguageToolConfigDialog* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool TextGrammarCheck__LanguageToolConfigDialog_SuperHasHeightForWidth(const TextGrammarCheck__LanguageToolConfigDialog* self) {
    return self->TextGrammarCheck::LanguageToolConfigDialog::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigDialog_OnHasHeightForWidth(TextGrammarCheck__LanguageToolConfigDialog* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolconfigdialog = const_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigDialog*>(self)))
        vtextgrammarchecklanguagetoolconfigdialog->textgrammarcheck__languagetoolconfigdialog_hasheightforwidth_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigDialog::TextGrammarCheck__LanguageToolConfigDialog_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* TextGrammarCheck__LanguageToolConfigDialog_PaintEngine(const TextGrammarCheck__LanguageToolConfigDialog* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* TextGrammarCheck__LanguageToolConfigDialog_SuperPaintEngine(const TextGrammarCheck__LanguageToolConfigDialog* self) {
    return self->TextGrammarCheck::LanguageToolConfigDialog::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigDialog_OnPaintEngine(TextGrammarCheck__LanguageToolConfigDialog* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolconfigdialog = const_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigDialog*>(self)))
        vtextgrammarchecklanguagetoolconfigdialog->textgrammarcheck__languagetoolconfigdialog_paintengine_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigDialog::TextGrammarCheck__LanguageToolConfigDialog_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
bool TextGrammarCheck__LanguageToolConfigDialog_Event(TextGrammarCheck__LanguageToolConfigDialog* self, QEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog) {
        return vtextgrammarchecklanguagetoolconfigdialog->event(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigDialog::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool TextGrammarCheck__LanguageToolConfigDialog_SuperEvent(TextGrammarCheck__LanguageToolConfigDialog* self, QEvent* event) {
    if (auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self)) {
        return vtextgrammarchecklanguagetoolconfigdialog->TextGrammarCheck::LanguageToolConfigDialog::event(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigDialog::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigDialog_OnEvent(TextGrammarCheck__LanguageToolConfigDialog* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self))
        vtextgrammarchecklanguagetoolconfigdialog->textgrammarcheck__languagetoolconfigdialog_event_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigDialog::TextGrammarCheck__LanguageToolConfigDialog_Event_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_MousePressEvent(TextGrammarCheck__LanguageToolConfigDialog* self, QMouseEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog) {
        vtextgrammarchecklanguagetoolconfigdialog->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigDialog::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_SuperMousePressEvent(TextGrammarCheck__LanguageToolConfigDialog* self, QMouseEvent* event) {
    if (auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self)) {
        vtextgrammarchecklanguagetoolconfigdialog->TextGrammarCheck::LanguageToolConfigDialog::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigDialog::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigDialog_OnMousePressEvent(TextGrammarCheck__LanguageToolConfigDialog* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self))
        vtextgrammarchecklanguagetoolconfigdialog->textgrammarcheck__languagetoolconfigdialog_mousepressevent_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigDialog::TextGrammarCheck__LanguageToolConfigDialog_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_MouseReleaseEvent(TextGrammarCheck__LanguageToolConfigDialog* self, QMouseEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog) {
        vtextgrammarchecklanguagetoolconfigdialog->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigDialog::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_SuperMouseReleaseEvent(TextGrammarCheck__LanguageToolConfigDialog* self, QMouseEvent* event) {
    if (auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self)) {
        vtextgrammarchecklanguagetoolconfigdialog->TextGrammarCheck::LanguageToolConfigDialog::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigDialog::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigDialog_OnMouseReleaseEvent(TextGrammarCheck__LanguageToolConfigDialog* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self))
        vtextgrammarchecklanguagetoolconfigdialog->textgrammarcheck__languagetoolconfigdialog_mousereleaseevent_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigDialog::TextGrammarCheck__LanguageToolConfigDialog_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_MouseDoubleClickEvent(TextGrammarCheck__LanguageToolConfigDialog* self, QMouseEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog) {
        vtextgrammarchecklanguagetoolconfigdialog->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigDialog::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_SuperMouseDoubleClickEvent(TextGrammarCheck__LanguageToolConfigDialog* self, QMouseEvent* event) {
    if (auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self)) {
        vtextgrammarchecklanguagetoolconfigdialog->TextGrammarCheck::LanguageToolConfigDialog::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigDialog::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigDialog_OnMouseDoubleClickEvent(TextGrammarCheck__LanguageToolConfigDialog* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self))
        vtextgrammarchecklanguagetoolconfigdialog->textgrammarcheck__languagetoolconfigdialog_mousedoubleclickevent_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigDialog::TextGrammarCheck__LanguageToolConfigDialog_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_MouseMoveEvent(TextGrammarCheck__LanguageToolConfigDialog* self, QMouseEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog) {
        vtextgrammarchecklanguagetoolconfigdialog->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigDialog::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_SuperMouseMoveEvent(TextGrammarCheck__LanguageToolConfigDialog* self, QMouseEvent* event) {
    if (auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self)) {
        vtextgrammarchecklanguagetoolconfigdialog->TextGrammarCheck::LanguageToolConfigDialog::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigDialog::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigDialog_OnMouseMoveEvent(TextGrammarCheck__LanguageToolConfigDialog* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self))
        vtextgrammarchecklanguagetoolconfigdialog->textgrammarcheck__languagetoolconfigdialog_mousemoveevent_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigDialog::TextGrammarCheck__LanguageToolConfigDialog_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_WheelEvent(TextGrammarCheck__LanguageToolConfigDialog* self, QWheelEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog) {
        vtextgrammarchecklanguagetoolconfigdialog->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigDialog::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_SuperWheelEvent(TextGrammarCheck__LanguageToolConfigDialog* self, QWheelEvent* event) {
    if (auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self)) {
        vtextgrammarchecklanguagetoolconfigdialog->TextGrammarCheck::LanguageToolConfigDialog::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigDialog::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigDialog_OnWheelEvent(TextGrammarCheck__LanguageToolConfigDialog* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self))
        vtextgrammarchecklanguagetoolconfigdialog->textgrammarcheck__languagetoolconfigdialog_wheelevent_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigDialog::TextGrammarCheck__LanguageToolConfigDialog_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_KeyReleaseEvent(TextGrammarCheck__LanguageToolConfigDialog* self, QKeyEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog) {
        vtextgrammarchecklanguagetoolconfigdialog->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigDialog::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_SuperKeyReleaseEvent(TextGrammarCheck__LanguageToolConfigDialog* self, QKeyEvent* event) {
    if (auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self)) {
        vtextgrammarchecklanguagetoolconfigdialog->TextGrammarCheck::LanguageToolConfigDialog::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigDialog::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigDialog_OnKeyReleaseEvent(TextGrammarCheck__LanguageToolConfigDialog* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self))
        vtextgrammarchecklanguagetoolconfigdialog->textgrammarcheck__languagetoolconfigdialog_keyreleaseevent_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigDialog::TextGrammarCheck__LanguageToolConfigDialog_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_FocusInEvent(TextGrammarCheck__LanguageToolConfigDialog* self, QFocusEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog) {
        vtextgrammarchecklanguagetoolconfigdialog->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigDialog::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_SuperFocusInEvent(TextGrammarCheck__LanguageToolConfigDialog* self, QFocusEvent* event) {
    if (auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self)) {
        vtextgrammarchecklanguagetoolconfigdialog->TextGrammarCheck::LanguageToolConfigDialog::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigDialog::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigDialog_OnFocusInEvent(TextGrammarCheck__LanguageToolConfigDialog* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self))
        vtextgrammarchecklanguagetoolconfigdialog->textgrammarcheck__languagetoolconfigdialog_focusinevent_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigDialog::TextGrammarCheck__LanguageToolConfigDialog_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_FocusOutEvent(TextGrammarCheck__LanguageToolConfigDialog* self, QFocusEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog) {
        vtextgrammarchecklanguagetoolconfigdialog->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigDialog::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_SuperFocusOutEvent(TextGrammarCheck__LanguageToolConfigDialog* self, QFocusEvent* event) {
    if (auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self)) {
        vtextgrammarchecklanguagetoolconfigdialog->TextGrammarCheck::LanguageToolConfigDialog::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigDialog::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigDialog_OnFocusOutEvent(TextGrammarCheck__LanguageToolConfigDialog* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self))
        vtextgrammarchecklanguagetoolconfigdialog->textgrammarcheck__languagetoolconfigdialog_focusoutevent_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigDialog::TextGrammarCheck__LanguageToolConfigDialog_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_EnterEvent(TextGrammarCheck__LanguageToolConfigDialog* self, QEnterEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog) {
        vtextgrammarchecklanguagetoolconfigdialog->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigDialog::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_SuperEnterEvent(TextGrammarCheck__LanguageToolConfigDialog* self, QEnterEvent* event) {
    if (auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self)) {
        vtextgrammarchecklanguagetoolconfigdialog->TextGrammarCheck::LanguageToolConfigDialog::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigDialog::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigDialog_OnEnterEvent(TextGrammarCheck__LanguageToolConfigDialog* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self))
        vtextgrammarchecklanguagetoolconfigdialog->textgrammarcheck__languagetoolconfigdialog_enterevent_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigDialog::TextGrammarCheck__LanguageToolConfigDialog_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_LeaveEvent(TextGrammarCheck__LanguageToolConfigDialog* self, QEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog) {
        vtextgrammarchecklanguagetoolconfigdialog->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigDialog::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_SuperLeaveEvent(TextGrammarCheck__LanguageToolConfigDialog* self, QEvent* event) {
    if (auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self)) {
        vtextgrammarchecklanguagetoolconfigdialog->TextGrammarCheck::LanguageToolConfigDialog::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigDialog::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigDialog_OnLeaveEvent(TextGrammarCheck__LanguageToolConfigDialog* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self))
        vtextgrammarchecklanguagetoolconfigdialog->textgrammarcheck__languagetoolconfigdialog_leaveevent_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigDialog::TextGrammarCheck__LanguageToolConfigDialog_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_PaintEvent(TextGrammarCheck__LanguageToolConfigDialog* self, QPaintEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog) {
        vtextgrammarchecklanguagetoolconfigdialog->paintEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigDialog::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_SuperPaintEvent(TextGrammarCheck__LanguageToolConfigDialog* self, QPaintEvent* event) {
    if (auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self)) {
        vtextgrammarchecklanguagetoolconfigdialog->TextGrammarCheck::LanguageToolConfigDialog::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigDialog::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigDialog_OnPaintEvent(TextGrammarCheck__LanguageToolConfigDialog* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self))
        vtextgrammarchecklanguagetoolconfigdialog->textgrammarcheck__languagetoolconfigdialog_paintevent_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigDialog::TextGrammarCheck__LanguageToolConfigDialog_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_MoveEvent(TextGrammarCheck__LanguageToolConfigDialog* self, QMoveEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog) {
        vtextgrammarchecklanguagetoolconfigdialog->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigDialog::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_SuperMoveEvent(TextGrammarCheck__LanguageToolConfigDialog* self, QMoveEvent* event) {
    if (auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self)) {
        vtextgrammarchecklanguagetoolconfigdialog->TextGrammarCheck::LanguageToolConfigDialog::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigDialog::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigDialog_OnMoveEvent(TextGrammarCheck__LanguageToolConfigDialog* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self))
        vtextgrammarchecklanguagetoolconfigdialog->textgrammarcheck__languagetoolconfigdialog_moveevent_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigDialog::TextGrammarCheck__LanguageToolConfigDialog_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_TabletEvent(TextGrammarCheck__LanguageToolConfigDialog* self, QTabletEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog) {
        vtextgrammarchecklanguagetoolconfigdialog->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigDialog::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_SuperTabletEvent(TextGrammarCheck__LanguageToolConfigDialog* self, QTabletEvent* event) {
    if (auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self)) {
        vtextgrammarchecklanguagetoolconfigdialog->TextGrammarCheck::LanguageToolConfigDialog::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigDialog::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigDialog_OnTabletEvent(TextGrammarCheck__LanguageToolConfigDialog* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self))
        vtextgrammarchecklanguagetoolconfigdialog->textgrammarcheck__languagetoolconfigdialog_tabletevent_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigDialog::TextGrammarCheck__LanguageToolConfigDialog_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_ActionEvent(TextGrammarCheck__LanguageToolConfigDialog* self, QActionEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog) {
        vtextgrammarchecklanguagetoolconfigdialog->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigDialog::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_SuperActionEvent(TextGrammarCheck__LanguageToolConfigDialog* self, QActionEvent* event) {
    if (auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self)) {
        vtextgrammarchecklanguagetoolconfigdialog->TextGrammarCheck::LanguageToolConfigDialog::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigDialog::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigDialog_OnActionEvent(TextGrammarCheck__LanguageToolConfigDialog* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self))
        vtextgrammarchecklanguagetoolconfigdialog->textgrammarcheck__languagetoolconfigdialog_actionevent_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigDialog::TextGrammarCheck__LanguageToolConfigDialog_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_DragEnterEvent(TextGrammarCheck__LanguageToolConfigDialog* self, QDragEnterEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog) {
        vtextgrammarchecklanguagetoolconfigdialog->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigDialog::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_SuperDragEnterEvent(TextGrammarCheck__LanguageToolConfigDialog* self, QDragEnterEvent* event) {
    if (auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self)) {
        vtextgrammarchecklanguagetoolconfigdialog->TextGrammarCheck::LanguageToolConfigDialog::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigDialog::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigDialog_OnDragEnterEvent(TextGrammarCheck__LanguageToolConfigDialog* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self))
        vtextgrammarchecklanguagetoolconfigdialog->textgrammarcheck__languagetoolconfigdialog_dragenterevent_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigDialog::TextGrammarCheck__LanguageToolConfigDialog_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_DragMoveEvent(TextGrammarCheck__LanguageToolConfigDialog* self, QDragMoveEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog) {
        vtextgrammarchecklanguagetoolconfigdialog->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigDialog::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_SuperDragMoveEvent(TextGrammarCheck__LanguageToolConfigDialog* self, QDragMoveEvent* event) {
    if (auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self)) {
        vtextgrammarchecklanguagetoolconfigdialog->TextGrammarCheck::LanguageToolConfigDialog::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigDialog::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigDialog_OnDragMoveEvent(TextGrammarCheck__LanguageToolConfigDialog* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self))
        vtextgrammarchecklanguagetoolconfigdialog->textgrammarcheck__languagetoolconfigdialog_dragmoveevent_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigDialog::TextGrammarCheck__LanguageToolConfigDialog_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_DragLeaveEvent(TextGrammarCheck__LanguageToolConfigDialog* self, QDragLeaveEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog) {
        vtextgrammarchecklanguagetoolconfigdialog->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigDialog::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_SuperDragLeaveEvent(TextGrammarCheck__LanguageToolConfigDialog* self, QDragLeaveEvent* event) {
    if (auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self)) {
        vtextgrammarchecklanguagetoolconfigdialog->TextGrammarCheck::LanguageToolConfigDialog::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigDialog::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigDialog_OnDragLeaveEvent(TextGrammarCheck__LanguageToolConfigDialog* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self))
        vtextgrammarchecklanguagetoolconfigdialog->textgrammarcheck__languagetoolconfigdialog_dragleaveevent_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigDialog::TextGrammarCheck__LanguageToolConfigDialog_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_DropEvent(TextGrammarCheck__LanguageToolConfigDialog* self, QDropEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog) {
        vtextgrammarchecklanguagetoolconfigdialog->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigDialog::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_SuperDropEvent(TextGrammarCheck__LanguageToolConfigDialog* self, QDropEvent* event) {
    if (auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self)) {
        vtextgrammarchecklanguagetoolconfigdialog->TextGrammarCheck::LanguageToolConfigDialog::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigDialog::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigDialog_OnDropEvent(TextGrammarCheck__LanguageToolConfigDialog* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self))
        vtextgrammarchecklanguagetoolconfigdialog->textgrammarcheck__languagetoolconfigdialog_dropevent_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigDialog::TextGrammarCheck__LanguageToolConfigDialog_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_HideEvent(TextGrammarCheck__LanguageToolConfigDialog* self, QHideEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog) {
        vtextgrammarchecklanguagetoolconfigdialog->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigDialog::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_SuperHideEvent(TextGrammarCheck__LanguageToolConfigDialog* self, QHideEvent* event) {
    if (auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self)) {
        vtextgrammarchecklanguagetoolconfigdialog->TextGrammarCheck::LanguageToolConfigDialog::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigDialog::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigDialog_OnHideEvent(TextGrammarCheck__LanguageToolConfigDialog* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self))
        vtextgrammarchecklanguagetoolconfigdialog->textgrammarcheck__languagetoolconfigdialog_hideevent_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigDialog::TextGrammarCheck__LanguageToolConfigDialog_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool TextGrammarCheck__LanguageToolConfigDialog_NativeEvent(TextGrammarCheck__LanguageToolConfigDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog) {
        return vtextgrammarchecklanguagetoolconfigdialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigDialog::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool TextGrammarCheck__LanguageToolConfigDialog_SuperNativeEvent(TextGrammarCheck__LanguageToolConfigDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self)) {
        return vtextgrammarchecklanguagetoolconfigdialog->TextGrammarCheck::LanguageToolConfigDialog::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigDialog::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigDialog_OnNativeEvent(TextGrammarCheck__LanguageToolConfigDialog* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self))
        vtextgrammarchecklanguagetoolconfigdialog->textgrammarcheck__languagetoolconfigdialog_nativeevent_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigDialog::TextGrammarCheck__LanguageToolConfigDialog_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_ChangeEvent(TextGrammarCheck__LanguageToolConfigDialog* self, QEvent* param1) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog) {
        vtextgrammarchecklanguagetoolconfigdialog->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigDialog::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_SuperChangeEvent(TextGrammarCheck__LanguageToolConfigDialog* self, QEvent* param1) {
    if (auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self)) {
        vtextgrammarchecklanguagetoolconfigdialog->TextGrammarCheck::LanguageToolConfigDialog::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigDialog::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigDialog_OnChangeEvent(TextGrammarCheck__LanguageToolConfigDialog* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self))
        vtextgrammarchecklanguagetoolconfigdialog->textgrammarcheck__languagetoolconfigdialog_changeevent_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigDialog::TextGrammarCheck__LanguageToolConfigDialog_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
int TextGrammarCheck__LanguageToolConfigDialog_Metric(const TextGrammarCheck__LanguageToolConfigDialog* self, int param1) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = const_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigDialog*>(self));
    if (vtextgrammarchecklanguagetoolconfigdialog) {
        return vtextgrammarchecklanguagetoolconfigdialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigDialog::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int TextGrammarCheck__LanguageToolConfigDialog_SuperMetric(const TextGrammarCheck__LanguageToolConfigDialog* self, int param1) {
    if (auto* vtextgrammarchecklanguagetoolconfigdialog = const_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigDialog*>(self))) {
        return vtextgrammarchecklanguagetoolconfigdialog->TextGrammarCheck::LanguageToolConfigDialog::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigDialog::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigDialog_OnMetric(TextGrammarCheck__LanguageToolConfigDialog* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolconfigdialog = const_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigDialog*>(self)))
        vtextgrammarchecklanguagetoolconfigdialog->textgrammarcheck__languagetoolconfigdialog_metric_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigDialog::TextGrammarCheck__LanguageToolConfigDialog_Metric_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_InitPainter(const TextGrammarCheck__LanguageToolConfigDialog* self, QPainter* painter) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = const_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigDialog*>(self));
    if (vtextgrammarchecklanguagetoolconfigdialog) {
        vtextgrammarchecklanguagetoolconfigdialog->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigDialog::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_SuperInitPainter(const TextGrammarCheck__LanguageToolConfigDialog* self, QPainter* painter) {
    if (auto* vtextgrammarchecklanguagetoolconfigdialog = const_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigDialog*>(self))) {
        vtextgrammarchecklanguagetoolconfigdialog->TextGrammarCheck::LanguageToolConfigDialog::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigDialog::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigDialog_OnInitPainter(TextGrammarCheck__LanguageToolConfigDialog* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolconfigdialog = const_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigDialog*>(self)))
        vtextgrammarchecklanguagetoolconfigdialog->textgrammarcheck__languagetoolconfigdialog_initpainter_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigDialog::TextGrammarCheck__LanguageToolConfigDialog_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* TextGrammarCheck__LanguageToolConfigDialog_Redirected(const TextGrammarCheck__LanguageToolConfigDialog* self, QPoint* offset) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = const_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigDialog*>(self));
    if (vtextgrammarchecklanguagetoolconfigdialog) {
        return vtextgrammarchecklanguagetoolconfigdialog->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigDialog::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* TextGrammarCheck__LanguageToolConfigDialog_SuperRedirected(const TextGrammarCheck__LanguageToolConfigDialog* self, QPoint* offset) {
    if (auto* vtextgrammarchecklanguagetoolconfigdialog = const_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigDialog*>(self))) {
        return vtextgrammarchecklanguagetoolconfigdialog->TextGrammarCheck::LanguageToolConfigDialog::redirected(offset);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigDialog::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigDialog_OnRedirected(TextGrammarCheck__LanguageToolConfigDialog* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolconfigdialog = const_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigDialog*>(self)))
        vtextgrammarchecklanguagetoolconfigdialog->textgrammarcheck__languagetoolconfigdialog_redirected_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigDialog::TextGrammarCheck__LanguageToolConfigDialog_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* TextGrammarCheck__LanguageToolConfigDialog_SharedPainter(const TextGrammarCheck__LanguageToolConfigDialog* self) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = const_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigDialog*>(self));
    if (vtextgrammarchecklanguagetoolconfigdialog) {
        return vtextgrammarchecklanguagetoolconfigdialog->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigDialog::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* TextGrammarCheck__LanguageToolConfigDialog_SuperSharedPainter(const TextGrammarCheck__LanguageToolConfigDialog* self) {
    if (auto* vtextgrammarchecklanguagetoolconfigdialog = const_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigDialog*>(self))) {
        return vtextgrammarchecklanguagetoolconfigdialog->TextGrammarCheck::LanguageToolConfigDialog::sharedPainter();
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigDialog::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigDialog_OnSharedPainter(TextGrammarCheck__LanguageToolConfigDialog* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolconfigdialog = const_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigDialog*>(self)))
        vtextgrammarchecklanguagetoolconfigdialog->textgrammarcheck__languagetoolconfigdialog_sharedpainter_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigDialog::TextGrammarCheck__LanguageToolConfigDialog_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_InputMethodEvent(TextGrammarCheck__LanguageToolConfigDialog* self, QInputMethodEvent* param1) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog) {
        vtextgrammarchecklanguagetoolconfigdialog->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigDialog::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_SuperInputMethodEvent(TextGrammarCheck__LanguageToolConfigDialog* self, QInputMethodEvent* param1) {
    if (auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self)) {
        vtextgrammarchecklanguagetoolconfigdialog->TextGrammarCheck::LanguageToolConfigDialog::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigDialog::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigDialog_OnInputMethodEvent(TextGrammarCheck__LanguageToolConfigDialog* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self))
        vtextgrammarchecklanguagetoolconfigdialog->textgrammarcheck__languagetoolconfigdialog_inputmethodevent_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigDialog::TextGrammarCheck__LanguageToolConfigDialog_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* TextGrammarCheck__LanguageToolConfigDialog_InputMethodQuery(const TextGrammarCheck__LanguageToolConfigDialog* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* TextGrammarCheck__LanguageToolConfigDialog_SuperInputMethodQuery(const TextGrammarCheck__LanguageToolConfigDialog* self, int param1) {
    return new QVariant(self->TextGrammarCheck::LanguageToolConfigDialog::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigDialog_OnInputMethodQuery(TextGrammarCheck__LanguageToolConfigDialog* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolconfigdialog = const_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigDialog*>(self)))
        vtextgrammarchecklanguagetoolconfigdialog->textgrammarcheck__languagetoolconfigdialog_inputmethodquery_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigDialog::TextGrammarCheck__LanguageToolConfigDialog_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool TextGrammarCheck__LanguageToolConfigDialog_FocusNextPrevChild(TextGrammarCheck__LanguageToolConfigDialog* self, bool next) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog) {
        return vtextgrammarchecklanguagetoolconfigdialog->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigDialog::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool TextGrammarCheck__LanguageToolConfigDialog_SuperFocusNextPrevChild(TextGrammarCheck__LanguageToolConfigDialog* self, bool next) {
    if (auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self)) {
        return vtextgrammarchecklanguagetoolconfigdialog->TextGrammarCheck::LanguageToolConfigDialog::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigDialog::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigDialog_OnFocusNextPrevChild(TextGrammarCheck__LanguageToolConfigDialog* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self))
        vtextgrammarchecklanguagetoolconfigdialog->textgrammarcheck__languagetoolconfigdialog_focusnextprevchild_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigDialog::TextGrammarCheck__LanguageToolConfigDialog_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_TimerEvent(TextGrammarCheck__LanguageToolConfigDialog* self, QTimerEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog) {
        vtextgrammarchecklanguagetoolconfigdialog->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigDialog::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_SuperTimerEvent(TextGrammarCheck__LanguageToolConfigDialog* self, QTimerEvent* event) {
    if (auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self)) {
        vtextgrammarchecklanguagetoolconfigdialog->TextGrammarCheck::LanguageToolConfigDialog::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigDialog::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigDialog_OnTimerEvent(TextGrammarCheck__LanguageToolConfigDialog* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self))
        vtextgrammarchecklanguagetoolconfigdialog->textgrammarcheck__languagetoolconfigdialog_timerevent_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigDialog::TextGrammarCheck__LanguageToolConfigDialog_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_ChildEvent(TextGrammarCheck__LanguageToolConfigDialog* self, QChildEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog) {
        vtextgrammarchecklanguagetoolconfigdialog->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigDialog::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_SuperChildEvent(TextGrammarCheck__LanguageToolConfigDialog* self, QChildEvent* event) {
    if (auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self)) {
        vtextgrammarchecklanguagetoolconfigdialog->TextGrammarCheck::LanguageToolConfigDialog::childEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigDialog::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigDialog_OnChildEvent(TextGrammarCheck__LanguageToolConfigDialog* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self))
        vtextgrammarchecklanguagetoolconfigdialog->textgrammarcheck__languagetoolconfigdialog_childevent_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigDialog::TextGrammarCheck__LanguageToolConfigDialog_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_CustomEvent(TextGrammarCheck__LanguageToolConfigDialog* self, QEvent* event) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog) {
        vtextgrammarchecklanguagetoolconfigdialog->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigDialog::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_SuperCustomEvent(TextGrammarCheck__LanguageToolConfigDialog* self, QEvent* event) {
    if (auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self)) {
        vtextgrammarchecklanguagetoolconfigdialog->TextGrammarCheck::LanguageToolConfigDialog::customEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigDialog::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigDialog_OnCustomEvent(TextGrammarCheck__LanguageToolConfigDialog* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self))
        vtextgrammarchecklanguagetoolconfigdialog->textgrammarcheck__languagetoolconfigdialog_customevent_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigDialog::TextGrammarCheck__LanguageToolConfigDialog_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_ConnectNotify(TextGrammarCheck__LanguageToolConfigDialog* self, const QMetaMethod* signal) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog) {
        vtextgrammarchecklanguagetoolconfigdialog->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigDialog::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_SuperConnectNotify(TextGrammarCheck__LanguageToolConfigDialog* self, const QMetaMethod* signal) {
    if (auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self)) {
        vtextgrammarchecklanguagetoolconfigdialog->TextGrammarCheck::LanguageToolConfigDialog::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigDialog::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigDialog_OnConnectNotify(TextGrammarCheck__LanguageToolConfigDialog* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self))
        vtextgrammarchecklanguagetoolconfigdialog->textgrammarcheck__languagetoolconfigdialog_connectnotify_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigDialog::TextGrammarCheck__LanguageToolConfigDialog_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_DisconnectNotify(TextGrammarCheck__LanguageToolConfigDialog* self, const QMetaMethod* signal) {
    auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self);
    if (vtextgrammarchecklanguagetoolconfigdialog) {
        vtextgrammarchecklanguagetoolconfigdialog->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigDialog::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_SuperDisconnectNotify(TextGrammarCheck__LanguageToolConfigDialog* self, const QMetaMethod* signal) {
    if (auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self)) {
        vtextgrammarchecklanguagetoolconfigdialog->TextGrammarCheck::LanguageToolConfigDialog::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::LanguageToolConfigDialog::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__LanguageToolConfigDialog_OnDisconnectNotify(TextGrammarCheck__LanguageToolConfigDialog* self, intptr_t slot) {
    if (auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self))
        vtextgrammarchecklanguagetoolconfigdialog->textgrammarcheck__languagetoolconfigdialog_disconnectnotify_callback = reinterpret_cast<VirtualTextGrammarCheckLanguageToolConfigDialog::TextGrammarCheck__LanguageToolConfigDialog_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_AdjustPosition(TextGrammarCheck__LanguageToolConfigDialog* self, QWidget* param1) {
    if (auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self)) {
        vtextgrammarchecklanguagetoolconfigdialog->VirtualTextGrammarCheckLanguageToolConfigDialog::adjustPosition(param1);
    } else
        qFatal("Error: Protected method TextGrammarCheck::LanguageToolConfigDialog::adjustPosition called without a directly constructed type");
}

// Derived class protected handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_UpdateMicroFocus(TextGrammarCheck__LanguageToolConfigDialog* self) {
    if (auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self)) {
        vtextgrammarchecklanguagetoolconfigdialog->VirtualTextGrammarCheckLanguageToolConfigDialog::updateMicroFocus();
    } else
        qFatal("Error: Protected method TextGrammarCheck::LanguageToolConfigDialog::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_Create(TextGrammarCheck__LanguageToolConfigDialog* self) {
    if (auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self)) {
        vtextgrammarchecklanguagetoolconfigdialog->VirtualTextGrammarCheckLanguageToolConfigDialog::create();
    } else
        qFatal("Error: Protected method TextGrammarCheck::LanguageToolConfigDialog::create called without a directly constructed type");
}

// Derived class protected handler implementation
void TextGrammarCheck__LanguageToolConfigDialog_Destroy(TextGrammarCheck__LanguageToolConfigDialog* self) {
    if (auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self)) {
        vtextgrammarchecklanguagetoolconfigdialog->VirtualTextGrammarCheckLanguageToolConfigDialog::destroy();
    } else
        qFatal("Error: Protected method TextGrammarCheck::LanguageToolConfigDialog::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool TextGrammarCheck__LanguageToolConfigDialog_FocusNextChild(TextGrammarCheck__LanguageToolConfigDialog* self) {
    if (auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self)) {
        return vtextgrammarchecklanguagetoolconfigdialog->VirtualTextGrammarCheckLanguageToolConfigDialog::focusNextChild();
    } else
        qFatal("Error: Protected method TextGrammarCheck::LanguageToolConfigDialog::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool TextGrammarCheck__LanguageToolConfigDialog_FocusPreviousChild(TextGrammarCheck__LanguageToolConfigDialog* self) {
    if (auto* vtextgrammarchecklanguagetoolconfigdialog = dynamic_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(self)) {
        return vtextgrammarchecklanguagetoolconfigdialog->VirtualTextGrammarCheckLanguageToolConfigDialog::focusPreviousChild();
    } else
        qFatal("Error: Protected method TextGrammarCheck::LanguageToolConfigDialog::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* TextGrammarCheck__LanguageToolConfigDialog_Sender(const TextGrammarCheck__LanguageToolConfigDialog* self) {
    if (auto* vtextgrammarchecklanguagetoolconfigdialog = const_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigDialog*>(self))) {
        return vtextgrammarchecklanguagetoolconfigdialog->VirtualTextGrammarCheckLanguageToolConfigDialog::sender();
    } else
        qFatal("Error: Protected method TextGrammarCheck::LanguageToolConfigDialog::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int TextGrammarCheck__LanguageToolConfigDialog_SenderSignalIndex(const TextGrammarCheck__LanguageToolConfigDialog* self) {
    if (auto* vtextgrammarchecklanguagetoolconfigdialog = const_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigDialog*>(self))) {
        return vtextgrammarchecklanguagetoolconfigdialog->VirtualTextGrammarCheckLanguageToolConfigDialog::senderSignalIndex();
    } else
        qFatal("Error: Protected method TextGrammarCheck::LanguageToolConfigDialog::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int TextGrammarCheck__LanguageToolConfigDialog_Receivers(const TextGrammarCheck__LanguageToolConfigDialog* self, const char* signal) {
    if (auto* vtextgrammarchecklanguagetoolconfigdialog = const_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigDialog*>(self))) {
        return vtextgrammarchecklanguagetoolconfigdialog->VirtualTextGrammarCheckLanguageToolConfigDialog::receivers(signal);
    } else
        qFatal("Error: Protected method TextGrammarCheck::LanguageToolConfigDialog::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool TextGrammarCheck__LanguageToolConfigDialog_IsSignalConnected(const TextGrammarCheck__LanguageToolConfigDialog* self, const QMetaMethod* signal) {
    if (auto* vtextgrammarchecklanguagetoolconfigdialog = const_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigDialog*>(self))) {
        return vtextgrammarchecklanguagetoolconfigdialog->VirtualTextGrammarCheckLanguageToolConfigDialog::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method TextGrammarCheck::LanguageToolConfigDialog::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double TextGrammarCheck__LanguageToolConfigDialog_GetDecodedMetricF(const TextGrammarCheck__LanguageToolConfigDialog* self, int metricA, int metricB) {
    if (auto* vtextgrammarchecklanguagetoolconfigdialog = const_cast<VirtualTextGrammarCheckLanguageToolConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckLanguageToolConfigDialog*>(self))) {
        return vtextgrammarchecklanguagetoolconfigdialog->VirtualTextGrammarCheckLanguageToolConfigDialog::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method TextGrammarCheck::LanguageToolConfigDialog::getDecodedMetricF called without a directly constructed type");
}

void TextGrammarCheck__LanguageToolConfigDialog_Delete(TextGrammarCheck__LanguageToolConfigDialog* self) {
    delete self;
}
