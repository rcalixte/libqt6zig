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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string Sonnet__ConfigDialog_Tr(const char* s) {
    auto _ret = Sonnet::ConfigDialog::tr(s);
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
    auto _ret = self->language();
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
    if (vsonnet__configdialog) {
        vsonnet__configdialog->slotOk();
    }
}

void Sonnet__ConfigDialog_SlotApply(Sonnet__ConfigDialog* self) {
    auto* vsonnet__configdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnet__configdialog) {
        vsonnet__configdialog->slotApply();
    }
}

void Sonnet__ConfigDialog_LanguageChanged(Sonnet__ConfigDialog* self, const libqt_string language) {
    QString language_QString = QString::fromUtf8(language.data, language.len);
    self->languageChanged(language_QString);
}

void Sonnet__ConfigDialog_Connect_LanguageChanged(Sonnet__ConfigDialog* self, intptr_t slot) {
    void (*slotFunc)(Sonnet__ConfigDialog*, const char*) = reinterpret_cast<void (*)(Sonnet__ConfigDialog*, const char*)>(slot);
    Sonnet::ConfigDialog::connect(self,
                                  static_cast<void (Sonnet::ConfigDialog::*)(const QString&)>(&Sonnet::ConfigDialog::languageChanged),
                                  [self, slotFunc](const QString& language) {
                                      const auto language_ret = language;
                                      // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                                      QByteArray language_b = language_ret.toUtf8();
                                      auto language_str_len = language_b.length();
                                      const char* language_str = static_cast<const char*>(malloc(language_str_len + 1));
                                      memcpy((void*)language_str, language_b.data(), language_str_len);
                                      ((char*)language_str)[language_str_len] = '\0';
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
    Sonnet::ConfigDialog::connect(self,
                                  static_cast<void (Sonnet::ConfigDialog::*)()>(&Sonnet::ConfigDialog::configChanged),
                                  [self, slotFunc]() {
                                      slotFunc(self);
                                  });
}

libqt_string Sonnet__ConfigDialog_Tr2(const char* s, const char* c) {
    auto _ret = Sonnet::ConfigDialog::tr(s, c);
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
    auto _ret = Sonnet::ConfigDialog::tr(s, c, static_cast<int>(n));
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
QMetaObject* Sonnet__ConfigDialog_SuperMetaObject(const Sonnet__ConfigDialog* self) {
    return (QMetaObject*)self->Sonnet::ConfigDialog::metaObject();
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigDialog_OnMetaObject(Sonnet__ConfigDialog* self, intptr_t slot) {
    if (auto* vsonnetconfigdialog = const_cast<VirtualSonnetConfigDialog*>(dynamic_cast<const VirtualSonnetConfigDialog*>(self)))
        vsonnetconfigdialog->sonnet__configdialog_metaobject_callback = reinterpret_cast<VirtualSonnetConfigDialog::Sonnet__ConfigDialog_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* Sonnet__ConfigDialog_SuperMetacast(Sonnet__ConfigDialog* self, const char* param1) {
    return self->Sonnet::ConfigDialog::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigDialog_OnMetacast(Sonnet__ConfigDialog* self, intptr_t slot) {
    if (auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self))
        vsonnetconfigdialog->sonnet__configdialog_metacast_callback = reinterpret_cast<VirtualSonnetConfigDialog::Sonnet__ConfigDialog_Metacast_Callback>(slot);
}

// Base class handler implementation
int Sonnet__ConfigDialog_SuperMetacall(Sonnet__ConfigDialog* self, int param1, int param2, void** param3) {
    return self->Sonnet::ConfigDialog::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigDialog_OnMetacall(Sonnet__ConfigDialog* self, intptr_t slot) {
    if (auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self))
        vsonnetconfigdialog->sonnet__configdialog_metacall_callback = reinterpret_cast<VirtualSonnetConfigDialog::Sonnet__ConfigDialog_Metacall_Callback>(slot);
}

// Base class handler implementation
void Sonnet__ConfigDialog_SuperSlotOk(Sonnet__ConfigDialog* self) {
    if (auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self)) {
        vsonnetconfigdialog->Sonnet::ConfigDialog::slotOk();
    } else
        qFatal("Error: Protected virtual method Sonnet::ConfigDialog::slotOk called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigDialog_OnSlotOk(Sonnet__ConfigDialog* self, intptr_t slot) {
    if (auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self))
        vsonnetconfigdialog->sonnet__configdialog_slotok_callback = reinterpret_cast<VirtualSonnetConfigDialog::Sonnet__ConfigDialog_SlotOk_Callback>(slot);
}

// Base class handler implementation
void Sonnet__ConfigDialog_SuperSlotApply(Sonnet__ConfigDialog* self) {
    if (auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self)) {
        vsonnetconfigdialog->Sonnet::ConfigDialog::slotApply();
    } else
        qFatal("Error: Protected virtual method Sonnet::ConfigDialog::slotApply called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigDialog_OnSlotApply(Sonnet__ConfigDialog* self, intptr_t slot) {
    if (auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self))
        vsonnetconfigdialog->sonnet__configdialog_slotapply_callback = reinterpret_cast<VirtualSonnetConfigDialog::Sonnet__ConfigDialog_SlotApply_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__ConfigDialog_SetVisible(Sonnet__ConfigDialog* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void Sonnet__ConfigDialog_SuperSetVisible(Sonnet__ConfigDialog* self, bool visible) {
    self->Sonnet::ConfigDialog::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigDialog_OnSetVisible(Sonnet__ConfigDialog* self, intptr_t slot) {
    if (auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self))
        vsonnetconfigdialog->sonnet__configdialog_setvisible_callback = reinterpret_cast<VirtualSonnetConfigDialog::Sonnet__ConfigDialog_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* Sonnet__ConfigDialog_SizeHint(const Sonnet__ConfigDialog* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* Sonnet__ConfigDialog_SuperSizeHint(const Sonnet__ConfigDialog* self) {
    return new QSize(self->Sonnet::ConfigDialog::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigDialog_OnSizeHint(Sonnet__ConfigDialog* self, intptr_t slot) {
    if (auto* vsonnetconfigdialog = const_cast<VirtualSonnetConfigDialog*>(dynamic_cast<const VirtualSonnetConfigDialog*>(self)))
        vsonnetconfigdialog->sonnet__configdialog_sizehint_callback = reinterpret_cast<VirtualSonnetConfigDialog::Sonnet__ConfigDialog_SizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* Sonnet__ConfigDialog_MinimumSizeHint(const Sonnet__ConfigDialog* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* Sonnet__ConfigDialog_SuperMinimumSizeHint(const Sonnet__ConfigDialog* self) {
    return new QSize(self->Sonnet::ConfigDialog::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigDialog_OnMinimumSizeHint(Sonnet__ConfigDialog* self, intptr_t slot) {
    if (auto* vsonnetconfigdialog = const_cast<VirtualSonnetConfigDialog*>(dynamic_cast<const VirtualSonnetConfigDialog*>(self)))
        vsonnetconfigdialog->sonnet__configdialog_minimumsizehint_callback = reinterpret_cast<VirtualSonnetConfigDialog::Sonnet__ConfigDialog_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__ConfigDialog_Open(Sonnet__ConfigDialog* self) {
    self->open();
}

// Base class handler implementation
void Sonnet__ConfigDialog_SuperOpen(Sonnet__ConfigDialog* self) {
    self->Sonnet::ConfigDialog::open();
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigDialog_OnOpen(Sonnet__ConfigDialog* self, intptr_t slot) {
    if (auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self))
        vsonnetconfigdialog->sonnet__configdialog_open_callback = reinterpret_cast<VirtualSonnetConfigDialog::Sonnet__ConfigDialog_Open_Callback>(slot);
}

// Derived class handler implementation
int Sonnet__ConfigDialog_Exec(Sonnet__ConfigDialog* self) {
    return self->exec();
}

// Base class handler implementation
int Sonnet__ConfigDialog_SuperExec(Sonnet__ConfigDialog* self) {
    return self->Sonnet::ConfigDialog::exec();
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigDialog_OnExec(Sonnet__ConfigDialog* self, intptr_t slot) {
    if (auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self))
        vsonnetconfigdialog->sonnet__configdialog_exec_callback = reinterpret_cast<VirtualSonnetConfigDialog::Sonnet__ConfigDialog_Exec_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__ConfigDialog_Done(Sonnet__ConfigDialog* self, int param1) {
    self->done(static_cast<int>(param1));
}

// Base class handler implementation
void Sonnet__ConfigDialog_SuperDone(Sonnet__ConfigDialog* self, int param1) {
    self->Sonnet::ConfigDialog::done(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigDialog_OnDone(Sonnet__ConfigDialog* self, intptr_t slot) {
    if (auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self))
        vsonnetconfigdialog->sonnet__configdialog_done_callback = reinterpret_cast<VirtualSonnetConfigDialog::Sonnet__ConfigDialog_Done_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__ConfigDialog_Accept(Sonnet__ConfigDialog* self) {
    self->accept();
}

// Base class handler implementation
void Sonnet__ConfigDialog_SuperAccept(Sonnet__ConfigDialog* self) {
    self->Sonnet::ConfigDialog::accept();
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigDialog_OnAccept(Sonnet__ConfigDialog* self, intptr_t slot) {
    if (auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self))
        vsonnetconfigdialog->sonnet__configdialog_accept_callback = reinterpret_cast<VirtualSonnetConfigDialog::Sonnet__ConfigDialog_Accept_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__ConfigDialog_Reject(Sonnet__ConfigDialog* self) {
    self->reject();
}

// Base class handler implementation
void Sonnet__ConfigDialog_SuperReject(Sonnet__ConfigDialog* self) {
    self->Sonnet::ConfigDialog::reject();
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigDialog_OnReject(Sonnet__ConfigDialog* self, intptr_t slot) {
    if (auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self))
        vsonnetconfigdialog->sonnet__configdialog_reject_callback = reinterpret_cast<VirtualSonnetConfigDialog::Sonnet__ConfigDialog_Reject_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__ConfigDialog_KeyPressEvent(Sonnet__ConfigDialog* self, QKeyEvent* param1) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog) {
        vsonnetconfigdialog->keyPressEvent(param1);
    } else {
        qFatal("Error: Protected virtual method Sonnet::ConfigDialog::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__ConfigDialog_SuperKeyPressEvent(Sonnet__ConfigDialog* self, QKeyEvent* param1) {
    if (auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self)) {
        vsonnetconfigdialog->Sonnet::ConfigDialog::keyPressEvent(param1);
    } else
        qFatal("Error: Protected virtual method Sonnet::ConfigDialog::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigDialog_OnKeyPressEvent(Sonnet__ConfigDialog* self, intptr_t slot) {
    if (auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self))
        vsonnetconfigdialog->sonnet__configdialog_keypressevent_callback = reinterpret_cast<VirtualSonnetConfigDialog::Sonnet__ConfigDialog_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__ConfigDialog_CloseEvent(Sonnet__ConfigDialog* self, QCloseEvent* param1) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog) {
        vsonnetconfigdialog->closeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method Sonnet::ConfigDialog::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__ConfigDialog_SuperCloseEvent(Sonnet__ConfigDialog* self, QCloseEvent* param1) {
    if (auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self)) {
        vsonnetconfigdialog->Sonnet::ConfigDialog::closeEvent(param1);
    } else
        qFatal("Error: Protected virtual method Sonnet::ConfigDialog::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigDialog_OnCloseEvent(Sonnet__ConfigDialog* self, intptr_t slot) {
    if (auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self))
        vsonnetconfigdialog->sonnet__configdialog_closeevent_callback = reinterpret_cast<VirtualSonnetConfigDialog::Sonnet__ConfigDialog_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__ConfigDialog_ShowEvent(Sonnet__ConfigDialog* self, QShowEvent* param1) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog) {
        vsonnetconfigdialog->showEvent(param1);
    } else {
        qFatal("Error: Protected virtual method Sonnet::ConfigDialog::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__ConfigDialog_SuperShowEvent(Sonnet__ConfigDialog* self, QShowEvent* param1) {
    if (auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self)) {
        vsonnetconfigdialog->Sonnet::ConfigDialog::showEvent(param1);
    } else
        qFatal("Error: Protected virtual method Sonnet::ConfigDialog::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigDialog_OnShowEvent(Sonnet__ConfigDialog* self, intptr_t slot) {
    if (auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self))
        vsonnetconfigdialog->sonnet__configdialog_showevent_callback = reinterpret_cast<VirtualSonnetConfigDialog::Sonnet__ConfigDialog_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__ConfigDialog_ResizeEvent(Sonnet__ConfigDialog* self, QResizeEvent* param1) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog) {
        vsonnetconfigdialog->resizeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method Sonnet::ConfigDialog::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__ConfigDialog_SuperResizeEvent(Sonnet__ConfigDialog* self, QResizeEvent* param1) {
    if (auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self)) {
        vsonnetconfigdialog->Sonnet::ConfigDialog::resizeEvent(param1);
    } else
        qFatal("Error: Protected virtual method Sonnet::ConfigDialog::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigDialog_OnResizeEvent(Sonnet__ConfigDialog* self, intptr_t slot) {
    if (auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self))
        vsonnetconfigdialog->sonnet__configdialog_resizeevent_callback = reinterpret_cast<VirtualSonnetConfigDialog::Sonnet__ConfigDialog_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__ConfigDialog_ContextMenuEvent(Sonnet__ConfigDialog* self, QContextMenuEvent* param1) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog) {
        vsonnetconfigdialog->contextMenuEvent(param1);
    } else {
        qFatal("Error: Protected virtual method Sonnet::ConfigDialog::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__ConfigDialog_SuperContextMenuEvent(Sonnet__ConfigDialog* self, QContextMenuEvent* param1) {
    if (auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self)) {
        vsonnetconfigdialog->Sonnet::ConfigDialog::contextMenuEvent(param1);
    } else
        qFatal("Error: Protected virtual method Sonnet::ConfigDialog::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigDialog_OnContextMenuEvent(Sonnet__ConfigDialog* self, intptr_t slot) {
    if (auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self))
        vsonnetconfigdialog->sonnet__configdialog_contextmenuevent_callback = reinterpret_cast<VirtualSonnetConfigDialog::Sonnet__ConfigDialog_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
bool Sonnet__ConfigDialog_EventFilter(Sonnet__ConfigDialog* self, QObject* param1, QEvent* param2) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog) {
        return vsonnetconfigdialog->eventFilter(param1, param2);
    } else {
        qFatal("Error: Protected virtual method Sonnet::ConfigDialog::eventFilter called without a directly constructed type");
    }
}

// Base class handler implementation
bool Sonnet__ConfigDialog_SuperEventFilter(Sonnet__ConfigDialog* self, QObject* param1, QEvent* param2) {
    if (auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self)) {
        return vsonnetconfigdialog->Sonnet::ConfigDialog::eventFilter(param1, param2);
    } else
        qFatal("Error: Protected virtual method Sonnet::ConfigDialog::eventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigDialog_OnEventFilter(Sonnet__ConfigDialog* self, intptr_t slot) {
    if (auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self))
        vsonnetconfigdialog->sonnet__configdialog_eventfilter_callback = reinterpret_cast<VirtualSonnetConfigDialog::Sonnet__ConfigDialog_EventFilter_Callback>(slot);
}

// Derived class handler implementation
int Sonnet__ConfigDialog_DevType(const Sonnet__ConfigDialog* self) {
    return self->devType();
}

// Base class handler implementation
int Sonnet__ConfigDialog_SuperDevType(const Sonnet__ConfigDialog* self) {
    return self->Sonnet::ConfigDialog::devType();
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigDialog_OnDevType(Sonnet__ConfigDialog* self, intptr_t slot) {
    if (auto* vsonnetconfigdialog = const_cast<VirtualSonnetConfigDialog*>(dynamic_cast<const VirtualSonnetConfigDialog*>(self)))
        vsonnetconfigdialog->sonnet__configdialog_devtype_callback = reinterpret_cast<VirtualSonnetConfigDialog::Sonnet__ConfigDialog_DevType_Callback>(slot);
}

// Derived class handler implementation
int Sonnet__ConfigDialog_HeightForWidth(const Sonnet__ConfigDialog* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int Sonnet__ConfigDialog_SuperHeightForWidth(const Sonnet__ConfigDialog* self, int param1) {
    return self->Sonnet::ConfigDialog::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigDialog_OnHeightForWidth(Sonnet__ConfigDialog* self, intptr_t slot) {
    if (auto* vsonnetconfigdialog = const_cast<VirtualSonnetConfigDialog*>(dynamic_cast<const VirtualSonnetConfigDialog*>(self)))
        vsonnetconfigdialog->sonnet__configdialog_heightforwidth_callback = reinterpret_cast<VirtualSonnetConfigDialog::Sonnet__ConfigDialog_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool Sonnet__ConfigDialog_HasHeightForWidth(const Sonnet__ConfigDialog* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool Sonnet__ConfigDialog_SuperHasHeightForWidth(const Sonnet__ConfigDialog* self) {
    return self->Sonnet::ConfigDialog::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigDialog_OnHasHeightForWidth(Sonnet__ConfigDialog* self, intptr_t slot) {
    if (auto* vsonnetconfigdialog = const_cast<VirtualSonnetConfigDialog*>(dynamic_cast<const VirtualSonnetConfigDialog*>(self)))
        vsonnetconfigdialog->sonnet__configdialog_hasheightforwidth_callback = reinterpret_cast<VirtualSonnetConfigDialog::Sonnet__ConfigDialog_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* Sonnet__ConfigDialog_PaintEngine(const Sonnet__ConfigDialog* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* Sonnet__ConfigDialog_SuperPaintEngine(const Sonnet__ConfigDialog* self) {
    return self->Sonnet::ConfigDialog::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigDialog_OnPaintEngine(Sonnet__ConfigDialog* self, intptr_t slot) {
    if (auto* vsonnetconfigdialog = const_cast<VirtualSonnetConfigDialog*>(dynamic_cast<const VirtualSonnetConfigDialog*>(self)))
        vsonnetconfigdialog->sonnet__configdialog_paintengine_callback = reinterpret_cast<VirtualSonnetConfigDialog::Sonnet__ConfigDialog_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
bool Sonnet__ConfigDialog_Event(Sonnet__ConfigDialog* self, QEvent* event) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog) {
        return vsonnetconfigdialog->event(event);
    } else {
        qFatal("Error: Protected virtual method Sonnet::ConfigDialog::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool Sonnet__ConfigDialog_SuperEvent(Sonnet__ConfigDialog* self, QEvent* event) {
    if (auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self)) {
        return vsonnetconfigdialog->Sonnet::ConfigDialog::event(event);
    } else
        qFatal("Error: Protected virtual method Sonnet::ConfigDialog::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigDialog_OnEvent(Sonnet__ConfigDialog* self, intptr_t slot) {
    if (auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self))
        vsonnetconfigdialog->sonnet__configdialog_event_callback = reinterpret_cast<VirtualSonnetConfigDialog::Sonnet__ConfigDialog_Event_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__ConfigDialog_MousePressEvent(Sonnet__ConfigDialog* self, QMouseEvent* event) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog) {
        vsonnetconfigdialog->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method Sonnet::ConfigDialog::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__ConfigDialog_SuperMousePressEvent(Sonnet__ConfigDialog* self, QMouseEvent* event) {
    if (auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self)) {
        vsonnetconfigdialog->Sonnet::ConfigDialog::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method Sonnet::ConfigDialog::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigDialog_OnMousePressEvent(Sonnet__ConfigDialog* self, intptr_t slot) {
    if (auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self))
        vsonnetconfigdialog->sonnet__configdialog_mousepressevent_callback = reinterpret_cast<VirtualSonnetConfigDialog::Sonnet__ConfigDialog_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__ConfigDialog_MouseReleaseEvent(Sonnet__ConfigDialog* self, QMouseEvent* event) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog) {
        vsonnetconfigdialog->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method Sonnet::ConfigDialog::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__ConfigDialog_SuperMouseReleaseEvent(Sonnet__ConfigDialog* self, QMouseEvent* event) {
    if (auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self)) {
        vsonnetconfigdialog->Sonnet::ConfigDialog::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method Sonnet::ConfigDialog::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigDialog_OnMouseReleaseEvent(Sonnet__ConfigDialog* self, intptr_t slot) {
    if (auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self))
        vsonnetconfigdialog->sonnet__configdialog_mousereleaseevent_callback = reinterpret_cast<VirtualSonnetConfigDialog::Sonnet__ConfigDialog_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__ConfigDialog_MouseDoubleClickEvent(Sonnet__ConfigDialog* self, QMouseEvent* event) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog) {
        vsonnetconfigdialog->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method Sonnet::ConfigDialog::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__ConfigDialog_SuperMouseDoubleClickEvent(Sonnet__ConfigDialog* self, QMouseEvent* event) {
    if (auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self)) {
        vsonnetconfigdialog->Sonnet::ConfigDialog::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method Sonnet::ConfigDialog::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigDialog_OnMouseDoubleClickEvent(Sonnet__ConfigDialog* self, intptr_t slot) {
    if (auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self))
        vsonnetconfigdialog->sonnet__configdialog_mousedoubleclickevent_callback = reinterpret_cast<VirtualSonnetConfigDialog::Sonnet__ConfigDialog_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__ConfigDialog_MouseMoveEvent(Sonnet__ConfigDialog* self, QMouseEvent* event) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog) {
        vsonnetconfigdialog->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method Sonnet::ConfigDialog::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__ConfigDialog_SuperMouseMoveEvent(Sonnet__ConfigDialog* self, QMouseEvent* event) {
    if (auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self)) {
        vsonnetconfigdialog->Sonnet::ConfigDialog::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method Sonnet::ConfigDialog::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigDialog_OnMouseMoveEvent(Sonnet__ConfigDialog* self, intptr_t slot) {
    if (auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self))
        vsonnetconfigdialog->sonnet__configdialog_mousemoveevent_callback = reinterpret_cast<VirtualSonnetConfigDialog::Sonnet__ConfigDialog_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__ConfigDialog_WheelEvent(Sonnet__ConfigDialog* self, QWheelEvent* event) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog) {
        vsonnetconfigdialog->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method Sonnet::ConfigDialog::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__ConfigDialog_SuperWheelEvent(Sonnet__ConfigDialog* self, QWheelEvent* event) {
    if (auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self)) {
        vsonnetconfigdialog->Sonnet::ConfigDialog::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method Sonnet::ConfigDialog::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigDialog_OnWheelEvent(Sonnet__ConfigDialog* self, intptr_t slot) {
    if (auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self))
        vsonnetconfigdialog->sonnet__configdialog_wheelevent_callback = reinterpret_cast<VirtualSonnetConfigDialog::Sonnet__ConfigDialog_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__ConfigDialog_KeyReleaseEvent(Sonnet__ConfigDialog* self, QKeyEvent* event) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog) {
        vsonnetconfigdialog->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method Sonnet::ConfigDialog::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__ConfigDialog_SuperKeyReleaseEvent(Sonnet__ConfigDialog* self, QKeyEvent* event) {
    if (auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self)) {
        vsonnetconfigdialog->Sonnet::ConfigDialog::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method Sonnet::ConfigDialog::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigDialog_OnKeyReleaseEvent(Sonnet__ConfigDialog* self, intptr_t slot) {
    if (auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self))
        vsonnetconfigdialog->sonnet__configdialog_keyreleaseevent_callback = reinterpret_cast<VirtualSonnetConfigDialog::Sonnet__ConfigDialog_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__ConfigDialog_FocusInEvent(Sonnet__ConfigDialog* self, QFocusEvent* event) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog) {
        vsonnetconfigdialog->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method Sonnet::ConfigDialog::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__ConfigDialog_SuperFocusInEvent(Sonnet__ConfigDialog* self, QFocusEvent* event) {
    if (auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self)) {
        vsonnetconfigdialog->Sonnet::ConfigDialog::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method Sonnet::ConfigDialog::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigDialog_OnFocusInEvent(Sonnet__ConfigDialog* self, intptr_t slot) {
    if (auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self))
        vsonnetconfigdialog->sonnet__configdialog_focusinevent_callback = reinterpret_cast<VirtualSonnetConfigDialog::Sonnet__ConfigDialog_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__ConfigDialog_FocusOutEvent(Sonnet__ConfigDialog* self, QFocusEvent* event) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog) {
        vsonnetconfigdialog->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method Sonnet::ConfigDialog::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__ConfigDialog_SuperFocusOutEvent(Sonnet__ConfigDialog* self, QFocusEvent* event) {
    if (auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self)) {
        vsonnetconfigdialog->Sonnet::ConfigDialog::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method Sonnet::ConfigDialog::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigDialog_OnFocusOutEvent(Sonnet__ConfigDialog* self, intptr_t slot) {
    if (auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self))
        vsonnetconfigdialog->sonnet__configdialog_focusoutevent_callback = reinterpret_cast<VirtualSonnetConfigDialog::Sonnet__ConfigDialog_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__ConfigDialog_EnterEvent(Sonnet__ConfigDialog* self, QEnterEvent* event) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog) {
        vsonnetconfigdialog->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method Sonnet::ConfigDialog::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__ConfigDialog_SuperEnterEvent(Sonnet__ConfigDialog* self, QEnterEvent* event) {
    if (auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self)) {
        vsonnetconfigdialog->Sonnet::ConfigDialog::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method Sonnet::ConfigDialog::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigDialog_OnEnterEvent(Sonnet__ConfigDialog* self, intptr_t slot) {
    if (auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self))
        vsonnetconfigdialog->sonnet__configdialog_enterevent_callback = reinterpret_cast<VirtualSonnetConfigDialog::Sonnet__ConfigDialog_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__ConfigDialog_LeaveEvent(Sonnet__ConfigDialog* self, QEvent* event) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog) {
        vsonnetconfigdialog->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method Sonnet::ConfigDialog::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__ConfigDialog_SuperLeaveEvent(Sonnet__ConfigDialog* self, QEvent* event) {
    if (auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self)) {
        vsonnetconfigdialog->Sonnet::ConfigDialog::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method Sonnet::ConfigDialog::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigDialog_OnLeaveEvent(Sonnet__ConfigDialog* self, intptr_t slot) {
    if (auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self))
        vsonnetconfigdialog->sonnet__configdialog_leaveevent_callback = reinterpret_cast<VirtualSonnetConfigDialog::Sonnet__ConfigDialog_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__ConfigDialog_PaintEvent(Sonnet__ConfigDialog* self, QPaintEvent* event) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog) {
        vsonnetconfigdialog->paintEvent(event);
    } else {
        qFatal("Error: Protected virtual method Sonnet::ConfigDialog::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__ConfigDialog_SuperPaintEvent(Sonnet__ConfigDialog* self, QPaintEvent* event) {
    if (auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self)) {
        vsonnetconfigdialog->Sonnet::ConfigDialog::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method Sonnet::ConfigDialog::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigDialog_OnPaintEvent(Sonnet__ConfigDialog* self, intptr_t slot) {
    if (auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self))
        vsonnetconfigdialog->sonnet__configdialog_paintevent_callback = reinterpret_cast<VirtualSonnetConfigDialog::Sonnet__ConfigDialog_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__ConfigDialog_MoveEvent(Sonnet__ConfigDialog* self, QMoveEvent* event) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog) {
        vsonnetconfigdialog->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method Sonnet::ConfigDialog::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__ConfigDialog_SuperMoveEvent(Sonnet__ConfigDialog* self, QMoveEvent* event) {
    if (auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self)) {
        vsonnetconfigdialog->Sonnet::ConfigDialog::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method Sonnet::ConfigDialog::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigDialog_OnMoveEvent(Sonnet__ConfigDialog* self, intptr_t slot) {
    if (auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self))
        vsonnetconfigdialog->sonnet__configdialog_moveevent_callback = reinterpret_cast<VirtualSonnetConfigDialog::Sonnet__ConfigDialog_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__ConfigDialog_TabletEvent(Sonnet__ConfigDialog* self, QTabletEvent* event) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog) {
        vsonnetconfigdialog->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method Sonnet::ConfigDialog::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__ConfigDialog_SuperTabletEvent(Sonnet__ConfigDialog* self, QTabletEvent* event) {
    if (auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self)) {
        vsonnetconfigdialog->Sonnet::ConfigDialog::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method Sonnet::ConfigDialog::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigDialog_OnTabletEvent(Sonnet__ConfigDialog* self, intptr_t slot) {
    if (auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self))
        vsonnetconfigdialog->sonnet__configdialog_tabletevent_callback = reinterpret_cast<VirtualSonnetConfigDialog::Sonnet__ConfigDialog_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__ConfigDialog_ActionEvent(Sonnet__ConfigDialog* self, QActionEvent* event) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog) {
        vsonnetconfigdialog->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method Sonnet::ConfigDialog::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__ConfigDialog_SuperActionEvent(Sonnet__ConfigDialog* self, QActionEvent* event) {
    if (auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self)) {
        vsonnetconfigdialog->Sonnet::ConfigDialog::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method Sonnet::ConfigDialog::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigDialog_OnActionEvent(Sonnet__ConfigDialog* self, intptr_t slot) {
    if (auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self))
        vsonnetconfigdialog->sonnet__configdialog_actionevent_callback = reinterpret_cast<VirtualSonnetConfigDialog::Sonnet__ConfigDialog_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__ConfigDialog_DragEnterEvent(Sonnet__ConfigDialog* self, QDragEnterEvent* event) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog) {
        vsonnetconfigdialog->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method Sonnet::ConfigDialog::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__ConfigDialog_SuperDragEnterEvent(Sonnet__ConfigDialog* self, QDragEnterEvent* event) {
    if (auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self)) {
        vsonnetconfigdialog->Sonnet::ConfigDialog::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method Sonnet::ConfigDialog::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigDialog_OnDragEnterEvent(Sonnet__ConfigDialog* self, intptr_t slot) {
    if (auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self))
        vsonnetconfigdialog->sonnet__configdialog_dragenterevent_callback = reinterpret_cast<VirtualSonnetConfigDialog::Sonnet__ConfigDialog_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__ConfigDialog_DragMoveEvent(Sonnet__ConfigDialog* self, QDragMoveEvent* event) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog) {
        vsonnetconfigdialog->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method Sonnet::ConfigDialog::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__ConfigDialog_SuperDragMoveEvent(Sonnet__ConfigDialog* self, QDragMoveEvent* event) {
    if (auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self)) {
        vsonnetconfigdialog->Sonnet::ConfigDialog::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method Sonnet::ConfigDialog::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigDialog_OnDragMoveEvent(Sonnet__ConfigDialog* self, intptr_t slot) {
    if (auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self))
        vsonnetconfigdialog->sonnet__configdialog_dragmoveevent_callback = reinterpret_cast<VirtualSonnetConfigDialog::Sonnet__ConfigDialog_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__ConfigDialog_DragLeaveEvent(Sonnet__ConfigDialog* self, QDragLeaveEvent* event) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog) {
        vsonnetconfigdialog->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method Sonnet::ConfigDialog::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__ConfigDialog_SuperDragLeaveEvent(Sonnet__ConfigDialog* self, QDragLeaveEvent* event) {
    if (auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self)) {
        vsonnetconfigdialog->Sonnet::ConfigDialog::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method Sonnet::ConfigDialog::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigDialog_OnDragLeaveEvent(Sonnet__ConfigDialog* self, intptr_t slot) {
    if (auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self))
        vsonnetconfigdialog->sonnet__configdialog_dragleaveevent_callback = reinterpret_cast<VirtualSonnetConfigDialog::Sonnet__ConfigDialog_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__ConfigDialog_DropEvent(Sonnet__ConfigDialog* self, QDropEvent* event) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog) {
        vsonnetconfigdialog->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method Sonnet::ConfigDialog::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__ConfigDialog_SuperDropEvent(Sonnet__ConfigDialog* self, QDropEvent* event) {
    if (auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self)) {
        vsonnetconfigdialog->Sonnet::ConfigDialog::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method Sonnet::ConfigDialog::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigDialog_OnDropEvent(Sonnet__ConfigDialog* self, intptr_t slot) {
    if (auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self))
        vsonnetconfigdialog->sonnet__configdialog_dropevent_callback = reinterpret_cast<VirtualSonnetConfigDialog::Sonnet__ConfigDialog_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__ConfigDialog_HideEvent(Sonnet__ConfigDialog* self, QHideEvent* event) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog) {
        vsonnetconfigdialog->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method Sonnet::ConfigDialog::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__ConfigDialog_SuperHideEvent(Sonnet__ConfigDialog* self, QHideEvent* event) {
    if (auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self)) {
        vsonnetconfigdialog->Sonnet::ConfigDialog::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method Sonnet::ConfigDialog::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigDialog_OnHideEvent(Sonnet__ConfigDialog* self, intptr_t slot) {
    if (auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self))
        vsonnetconfigdialog->sonnet__configdialog_hideevent_callback = reinterpret_cast<VirtualSonnetConfigDialog::Sonnet__ConfigDialog_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool Sonnet__ConfigDialog_NativeEvent(Sonnet__ConfigDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog) {
        return vsonnetconfigdialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method Sonnet::ConfigDialog::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool Sonnet__ConfigDialog_SuperNativeEvent(Sonnet__ConfigDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self)) {
        return vsonnetconfigdialog->Sonnet::ConfigDialog::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method Sonnet::ConfigDialog::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigDialog_OnNativeEvent(Sonnet__ConfigDialog* self, intptr_t slot) {
    if (auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self))
        vsonnetconfigdialog->sonnet__configdialog_nativeevent_callback = reinterpret_cast<VirtualSonnetConfigDialog::Sonnet__ConfigDialog_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__ConfigDialog_ChangeEvent(Sonnet__ConfigDialog* self, QEvent* param1) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog) {
        vsonnetconfigdialog->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method Sonnet::ConfigDialog::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__ConfigDialog_SuperChangeEvent(Sonnet__ConfigDialog* self, QEvent* param1) {
    if (auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self)) {
        vsonnetconfigdialog->Sonnet::ConfigDialog::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method Sonnet::ConfigDialog::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigDialog_OnChangeEvent(Sonnet__ConfigDialog* self, intptr_t slot) {
    if (auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self))
        vsonnetconfigdialog->sonnet__configdialog_changeevent_callback = reinterpret_cast<VirtualSonnetConfigDialog::Sonnet__ConfigDialog_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
int Sonnet__ConfigDialog_Metric(const Sonnet__ConfigDialog* self, int param1) {
    auto* vsonnetconfigdialog = const_cast<VirtualSonnetConfigDialog*>(dynamic_cast<const VirtualSonnetConfigDialog*>(self));
    if (vsonnetconfigdialog) {
        return vsonnetconfigdialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method Sonnet::ConfigDialog::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int Sonnet__ConfigDialog_SuperMetric(const Sonnet__ConfigDialog* self, int param1) {
    if (auto* vsonnetconfigdialog = const_cast<VirtualSonnetConfigDialog*>(dynamic_cast<const VirtualSonnetConfigDialog*>(self))) {
        return vsonnetconfigdialog->Sonnet::ConfigDialog::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method Sonnet::ConfigDialog::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigDialog_OnMetric(Sonnet__ConfigDialog* self, intptr_t slot) {
    if (auto* vsonnetconfigdialog = const_cast<VirtualSonnetConfigDialog*>(dynamic_cast<const VirtualSonnetConfigDialog*>(self)))
        vsonnetconfigdialog->sonnet__configdialog_metric_callback = reinterpret_cast<VirtualSonnetConfigDialog::Sonnet__ConfigDialog_Metric_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__ConfigDialog_InitPainter(const Sonnet__ConfigDialog* self, QPainter* painter) {
    auto* vsonnetconfigdialog = const_cast<VirtualSonnetConfigDialog*>(dynamic_cast<const VirtualSonnetConfigDialog*>(self));
    if (vsonnetconfigdialog) {
        vsonnetconfigdialog->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method Sonnet::ConfigDialog::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__ConfigDialog_SuperInitPainter(const Sonnet__ConfigDialog* self, QPainter* painter) {
    if (auto* vsonnetconfigdialog = const_cast<VirtualSonnetConfigDialog*>(dynamic_cast<const VirtualSonnetConfigDialog*>(self))) {
        vsonnetconfigdialog->Sonnet::ConfigDialog::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method Sonnet::ConfigDialog::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigDialog_OnInitPainter(Sonnet__ConfigDialog* self, intptr_t slot) {
    if (auto* vsonnetconfigdialog = const_cast<VirtualSonnetConfigDialog*>(dynamic_cast<const VirtualSonnetConfigDialog*>(self)))
        vsonnetconfigdialog->sonnet__configdialog_initpainter_callback = reinterpret_cast<VirtualSonnetConfigDialog::Sonnet__ConfigDialog_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* Sonnet__ConfigDialog_Redirected(const Sonnet__ConfigDialog* self, QPoint* offset) {
    auto* vsonnetconfigdialog = const_cast<VirtualSonnetConfigDialog*>(dynamic_cast<const VirtualSonnetConfigDialog*>(self));
    if (vsonnetconfigdialog) {
        return vsonnetconfigdialog->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method Sonnet::ConfigDialog::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* Sonnet__ConfigDialog_SuperRedirected(const Sonnet__ConfigDialog* self, QPoint* offset) {
    if (auto* vsonnetconfigdialog = const_cast<VirtualSonnetConfigDialog*>(dynamic_cast<const VirtualSonnetConfigDialog*>(self))) {
        return vsonnetconfigdialog->Sonnet::ConfigDialog::redirected(offset);
    } else
        qFatal("Error: Protected virtual method Sonnet::ConfigDialog::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigDialog_OnRedirected(Sonnet__ConfigDialog* self, intptr_t slot) {
    if (auto* vsonnetconfigdialog = const_cast<VirtualSonnetConfigDialog*>(dynamic_cast<const VirtualSonnetConfigDialog*>(self)))
        vsonnetconfigdialog->sonnet__configdialog_redirected_callback = reinterpret_cast<VirtualSonnetConfigDialog::Sonnet__ConfigDialog_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* Sonnet__ConfigDialog_SharedPainter(const Sonnet__ConfigDialog* self) {
    auto* vsonnetconfigdialog = const_cast<VirtualSonnetConfigDialog*>(dynamic_cast<const VirtualSonnetConfigDialog*>(self));
    if (vsonnetconfigdialog) {
        return vsonnetconfigdialog->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method Sonnet::ConfigDialog::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* Sonnet__ConfigDialog_SuperSharedPainter(const Sonnet__ConfigDialog* self) {
    if (auto* vsonnetconfigdialog = const_cast<VirtualSonnetConfigDialog*>(dynamic_cast<const VirtualSonnetConfigDialog*>(self))) {
        return vsonnetconfigdialog->Sonnet::ConfigDialog::sharedPainter();
    } else
        qFatal("Error: Protected virtual method Sonnet::ConfigDialog::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigDialog_OnSharedPainter(Sonnet__ConfigDialog* self, intptr_t slot) {
    if (auto* vsonnetconfigdialog = const_cast<VirtualSonnetConfigDialog*>(dynamic_cast<const VirtualSonnetConfigDialog*>(self)))
        vsonnetconfigdialog->sonnet__configdialog_sharedpainter_callback = reinterpret_cast<VirtualSonnetConfigDialog::Sonnet__ConfigDialog_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__ConfigDialog_InputMethodEvent(Sonnet__ConfigDialog* self, QInputMethodEvent* param1) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog) {
        vsonnetconfigdialog->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method Sonnet::ConfigDialog::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__ConfigDialog_SuperInputMethodEvent(Sonnet__ConfigDialog* self, QInputMethodEvent* param1) {
    if (auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self)) {
        vsonnetconfigdialog->Sonnet::ConfigDialog::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method Sonnet::ConfigDialog::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigDialog_OnInputMethodEvent(Sonnet__ConfigDialog* self, intptr_t slot) {
    if (auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self))
        vsonnetconfigdialog->sonnet__configdialog_inputmethodevent_callback = reinterpret_cast<VirtualSonnetConfigDialog::Sonnet__ConfigDialog_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* Sonnet__ConfigDialog_InputMethodQuery(const Sonnet__ConfigDialog* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* Sonnet__ConfigDialog_SuperInputMethodQuery(const Sonnet__ConfigDialog* self, int param1) {
    return new QVariant(self->Sonnet::ConfigDialog::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigDialog_OnInputMethodQuery(Sonnet__ConfigDialog* self, intptr_t slot) {
    if (auto* vsonnetconfigdialog = const_cast<VirtualSonnetConfigDialog*>(dynamic_cast<const VirtualSonnetConfigDialog*>(self)))
        vsonnetconfigdialog->sonnet__configdialog_inputmethodquery_callback = reinterpret_cast<VirtualSonnetConfigDialog::Sonnet__ConfigDialog_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool Sonnet__ConfigDialog_FocusNextPrevChild(Sonnet__ConfigDialog* self, bool next) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog) {
        return vsonnetconfigdialog->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method Sonnet::ConfigDialog::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool Sonnet__ConfigDialog_SuperFocusNextPrevChild(Sonnet__ConfigDialog* self, bool next) {
    if (auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self)) {
        return vsonnetconfigdialog->Sonnet::ConfigDialog::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method Sonnet::ConfigDialog::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigDialog_OnFocusNextPrevChild(Sonnet__ConfigDialog* self, intptr_t slot) {
    if (auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self))
        vsonnetconfigdialog->sonnet__configdialog_focusnextprevchild_callback = reinterpret_cast<VirtualSonnetConfigDialog::Sonnet__ConfigDialog_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__ConfigDialog_TimerEvent(Sonnet__ConfigDialog* self, QTimerEvent* event) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog) {
        vsonnetconfigdialog->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method Sonnet::ConfigDialog::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__ConfigDialog_SuperTimerEvent(Sonnet__ConfigDialog* self, QTimerEvent* event) {
    if (auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self)) {
        vsonnetconfigdialog->Sonnet::ConfigDialog::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method Sonnet::ConfigDialog::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigDialog_OnTimerEvent(Sonnet__ConfigDialog* self, intptr_t slot) {
    if (auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self))
        vsonnetconfigdialog->sonnet__configdialog_timerevent_callback = reinterpret_cast<VirtualSonnetConfigDialog::Sonnet__ConfigDialog_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__ConfigDialog_ChildEvent(Sonnet__ConfigDialog* self, QChildEvent* event) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog) {
        vsonnetconfigdialog->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method Sonnet::ConfigDialog::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__ConfigDialog_SuperChildEvent(Sonnet__ConfigDialog* self, QChildEvent* event) {
    if (auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self)) {
        vsonnetconfigdialog->Sonnet::ConfigDialog::childEvent(event);
    } else
        qFatal("Error: Protected virtual method Sonnet::ConfigDialog::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigDialog_OnChildEvent(Sonnet__ConfigDialog* self, intptr_t slot) {
    if (auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self))
        vsonnetconfigdialog->sonnet__configdialog_childevent_callback = reinterpret_cast<VirtualSonnetConfigDialog::Sonnet__ConfigDialog_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__ConfigDialog_CustomEvent(Sonnet__ConfigDialog* self, QEvent* event) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog) {
        vsonnetconfigdialog->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method Sonnet::ConfigDialog::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__ConfigDialog_SuperCustomEvent(Sonnet__ConfigDialog* self, QEvent* event) {
    if (auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self)) {
        vsonnetconfigdialog->Sonnet::ConfigDialog::customEvent(event);
    } else
        qFatal("Error: Protected virtual method Sonnet::ConfigDialog::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigDialog_OnCustomEvent(Sonnet__ConfigDialog* self, intptr_t slot) {
    if (auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self))
        vsonnetconfigdialog->sonnet__configdialog_customevent_callback = reinterpret_cast<VirtualSonnetConfigDialog::Sonnet__ConfigDialog_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__ConfigDialog_ConnectNotify(Sonnet__ConfigDialog* self, const QMetaMethod* signal) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog) {
        vsonnetconfigdialog->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method Sonnet::ConfigDialog::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__ConfigDialog_SuperConnectNotify(Sonnet__ConfigDialog* self, const QMetaMethod* signal) {
    if (auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self)) {
        vsonnetconfigdialog->Sonnet::ConfigDialog::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method Sonnet::ConfigDialog::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigDialog_OnConnectNotify(Sonnet__ConfigDialog* self, intptr_t slot) {
    if (auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self))
        vsonnetconfigdialog->sonnet__configdialog_connectnotify_callback = reinterpret_cast<VirtualSonnetConfigDialog::Sonnet__ConfigDialog_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__ConfigDialog_DisconnectNotify(Sonnet__ConfigDialog* self, const QMetaMethod* signal) {
    auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self);
    if (vsonnetconfigdialog) {
        vsonnetconfigdialog->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method Sonnet::ConfigDialog::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__ConfigDialog_SuperDisconnectNotify(Sonnet__ConfigDialog* self, const QMetaMethod* signal) {
    if (auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self)) {
        vsonnetconfigdialog->Sonnet::ConfigDialog::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method Sonnet::ConfigDialog::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigDialog_OnDisconnectNotify(Sonnet__ConfigDialog* self, intptr_t slot) {
    if (auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self))
        vsonnetconfigdialog->sonnet__configdialog_disconnectnotify_callback = reinterpret_cast<VirtualSonnetConfigDialog::Sonnet__ConfigDialog_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void Sonnet__ConfigDialog_AdjustPosition(Sonnet__ConfigDialog* self, QWidget* param1) {
    if (auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self)) {
        vsonnetconfigdialog->VirtualSonnetConfigDialog::adjustPosition(param1);
    } else
        qFatal("Error: Protected method Sonnet::ConfigDialog::adjustPosition called without a directly constructed type");
}

// Derived class protected handler implementation
void Sonnet__ConfigDialog_UpdateMicroFocus(Sonnet__ConfigDialog* self) {
    if (auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self)) {
        vsonnetconfigdialog->VirtualSonnetConfigDialog::updateMicroFocus();
    } else
        qFatal("Error: Protected method Sonnet::ConfigDialog::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void Sonnet__ConfigDialog_Create(Sonnet__ConfigDialog* self) {
    if (auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self)) {
        vsonnetconfigdialog->VirtualSonnetConfigDialog::create();
    } else
        qFatal("Error: Protected method Sonnet::ConfigDialog::create called without a directly constructed type");
}

// Derived class protected handler implementation
void Sonnet__ConfigDialog_Destroy(Sonnet__ConfigDialog* self) {
    if (auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self)) {
        vsonnetconfigdialog->VirtualSonnetConfigDialog::destroy();
    } else
        qFatal("Error: Protected method Sonnet::ConfigDialog::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool Sonnet__ConfigDialog_FocusNextChild(Sonnet__ConfigDialog* self) {
    if (auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self)) {
        return vsonnetconfigdialog->VirtualSonnetConfigDialog::focusNextChild();
    } else
        qFatal("Error: Protected method Sonnet::ConfigDialog::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool Sonnet__ConfigDialog_FocusPreviousChild(Sonnet__ConfigDialog* self) {
    if (auto* vsonnetconfigdialog = dynamic_cast<VirtualSonnetConfigDialog*>(self)) {
        return vsonnetconfigdialog->VirtualSonnetConfigDialog::focusPreviousChild();
    } else
        qFatal("Error: Protected method Sonnet::ConfigDialog::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* Sonnet__ConfigDialog_Sender(const Sonnet__ConfigDialog* self) {
    if (auto* vsonnetconfigdialog = const_cast<VirtualSonnetConfigDialog*>(dynamic_cast<const VirtualSonnetConfigDialog*>(self))) {
        return vsonnetconfigdialog->VirtualSonnetConfigDialog::sender();
    } else
        qFatal("Error: Protected method Sonnet::ConfigDialog::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int Sonnet__ConfigDialog_SenderSignalIndex(const Sonnet__ConfigDialog* self) {
    if (auto* vsonnetconfigdialog = const_cast<VirtualSonnetConfigDialog*>(dynamic_cast<const VirtualSonnetConfigDialog*>(self))) {
        return vsonnetconfigdialog->VirtualSonnetConfigDialog::senderSignalIndex();
    } else
        qFatal("Error: Protected method Sonnet::ConfigDialog::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int Sonnet__ConfigDialog_Receivers(const Sonnet__ConfigDialog* self, const char* signal) {
    if (auto* vsonnetconfigdialog = const_cast<VirtualSonnetConfigDialog*>(dynamic_cast<const VirtualSonnetConfigDialog*>(self))) {
        return vsonnetconfigdialog->VirtualSonnetConfigDialog::receivers(signal);
    } else
        qFatal("Error: Protected method Sonnet::ConfigDialog::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool Sonnet__ConfigDialog_IsSignalConnected(const Sonnet__ConfigDialog* self, const QMetaMethod* signal) {
    if (auto* vsonnetconfigdialog = const_cast<VirtualSonnetConfigDialog*>(dynamic_cast<const VirtualSonnetConfigDialog*>(self))) {
        return vsonnetconfigdialog->VirtualSonnetConfigDialog::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method Sonnet::ConfigDialog::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double Sonnet__ConfigDialog_GetDecodedMetricF(const Sonnet__ConfigDialog* self, int metricA, int metricB) {
    if (auto* vsonnetconfigdialog = const_cast<VirtualSonnetConfigDialog*>(dynamic_cast<const VirtualSonnetConfigDialog*>(self))) {
        return vsonnetconfigdialog->VirtualSonnetConfigDialog::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method Sonnet::ConfigDialog::getDecodedMetricF called without a directly constructed type");
}

void Sonnet__ConfigDialog_Delete(Sonnet__ConfigDialog* self) {
    delete self;
}
