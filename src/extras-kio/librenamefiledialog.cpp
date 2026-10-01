#define WORKAROUND_INNER_CLASS_DEFINITION_KIO__RenameFileDialog
#include <KJob>
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
#include <renamefiledialog.h>
#include "librenamefiledialog.h"
#include "librenamefiledialog.hxx"

KIO__RenameFileDialog* KIO__RenameFileDialog_new(const KFileItemList* items, QWidget* parent) {
    return new VirtualKIORenameFileDialog(*items, parent);
}

QMetaObject* KIO__RenameFileDialog_MetaObject(const KIO__RenameFileDialog* self) {
    return (QMetaObject*)self->metaObject();
}

void* KIO__RenameFileDialog_Metacast(KIO__RenameFileDialog* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KIO__RenameFileDialog_Metacall(KIO__RenameFileDialog* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KIO__RenameFileDialog_Tr(const char* s) {
    auto _ret = KIO::RenameFileDialog::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KIO__RenameFileDialog_RenamingFinished(KIO__RenameFileDialog* self, const libqt_list /* of QUrl* */ urls) {
    QList<QUrl> urls_QList;
    urls_QList.reserve(urls.len);
    QUrl** urls_arr = static_cast<QUrl**>(urls.data);
    for (size_t i = 0; i < urls.len; ++i) {
        urls_QList.push_back(*(urls_arr[i]));
    }
    self->renamingFinished(urls_QList);
}

void KIO__RenameFileDialog_Connect_RenamingFinished(KIO__RenameFileDialog* self, intptr_t slot) {
    void (*slotFunc)(KIO__RenameFileDialog*, libqt_list /* of QUrl* */) = reinterpret_cast<void (*)(KIO__RenameFileDialog*, libqt_list /* of QUrl* */)>(slot);
    KIO::RenameFileDialog::connect(self,
                                   static_cast<void (KIO::RenameFileDialog::*)(const QList<QUrl>&)>(&KIO::RenameFileDialog::renamingFinished),
                                   [self, slotFunc](const QList<QUrl>& urls) {
                                       const QList<QUrl>& urls_ret = urls;
                                       // Convert QList<> from C++ memory to manually-managed C memory
                                       QUrl** urls_arr = static_cast<QUrl**>(malloc(sizeof(QUrl*) * (urls_ret.size())));
                                       for (qsizetype i = 0; i < urls_ret.size(); ++i) {
                                           urls_arr[i] = new QUrl(urls_ret[i]);
                                       }
                                       libqt_list urls_out;
                                       urls_out.len = urls_ret.size();
                                       urls_out.data = static_cast<void*>(urls_arr);
                                       libqt_list /* of QUrl* */ sigval1 = urls_out;
                                       slotFunc(self, sigval1);
                                       free(urls_arr);
                                   });
}

void KIO__RenameFileDialog_Error(KIO__RenameFileDialog* self, KJob* errorVal) {
    self->error(errorVal);
}

void KIO__RenameFileDialog_Connect_Error(KIO__RenameFileDialog* self, intptr_t slot) {
    void (*slotFunc)(KIO__RenameFileDialog*, KJob*) = reinterpret_cast<void (*)(KIO__RenameFileDialog*, KJob*)>(slot);
    KIO::RenameFileDialog::connect(self,
                                   static_cast<void (KIO::RenameFileDialog::*)(KJob*)>(&KIO::RenameFileDialog::error),
                                   [self, slotFunc](KJob* errorVal) {
                                       KJob* sigval1 = errorVal;
                                       slotFunc(self, sigval1);
                                   });
}

libqt_string KIO__RenameFileDialog_Tr2(const char* s, const char* c) {
    auto _ret = KIO::RenameFileDialog::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KIO__RenameFileDialog_Tr3(const char* s, const char* c, int n) {
    auto _ret = KIO::RenameFileDialog::tr(s, c, static_cast<int>(n));
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
QMetaObject* KIO__RenameFileDialog_SuperMetaObject(const KIO__RenameFileDialog* self) {
    return (QMetaObject*)self->KIO::RenameFileDialog::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameFileDialog_OnMetaObject(KIO__RenameFileDialog* self, intptr_t slot) {
    if (auto* vkiorenamefiledialog = const_cast<VirtualKIORenameFileDialog*>(dynamic_cast<const VirtualKIORenameFileDialog*>(self)))
        vkiorenamefiledialog->kio__renamefiledialog_metaobject_callback = reinterpret_cast<VirtualKIORenameFileDialog::KIO__RenameFileDialog_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KIO__RenameFileDialog_SuperMetacast(KIO__RenameFileDialog* self, const char* param1) {
    return self->KIO::RenameFileDialog::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameFileDialog_OnMetacast(KIO__RenameFileDialog* self, intptr_t slot) {
    if (auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self))
        vkiorenamefiledialog->kio__renamefiledialog_metacast_callback = reinterpret_cast<VirtualKIORenameFileDialog::KIO__RenameFileDialog_Metacast_Callback>(slot);
}

// Base class handler implementation
int KIO__RenameFileDialog_SuperMetacall(KIO__RenameFileDialog* self, int param1, int param2, void** param3) {
    return self->KIO::RenameFileDialog::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameFileDialog_OnMetacall(KIO__RenameFileDialog* self, intptr_t slot) {
    if (auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self))
        vkiorenamefiledialog->kio__renamefiledialog_metacall_callback = reinterpret_cast<VirtualKIORenameFileDialog::KIO__RenameFileDialog_Metacall_Callback>(slot);
}

// Derived class handler implementation
void KIO__RenameFileDialog_SetVisible(KIO__RenameFileDialog* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void KIO__RenameFileDialog_SuperSetVisible(KIO__RenameFileDialog* self, bool visible) {
    self->KIO::RenameFileDialog::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameFileDialog_OnSetVisible(KIO__RenameFileDialog* self, intptr_t slot) {
    if (auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self))
        vkiorenamefiledialog->kio__renamefiledialog_setvisible_callback = reinterpret_cast<VirtualKIORenameFileDialog::KIO__RenameFileDialog_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* KIO__RenameFileDialog_SizeHint(const KIO__RenameFileDialog* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* KIO__RenameFileDialog_SuperSizeHint(const KIO__RenameFileDialog* self) {
    return new QSize(self->KIO::RenameFileDialog::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameFileDialog_OnSizeHint(KIO__RenameFileDialog* self, intptr_t slot) {
    if (auto* vkiorenamefiledialog = const_cast<VirtualKIORenameFileDialog*>(dynamic_cast<const VirtualKIORenameFileDialog*>(self)))
        vkiorenamefiledialog->kio__renamefiledialog_sizehint_callback = reinterpret_cast<VirtualKIORenameFileDialog::KIO__RenameFileDialog_SizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* KIO__RenameFileDialog_MinimumSizeHint(const KIO__RenameFileDialog* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* KIO__RenameFileDialog_SuperMinimumSizeHint(const KIO__RenameFileDialog* self) {
    return new QSize(self->KIO::RenameFileDialog::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameFileDialog_OnMinimumSizeHint(KIO__RenameFileDialog* self, intptr_t slot) {
    if (auto* vkiorenamefiledialog = const_cast<VirtualKIORenameFileDialog*>(dynamic_cast<const VirtualKIORenameFileDialog*>(self)))
        vkiorenamefiledialog->kio__renamefiledialog_minimumsizehint_callback = reinterpret_cast<VirtualKIORenameFileDialog::KIO__RenameFileDialog_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
void KIO__RenameFileDialog_Open(KIO__RenameFileDialog* self) {
    self->open();
}

// Base class handler implementation
void KIO__RenameFileDialog_SuperOpen(KIO__RenameFileDialog* self) {
    self->KIO::RenameFileDialog::open();
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameFileDialog_OnOpen(KIO__RenameFileDialog* self, intptr_t slot) {
    if (auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self))
        vkiorenamefiledialog->kio__renamefiledialog_open_callback = reinterpret_cast<VirtualKIORenameFileDialog::KIO__RenameFileDialog_Open_Callback>(slot);
}

// Derived class handler implementation
int KIO__RenameFileDialog_Exec(KIO__RenameFileDialog* self) {
    return self->exec();
}

// Base class handler implementation
int KIO__RenameFileDialog_SuperExec(KIO__RenameFileDialog* self) {
    return self->KIO::RenameFileDialog::exec();
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameFileDialog_OnExec(KIO__RenameFileDialog* self, intptr_t slot) {
    if (auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self))
        vkiorenamefiledialog->kio__renamefiledialog_exec_callback = reinterpret_cast<VirtualKIORenameFileDialog::KIO__RenameFileDialog_Exec_Callback>(slot);
}

// Derived class handler implementation
void KIO__RenameFileDialog_Done(KIO__RenameFileDialog* self, int param1) {
    self->done(static_cast<int>(param1));
}

// Base class handler implementation
void KIO__RenameFileDialog_SuperDone(KIO__RenameFileDialog* self, int param1) {
    self->KIO::RenameFileDialog::done(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameFileDialog_OnDone(KIO__RenameFileDialog* self, intptr_t slot) {
    if (auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self))
        vkiorenamefiledialog->kio__renamefiledialog_done_callback = reinterpret_cast<VirtualKIORenameFileDialog::KIO__RenameFileDialog_Done_Callback>(slot);
}

// Derived class handler implementation
void KIO__RenameFileDialog_Accept(KIO__RenameFileDialog* self) {
    self->accept();
}

// Base class handler implementation
void KIO__RenameFileDialog_SuperAccept(KIO__RenameFileDialog* self) {
    self->KIO::RenameFileDialog::accept();
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameFileDialog_OnAccept(KIO__RenameFileDialog* self, intptr_t slot) {
    if (auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self))
        vkiorenamefiledialog->kio__renamefiledialog_accept_callback = reinterpret_cast<VirtualKIORenameFileDialog::KIO__RenameFileDialog_Accept_Callback>(slot);
}

// Derived class handler implementation
void KIO__RenameFileDialog_Reject(KIO__RenameFileDialog* self) {
    self->reject();
}

// Base class handler implementation
void KIO__RenameFileDialog_SuperReject(KIO__RenameFileDialog* self) {
    self->KIO::RenameFileDialog::reject();
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameFileDialog_OnReject(KIO__RenameFileDialog* self, intptr_t slot) {
    if (auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self))
        vkiorenamefiledialog->kio__renamefiledialog_reject_callback = reinterpret_cast<VirtualKIORenameFileDialog::KIO__RenameFileDialog_Reject_Callback>(slot);
}

// Derived class handler implementation
void KIO__RenameFileDialog_KeyPressEvent(KIO__RenameFileDialog* self, QKeyEvent* param1) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog) {
        vkiorenamefiledialog->keyPressEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KIO::RenameFileDialog::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__RenameFileDialog_SuperKeyPressEvent(KIO__RenameFileDialog* self, QKeyEvent* param1) {
    if (auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self)) {
        vkiorenamefiledialog->KIO::RenameFileDialog::keyPressEvent(param1);
    } else
        qFatal("Error: Protected virtual method KIO::RenameFileDialog::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameFileDialog_OnKeyPressEvent(KIO__RenameFileDialog* self, intptr_t slot) {
    if (auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self))
        vkiorenamefiledialog->kio__renamefiledialog_keypressevent_callback = reinterpret_cast<VirtualKIORenameFileDialog::KIO__RenameFileDialog_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void KIO__RenameFileDialog_CloseEvent(KIO__RenameFileDialog* self, QCloseEvent* param1) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog) {
        vkiorenamefiledialog->closeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KIO::RenameFileDialog::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__RenameFileDialog_SuperCloseEvent(KIO__RenameFileDialog* self, QCloseEvent* param1) {
    if (auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self)) {
        vkiorenamefiledialog->KIO::RenameFileDialog::closeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KIO::RenameFileDialog::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameFileDialog_OnCloseEvent(KIO__RenameFileDialog* self, intptr_t slot) {
    if (auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self))
        vkiorenamefiledialog->kio__renamefiledialog_closeevent_callback = reinterpret_cast<VirtualKIORenameFileDialog::KIO__RenameFileDialog_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void KIO__RenameFileDialog_ShowEvent(KIO__RenameFileDialog* self, QShowEvent* param1) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog) {
        vkiorenamefiledialog->showEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KIO::RenameFileDialog::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__RenameFileDialog_SuperShowEvent(KIO__RenameFileDialog* self, QShowEvent* param1) {
    if (auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self)) {
        vkiorenamefiledialog->KIO::RenameFileDialog::showEvent(param1);
    } else
        qFatal("Error: Protected virtual method KIO::RenameFileDialog::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameFileDialog_OnShowEvent(KIO__RenameFileDialog* self, intptr_t slot) {
    if (auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self))
        vkiorenamefiledialog->kio__renamefiledialog_showevent_callback = reinterpret_cast<VirtualKIORenameFileDialog::KIO__RenameFileDialog_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void KIO__RenameFileDialog_ResizeEvent(KIO__RenameFileDialog* self, QResizeEvent* param1) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog) {
        vkiorenamefiledialog->resizeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KIO::RenameFileDialog::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__RenameFileDialog_SuperResizeEvent(KIO__RenameFileDialog* self, QResizeEvent* param1) {
    if (auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self)) {
        vkiorenamefiledialog->KIO::RenameFileDialog::resizeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KIO::RenameFileDialog::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameFileDialog_OnResizeEvent(KIO__RenameFileDialog* self, intptr_t slot) {
    if (auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self))
        vkiorenamefiledialog->kio__renamefiledialog_resizeevent_callback = reinterpret_cast<VirtualKIORenameFileDialog::KIO__RenameFileDialog_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void KIO__RenameFileDialog_ContextMenuEvent(KIO__RenameFileDialog* self, QContextMenuEvent* param1) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog) {
        vkiorenamefiledialog->contextMenuEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KIO::RenameFileDialog::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__RenameFileDialog_SuperContextMenuEvent(KIO__RenameFileDialog* self, QContextMenuEvent* param1) {
    if (auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self)) {
        vkiorenamefiledialog->KIO::RenameFileDialog::contextMenuEvent(param1);
    } else
        qFatal("Error: Protected virtual method KIO::RenameFileDialog::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameFileDialog_OnContextMenuEvent(KIO__RenameFileDialog* self, intptr_t slot) {
    if (auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self))
        vkiorenamefiledialog->kio__renamefiledialog_contextmenuevent_callback = reinterpret_cast<VirtualKIORenameFileDialog::KIO__RenameFileDialog_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
bool KIO__RenameFileDialog_EventFilter(KIO__RenameFileDialog* self, QObject* param1, QEvent* param2) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog) {
        return vkiorenamefiledialog->eventFilter(param1, param2);
    } else {
        qFatal("Error: Protected virtual method KIO::RenameFileDialog::eventFilter called without a directly constructed type");
    }
}

// Base class handler implementation
bool KIO__RenameFileDialog_SuperEventFilter(KIO__RenameFileDialog* self, QObject* param1, QEvent* param2) {
    if (auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self)) {
        return vkiorenamefiledialog->KIO::RenameFileDialog::eventFilter(param1, param2);
    } else
        qFatal("Error: Protected virtual method KIO::RenameFileDialog::eventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameFileDialog_OnEventFilter(KIO__RenameFileDialog* self, intptr_t slot) {
    if (auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self))
        vkiorenamefiledialog->kio__renamefiledialog_eventfilter_callback = reinterpret_cast<VirtualKIORenameFileDialog::KIO__RenameFileDialog_EventFilter_Callback>(slot);
}

// Derived class handler implementation
int KIO__RenameFileDialog_DevType(const KIO__RenameFileDialog* self) {
    return self->devType();
}

// Base class handler implementation
int KIO__RenameFileDialog_SuperDevType(const KIO__RenameFileDialog* self) {
    return self->KIO::RenameFileDialog::devType();
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameFileDialog_OnDevType(KIO__RenameFileDialog* self, intptr_t slot) {
    if (auto* vkiorenamefiledialog = const_cast<VirtualKIORenameFileDialog*>(dynamic_cast<const VirtualKIORenameFileDialog*>(self)))
        vkiorenamefiledialog->kio__renamefiledialog_devtype_callback = reinterpret_cast<VirtualKIORenameFileDialog::KIO__RenameFileDialog_DevType_Callback>(slot);
}

// Derived class handler implementation
int KIO__RenameFileDialog_HeightForWidth(const KIO__RenameFileDialog* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int KIO__RenameFileDialog_SuperHeightForWidth(const KIO__RenameFileDialog* self, int param1) {
    return self->KIO::RenameFileDialog::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameFileDialog_OnHeightForWidth(KIO__RenameFileDialog* self, intptr_t slot) {
    if (auto* vkiorenamefiledialog = const_cast<VirtualKIORenameFileDialog*>(dynamic_cast<const VirtualKIORenameFileDialog*>(self)))
        vkiorenamefiledialog->kio__renamefiledialog_heightforwidth_callback = reinterpret_cast<VirtualKIORenameFileDialog::KIO__RenameFileDialog_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool KIO__RenameFileDialog_HasHeightForWidth(const KIO__RenameFileDialog* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool KIO__RenameFileDialog_SuperHasHeightForWidth(const KIO__RenameFileDialog* self) {
    return self->KIO::RenameFileDialog::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameFileDialog_OnHasHeightForWidth(KIO__RenameFileDialog* self, intptr_t slot) {
    if (auto* vkiorenamefiledialog = const_cast<VirtualKIORenameFileDialog*>(dynamic_cast<const VirtualKIORenameFileDialog*>(self)))
        vkiorenamefiledialog->kio__renamefiledialog_hasheightforwidth_callback = reinterpret_cast<VirtualKIORenameFileDialog::KIO__RenameFileDialog_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* KIO__RenameFileDialog_PaintEngine(const KIO__RenameFileDialog* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* KIO__RenameFileDialog_SuperPaintEngine(const KIO__RenameFileDialog* self) {
    return self->KIO::RenameFileDialog::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameFileDialog_OnPaintEngine(KIO__RenameFileDialog* self, intptr_t slot) {
    if (auto* vkiorenamefiledialog = const_cast<VirtualKIORenameFileDialog*>(dynamic_cast<const VirtualKIORenameFileDialog*>(self)))
        vkiorenamefiledialog->kio__renamefiledialog_paintengine_callback = reinterpret_cast<VirtualKIORenameFileDialog::KIO__RenameFileDialog_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
bool KIO__RenameFileDialog_Event(KIO__RenameFileDialog* self, QEvent* event) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog) {
        return vkiorenamefiledialog->event(event);
    } else {
        qFatal("Error: Protected virtual method KIO::RenameFileDialog::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool KIO__RenameFileDialog_SuperEvent(KIO__RenameFileDialog* self, QEvent* event) {
    if (auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self)) {
        return vkiorenamefiledialog->KIO::RenameFileDialog::event(event);
    } else
        qFatal("Error: Protected virtual method KIO::RenameFileDialog::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameFileDialog_OnEvent(KIO__RenameFileDialog* self, intptr_t slot) {
    if (auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self))
        vkiorenamefiledialog->kio__renamefiledialog_event_callback = reinterpret_cast<VirtualKIORenameFileDialog::KIO__RenameFileDialog_Event_Callback>(slot);
}

// Derived class handler implementation
void KIO__RenameFileDialog_MousePressEvent(KIO__RenameFileDialog* self, QMouseEvent* event) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog) {
        vkiorenamefiledialog->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIO::RenameFileDialog::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__RenameFileDialog_SuperMousePressEvent(KIO__RenameFileDialog* self, QMouseEvent* event) {
    if (auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self)) {
        vkiorenamefiledialog->KIO::RenameFileDialog::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method KIO::RenameFileDialog::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameFileDialog_OnMousePressEvent(KIO__RenameFileDialog* self, intptr_t slot) {
    if (auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self))
        vkiorenamefiledialog->kio__renamefiledialog_mousepressevent_callback = reinterpret_cast<VirtualKIORenameFileDialog::KIO__RenameFileDialog_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void KIO__RenameFileDialog_MouseReleaseEvent(KIO__RenameFileDialog* self, QMouseEvent* event) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog) {
        vkiorenamefiledialog->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIO::RenameFileDialog::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__RenameFileDialog_SuperMouseReleaseEvent(KIO__RenameFileDialog* self, QMouseEvent* event) {
    if (auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self)) {
        vkiorenamefiledialog->KIO::RenameFileDialog::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KIO::RenameFileDialog::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameFileDialog_OnMouseReleaseEvent(KIO__RenameFileDialog* self, intptr_t slot) {
    if (auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self))
        vkiorenamefiledialog->kio__renamefiledialog_mousereleaseevent_callback = reinterpret_cast<VirtualKIORenameFileDialog::KIO__RenameFileDialog_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KIO__RenameFileDialog_MouseDoubleClickEvent(KIO__RenameFileDialog* self, QMouseEvent* event) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog) {
        vkiorenamefiledialog->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIO::RenameFileDialog::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__RenameFileDialog_SuperMouseDoubleClickEvent(KIO__RenameFileDialog* self, QMouseEvent* event) {
    if (auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self)) {
        vkiorenamefiledialog->KIO::RenameFileDialog::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method KIO::RenameFileDialog::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameFileDialog_OnMouseDoubleClickEvent(KIO__RenameFileDialog* self, intptr_t slot) {
    if (auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self))
        vkiorenamefiledialog->kio__renamefiledialog_mousedoubleclickevent_callback = reinterpret_cast<VirtualKIORenameFileDialog::KIO__RenameFileDialog_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void KIO__RenameFileDialog_MouseMoveEvent(KIO__RenameFileDialog* self, QMouseEvent* event) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog) {
        vkiorenamefiledialog->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIO::RenameFileDialog::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__RenameFileDialog_SuperMouseMoveEvent(KIO__RenameFileDialog* self, QMouseEvent* event) {
    if (auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self)) {
        vkiorenamefiledialog->KIO::RenameFileDialog::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KIO::RenameFileDialog::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameFileDialog_OnMouseMoveEvent(KIO__RenameFileDialog* self, intptr_t slot) {
    if (auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self))
        vkiorenamefiledialog->kio__renamefiledialog_mousemoveevent_callback = reinterpret_cast<VirtualKIORenameFileDialog::KIO__RenameFileDialog_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KIO__RenameFileDialog_WheelEvent(KIO__RenameFileDialog* self, QWheelEvent* event) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog) {
        vkiorenamefiledialog->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIO::RenameFileDialog::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__RenameFileDialog_SuperWheelEvent(KIO__RenameFileDialog* self, QWheelEvent* event) {
    if (auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self)) {
        vkiorenamefiledialog->KIO::RenameFileDialog::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method KIO::RenameFileDialog::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameFileDialog_OnWheelEvent(KIO__RenameFileDialog* self, intptr_t slot) {
    if (auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self))
        vkiorenamefiledialog->kio__renamefiledialog_wheelevent_callback = reinterpret_cast<VirtualKIORenameFileDialog::KIO__RenameFileDialog_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void KIO__RenameFileDialog_KeyReleaseEvent(KIO__RenameFileDialog* self, QKeyEvent* event) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog) {
        vkiorenamefiledialog->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIO::RenameFileDialog::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__RenameFileDialog_SuperKeyReleaseEvent(KIO__RenameFileDialog* self, QKeyEvent* event) {
    if (auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self)) {
        vkiorenamefiledialog->KIO::RenameFileDialog::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KIO::RenameFileDialog::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameFileDialog_OnKeyReleaseEvent(KIO__RenameFileDialog* self, intptr_t slot) {
    if (auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self))
        vkiorenamefiledialog->kio__renamefiledialog_keyreleaseevent_callback = reinterpret_cast<VirtualKIORenameFileDialog::KIO__RenameFileDialog_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KIO__RenameFileDialog_FocusInEvent(KIO__RenameFileDialog* self, QFocusEvent* event) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog) {
        vkiorenamefiledialog->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIO::RenameFileDialog::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__RenameFileDialog_SuperFocusInEvent(KIO__RenameFileDialog* self, QFocusEvent* event) {
    if (auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self)) {
        vkiorenamefiledialog->KIO::RenameFileDialog::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method KIO::RenameFileDialog::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameFileDialog_OnFocusInEvent(KIO__RenameFileDialog* self, intptr_t slot) {
    if (auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self))
        vkiorenamefiledialog->kio__renamefiledialog_focusinevent_callback = reinterpret_cast<VirtualKIORenameFileDialog::KIO__RenameFileDialog_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void KIO__RenameFileDialog_FocusOutEvent(KIO__RenameFileDialog* self, QFocusEvent* event) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog) {
        vkiorenamefiledialog->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIO::RenameFileDialog::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__RenameFileDialog_SuperFocusOutEvent(KIO__RenameFileDialog* self, QFocusEvent* event) {
    if (auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self)) {
        vkiorenamefiledialog->KIO::RenameFileDialog::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method KIO::RenameFileDialog::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameFileDialog_OnFocusOutEvent(KIO__RenameFileDialog* self, intptr_t slot) {
    if (auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self))
        vkiorenamefiledialog->kio__renamefiledialog_focusoutevent_callback = reinterpret_cast<VirtualKIORenameFileDialog::KIO__RenameFileDialog_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void KIO__RenameFileDialog_EnterEvent(KIO__RenameFileDialog* self, QEnterEvent* event) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog) {
        vkiorenamefiledialog->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIO::RenameFileDialog::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__RenameFileDialog_SuperEnterEvent(KIO__RenameFileDialog* self, QEnterEvent* event) {
    if (auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self)) {
        vkiorenamefiledialog->KIO::RenameFileDialog::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method KIO::RenameFileDialog::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameFileDialog_OnEnterEvent(KIO__RenameFileDialog* self, intptr_t slot) {
    if (auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self))
        vkiorenamefiledialog->kio__renamefiledialog_enterevent_callback = reinterpret_cast<VirtualKIORenameFileDialog::KIO__RenameFileDialog_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KIO__RenameFileDialog_LeaveEvent(KIO__RenameFileDialog* self, QEvent* event) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog) {
        vkiorenamefiledialog->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIO::RenameFileDialog::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__RenameFileDialog_SuperLeaveEvent(KIO__RenameFileDialog* self, QEvent* event) {
    if (auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self)) {
        vkiorenamefiledialog->KIO::RenameFileDialog::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KIO::RenameFileDialog::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameFileDialog_OnLeaveEvent(KIO__RenameFileDialog* self, intptr_t slot) {
    if (auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self))
        vkiorenamefiledialog->kio__renamefiledialog_leaveevent_callback = reinterpret_cast<VirtualKIORenameFileDialog::KIO__RenameFileDialog_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KIO__RenameFileDialog_PaintEvent(KIO__RenameFileDialog* self, QPaintEvent* event) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog) {
        vkiorenamefiledialog->paintEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIO::RenameFileDialog::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__RenameFileDialog_SuperPaintEvent(KIO__RenameFileDialog* self, QPaintEvent* event) {
    if (auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self)) {
        vkiorenamefiledialog->KIO::RenameFileDialog::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method KIO::RenameFileDialog::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameFileDialog_OnPaintEvent(KIO__RenameFileDialog* self, intptr_t slot) {
    if (auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self))
        vkiorenamefiledialog->kio__renamefiledialog_paintevent_callback = reinterpret_cast<VirtualKIORenameFileDialog::KIO__RenameFileDialog_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void KIO__RenameFileDialog_MoveEvent(KIO__RenameFileDialog* self, QMoveEvent* event) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog) {
        vkiorenamefiledialog->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIO::RenameFileDialog::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__RenameFileDialog_SuperMoveEvent(KIO__RenameFileDialog* self, QMoveEvent* event) {
    if (auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self)) {
        vkiorenamefiledialog->KIO::RenameFileDialog::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method KIO::RenameFileDialog::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameFileDialog_OnMoveEvent(KIO__RenameFileDialog* self, intptr_t slot) {
    if (auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self))
        vkiorenamefiledialog->kio__renamefiledialog_moveevent_callback = reinterpret_cast<VirtualKIORenameFileDialog::KIO__RenameFileDialog_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KIO__RenameFileDialog_TabletEvent(KIO__RenameFileDialog* self, QTabletEvent* event) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog) {
        vkiorenamefiledialog->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIO::RenameFileDialog::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__RenameFileDialog_SuperTabletEvent(KIO__RenameFileDialog* self, QTabletEvent* event) {
    if (auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self)) {
        vkiorenamefiledialog->KIO::RenameFileDialog::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method KIO::RenameFileDialog::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameFileDialog_OnTabletEvent(KIO__RenameFileDialog* self, intptr_t slot) {
    if (auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self))
        vkiorenamefiledialog->kio__renamefiledialog_tabletevent_callback = reinterpret_cast<VirtualKIORenameFileDialog::KIO__RenameFileDialog_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void KIO__RenameFileDialog_ActionEvent(KIO__RenameFileDialog* self, QActionEvent* event) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog) {
        vkiorenamefiledialog->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIO::RenameFileDialog::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__RenameFileDialog_SuperActionEvent(KIO__RenameFileDialog* self, QActionEvent* event) {
    if (auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self)) {
        vkiorenamefiledialog->KIO::RenameFileDialog::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method KIO::RenameFileDialog::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameFileDialog_OnActionEvent(KIO__RenameFileDialog* self, intptr_t slot) {
    if (auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self))
        vkiorenamefiledialog->kio__renamefiledialog_actionevent_callback = reinterpret_cast<VirtualKIORenameFileDialog::KIO__RenameFileDialog_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void KIO__RenameFileDialog_DragEnterEvent(KIO__RenameFileDialog* self, QDragEnterEvent* event) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog) {
        vkiorenamefiledialog->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIO::RenameFileDialog::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__RenameFileDialog_SuperDragEnterEvent(KIO__RenameFileDialog* self, QDragEnterEvent* event) {
    if (auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self)) {
        vkiorenamefiledialog->KIO::RenameFileDialog::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method KIO::RenameFileDialog::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameFileDialog_OnDragEnterEvent(KIO__RenameFileDialog* self, intptr_t slot) {
    if (auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self))
        vkiorenamefiledialog->kio__renamefiledialog_dragenterevent_callback = reinterpret_cast<VirtualKIORenameFileDialog::KIO__RenameFileDialog_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KIO__RenameFileDialog_DragMoveEvent(KIO__RenameFileDialog* self, QDragMoveEvent* event) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog) {
        vkiorenamefiledialog->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIO::RenameFileDialog::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__RenameFileDialog_SuperDragMoveEvent(KIO__RenameFileDialog* self, QDragMoveEvent* event) {
    if (auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self)) {
        vkiorenamefiledialog->KIO::RenameFileDialog::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KIO::RenameFileDialog::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameFileDialog_OnDragMoveEvent(KIO__RenameFileDialog* self, intptr_t slot) {
    if (auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self))
        vkiorenamefiledialog->kio__renamefiledialog_dragmoveevent_callback = reinterpret_cast<VirtualKIORenameFileDialog::KIO__RenameFileDialog_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KIO__RenameFileDialog_DragLeaveEvent(KIO__RenameFileDialog* self, QDragLeaveEvent* event) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog) {
        vkiorenamefiledialog->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIO::RenameFileDialog::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__RenameFileDialog_SuperDragLeaveEvent(KIO__RenameFileDialog* self, QDragLeaveEvent* event) {
    if (auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self)) {
        vkiorenamefiledialog->KIO::RenameFileDialog::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KIO::RenameFileDialog::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameFileDialog_OnDragLeaveEvent(KIO__RenameFileDialog* self, intptr_t slot) {
    if (auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self))
        vkiorenamefiledialog->kio__renamefiledialog_dragleaveevent_callback = reinterpret_cast<VirtualKIORenameFileDialog::KIO__RenameFileDialog_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KIO__RenameFileDialog_DropEvent(KIO__RenameFileDialog* self, QDropEvent* event) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog) {
        vkiorenamefiledialog->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIO::RenameFileDialog::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__RenameFileDialog_SuperDropEvent(KIO__RenameFileDialog* self, QDropEvent* event) {
    if (auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self)) {
        vkiorenamefiledialog->KIO::RenameFileDialog::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method KIO::RenameFileDialog::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameFileDialog_OnDropEvent(KIO__RenameFileDialog* self, intptr_t slot) {
    if (auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self))
        vkiorenamefiledialog->kio__renamefiledialog_dropevent_callback = reinterpret_cast<VirtualKIORenameFileDialog::KIO__RenameFileDialog_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void KIO__RenameFileDialog_HideEvent(KIO__RenameFileDialog* self, QHideEvent* event) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog) {
        vkiorenamefiledialog->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIO::RenameFileDialog::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__RenameFileDialog_SuperHideEvent(KIO__RenameFileDialog* self, QHideEvent* event) {
    if (auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self)) {
        vkiorenamefiledialog->KIO::RenameFileDialog::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method KIO::RenameFileDialog::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameFileDialog_OnHideEvent(KIO__RenameFileDialog* self, intptr_t slot) {
    if (auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self))
        vkiorenamefiledialog->kio__renamefiledialog_hideevent_callback = reinterpret_cast<VirtualKIORenameFileDialog::KIO__RenameFileDialog_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool KIO__RenameFileDialog_NativeEvent(KIO__RenameFileDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog) {
        return vkiorenamefiledialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method KIO::RenameFileDialog::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool KIO__RenameFileDialog_SuperNativeEvent(KIO__RenameFileDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self)) {
        return vkiorenamefiledialog->KIO::RenameFileDialog::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method KIO::RenameFileDialog::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameFileDialog_OnNativeEvent(KIO__RenameFileDialog* self, intptr_t slot) {
    if (auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self))
        vkiorenamefiledialog->kio__renamefiledialog_nativeevent_callback = reinterpret_cast<VirtualKIORenameFileDialog::KIO__RenameFileDialog_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
void KIO__RenameFileDialog_ChangeEvent(KIO__RenameFileDialog* self, QEvent* param1) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog) {
        vkiorenamefiledialog->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KIO::RenameFileDialog::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__RenameFileDialog_SuperChangeEvent(KIO__RenameFileDialog* self, QEvent* param1) {
    if (auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self)) {
        vkiorenamefiledialog->KIO::RenameFileDialog::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KIO::RenameFileDialog::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameFileDialog_OnChangeEvent(KIO__RenameFileDialog* self, intptr_t slot) {
    if (auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self))
        vkiorenamefiledialog->kio__renamefiledialog_changeevent_callback = reinterpret_cast<VirtualKIORenameFileDialog::KIO__RenameFileDialog_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
int KIO__RenameFileDialog_Metric(const KIO__RenameFileDialog* self, int param1) {
    auto* vkiorenamefiledialog = const_cast<VirtualKIORenameFileDialog*>(dynamic_cast<const VirtualKIORenameFileDialog*>(self));
    if (vkiorenamefiledialog) {
        return vkiorenamefiledialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method KIO::RenameFileDialog::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int KIO__RenameFileDialog_SuperMetric(const KIO__RenameFileDialog* self, int param1) {
    if (auto* vkiorenamefiledialog = const_cast<VirtualKIORenameFileDialog*>(dynamic_cast<const VirtualKIORenameFileDialog*>(self))) {
        return vkiorenamefiledialog->KIO::RenameFileDialog::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method KIO::RenameFileDialog::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameFileDialog_OnMetric(KIO__RenameFileDialog* self, intptr_t slot) {
    if (auto* vkiorenamefiledialog = const_cast<VirtualKIORenameFileDialog*>(dynamic_cast<const VirtualKIORenameFileDialog*>(self)))
        vkiorenamefiledialog->kio__renamefiledialog_metric_callback = reinterpret_cast<VirtualKIORenameFileDialog::KIO__RenameFileDialog_Metric_Callback>(slot);
}

// Derived class handler implementation
void KIO__RenameFileDialog_InitPainter(const KIO__RenameFileDialog* self, QPainter* painter) {
    auto* vkiorenamefiledialog = const_cast<VirtualKIORenameFileDialog*>(dynamic_cast<const VirtualKIORenameFileDialog*>(self));
    if (vkiorenamefiledialog) {
        vkiorenamefiledialog->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method KIO::RenameFileDialog::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__RenameFileDialog_SuperInitPainter(const KIO__RenameFileDialog* self, QPainter* painter) {
    if (auto* vkiorenamefiledialog = const_cast<VirtualKIORenameFileDialog*>(dynamic_cast<const VirtualKIORenameFileDialog*>(self))) {
        vkiorenamefiledialog->KIO::RenameFileDialog::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method KIO::RenameFileDialog::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameFileDialog_OnInitPainter(KIO__RenameFileDialog* self, intptr_t slot) {
    if (auto* vkiorenamefiledialog = const_cast<VirtualKIORenameFileDialog*>(dynamic_cast<const VirtualKIORenameFileDialog*>(self)))
        vkiorenamefiledialog->kio__renamefiledialog_initpainter_callback = reinterpret_cast<VirtualKIORenameFileDialog::KIO__RenameFileDialog_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* KIO__RenameFileDialog_Redirected(const KIO__RenameFileDialog* self, QPoint* offset) {
    auto* vkiorenamefiledialog = const_cast<VirtualKIORenameFileDialog*>(dynamic_cast<const VirtualKIORenameFileDialog*>(self));
    if (vkiorenamefiledialog) {
        return vkiorenamefiledialog->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method KIO::RenameFileDialog::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* KIO__RenameFileDialog_SuperRedirected(const KIO__RenameFileDialog* self, QPoint* offset) {
    if (auto* vkiorenamefiledialog = const_cast<VirtualKIORenameFileDialog*>(dynamic_cast<const VirtualKIORenameFileDialog*>(self))) {
        return vkiorenamefiledialog->KIO::RenameFileDialog::redirected(offset);
    } else
        qFatal("Error: Protected virtual method KIO::RenameFileDialog::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameFileDialog_OnRedirected(KIO__RenameFileDialog* self, intptr_t slot) {
    if (auto* vkiorenamefiledialog = const_cast<VirtualKIORenameFileDialog*>(dynamic_cast<const VirtualKIORenameFileDialog*>(self)))
        vkiorenamefiledialog->kio__renamefiledialog_redirected_callback = reinterpret_cast<VirtualKIORenameFileDialog::KIO__RenameFileDialog_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* KIO__RenameFileDialog_SharedPainter(const KIO__RenameFileDialog* self) {
    auto* vkiorenamefiledialog = const_cast<VirtualKIORenameFileDialog*>(dynamic_cast<const VirtualKIORenameFileDialog*>(self));
    if (vkiorenamefiledialog) {
        return vkiorenamefiledialog->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method KIO::RenameFileDialog::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* KIO__RenameFileDialog_SuperSharedPainter(const KIO__RenameFileDialog* self) {
    if (auto* vkiorenamefiledialog = const_cast<VirtualKIORenameFileDialog*>(dynamic_cast<const VirtualKIORenameFileDialog*>(self))) {
        return vkiorenamefiledialog->KIO::RenameFileDialog::sharedPainter();
    } else
        qFatal("Error: Protected virtual method KIO::RenameFileDialog::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameFileDialog_OnSharedPainter(KIO__RenameFileDialog* self, intptr_t slot) {
    if (auto* vkiorenamefiledialog = const_cast<VirtualKIORenameFileDialog*>(dynamic_cast<const VirtualKIORenameFileDialog*>(self)))
        vkiorenamefiledialog->kio__renamefiledialog_sharedpainter_callback = reinterpret_cast<VirtualKIORenameFileDialog::KIO__RenameFileDialog_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void KIO__RenameFileDialog_InputMethodEvent(KIO__RenameFileDialog* self, QInputMethodEvent* param1) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog) {
        vkiorenamefiledialog->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KIO::RenameFileDialog::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__RenameFileDialog_SuperInputMethodEvent(KIO__RenameFileDialog* self, QInputMethodEvent* param1) {
    if (auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self)) {
        vkiorenamefiledialog->KIO::RenameFileDialog::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method KIO::RenameFileDialog::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameFileDialog_OnInputMethodEvent(KIO__RenameFileDialog* self, intptr_t slot) {
    if (auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self))
        vkiorenamefiledialog->kio__renamefiledialog_inputmethodevent_callback = reinterpret_cast<VirtualKIORenameFileDialog::KIO__RenameFileDialog_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* KIO__RenameFileDialog_InputMethodQuery(const KIO__RenameFileDialog* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* KIO__RenameFileDialog_SuperInputMethodQuery(const KIO__RenameFileDialog* self, int param1) {
    return new QVariant(self->KIO::RenameFileDialog::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameFileDialog_OnInputMethodQuery(KIO__RenameFileDialog* self, intptr_t slot) {
    if (auto* vkiorenamefiledialog = const_cast<VirtualKIORenameFileDialog*>(dynamic_cast<const VirtualKIORenameFileDialog*>(self)))
        vkiorenamefiledialog->kio__renamefiledialog_inputmethodquery_callback = reinterpret_cast<VirtualKIORenameFileDialog::KIO__RenameFileDialog_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool KIO__RenameFileDialog_FocusNextPrevChild(KIO__RenameFileDialog* self, bool next) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog) {
        return vkiorenamefiledialog->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method KIO::RenameFileDialog::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool KIO__RenameFileDialog_SuperFocusNextPrevChild(KIO__RenameFileDialog* self, bool next) {
    if (auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self)) {
        return vkiorenamefiledialog->KIO::RenameFileDialog::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method KIO::RenameFileDialog::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameFileDialog_OnFocusNextPrevChild(KIO__RenameFileDialog* self, intptr_t slot) {
    if (auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self))
        vkiorenamefiledialog->kio__renamefiledialog_focusnextprevchild_callback = reinterpret_cast<VirtualKIORenameFileDialog::KIO__RenameFileDialog_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
void KIO__RenameFileDialog_TimerEvent(KIO__RenameFileDialog* self, QTimerEvent* event) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog) {
        vkiorenamefiledialog->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIO::RenameFileDialog::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__RenameFileDialog_SuperTimerEvent(KIO__RenameFileDialog* self, QTimerEvent* event) {
    if (auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self)) {
        vkiorenamefiledialog->KIO::RenameFileDialog::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KIO::RenameFileDialog::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameFileDialog_OnTimerEvent(KIO__RenameFileDialog* self, intptr_t slot) {
    if (auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self))
        vkiorenamefiledialog->kio__renamefiledialog_timerevent_callback = reinterpret_cast<VirtualKIORenameFileDialog::KIO__RenameFileDialog_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KIO__RenameFileDialog_ChildEvent(KIO__RenameFileDialog* self, QChildEvent* event) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog) {
        vkiorenamefiledialog->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIO::RenameFileDialog::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__RenameFileDialog_SuperChildEvent(KIO__RenameFileDialog* self, QChildEvent* event) {
    if (auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self)) {
        vkiorenamefiledialog->KIO::RenameFileDialog::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KIO::RenameFileDialog::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameFileDialog_OnChildEvent(KIO__RenameFileDialog* self, intptr_t slot) {
    if (auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self))
        vkiorenamefiledialog->kio__renamefiledialog_childevent_callback = reinterpret_cast<VirtualKIORenameFileDialog::KIO__RenameFileDialog_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KIO__RenameFileDialog_CustomEvent(KIO__RenameFileDialog* self, QEvent* event) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog) {
        vkiorenamefiledialog->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIO::RenameFileDialog::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__RenameFileDialog_SuperCustomEvent(KIO__RenameFileDialog* self, QEvent* event) {
    if (auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self)) {
        vkiorenamefiledialog->KIO::RenameFileDialog::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KIO::RenameFileDialog::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameFileDialog_OnCustomEvent(KIO__RenameFileDialog* self, intptr_t slot) {
    if (auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self))
        vkiorenamefiledialog->kio__renamefiledialog_customevent_callback = reinterpret_cast<VirtualKIORenameFileDialog::KIO__RenameFileDialog_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KIO__RenameFileDialog_ConnectNotify(KIO__RenameFileDialog* self, const QMetaMethod* signal) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog) {
        vkiorenamefiledialog->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KIO::RenameFileDialog::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__RenameFileDialog_SuperConnectNotify(KIO__RenameFileDialog* self, const QMetaMethod* signal) {
    if (auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self)) {
        vkiorenamefiledialog->KIO::RenameFileDialog::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KIO::RenameFileDialog::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameFileDialog_OnConnectNotify(KIO__RenameFileDialog* self, intptr_t slot) {
    if (auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self))
        vkiorenamefiledialog->kio__renamefiledialog_connectnotify_callback = reinterpret_cast<VirtualKIORenameFileDialog::KIO__RenameFileDialog_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KIO__RenameFileDialog_DisconnectNotify(KIO__RenameFileDialog* self, const QMetaMethod* signal) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog) {
        vkiorenamefiledialog->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KIO::RenameFileDialog::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__RenameFileDialog_SuperDisconnectNotify(KIO__RenameFileDialog* self, const QMetaMethod* signal) {
    if (auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self)) {
        vkiorenamefiledialog->KIO::RenameFileDialog::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KIO::RenameFileDialog::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameFileDialog_OnDisconnectNotify(KIO__RenameFileDialog* self, intptr_t slot) {
    if (auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self))
        vkiorenamefiledialog->kio__renamefiledialog_disconnectnotify_callback = reinterpret_cast<VirtualKIORenameFileDialog::KIO__RenameFileDialog_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void KIO__RenameFileDialog_AdjustPosition(KIO__RenameFileDialog* self, QWidget* param1) {
    if (auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self)) {
        vkiorenamefiledialog->VirtualKIORenameFileDialog::adjustPosition(param1);
    } else
        qFatal("Error: Protected method KIO::RenameFileDialog::adjustPosition called without a directly constructed type");
}

// Derived class protected handler implementation
void KIO__RenameFileDialog_UpdateMicroFocus(KIO__RenameFileDialog* self) {
    if (auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self)) {
        vkiorenamefiledialog->VirtualKIORenameFileDialog::updateMicroFocus();
    } else
        qFatal("Error: Protected method KIO::RenameFileDialog::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void KIO__RenameFileDialog_Create(KIO__RenameFileDialog* self) {
    if (auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self)) {
        vkiorenamefiledialog->VirtualKIORenameFileDialog::create();
    } else
        qFatal("Error: Protected method KIO::RenameFileDialog::create called without a directly constructed type");
}

// Derived class protected handler implementation
void KIO__RenameFileDialog_Destroy(KIO__RenameFileDialog* self) {
    if (auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self)) {
        vkiorenamefiledialog->VirtualKIORenameFileDialog::destroy();
    } else
        qFatal("Error: Protected method KIO::RenameFileDialog::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool KIO__RenameFileDialog_FocusNextChild(KIO__RenameFileDialog* self) {
    if (auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self)) {
        return vkiorenamefiledialog->VirtualKIORenameFileDialog::focusNextChild();
    } else
        qFatal("Error: Protected method KIO::RenameFileDialog::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool KIO__RenameFileDialog_FocusPreviousChild(KIO__RenameFileDialog* self) {
    if (auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self)) {
        return vkiorenamefiledialog->VirtualKIORenameFileDialog::focusPreviousChild();
    } else
        qFatal("Error: Protected method KIO::RenameFileDialog::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KIO__RenameFileDialog_Sender(const KIO__RenameFileDialog* self) {
    if (auto* vkiorenamefiledialog = const_cast<VirtualKIORenameFileDialog*>(dynamic_cast<const VirtualKIORenameFileDialog*>(self))) {
        return vkiorenamefiledialog->VirtualKIORenameFileDialog::sender();
    } else
        qFatal("Error: Protected method KIO::RenameFileDialog::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KIO__RenameFileDialog_SenderSignalIndex(const KIO__RenameFileDialog* self) {
    if (auto* vkiorenamefiledialog = const_cast<VirtualKIORenameFileDialog*>(dynamic_cast<const VirtualKIORenameFileDialog*>(self))) {
        return vkiorenamefiledialog->VirtualKIORenameFileDialog::senderSignalIndex();
    } else
        qFatal("Error: Protected method KIO::RenameFileDialog::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KIO__RenameFileDialog_Receivers(const KIO__RenameFileDialog* self, const char* signal) {
    if (auto* vkiorenamefiledialog = const_cast<VirtualKIORenameFileDialog*>(dynamic_cast<const VirtualKIORenameFileDialog*>(self))) {
        return vkiorenamefiledialog->VirtualKIORenameFileDialog::receivers(signal);
    } else
        qFatal("Error: Protected method KIO::RenameFileDialog::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KIO__RenameFileDialog_IsSignalConnected(const KIO__RenameFileDialog* self, const QMetaMethod* signal) {
    if (auto* vkiorenamefiledialog = const_cast<VirtualKIORenameFileDialog*>(dynamic_cast<const VirtualKIORenameFileDialog*>(self))) {
        return vkiorenamefiledialog->VirtualKIORenameFileDialog::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KIO::RenameFileDialog::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double KIO__RenameFileDialog_GetDecodedMetricF(const KIO__RenameFileDialog* self, int metricA, int metricB) {
    if (auto* vkiorenamefiledialog = const_cast<VirtualKIORenameFileDialog*>(dynamic_cast<const VirtualKIORenameFileDialog*>(self))) {
        return vkiorenamefiledialog->VirtualKIORenameFileDialog::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method KIO::RenameFileDialog::getDecodedMetricF called without a directly constructed type");
}

void KIO__RenameFileDialog_Delete(KIO__RenameFileDialog* self) {
    delete self;
}
