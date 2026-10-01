#include <KBookmark>
#include <KBookmarkDialog>
#include <KBookmarkManager>
#define WORKAROUND_INNER_CLASS_DEFINITION_KBookmarkOwner__FutureBookmark
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
#include <kbookmarkdialog.h>
#include "libkbookmarkdialog.h"
#include "libkbookmarkdialog.hxx"

KBookmarkDialog* KBookmarkDialog_new(KBookmarkManager* manager) {
    return new VirtualKBookmarkDialog(manager);
}

KBookmarkDialog* KBookmarkDialog_new2(KBookmarkManager* manager, QWidget* parent) {
    return new VirtualKBookmarkDialog(manager, parent);
}

QMetaObject* KBookmarkDialog_MetaObject(const KBookmarkDialog* self) {
    return (QMetaObject*)self->metaObject();
}

void* KBookmarkDialog_Metacast(KBookmarkDialog* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KBookmarkDialog_Metacall(KBookmarkDialog* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KBookmarkDialog_Tr(const char* s) {
    auto _ret = KBookmarkDialog::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

KBookmark* KBookmarkDialog_EditBookmark(KBookmarkDialog* self, const KBookmark* bm) {
    return new KBookmark(self->editBookmark(*bm));
}

KBookmark* KBookmarkDialog_AddBookmark(KBookmarkDialog* self, const libqt_string title, const QUrl* url, const libqt_string icon) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString icon_QString = QString::fromUtf8(icon.data, icon.len);
    return new KBookmark(self->addBookmark(title_QString, *url, icon_QString));
}

KBookmarkGroup* KBookmarkDialog_AddBookmarks(KBookmarkDialog* self, const libqt_list /* of KBookmarkOwner__FutureBookmark* */ list) {
    QList<KBookmarkOwner::FutureBookmark> list_QList;
    list_QList.reserve(list.len);
    KBookmarkOwner__FutureBookmark** list_arr = static_cast<KBookmarkOwner__FutureBookmark**>(list.data);
    for (size_t i = 0; i < list.len; ++i) {
        list_QList.push_back(*(list_arr[i]));
    }
    return new KBookmarkGroup(self->addBookmarks(list_QList));
}

KBookmarkGroup* KBookmarkDialog_CreateNewFolder(KBookmarkDialog* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return new KBookmarkGroup(self->createNewFolder(name_QString));
}

KBookmarkGroup* KBookmarkDialog_SelectFolder(KBookmarkDialog* self) {
    return new KBookmarkGroup(self->selectFolder());
}

void KBookmarkDialog_Accept(KBookmarkDialog* self) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog) {
        vkbookmarkdialog->accept();
    }
}

libqt_string KBookmarkDialog_Tr2(const char* s, const char* c) {
    auto _ret = KBookmarkDialog::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KBookmarkDialog_Tr3(const char* s, const char* c, int n) {
    auto _ret = KBookmarkDialog::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

KBookmark* KBookmarkDialog_AddBookmark4(KBookmarkDialog* self, const libqt_string title, const QUrl* url, const libqt_string icon, KBookmark* parent) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString icon_QString = QString::fromUtf8(icon.data, icon.len);
    return new KBookmark(self->addBookmark(title_QString, *url, icon_QString, *parent));
}

KBookmarkGroup* KBookmarkDialog_AddBookmarks2(KBookmarkDialog* self, const libqt_list /* of KBookmarkOwner__FutureBookmark* */ list, const libqt_string name) {
    QList<KBookmarkOwner::FutureBookmark> list_QList;
    list_QList.reserve(list.len);
    KBookmarkOwner__FutureBookmark** list_arr = static_cast<KBookmarkOwner__FutureBookmark**>(list.data);
    for (size_t i = 0; i < list.len; ++i) {
        list_QList.push_back(*(list_arr[i]));
    }
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return new KBookmarkGroup(self->addBookmarks(list_QList, name_QString));
}

KBookmarkGroup* KBookmarkDialog_AddBookmarks3(KBookmarkDialog* self, const libqt_list /* of KBookmarkOwner__FutureBookmark* */ list, const libqt_string name, KBookmarkGroup* parent) {
    QList<KBookmarkOwner::FutureBookmark> list_QList;
    list_QList.reserve(list.len);
    KBookmarkOwner__FutureBookmark** list_arr = static_cast<KBookmarkOwner__FutureBookmark**>(list.data);
    for (size_t i = 0; i < list.len; ++i) {
        list_QList.push_back(*(list_arr[i]));
    }
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return new KBookmarkGroup(self->addBookmarks(list_QList, name_QString, *parent));
}

KBookmarkGroup* KBookmarkDialog_CreateNewFolder2(KBookmarkDialog* self, const libqt_string name, KBookmark* parent) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return new KBookmarkGroup(self->createNewFolder(name_QString, *parent));
}

KBookmarkGroup* KBookmarkDialog_SelectFolder1(KBookmarkDialog* self, KBookmark* start) {
    return new KBookmarkGroup(self->selectFolder(*start));
}

// Base class handler implementation
QMetaObject* KBookmarkDialog_SuperMetaObject(const KBookmarkDialog* self) {
    return (QMetaObject*)self->KBookmarkDialog::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KBookmarkDialog_OnMetaObject(KBookmarkDialog* self, intptr_t slot) {
    if (auto* vkbookmarkdialog = const_cast<VirtualKBookmarkDialog*>(dynamic_cast<const VirtualKBookmarkDialog*>(self)))
        vkbookmarkdialog->kbookmarkdialog_metaobject_callback = reinterpret_cast<VirtualKBookmarkDialog::KBookmarkDialog_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KBookmarkDialog_SuperMetacast(KBookmarkDialog* self, const char* param1) {
    return self->KBookmarkDialog::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KBookmarkDialog_OnMetacast(KBookmarkDialog* self, intptr_t slot) {
    if (auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self))
        vkbookmarkdialog->kbookmarkdialog_metacast_callback = reinterpret_cast<VirtualKBookmarkDialog::KBookmarkDialog_Metacast_Callback>(slot);
}

// Base class handler implementation
int KBookmarkDialog_SuperMetacall(KBookmarkDialog* self, int param1, int param2, void** param3) {
    return self->KBookmarkDialog::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KBookmarkDialog_OnMetacall(KBookmarkDialog* self, intptr_t slot) {
    if (auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self))
        vkbookmarkdialog->kbookmarkdialog_metacall_callback = reinterpret_cast<VirtualKBookmarkDialog::KBookmarkDialog_Metacall_Callback>(slot);
}

// Base class handler implementation
void KBookmarkDialog_SuperAccept(KBookmarkDialog* self) {
    if (auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self)) {
        vkbookmarkdialog->KBookmarkDialog::accept();
    } else
        qFatal("Error: Protected virtual method KBookmarkDialog::accept called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBookmarkDialog_OnAccept(KBookmarkDialog* self, intptr_t slot) {
    if (auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self))
        vkbookmarkdialog->kbookmarkdialog_accept_callback = reinterpret_cast<VirtualKBookmarkDialog::KBookmarkDialog_Accept_Callback>(slot);
}

// Derived class handler implementation
void KBookmarkDialog_SetVisible(KBookmarkDialog* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void KBookmarkDialog_SuperSetVisible(KBookmarkDialog* self, bool visible) {
    self->KBookmarkDialog::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void KBookmarkDialog_OnSetVisible(KBookmarkDialog* self, intptr_t slot) {
    if (auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self))
        vkbookmarkdialog->kbookmarkdialog_setvisible_callback = reinterpret_cast<VirtualKBookmarkDialog::KBookmarkDialog_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* KBookmarkDialog_SizeHint(const KBookmarkDialog* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* KBookmarkDialog_SuperSizeHint(const KBookmarkDialog* self) {
    return new QSize(self->KBookmarkDialog::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void KBookmarkDialog_OnSizeHint(KBookmarkDialog* self, intptr_t slot) {
    if (auto* vkbookmarkdialog = const_cast<VirtualKBookmarkDialog*>(dynamic_cast<const VirtualKBookmarkDialog*>(self)))
        vkbookmarkdialog->kbookmarkdialog_sizehint_callback = reinterpret_cast<VirtualKBookmarkDialog::KBookmarkDialog_SizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* KBookmarkDialog_MinimumSizeHint(const KBookmarkDialog* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* KBookmarkDialog_SuperMinimumSizeHint(const KBookmarkDialog* self) {
    return new QSize(self->KBookmarkDialog::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void KBookmarkDialog_OnMinimumSizeHint(KBookmarkDialog* self, intptr_t slot) {
    if (auto* vkbookmarkdialog = const_cast<VirtualKBookmarkDialog*>(dynamic_cast<const VirtualKBookmarkDialog*>(self)))
        vkbookmarkdialog->kbookmarkdialog_minimumsizehint_callback = reinterpret_cast<VirtualKBookmarkDialog::KBookmarkDialog_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
void KBookmarkDialog_Open(KBookmarkDialog* self) {
    self->open();
}

// Base class handler implementation
void KBookmarkDialog_SuperOpen(KBookmarkDialog* self) {
    self->KBookmarkDialog::open();
}

// Auxiliary method to allow providing re-implementation
void KBookmarkDialog_OnOpen(KBookmarkDialog* self, intptr_t slot) {
    if (auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self))
        vkbookmarkdialog->kbookmarkdialog_open_callback = reinterpret_cast<VirtualKBookmarkDialog::KBookmarkDialog_Open_Callback>(slot);
}

// Derived class handler implementation
int KBookmarkDialog_Exec(KBookmarkDialog* self) {
    return self->exec();
}

// Base class handler implementation
int KBookmarkDialog_SuperExec(KBookmarkDialog* self) {
    return self->KBookmarkDialog::exec();
}

// Auxiliary method to allow providing re-implementation
void KBookmarkDialog_OnExec(KBookmarkDialog* self, intptr_t slot) {
    if (auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self))
        vkbookmarkdialog->kbookmarkdialog_exec_callback = reinterpret_cast<VirtualKBookmarkDialog::KBookmarkDialog_Exec_Callback>(slot);
}

// Derived class handler implementation
void KBookmarkDialog_Done(KBookmarkDialog* self, int param1) {
    self->done(static_cast<int>(param1));
}

// Base class handler implementation
void KBookmarkDialog_SuperDone(KBookmarkDialog* self, int param1) {
    self->KBookmarkDialog::done(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void KBookmarkDialog_OnDone(KBookmarkDialog* self, intptr_t slot) {
    if (auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self))
        vkbookmarkdialog->kbookmarkdialog_done_callback = reinterpret_cast<VirtualKBookmarkDialog::KBookmarkDialog_Done_Callback>(slot);
}

// Derived class handler implementation
void KBookmarkDialog_Reject(KBookmarkDialog* self) {
    self->reject();
}

// Base class handler implementation
void KBookmarkDialog_SuperReject(KBookmarkDialog* self) {
    self->KBookmarkDialog::reject();
}

// Auxiliary method to allow providing re-implementation
void KBookmarkDialog_OnReject(KBookmarkDialog* self, intptr_t slot) {
    if (auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self))
        vkbookmarkdialog->kbookmarkdialog_reject_callback = reinterpret_cast<VirtualKBookmarkDialog::KBookmarkDialog_Reject_Callback>(slot);
}

// Derived class handler implementation
void KBookmarkDialog_KeyPressEvent(KBookmarkDialog* self, QKeyEvent* param1) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog) {
        vkbookmarkdialog->keyPressEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KBookmarkDialog::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KBookmarkDialog_SuperKeyPressEvent(KBookmarkDialog* self, QKeyEvent* param1) {
    if (auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self)) {
        vkbookmarkdialog->KBookmarkDialog::keyPressEvent(param1);
    } else
        qFatal("Error: Protected virtual method KBookmarkDialog::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBookmarkDialog_OnKeyPressEvent(KBookmarkDialog* self, intptr_t slot) {
    if (auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self))
        vkbookmarkdialog->kbookmarkdialog_keypressevent_callback = reinterpret_cast<VirtualKBookmarkDialog::KBookmarkDialog_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void KBookmarkDialog_CloseEvent(KBookmarkDialog* self, QCloseEvent* param1) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog) {
        vkbookmarkdialog->closeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KBookmarkDialog::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KBookmarkDialog_SuperCloseEvent(KBookmarkDialog* self, QCloseEvent* param1) {
    if (auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self)) {
        vkbookmarkdialog->KBookmarkDialog::closeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KBookmarkDialog::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBookmarkDialog_OnCloseEvent(KBookmarkDialog* self, intptr_t slot) {
    if (auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self))
        vkbookmarkdialog->kbookmarkdialog_closeevent_callback = reinterpret_cast<VirtualKBookmarkDialog::KBookmarkDialog_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void KBookmarkDialog_ShowEvent(KBookmarkDialog* self, QShowEvent* param1) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog) {
        vkbookmarkdialog->showEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KBookmarkDialog::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KBookmarkDialog_SuperShowEvent(KBookmarkDialog* self, QShowEvent* param1) {
    if (auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self)) {
        vkbookmarkdialog->KBookmarkDialog::showEvent(param1);
    } else
        qFatal("Error: Protected virtual method KBookmarkDialog::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBookmarkDialog_OnShowEvent(KBookmarkDialog* self, intptr_t slot) {
    if (auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self))
        vkbookmarkdialog->kbookmarkdialog_showevent_callback = reinterpret_cast<VirtualKBookmarkDialog::KBookmarkDialog_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void KBookmarkDialog_ResizeEvent(KBookmarkDialog* self, QResizeEvent* param1) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog) {
        vkbookmarkdialog->resizeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KBookmarkDialog::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KBookmarkDialog_SuperResizeEvent(KBookmarkDialog* self, QResizeEvent* param1) {
    if (auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self)) {
        vkbookmarkdialog->KBookmarkDialog::resizeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KBookmarkDialog::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBookmarkDialog_OnResizeEvent(KBookmarkDialog* self, intptr_t slot) {
    if (auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self))
        vkbookmarkdialog->kbookmarkdialog_resizeevent_callback = reinterpret_cast<VirtualKBookmarkDialog::KBookmarkDialog_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void KBookmarkDialog_ContextMenuEvent(KBookmarkDialog* self, QContextMenuEvent* param1) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog) {
        vkbookmarkdialog->contextMenuEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KBookmarkDialog::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KBookmarkDialog_SuperContextMenuEvent(KBookmarkDialog* self, QContextMenuEvent* param1) {
    if (auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self)) {
        vkbookmarkdialog->KBookmarkDialog::contextMenuEvent(param1);
    } else
        qFatal("Error: Protected virtual method KBookmarkDialog::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBookmarkDialog_OnContextMenuEvent(KBookmarkDialog* self, intptr_t slot) {
    if (auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self))
        vkbookmarkdialog->kbookmarkdialog_contextmenuevent_callback = reinterpret_cast<VirtualKBookmarkDialog::KBookmarkDialog_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
bool KBookmarkDialog_EventFilter(KBookmarkDialog* self, QObject* param1, QEvent* param2) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog) {
        return vkbookmarkdialog->eventFilter(param1, param2);
    } else {
        qFatal("Error: Protected virtual method KBookmarkDialog::eventFilter called without a directly constructed type");
    }
}

// Base class handler implementation
bool KBookmarkDialog_SuperEventFilter(KBookmarkDialog* self, QObject* param1, QEvent* param2) {
    if (auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self)) {
        return vkbookmarkdialog->KBookmarkDialog::eventFilter(param1, param2);
    } else
        qFatal("Error: Protected virtual method KBookmarkDialog::eventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBookmarkDialog_OnEventFilter(KBookmarkDialog* self, intptr_t slot) {
    if (auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self))
        vkbookmarkdialog->kbookmarkdialog_eventfilter_callback = reinterpret_cast<VirtualKBookmarkDialog::KBookmarkDialog_EventFilter_Callback>(slot);
}

// Derived class handler implementation
int KBookmarkDialog_DevType(const KBookmarkDialog* self) {
    return self->devType();
}

// Base class handler implementation
int KBookmarkDialog_SuperDevType(const KBookmarkDialog* self) {
    return self->KBookmarkDialog::devType();
}

// Auxiliary method to allow providing re-implementation
void KBookmarkDialog_OnDevType(KBookmarkDialog* self, intptr_t slot) {
    if (auto* vkbookmarkdialog = const_cast<VirtualKBookmarkDialog*>(dynamic_cast<const VirtualKBookmarkDialog*>(self)))
        vkbookmarkdialog->kbookmarkdialog_devtype_callback = reinterpret_cast<VirtualKBookmarkDialog::KBookmarkDialog_DevType_Callback>(slot);
}

// Derived class handler implementation
int KBookmarkDialog_HeightForWidth(const KBookmarkDialog* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int KBookmarkDialog_SuperHeightForWidth(const KBookmarkDialog* self, int param1) {
    return self->KBookmarkDialog::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void KBookmarkDialog_OnHeightForWidth(KBookmarkDialog* self, intptr_t slot) {
    if (auto* vkbookmarkdialog = const_cast<VirtualKBookmarkDialog*>(dynamic_cast<const VirtualKBookmarkDialog*>(self)))
        vkbookmarkdialog->kbookmarkdialog_heightforwidth_callback = reinterpret_cast<VirtualKBookmarkDialog::KBookmarkDialog_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool KBookmarkDialog_HasHeightForWidth(const KBookmarkDialog* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool KBookmarkDialog_SuperHasHeightForWidth(const KBookmarkDialog* self) {
    return self->KBookmarkDialog::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void KBookmarkDialog_OnHasHeightForWidth(KBookmarkDialog* self, intptr_t slot) {
    if (auto* vkbookmarkdialog = const_cast<VirtualKBookmarkDialog*>(dynamic_cast<const VirtualKBookmarkDialog*>(self)))
        vkbookmarkdialog->kbookmarkdialog_hasheightforwidth_callback = reinterpret_cast<VirtualKBookmarkDialog::KBookmarkDialog_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* KBookmarkDialog_PaintEngine(const KBookmarkDialog* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* KBookmarkDialog_SuperPaintEngine(const KBookmarkDialog* self) {
    return self->KBookmarkDialog::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void KBookmarkDialog_OnPaintEngine(KBookmarkDialog* self, intptr_t slot) {
    if (auto* vkbookmarkdialog = const_cast<VirtualKBookmarkDialog*>(dynamic_cast<const VirtualKBookmarkDialog*>(self)))
        vkbookmarkdialog->kbookmarkdialog_paintengine_callback = reinterpret_cast<VirtualKBookmarkDialog::KBookmarkDialog_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
bool KBookmarkDialog_Event(KBookmarkDialog* self, QEvent* event) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog) {
        return vkbookmarkdialog->event(event);
    } else {
        qFatal("Error: Protected virtual method KBookmarkDialog::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool KBookmarkDialog_SuperEvent(KBookmarkDialog* self, QEvent* event) {
    if (auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self)) {
        return vkbookmarkdialog->KBookmarkDialog::event(event);
    } else
        qFatal("Error: Protected virtual method KBookmarkDialog::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBookmarkDialog_OnEvent(KBookmarkDialog* self, intptr_t slot) {
    if (auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self))
        vkbookmarkdialog->kbookmarkdialog_event_callback = reinterpret_cast<VirtualKBookmarkDialog::KBookmarkDialog_Event_Callback>(slot);
}

// Derived class handler implementation
void KBookmarkDialog_MousePressEvent(KBookmarkDialog* self, QMouseEvent* event) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog) {
        vkbookmarkdialog->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method KBookmarkDialog::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KBookmarkDialog_SuperMousePressEvent(KBookmarkDialog* self, QMouseEvent* event) {
    if (auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self)) {
        vkbookmarkdialog->KBookmarkDialog::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method KBookmarkDialog::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBookmarkDialog_OnMousePressEvent(KBookmarkDialog* self, intptr_t slot) {
    if (auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self))
        vkbookmarkdialog->kbookmarkdialog_mousepressevent_callback = reinterpret_cast<VirtualKBookmarkDialog::KBookmarkDialog_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void KBookmarkDialog_MouseReleaseEvent(KBookmarkDialog* self, QMouseEvent* event) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog) {
        vkbookmarkdialog->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KBookmarkDialog::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KBookmarkDialog_SuperMouseReleaseEvent(KBookmarkDialog* self, QMouseEvent* event) {
    if (auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self)) {
        vkbookmarkdialog->KBookmarkDialog::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KBookmarkDialog::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBookmarkDialog_OnMouseReleaseEvent(KBookmarkDialog* self, intptr_t slot) {
    if (auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self))
        vkbookmarkdialog->kbookmarkdialog_mousereleaseevent_callback = reinterpret_cast<VirtualKBookmarkDialog::KBookmarkDialog_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KBookmarkDialog_MouseDoubleClickEvent(KBookmarkDialog* self, QMouseEvent* event) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog) {
        vkbookmarkdialog->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method KBookmarkDialog::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KBookmarkDialog_SuperMouseDoubleClickEvent(KBookmarkDialog* self, QMouseEvent* event) {
    if (auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self)) {
        vkbookmarkdialog->KBookmarkDialog::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method KBookmarkDialog::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBookmarkDialog_OnMouseDoubleClickEvent(KBookmarkDialog* self, intptr_t slot) {
    if (auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self))
        vkbookmarkdialog->kbookmarkdialog_mousedoubleclickevent_callback = reinterpret_cast<VirtualKBookmarkDialog::KBookmarkDialog_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void KBookmarkDialog_MouseMoveEvent(KBookmarkDialog* self, QMouseEvent* event) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog) {
        vkbookmarkdialog->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KBookmarkDialog::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KBookmarkDialog_SuperMouseMoveEvent(KBookmarkDialog* self, QMouseEvent* event) {
    if (auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self)) {
        vkbookmarkdialog->KBookmarkDialog::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KBookmarkDialog::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBookmarkDialog_OnMouseMoveEvent(KBookmarkDialog* self, intptr_t slot) {
    if (auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self))
        vkbookmarkdialog->kbookmarkdialog_mousemoveevent_callback = reinterpret_cast<VirtualKBookmarkDialog::KBookmarkDialog_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KBookmarkDialog_WheelEvent(KBookmarkDialog* self, QWheelEvent* event) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog) {
        vkbookmarkdialog->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method KBookmarkDialog::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KBookmarkDialog_SuperWheelEvent(KBookmarkDialog* self, QWheelEvent* event) {
    if (auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self)) {
        vkbookmarkdialog->KBookmarkDialog::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method KBookmarkDialog::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBookmarkDialog_OnWheelEvent(KBookmarkDialog* self, intptr_t slot) {
    if (auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self))
        vkbookmarkdialog->kbookmarkdialog_wheelevent_callback = reinterpret_cast<VirtualKBookmarkDialog::KBookmarkDialog_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void KBookmarkDialog_KeyReleaseEvent(KBookmarkDialog* self, QKeyEvent* event) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog) {
        vkbookmarkdialog->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KBookmarkDialog::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KBookmarkDialog_SuperKeyReleaseEvent(KBookmarkDialog* self, QKeyEvent* event) {
    if (auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self)) {
        vkbookmarkdialog->KBookmarkDialog::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KBookmarkDialog::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBookmarkDialog_OnKeyReleaseEvent(KBookmarkDialog* self, intptr_t slot) {
    if (auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self))
        vkbookmarkdialog->kbookmarkdialog_keyreleaseevent_callback = reinterpret_cast<VirtualKBookmarkDialog::KBookmarkDialog_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KBookmarkDialog_FocusInEvent(KBookmarkDialog* self, QFocusEvent* event) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog) {
        vkbookmarkdialog->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method KBookmarkDialog::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KBookmarkDialog_SuperFocusInEvent(KBookmarkDialog* self, QFocusEvent* event) {
    if (auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self)) {
        vkbookmarkdialog->KBookmarkDialog::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method KBookmarkDialog::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBookmarkDialog_OnFocusInEvent(KBookmarkDialog* self, intptr_t slot) {
    if (auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self))
        vkbookmarkdialog->kbookmarkdialog_focusinevent_callback = reinterpret_cast<VirtualKBookmarkDialog::KBookmarkDialog_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void KBookmarkDialog_FocusOutEvent(KBookmarkDialog* self, QFocusEvent* event) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog) {
        vkbookmarkdialog->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method KBookmarkDialog::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KBookmarkDialog_SuperFocusOutEvent(KBookmarkDialog* self, QFocusEvent* event) {
    if (auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self)) {
        vkbookmarkdialog->KBookmarkDialog::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method KBookmarkDialog::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBookmarkDialog_OnFocusOutEvent(KBookmarkDialog* self, intptr_t slot) {
    if (auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self))
        vkbookmarkdialog->kbookmarkdialog_focusoutevent_callback = reinterpret_cast<VirtualKBookmarkDialog::KBookmarkDialog_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void KBookmarkDialog_EnterEvent(KBookmarkDialog* self, QEnterEvent* event) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog) {
        vkbookmarkdialog->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KBookmarkDialog::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KBookmarkDialog_SuperEnterEvent(KBookmarkDialog* self, QEnterEvent* event) {
    if (auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self)) {
        vkbookmarkdialog->KBookmarkDialog::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method KBookmarkDialog::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBookmarkDialog_OnEnterEvent(KBookmarkDialog* self, intptr_t slot) {
    if (auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self))
        vkbookmarkdialog->kbookmarkdialog_enterevent_callback = reinterpret_cast<VirtualKBookmarkDialog::KBookmarkDialog_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KBookmarkDialog_LeaveEvent(KBookmarkDialog* self, QEvent* event) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog) {
        vkbookmarkdialog->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KBookmarkDialog::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KBookmarkDialog_SuperLeaveEvent(KBookmarkDialog* self, QEvent* event) {
    if (auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self)) {
        vkbookmarkdialog->KBookmarkDialog::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KBookmarkDialog::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBookmarkDialog_OnLeaveEvent(KBookmarkDialog* self, intptr_t slot) {
    if (auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self))
        vkbookmarkdialog->kbookmarkdialog_leaveevent_callback = reinterpret_cast<VirtualKBookmarkDialog::KBookmarkDialog_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KBookmarkDialog_PaintEvent(KBookmarkDialog* self, QPaintEvent* event) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog) {
        vkbookmarkdialog->paintEvent(event);
    } else {
        qFatal("Error: Protected virtual method KBookmarkDialog::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KBookmarkDialog_SuperPaintEvent(KBookmarkDialog* self, QPaintEvent* event) {
    if (auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self)) {
        vkbookmarkdialog->KBookmarkDialog::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method KBookmarkDialog::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBookmarkDialog_OnPaintEvent(KBookmarkDialog* self, intptr_t slot) {
    if (auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self))
        vkbookmarkdialog->kbookmarkdialog_paintevent_callback = reinterpret_cast<VirtualKBookmarkDialog::KBookmarkDialog_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void KBookmarkDialog_MoveEvent(KBookmarkDialog* self, QMoveEvent* event) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog) {
        vkbookmarkdialog->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KBookmarkDialog::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KBookmarkDialog_SuperMoveEvent(KBookmarkDialog* self, QMoveEvent* event) {
    if (auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self)) {
        vkbookmarkdialog->KBookmarkDialog::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method KBookmarkDialog::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBookmarkDialog_OnMoveEvent(KBookmarkDialog* self, intptr_t slot) {
    if (auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self))
        vkbookmarkdialog->kbookmarkdialog_moveevent_callback = reinterpret_cast<VirtualKBookmarkDialog::KBookmarkDialog_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KBookmarkDialog_TabletEvent(KBookmarkDialog* self, QTabletEvent* event) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog) {
        vkbookmarkdialog->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method KBookmarkDialog::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KBookmarkDialog_SuperTabletEvent(KBookmarkDialog* self, QTabletEvent* event) {
    if (auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self)) {
        vkbookmarkdialog->KBookmarkDialog::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method KBookmarkDialog::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBookmarkDialog_OnTabletEvent(KBookmarkDialog* self, intptr_t slot) {
    if (auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self))
        vkbookmarkdialog->kbookmarkdialog_tabletevent_callback = reinterpret_cast<VirtualKBookmarkDialog::KBookmarkDialog_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void KBookmarkDialog_ActionEvent(KBookmarkDialog* self, QActionEvent* event) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog) {
        vkbookmarkdialog->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method KBookmarkDialog::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KBookmarkDialog_SuperActionEvent(KBookmarkDialog* self, QActionEvent* event) {
    if (auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self)) {
        vkbookmarkdialog->KBookmarkDialog::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method KBookmarkDialog::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBookmarkDialog_OnActionEvent(KBookmarkDialog* self, intptr_t slot) {
    if (auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self))
        vkbookmarkdialog->kbookmarkdialog_actionevent_callback = reinterpret_cast<VirtualKBookmarkDialog::KBookmarkDialog_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void KBookmarkDialog_DragEnterEvent(KBookmarkDialog* self, QDragEnterEvent* event) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog) {
        vkbookmarkdialog->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KBookmarkDialog::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KBookmarkDialog_SuperDragEnterEvent(KBookmarkDialog* self, QDragEnterEvent* event) {
    if (auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self)) {
        vkbookmarkdialog->KBookmarkDialog::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method KBookmarkDialog::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBookmarkDialog_OnDragEnterEvent(KBookmarkDialog* self, intptr_t slot) {
    if (auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self))
        vkbookmarkdialog->kbookmarkdialog_dragenterevent_callback = reinterpret_cast<VirtualKBookmarkDialog::KBookmarkDialog_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KBookmarkDialog_DragMoveEvent(KBookmarkDialog* self, QDragMoveEvent* event) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog) {
        vkbookmarkdialog->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KBookmarkDialog::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KBookmarkDialog_SuperDragMoveEvent(KBookmarkDialog* self, QDragMoveEvent* event) {
    if (auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self)) {
        vkbookmarkdialog->KBookmarkDialog::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KBookmarkDialog::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBookmarkDialog_OnDragMoveEvent(KBookmarkDialog* self, intptr_t slot) {
    if (auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self))
        vkbookmarkdialog->kbookmarkdialog_dragmoveevent_callback = reinterpret_cast<VirtualKBookmarkDialog::KBookmarkDialog_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KBookmarkDialog_DragLeaveEvent(KBookmarkDialog* self, QDragLeaveEvent* event) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog) {
        vkbookmarkdialog->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KBookmarkDialog::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KBookmarkDialog_SuperDragLeaveEvent(KBookmarkDialog* self, QDragLeaveEvent* event) {
    if (auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self)) {
        vkbookmarkdialog->KBookmarkDialog::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KBookmarkDialog::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBookmarkDialog_OnDragLeaveEvent(KBookmarkDialog* self, intptr_t slot) {
    if (auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self))
        vkbookmarkdialog->kbookmarkdialog_dragleaveevent_callback = reinterpret_cast<VirtualKBookmarkDialog::KBookmarkDialog_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KBookmarkDialog_DropEvent(KBookmarkDialog* self, QDropEvent* event) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog) {
        vkbookmarkdialog->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method KBookmarkDialog::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KBookmarkDialog_SuperDropEvent(KBookmarkDialog* self, QDropEvent* event) {
    if (auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self)) {
        vkbookmarkdialog->KBookmarkDialog::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method KBookmarkDialog::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBookmarkDialog_OnDropEvent(KBookmarkDialog* self, intptr_t slot) {
    if (auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self))
        vkbookmarkdialog->kbookmarkdialog_dropevent_callback = reinterpret_cast<VirtualKBookmarkDialog::KBookmarkDialog_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void KBookmarkDialog_HideEvent(KBookmarkDialog* self, QHideEvent* event) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog) {
        vkbookmarkdialog->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method KBookmarkDialog::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KBookmarkDialog_SuperHideEvent(KBookmarkDialog* self, QHideEvent* event) {
    if (auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self)) {
        vkbookmarkdialog->KBookmarkDialog::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method KBookmarkDialog::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBookmarkDialog_OnHideEvent(KBookmarkDialog* self, intptr_t slot) {
    if (auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self))
        vkbookmarkdialog->kbookmarkdialog_hideevent_callback = reinterpret_cast<VirtualKBookmarkDialog::KBookmarkDialog_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool KBookmarkDialog_NativeEvent(KBookmarkDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog) {
        return vkbookmarkdialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method KBookmarkDialog::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool KBookmarkDialog_SuperNativeEvent(KBookmarkDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self)) {
        return vkbookmarkdialog->KBookmarkDialog::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method KBookmarkDialog::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBookmarkDialog_OnNativeEvent(KBookmarkDialog* self, intptr_t slot) {
    if (auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self))
        vkbookmarkdialog->kbookmarkdialog_nativeevent_callback = reinterpret_cast<VirtualKBookmarkDialog::KBookmarkDialog_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
void KBookmarkDialog_ChangeEvent(KBookmarkDialog* self, QEvent* param1) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog) {
        vkbookmarkdialog->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KBookmarkDialog::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KBookmarkDialog_SuperChangeEvent(KBookmarkDialog* self, QEvent* param1) {
    if (auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self)) {
        vkbookmarkdialog->KBookmarkDialog::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KBookmarkDialog::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBookmarkDialog_OnChangeEvent(KBookmarkDialog* self, intptr_t slot) {
    if (auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self))
        vkbookmarkdialog->kbookmarkdialog_changeevent_callback = reinterpret_cast<VirtualKBookmarkDialog::KBookmarkDialog_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
int KBookmarkDialog_Metric(const KBookmarkDialog* self, int param1) {
    auto* vkbookmarkdialog = const_cast<VirtualKBookmarkDialog*>(dynamic_cast<const VirtualKBookmarkDialog*>(self));
    if (vkbookmarkdialog) {
        return vkbookmarkdialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method KBookmarkDialog::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int KBookmarkDialog_SuperMetric(const KBookmarkDialog* self, int param1) {
    if (auto* vkbookmarkdialog = const_cast<VirtualKBookmarkDialog*>(dynamic_cast<const VirtualKBookmarkDialog*>(self))) {
        return vkbookmarkdialog->KBookmarkDialog::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method KBookmarkDialog::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBookmarkDialog_OnMetric(KBookmarkDialog* self, intptr_t slot) {
    if (auto* vkbookmarkdialog = const_cast<VirtualKBookmarkDialog*>(dynamic_cast<const VirtualKBookmarkDialog*>(self)))
        vkbookmarkdialog->kbookmarkdialog_metric_callback = reinterpret_cast<VirtualKBookmarkDialog::KBookmarkDialog_Metric_Callback>(slot);
}

// Derived class handler implementation
void KBookmarkDialog_InitPainter(const KBookmarkDialog* self, QPainter* painter) {
    auto* vkbookmarkdialog = const_cast<VirtualKBookmarkDialog*>(dynamic_cast<const VirtualKBookmarkDialog*>(self));
    if (vkbookmarkdialog) {
        vkbookmarkdialog->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method KBookmarkDialog::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void KBookmarkDialog_SuperInitPainter(const KBookmarkDialog* self, QPainter* painter) {
    if (auto* vkbookmarkdialog = const_cast<VirtualKBookmarkDialog*>(dynamic_cast<const VirtualKBookmarkDialog*>(self))) {
        vkbookmarkdialog->KBookmarkDialog::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method KBookmarkDialog::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBookmarkDialog_OnInitPainter(KBookmarkDialog* self, intptr_t slot) {
    if (auto* vkbookmarkdialog = const_cast<VirtualKBookmarkDialog*>(dynamic_cast<const VirtualKBookmarkDialog*>(self)))
        vkbookmarkdialog->kbookmarkdialog_initpainter_callback = reinterpret_cast<VirtualKBookmarkDialog::KBookmarkDialog_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* KBookmarkDialog_Redirected(const KBookmarkDialog* self, QPoint* offset) {
    auto* vkbookmarkdialog = const_cast<VirtualKBookmarkDialog*>(dynamic_cast<const VirtualKBookmarkDialog*>(self));
    if (vkbookmarkdialog) {
        return vkbookmarkdialog->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method KBookmarkDialog::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* KBookmarkDialog_SuperRedirected(const KBookmarkDialog* self, QPoint* offset) {
    if (auto* vkbookmarkdialog = const_cast<VirtualKBookmarkDialog*>(dynamic_cast<const VirtualKBookmarkDialog*>(self))) {
        return vkbookmarkdialog->KBookmarkDialog::redirected(offset);
    } else
        qFatal("Error: Protected virtual method KBookmarkDialog::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBookmarkDialog_OnRedirected(KBookmarkDialog* self, intptr_t slot) {
    if (auto* vkbookmarkdialog = const_cast<VirtualKBookmarkDialog*>(dynamic_cast<const VirtualKBookmarkDialog*>(self)))
        vkbookmarkdialog->kbookmarkdialog_redirected_callback = reinterpret_cast<VirtualKBookmarkDialog::KBookmarkDialog_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* KBookmarkDialog_SharedPainter(const KBookmarkDialog* self) {
    auto* vkbookmarkdialog = const_cast<VirtualKBookmarkDialog*>(dynamic_cast<const VirtualKBookmarkDialog*>(self));
    if (vkbookmarkdialog) {
        return vkbookmarkdialog->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method KBookmarkDialog::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* KBookmarkDialog_SuperSharedPainter(const KBookmarkDialog* self) {
    if (auto* vkbookmarkdialog = const_cast<VirtualKBookmarkDialog*>(dynamic_cast<const VirtualKBookmarkDialog*>(self))) {
        return vkbookmarkdialog->KBookmarkDialog::sharedPainter();
    } else
        qFatal("Error: Protected virtual method KBookmarkDialog::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBookmarkDialog_OnSharedPainter(KBookmarkDialog* self, intptr_t slot) {
    if (auto* vkbookmarkdialog = const_cast<VirtualKBookmarkDialog*>(dynamic_cast<const VirtualKBookmarkDialog*>(self)))
        vkbookmarkdialog->kbookmarkdialog_sharedpainter_callback = reinterpret_cast<VirtualKBookmarkDialog::KBookmarkDialog_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void KBookmarkDialog_InputMethodEvent(KBookmarkDialog* self, QInputMethodEvent* param1) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog) {
        vkbookmarkdialog->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KBookmarkDialog::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KBookmarkDialog_SuperInputMethodEvent(KBookmarkDialog* self, QInputMethodEvent* param1) {
    if (auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self)) {
        vkbookmarkdialog->KBookmarkDialog::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method KBookmarkDialog::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBookmarkDialog_OnInputMethodEvent(KBookmarkDialog* self, intptr_t slot) {
    if (auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self))
        vkbookmarkdialog->kbookmarkdialog_inputmethodevent_callback = reinterpret_cast<VirtualKBookmarkDialog::KBookmarkDialog_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* KBookmarkDialog_InputMethodQuery(const KBookmarkDialog* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* KBookmarkDialog_SuperInputMethodQuery(const KBookmarkDialog* self, int param1) {
    return new QVariant(self->KBookmarkDialog::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void KBookmarkDialog_OnInputMethodQuery(KBookmarkDialog* self, intptr_t slot) {
    if (auto* vkbookmarkdialog = const_cast<VirtualKBookmarkDialog*>(dynamic_cast<const VirtualKBookmarkDialog*>(self)))
        vkbookmarkdialog->kbookmarkdialog_inputmethodquery_callback = reinterpret_cast<VirtualKBookmarkDialog::KBookmarkDialog_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool KBookmarkDialog_FocusNextPrevChild(KBookmarkDialog* self, bool next) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog) {
        return vkbookmarkdialog->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method KBookmarkDialog::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool KBookmarkDialog_SuperFocusNextPrevChild(KBookmarkDialog* self, bool next) {
    if (auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self)) {
        return vkbookmarkdialog->KBookmarkDialog::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method KBookmarkDialog::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBookmarkDialog_OnFocusNextPrevChild(KBookmarkDialog* self, intptr_t slot) {
    if (auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self))
        vkbookmarkdialog->kbookmarkdialog_focusnextprevchild_callback = reinterpret_cast<VirtualKBookmarkDialog::KBookmarkDialog_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
void KBookmarkDialog_TimerEvent(KBookmarkDialog* self, QTimerEvent* event) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog) {
        vkbookmarkdialog->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KBookmarkDialog::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KBookmarkDialog_SuperTimerEvent(KBookmarkDialog* self, QTimerEvent* event) {
    if (auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self)) {
        vkbookmarkdialog->KBookmarkDialog::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KBookmarkDialog::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBookmarkDialog_OnTimerEvent(KBookmarkDialog* self, intptr_t slot) {
    if (auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self))
        vkbookmarkdialog->kbookmarkdialog_timerevent_callback = reinterpret_cast<VirtualKBookmarkDialog::KBookmarkDialog_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KBookmarkDialog_ChildEvent(KBookmarkDialog* self, QChildEvent* event) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog) {
        vkbookmarkdialog->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KBookmarkDialog::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KBookmarkDialog_SuperChildEvent(KBookmarkDialog* self, QChildEvent* event) {
    if (auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self)) {
        vkbookmarkdialog->KBookmarkDialog::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KBookmarkDialog::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBookmarkDialog_OnChildEvent(KBookmarkDialog* self, intptr_t slot) {
    if (auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self))
        vkbookmarkdialog->kbookmarkdialog_childevent_callback = reinterpret_cast<VirtualKBookmarkDialog::KBookmarkDialog_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KBookmarkDialog_CustomEvent(KBookmarkDialog* self, QEvent* event) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog) {
        vkbookmarkdialog->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KBookmarkDialog::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KBookmarkDialog_SuperCustomEvent(KBookmarkDialog* self, QEvent* event) {
    if (auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self)) {
        vkbookmarkdialog->KBookmarkDialog::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KBookmarkDialog::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBookmarkDialog_OnCustomEvent(KBookmarkDialog* self, intptr_t slot) {
    if (auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self))
        vkbookmarkdialog->kbookmarkdialog_customevent_callback = reinterpret_cast<VirtualKBookmarkDialog::KBookmarkDialog_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KBookmarkDialog_ConnectNotify(KBookmarkDialog* self, const QMetaMethod* signal) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog) {
        vkbookmarkdialog->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KBookmarkDialog::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KBookmarkDialog_SuperConnectNotify(KBookmarkDialog* self, const QMetaMethod* signal) {
    if (auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self)) {
        vkbookmarkdialog->KBookmarkDialog::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KBookmarkDialog::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBookmarkDialog_OnConnectNotify(KBookmarkDialog* self, intptr_t slot) {
    if (auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self))
        vkbookmarkdialog->kbookmarkdialog_connectnotify_callback = reinterpret_cast<VirtualKBookmarkDialog::KBookmarkDialog_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KBookmarkDialog_DisconnectNotify(KBookmarkDialog* self, const QMetaMethod* signal) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog) {
        vkbookmarkdialog->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KBookmarkDialog::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KBookmarkDialog_SuperDisconnectNotify(KBookmarkDialog* self, const QMetaMethod* signal) {
    if (auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self)) {
        vkbookmarkdialog->KBookmarkDialog::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KBookmarkDialog::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KBookmarkDialog_OnDisconnectNotify(KBookmarkDialog* self, intptr_t slot) {
    if (auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self))
        vkbookmarkdialog->kbookmarkdialog_disconnectnotify_callback = reinterpret_cast<VirtualKBookmarkDialog::KBookmarkDialog_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void KBookmarkDialog_NewFolderButton(KBookmarkDialog* self) {
    if (auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self)) {
        vkbookmarkdialog->VirtualKBookmarkDialog::newFolderButton();
    } else
        qFatal("Error: Protected method KBookmarkDialog::newFolderButton called without a directly constructed type");
}

// Derived class protected handler implementation
void KBookmarkDialog_AdjustPosition(KBookmarkDialog* self, QWidget* param1) {
    if (auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self)) {
        vkbookmarkdialog->VirtualKBookmarkDialog::adjustPosition(param1);
    } else
        qFatal("Error: Protected method KBookmarkDialog::adjustPosition called without a directly constructed type");
}

// Derived class protected handler implementation
void KBookmarkDialog_UpdateMicroFocus(KBookmarkDialog* self) {
    if (auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self)) {
        vkbookmarkdialog->VirtualKBookmarkDialog::updateMicroFocus();
    } else
        qFatal("Error: Protected method KBookmarkDialog::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void KBookmarkDialog_Create(KBookmarkDialog* self) {
    if (auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self)) {
        vkbookmarkdialog->VirtualKBookmarkDialog::create();
    } else
        qFatal("Error: Protected method KBookmarkDialog::create called without a directly constructed type");
}

// Derived class protected handler implementation
void KBookmarkDialog_Destroy(KBookmarkDialog* self) {
    if (auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self)) {
        vkbookmarkdialog->VirtualKBookmarkDialog::destroy();
    } else
        qFatal("Error: Protected method KBookmarkDialog::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool KBookmarkDialog_FocusNextChild(KBookmarkDialog* self) {
    if (auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self)) {
        return vkbookmarkdialog->VirtualKBookmarkDialog::focusNextChild();
    } else
        qFatal("Error: Protected method KBookmarkDialog::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool KBookmarkDialog_FocusPreviousChild(KBookmarkDialog* self) {
    if (auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self)) {
        return vkbookmarkdialog->VirtualKBookmarkDialog::focusPreviousChild();
    } else
        qFatal("Error: Protected method KBookmarkDialog::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KBookmarkDialog_Sender(const KBookmarkDialog* self) {
    if (auto* vkbookmarkdialog = const_cast<VirtualKBookmarkDialog*>(dynamic_cast<const VirtualKBookmarkDialog*>(self))) {
        return vkbookmarkdialog->VirtualKBookmarkDialog::sender();
    } else
        qFatal("Error: Protected method KBookmarkDialog::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KBookmarkDialog_SenderSignalIndex(const KBookmarkDialog* self) {
    if (auto* vkbookmarkdialog = const_cast<VirtualKBookmarkDialog*>(dynamic_cast<const VirtualKBookmarkDialog*>(self))) {
        return vkbookmarkdialog->VirtualKBookmarkDialog::senderSignalIndex();
    } else
        qFatal("Error: Protected method KBookmarkDialog::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KBookmarkDialog_Receivers(const KBookmarkDialog* self, const char* signal) {
    if (auto* vkbookmarkdialog = const_cast<VirtualKBookmarkDialog*>(dynamic_cast<const VirtualKBookmarkDialog*>(self))) {
        return vkbookmarkdialog->VirtualKBookmarkDialog::receivers(signal);
    } else
        qFatal("Error: Protected method KBookmarkDialog::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KBookmarkDialog_IsSignalConnected(const KBookmarkDialog* self, const QMetaMethod* signal) {
    if (auto* vkbookmarkdialog = const_cast<VirtualKBookmarkDialog*>(dynamic_cast<const VirtualKBookmarkDialog*>(self))) {
        return vkbookmarkdialog->VirtualKBookmarkDialog::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KBookmarkDialog::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double KBookmarkDialog_GetDecodedMetricF(const KBookmarkDialog* self, int metricA, int metricB) {
    if (auto* vkbookmarkdialog = const_cast<VirtualKBookmarkDialog*>(dynamic_cast<const VirtualKBookmarkDialog*>(self))) {
        return vkbookmarkdialog->VirtualKBookmarkDialog::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method KBookmarkDialog::getDecodedMetricF called without a directly constructed type");
}

void KBookmarkDialog_Delete(KBookmarkDialog* self) {
    delete self;
}
