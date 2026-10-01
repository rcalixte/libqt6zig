#include <KOpenWithDialog>
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
#include <QList>
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
#include <QUrl>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <kopenwithdialog.h>
#include "libkopenwithdialog.h"
#include "libkopenwithdialog.hxx"

KOpenWithDialog* KOpenWithDialog_new(QWidget* parent) {
    return new VirtualKOpenWithDialog(parent);
}

KOpenWithDialog* KOpenWithDialog_new2(const libqt_list /* of QUrl* */ urls) {
    QList<QUrl> urls_QList;
    urls_QList.reserve(urls.len);
    QUrl** urls_arr = static_cast<QUrl**>(urls.data);
    for (size_t i = 0; i < urls.len; ++i) {
        urls_QList.push_back(*(urls_arr[i]));
    }
    return new VirtualKOpenWithDialog(urls_QList);
}

KOpenWithDialog* KOpenWithDialog_new3(const libqt_list /* of QUrl* */ urls, const libqt_string text, const libqt_string value) {
    QList<QUrl> urls_QList;
    urls_QList.reserve(urls.len);
    QUrl** urls_arr = static_cast<QUrl**>(urls.data);
    for (size_t i = 0; i < urls.len; ++i) {
        urls_QList.push_back(*(urls_arr[i]));
    }
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QString value_QString = QString::fromUtf8(value.data, value.len);
    return new VirtualKOpenWithDialog(urls_QList, text_QString, value_QString);
}

KOpenWithDialog* KOpenWithDialog_new4(const libqt_string mimeType, const libqt_string value) {
    QString mimeType_QString = QString::fromUtf8(mimeType.data, mimeType.len);
    QString value_QString = QString::fromUtf8(value.data, value.len);
    return new VirtualKOpenWithDialog(mimeType_QString, value_QString);
}

KOpenWithDialog* KOpenWithDialog_new5(const libqt_list /* of QUrl* */ urls, const libqt_string mimeType, const libqt_string text, const libqt_string value) {
    QList<QUrl> urls_QList;
    urls_QList.reserve(urls.len);
    QUrl** urls_arr = static_cast<QUrl**>(urls.data);
    for (size_t i = 0; i < urls.len; ++i) {
        urls_QList.push_back(*(urls_arr[i]));
    }
    QString mimeType_QString = QString::fromUtf8(mimeType.data, mimeType.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QString value_QString = QString::fromUtf8(value.data, value.len);
    return new VirtualKOpenWithDialog(urls_QList, mimeType_QString, text_QString, value_QString);
}

KOpenWithDialog* KOpenWithDialog_new6() {
    return new VirtualKOpenWithDialog();
}

KOpenWithDialog* KOpenWithDialog_new7(const libqt_list /* of QUrl* */ urls, QWidget* parent) {
    QList<QUrl> urls_QList;
    urls_QList.reserve(urls.len);
    QUrl** urls_arr = static_cast<QUrl**>(urls.data);
    for (size_t i = 0; i < urls.len; ++i) {
        urls_QList.push_back(*(urls_arr[i]));
    }
    return new VirtualKOpenWithDialog(urls_QList, parent);
}

KOpenWithDialog* KOpenWithDialog_new8(const libqt_list /* of QUrl* */ urls, const libqt_string text, const libqt_string value, QWidget* parent) {
    QList<QUrl> urls_QList;
    urls_QList.reserve(urls.len);
    QUrl** urls_arr = static_cast<QUrl**>(urls.data);
    for (size_t i = 0; i < urls.len; ++i) {
        urls_QList.push_back(*(urls_arr[i]));
    }
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QString value_QString = QString::fromUtf8(value.data, value.len);
    return new VirtualKOpenWithDialog(urls_QList, text_QString, value_QString, parent);
}

KOpenWithDialog* KOpenWithDialog_new9(const libqt_string mimeType, const libqt_string value, QWidget* parent) {
    QString mimeType_QString = QString::fromUtf8(mimeType.data, mimeType.len);
    QString value_QString = QString::fromUtf8(value.data, value.len);
    return new VirtualKOpenWithDialog(mimeType_QString, value_QString, parent);
}

KOpenWithDialog* KOpenWithDialog_new10(const libqt_list /* of QUrl* */ urls, const libqt_string mimeType, const libqt_string text, const libqt_string value, QWidget* parent) {
    QList<QUrl> urls_QList;
    urls_QList.reserve(urls.len);
    QUrl** urls_arr = static_cast<QUrl**>(urls.data);
    for (size_t i = 0; i < urls.len; ++i) {
        urls_QList.push_back(*(urls_arr[i]));
    }
    QString mimeType_QString = QString::fromUtf8(mimeType.data, mimeType.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QString value_QString = QString::fromUtf8(value.data, value.len);
    return new VirtualKOpenWithDialog(urls_QList, mimeType_QString, text_QString, value_QString, parent);
}

QMetaObject* KOpenWithDialog_MetaObject(const KOpenWithDialog* self) {
    return (QMetaObject*)self->metaObject();
}

void* KOpenWithDialog_Metacast(KOpenWithDialog* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KOpenWithDialog_Metacall(KOpenWithDialog* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KOpenWithDialog_Tr(const char* s) {
    auto _ret = KOpenWithDialog::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KOpenWithDialog_Text(const KOpenWithDialog* self) {
    auto _ret = self->text();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KOpenWithDialog_HideNoCloseOnExit(KOpenWithDialog* self) {
    self->hideNoCloseOnExit();
}

void KOpenWithDialog_HideRunInTerminal(KOpenWithDialog* self) {
    self->hideRunInTerminal();
}

void KOpenWithDialog_SetSaveNewApplications(KOpenWithDialog* self, bool b) {
    self->setSaveNewApplications(b);
}

void KOpenWithDialog_SlotSelected(KOpenWithDialog* self, const libqt_string _name, const libqt_string _exec) {
    QString _name_QString = QString::fromUtf8(_name.data, _name.len);
    QString _exec_QString = QString::fromUtf8(_exec.data, _exec.len);
    self->slotSelected(_name_QString, _exec_QString);
}

void KOpenWithDialog_SlotHighlighted(KOpenWithDialog* self, const libqt_string _name, const libqt_string _exec) {
    QString _name_QString = QString::fromUtf8(_name.data, _name.len);
    QString _exec_QString = QString::fromUtf8(_exec.data, _exec.len);
    self->slotHighlighted(_name_QString, _exec_QString);
}

void KOpenWithDialog_SlotTextChanged(KOpenWithDialog* self) {
    self->slotTextChanged();
}

void KOpenWithDialog_SlotTerminalToggled(KOpenWithDialog* self, bool param1) {
    self->slotTerminalToggled(param1);
}

void KOpenWithDialog_Accept(KOpenWithDialog* self) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog) {
        vkopenwithdialog->accept();
    }
}

libqt_string KOpenWithDialog_Tr2(const char* s, const char* c) {
    auto _ret = KOpenWithDialog::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KOpenWithDialog_Tr3(const char* s, const char* c, int n) {
    auto _ret = KOpenWithDialog::tr(s, c, static_cast<int>(n));
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
QMetaObject* KOpenWithDialog_SuperMetaObject(const KOpenWithDialog* self) {
    return (QMetaObject*)self->KOpenWithDialog::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KOpenWithDialog_OnMetaObject(KOpenWithDialog* self, intptr_t slot) {
    if (auto* vkopenwithdialog = const_cast<VirtualKOpenWithDialog*>(dynamic_cast<const VirtualKOpenWithDialog*>(self)))
        vkopenwithdialog->kopenwithdialog_metaobject_callback = reinterpret_cast<VirtualKOpenWithDialog::KOpenWithDialog_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KOpenWithDialog_SuperMetacast(KOpenWithDialog* self, const char* param1) {
    return self->KOpenWithDialog::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KOpenWithDialog_OnMetacast(KOpenWithDialog* self, intptr_t slot) {
    if (auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self))
        vkopenwithdialog->kopenwithdialog_metacast_callback = reinterpret_cast<VirtualKOpenWithDialog::KOpenWithDialog_Metacast_Callback>(slot);
}

// Base class handler implementation
int KOpenWithDialog_SuperMetacall(KOpenWithDialog* self, int param1, int param2, void** param3) {
    return self->KOpenWithDialog::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KOpenWithDialog_OnMetacall(KOpenWithDialog* self, intptr_t slot) {
    if (auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self))
        vkopenwithdialog->kopenwithdialog_metacall_callback = reinterpret_cast<VirtualKOpenWithDialog::KOpenWithDialog_Metacall_Callback>(slot);
}

// Base class handler implementation
void KOpenWithDialog_SuperAccept(KOpenWithDialog* self) {
    if (auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self)) {
        vkopenwithdialog->KOpenWithDialog::accept();
    } else
        qFatal("Error: Protected virtual method KOpenWithDialog::accept called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KOpenWithDialog_OnAccept(KOpenWithDialog* self, intptr_t slot) {
    if (auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self))
        vkopenwithdialog->kopenwithdialog_accept_callback = reinterpret_cast<VirtualKOpenWithDialog::KOpenWithDialog_Accept_Callback>(slot);
}

// Derived class handler implementation
void KOpenWithDialog_SetVisible(KOpenWithDialog* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void KOpenWithDialog_SuperSetVisible(KOpenWithDialog* self, bool visible) {
    self->KOpenWithDialog::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void KOpenWithDialog_OnSetVisible(KOpenWithDialog* self, intptr_t slot) {
    if (auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self))
        vkopenwithdialog->kopenwithdialog_setvisible_callback = reinterpret_cast<VirtualKOpenWithDialog::KOpenWithDialog_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* KOpenWithDialog_SizeHint(const KOpenWithDialog* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* KOpenWithDialog_SuperSizeHint(const KOpenWithDialog* self) {
    return new QSize(self->KOpenWithDialog::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void KOpenWithDialog_OnSizeHint(KOpenWithDialog* self, intptr_t slot) {
    if (auto* vkopenwithdialog = const_cast<VirtualKOpenWithDialog*>(dynamic_cast<const VirtualKOpenWithDialog*>(self)))
        vkopenwithdialog->kopenwithdialog_sizehint_callback = reinterpret_cast<VirtualKOpenWithDialog::KOpenWithDialog_SizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* KOpenWithDialog_MinimumSizeHint(const KOpenWithDialog* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* KOpenWithDialog_SuperMinimumSizeHint(const KOpenWithDialog* self) {
    return new QSize(self->KOpenWithDialog::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void KOpenWithDialog_OnMinimumSizeHint(KOpenWithDialog* self, intptr_t slot) {
    if (auto* vkopenwithdialog = const_cast<VirtualKOpenWithDialog*>(dynamic_cast<const VirtualKOpenWithDialog*>(self)))
        vkopenwithdialog->kopenwithdialog_minimumsizehint_callback = reinterpret_cast<VirtualKOpenWithDialog::KOpenWithDialog_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
void KOpenWithDialog_Open(KOpenWithDialog* self) {
    self->open();
}

// Base class handler implementation
void KOpenWithDialog_SuperOpen(KOpenWithDialog* self) {
    self->KOpenWithDialog::open();
}

// Auxiliary method to allow providing re-implementation
void KOpenWithDialog_OnOpen(KOpenWithDialog* self, intptr_t slot) {
    if (auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self))
        vkopenwithdialog->kopenwithdialog_open_callback = reinterpret_cast<VirtualKOpenWithDialog::KOpenWithDialog_Open_Callback>(slot);
}

// Derived class handler implementation
int KOpenWithDialog_Exec(KOpenWithDialog* self) {
    return self->exec();
}

// Base class handler implementation
int KOpenWithDialog_SuperExec(KOpenWithDialog* self) {
    return self->KOpenWithDialog::exec();
}

// Auxiliary method to allow providing re-implementation
void KOpenWithDialog_OnExec(KOpenWithDialog* self, intptr_t slot) {
    if (auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self))
        vkopenwithdialog->kopenwithdialog_exec_callback = reinterpret_cast<VirtualKOpenWithDialog::KOpenWithDialog_Exec_Callback>(slot);
}

// Derived class handler implementation
void KOpenWithDialog_Done(KOpenWithDialog* self, int param1) {
    self->done(static_cast<int>(param1));
}

// Base class handler implementation
void KOpenWithDialog_SuperDone(KOpenWithDialog* self, int param1) {
    self->KOpenWithDialog::done(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void KOpenWithDialog_OnDone(KOpenWithDialog* self, intptr_t slot) {
    if (auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self))
        vkopenwithdialog->kopenwithdialog_done_callback = reinterpret_cast<VirtualKOpenWithDialog::KOpenWithDialog_Done_Callback>(slot);
}

// Derived class handler implementation
void KOpenWithDialog_Reject(KOpenWithDialog* self) {
    self->reject();
}

// Base class handler implementation
void KOpenWithDialog_SuperReject(KOpenWithDialog* self) {
    self->KOpenWithDialog::reject();
}

// Auxiliary method to allow providing re-implementation
void KOpenWithDialog_OnReject(KOpenWithDialog* self, intptr_t slot) {
    if (auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self))
        vkopenwithdialog->kopenwithdialog_reject_callback = reinterpret_cast<VirtualKOpenWithDialog::KOpenWithDialog_Reject_Callback>(slot);
}

// Derived class handler implementation
void KOpenWithDialog_KeyPressEvent(KOpenWithDialog* self, QKeyEvent* param1) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog) {
        vkopenwithdialog->keyPressEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KOpenWithDialog::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KOpenWithDialog_SuperKeyPressEvent(KOpenWithDialog* self, QKeyEvent* param1) {
    if (auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self)) {
        vkopenwithdialog->KOpenWithDialog::keyPressEvent(param1);
    } else
        qFatal("Error: Protected virtual method KOpenWithDialog::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KOpenWithDialog_OnKeyPressEvent(KOpenWithDialog* self, intptr_t slot) {
    if (auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self))
        vkopenwithdialog->kopenwithdialog_keypressevent_callback = reinterpret_cast<VirtualKOpenWithDialog::KOpenWithDialog_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void KOpenWithDialog_CloseEvent(KOpenWithDialog* self, QCloseEvent* param1) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog) {
        vkopenwithdialog->closeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KOpenWithDialog::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KOpenWithDialog_SuperCloseEvent(KOpenWithDialog* self, QCloseEvent* param1) {
    if (auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self)) {
        vkopenwithdialog->KOpenWithDialog::closeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KOpenWithDialog::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KOpenWithDialog_OnCloseEvent(KOpenWithDialog* self, intptr_t slot) {
    if (auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self))
        vkopenwithdialog->kopenwithdialog_closeevent_callback = reinterpret_cast<VirtualKOpenWithDialog::KOpenWithDialog_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void KOpenWithDialog_ShowEvent(KOpenWithDialog* self, QShowEvent* param1) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog) {
        vkopenwithdialog->showEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KOpenWithDialog::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KOpenWithDialog_SuperShowEvent(KOpenWithDialog* self, QShowEvent* param1) {
    if (auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self)) {
        vkopenwithdialog->KOpenWithDialog::showEvent(param1);
    } else
        qFatal("Error: Protected virtual method KOpenWithDialog::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KOpenWithDialog_OnShowEvent(KOpenWithDialog* self, intptr_t slot) {
    if (auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self))
        vkopenwithdialog->kopenwithdialog_showevent_callback = reinterpret_cast<VirtualKOpenWithDialog::KOpenWithDialog_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void KOpenWithDialog_ResizeEvent(KOpenWithDialog* self, QResizeEvent* param1) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog) {
        vkopenwithdialog->resizeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KOpenWithDialog::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KOpenWithDialog_SuperResizeEvent(KOpenWithDialog* self, QResizeEvent* param1) {
    if (auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self)) {
        vkopenwithdialog->KOpenWithDialog::resizeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KOpenWithDialog::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KOpenWithDialog_OnResizeEvent(KOpenWithDialog* self, intptr_t slot) {
    if (auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self))
        vkopenwithdialog->kopenwithdialog_resizeevent_callback = reinterpret_cast<VirtualKOpenWithDialog::KOpenWithDialog_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void KOpenWithDialog_ContextMenuEvent(KOpenWithDialog* self, QContextMenuEvent* param1) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog) {
        vkopenwithdialog->contextMenuEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KOpenWithDialog::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KOpenWithDialog_SuperContextMenuEvent(KOpenWithDialog* self, QContextMenuEvent* param1) {
    if (auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self)) {
        vkopenwithdialog->KOpenWithDialog::contextMenuEvent(param1);
    } else
        qFatal("Error: Protected virtual method KOpenWithDialog::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KOpenWithDialog_OnContextMenuEvent(KOpenWithDialog* self, intptr_t slot) {
    if (auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self))
        vkopenwithdialog->kopenwithdialog_contextmenuevent_callback = reinterpret_cast<VirtualKOpenWithDialog::KOpenWithDialog_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
int KOpenWithDialog_DevType(const KOpenWithDialog* self) {
    return self->devType();
}

// Base class handler implementation
int KOpenWithDialog_SuperDevType(const KOpenWithDialog* self) {
    return self->KOpenWithDialog::devType();
}

// Auxiliary method to allow providing re-implementation
void KOpenWithDialog_OnDevType(KOpenWithDialog* self, intptr_t slot) {
    if (auto* vkopenwithdialog = const_cast<VirtualKOpenWithDialog*>(dynamic_cast<const VirtualKOpenWithDialog*>(self)))
        vkopenwithdialog->kopenwithdialog_devtype_callback = reinterpret_cast<VirtualKOpenWithDialog::KOpenWithDialog_DevType_Callback>(slot);
}

// Derived class handler implementation
int KOpenWithDialog_HeightForWidth(const KOpenWithDialog* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int KOpenWithDialog_SuperHeightForWidth(const KOpenWithDialog* self, int param1) {
    return self->KOpenWithDialog::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void KOpenWithDialog_OnHeightForWidth(KOpenWithDialog* self, intptr_t slot) {
    if (auto* vkopenwithdialog = const_cast<VirtualKOpenWithDialog*>(dynamic_cast<const VirtualKOpenWithDialog*>(self)))
        vkopenwithdialog->kopenwithdialog_heightforwidth_callback = reinterpret_cast<VirtualKOpenWithDialog::KOpenWithDialog_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool KOpenWithDialog_HasHeightForWidth(const KOpenWithDialog* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool KOpenWithDialog_SuperHasHeightForWidth(const KOpenWithDialog* self) {
    return self->KOpenWithDialog::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void KOpenWithDialog_OnHasHeightForWidth(KOpenWithDialog* self, intptr_t slot) {
    if (auto* vkopenwithdialog = const_cast<VirtualKOpenWithDialog*>(dynamic_cast<const VirtualKOpenWithDialog*>(self)))
        vkopenwithdialog->kopenwithdialog_hasheightforwidth_callback = reinterpret_cast<VirtualKOpenWithDialog::KOpenWithDialog_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* KOpenWithDialog_PaintEngine(const KOpenWithDialog* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* KOpenWithDialog_SuperPaintEngine(const KOpenWithDialog* self) {
    return self->KOpenWithDialog::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void KOpenWithDialog_OnPaintEngine(KOpenWithDialog* self, intptr_t slot) {
    if (auto* vkopenwithdialog = const_cast<VirtualKOpenWithDialog*>(dynamic_cast<const VirtualKOpenWithDialog*>(self)))
        vkopenwithdialog->kopenwithdialog_paintengine_callback = reinterpret_cast<VirtualKOpenWithDialog::KOpenWithDialog_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
bool KOpenWithDialog_Event(KOpenWithDialog* self, QEvent* event) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog) {
        return vkopenwithdialog->event(event);
    } else {
        qFatal("Error: Protected virtual method KOpenWithDialog::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool KOpenWithDialog_SuperEvent(KOpenWithDialog* self, QEvent* event) {
    if (auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self)) {
        return vkopenwithdialog->KOpenWithDialog::event(event);
    } else
        qFatal("Error: Protected virtual method KOpenWithDialog::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KOpenWithDialog_OnEvent(KOpenWithDialog* self, intptr_t slot) {
    if (auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self))
        vkopenwithdialog->kopenwithdialog_event_callback = reinterpret_cast<VirtualKOpenWithDialog::KOpenWithDialog_Event_Callback>(slot);
}

// Derived class handler implementation
void KOpenWithDialog_MousePressEvent(KOpenWithDialog* self, QMouseEvent* event) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog) {
        vkopenwithdialog->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method KOpenWithDialog::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KOpenWithDialog_SuperMousePressEvent(KOpenWithDialog* self, QMouseEvent* event) {
    if (auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self)) {
        vkopenwithdialog->KOpenWithDialog::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method KOpenWithDialog::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KOpenWithDialog_OnMousePressEvent(KOpenWithDialog* self, intptr_t slot) {
    if (auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self))
        vkopenwithdialog->kopenwithdialog_mousepressevent_callback = reinterpret_cast<VirtualKOpenWithDialog::KOpenWithDialog_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void KOpenWithDialog_MouseReleaseEvent(KOpenWithDialog* self, QMouseEvent* event) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog) {
        vkopenwithdialog->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KOpenWithDialog::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KOpenWithDialog_SuperMouseReleaseEvent(KOpenWithDialog* self, QMouseEvent* event) {
    if (auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self)) {
        vkopenwithdialog->KOpenWithDialog::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KOpenWithDialog::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KOpenWithDialog_OnMouseReleaseEvent(KOpenWithDialog* self, intptr_t slot) {
    if (auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self))
        vkopenwithdialog->kopenwithdialog_mousereleaseevent_callback = reinterpret_cast<VirtualKOpenWithDialog::KOpenWithDialog_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KOpenWithDialog_MouseDoubleClickEvent(KOpenWithDialog* self, QMouseEvent* event) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog) {
        vkopenwithdialog->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method KOpenWithDialog::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KOpenWithDialog_SuperMouseDoubleClickEvent(KOpenWithDialog* self, QMouseEvent* event) {
    if (auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self)) {
        vkopenwithdialog->KOpenWithDialog::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method KOpenWithDialog::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KOpenWithDialog_OnMouseDoubleClickEvent(KOpenWithDialog* self, intptr_t slot) {
    if (auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self))
        vkopenwithdialog->kopenwithdialog_mousedoubleclickevent_callback = reinterpret_cast<VirtualKOpenWithDialog::KOpenWithDialog_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void KOpenWithDialog_MouseMoveEvent(KOpenWithDialog* self, QMouseEvent* event) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog) {
        vkopenwithdialog->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KOpenWithDialog::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KOpenWithDialog_SuperMouseMoveEvent(KOpenWithDialog* self, QMouseEvent* event) {
    if (auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self)) {
        vkopenwithdialog->KOpenWithDialog::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KOpenWithDialog::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KOpenWithDialog_OnMouseMoveEvent(KOpenWithDialog* self, intptr_t slot) {
    if (auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self))
        vkopenwithdialog->kopenwithdialog_mousemoveevent_callback = reinterpret_cast<VirtualKOpenWithDialog::KOpenWithDialog_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KOpenWithDialog_WheelEvent(KOpenWithDialog* self, QWheelEvent* event) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog) {
        vkopenwithdialog->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method KOpenWithDialog::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KOpenWithDialog_SuperWheelEvent(KOpenWithDialog* self, QWheelEvent* event) {
    if (auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self)) {
        vkopenwithdialog->KOpenWithDialog::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method KOpenWithDialog::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KOpenWithDialog_OnWheelEvent(KOpenWithDialog* self, intptr_t slot) {
    if (auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self))
        vkopenwithdialog->kopenwithdialog_wheelevent_callback = reinterpret_cast<VirtualKOpenWithDialog::KOpenWithDialog_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void KOpenWithDialog_KeyReleaseEvent(KOpenWithDialog* self, QKeyEvent* event) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog) {
        vkopenwithdialog->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KOpenWithDialog::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KOpenWithDialog_SuperKeyReleaseEvent(KOpenWithDialog* self, QKeyEvent* event) {
    if (auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self)) {
        vkopenwithdialog->KOpenWithDialog::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KOpenWithDialog::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KOpenWithDialog_OnKeyReleaseEvent(KOpenWithDialog* self, intptr_t slot) {
    if (auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self))
        vkopenwithdialog->kopenwithdialog_keyreleaseevent_callback = reinterpret_cast<VirtualKOpenWithDialog::KOpenWithDialog_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KOpenWithDialog_FocusInEvent(KOpenWithDialog* self, QFocusEvent* event) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog) {
        vkopenwithdialog->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method KOpenWithDialog::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KOpenWithDialog_SuperFocusInEvent(KOpenWithDialog* self, QFocusEvent* event) {
    if (auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self)) {
        vkopenwithdialog->KOpenWithDialog::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method KOpenWithDialog::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KOpenWithDialog_OnFocusInEvent(KOpenWithDialog* self, intptr_t slot) {
    if (auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self))
        vkopenwithdialog->kopenwithdialog_focusinevent_callback = reinterpret_cast<VirtualKOpenWithDialog::KOpenWithDialog_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void KOpenWithDialog_FocusOutEvent(KOpenWithDialog* self, QFocusEvent* event) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog) {
        vkopenwithdialog->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method KOpenWithDialog::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KOpenWithDialog_SuperFocusOutEvent(KOpenWithDialog* self, QFocusEvent* event) {
    if (auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self)) {
        vkopenwithdialog->KOpenWithDialog::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method KOpenWithDialog::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KOpenWithDialog_OnFocusOutEvent(KOpenWithDialog* self, intptr_t slot) {
    if (auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self))
        vkopenwithdialog->kopenwithdialog_focusoutevent_callback = reinterpret_cast<VirtualKOpenWithDialog::KOpenWithDialog_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void KOpenWithDialog_EnterEvent(KOpenWithDialog* self, QEnterEvent* event) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog) {
        vkopenwithdialog->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KOpenWithDialog::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KOpenWithDialog_SuperEnterEvent(KOpenWithDialog* self, QEnterEvent* event) {
    if (auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self)) {
        vkopenwithdialog->KOpenWithDialog::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method KOpenWithDialog::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KOpenWithDialog_OnEnterEvent(KOpenWithDialog* self, intptr_t slot) {
    if (auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self))
        vkopenwithdialog->kopenwithdialog_enterevent_callback = reinterpret_cast<VirtualKOpenWithDialog::KOpenWithDialog_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KOpenWithDialog_LeaveEvent(KOpenWithDialog* self, QEvent* event) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog) {
        vkopenwithdialog->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KOpenWithDialog::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KOpenWithDialog_SuperLeaveEvent(KOpenWithDialog* self, QEvent* event) {
    if (auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self)) {
        vkopenwithdialog->KOpenWithDialog::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KOpenWithDialog::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KOpenWithDialog_OnLeaveEvent(KOpenWithDialog* self, intptr_t slot) {
    if (auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self))
        vkopenwithdialog->kopenwithdialog_leaveevent_callback = reinterpret_cast<VirtualKOpenWithDialog::KOpenWithDialog_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KOpenWithDialog_PaintEvent(KOpenWithDialog* self, QPaintEvent* event) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog) {
        vkopenwithdialog->paintEvent(event);
    } else {
        qFatal("Error: Protected virtual method KOpenWithDialog::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KOpenWithDialog_SuperPaintEvent(KOpenWithDialog* self, QPaintEvent* event) {
    if (auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self)) {
        vkopenwithdialog->KOpenWithDialog::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method KOpenWithDialog::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KOpenWithDialog_OnPaintEvent(KOpenWithDialog* self, intptr_t slot) {
    if (auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self))
        vkopenwithdialog->kopenwithdialog_paintevent_callback = reinterpret_cast<VirtualKOpenWithDialog::KOpenWithDialog_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void KOpenWithDialog_MoveEvent(KOpenWithDialog* self, QMoveEvent* event) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog) {
        vkopenwithdialog->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KOpenWithDialog::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KOpenWithDialog_SuperMoveEvent(KOpenWithDialog* self, QMoveEvent* event) {
    if (auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self)) {
        vkopenwithdialog->KOpenWithDialog::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method KOpenWithDialog::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KOpenWithDialog_OnMoveEvent(KOpenWithDialog* self, intptr_t slot) {
    if (auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self))
        vkopenwithdialog->kopenwithdialog_moveevent_callback = reinterpret_cast<VirtualKOpenWithDialog::KOpenWithDialog_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KOpenWithDialog_TabletEvent(KOpenWithDialog* self, QTabletEvent* event) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog) {
        vkopenwithdialog->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method KOpenWithDialog::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KOpenWithDialog_SuperTabletEvent(KOpenWithDialog* self, QTabletEvent* event) {
    if (auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self)) {
        vkopenwithdialog->KOpenWithDialog::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method KOpenWithDialog::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KOpenWithDialog_OnTabletEvent(KOpenWithDialog* self, intptr_t slot) {
    if (auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self))
        vkopenwithdialog->kopenwithdialog_tabletevent_callback = reinterpret_cast<VirtualKOpenWithDialog::KOpenWithDialog_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void KOpenWithDialog_ActionEvent(KOpenWithDialog* self, QActionEvent* event) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog) {
        vkopenwithdialog->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method KOpenWithDialog::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KOpenWithDialog_SuperActionEvent(KOpenWithDialog* self, QActionEvent* event) {
    if (auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self)) {
        vkopenwithdialog->KOpenWithDialog::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method KOpenWithDialog::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KOpenWithDialog_OnActionEvent(KOpenWithDialog* self, intptr_t slot) {
    if (auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self))
        vkopenwithdialog->kopenwithdialog_actionevent_callback = reinterpret_cast<VirtualKOpenWithDialog::KOpenWithDialog_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void KOpenWithDialog_DragEnterEvent(KOpenWithDialog* self, QDragEnterEvent* event) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog) {
        vkopenwithdialog->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KOpenWithDialog::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KOpenWithDialog_SuperDragEnterEvent(KOpenWithDialog* self, QDragEnterEvent* event) {
    if (auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self)) {
        vkopenwithdialog->KOpenWithDialog::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method KOpenWithDialog::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KOpenWithDialog_OnDragEnterEvent(KOpenWithDialog* self, intptr_t slot) {
    if (auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self))
        vkopenwithdialog->kopenwithdialog_dragenterevent_callback = reinterpret_cast<VirtualKOpenWithDialog::KOpenWithDialog_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KOpenWithDialog_DragMoveEvent(KOpenWithDialog* self, QDragMoveEvent* event) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog) {
        vkopenwithdialog->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KOpenWithDialog::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KOpenWithDialog_SuperDragMoveEvent(KOpenWithDialog* self, QDragMoveEvent* event) {
    if (auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self)) {
        vkopenwithdialog->KOpenWithDialog::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KOpenWithDialog::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KOpenWithDialog_OnDragMoveEvent(KOpenWithDialog* self, intptr_t slot) {
    if (auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self))
        vkopenwithdialog->kopenwithdialog_dragmoveevent_callback = reinterpret_cast<VirtualKOpenWithDialog::KOpenWithDialog_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KOpenWithDialog_DragLeaveEvent(KOpenWithDialog* self, QDragLeaveEvent* event) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog) {
        vkopenwithdialog->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KOpenWithDialog::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KOpenWithDialog_SuperDragLeaveEvent(KOpenWithDialog* self, QDragLeaveEvent* event) {
    if (auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self)) {
        vkopenwithdialog->KOpenWithDialog::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KOpenWithDialog::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KOpenWithDialog_OnDragLeaveEvent(KOpenWithDialog* self, intptr_t slot) {
    if (auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self))
        vkopenwithdialog->kopenwithdialog_dragleaveevent_callback = reinterpret_cast<VirtualKOpenWithDialog::KOpenWithDialog_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KOpenWithDialog_DropEvent(KOpenWithDialog* self, QDropEvent* event) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog) {
        vkopenwithdialog->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method KOpenWithDialog::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KOpenWithDialog_SuperDropEvent(KOpenWithDialog* self, QDropEvent* event) {
    if (auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self)) {
        vkopenwithdialog->KOpenWithDialog::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method KOpenWithDialog::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KOpenWithDialog_OnDropEvent(KOpenWithDialog* self, intptr_t slot) {
    if (auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self))
        vkopenwithdialog->kopenwithdialog_dropevent_callback = reinterpret_cast<VirtualKOpenWithDialog::KOpenWithDialog_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void KOpenWithDialog_HideEvent(KOpenWithDialog* self, QHideEvent* event) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog) {
        vkopenwithdialog->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method KOpenWithDialog::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KOpenWithDialog_SuperHideEvent(KOpenWithDialog* self, QHideEvent* event) {
    if (auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self)) {
        vkopenwithdialog->KOpenWithDialog::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method KOpenWithDialog::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KOpenWithDialog_OnHideEvent(KOpenWithDialog* self, intptr_t slot) {
    if (auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self))
        vkopenwithdialog->kopenwithdialog_hideevent_callback = reinterpret_cast<VirtualKOpenWithDialog::KOpenWithDialog_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool KOpenWithDialog_NativeEvent(KOpenWithDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog) {
        return vkopenwithdialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method KOpenWithDialog::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool KOpenWithDialog_SuperNativeEvent(KOpenWithDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self)) {
        return vkopenwithdialog->KOpenWithDialog::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method KOpenWithDialog::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KOpenWithDialog_OnNativeEvent(KOpenWithDialog* self, intptr_t slot) {
    if (auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self))
        vkopenwithdialog->kopenwithdialog_nativeevent_callback = reinterpret_cast<VirtualKOpenWithDialog::KOpenWithDialog_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
void KOpenWithDialog_ChangeEvent(KOpenWithDialog* self, QEvent* param1) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog) {
        vkopenwithdialog->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KOpenWithDialog::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KOpenWithDialog_SuperChangeEvent(KOpenWithDialog* self, QEvent* param1) {
    if (auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self)) {
        vkopenwithdialog->KOpenWithDialog::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KOpenWithDialog::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KOpenWithDialog_OnChangeEvent(KOpenWithDialog* self, intptr_t slot) {
    if (auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self))
        vkopenwithdialog->kopenwithdialog_changeevent_callback = reinterpret_cast<VirtualKOpenWithDialog::KOpenWithDialog_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
int KOpenWithDialog_Metric(const KOpenWithDialog* self, int param1) {
    auto* vkopenwithdialog = const_cast<VirtualKOpenWithDialog*>(dynamic_cast<const VirtualKOpenWithDialog*>(self));
    if (vkopenwithdialog) {
        return vkopenwithdialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method KOpenWithDialog::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int KOpenWithDialog_SuperMetric(const KOpenWithDialog* self, int param1) {
    if (auto* vkopenwithdialog = const_cast<VirtualKOpenWithDialog*>(dynamic_cast<const VirtualKOpenWithDialog*>(self))) {
        return vkopenwithdialog->KOpenWithDialog::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method KOpenWithDialog::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KOpenWithDialog_OnMetric(KOpenWithDialog* self, intptr_t slot) {
    if (auto* vkopenwithdialog = const_cast<VirtualKOpenWithDialog*>(dynamic_cast<const VirtualKOpenWithDialog*>(self)))
        vkopenwithdialog->kopenwithdialog_metric_callback = reinterpret_cast<VirtualKOpenWithDialog::KOpenWithDialog_Metric_Callback>(slot);
}

// Derived class handler implementation
void KOpenWithDialog_InitPainter(const KOpenWithDialog* self, QPainter* painter) {
    auto* vkopenwithdialog = const_cast<VirtualKOpenWithDialog*>(dynamic_cast<const VirtualKOpenWithDialog*>(self));
    if (vkopenwithdialog) {
        vkopenwithdialog->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method KOpenWithDialog::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void KOpenWithDialog_SuperInitPainter(const KOpenWithDialog* self, QPainter* painter) {
    if (auto* vkopenwithdialog = const_cast<VirtualKOpenWithDialog*>(dynamic_cast<const VirtualKOpenWithDialog*>(self))) {
        vkopenwithdialog->KOpenWithDialog::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method KOpenWithDialog::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KOpenWithDialog_OnInitPainter(KOpenWithDialog* self, intptr_t slot) {
    if (auto* vkopenwithdialog = const_cast<VirtualKOpenWithDialog*>(dynamic_cast<const VirtualKOpenWithDialog*>(self)))
        vkopenwithdialog->kopenwithdialog_initpainter_callback = reinterpret_cast<VirtualKOpenWithDialog::KOpenWithDialog_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* KOpenWithDialog_Redirected(const KOpenWithDialog* self, QPoint* offset) {
    auto* vkopenwithdialog = const_cast<VirtualKOpenWithDialog*>(dynamic_cast<const VirtualKOpenWithDialog*>(self));
    if (vkopenwithdialog) {
        return vkopenwithdialog->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method KOpenWithDialog::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* KOpenWithDialog_SuperRedirected(const KOpenWithDialog* self, QPoint* offset) {
    if (auto* vkopenwithdialog = const_cast<VirtualKOpenWithDialog*>(dynamic_cast<const VirtualKOpenWithDialog*>(self))) {
        return vkopenwithdialog->KOpenWithDialog::redirected(offset);
    } else
        qFatal("Error: Protected virtual method KOpenWithDialog::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KOpenWithDialog_OnRedirected(KOpenWithDialog* self, intptr_t slot) {
    if (auto* vkopenwithdialog = const_cast<VirtualKOpenWithDialog*>(dynamic_cast<const VirtualKOpenWithDialog*>(self)))
        vkopenwithdialog->kopenwithdialog_redirected_callback = reinterpret_cast<VirtualKOpenWithDialog::KOpenWithDialog_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* KOpenWithDialog_SharedPainter(const KOpenWithDialog* self) {
    auto* vkopenwithdialog = const_cast<VirtualKOpenWithDialog*>(dynamic_cast<const VirtualKOpenWithDialog*>(self));
    if (vkopenwithdialog) {
        return vkopenwithdialog->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method KOpenWithDialog::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* KOpenWithDialog_SuperSharedPainter(const KOpenWithDialog* self) {
    if (auto* vkopenwithdialog = const_cast<VirtualKOpenWithDialog*>(dynamic_cast<const VirtualKOpenWithDialog*>(self))) {
        return vkopenwithdialog->KOpenWithDialog::sharedPainter();
    } else
        qFatal("Error: Protected virtual method KOpenWithDialog::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KOpenWithDialog_OnSharedPainter(KOpenWithDialog* self, intptr_t slot) {
    if (auto* vkopenwithdialog = const_cast<VirtualKOpenWithDialog*>(dynamic_cast<const VirtualKOpenWithDialog*>(self)))
        vkopenwithdialog->kopenwithdialog_sharedpainter_callback = reinterpret_cast<VirtualKOpenWithDialog::KOpenWithDialog_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void KOpenWithDialog_InputMethodEvent(KOpenWithDialog* self, QInputMethodEvent* param1) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog) {
        vkopenwithdialog->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KOpenWithDialog::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KOpenWithDialog_SuperInputMethodEvent(KOpenWithDialog* self, QInputMethodEvent* param1) {
    if (auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self)) {
        vkopenwithdialog->KOpenWithDialog::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method KOpenWithDialog::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KOpenWithDialog_OnInputMethodEvent(KOpenWithDialog* self, intptr_t slot) {
    if (auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self))
        vkopenwithdialog->kopenwithdialog_inputmethodevent_callback = reinterpret_cast<VirtualKOpenWithDialog::KOpenWithDialog_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* KOpenWithDialog_InputMethodQuery(const KOpenWithDialog* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* KOpenWithDialog_SuperInputMethodQuery(const KOpenWithDialog* self, int param1) {
    return new QVariant(self->KOpenWithDialog::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void KOpenWithDialog_OnInputMethodQuery(KOpenWithDialog* self, intptr_t slot) {
    if (auto* vkopenwithdialog = const_cast<VirtualKOpenWithDialog*>(dynamic_cast<const VirtualKOpenWithDialog*>(self)))
        vkopenwithdialog->kopenwithdialog_inputmethodquery_callback = reinterpret_cast<VirtualKOpenWithDialog::KOpenWithDialog_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool KOpenWithDialog_FocusNextPrevChild(KOpenWithDialog* self, bool next) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog) {
        return vkopenwithdialog->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method KOpenWithDialog::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool KOpenWithDialog_SuperFocusNextPrevChild(KOpenWithDialog* self, bool next) {
    if (auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self)) {
        return vkopenwithdialog->KOpenWithDialog::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method KOpenWithDialog::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KOpenWithDialog_OnFocusNextPrevChild(KOpenWithDialog* self, intptr_t slot) {
    if (auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self))
        vkopenwithdialog->kopenwithdialog_focusnextprevchild_callback = reinterpret_cast<VirtualKOpenWithDialog::KOpenWithDialog_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
void KOpenWithDialog_TimerEvent(KOpenWithDialog* self, QTimerEvent* event) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog) {
        vkopenwithdialog->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KOpenWithDialog::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KOpenWithDialog_SuperTimerEvent(KOpenWithDialog* self, QTimerEvent* event) {
    if (auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self)) {
        vkopenwithdialog->KOpenWithDialog::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KOpenWithDialog::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KOpenWithDialog_OnTimerEvent(KOpenWithDialog* self, intptr_t slot) {
    if (auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self))
        vkopenwithdialog->kopenwithdialog_timerevent_callback = reinterpret_cast<VirtualKOpenWithDialog::KOpenWithDialog_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KOpenWithDialog_ChildEvent(KOpenWithDialog* self, QChildEvent* event) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog) {
        vkopenwithdialog->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KOpenWithDialog::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KOpenWithDialog_SuperChildEvent(KOpenWithDialog* self, QChildEvent* event) {
    if (auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self)) {
        vkopenwithdialog->KOpenWithDialog::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KOpenWithDialog::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KOpenWithDialog_OnChildEvent(KOpenWithDialog* self, intptr_t slot) {
    if (auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self))
        vkopenwithdialog->kopenwithdialog_childevent_callback = reinterpret_cast<VirtualKOpenWithDialog::KOpenWithDialog_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KOpenWithDialog_CustomEvent(KOpenWithDialog* self, QEvent* event) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog) {
        vkopenwithdialog->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KOpenWithDialog::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KOpenWithDialog_SuperCustomEvent(KOpenWithDialog* self, QEvent* event) {
    if (auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self)) {
        vkopenwithdialog->KOpenWithDialog::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KOpenWithDialog::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KOpenWithDialog_OnCustomEvent(KOpenWithDialog* self, intptr_t slot) {
    if (auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self))
        vkopenwithdialog->kopenwithdialog_customevent_callback = reinterpret_cast<VirtualKOpenWithDialog::KOpenWithDialog_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KOpenWithDialog_ConnectNotify(KOpenWithDialog* self, const QMetaMethod* signal) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog) {
        vkopenwithdialog->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KOpenWithDialog::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KOpenWithDialog_SuperConnectNotify(KOpenWithDialog* self, const QMetaMethod* signal) {
    if (auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self)) {
        vkopenwithdialog->KOpenWithDialog::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KOpenWithDialog::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KOpenWithDialog_OnConnectNotify(KOpenWithDialog* self, intptr_t slot) {
    if (auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self))
        vkopenwithdialog->kopenwithdialog_connectnotify_callback = reinterpret_cast<VirtualKOpenWithDialog::KOpenWithDialog_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KOpenWithDialog_DisconnectNotify(KOpenWithDialog* self, const QMetaMethod* signal) {
    auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self);
    if (vkopenwithdialog) {
        vkopenwithdialog->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KOpenWithDialog::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KOpenWithDialog_SuperDisconnectNotify(KOpenWithDialog* self, const QMetaMethod* signal) {
    if (auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self)) {
        vkopenwithdialog->KOpenWithDialog::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KOpenWithDialog::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KOpenWithDialog_OnDisconnectNotify(KOpenWithDialog* self, intptr_t slot) {
    if (auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self))
        vkopenwithdialog->kopenwithdialog_disconnectnotify_callback = reinterpret_cast<VirtualKOpenWithDialog::KOpenWithDialog_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void KOpenWithDialog_AdjustPosition(KOpenWithDialog* self, QWidget* param1) {
    if (auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self)) {
        vkopenwithdialog->VirtualKOpenWithDialog::adjustPosition(param1);
    } else
        qFatal("Error: Protected method KOpenWithDialog::adjustPosition called without a directly constructed type");
}

// Derived class protected handler implementation
void KOpenWithDialog_UpdateMicroFocus(KOpenWithDialog* self) {
    if (auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self)) {
        vkopenwithdialog->VirtualKOpenWithDialog::updateMicroFocus();
    } else
        qFatal("Error: Protected method KOpenWithDialog::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void KOpenWithDialog_Create(KOpenWithDialog* self) {
    if (auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self)) {
        vkopenwithdialog->VirtualKOpenWithDialog::create();
    } else
        qFatal("Error: Protected method KOpenWithDialog::create called without a directly constructed type");
}

// Derived class protected handler implementation
void KOpenWithDialog_Destroy(KOpenWithDialog* self) {
    if (auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self)) {
        vkopenwithdialog->VirtualKOpenWithDialog::destroy();
    } else
        qFatal("Error: Protected method KOpenWithDialog::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool KOpenWithDialog_FocusNextChild(KOpenWithDialog* self) {
    if (auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self)) {
        return vkopenwithdialog->VirtualKOpenWithDialog::focusNextChild();
    } else
        qFatal("Error: Protected method KOpenWithDialog::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool KOpenWithDialog_FocusPreviousChild(KOpenWithDialog* self) {
    if (auto* vkopenwithdialog = dynamic_cast<VirtualKOpenWithDialog*>(self)) {
        return vkopenwithdialog->VirtualKOpenWithDialog::focusPreviousChild();
    } else
        qFatal("Error: Protected method KOpenWithDialog::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KOpenWithDialog_Sender(const KOpenWithDialog* self) {
    if (auto* vkopenwithdialog = const_cast<VirtualKOpenWithDialog*>(dynamic_cast<const VirtualKOpenWithDialog*>(self))) {
        return vkopenwithdialog->VirtualKOpenWithDialog::sender();
    } else
        qFatal("Error: Protected method KOpenWithDialog::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KOpenWithDialog_SenderSignalIndex(const KOpenWithDialog* self) {
    if (auto* vkopenwithdialog = const_cast<VirtualKOpenWithDialog*>(dynamic_cast<const VirtualKOpenWithDialog*>(self))) {
        return vkopenwithdialog->VirtualKOpenWithDialog::senderSignalIndex();
    } else
        qFatal("Error: Protected method KOpenWithDialog::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KOpenWithDialog_Receivers(const KOpenWithDialog* self, const char* signal) {
    if (auto* vkopenwithdialog = const_cast<VirtualKOpenWithDialog*>(dynamic_cast<const VirtualKOpenWithDialog*>(self))) {
        return vkopenwithdialog->VirtualKOpenWithDialog::receivers(signal);
    } else
        qFatal("Error: Protected method KOpenWithDialog::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KOpenWithDialog_IsSignalConnected(const KOpenWithDialog* self, const QMetaMethod* signal) {
    if (auto* vkopenwithdialog = const_cast<VirtualKOpenWithDialog*>(dynamic_cast<const VirtualKOpenWithDialog*>(self))) {
        return vkopenwithdialog->VirtualKOpenWithDialog::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KOpenWithDialog::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double KOpenWithDialog_GetDecodedMetricF(const KOpenWithDialog* self, int metricA, int metricB) {
    if (auto* vkopenwithdialog = const_cast<VirtualKOpenWithDialog*>(dynamic_cast<const VirtualKOpenWithDialog*>(self))) {
        return vkopenwithdialog->VirtualKOpenWithDialog::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method KOpenWithDialog::getDecodedMetricF called without a directly constructed type");
}

void KOpenWithDialog_Delete(KOpenWithDialog* self) {
    delete self;
}
