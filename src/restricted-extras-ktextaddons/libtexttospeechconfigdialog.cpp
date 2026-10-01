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

libqt_string TextEditTextToSpeech__TextToSpeechConfigDialog_Tr(const char* s) {
    auto _ret = TextEditTextToSpeech::TextToSpeechConfigDialog::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string TextEditTextToSpeech__TextToSpeechConfigDialog_Tr2(const char* s, const char* c) {
    auto _ret = TextEditTextToSpeech::TextToSpeechConfigDialog::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string TextEditTextToSpeech__TextToSpeechConfigDialog_Tr3(const char* s, const char* c, int n) {
    auto _ret = TextEditTextToSpeech::TextToSpeechConfigDialog::tr(s, c, static_cast<int>(n));
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
QMetaObject* TextEditTextToSpeech__TextToSpeechConfigDialog_SuperMetaObject(const TextEditTextToSpeech__TextToSpeechConfigDialog* self) {
    return (QMetaObject*)self->TextEditTextToSpeech::TextToSpeechConfigDialog::metaObject();
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_OnMetaObject(TextEditTextToSpeech__TextToSpeechConfigDialog* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechconfigdialog = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self)))
        vtextedittexttospeechtexttospeechconfigdialog->textedittexttospeech__texttospeechconfigdialog_metaobject_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog::TextEditTextToSpeech__TextToSpeechConfigDialog_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* TextEditTextToSpeech__TextToSpeechConfigDialog_SuperMetacast(TextEditTextToSpeech__TextToSpeechConfigDialog* self, const char* param1) {
    return self->TextEditTextToSpeech::TextToSpeechConfigDialog::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_OnMetacast(TextEditTextToSpeech__TextToSpeechConfigDialog* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self))
        vtextedittexttospeechtexttospeechconfigdialog->textedittexttospeech__texttospeechconfigdialog_metacast_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog::TextEditTextToSpeech__TextToSpeechConfigDialog_Metacast_Callback>(slot);
}

// Base class handler implementation
int TextEditTextToSpeech__TextToSpeechConfigDialog_SuperMetacall(TextEditTextToSpeech__TextToSpeechConfigDialog* self, int param1, int param2, void** param3) {
    return self->TextEditTextToSpeech::TextToSpeechConfigDialog::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_OnMetacall(TextEditTextToSpeech__TextToSpeechConfigDialog* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self))
        vtextedittexttospeechtexttospeechconfigdialog->textedittexttospeech__texttospeechconfigdialog_metacall_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog::TextEditTextToSpeech__TextToSpeechConfigDialog_Metacall_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_SetVisible(TextEditTextToSpeech__TextToSpeechConfigDialog* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_SuperSetVisible(TextEditTextToSpeech__TextToSpeechConfigDialog* self, bool visible) {
    self->TextEditTextToSpeech::TextToSpeechConfigDialog::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_OnSetVisible(TextEditTextToSpeech__TextToSpeechConfigDialog* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self))
        vtextedittexttospeechtexttospeechconfigdialog->textedittexttospeech__texttospeechconfigdialog_setvisible_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog::TextEditTextToSpeech__TextToSpeechConfigDialog_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* TextEditTextToSpeech__TextToSpeechConfigDialog_SizeHint(const TextEditTextToSpeech__TextToSpeechConfigDialog* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* TextEditTextToSpeech__TextToSpeechConfigDialog_SuperSizeHint(const TextEditTextToSpeech__TextToSpeechConfigDialog* self) {
    return new QSize(self->TextEditTextToSpeech::TextToSpeechConfigDialog::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_OnSizeHint(TextEditTextToSpeech__TextToSpeechConfigDialog* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechconfigdialog = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self)))
        vtextedittexttospeechtexttospeechconfigdialog->textedittexttospeech__texttospeechconfigdialog_sizehint_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog::TextEditTextToSpeech__TextToSpeechConfigDialog_SizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* TextEditTextToSpeech__TextToSpeechConfigDialog_MinimumSizeHint(const TextEditTextToSpeech__TextToSpeechConfigDialog* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* TextEditTextToSpeech__TextToSpeechConfigDialog_SuperMinimumSizeHint(const TextEditTextToSpeech__TextToSpeechConfigDialog* self) {
    return new QSize(self->TextEditTextToSpeech::TextToSpeechConfigDialog::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_OnMinimumSizeHint(TextEditTextToSpeech__TextToSpeechConfigDialog* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechconfigdialog = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self)))
        vtextedittexttospeechtexttospeechconfigdialog->textedittexttospeech__texttospeechconfigdialog_minimumsizehint_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog::TextEditTextToSpeech__TextToSpeechConfigDialog_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_Open(TextEditTextToSpeech__TextToSpeechConfigDialog* self) {
    self->open();
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_SuperOpen(TextEditTextToSpeech__TextToSpeechConfigDialog* self) {
    self->TextEditTextToSpeech::TextToSpeechConfigDialog::open();
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_OnOpen(TextEditTextToSpeech__TextToSpeechConfigDialog* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self))
        vtextedittexttospeechtexttospeechconfigdialog->textedittexttospeech__texttospeechconfigdialog_open_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog::TextEditTextToSpeech__TextToSpeechConfigDialog_Open_Callback>(slot);
}

// Derived class handler implementation
int TextEditTextToSpeech__TextToSpeechConfigDialog_Exec(TextEditTextToSpeech__TextToSpeechConfigDialog* self) {
    return self->exec();
}

// Base class handler implementation
int TextEditTextToSpeech__TextToSpeechConfigDialog_SuperExec(TextEditTextToSpeech__TextToSpeechConfigDialog* self) {
    return self->TextEditTextToSpeech::TextToSpeechConfigDialog::exec();
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_OnExec(TextEditTextToSpeech__TextToSpeechConfigDialog* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self))
        vtextedittexttospeechtexttospeechconfigdialog->textedittexttospeech__texttospeechconfigdialog_exec_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog::TextEditTextToSpeech__TextToSpeechConfigDialog_Exec_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_Done(TextEditTextToSpeech__TextToSpeechConfigDialog* self, int param1) {
    self->done(static_cast<int>(param1));
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_SuperDone(TextEditTextToSpeech__TextToSpeechConfigDialog* self, int param1) {
    self->TextEditTextToSpeech::TextToSpeechConfigDialog::done(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_OnDone(TextEditTextToSpeech__TextToSpeechConfigDialog* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self))
        vtextedittexttospeechtexttospeechconfigdialog->textedittexttospeech__texttospeechconfigdialog_done_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog::TextEditTextToSpeech__TextToSpeechConfigDialog_Done_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_Accept(TextEditTextToSpeech__TextToSpeechConfigDialog* self) {
    self->accept();
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_SuperAccept(TextEditTextToSpeech__TextToSpeechConfigDialog* self) {
    self->TextEditTextToSpeech::TextToSpeechConfigDialog::accept();
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_OnAccept(TextEditTextToSpeech__TextToSpeechConfigDialog* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self))
        vtextedittexttospeechtexttospeechconfigdialog->textedittexttospeech__texttospeechconfigdialog_accept_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog::TextEditTextToSpeech__TextToSpeechConfigDialog_Accept_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_Reject(TextEditTextToSpeech__TextToSpeechConfigDialog* self) {
    self->reject();
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_SuperReject(TextEditTextToSpeech__TextToSpeechConfigDialog* self) {
    self->TextEditTextToSpeech::TextToSpeechConfigDialog::reject();
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_OnReject(TextEditTextToSpeech__TextToSpeechConfigDialog* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self))
        vtextedittexttospeechtexttospeechconfigdialog->textedittexttospeech__texttospeechconfigdialog_reject_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog::TextEditTextToSpeech__TextToSpeechConfigDialog_Reject_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_KeyPressEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, QKeyEvent* param1) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog) {
        vtextedittexttospeechtexttospeechconfigdialog->keyPressEvent(param1);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigDialog::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_SuperKeyPressEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, QKeyEvent* param1) {
    if (auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self)) {
        vtextedittexttospeechtexttospeechconfigdialog->TextEditTextToSpeech::TextToSpeechConfigDialog::keyPressEvent(param1);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigDialog::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_OnKeyPressEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self))
        vtextedittexttospeechtexttospeechconfigdialog->textedittexttospeech__texttospeechconfigdialog_keypressevent_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog::TextEditTextToSpeech__TextToSpeechConfigDialog_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_CloseEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, QCloseEvent* param1) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog) {
        vtextedittexttospeechtexttospeechconfigdialog->closeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigDialog::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_SuperCloseEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, QCloseEvent* param1) {
    if (auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self)) {
        vtextedittexttospeechtexttospeechconfigdialog->TextEditTextToSpeech::TextToSpeechConfigDialog::closeEvent(param1);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigDialog::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_OnCloseEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self))
        vtextedittexttospeechtexttospeechconfigdialog->textedittexttospeech__texttospeechconfigdialog_closeevent_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog::TextEditTextToSpeech__TextToSpeechConfigDialog_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_ShowEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, QShowEvent* param1) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog) {
        vtextedittexttospeechtexttospeechconfigdialog->showEvent(param1);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigDialog::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_SuperShowEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, QShowEvent* param1) {
    if (auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self)) {
        vtextedittexttospeechtexttospeechconfigdialog->TextEditTextToSpeech::TextToSpeechConfigDialog::showEvent(param1);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigDialog::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_OnShowEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self))
        vtextedittexttospeechtexttospeechconfigdialog->textedittexttospeech__texttospeechconfigdialog_showevent_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog::TextEditTextToSpeech__TextToSpeechConfigDialog_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_ResizeEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, QResizeEvent* param1) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog) {
        vtextedittexttospeechtexttospeechconfigdialog->resizeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigDialog::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_SuperResizeEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, QResizeEvent* param1) {
    if (auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self)) {
        vtextedittexttospeechtexttospeechconfigdialog->TextEditTextToSpeech::TextToSpeechConfigDialog::resizeEvent(param1);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigDialog::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_OnResizeEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self))
        vtextedittexttospeechtexttospeechconfigdialog->textedittexttospeech__texttospeechconfigdialog_resizeevent_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog::TextEditTextToSpeech__TextToSpeechConfigDialog_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_ContextMenuEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, QContextMenuEvent* param1) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog) {
        vtextedittexttospeechtexttospeechconfigdialog->contextMenuEvent(param1);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigDialog::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_SuperContextMenuEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, QContextMenuEvent* param1) {
    if (auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self)) {
        vtextedittexttospeechtexttospeechconfigdialog->TextEditTextToSpeech::TextToSpeechConfigDialog::contextMenuEvent(param1);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigDialog::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_OnContextMenuEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self))
        vtextedittexttospeechtexttospeechconfigdialog->textedittexttospeech__texttospeechconfigdialog_contextmenuevent_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog::TextEditTextToSpeech__TextToSpeechConfigDialog_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
bool TextEditTextToSpeech__TextToSpeechConfigDialog_EventFilter(TextEditTextToSpeech__TextToSpeechConfigDialog* self, QObject* param1, QEvent* param2) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog) {
        return vtextedittexttospeechtexttospeechconfigdialog->eventFilter(param1, param2);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigDialog::eventFilter called without a directly constructed type");
    }
}

// Base class handler implementation
bool TextEditTextToSpeech__TextToSpeechConfigDialog_SuperEventFilter(TextEditTextToSpeech__TextToSpeechConfigDialog* self, QObject* param1, QEvent* param2) {
    if (auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self)) {
        return vtextedittexttospeechtexttospeechconfigdialog->TextEditTextToSpeech::TextToSpeechConfigDialog::eventFilter(param1, param2);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigDialog::eventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_OnEventFilter(TextEditTextToSpeech__TextToSpeechConfigDialog* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self))
        vtextedittexttospeechtexttospeechconfigdialog->textedittexttospeech__texttospeechconfigdialog_eventfilter_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog::TextEditTextToSpeech__TextToSpeechConfigDialog_EventFilter_Callback>(slot);
}

// Derived class handler implementation
int TextEditTextToSpeech__TextToSpeechConfigDialog_DevType(const TextEditTextToSpeech__TextToSpeechConfigDialog* self) {
    return self->devType();
}

// Base class handler implementation
int TextEditTextToSpeech__TextToSpeechConfigDialog_SuperDevType(const TextEditTextToSpeech__TextToSpeechConfigDialog* self) {
    return self->TextEditTextToSpeech::TextToSpeechConfigDialog::devType();
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_OnDevType(TextEditTextToSpeech__TextToSpeechConfigDialog* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechconfigdialog = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self)))
        vtextedittexttospeechtexttospeechconfigdialog->textedittexttospeech__texttospeechconfigdialog_devtype_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog::TextEditTextToSpeech__TextToSpeechConfigDialog_DevType_Callback>(slot);
}

// Derived class handler implementation
int TextEditTextToSpeech__TextToSpeechConfigDialog_HeightForWidth(const TextEditTextToSpeech__TextToSpeechConfigDialog* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int TextEditTextToSpeech__TextToSpeechConfigDialog_SuperHeightForWidth(const TextEditTextToSpeech__TextToSpeechConfigDialog* self, int param1) {
    return self->TextEditTextToSpeech::TextToSpeechConfigDialog::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_OnHeightForWidth(TextEditTextToSpeech__TextToSpeechConfigDialog* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechconfigdialog = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self)))
        vtextedittexttospeechtexttospeechconfigdialog->textedittexttospeech__texttospeechconfigdialog_heightforwidth_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog::TextEditTextToSpeech__TextToSpeechConfigDialog_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool TextEditTextToSpeech__TextToSpeechConfigDialog_HasHeightForWidth(const TextEditTextToSpeech__TextToSpeechConfigDialog* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool TextEditTextToSpeech__TextToSpeechConfigDialog_SuperHasHeightForWidth(const TextEditTextToSpeech__TextToSpeechConfigDialog* self) {
    return self->TextEditTextToSpeech::TextToSpeechConfigDialog::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_OnHasHeightForWidth(TextEditTextToSpeech__TextToSpeechConfigDialog* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechconfigdialog = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self)))
        vtextedittexttospeechtexttospeechconfigdialog->textedittexttospeech__texttospeechconfigdialog_hasheightforwidth_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog::TextEditTextToSpeech__TextToSpeechConfigDialog_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* TextEditTextToSpeech__TextToSpeechConfigDialog_PaintEngine(const TextEditTextToSpeech__TextToSpeechConfigDialog* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* TextEditTextToSpeech__TextToSpeechConfigDialog_SuperPaintEngine(const TextEditTextToSpeech__TextToSpeechConfigDialog* self) {
    return self->TextEditTextToSpeech::TextToSpeechConfigDialog::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_OnPaintEngine(TextEditTextToSpeech__TextToSpeechConfigDialog* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechconfigdialog = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self)))
        vtextedittexttospeechtexttospeechconfigdialog->textedittexttospeech__texttospeechconfigdialog_paintengine_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog::TextEditTextToSpeech__TextToSpeechConfigDialog_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
bool TextEditTextToSpeech__TextToSpeechConfigDialog_Event(TextEditTextToSpeech__TextToSpeechConfigDialog* self, QEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog) {
        return vtextedittexttospeechtexttospeechconfigdialog->event(event);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigDialog::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool TextEditTextToSpeech__TextToSpeechConfigDialog_SuperEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, QEvent* event) {
    if (auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self)) {
        return vtextedittexttospeechtexttospeechconfigdialog->TextEditTextToSpeech::TextToSpeechConfigDialog::event(event);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigDialog::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_OnEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self))
        vtextedittexttospeechtexttospeechconfigdialog->textedittexttospeech__texttospeechconfigdialog_event_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog::TextEditTextToSpeech__TextToSpeechConfigDialog_Event_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_MousePressEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, QMouseEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog) {
        vtextedittexttospeechtexttospeechconfigdialog->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigDialog::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_SuperMousePressEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, QMouseEvent* event) {
    if (auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self)) {
        vtextedittexttospeechtexttospeechconfigdialog->TextEditTextToSpeech::TextToSpeechConfigDialog::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigDialog::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_OnMousePressEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self))
        vtextedittexttospeechtexttospeechconfigdialog->textedittexttospeech__texttospeechconfigdialog_mousepressevent_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog::TextEditTextToSpeech__TextToSpeechConfigDialog_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_MouseReleaseEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, QMouseEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog) {
        vtextedittexttospeechtexttospeechconfigdialog->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigDialog::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_SuperMouseReleaseEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, QMouseEvent* event) {
    if (auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self)) {
        vtextedittexttospeechtexttospeechconfigdialog->TextEditTextToSpeech::TextToSpeechConfigDialog::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigDialog::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_OnMouseReleaseEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self))
        vtextedittexttospeechtexttospeechconfigdialog->textedittexttospeech__texttospeechconfigdialog_mousereleaseevent_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog::TextEditTextToSpeech__TextToSpeechConfigDialog_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_MouseDoubleClickEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, QMouseEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog) {
        vtextedittexttospeechtexttospeechconfigdialog->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigDialog::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_SuperMouseDoubleClickEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, QMouseEvent* event) {
    if (auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self)) {
        vtextedittexttospeechtexttospeechconfigdialog->TextEditTextToSpeech::TextToSpeechConfigDialog::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigDialog::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_OnMouseDoubleClickEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self))
        vtextedittexttospeechtexttospeechconfigdialog->textedittexttospeech__texttospeechconfigdialog_mousedoubleclickevent_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog::TextEditTextToSpeech__TextToSpeechConfigDialog_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_MouseMoveEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, QMouseEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog) {
        vtextedittexttospeechtexttospeechconfigdialog->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigDialog::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_SuperMouseMoveEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, QMouseEvent* event) {
    if (auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self)) {
        vtextedittexttospeechtexttospeechconfigdialog->TextEditTextToSpeech::TextToSpeechConfigDialog::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigDialog::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_OnMouseMoveEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self))
        vtextedittexttospeechtexttospeechconfigdialog->textedittexttospeech__texttospeechconfigdialog_mousemoveevent_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog::TextEditTextToSpeech__TextToSpeechConfigDialog_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_WheelEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, QWheelEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog) {
        vtextedittexttospeechtexttospeechconfigdialog->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigDialog::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_SuperWheelEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, QWheelEvent* event) {
    if (auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self)) {
        vtextedittexttospeechtexttospeechconfigdialog->TextEditTextToSpeech::TextToSpeechConfigDialog::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigDialog::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_OnWheelEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self))
        vtextedittexttospeechtexttospeechconfigdialog->textedittexttospeech__texttospeechconfigdialog_wheelevent_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog::TextEditTextToSpeech__TextToSpeechConfigDialog_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_KeyReleaseEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, QKeyEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog) {
        vtextedittexttospeechtexttospeechconfigdialog->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigDialog::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_SuperKeyReleaseEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, QKeyEvent* event) {
    if (auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self)) {
        vtextedittexttospeechtexttospeechconfigdialog->TextEditTextToSpeech::TextToSpeechConfigDialog::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigDialog::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_OnKeyReleaseEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self))
        vtextedittexttospeechtexttospeechconfigdialog->textedittexttospeech__texttospeechconfigdialog_keyreleaseevent_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog::TextEditTextToSpeech__TextToSpeechConfigDialog_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_FocusInEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, QFocusEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog) {
        vtextedittexttospeechtexttospeechconfigdialog->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigDialog::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_SuperFocusInEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, QFocusEvent* event) {
    if (auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self)) {
        vtextedittexttospeechtexttospeechconfigdialog->TextEditTextToSpeech::TextToSpeechConfigDialog::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigDialog::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_OnFocusInEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self))
        vtextedittexttospeechtexttospeechconfigdialog->textedittexttospeech__texttospeechconfigdialog_focusinevent_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog::TextEditTextToSpeech__TextToSpeechConfigDialog_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_FocusOutEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, QFocusEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog) {
        vtextedittexttospeechtexttospeechconfigdialog->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigDialog::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_SuperFocusOutEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, QFocusEvent* event) {
    if (auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self)) {
        vtextedittexttospeechtexttospeechconfigdialog->TextEditTextToSpeech::TextToSpeechConfigDialog::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigDialog::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_OnFocusOutEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self))
        vtextedittexttospeechtexttospeechconfigdialog->textedittexttospeech__texttospeechconfigdialog_focusoutevent_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog::TextEditTextToSpeech__TextToSpeechConfigDialog_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_EnterEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, QEnterEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog) {
        vtextedittexttospeechtexttospeechconfigdialog->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigDialog::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_SuperEnterEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, QEnterEvent* event) {
    if (auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self)) {
        vtextedittexttospeechtexttospeechconfigdialog->TextEditTextToSpeech::TextToSpeechConfigDialog::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigDialog::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_OnEnterEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self))
        vtextedittexttospeechtexttospeechconfigdialog->textedittexttospeech__texttospeechconfigdialog_enterevent_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog::TextEditTextToSpeech__TextToSpeechConfigDialog_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_LeaveEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, QEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog) {
        vtextedittexttospeechtexttospeechconfigdialog->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigDialog::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_SuperLeaveEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, QEvent* event) {
    if (auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self)) {
        vtextedittexttospeechtexttospeechconfigdialog->TextEditTextToSpeech::TextToSpeechConfigDialog::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigDialog::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_OnLeaveEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self))
        vtextedittexttospeechtexttospeechconfigdialog->textedittexttospeech__texttospeechconfigdialog_leaveevent_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog::TextEditTextToSpeech__TextToSpeechConfigDialog_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_PaintEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, QPaintEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog) {
        vtextedittexttospeechtexttospeechconfigdialog->paintEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigDialog::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_SuperPaintEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, QPaintEvent* event) {
    if (auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self)) {
        vtextedittexttospeechtexttospeechconfigdialog->TextEditTextToSpeech::TextToSpeechConfigDialog::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigDialog::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_OnPaintEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self))
        vtextedittexttospeechtexttospeechconfigdialog->textedittexttospeech__texttospeechconfigdialog_paintevent_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog::TextEditTextToSpeech__TextToSpeechConfigDialog_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_MoveEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, QMoveEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog) {
        vtextedittexttospeechtexttospeechconfigdialog->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigDialog::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_SuperMoveEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, QMoveEvent* event) {
    if (auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self)) {
        vtextedittexttospeechtexttospeechconfigdialog->TextEditTextToSpeech::TextToSpeechConfigDialog::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigDialog::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_OnMoveEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self))
        vtextedittexttospeechtexttospeechconfigdialog->textedittexttospeech__texttospeechconfigdialog_moveevent_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog::TextEditTextToSpeech__TextToSpeechConfigDialog_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_TabletEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, QTabletEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog) {
        vtextedittexttospeechtexttospeechconfigdialog->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigDialog::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_SuperTabletEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, QTabletEvent* event) {
    if (auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self)) {
        vtextedittexttospeechtexttospeechconfigdialog->TextEditTextToSpeech::TextToSpeechConfigDialog::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigDialog::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_OnTabletEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self))
        vtextedittexttospeechtexttospeechconfigdialog->textedittexttospeech__texttospeechconfigdialog_tabletevent_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog::TextEditTextToSpeech__TextToSpeechConfigDialog_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_ActionEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, QActionEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog) {
        vtextedittexttospeechtexttospeechconfigdialog->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigDialog::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_SuperActionEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, QActionEvent* event) {
    if (auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self)) {
        vtextedittexttospeechtexttospeechconfigdialog->TextEditTextToSpeech::TextToSpeechConfigDialog::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigDialog::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_OnActionEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self))
        vtextedittexttospeechtexttospeechconfigdialog->textedittexttospeech__texttospeechconfigdialog_actionevent_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog::TextEditTextToSpeech__TextToSpeechConfigDialog_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_DragEnterEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, QDragEnterEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog) {
        vtextedittexttospeechtexttospeechconfigdialog->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigDialog::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_SuperDragEnterEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, QDragEnterEvent* event) {
    if (auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self)) {
        vtextedittexttospeechtexttospeechconfigdialog->TextEditTextToSpeech::TextToSpeechConfigDialog::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigDialog::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_OnDragEnterEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self))
        vtextedittexttospeechtexttospeechconfigdialog->textedittexttospeech__texttospeechconfigdialog_dragenterevent_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog::TextEditTextToSpeech__TextToSpeechConfigDialog_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_DragMoveEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, QDragMoveEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog) {
        vtextedittexttospeechtexttospeechconfigdialog->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigDialog::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_SuperDragMoveEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, QDragMoveEvent* event) {
    if (auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self)) {
        vtextedittexttospeechtexttospeechconfigdialog->TextEditTextToSpeech::TextToSpeechConfigDialog::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigDialog::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_OnDragMoveEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self))
        vtextedittexttospeechtexttospeechconfigdialog->textedittexttospeech__texttospeechconfigdialog_dragmoveevent_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog::TextEditTextToSpeech__TextToSpeechConfigDialog_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_DragLeaveEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, QDragLeaveEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog) {
        vtextedittexttospeechtexttospeechconfigdialog->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigDialog::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_SuperDragLeaveEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, QDragLeaveEvent* event) {
    if (auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self)) {
        vtextedittexttospeechtexttospeechconfigdialog->TextEditTextToSpeech::TextToSpeechConfigDialog::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigDialog::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_OnDragLeaveEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self))
        vtextedittexttospeechtexttospeechconfigdialog->textedittexttospeech__texttospeechconfigdialog_dragleaveevent_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog::TextEditTextToSpeech__TextToSpeechConfigDialog_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_DropEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, QDropEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog) {
        vtextedittexttospeechtexttospeechconfigdialog->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigDialog::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_SuperDropEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, QDropEvent* event) {
    if (auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self)) {
        vtextedittexttospeechtexttospeechconfigdialog->TextEditTextToSpeech::TextToSpeechConfigDialog::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigDialog::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_OnDropEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self))
        vtextedittexttospeechtexttospeechconfigdialog->textedittexttospeech__texttospeechconfigdialog_dropevent_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog::TextEditTextToSpeech__TextToSpeechConfigDialog_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_HideEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, QHideEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog) {
        vtextedittexttospeechtexttospeechconfigdialog->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigDialog::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_SuperHideEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, QHideEvent* event) {
    if (auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self)) {
        vtextedittexttospeechtexttospeechconfigdialog->TextEditTextToSpeech::TextToSpeechConfigDialog::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigDialog::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_OnHideEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self))
        vtextedittexttospeechtexttospeechconfigdialog->textedittexttospeech__texttospeechconfigdialog_hideevent_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog::TextEditTextToSpeech__TextToSpeechConfigDialog_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool TextEditTextToSpeech__TextToSpeechConfigDialog_NativeEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog) {
        return vtextedittexttospeechtexttospeechconfigdialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigDialog::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool TextEditTextToSpeech__TextToSpeechConfigDialog_SuperNativeEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self)) {
        return vtextedittexttospeechtexttospeechconfigdialog->TextEditTextToSpeech::TextToSpeechConfigDialog::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigDialog::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_OnNativeEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self))
        vtextedittexttospeechtexttospeechconfigdialog->textedittexttospeech__texttospeechconfigdialog_nativeevent_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog::TextEditTextToSpeech__TextToSpeechConfigDialog_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_ChangeEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, QEvent* param1) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog) {
        vtextedittexttospeechtexttospeechconfigdialog->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigDialog::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_SuperChangeEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, QEvent* param1) {
    if (auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self)) {
        vtextedittexttospeechtexttospeechconfigdialog->TextEditTextToSpeech::TextToSpeechConfigDialog::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigDialog::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_OnChangeEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self))
        vtextedittexttospeechtexttospeechconfigdialog->textedittexttospeech__texttospeechconfigdialog_changeevent_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog::TextEditTextToSpeech__TextToSpeechConfigDialog_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
int TextEditTextToSpeech__TextToSpeechConfigDialog_Metric(const TextEditTextToSpeech__TextToSpeechConfigDialog* self, int param1) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self));
    if (vtextedittexttospeechtexttospeechconfigdialog) {
        return vtextedittexttospeechtexttospeechconfigdialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigDialog::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int TextEditTextToSpeech__TextToSpeechConfigDialog_SuperMetric(const TextEditTextToSpeech__TextToSpeechConfigDialog* self, int param1) {
    if (auto* vtextedittexttospeechtexttospeechconfigdialog = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self))) {
        return vtextedittexttospeechtexttospeechconfigdialog->TextEditTextToSpeech::TextToSpeechConfigDialog::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigDialog::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_OnMetric(TextEditTextToSpeech__TextToSpeechConfigDialog* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechconfigdialog = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self)))
        vtextedittexttospeechtexttospeechconfigdialog->textedittexttospeech__texttospeechconfigdialog_metric_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog::TextEditTextToSpeech__TextToSpeechConfigDialog_Metric_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_InitPainter(const TextEditTextToSpeech__TextToSpeechConfigDialog* self, QPainter* painter) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self));
    if (vtextedittexttospeechtexttospeechconfigdialog) {
        vtextedittexttospeechtexttospeechconfigdialog->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigDialog::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_SuperInitPainter(const TextEditTextToSpeech__TextToSpeechConfigDialog* self, QPainter* painter) {
    if (auto* vtextedittexttospeechtexttospeechconfigdialog = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self))) {
        vtextedittexttospeechtexttospeechconfigdialog->TextEditTextToSpeech::TextToSpeechConfigDialog::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigDialog::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_OnInitPainter(TextEditTextToSpeech__TextToSpeechConfigDialog* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechconfigdialog = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self)))
        vtextedittexttospeechtexttospeechconfigdialog->textedittexttospeech__texttospeechconfigdialog_initpainter_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog::TextEditTextToSpeech__TextToSpeechConfigDialog_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* TextEditTextToSpeech__TextToSpeechConfigDialog_Redirected(const TextEditTextToSpeech__TextToSpeechConfigDialog* self, QPoint* offset) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self));
    if (vtextedittexttospeechtexttospeechconfigdialog) {
        return vtextedittexttospeechtexttospeechconfigdialog->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigDialog::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* TextEditTextToSpeech__TextToSpeechConfigDialog_SuperRedirected(const TextEditTextToSpeech__TextToSpeechConfigDialog* self, QPoint* offset) {
    if (auto* vtextedittexttospeechtexttospeechconfigdialog = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self))) {
        return vtextedittexttospeechtexttospeechconfigdialog->TextEditTextToSpeech::TextToSpeechConfigDialog::redirected(offset);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigDialog::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_OnRedirected(TextEditTextToSpeech__TextToSpeechConfigDialog* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechconfigdialog = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self)))
        vtextedittexttospeechtexttospeechconfigdialog->textedittexttospeech__texttospeechconfigdialog_redirected_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog::TextEditTextToSpeech__TextToSpeechConfigDialog_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* TextEditTextToSpeech__TextToSpeechConfigDialog_SharedPainter(const TextEditTextToSpeech__TextToSpeechConfigDialog* self) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self));
    if (vtextedittexttospeechtexttospeechconfigdialog) {
        return vtextedittexttospeechtexttospeechconfigdialog->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigDialog::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* TextEditTextToSpeech__TextToSpeechConfigDialog_SuperSharedPainter(const TextEditTextToSpeech__TextToSpeechConfigDialog* self) {
    if (auto* vtextedittexttospeechtexttospeechconfigdialog = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self))) {
        return vtextedittexttospeechtexttospeechconfigdialog->TextEditTextToSpeech::TextToSpeechConfigDialog::sharedPainter();
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigDialog::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_OnSharedPainter(TextEditTextToSpeech__TextToSpeechConfigDialog* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechconfigdialog = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self)))
        vtextedittexttospeechtexttospeechconfigdialog->textedittexttospeech__texttospeechconfigdialog_sharedpainter_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog::TextEditTextToSpeech__TextToSpeechConfigDialog_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_InputMethodEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, QInputMethodEvent* param1) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog) {
        vtextedittexttospeechtexttospeechconfigdialog->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigDialog::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_SuperInputMethodEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, QInputMethodEvent* param1) {
    if (auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self)) {
        vtextedittexttospeechtexttospeechconfigdialog->TextEditTextToSpeech::TextToSpeechConfigDialog::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigDialog::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_OnInputMethodEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self))
        vtextedittexttospeechtexttospeechconfigdialog->textedittexttospeech__texttospeechconfigdialog_inputmethodevent_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog::TextEditTextToSpeech__TextToSpeechConfigDialog_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* TextEditTextToSpeech__TextToSpeechConfigDialog_InputMethodQuery(const TextEditTextToSpeech__TextToSpeechConfigDialog* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* TextEditTextToSpeech__TextToSpeechConfigDialog_SuperInputMethodQuery(const TextEditTextToSpeech__TextToSpeechConfigDialog* self, int param1) {
    return new QVariant(self->TextEditTextToSpeech::TextToSpeechConfigDialog::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_OnInputMethodQuery(TextEditTextToSpeech__TextToSpeechConfigDialog* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechconfigdialog = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self)))
        vtextedittexttospeechtexttospeechconfigdialog->textedittexttospeech__texttospeechconfigdialog_inputmethodquery_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog::TextEditTextToSpeech__TextToSpeechConfigDialog_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool TextEditTextToSpeech__TextToSpeechConfigDialog_FocusNextPrevChild(TextEditTextToSpeech__TextToSpeechConfigDialog* self, bool next) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog) {
        return vtextedittexttospeechtexttospeechconfigdialog->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigDialog::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool TextEditTextToSpeech__TextToSpeechConfigDialog_SuperFocusNextPrevChild(TextEditTextToSpeech__TextToSpeechConfigDialog* self, bool next) {
    if (auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self)) {
        return vtextedittexttospeechtexttospeechconfigdialog->TextEditTextToSpeech::TextToSpeechConfigDialog::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigDialog::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_OnFocusNextPrevChild(TextEditTextToSpeech__TextToSpeechConfigDialog* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self))
        vtextedittexttospeechtexttospeechconfigdialog->textedittexttospeech__texttospeechconfigdialog_focusnextprevchild_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog::TextEditTextToSpeech__TextToSpeechConfigDialog_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_TimerEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, QTimerEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog) {
        vtextedittexttospeechtexttospeechconfigdialog->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigDialog::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_SuperTimerEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, QTimerEvent* event) {
    if (auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self)) {
        vtextedittexttospeechtexttospeechconfigdialog->TextEditTextToSpeech::TextToSpeechConfigDialog::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigDialog::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_OnTimerEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self))
        vtextedittexttospeechtexttospeechconfigdialog->textedittexttospeech__texttospeechconfigdialog_timerevent_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog::TextEditTextToSpeech__TextToSpeechConfigDialog_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_ChildEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, QChildEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog) {
        vtextedittexttospeechtexttospeechconfigdialog->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigDialog::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_SuperChildEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, QChildEvent* event) {
    if (auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self)) {
        vtextedittexttospeechtexttospeechconfigdialog->TextEditTextToSpeech::TextToSpeechConfigDialog::childEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigDialog::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_OnChildEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self))
        vtextedittexttospeechtexttospeechconfigdialog->textedittexttospeech__texttospeechconfigdialog_childevent_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog::TextEditTextToSpeech__TextToSpeechConfigDialog_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_CustomEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, QEvent* event) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog) {
        vtextedittexttospeechtexttospeechconfigdialog->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigDialog::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_SuperCustomEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, QEvent* event) {
    if (auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self)) {
        vtextedittexttospeechtexttospeechconfigdialog->TextEditTextToSpeech::TextToSpeechConfigDialog::customEvent(event);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigDialog::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_OnCustomEvent(TextEditTextToSpeech__TextToSpeechConfigDialog* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self))
        vtextedittexttospeechtexttospeechconfigdialog->textedittexttospeech__texttospeechconfigdialog_customevent_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog::TextEditTextToSpeech__TextToSpeechConfigDialog_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_ConnectNotify(TextEditTextToSpeech__TextToSpeechConfigDialog* self, const QMetaMethod* signal) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog) {
        vtextedittexttospeechtexttospeechconfigdialog->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigDialog::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_SuperConnectNotify(TextEditTextToSpeech__TextToSpeechConfigDialog* self, const QMetaMethod* signal) {
    if (auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self)) {
        vtextedittexttospeechtexttospeechconfigdialog->TextEditTextToSpeech::TextToSpeechConfigDialog::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigDialog::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_OnConnectNotify(TextEditTextToSpeech__TextToSpeechConfigDialog* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self))
        vtextedittexttospeechtexttospeechconfigdialog->textedittexttospeech__texttospeechconfigdialog_connectnotify_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog::TextEditTextToSpeech__TextToSpeechConfigDialog_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_DisconnectNotify(TextEditTextToSpeech__TextToSpeechConfigDialog* self, const QMetaMethod* signal) {
    auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self);
    if (vtextedittexttospeechtexttospeechconfigdialog) {
        vtextedittexttospeechtexttospeechconfigdialog->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigDialog::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_SuperDisconnectNotify(TextEditTextToSpeech__TextToSpeechConfigDialog* self, const QMetaMethod* signal) {
    if (auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self)) {
        vtextedittexttospeechtexttospeechconfigdialog->TextEditTextToSpeech::TextToSpeechConfigDialog::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method TextEditTextToSpeech::TextToSpeechConfigDialog::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_OnDisconnectNotify(TextEditTextToSpeech__TextToSpeechConfigDialog* self, intptr_t slot) {
    if (auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self))
        vtextedittexttospeechtexttospeechconfigdialog->textedittexttospeech__texttospeechconfigdialog_disconnectnotify_callback = reinterpret_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog::TextEditTextToSpeech__TextToSpeechConfigDialog_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_AdjustPosition(TextEditTextToSpeech__TextToSpeechConfigDialog* self, QWidget* param1) {
    if (auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self)) {
        vtextedittexttospeechtexttospeechconfigdialog->VirtualTextEditTextToSpeechTextToSpeechConfigDialog::adjustPosition(param1);
    } else
        qFatal("Error: Protected method TextEditTextToSpeech::TextToSpeechConfigDialog::adjustPosition called without a directly constructed type");
}

// Derived class protected handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_UpdateMicroFocus(TextEditTextToSpeech__TextToSpeechConfigDialog* self) {
    if (auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self)) {
        vtextedittexttospeechtexttospeechconfigdialog->VirtualTextEditTextToSpeechTextToSpeechConfigDialog::updateMicroFocus();
    } else
        qFatal("Error: Protected method TextEditTextToSpeech::TextToSpeechConfigDialog::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_Create(TextEditTextToSpeech__TextToSpeechConfigDialog* self) {
    if (auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self)) {
        vtextedittexttospeechtexttospeechconfigdialog->VirtualTextEditTextToSpeechTextToSpeechConfigDialog::create();
    } else
        qFatal("Error: Protected method TextEditTextToSpeech::TextToSpeechConfigDialog::create called without a directly constructed type");
}

// Derived class protected handler implementation
void TextEditTextToSpeech__TextToSpeechConfigDialog_Destroy(TextEditTextToSpeech__TextToSpeechConfigDialog* self) {
    if (auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self)) {
        vtextedittexttospeechtexttospeechconfigdialog->VirtualTextEditTextToSpeechTextToSpeechConfigDialog::destroy();
    } else
        qFatal("Error: Protected method TextEditTextToSpeech::TextToSpeechConfigDialog::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool TextEditTextToSpeech__TextToSpeechConfigDialog_FocusNextChild(TextEditTextToSpeech__TextToSpeechConfigDialog* self) {
    if (auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self)) {
        return vtextedittexttospeechtexttospeechconfigdialog->VirtualTextEditTextToSpeechTextToSpeechConfigDialog::focusNextChild();
    } else
        qFatal("Error: Protected method TextEditTextToSpeech::TextToSpeechConfigDialog::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool TextEditTextToSpeech__TextToSpeechConfigDialog_FocusPreviousChild(TextEditTextToSpeech__TextToSpeechConfigDialog* self) {
    if (auto* vtextedittexttospeechtexttospeechconfigdialog = dynamic_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self)) {
        return vtextedittexttospeechtexttospeechconfigdialog->VirtualTextEditTextToSpeechTextToSpeechConfigDialog::focusPreviousChild();
    } else
        qFatal("Error: Protected method TextEditTextToSpeech::TextToSpeechConfigDialog::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* TextEditTextToSpeech__TextToSpeechConfigDialog_Sender(const TextEditTextToSpeech__TextToSpeechConfigDialog* self) {
    if (auto* vtextedittexttospeechtexttospeechconfigdialog = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self))) {
        return vtextedittexttospeechtexttospeechconfigdialog->VirtualTextEditTextToSpeechTextToSpeechConfigDialog::sender();
    } else
        qFatal("Error: Protected method TextEditTextToSpeech::TextToSpeechConfigDialog::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int TextEditTextToSpeech__TextToSpeechConfigDialog_SenderSignalIndex(const TextEditTextToSpeech__TextToSpeechConfigDialog* self) {
    if (auto* vtextedittexttospeechtexttospeechconfigdialog = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self))) {
        return vtextedittexttospeechtexttospeechconfigdialog->VirtualTextEditTextToSpeechTextToSpeechConfigDialog::senderSignalIndex();
    } else
        qFatal("Error: Protected method TextEditTextToSpeech::TextToSpeechConfigDialog::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int TextEditTextToSpeech__TextToSpeechConfigDialog_Receivers(const TextEditTextToSpeech__TextToSpeechConfigDialog* self, const char* signal) {
    if (auto* vtextedittexttospeechtexttospeechconfigdialog = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self))) {
        return vtextedittexttospeechtexttospeechconfigdialog->VirtualTextEditTextToSpeechTextToSpeechConfigDialog::receivers(signal);
    } else
        qFatal("Error: Protected method TextEditTextToSpeech::TextToSpeechConfigDialog::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool TextEditTextToSpeech__TextToSpeechConfigDialog_IsSignalConnected(const TextEditTextToSpeech__TextToSpeechConfigDialog* self, const QMetaMethod* signal) {
    if (auto* vtextedittexttospeechtexttospeechconfigdialog = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self))) {
        return vtextedittexttospeechtexttospeechconfigdialog->VirtualTextEditTextToSpeechTextToSpeechConfigDialog::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method TextEditTextToSpeech::TextToSpeechConfigDialog::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double TextEditTextToSpeech__TextToSpeechConfigDialog_GetDecodedMetricF(const TextEditTextToSpeech__TextToSpeechConfigDialog* self, int metricA, int metricB) {
    if (auto* vtextedittexttospeechtexttospeechconfigdialog = const_cast<VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(dynamic_cast<const VirtualTextEditTextToSpeechTextToSpeechConfigDialog*>(self))) {
        return vtextedittexttospeechtexttospeechconfigdialog->VirtualTextEditTextToSpeechTextToSpeechConfigDialog::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method TextEditTextToSpeech::TextToSpeechConfigDialog::getDecodedMetricF called without a directly constructed type");
}

void TextEditTextToSpeech__TextToSpeechConfigDialog_Delete(TextEditTextToSpeech__TextToSpeechConfigDialog* self) {
    delete self;
}
