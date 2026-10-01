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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KFontChooserDialog_Tr(const char* s) {
    auto _ret = KFontChooserDialog::tr(s);
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
    KFontChooserDialog::connect(self,
                                static_cast<void (KFontChooserDialog::*)(const QFont&)>(&KFontChooserDialog::fontSelected),
                                [self, slotFunc](const QFont& font) {
                                    const QFont& font_ret = font;
                                    // Cast returned reference into pointer
                                    QFont* sigval1 = const_cast<QFont*>(&font_ret);
                                    slotFunc(self, sigval1);
                                });
}

libqt_string KFontChooserDialog_Tr2(const char* s, const char* c) {
    auto _ret = KFontChooserDialog::tr(s, c);
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
    auto _ret = KFontChooserDialog::tr(s, c, static_cast<int>(n));
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
QMetaObject* KFontChooserDialog_SuperMetaObject(const KFontChooserDialog* self) {
    return (QMetaObject*)self->KFontChooserDialog::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KFontChooserDialog_OnMetaObject(KFontChooserDialog* self, intptr_t slot) {
    if (auto* vkfontchooserdialog = const_cast<VirtualKFontChooserDialog*>(dynamic_cast<const VirtualKFontChooserDialog*>(self)))
        vkfontchooserdialog->kfontchooserdialog_metaobject_callback = reinterpret_cast<VirtualKFontChooserDialog::KFontChooserDialog_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KFontChooserDialog_SuperMetacast(KFontChooserDialog* self, const char* param1) {
    return self->KFontChooserDialog::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KFontChooserDialog_OnMetacast(KFontChooserDialog* self, intptr_t slot) {
    if (auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self))
        vkfontchooserdialog->kfontchooserdialog_metacast_callback = reinterpret_cast<VirtualKFontChooserDialog::KFontChooserDialog_Metacast_Callback>(slot);
}

// Base class handler implementation
int KFontChooserDialog_SuperMetacall(KFontChooserDialog* self, int param1, int param2, void** param3) {
    return self->KFontChooserDialog::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KFontChooserDialog_OnMetacall(KFontChooserDialog* self, intptr_t slot) {
    if (auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self))
        vkfontchooserdialog->kfontchooserdialog_metacall_callback = reinterpret_cast<VirtualKFontChooserDialog::KFontChooserDialog_Metacall_Callback>(slot);
}

// Derived class handler implementation
void KFontChooserDialog_SetVisible(KFontChooserDialog* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void KFontChooserDialog_SuperSetVisible(KFontChooserDialog* self, bool visible) {
    self->KFontChooserDialog::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void KFontChooserDialog_OnSetVisible(KFontChooserDialog* self, intptr_t slot) {
    if (auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self))
        vkfontchooserdialog->kfontchooserdialog_setvisible_callback = reinterpret_cast<VirtualKFontChooserDialog::KFontChooserDialog_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* KFontChooserDialog_SizeHint(const KFontChooserDialog* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* KFontChooserDialog_SuperSizeHint(const KFontChooserDialog* self) {
    return new QSize(self->KFontChooserDialog::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void KFontChooserDialog_OnSizeHint(KFontChooserDialog* self, intptr_t slot) {
    if (auto* vkfontchooserdialog = const_cast<VirtualKFontChooserDialog*>(dynamic_cast<const VirtualKFontChooserDialog*>(self)))
        vkfontchooserdialog->kfontchooserdialog_sizehint_callback = reinterpret_cast<VirtualKFontChooserDialog::KFontChooserDialog_SizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* KFontChooserDialog_MinimumSizeHint(const KFontChooserDialog* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* KFontChooserDialog_SuperMinimumSizeHint(const KFontChooserDialog* self) {
    return new QSize(self->KFontChooserDialog::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void KFontChooserDialog_OnMinimumSizeHint(KFontChooserDialog* self, intptr_t slot) {
    if (auto* vkfontchooserdialog = const_cast<VirtualKFontChooserDialog*>(dynamic_cast<const VirtualKFontChooserDialog*>(self)))
        vkfontchooserdialog->kfontchooserdialog_minimumsizehint_callback = reinterpret_cast<VirtualKFontChooserDialog::KFontChooserDialog_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
void KFontChooserDialog_Open(KFontChooserDialog* self) {
    self->open();
}

// Base class handler implementation
void KFontChooserDialog_SuperOpen(KFontChooserDialog* self) {
    self->KFontChooserDialog::open();
}

// Auxiliary method to allow providing re-implementation
void KFontChooserDialog_OnOpen(KFontChooserDialog* self, intptr_t slot) {
    if (auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self))
        vkfontchooserdialog->kfontchooserdialog_open_callback = reinterpret_cast<VirtualKFontChooserDialog::KFontChooserDialog_Open_Callback>(slot);
}

// Derived class handler implementation
int KFontChooserDialog_Exec(KFontChooserDialog* self) {
    return self->exec();
}

// Base class handler implementation
int KFontChooserDialog_SuperExec(KFontChooserDialog* self) {
    return self->KFontChooserDialog::exec();
}

// Auxiliary method to allow providing re-implementation
void KFontChooserDialog_OnExec(KFontChooserDialog* self, intptr_t slot) {
    if (auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self))
        vkfontchooserdialog->kfontchooserdialog_exec_callback = reinterpret_cast<VirtualKFontChooserDialog::KFontChooserDialog_Exec_Callback>(slot);
}

// Derived class handler implementation
void KFontChooserDialog_Done(KFontChooserDialog* self, int param1) {
    self->done(static_cast<int>(param1));
}

// Base class handler implementation
void KFontChooserDialog_SuperDone(KFontChooserDialog* self, int param1) {
    self->KFontChooserDialog::done(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void KFontChooserDialog_OnDone(KFontChooserDialog* self, intptr_t slot) {
    if (auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self))
        vkfontchooserdialog->kfontchooserdialog_done_callback = reinterpret_cast<VirtualKFontChooserDialog::KFontChooserDialog_Done_Callback>(slot);
}

// Derived class handler implementation
void KFontChooserDialog_Accept(KFontChooserDialog* self) {
    self->accept();
}

// Base class handler implementation
void KFontChooserDialog_SuperAccept(KFontChooserDialog* self) {
    self->KFontChooserDialog::accept();
}

// Auxiliary method to allow providing re-implementation
void KFontChooserDialog_OnAccept(KFontChooserDialog* self, intptr_t slot) {
    if (auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self))
        vkfontchooserdialog->kfontchooserdialog_accept_callback = reinterpret_cast<VirtualKFontChooserDialog::KFontChooserDialog_Accept_Callback>(slot);
}

// Derived class handler implementation
void KFontChooserDialog_Reject(KFontChooserDialog* self) {
    self->reject();
}

// Base class handler implementation
void KFontChooserDialog_SuperReject(KFontChooserDialog* self) {
    self->KFontChooserDialog::reject();
}

// Auxiliary method to allow providing re-implementation
void KFontChooserDialog_OnReject(KFontChooserDialog* self, intptr_t slot) {
    if (auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self))
        vkfontchooserdialog->kfontchooserdialog_reject_callback = reinterpret_cast<VirtualKFontChooserDialog::KFontChooserDialog_Reject_Callback>(slot);
}

// Derived class handler implementation
void KFontChooserDialog_KeyPressEvent(KFontChooserDialog* self, QKeyEvent* param1) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog) {
        vkfontchooserdialog->keyPressEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KFontChooserDialog::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFontChooserDialog_SuperKeyPressEvent(KFontChooserDialog* self, QKeyEvent* param1) {
    if (auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self)) {
        vkfontchooserdialog->KFontChooserDialog::keyPressEvent(param1);
    } else
        qFatal("Error: Protected virtual method KFontChooserDialog::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFontChooserDialog_OnKeyPressEvent(KFontChooserDialog* self, intptr_t slot) {
    if (auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self))
        vkfontchooserdialog->kfontchooserdialog_keypressevent_callback = reinterpret_cast<VirtualKFontChooserDialog::KFontChooserDialog_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void KFontChooserDialog_CloseEvent(KFontChooserDialog* self, QCloseEvent* param1) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog) {
        vkfontchooserdialog->closeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KFontChooserDialog::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFontChooserDialog_SuperCloseEvent(KFontChooserDialog* self, QCloseEvent* param1) {
    if (auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self)) {
        vkfontchooserdialog->KFontChooserDialog::closeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KFontChooserDialog::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFontChooserDialog_OnCloseEvent(KFontChooserDialog* self, intptr_t slot) {
    if (auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self))
        vkfontchooserdialog->kfontchooserdialog_closeevent_callback = reinterpret_cast<VirtualKFontChooserDialog::KFontChooserDialog_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void KFontChooserDialog_ShowEvent(KFontChooserDialog* self, QShowEvent* param1) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog) {
        vkfontchooserdialog->showEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KFontChooserDialog::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFontChooserDialog_SuperShowEvent(KFontChooserDialog* self, QShowEvent* param1) {
    if (auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self)) {
        vkfontchooserdialog->KFontChooserDialog::showEvent(param1);
    } else
        qFatal("Error: Protected virtual method KFontChooserDialog::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFontChooserDialog_OnShowEvent(KFontChooserDialog* self, intptr_t slot) {
    if (auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self))
        vkfontchooserdialog->kfontchooserdialog_showevent_callback = reinterpret_cast<VirtualKFontChooserDialog::KFontChooserDialog_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void KFontChooserDialog_ResizeEvent(KFontChooserDialog* self, QResizeEvent* param1) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog) {
        vkfontchooserdialog->resizeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KFontChooserDialog::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFontChooserDialog_SuperResizeEvent(KFontChooserDialog* self, QResizeEvent* param1) {
    if (auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self)) {
        vkfontchooserdialog->KFontChooserDialog::resizeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KFontChooserDialog::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFontChooserDialog_OnResizeEvent(KFontChooserDialog* self, intptr_t slot) {
    if (auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self))
        vkfontchooserdialog->kfontchooserdialog_resizeevent_callback = reinterpret_cast<VirtualKFontChooserDialog::KFontChooserDialog_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void KFontChooserDialog_ContextMenuEvent(KFontChooserDialog* self, QContextMenuEvent* param1) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog) {
        vkfontchooserdialog->contextMenuEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KFontChooserDialog::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFontChooserDialog_SuperContextMenuEvent(KFontChooserDialog* self, QContextMenuEvent* param1) {
    if (auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self)) {
        vkfontchooserdialog->KFontChooserDialog::contextMenuEvent(param1);
    } else
        qFatal("Error: Protected virtual method KFontChooserDialog::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFontChooserDialog_OnContextMenuEvent(KFontChooserDialog* self, intptr_t slot) {
    if (auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self))
        vkfontchooserdialog->kfontchooserdialog_contextmenuevent_callback = reinterpret_cast<VirtualKFontChooserDialog::KFontChooserDialog_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
bool KFontChooserDialog_EventFilter(KFontChooserDialog* self, QObject* param1, QEvent* param2) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog) {
        return vkfontchooserdialog->eventFilter(param1, param2);
    } else {
        qFatal("Error: Protected virtual method KFontChooserDialog::eventFilter called without a directly constructed type");
    }
}

// Base class handler implementation
bool KFontChooserDialog_SuperEventFilter(KFontChooserDialog* self, QObject* param1, QEvent* param2) {
    if (auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self)) {
        return vkfontchooserdialog->KFontChooserDialog::eventFilter(param1, param2);
    } else
        qFatal("Error: Protected virtual method KFontChooserDialog::eventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFontChooserDialog_OnEventFilter(KFontChooserDialog* self, intptr_t slot) {
    if (auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self))
        vkfontchooserdialog->kfontchooserdialog_eventfilter_callback = reinterpret_cast<VirtualKFontChooserDialog::KFontChooserDialog_EventFilter_Callback>(slot);
}

// Derived class handler implementation
int KFontChooserDialog_DevType(const KFontChooserDialog* self) {
    return self->devType();
}

// Base class handler implementation
int KFontChooserDialog_SuperDevType(const KFontChooserDialog* self) {
    return self->KFontChooserDialog::devType();
}

// Auxiliary method to allow providing re-implementation
void KFontChooserDialog_OnDevType(KFontChooserDialog* self, intptr_t slot) {
    if (auto* vkfontchooserdialog = const_cast<VirtualKFontChooserDialog*>(dynamic_cast<const VirtualKFontChooserDialog*>(self)))
        vkfontchooserdialog->kfontchooserdialog_devtype_callback = reinterpret_cast<VirtualKFontChooserDialog::KFontChooserDialog_DevType_Callback>(slot);
}

// Derived class handler implementation
int KFontChooserDialog_HeightForWidth(const KFontChooserDialog* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int KFontChooserDialog_SuperHeightForWidth(const KFontChooserDialog* self, int param1) {
    return self->KFontChooserDialog::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void KFontChooserDialog_OnHeightForWidth(KFontChooserDialog* self, intptr_t slot) {
    if (auto* vkfontchooserdialog = const_cast<VirtualKFontChooserDialog*>(dynamic_cast<const VirtualKFontChooserDialog*>(self)))
        vkfontchooserdialog->kfontchooserdialog_heightforwidth_callback = reinterpret_cast<VirtualKFontChooserDialog::KFontChooserDialog_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool KFontChooserDialog_HasHeightForWidth(const KFontChooserDialog* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool KFontChooserDialog_SuperHasHeightForWidth(const KFontChooserDialog* self) {
    return self->KFontChooserDialog::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void KFontChooserDialog_OnHasHeightForWidth(KFontChooserDialog* self, intptr_t slot) {
    if (auto* vkfontchooserdialog = const_cast<VirtualKFontChooserDialog*>(dynamic_cast<const VirtualKFontChooserDialog*>(self)))
        vkfontchooserdialog->kfontchooserdialog_hasheightforwidth_callback = reinterpret_cast<VirtualKFontChooserDialog::KFontChooserDialog_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* KFontChooserDialog_PaintEngine(const KFontChooserDialog* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* KFontChooserDialog_SuperPaintEngine(const KFontChooserDialog* self) {
    return self->KFontChooserDialog::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void KFontChooserDialog_OnPaintEngine(KFontChooserDialog* self, intptr_t slot) {
    if (auto* vkfontchooserdialog = const_cast<VirtualKFontChooserDialog*>(dynamic_cast<const VirtualKFontChooserDialog*>(self)))
        vkfontchooserdialog->kfontchooserdialog_paintengine_callback = reinterpret_cast<VirtualKFontChooserDialog::KFontChooserDialog_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
bool KFontChooserDialog_Event(KFontChooserDialog* self, QEvent* event) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog) {
        return vkfontchooserdialog->event(event);
    } else {
        qFatal("Error: Protected virtual method KFontChooserDialog::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool KFontChooserDialog_SuperEvent(KFontChooserDialog* self, QEvent* event) {
    if (auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self)) {
        return vkfontchooserdialog->KFontChooserDialog::event(event);
    } else
        qFatal("Error: Protected virtual method KFontChooserDialog::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFontChooserDialog_OnEvent(KFontChooserDialog* self, intptr_t slot) {
    if (auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self))
        vkfontchooserdialog->kfontchooserdialog_event_callback = reinterpret_cast<VirtualKFontChooserDialog::KFontChooserDialog_Event_Callback>(slot);
}

// Derived class handler implementation
void KFontChooserDialog_MousePressEvent(KFontChooserDialog* self, QMouseEvent* event) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog) {
        vkfontchooserdialog->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFontChooserDialog::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFontChooserDialog_SuperMousePressEvent(KFontChooserDialog* self, QMouseEvent* event) {
    if (auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self)) {
        vkfontchooserdialog->KFontChooserDialog::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method KFontChooserDialog::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFontChooserDialog_OnMousePressEvent(KFontChooserDialog* self, intptr_t slot) {
    if (auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self))
        vkfontchooserdialog->kfontchooserdialog_mousepressevent_callback = reinterpret_cast<VirtualKFontChooserDialog::KFontChooserDialog_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void KFontChooserDialog_MouseReleaseEvent(KFontChooserDialog* self, QMouseEvent* event) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog) {
        vkfontchooserdialog->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFontChooserDialog::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFontChooserDialog_SuperMouseReleaseEvent(KFontChooserDialog* self, QMouseEvent* event) {
    if (auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self)) {
        vkfontchooserdialog->KFontChooserDialog::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KFontChooserDialog::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFontChooserDialog_OnMouseReleaseEvent(KFontChooserDialog* self, intptr_t slot) {
    if (auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self))
        vkfontchooserdialog->kfontchooserdialog_mousereleaseevent_callback = reinterpret_cast<VirtualKFontChooserDialog::KFontChooserDialog_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KFontChooserDialog_MouseDoubleClickEvent(KFontChooserDialog* self, QMouseEvent* event) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog) {
        vkfontchooserdialog->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFontChooserDialog::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFontChooserDialog_SuperMouseDoubleClickEvent(KFontChooserDialog* self, QMouseEvent* event) {
    if (auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self)) {
        vkfontchooserdialog->KFontChooserDialog::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method KFontChooserDialog::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFontChooserDialog_OnMouseDoubleClickEvent(KFontChooserDialog* self, intptr_t slot) {
    if (auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self))
        vkfontchooserdialog->kfontchooserdialog_mousedoubleclickevent_callback = reinterpret_cast<VirtualKFontChooserDialog::KFontChooserDialog_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void KFontChooserDialog_MouseMoveEvent(KFontChooserDialog* self, QMouseEvent* event) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog) {
        vkfontchooserdialog->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFontChooserDialog::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFontChooserDialog_SuperMouseMoveEvent(KFontChooserDialog* self, QMouseEvent* event) {
    if (auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self)) {
        vkfontchooserdialog->KFontChooserDialog::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KFontChooserDialog::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFontChooserDialog_OnMouseMoveEvent(KFontChooserDialog* self, intptr_t slot) {
    if (auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self))
        vkfontchooserdialog->kfontchooserdialog_mousemoveevent_callback = reinterpret_cast<VirtualKFontChooserDialog::KFontChooserDialog_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KFontChooserDialog_WheelEvent(KFontChooserDialog* self, QWheelEvent* event) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog) {
        vkfontchooserdialog->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFontChooserDialog::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFontChooserDialog_SuperWheelEvent(KFontChooserDialog* self, QWheelEvent* event) {
    if (auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self)) {
        vkfontchooserdialog->KFontChooserDialog::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method KFontChooserDialog::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFontChooserDialog_OnWheelEvent(KFontChooserDialog* self, intptr_t slot) {
    if (auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self))
        vkfontchooserdialog->kfontchooserdialog_wheelevent_callback = reinterpret_cast<VirtualKFontChooserDialog::KFontChooserDialog_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void KFontChooserDialog_KeyReleaseEvent(KFontChooserDialog* self, QKeyEvent* event) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog) {
        vkfontchooserdialog->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFontChooserDialog::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFontChooserDialog_SuperKeyReleaseEvent(KFontChooserDialog* self, QKeyEvent* event) {
    if (auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self)) {
        vkfontchooserdialog->KFontChooserDialog::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KFontChooserDialog::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFontChooserDialog_OnKeyReleaseEvent(KFontChooserDialog* self, intptr_t slot) {
    if (auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self))
        vkfontchooserdialog->kfontchooserdialog_keyreleaseevent_callback = reinterpret_cast<VirtualKFontChooserDialog::KFontChooserDialog_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KFontChooserDialog_FocusInEvent(KFontChooserDialog* self, QFocusEvent* event) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog) {
        vkfontchooserdialog->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFontChooserDialog::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFontChooserDialog_SuperFocusInEvent(KFontChooserDialog* self, QFocusEvent* event) {
    if (auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self)) {
        vkfontchooserdialog->KFontChooserDialog::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method KFontChooserDialog::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFontChooserDialog_OnFocusInEvent(KFontChooserDialog* self, intptr_t slot) {
    if (auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self))
        vkfontchooserdialog->kfontchooserdialog_focusinevent_callback = reinterpret_cast<VirtualKFontChooserDialog::KFontChooserDialog_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void KFontChooserDialog_FocusOutEvent(KFontChooserDialog* self, QFocusEvent* event) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog) {
        vkfontchooserdialog->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFontChooserDialog::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFontChooserDialog_SuperFocusOutEvent(KFontChooserDialog* self, QFocusEvent* event) {
    if (auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self)) {
        vkfontchooserdialog->KFontChooserDialog::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method KFontChooserDialog::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFontChooserDialog_OnFocusOutEvent(KFontChooserDialog* self, intptr_t slot) {
    if (auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self))
        vkfontchooserdialog->kfontchooserdialog_focusoutevent_callback = reinterpret_cast<VirtualKFontChooserDialog::KFontChooserDialog_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void KFontChooserDialog_EnterEvent(KFontChooserDialog* self, QEnterEvent* event) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog) {
        vkfontchooserdialog->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFontChooserDialog::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFontChooserDialog_SuperEnterEvent(KFontChooserDialog* self, QEnterEvent* event) {
    if (auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self)) {
        vkfontchooserdialog->KFontChooserDialog::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method KFontChooserDialog::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFontChooserDialog_OnEnterEvent(KFontChooserDialog* self, intptr_t slot) {
    if (auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self))
        vkfontchooserdialog->kfontchooserdialog_enterevent_callback = reinterpret_cast<VirtualKFontChooserDialog::KFontChooserDialog_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KFontChooserDialog_LeaveEvent(KFontChooserDialog* self, QEvent* event) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog) {
        vkfontchooserdialog->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFontChooserDialog::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFontChooserDialog_SuperLeaveEvent(KFontChooserDialog* self, QEvent* event) {
    if (auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self)) {
        vkfontchooserdialog->KFontChooserDialog::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KFontChooserDialog::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFontChooserDialog_OnLeaveEvent(KFontChooserDialog* self, intptr_t slot) {
    if (auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self))
        vkfontchooserdialog->kfontchooserdialog_leaveevent_callback = reinterpret_cast<VirtualKFontChooserDialog::KFontChooserDialog_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KFontChooserDialog_PaintEvent(KFontChooserDialog* self, QPaintEvent* event) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog) {
        vkfontchooserdialog->paintEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFontChooserDialog::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFontChooserDialog_SuperPaintEvent(KFontChooserDialog* self, QPaintEvent* event) {
    if (auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self)) {
        vkfontchooserdialog->KFontChooserDialog::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method KFontChooserDialog::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFontChooserDialog_OnPaintEvent(KFontChooserDialog* self, intptr_t slot) {
    if (auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self))
        vkfontchooserdialog->kfontchooserdialog_paintevent_callback = reinterpret_cast<VirtualKFontChooserDialog::KFontChooserDialog_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void KFontChooserDialog_MoveEvent(KFontChooserDialog* self, QMoveEvent* event) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog) {
        vkfontchooserdialog->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFontChooserDialog::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFontChooserDialog_SuperMoveEvent(KFontChooserDialog* self, QMoveEvent* event) {
    if (auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self)) {
        vkfontchooserdialog->KFontChooserDialog::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method KFontChooserDialog::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFontChooserDialog_OnMoveEvent(KFontChooserDialog* self, intptr_t slot) {
    if (auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self))
        vkfontchooserdialog->kfontchooserdialog_moveevent_callback = reinterpret_cast<VirtualKFontChooserDialog::KFontChooserDialog_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KFontChooserDialog_TabletEvent(KFontChooserDialog* self, QTabletEvent* event) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog) {
        vkfontchooserdialog->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFontChooserDialog::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFontChooserDialog_SuperTabletEvent(KFontChooserDialog* self, QTabletEvent* event) {
    if (auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self)) {
        vkfontchooserdialog->KFontChooserDialog::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method KFontChooserDialog::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFontChooserDialog_OnTabletEvent(KFontChooserDialog* self, intptr_t slot) {
    if (auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self))
        vkfontchooserdialog->kfontchooserdialog_tabletevent_callback = reinterpret_cast<VirtualKFontChooserDialog::KFontChooserDialog_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void KFontChooserDialog_ActionEvent(KFontChooserDialog* self, QActionEvent* event) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog) {
        vkfontchooserdialog->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFontChooserDialog::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFontChooserDialog_SuperActionEvent(KFontChooserDialog* self, QActionEvent* event) {
    if (auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self)) {
        vkfontchooserdialog->KFontChooserDialog::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method KFontChooserDialog::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFontChooserDialog_OnActionEvent(KFontChooserDialog* self, intptr_t slot) {
    if (auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self))
        vkfontchooserdialog->kfontchooserdialog_actionevent_callback = reinterpret_cast<VirtualKFontChooserDialog::KFontChooserDialog_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void KFontChooserDialog_DragEnterEvent(KFontChooserDialog* self, QDragEnterEvent* event) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog) {
        vkfontchooserdialog->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFontChooserDialog::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFontChooserDialog_SuperDragEnterEvent(KFontChooserDialog* self, QDragEnterEvent* event) {
    if (auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self)) {
        vkfontchooserdialog->KFontChooserDialog::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method KFontChooserDialog::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFontChooserDialog_OnDragEnterEvent(KFontChooserDialog* self, intptr_t slot) {
    if (auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self))
        vkfontchooserdialog->kfontchooserdialog_dragenterevent_callback = reinterpret_cast<VirtualKFontChooserDialog::KFontChooserDialog_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KFontChooserDialog_DragMoveEvent(KFontChooserDialog* self, QDragMoveEvent* event) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog) {
        vkfontchooserdialog->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFontChooserDialog::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFontChooserDialog_SuperDragMoveEvent(KFontChooserDialog* self, QDragMoveEvent* event) {
    if (auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self)) {
        vkfontchooserdialog->KFontChooserDialog::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KFontChooserDialog::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFontChooserDialog_OnDragMoveEvent(KFontChooserDialog* self, intptr_t slot) {
    if (auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self))
        vkfontchooserdialog->kfontchooserdialog_dragmoveevent_callback = reinterpret_cast<VirtualKFontChooserDialog::KFontChooserDialog_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KFontChooserDialog_DragLeaveEvent(KFontChooserDialog* self, QDragLeaveEvent* event) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog) {
        vkfontchooserdialog->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFontChooserDialog::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFontChooserDialog_SuperDragLeaveEvent(KFontChooserDialog* self, QDragLeaveEvent* event) {
    if (auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self)) {
        vkfontchooserdialog->KFontChooserDialog::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KFontChooserDialog::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFontChooserDialog_OnDragLeaveEvent(KFontChooserDialog* self, intptr_t slot) {
    if (auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self))
        vkfontchooserdialog->kfontchooserdialog_dragleaveevent_callback = reinterpret_cast<VirtualKFontChooserDialog::KFontChooserDialog_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KFontChooserDialog_DropEvent(KFontChooserDialog* self, QDropEvent* event) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog) {
        vkfontchooserdialog->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFontChooserDialog::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFontChooserDialog_SuperDropEvent(KFontChooserDialog* self, QDropEvent* event) {
    if (auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self)) {
        vkfontchooserdialog->KFontChooserDialog::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method KFontChooserDialog::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFontChooserDialog_OnDropEvent(KFontChooserDialog* self, intptr_t slot) {
    if (auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self))
        vkfontchooserdialog->kfontchooserdialog_dropevent_callback = reinterpret_cast<VirtualKFontChooserDialog::KFontChooserDialog_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void KFontChooserDialog_HideEvent(KFontChooserDialog* self, QHideEvent* event) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog) {
        vkfontchooserdialog->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFontChooserDialog::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFontChooserDialog_SuperHideEvent(KFontChooserDialog* self, QHideEvent* event) {
    if (auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self)) {
        vkfontchooserdialog->KFontChooserDialog::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method KFontChooserDialog::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFontChooserDialog_OnHideEvent(KFontChooserDialog* self, intptr_t slot) {
    if (auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self))
        vkfontchooserdialog->kfontchooserdialog_hideevent_callback = reinterpret_cast<VirtualKFontChooserDialog::KFontChooserDialog_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool KFontChooserDialog_NativeEvent(KFontChooserDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog) {
        return vkfontchooserdialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method KFontChooserDialog::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool KFontChooserDialog_SuperNativeEvent(KFontChooserDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self)) {
        return vkfontchooserdialog->KFontChooserDialog::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method KFontChooserDialog::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFontChooserDialog_OnNativeEvent(KFontChooserDialog* self, intptr_t slot) {
    if (auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self))
        vkfontchooserdialog->kfontchooserdialog_nativeevent_callback = reinterpret_cast<VirtualKFontChooserDialog::KFontChooserDialog_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
void KFontChooserDialog_ChangeEvent(KFontChooserDialog* self, QEvent* param1) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog) {
        vkfontchooserdialog->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KFontChooserDialog::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFontChooserDialog_SuperChangeEvent(KFontChooserDialog* self, QEvent* param1) {
    if (auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self)) {
        vkfontchooserdialog->KFontChooserDialog::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KFontChooserDialog::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFontChooserDialog_OnChangeEvent(KFontChooserDialog* self, intptr_t slot) {
    if (auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self))
        vkfontchooserdialog->kfontchooserdialog_changeevent_callback = reinterpret_cast<VirtualKFontChooserDialog::KFontChooserDialog_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
int KFontChooserDialog_Metric(const KFontChooserDialog* self, int param1) {
    auto* vkfontchooserdialog = const_cast<VirtualKFontChooserDialog*>(dynamic_cast<const VirtualKFontChooserDialog*>(self));
    if (vkfontchooserdialog) {
        return vkfontchooserdialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method KFontChooserDialog::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int KFontChooserDialog_SuperMetric(const KFontChooserDialog* self, int param1) {
    if (auto* vkfontchooserdialog = const_cast<VirtualKFontChooserDialog*>(dynamic_cast<const VirtualKFontChooserDialog*>(self))) {
        return vkfontchooserdialog->KFontChooserDialog::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method KFontChooserDialog::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFontChooserDialog_OnMetric(KFontChooserDialog* self, intptr_t slot) {
    if (auto* vkfontchooserdialog = const_cast<VirtualKFontChooserDialog*>(dynamic_cast<const VirtualKFontChooserDialog*>(self)))
        vkfontchooserdialog->kfontchooserdialog_metric_callback = reinterpret_cast<VirtualKFontChooserDialog::KFontChooserDialog_Metric_Callback>(slot);
}

// Derived class handler implementation
void KFontChooserDialog_InitPainter(const KFontChooserDialog* self, QPainter* painter) {
    auto* vkfontchooserdialog = const_cast<VirtualKFontChooserDialog*>(dynamic_cast<const VirtualKFontChooserDialog*>(self));
    if (vkfontchooserdialog) {
        vkfontchooserdialog->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method KFontChooserDialog::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void KFontChooserDialog_SuperInitPainter(const KFontChooserDialog* self, QPainter* painter) {
    if (auto* vkfontchooserdialog = const_cast<VirtualKFontChooserDialog*>(dynamic_cast<const VirtualKFontChooserDialog*>(self))) {
        vkfontchooserdialog->KFontChooserDialog::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method KFontChooserDialog::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFontChooserDialog_OnInitPainter(KFontChooserDialog* self, intptr_t slot) {
    if (auto* vkfontchooserdialog = const_cast<VirtualKFontChooserDialog*>(dynamic_cast<const VirtualKFontChooserDialog*>(self)))
        vkfontchooserdialog->kfontchooserdialog_initpainter_callback = reinterpret_cast<VirtualKFontChooserDialog::KFontChooserDialog_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* KFontChooserDialog_Redirected(const KFontChooserDialog* self, QPoint* offset) {
    auto* vkfontchooserdialog = const_cast<VirtualKFontChooserDialog*>(dynamic_cast<const VirtualKFontChooserDialog*>(self));
    if (vkfontchooserdialog) {
        return vkfontchooserdialog->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method KFontChooserDialog::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* KFontChooserDialog_SuperRedirected(const KFontChooserDialog* self, QPoint* offset) {
    if (auto* vkfontchooserdialog = const_cast<VirtualKFontChooserDialog*>(dynamic_cast<const VirtualKFontChooserDialog*>(self))) {
        return vkfontchooserdialog->KFontChooserDialog::redirected(offset);
    } else
        qFatal("Error: Protected virtual method KFontChooserDialog::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFontChooserDialog_OnRedirected(KFontChooserDialog* self, intptr_t slot) {
    if (auto* vkfontchooserdialog = const_cast<VirtualKFontChooserDialog*>(dynamic_cast<const VirtualKFontChooserDialog*>(self)))
        vkfontchooserdialog->kfontchooserdialog_redirected_callback = reinterpret_cast<VirtualKFontChooserDialog::KFontChooserDialog_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* KFontChooserDialog_SharedPainter(const KFontChooserDialog* self) {
    auto* vkfontchooserdialog = const_cast<VirtualKFontChooserDialog*>(dynamic_cast<const VirtualKFontChooserDialog*>(self));
    if (vkfontchooserdialog) {
        return vkfontchooserdialog->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method KFontChooserDialog::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* KFontChooserDialog_SuperSharedPainter(const KFontChooserDialog* self) {
    if (auto* vkfontchooserdialog = const_cast<VirtualKFontChooserDialog*>(dynamic_cast<const VirtualKFontChooserDialog*>(self))) {
        return vkfontchooserdialog->KFontChooserDialog::sharedPainter();
    } else
        qFatal("Error: Protected virtual method KFontChooserDialog::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFontChooserDialog_OnSharedPainter(KFontChooserDialog* self, intptr_t slot) {
    if (auto* vkfontchooserdialog = const_cast<VirtualKFontChooserDialog*>(dynamic_cast<const VirtualKFontChooserDialog*>(self)))
        vkfontchooserdialog->kfontchooserdialog_sharedpainter_callback = reinterpret_cast<VirtualKFontChooserDialog::KFontChooserDialog_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void KFontChooserDialog_InputMethodEvent(KFontChooserDialog* self, QInputMethodEvent* param1) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog) {
        vkfontchooserdialog->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KFontChooserDialog::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFontChooserDialog_SuperInputMethodEvent(KFontChooserDialog* self, QInputMethodEvent* param1) {
    if (auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self)) {
        vkfontchooserdialog->KFontChooserDialog::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method KFontChooserDialog::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFontChooserDialog_OnInputMethodEvent(KFontChooserDialog* self, intptr_t slot) {
    if (auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self))
        vkfontchooserdialog->kfontchooserdialog_inputmethodevent_callback = reinterpret_cast<VirtualKFontChooserDialog::KFontChooserDialog_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* KFontChooserDialog_InputMethodQuery(const KFontChooserDialog* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* KFontChooserDialog_SuperInputMethodQuery(const KFontChooserDialog* self, int param1) {
    return new QVariant(self->KFontChooserDialog::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void KFontChooserDialog_OnInputMethodQuery(KFontChooserDialog* self, intptr_t slot) {
    if (auto* vkfontchooserdialog = const_cast<VirtualKFontChooserDialog*>(dynamic_cast<const VirtualKFontChooserDialog*>(self)))
        vkfontchooserdialog->kfontchooserdialog_inputmethodquery_callback = reinterpret_cast<VirtualKFontChooserDialog::KFontChooserDialog_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool KFontChooserDialog_FocusNextPrevChild(KFontChooserDialog* self, bool next) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog) {
        return vkfontchooserdialog->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method KFontChooserDialog::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool KFontChooserDialog_SuperFocusNextPrevChild(KFontChooserDialog* self, bool next) {
    if (auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self)) {
        return vkfontchooserdialog->KFontChooserDialog::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method KFontChooserDialog::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFontChooserDialog_OnFocusNextPrevChild(KFontChooserDialog* self, intptr_t slot) {
    if (auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self))
        vkfontchooserdialog->kfontchooserdialog_focusnextprevchild_callback = reinterpret_cast<VirtualKFontChooserDialog::KFontChooserDialog_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
void KFontChooserDialog_TimerEvent(KFontChooserDialog* self, QTimerEvent* event) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog) {
        vkfontchooserdialog->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFontChooserDialog::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFontChooserDialog_SuperTimerEvent(KFontChooserDialog* self, QTimerEvent* event) {
    if (auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self)) {
        vkfontchooserdialog->KFontChooserDialog::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KFontChooserDialog::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFontChooserDialog_OnTimerEvent(KFontChooserDialog* self, intptr_t slot) {
    if (auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self))
        vkfontchooserdialog->kfontchooserdialog_timerevent_callback = reinterpret_cast<VirtualKFontChooserDialog::KFontChooserDialog_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KFontChooserDialog_ChildEvent(KFontChooserDialog* self, QChildEvent* event) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog) {
        vkfontchooserdialog->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFontChooserDialog::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFontChooserDialog_SuperChildEvent(KFontChooserDialog* self, QChildEvent* event) {
    if (auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self)) {
        vkfontchooserdialog->KFontChooserDialog::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KFontChooserDialog::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFontChooserDialog_OnChildEvent(KFontChooserDialog* self, intptr_t slot) {
    if (auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self))
        vkfontchooserdialog->kfontchooserdialog_childevent_callback = reinterpret_cast<VirtualKFontChooserDialog::KFontChooserDialog_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KFontChooserDialog_CustomEvent(KFontChooserDialog* self, QEvent* event) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog) {
        vkfontchooserdialog->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFontChooserDialog::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFontChooserDialog_SuperCustomEvent(KFontChooserDialog* self, QEvent* event) {
    if (auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self)) {
        vkfontchooserdialog->KFontChooserDialog::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KFontChooserDialog::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFontChooserDialog_OnCustomEvent(KFontChooserDialog* self, intptr_t slot) {
    if (auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self))
        vkfontchooserdialog->kfontchooserdialog_customevent_callback = reinterpret_cast<VirtualKFontChooserDialog::KFontChooserDialog_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KFontChooserDialog_ConnectNotify(KFontChooserDialog* self, const QMetaMethod* signal) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog) {
        vkfontchooserdialog->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KFontChooserDialog::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KFontChooserDialog_SuperConnectNotify(KFontChooserDialog* self, const QMetaMethod* signal) {
    if (auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self)) {
        vkfontchooserdialog->KFontChooserDialog::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KFontChooserDialog::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFontChooserDialog_OnConnectNotify(KFontChooserDialog* self, intptr_t slot) {
    if (auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self))
        vkfontchooserdialog->kfontchooserdialog_connectnotify_callback = reinterpret_cast<VirtualKFontChooserDialog::KFontChooserDialog_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KFontChooserDialog_DisconnectNotify(KFontChooserDialog* self, const QMetaMethod* signal) {
    auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self);
    if (vkfontchooserdialog) {
        vkfontchooserdialog->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KFontChooserDialog::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KFontChooserDialog_SuperDisconnectNotify(KFontChooserDialog* self, const QMetaMethod* signal) {
    if (auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self)) {
        vkfontchooserdialog->KFontChooserDialog::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KFontChooserDialog::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFontChooserDialog_OnDisconnectNotify(KFontChooserDialog* self, intptr_t slot) {
    if (auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self))
        vkfontchooserdialog->kfontchooserdialog_disconnectnotify_callback = reinterpret_cast<VirtualKFontChooserDialog::KFontChooserDialog_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void KFontChooserDialog_AdjustPosition(KFontChooserDialog* self, QWidget* param1) {
    if (auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self)) {
        vkfontchooserdialog->VirtualKFontChooserDialog::adjustPosition(param1);
    } else
        qFatal("Error: Protected method KFontChooserDialog::adjustPosition called without a directly constructed type");
}

// Derived class protected handler implementation
void KFontChooserDialog_UpdateMicroFocus(KFontChooserDialog* self) {
    if (auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self)) {
        vkfontchooserdialog->VirtualKFontChooserDialog::updateMicroFocus();
    } else
        qFatal("Error: Protected method KFontChooserDialog::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void KFontChooserDialog_Create(KFontChooserDialog* self) {
    if (auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self)) {
        vkfontchooserdialog->VirtualKFontChooserDialog::create();
    } else
        qFatal("Error: Protected method KFontChooserDialog::create called without a directly constructed type");
}

// Derived class protected handler implementation
void KFontChooserDialog_Destroy(KFontChooserDialog* self) {
    if (auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self)) {
        vkfontchooserdialog->VirtualKFontChooserDialog::destroy();
    } else
        qFatal("Error: Protected method KFontChooserDialog::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool KFontChooserDialog_FocusNextChild(KFontChooserDialog* self) {
    if (auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self)) {
        return vkfontchooserdialog->VirtualKFontChooserDialog::focusNextChild();
    } else
        qFatal("Error: Protected method KFontChooserDialog::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool KFontChooserDialog_FocusPreviousChild(KFontChooserDialog* self) {
    if (auto* vkfontchooserdialog = dynamic_cast<VirtualKFontChooserDialog*>(self)) {
        return vkfontchooserdialog->VirtualKFontChooserDialog::focusPreviousChild();
    } else
        qFatal("Error: Protected method KFontChooserDialog::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KFontChooserDialog_Sender(const KFontChooserDialog* self) {
    if (auto* vkfontchooserdialog = const_cast<VirtualKFontChooserDialog*>(dynamic_cast<const VirtualKFontChooserDialog*>(self))) {
        return vkfontchooserdialog->VirtualKFontChooserDialog::sender();
    } else
        qFatal("Error: Protected method KFontChooserDialog::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KFontChooserDialog_SenderSignalIndex(const KFontChooserDialog* self) {
    if (auto* vkfontchooserdialog = const_cast<VirtualKFontChooserDialog*>(dynamic_cast<const VirtualKFontChooserDialog*>(self))) {
        return vkfontchooserdialog->VirtualKFontChooserDialog::senderSignalIndex();
    } else
        qFatal("Error: Protected method KFontChooserDialog::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KFontChooserDialog_Receivers(const KFontChooserDialog* self, const char* signal) {
    if (auto* vkfontchooserdialog = const_cast<VirtualKFontChooserDialog*>(dynamic_cast<const VirtualKFontChooserDialog*>(self))) {
        return vkfontchooserdialog->VirtualKFontChooserDialog::receivers(signal);
    } else
        qFatal("Error: Protected method KFontChooserDialog::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KFontChooserDialog_IsSignalConnected(const KFontChooserDialog* self, const QMetaMethod* signal) {
    if (auto* vkfontchooserdialog = const_cast<VirtualKFontChooserDialog*>(dynamic_cast<const VirtualKFontChooserDialog*>(self))) {
        return vkfontchooserdialog->VirtualKFontChooserDialog::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KFontChooserDialog::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double KFontChooserDialog_GetDecodedMetricF(const KFontChooserDialog* self, int metricA, int metricB) {
    if (auto* vkfontchooserdialog = const_cast<VirtualKFontChooserDialog*>(dynamic_cast<const VirtualKFontChooserDialog*>(self))) {
        return vkfontchooserdialog->VirtualKFontChooserDialog::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method KFontChooserDialog::getDecodedMetricF called without a directly constructed type");
}

void KFontChooserDialog_Delete(KFontChooserDialog* self) {
    delete self;
}
