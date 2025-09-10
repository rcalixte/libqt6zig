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
#include <QByteArray>
#include <cstring>
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
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKBookmarkDialog*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KBookmarkDialog_Tr(const char* s) {
    QString _ret = KBookmarkDialog::tr(s);
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
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->accept();
    }
}

libqt_string KBookmarkDialog_Tr2(const char* s, const char* c) {
    QString _ret = KBookmarkDialog::tr(s, c);
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
    QString _ret = KBookmarkDialog::tr(s, c, static_cast<int>(n));
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
int KBookmarkDialog_QBaseMetacall(KBookmarkDialog* self, int param1, int param2, void** param3) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->setKBookmarkDialog_Metacall_IsBase(true);
        return vkbookmarkdialog->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KBookmarkDialog::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkDialog_OnMetacall(KBookmarkDialog* self, intptr_t slot) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->setKBookmarkDialog_Metacall_Callback(reinterpret_cast<VirtualKBookmarkDialog::KBookmarkDialog_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
void KBookmarkDialog_QBaseAccept(KBookmarkDialog* self) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->setKBookmarkDialog_Accept_IsBase(true);
        vkbookmarkdialog->accept();
    } else {
        ((VirtualKBookmarkDialog*)self)->accept();
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkDialog_OnAccept(KBookmarkDialog* self, intptr_t slot) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->setKBookmarkDialog_Accept_Callback(reinterpret_cast<VirtualKBookmarkDialog::KBookmarkDialog_Accept_Callback>(slot));
    }
}

// Derived class handler implementation
void KBookmarkDialog_SetVisible(KBookmarkDialog* self, bool visible) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->setVisible(visible);
    } else {
        self->KBookmarkDialog::setVisible(visible);
    }
}

// Base class handler implementation
void KBookmarkDialog_QBaseSetVisible(KBookmarkDialog* self, bool visible) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->setKBookmarkDialog_SetVisible_IsBase(true);
        vkbookmarkdialog->setVisible(visible);
    } else {
        self->KBookmarkDialog::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkDialog_OnSetVisible(KBookmarkDialog* self, intptr_t slot) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->setKBookmarkDialog_SetVisible_Callback(reinterpret_cast<VirtualKBookmarkDialog::KBookmarkDialog_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KBookmarkDialog_SizeHint(const KBookmarkDialog* self) {
    auto* vkbookmarkdialog = const_cast<VirtualKBookmarkDialog*>(dynamic_cast<const VirtualKBookmarkDialog*>(self));
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        return new QSize(vkbookmarkdialog->sizeHint());
    } else {
        return new QSize(((VirtualKBookmarkDialog*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* KBookmarkDialog_QBaseSizeHint(const KBookmarkDialog* self) {
    auto* vkbookmarkdialog = const_cast<VirtualKBookmarkDialog*>(dynamic_cast<const VirtualKBookmarkDialog*>(self));
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->setKBookmarkDialog_SizeHint_IsBase(true);
        return new QSize(vkbookmarkdialog->sizeHint());
    } else {
        return new QSize(((VirtualKBookmarkDialog*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkDialog_OnSizeHint(const KBookmarkDialog* self, intptr_t slot) {
    auto* vkbookmarkdialog = const_cast<VirtualKBookmarkDialog*>(dynamic_cast<const VirtualKBookmarkDialog*>(self));
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->setKBookmarkDialog_SizeHint_Callback(reinterpret_cast<VirtualKBookmarkDialog::KBookmarkDialog_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KBookmarkDialog_MinimumSizeHint(const KBookmarkDialog* self) {
    auto* vkbookmarkdialog = const_cast<VirtualKBookmarkDialog*>(dynamic_cast<const VirtualKBookmarkDialog*>(self));
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        return new QSize(vkbookmarkdialog->minimumSizeHint());
    } else {
        return new QSize(((VirtualKBookmarkDialog*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* KBookmarkDialog_QBaseMinimumSizeHint(const KBookmarkDialog* self) {
    auto* vkbookmarkdialog = const_cast<VirtualKBookmarkDialog*>(dynamic_cast<const VirtualKBookmarkDialog*>(self));
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->setKBookmarkDialog_MinimumSizeHint_IsBase(true);
        return new QSize(vkbookmarkdialog->minimumSizeHint());
    } else {
        return new QSize(((VirtualKBookmarkDialog*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkDialog_OnMinimumSizeHint(const KBookmarkDialog* self, intptr_t slot) {
    auto* vkbookmarkdialog = const_cast<VirtualKBookmarkDialog*>(dynamic_cast<const VirtualKBookmarkDialog*>(self));
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->setKBookmarkDialog_MinimumSizeHint_Callback(reinterpret_cast<VirtualKBookmarkDialog::KBookmarkDialog_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void KBookmarkDialog_Open(KBookmarkDialog* self) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->open();
    } else {
        self->KBookmarkDialog::open();
    }
}

// Base class handler implementation
void KBookmarkDialog_QBaseOpen(KBookmarkDialog* self) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->setKBookmarkDialog_Open_IsBase(true);
        vkbookmarkdialog->open();
    } else {
        self->KBookmarkDialog::open();
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkDialog_OnOpen(KBookmarkDialog* self, intptr_t slot) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->setKBookmarkDialog_Open_Callback(reinterpret_cast<VirtualKBookmarkDialog::KBookmarkDialog_Open_Callback>(slot));
    }
}

// Derived class handler implementation
int KBookmarkDialog_Exec(KBookmarkDialog* self) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        return vkbookmarkdialog->exec();
    } else {
        return self->KBookmarkDialog::exec();
    }
}

// Base class handler implementation
int KBookmarkDialog_QBaseExec(KBookmarkDialog* self) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->setKBookmarkDialog_Exec_IsBase(true);
        return vkbookmarkdialog->exec();
    } else {
        return self->KBookmarkDialog::exec();
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkDialog_OnExec(KBookmarkDialog* self, intptr_t slot) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->setKBookmarkDialog_Exec_Callback(reinterpret_cast<VirtualKBookmarkDialog::KBookmarkDialog_Exec_Callback>(slot));
    }
}

// Derived class handler implementation
void KBookmarkDialog_Done(KBookmarkDialog* self, int param1) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->done(static_cast<int>(param1));
    } else {
        self->KBookmarkDialog::done(static_cast<int>(param1));
    }
}

// Base class handler implementation
void KBookmarkDialog_QBaseDone(KBookmarkDialog* self, int param1) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->setKBookmarkDialog_Done_IsBase(true);
        vkbookmarkdialog->done(static_cast<int>(param1));
    } else {
        self->KBookmarkDialog::done(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkDialog_OnDone(KBookmarkDialog* self, intptr_t slot) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->setKBookmarkDialog_Done_Callback(reinterpret_cast<VirtualKBookmarkDialog::KBookmarkDialog_Done_Callback>(slot));
    }
}

// Derived class handler implementation
void KBookmarkDialog_Reject(KBookmarkDialog* self) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->reject();
    } else {
        self->KBookmarkDialog::reject();
    }
}

// Base class handler implementation
void KBookmarkDialog_QBaseReject(KBookmarkDialog* self) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->setKBookmarkDialog_Reject_IsBase(true);
        vkbookmarkdialog->reject();
    } else {
        self->KBookmarkDialog::reject();
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkDialog_OnReject(KBookmarkDialog* self, intptr_t slot) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->setKBookmarkDialog_Reject_Callback(reinterpret_cast<VirtualKBookmarkDialog::KBookmarkDialog_Reject_Callback>(slot));
    }
}

// Derived class handler implementation
void KBookmarkDialog_KeyPressEvent(KBookmarkDialog* self, QKeyEvent* param1) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->keyPressEvent(param1);
    } else {
        ((VirtualKBookmarkDialog*)self)->keyPressEvent(param1);
    }
}

// Base class handler implementation
void KBookmarkDialog_QBaseKeyPressEvent(KBookmarkDialog* self, QKeyEvent* param1) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->setKBookmarkDialog_KeyPressEvent_IsBase(true);
        vkbookmarkdialog->keyPressEvent(param1);
    } else {
        ((VirtualKBookmarkDialog*)self)->keyPressEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkDialog_OnKeyPressEvent(KBookmarkDialog* self, intptr_t slot) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->setKBookmarkDialog_KeyPressEvent_Callback(reinterpret_cast<VirtualKBookmarkDialog::KBookmarkDialog_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KBookmarkDialog_CloseEvent(KBookmarkDialog* self, QCloseEvent* param1) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->closeEvent(param1);
    } else {
        ((VirtualKBookmarkDialog*)self)->closeEvent(param1);
    }
}

// Base class handler implementation
void KBookmarkDialog_QBaseCloseEvent(KBookmarkDialog* self, QCloseEvent* param1) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->setKBookmarkDialog_CloseEvent_IsBase(true);
        vkbookmarkdialog->closeEvent(param1);
    } else {
        ((VirtualKBookmarkDialog*)self)->closeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkDialog_OnCloseEvent(KBookmarkDialog* self, intptr_t slot) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->setKBookmarkDialog_CloseEvent_Callback(reinterpret_cast<VirtualKBookmarkDialog::KBookmarkDialog_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KBookmarkDialog_ShowEvent(KBookmarkDialog* self, QShowEvent* param1) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->showEvent(param1);
    } else {
        ((VirtualKBookmarkDialog*)self)->showEvent(param1);
    }
}

// Base class handler implementation
void KBookmarkDialog_QBaseShowEvent(KBookmarkDialog* self, QShowEvent* param1) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->setKBookmarkDialog_ShowEvent_IsBase(true);
        vkbookmarkdialog->showEvent(param1);
    } else {
        ((VirtualKBookmarkDialog*)self)->showEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkDialog_OnShowEvent(KBookmarkDialog* self, intptr_t slot) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->setKBookmarkDialog_ShowEvent_Callback(reinterpret_cast<VirtualKBookmarkDialog::KBookmarkDialog_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KBookmarkDialog_ResizeEvent(KBookmarkDialog* self, QResizeEvent* param1) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->resizeEvent(param1);
    } else {
        ((VirtualKBookmarkDialog*)self)->resizeEvent(param1);
    }
}

// Base class handler implementation
void KBookmarkDialog_QBaseResizeEvent(KBookmarkDialog* self, QResizeEvent* param1) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->setKBookmarkDialog_ResizeEvent_IsBase(true);
        vkbookmarkdialog->resizeEvent(param1);
    } else {
        ((VirtualKBookmarkDialog*)self)->resizeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkDialog_OnResizeEvent(KBookmarkDialog* self, intptr_t slot) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->setKBookmarkDialog_ResizeEvent_Callback(reinterpret_cast<VirtualKBookmarkDialog::KBookmarkDialog_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KBookmarkDialog_ContextMenuEvent(KBookmarkDialog* self, QContextMenuEvent* param1) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->contextMenuEvent(param1);
    } else {
        ((VirtualKBookmarkDialog*)self)->contextMenuEvent(param1);
    }
}

// Base class handler implementation
void KBookmarkDialog_QBaseContextMenuEvent(KBookmarkDialog* self, QContextMenuEvent* param1) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->setKBookmarkDialog_ContextMenuEvent_IsBase(true);
        vkbookmarkdialog->contextMenuEvent(param1);
    } else {
        ((VirtualKBookmarkDialog*)self)->contextMenuEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkDialog_OnContextMenuEvent(KBookmarkDialog* self, intptr_t slot) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->setKBookmarkDialog_ContextMenuEvent_Callback(reinterpret_cast<VirtualKBookmarkDialog::KBookmarkDialog_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KBookmarkDialog_EventFilter(KBookmarkDialog* self, QObject* param1, QEvent* param2) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        return vkbookmarkdialog->eventFilter(param1, param2);
    } else {
        return ((VirtualKBookmarkDialog*)self)->eventFilter(param1, param2);
    }
}

// Base class handler implementation
bool KBookmarkDialog_QBaseEventFilter(KBookmarkDialog* self, QObject* param1, QEvent* param2) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->setKBookmarkDialog_EventFilter_IsBase(true);
        return vkbookmarkdialog->eventFilter(param1, param2);
    } else {
        return ((VirtualKBookmarkDialog*)self)->eventFilter(param1, param2);
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkDialog_OnEventFilter(KBookmarkDialog* self, intptr_t slot) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->setKBookmarkDialog_EventFilter_Callback(reinterpret_cast<VirtualKBookmarkDialog::KBookmarkDialog_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
int KBookmarkDialog_DevType(const KBookmarkDialog* self) {
    auto* vkbookmarkdialog = const_cast<VirtualKBookmarkDialog*>(dynamic_cast<const VirtualKBookmarkDialog*>(self));
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        return vkbookmarkdialog->devType();
    } else {
        return self->KBookmarkDialog::devType();
    }
}

// Base class handler implementation
int KBookmarkDialog_QBaseDevType(const KBookmarkDialog* self) {
    auto* vkbookmarkdialog = const_cast<VirtualKBookmarkDialog*>(dynamic_cast<const VirtualKBookmarkDialog*>(self));
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->setKBookmarkDialog_DevType_IsBase(true);
        return vkbookmarkdialog->devType();
    } else {
        return self->KBookmarkDialog::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkDialog_OnDevType(const KBookmarkDialog* self, intptr_t slot) {
    auto* vkbookmarkdialog = const_cast<VirtualKBookmarkDialog*>(dynamic_cast<const VirtualKBookmarkDialog*>(self));
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->setKBookmarkDialog_DevType_Callback(reinterpret_cast<VirtualKBookmarkDialog::KBookmarkDialog_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
int KBookmarkDialog_HeightForWidth(const KBookmarkDialog* self, int param1) {
    auto* vkbookmarkdialog = const_cast<VirtualKBookmarkDialog*>(dynamic_cast<const VirtualKBookmarkDialog*>(self));
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        return vkbookmarkdialog->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KBookmarkDialog::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int KBookmarkDialog_QBaseHeightForWidth(const KBookmarkDialog* self, int param1) {
    auto* vkbookmarkdialog = const_cast<VirtualKBookmarkDialog*>(dynamic_cast<const VirtualKBookmarkDialog*>(self));
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->setKBookmarkDialog_HeightForWidth_IsBase(true);
        return vkbookmarkdialog->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KBookmarkDialog::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkDialog_OnHeightForWidth(const KBookmarkDialog* self, intptr_t slot) {
    auto* vkbookmarkdialog = const_cast<VirtualKBookmarkDialog*>(dynamic_cast<const VirtualKBookmarkDialog*>(self));
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->setKBookmarkDialog_HeightForWidth_Callback(reinterpret_cast<VirtualKBookmarkDialog::KBookmarkDialog_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool KBookmarkDialog_HasHeightForWidth(const KBookmarkDialog* self) {
    auto* vkbookmarkdialog = const_cast<VirtualKBookmarkDialog*>(dynamic_cast<const VirtualKBookmarkDialog*>(self));
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        return vkbookmarkdialog->hasHeightForWidth();
    } else {
        return self->KBookmarkDialog::hasHeightForWidth();
    }
}

// Base class handler implementation
bool KBookmarkDialog_QBaseHasHeightForWidth(const KBookmarkDialog* self) {
    auto* vkbookmarkdialog = const_cast<VirtualKBookmarkDialog*>(dynamic_cast<const VirtualKBookmarkDialog*>(self));
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->setKBookmarkDialog_HasHeightForWidth_IsBase(true);
        return vkbookmarkdialog->hasHeightForWidth();
    } else {
        return self->KBookmarkDialog::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkDialog_OnHasHeightForWidth(const KBookmarkDialog* self, intptr_t slot) {
    auto* vkbookmarkdialog = const_cast<VirtualKBookmarkDialog*>(dynamic_cast<const VirtualKBookmarkDialog*>(self));
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->setKBookmarkDialog_HasHeightForWidth_Callback(reinterpret_cast<VirtualKBookmarkDialog::KBookmarkDialog_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* KBookmarkDialog_PaintEngine(const KBookmarkDialog* self) {
    auto* vkbookmarkdialog = const_cast<VirtualKBookmarkDialog*>(dynamic_cast<const VirtualKBookmarkDialog*>(self));
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        return vkbookmarkdialog->paintEngine();
    } else {
        return self->KBookmarkDialog::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* KBookmarkDialog_QBasePaintEngine(const KBookmarkDialog* self) {
    auto* vkbookmarkdialog = const_cast<VirtualKBookmarkDialog*>(dynamic_cast<const VirtualKBookmarkDialog*>(self));
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->setKBookmarkDialog_PaintEngine_IsBase(true);
        return vkbookmarkdialog->paintEngine();
    } else {
        return self->KBookmarkDialog::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkDialog_OnPaintEngine(const KBookmarkDialog* self, intptr_t slot) {
    auto* vkbookmarkdialog = const_cast<VirtualKBookmarkDialog*>(dynamic_cast<const VirtualKBookmarkDialog*>(self));
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->setKBookmarkDialog_PaintEngine_Callback(reinterpret_cast<VirtualKBookmarkDialog::KBookmarkDialog_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
bool KBookmarkDialog_Event(KBookmarkDialog* self, QEvent* event) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        return vkbookmarkdialog->event(event);
    } else {
        return ((VirtualKBookmarkDialog*)self)->event(event);
    }
}

// Base class handler implementation
bool KBookmarkDialog_QBaseEvent(KBookmarkDialog* self, QEvent* event) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->setKBookmarkDialog_Event_IsBase(true);
        return vkbookmarkdialog->event(event);
    } else {
        return ((VirtualKBookmarkDialog*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkDialog_OnEvent(KBookmarkDialog* self, intptr_t slot) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->setKBookmarkDialog_Event_Callback(reinterpret_cast<VirtualKBookmarkDialog::KBookmarkDialog_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void KBookmarkDialog_MousePressEvent(KBookmarkDialog* self, QMouseEvent* event) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->mousePressEvent(event);
    } else {
        ((VirtualKBookmarkDialog*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void KBookmarkDialog_QBaseMousePressEvent(KBookmarkDialog* self, QMouseEvent* event) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->setKBookmarkDialog_MousePressEvent_IsBase(true);
        vkbookmarkdialog->mousePressEvent(event);
    } else {
        ((VirtualKBookmarkDialog*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkDialog_OnMousePressEvent(KBookmarkDialog* self, intptr_t slot) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->setKBookmarkDialog_MousePressEvent_Callback(reinterpret_cast<VirtualKBookmarkDialog::KBookmarkDialog_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KBookmarkDialog_MouseReleaseEvent(KBookmarkDialog* self, QMouseEvent* event) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->mouseReleaseEvent(event);
    } else {
        ((VirtualKBookmarkDialog*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void KBookmarkDialog_QBaseMouseReleaseEvent(KBookmarkDialog* self, QMouseEvent* event) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->setKBookmarkDialog_MouseReleaseEvent_IsBase(true);
        vkbookmarkdialog->mouseReleaseEvent(event);
    } else {
        ((VirtualKBookmarkDialog*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkDialog_OnMouseReleaseEvent(KBookmarkDialog* self, intptr_t slot) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->setKBookmarkDialog_MouseReleaseEvent_Callback(reinterpret_cast<VirtualKBookmarkDialog::KBookmarkDialog_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KBookmarkDialog_MouseDoubleClickEvent(KBookmarkDialog* self, QMouseEvent* event) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKBookmarkDialog*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void KBookmarkDialog_QBaseMouseDoubleClickEvent(KBookmarkDialog* self, QMouseEvent* event) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->setKBookmarkDialog_MouseDoubleClickEvent_IsBase(true);
        vkbookmarkdialog->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKBookmarkDialog*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkDialog_OnMouseDoubleClickEvent(KBookmarkDialog* self, intptr_t slot) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->setKBookmarkDialog_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualKBookmarkDialog::KBookmarkDialog_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KBookmarkDialog_MouseMoveEvent(KBookmarkDialog* self, QMouseEvent* event) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->mouseMoveEvent(event);
    } else {
        ((VirtualKBookmarkDialog*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void KBookmarkDialog_QBaseMouseMoveEvent(KBookmarkDialog* self, QMouseEvent* event) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->setKBookmarkDialog_MouseMoveEvent_IsBase(true);
        vkbookmarkdialog->mouseMoveEvent(event);
    } else {
        ((VirtualKBookmarkDialog*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkDialog_OnMouseMoveEvent(KBookmarkDialog* self, intptr_t slot) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->setKBookmarkDialog_MouseMoveEvent_Callback(reinterpret_cast<VirtualKBookmarkDialog::KBookmarkDialog_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KBookmarkDialog_WheelEvent(KBookmarkDialog* self, QWheelEvent* event) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->wheelEvent(event);
    } else {
        ((VirtualKBookmarkDialog*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void KBookmarkDialog_QBaseWheelEvent(KBookmarkDialog* self, QWheelEvent* event) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->setKBookmarkDialog_WheelEvent_IsBase(true);
        vkbookmarkdialog->wheelEvent(event);
    } else {
        ((VirtualKBookmarkDialog*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkDialog_OnWheelEvent(KBookmarkDialog* self, intptr_t slot) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->setKBookmarkDialog_WheelEvent_Callback(reinterpret_cast<VirtualKBookmarkDialog::KBookmarkDialog_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KBookmarkDialog_KeyReleaseEvent(KBookmarkDialog* self, QKeyEvent* event) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->keyReleaseEvent(event);
    } else {
        ((VirtualKBookmarkDialog*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void KBookmarkDialog_QBaseKeyReleaseEvent(KBookmarkDialog* self, QKeyEvent* event) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->setKBookmarkDialog_KeyReleaseEvent_IsBase(true);
        vkbookmarkdialog->keyReleaseEvent(event);
    } else {
        ((VirtualKBookmarkDialog*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkDialog_OnKeyReleaseEvent(KBookmarkDialog* self, intptr_t slot) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->setKBookmarkDialog_KeyReleaseEvent_Callback(reinterpret_cast<VirtualKBookmarkDialog::KBookmarkDialog_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KBookmarkDialog_FocusInEvent(KBookmarkDialog* self, QFocusEvent* event) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->focusInEvent(event);
    } else {
        ((VirtualKBookmarkDialog*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void KBookmarkDialog_QBaseFocusInEvent(KBookmarkDialog* self, QFocusEvent* event) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->setKBookmarkDialog_FocusInEvent_IsBase(true);
        vkbookmarkdialog->focusInEvent(event);
    } else {
        ((VirtualKBookmarkDialog*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkDialog_OnFocusInEvent(KBookmarkDialog* self, intptr_t slot) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->setKBookmarkDialog_FocusInEvent_Callback(reinterpret_cast<VirtualKBookmarkDialog::KBookmarkDialog_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KBookmarkDialog_FocusOutEvent(KBookmarkDialog* self, QFocusEvent* event) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->focusOutEvent(event);
    } else {
        ((VirtualKBookmarkDialog*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void KBookmarkDialog_QBaseFocusOutEvent(KBookmarkDialog* self, QFocusEvent* event) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->setKBookmarkDialog_FocusOutEvent_IsBase(true);
        vkbookmarkdialog->focusOutEvent(event);
    } else {
        ((VirtualKBookmarkDialog*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkDialog_OnFocusOutEvent(KBookmarkDialog* self, intptr_t slot) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->setKBookmarkDialog_FocusOutEvent_Callback(reinterpret_cast<VirtualKBookmarkDialog::KBookmarkDialog_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KBookmarkDialog_EnterEvent(KBookmarkDialog* self, QEnterEvent* event) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->enterEvent(event);
    } else {
        ((VirtualKBookmarkDialog*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void KBookmarkDialog_QBaseEnterEvent(KBookmarkDialog* self, QEnterEvent* event) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->setKBookmarkDialog_EnterEvent_IsBase(true);
        vkbookmarkdialog->enterEvent(event);
    } else {
        ((VirtualKBookmarkDialog*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkDialog_OnEnterEvent(KBookmarkDialog* self, intptr_t slot) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->setKBookmarkDialog_EnterEvent_Callback(reinterpret_cast<VirtualKBookmarkDialog::KBookmarkDialog_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KBookmarkDialog_LeaveEvent(KBookmarkDialog* self, QEvent* event) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->leaveEvent(event);
    } else {
        ((VirtualKBookmarkDialog*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void KBookmarkDialog_QBaseLeaveEvent(KBookmarkDialog* self, QEvent* event) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->setKBookmarkDialog_LeaveEvent_IsBase(true);
        vkbookmarkdialog->leaveEvent(event);
    } else {
        ((VirtualKBookmarkDialog*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkDialog_OnLeaveEvent(KBookmarkDialog* self, intptr_t slot) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->setKBookmarkDialog_LeaveEvent_Callback(reinterpret_cast<VirtualKBookmarkDialog::KBookmarkDialog_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KBookmarkDialog_PaintEvent(KBookmarkDialog* self, QPaintEvent* event) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->paintEvent(event);
    } else {
        ((VirtualKBookmarkDialog*)self)->paintEvent(event);
    }
}

// Base class handler implementation
void KBookmarkDialog_QBasePaintEvent(KBookmarkDialog* self, QPaintEvent* event) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->setKBookmarkDialog_PaintEvent_IsBase(true);
        vkbookmarkdialog->paintEvent(event);
    } else {
        ((VirtualKBookmarkDialog*)self)->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkDialog_OnPaintEvent(KBookmarkDialog* self, intptr_t slot) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->setKBookmarkDialog_PaintEvent_Callback(reinterpret_cast<VirtualKBookmarkDialog::KBookmarkDialog_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KBookmarkDialog_MoveEvent(KBookmarkDialog* self, QMoveEvent* event) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->moveEvent(event);
    } else {
        ((VirtualKBookmarkDialog*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void KBookmarkDialog_QBaseMoveEvent(KBookmarkDialog* self, QMoveEvent* event) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->setKBookmarkDialog_MoveEvent_IsBase(true);
        vkbookmarkdialog->moveEvent(event);
    } else {
        ((VirtualKBookmarkDialog*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkDialog_OnMoveEvent(KBookmarkDialog* self, intptr_t slot) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->setKBookmarkDialog_MoveEvent_Callback(reinterpret_cast<VirtualKBookmarkDialog::KBookmarkDialog_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KBookmarkDialog_TabletEvent(KBookmarkDialog* self, QTabletEvent* event) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->tabletEvent(event);
    } else {
        ((VirtualKBookmarkDialog*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void KBookmarkDialog_QBaseTabletEvent(KBookmarkDialog* self, QTabletEvent* event) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->setKBookmarkDialog_TabletEvent_IsBase(true);
        vkbookmarkdialog->tabletEvent(event);
    } else {
        ((VirtualKBookmarkDialog*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkDialog_OnTabletEvent(KBookmarkDialog* self, intptr_t slot) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->setKBookmarkDialog_TabletEvent_Callback(reinterpret_cast<VirtualKBookmarkDialog::KBookmarkDialog_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KBookmarkDialog_ActionEvent(KBookmarkDialog* self, QActionEvent* event) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->actionEvent(event);
    } else {
        ((VirtualKBookmarkDialog*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void KBookmarkDialog_QBaseActionEvent(KBookmarkDialog* self, QActionEvent* event) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->setKBookmarkDialog_ActionEvent_IsBase(true);
        vkbookmarkdialog->actionEvent(event);
    } else {
        ((VirtualKBookmarkDialog*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkDialog_OnActionEvent(KBookmarkDialog* self, intptr_t slot) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->setKBookmarkDialog_ActionEvent_Callback(reinterpret_cast<VirtualKBookmarkDialog::KBookmarkDialog_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KBookmarkDialog_DragEnterEvent(KBookmarkDialog* self, QDragEnterEvent* event) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->dragEnterEvent(event);
    } else {
        ((VirtualKBookmarkDialog*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void KBookmarkDialog_QBaseDragEnterEvent(KBookmarkDialog* self, QDragEnterEvent* event) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->setKBookmarkDialog_DragEnterEvent_IsBase(true);
        vkbookmarkdialog->dragEnterEvent(event);
    } else {
        ((VirtualKBookmarkDialog*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkDialog_OnDragEnterEvent(KBookmarkDialog* self, intptr_t slot) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->setKBookmarkDialog_DragEnterEvent_Callback(reinterpret_cast<VirtualKBookmarkDialog::KBookmarkDialog_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KBookmarkDialog_DragMoveEvent(KBookmarkDialog* self, QDragMoveEvent* event) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->dragMoveEvent(event);
    } else {
        ((VirtualKBookmarkDialog*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void KBookmarkDialog_QBaseDragMoveEvent(KBookmarkDialog* self, QDragMoveEvent* event) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->setKBookmarkDialog_DragMoveEvent_IsBase(true);
        vkbookmarkdialog->dragMoveEvent(event);
    } else {
        ((VirtualKBookmarkDialog*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkDialog_OnDragMoveEvent(KBookmarkDialog* self, intptr_t slot) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->setKBookmarkDialog_DragMoveEvent_Callback(reinterpret_cast<VirtualKBookmarkDialog::KBookmarkDialog_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KBookmarkDialog_DragLeaveEvent(KBookmarkDialog* self, QDragLeaveEvent* event) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->dragLeaveEvent(event);
    } else {
        ((VirtualKBookmarkDialog*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void KBookmarkDialog_QBaseDragLeaveEvent(KBookmarkDialog* self, QDragLeaveEvent* event) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->setKBookmarkDialog_DragLeaveEvent_IsBase(true);
        vkbookmarkdialog->dragLeaveEvent(event);
    } else {
        ((VirtualKBookmarkDialog*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkDialog_OnDragLeaveEvent(KBookmarkDialog* self, intptr_t slot) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->setKBookmarkDialog_DragLeaveEvent_Callback(reinterpret_cast<VirtualKBookmarkDialog::KBookmarkDialog_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KBookmarkDialog_DropEvent(KBookmarkDialog* self, QDropEvent* event) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->dropEvent(event);
    } else {
        ((VirtualKBookmarkDialog*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void KBookmarkDialog_QBaseDropEvent(KBookmarkDialog* self, QDropEvent* event) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->setKBookmarkDialog_DropEvent_IsBase(true);
        vkbookmarkdialog->dropEvent(event);
    } else {
        ((VirtualKBookmarkDialog*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkDialog_OnDropEvent(KBookmarkDialog* self, intptr_t slot) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->setKBookmarkDialog_DropEvent_Callback(reinterpret_cast<VirtualKBookmarkDialog::KBookmarkDialog_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KBookmarkDialog_HideEvent(KBookmarkDialog* self, QHideEvent* event) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->hideEvent(event);
    } else {
        ((VirtualKBookmarkDialog*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void KBookmarkDialog_QBaseHideEvent(KBookmarkDialog* self, QHideEvent* event) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->setKBookmarkDialog_HideEvent_IsBase(true);
        vkbookmarkdialog->hideEvent(event);
    } else {
        ((VirtualKBookmarkDialog*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkDialog_OnHideEvent(KBookmarkDialog* self, intptr_t slot) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->setKBookmarkDialog_HideEvent_Callback(reinterpret_cast<VirtualKBookmarkDialog::KBookmarkDialog_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KBookmarkDialog_NativeEvent(KBookmarkDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        return vkbookmarkdialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKBookmarkDialog*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool KBookmarkDialog_QBaseNativeEvent(KBookmarkDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->setKBookmarkDialog_NativeEvent_IsBase(true);
        return vkbookmarkdialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKBookmarkDialog*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkDialog_OnNativeEvent(KBookmarkDialog* self, intptr_t slot) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->setKBookmarkDialog_NativeEvent_Callback(reinterpret_cast<VirtualKBookmarkDialog::KBookmarkDialog_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KBookmarkDialog_ChangeEvent(KBookmarkDialog* self, QEvent* param1) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->changeEvent(param1);
    } else {
        ((VirtualKBookmarkDialog*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void KBookmarkDialog_QBaseChangeEvent(KBookmarkDialog* self, QEvent* param1) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->setKBookmarkDialog_ChangeEvent_IsBase(true);
        vkbookmarkdialog->changeEvent(param1);
    } else {
        ((VirtualKBookmarkDialog*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkDialog_OnChangeEvent(KBookmarkDialog* self, intptr_t slot) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->setKBookmarkDialog_ChangeEvent_Callback(reinterpret_cast<VirtualKBookmarkDialog::KBookmarkDialog_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int KBookmarkDialog_Metric(const KBookmarkDialog* self, int param1) {
    auto* vkbookmarkdialog = const_cast<VirtualKBookmarkDialog*>(dynamic_cast<const VirtualKBookmarkDialog*>(self));
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        return vkbookmarkdialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKBookmarkDialog*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int KBookmarkDialog_QBaseMetric(const KBookmarkDialog* self, int param1) {
    auto* vkbookmarkdialog = const_cast<VirtualKBookmarkDialog*>(dynamic_cast<const VirtualKBookmarkDialog*>(self));
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->setKBookmarkDialog_Metric_IsBase(true);
        return vkbookmarkdialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKBookmarkDialog*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkDialog_OnMetric(const KBookmarkDialog* self, intptr_t slot) {
    auto* vkbookmarkdialog = const_cast<VirtualKBookmarkDialog*>(dynamic_cast<const VirtualKBookmarkDialog*>(self));
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->setKBookmarkDialog_Metric_Callback(reinterpret_cast<VirtualKBookmarkDialog::KBookmarkDialog_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void KBookmarkDialog_InitPainter(const KBookmarkDialog* self, QPainter* painter) {
    auto* vkbookmarkdialog = const_cast<VirtualKBookmarkDialog*>(dynamic_cast<const VirtualKBookmarkDialog*>(self));
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->initPainter(painter);
    } else {
        ((VirtualKBookmarkDialog*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void KBookmarkDialog_QBaseInitPainter(const KBookmarkDialog* self, QPainter* painter) {
    auto* vkbookmarkdialog = const_cast<VirtualKBookmarkDialog*>(dynamic_cast<const VirtualKBookmarkDialog*>(self));
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->setKBookmarkDialog_InitPainter_IsBase(true);
        vkbookmarkdialog->initPainter(painter);
    } else {
        ((VirtualKBookmarkDialog*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkDialog_OnInitPainter(const KBookmarkDialog* self, intptr_t slot) {
    auto* vkbookmarkdialog = const_cast<VirtualKBookmarkDialog*>(dynamic_cast<const VirtualKBookmarkDialog*>(self));
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->setKBookmarkDialog_InitPainter_Callback(reinterpret_cast<VirtualKBookmarkDialog::KBookmarkDialog_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* KBookmarkDialog_Redirected(const KBookmarkDialog* self, QPoint* offset) {
    auto* vkbookmarkdialog = const_cast<VirtualKBookmarkDialog*>(dynamic_cast<const VirtualKBookmarkDialog*>(self));
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        return vkbookmarkdialog->redirected(offset);
    } else {
        return ((VirtualKBookmarkDialog*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* KBookmarkDialog_QBaseRedirected(const KBookmarkDialog* self, QPoint* offset) {
    auto* vkbookmarkdialog = const_cast<VirtualKBookmarkDialog*>(dynamic_cast<const VirtualKBookmarkDialog*>(self));
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->setKBookmarkDialog_Redirected_IsBase(true);
        return vkbookmarkdialog->redirected(offset);
    } else {
        return ((VirtualKBookmarkDialog*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkDialog_OnRedirected(const KBookmarkDialog* self, intptr_t slot) {
    auto* vkbookmarkdialog = const_cast<VirtualKBookmarkDialog*>(dynamic_cast<const VirtualKBookmarkDialog*>(self));
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->setKBookmarkDialog_Redirected_Callback(reinterpret_cast<VirtualKBookmarkDialog::KBookmarkDialog_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* KBookmarkDialog_SharedPainter(const KBookmarkDialog* self) {
    auto* vkbookmarkdialog = const_cast<VirtualKBookmarkDialog*>(dynamic_cast<const VirtualKBookmarkDialog*>(self));
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        return vkbookmarkdialog->sharedPainter();
    } else {
        return ((VirtualKBookmarkDialog*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* KBookmarkDialog_QBaseSharedPainter(const KBookmarkDialog* self) {
    auto* vkbookmarkdialog = const_cast<VirtualKBookmarkDialog*>(dynamic_cast<const VirtualKBookmarkDialog*>(self));
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->setKBookmarkDialog_SharedPainter_IsBase(true);
        return vkbookmarkdialog->sharedPainter();
    } else {
        return ((VirtualKBookmarkDialog*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkDialog_OnSharedPainter(const KBookmarkDialog* self, intptr_t slot) {
    auto* vkbookmarkdialog = const_cast<VirtualKBookmarkDialog*>(dynamic_cast<const VirtualKBookmarkDialog*>(self));
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->setKBookmarkDialog_SharedPainter_Callback(reinterpret_cast<VirtualKBookmarkDialog::KBookmarkDialog_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void KBookmarkDialog_InputMethodEvent(KBookmarkDialog* self, QInputMethodEvent* param1) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->inputMethodEvent(param1);
    } else {
        ((VirtualKBookmarkDialog*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void KBookmarkDialog_QBaseInputMethodEvent(KBookmarkDialog* self, QInputMethodEvent* param1) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->setKBookmarkDialog_InputMethodEvent_IsBase(true);
        vkbookmarkdialog->inputMethodEvent(param1);
    } else {
        ((VirtualKBookmarkDialog*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkDialog_OnInputMethodEvent(KBookmarkDialog* self, intptr_t slot) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->setKBookmarkDialog_InputMethodEvent_Callback(reinterpret_cast<VirtualKBookmarkDialog::KBookmarkDialog_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* KBookmarkDialog_InputMethodQuery(const KBookmarkDialog* self, int param1) {
    auto* vkbookmarkdialog = const_cast<VirtualKBookmarkDialog*>(dynamic_cast<const VirtualKBookmarkDialog*>(self));
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        return new QVariant(vkbookmarkdialog->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKBookmarkDialog*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* KBookmarkDialog_QBaseInputMethodQuery(const KBookmarkDialog* self, int param1) {
    auto* vkbookmarkdialog = const_cast<VirtualKBookmarkDialog*>(dynamic_cast<const VirtualKBookmarkDialog*>(self));
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->setKBookmarkDialog_InputMethodQuery_IsBase(true);
        return new QVariant(vkbookmarkdialog->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKBookmarkDialog*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkDialog_OnInputMethodQuery(const KBookmarkDialog* self, intptr_t slot) {
    auto* vkbookmarkdialog = const_cast<VirtualKBookmarkDialog*>(dynamic_cast<const VirtualKBookmarkDialog*>(self));
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->setKBookmarkDialog_InputMethodQuery_Callback(reinterpret_cast<VirtualKBookmarkDialog::KBookmarkDialog_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool KBookmarkDialog_FocusNextPrevChild(KBookmarkDialog* self, bool next) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        return vkbookmarkdialog->focusNextPrevChild(next);
    } else {
        return ((VirtualKBookmarkDialog*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool KBookmarkDialog_QBaseFocusNextPrevChild(KBookmarkDialog* self, bool next) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->setKBookmarkDialog_FocusNextPrevChild_IsBase(true);
        return vkbookmarkdialog->focusNextPrevChild(next);
    } else {
        return ((VirtualKBookmarkDialog*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkDialog_OnFocusNextPrevChild(KBookmarkDialog* self, intptr_t slot) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->setKBookmarkDialog_FocusNextPrevChild_Callback(reinterpret_cast<VirtualKBookmarkDialog::KBookmarkDialog_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
void KBookmarkDialog_TimerEvent(KBookmarkDialog* self, QTimerEvent* event) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->timerEvent(event);
    } else {
        ((VirtualKBookmarkDialog*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KBookmarkDialog_QBaseTimerEvent(KBookmarkDialog* self, QTimerEvent* event) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->setKBookmarkDialog_TimerEvent_IsBase(true);
        vkbookmarkdialog->timerEvent(event);
    } else {
        ((VirtualKBookmarkDialog*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkDialog_OnTimerEvent(KBookmarkDialog* self, intptr_t slot) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->setKBookmarkDialog_TimerEvent_Callback(reinterpret_cast<VirtualKBookmarkDialog::KBookmarkDialog_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KBookmarkDialog_ChildEvent(KBookmarkDialog* self, QChildEvent* event) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->childEvent(event);
    } else {
        ((VirtualKBookmarkDialog*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KBookmarkDialog_QBaseChildEvent(KBookmarkDialog* self, QChildEvent* event) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->setKBookmarkDialog_ChildEvent_IsBase(true);
        vkbookmarkdialog->childEvent(event);
    } else {
        ((VirtualKBookmarkDialog*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkDialog_OnChildEvent(KBookmarkDialog* self, intptr_t slot) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->setKBookmarkDialog_ChildEvent_Callback(reinterpret_cast<VirtualKBookmarkDialog::KBookmarkDialog_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KBookmarkDialog_CustomEvent(KBookmarkDialog* self, QEvent* event) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->customEvent(event);
    } else {
        ((VirtualKBookmarkDialog*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KBookmarkDialog_QBaseCustomEvent(KBookmarkDialog* self, QEvent* event) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->setKBookmarkDialog_CustomEvent_IsBase(true);
        vkbookmarkdialog->customEvent(event);
    } else {
        ((VirtualKBookmarkDialog*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkDialog_OnCustomEvent(KBookmarkDialog* self, intptr_t slot) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->setKBookmarkDialog_CustomEvent_Callback(reinterpret_cast<VirtualKBookmarkDialog::KBookmarkDialog_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KBookmarkDialog_ConnectNotify(KBookmarkDialog* self, const QMetaMethod* signal) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->connectNotify(*signal);
    } else {
        ((VirtualKBookmarkDialog*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KBookmarkDialog_QBaseConnectNotify(KBookmarkDialog* self, const QMetaMethod* signal) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->setKBookmarkDialog_ConnectNotify_IsBase(true);
        vkbookmarkdialog->connectNotify(*signal);
    } else {
        ((VirtualKBookmarkDialog*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkDialog_OnConnectNotify(KBookmarkDialog* self, intptr_t slot) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->setKBookmarkDialog_ConnectNotify_Callback(reinterpret_cast<VirtualKBookmarkDialog::KBookmarkDialog_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KBookmarkDialog_DisconnectNotify(KBookmarkDialog* self, const QMetaMethod* signal) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->disconnectNotify(*signal);
    } else {
        ((VirtualKBookmarkDialog*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KBookmarkDialog_QBaseDisconnectNotify(KBookmarkDialog* self, const QMetaMethod* signal) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->setKBookmarkDialog_DisconnectNotify_IsBase(true);
        vkbookmarkdialog->disconnectNotify(*signal);
    } else {
        ((VirtualKBookmarkDialog*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkDialog_OnDisconnectNotify(KBookmarkDialog* self, intptr_t slot) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->setKBookmarkDialog_DisconnectNotify_Callback(reinterpret_cast<VirtualKBookmarkDialog::KBookmarkDialog_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KBookmarkDialog_NewFolderButton(KBookmarkDialog* self) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->newFolderButton();
    } else {
        ((VirtualKBookmarkDialog*)self)->newFolderButton();
    }
}

// Base class handler implementation
void KBookmarkDialog_QBaseNewFolderButton(KBookmarkDialog* self) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->setKBookmarkDialog_NewFolderButton_IsBase(true);
        vkbookmarkdialog->newFolderButton();
    } else {
        ((VirtualKBookmarkDialog*)self)->newFolderButton();
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkDialog_OnNewFolderButton(KBookmarkDialog* self, intptr_t slot) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->setKBookmarkDialog_NewFolderButton_Callback(reinterpret_cast<VirtualKBookmarkDialog::KBookmarkDialog_NewFolderButton_Callback>(slot));
    }
}

// Derived class handler implementation
void KBookmarkDialog_AdjustPosition(KBookmarkDialog* self, QWidget* param1) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->adjustPosition(param1);
    } else {
        ((VirtualKBookmarkDialog*)self)->adjustPosition(param1);
    }
}

// Base class handler implementation
void KBookmarkDialog_QBaseAdjustPosition(KBookmarkDialog* self, QWidget* param1) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->setKBookmarkDialog_AdjustPosition_IsBase(true);
        vkbookmarkdialog->adjustPosition(param1);
    } else {
        ((VirtualKBookmarkDialog*)self)->adjustPosition(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkDialog_OnAdjustPosition(KBookmarkDialog* self, intptr_t slot) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->setKBookmarkDialog_AdjustPosition_Callback(reinterpret_cast<VirtualKBookmarkDialog::KBookmarkDialog_AdjustPosition_Callback>(slot));
    }
}

// Derived class handler implementation
void KBookmarkDialog_UpdateMicroFocus(KBookmarkDialog* self) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->updateMicroFocus();
    } else {
        ((VirtualKBookmarkDialog*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void KBookmarkDialog_QBaseUpdateMicroFocus(KBookmarkDialog* self) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->setKBookmarkDialog_UpdateMicroFocus_IsBase(true);
        vkbookmarkdialog->updateMicroFocus();
    } else {
        ((VirtualKBookmarkDialog*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkDialog_OnUpdateMicroFocus(KBookmarkDialog* self, intptr_t slot) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->setKBookmarkDialog_UpdateMicroFocus_Callback(reinterpret_cast<VirtualKBookmarkDialog::KBookmarkDialog_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void KBookmarkDialog_Create(KBookmarkDialog* self) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->create();
    } else {
        ((VirtualKBookmarkDialog*)self)->create();
    }
}

// Base class handler implementation
void KBookmarkDialog_QBaseCreate(KBookmarkDialog* self) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->setKBookmarkDialog_Create_IsBase(true);
        vkbookmarkdialog->create();
    } else {
        ((VirtualKBookmarkDialog*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkDialog_OnCreate(KBookmarkDialog* self, intptr_t slot) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->setKBookmarkDialog_Create_Callback(reinterpret_cast<VirtualKBookmarkDialog::KBookmarkDialog_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void KBookmarkDialog_Destroy(KBookmarkDialog* self) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->destroy();
    } else {
        ((VirtualKBookmarkDialog*)self)->destroy();
    }
}

// Base class handler implementation
void KBookmarkDialog_QBaseDestroy(KBookmarkDialog* self) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->setKBookmarkDialog_Destroy_IsBase(true);
        vkbookmarkdialog->destroy();
    } else {
        ((VirtualKBookmarkDialog*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkDialog_OnDestroy(KBookmarkDialog* self, intptr_t slot) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->setKBookmarkDialog_Destroy_Callback(reinterpret_cast<VirtualKBookmarkDialog::KBookmarkDialog_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool KBookmarkDialog_FocusNextChild(KBookmarkDialog* self) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        return vkbookmarkdialog->focusNextChild();
    } else {
        return ((VirtualKBookmarkDialog*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool KBookmarkDialog_QBaseFocusNextChild(KBookmarkDialog* self) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->setKBookmarkDialog_FocusNextChild_IsBase(true);
        return vkbookmarkdialog->focusNextChild();
    } else {
        return ((VirtualKBookmarkDialog*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkDialog_OnFocusNextChild(KBookmarkDialog* self, intptr_t slot) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->setKBookmarkDialog_FocusNextChild_Callback(reinterpret_cast<VirtualKBookmarkDialog::KBookmarkDialog_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KBookmarkDialog_FocusPreviousChild(KBookmarkDialog* self) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        return vkbookmarkdialog->focusPreviousChild();
    } else {
        return ((VirtualKBookmarkDialog*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool KBookmarkDialog_QBaseFocusPreviousChild(KBookmarkDialog* self) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->setKBookmarkDialog_FocusPreviousChild_IsBase(true);
        return vkbookmarkdialog->focusPreviousChild();
    } else {
        return ((VirtualKBookmarkDialog*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkDialog_OnFocusPreviousChild(KBookmarkDialog* self, intptr_t slot) {
    auto* vkbookmarkdialog = dynamic_cast<VirtualKBookmarkDialog*>(self);
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->setKBookmarkDialog_FocusPreviousChild_Callback(reinterpret_cast<VirtualKBookmarkDialog::KBookmarkDialog_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KBookmarkDialog_Sender(const KBookmarkDialog* self) {
    auto* vkbookmarkdialog = const_cast<VirtualKBookmarkDialog*>(dynamic_cast<const VirtualKBookmarkDialog*>(self));
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        return vkbookmarkdialog->sender();
    } else {
        return ((VirtualKBookmarkDialog*)self)->sender();
    }
}

// Base class handler implementation
QObject* KBookmarkDialog_QBaseSender(const KBookmarkDialog* self) {
    auto* vkbookmarkdialog = const_cast<VirtualKBookmarkDialog*>(dynamic_cast<const VirtualKBookmarkDialog*>(self));
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->setKBookmarkDialog_Sender_IsBase(true);
        return vkbookmarkdialog->sender();
    } else {
        return ((VirtualKBookmarkDialog*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkDialog_OnSender(const KBookmarkDialog* self, intptr_t slot) {
    auto* vkbookmarkdialog = const_cast<VirtualKBookmarkDialog*>(dynamic_cast<const VirtualKBookmarkDialog*>(self));
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->setKBookmarkDialog_Sender_Callback(reinterpret_cast<VirtualKBookmarkDialog::KBookmarkDialog_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KBookmarkDialog_SenderSignalIndex(const KBookmarkDialog* self) {
    auto* vkbookmarkdialog = const_cast<VirtualKBookmarkDialog*>(dynamic_cast<const VirtualKBookmarkDialog*>(self));
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        return vkbookmarkdialog->senderSignalIndex();
    } else {
        return ((VirtualKBookmarkDialog*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KBookmarkDialog_QBaseSenderSignalIndex(const KBookmarkDialog* self) {
    auto* vkbookmarkdialog = const_cast<VirtualKBookmarkDialog*>(dynamic_cast<const VirtualKBookmarkDialog*>(self));
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->setKBookmarkDialog_SenderSignalIndex_IsBase(true);
        return vkbookmarkdialog->senderSignalIndex();
    } else {
        return ((VirtualKBookmarkDialog*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkDialog_OnSenderSignalIndex(const KBookmarkDialog* self, intptr_t slot) {
    auto* vkbookmarkdialog = const_cast<VirtualKBookmarkDialog*>(dynamic_cast<const VirtualKBookmarkDialog*>(self));
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->setKBookmarkDialog_SenderSignalIndex_Callback(reinterpret_cast<VirtualKBookmarkDialog::KBookmarkDialog_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KBookmarkDialog_Receivers(const KBookmarkDialog* self, const char* signal) {
    auto* vkbookmarkdialog = const_cast<VirtualKBookmarkDialog*>(dynamic_cast<const VirtualKBookmarkDialog*>(self));
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        return vkbookmarkdialog->receivers(signal);
    } else {
        return ((VirtualKBookmarkDialog*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KBookmarkDialog_QBaseReceivers(const KBookmarkDialog* self, const char* signal) {
    auto* vkbookmarkdialog = const_cast<VirtualKBookmarkDialog*>(dynamic_cast<const VirtualKBookmarkDialog*>(self));
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->setKBookmarkDialog_Receivers_IsBase(true);
        return vkbookmarkdialog->receivers(signal);
    } else {
        return ((VirtualKBookmarkDialog*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkDialog_OnReceivers(const KBookmarkDialog* self, intptr_t slot) {
    auto* vkbookmarkdialog = const_cast<VirtualKBookmarkDialog*>(dynamic_cast<const VirtualKBookmarkDialog*>(self));
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->setKBookmarkDialog_Receivers_Callback(reinterpret_cast<VirtualKBookmarkDialog::KBookmarkDialog_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KBookmarkDialog_IsSignalConnected(const KBookmarkDialog* self, const QMetaMethod* signal) {
    auto* vkbookmarkdialog = const_cast<VirtualKBookmarkDialog*>(dynamic_cast<const VirtualKBookmarkDialog*>(self));
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        return vkbookmarkdialog->isSignalConnected(*signal);
    } else {
        return ((VirtualKBookmarkDialog*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KBookmarkDialog_QBaseIsSignalConnected(const KBookmarkDialog* self, const QMetaMethod* signal) {
    auto* vkbookmarkdialog = const_cast<VirtualKBookmarkDialog*>(dynamic_cast<const VirtualKBookmarkDialog*>(self));
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->setKBookmarkDialog_IsSignalConnected_IsBase(true);
        return vkbookmarkdialog->isSignalConnected(*signal);
    } else {
        return ((VirtualKBookmarkDialog*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkDialog_OnIsSignalConnected(const KBookmarkDialog* self, intptr_t slot) {
    auto* vkbookmarkdialog = const_cast<VirtualKBookmarkDialog*>(dynamic_cast<const VirtualKBookmarkDialog*>(self));
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->setKBookmarkDialog_IsSignalConnected_Callback(reinterpret_cast<VirtualKBookmarkDialog::KBookmarkDialog_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double KBookmarkDialog_GetDecodedMetricF(const KBookmarkDialog* self, int metricA, int metricB) {
    auto* vkbookmarkdialog = const_cast<VirtualKBookmarkDialog*>(dynamic_cast<const VirtualKBookmarkDialog*>(self));
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        return vkbookmarkdialog->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKBookmarkDialog*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double KBookmarkDialog_QBaseGetDecodedMetricF(const KBookmarkDialog* self, int metricA, int metricB) {
    auto* vkbookmarkdialog = const_cast<VirtualKBookmarkDialog*>(dynamic_cast<const VirtualKBookmarkDialog*>(self));
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->setKBookmarkDialog_GetDecodedMetricF_IsBase(true);
        return vkbookmarkdialog->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKBookmarkDialog*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void KBookmarkDialog_OnGetDecodedMetricF(const KBookmarkDialog* self, intptr_t slot) {
    auto* vkbookmarkdialog = const_cast<VirtualKBookmarkDialog*>(dynamic_cast<const VirtualKBookmarkDialog*>(self));
    if (vkbookmarkdialog && vkbookmarkdialog->isVirtualKBookmarkDialog) {
        vkbookmarkdialog->setKBookmarkDialog_GetDecodedMetricF_Callback(reinterpret_cast<VirtualKBookmarkDialog::KBookmarkDialog_GetDecodedMetricF_Callback>(slot));
    }
}

void KBookmarkDialog_Delete(KBookmarkDialog* self) {
    delete self;
}
