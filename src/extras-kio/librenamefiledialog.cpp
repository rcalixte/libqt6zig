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
#include <QByteArray>
#include <cstring>
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
    auto* vkio__renamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkio__renamefiledialog && vkio__renamefiledialog->isVirtualKIORenameFileDialog) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKIORenameFileDialog*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KIO__RenameFileDialog_Tr(const char* s) {
    QString _ret = KIO::RenameFileDialog::tr(s);
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
    void (*slotFunc)(KIO__RenameFileDialog*, QUrl**) = reinterpret_cast<void (*)(KIO__RenameFileDialog*, QUrl**)>(slot);
    KIO::RenameFileDialog::connect(self, &KIO::RenameFileDialog::renamingFinished, [self, slotFunc](const QList<QUrl>& urls) {
        const QList<QUrl>& urls_ret = urls;
        // Convert QList<> from C++ memory to manually-managed C memory
        QUrl** urls_arr = static_cast<QUrl**>(malloc(sizeof(QUrl*) * (urls_ret.size() + 1)));
        for (qsizetype i = 0; i < urls_ret.size(); ++i) {
            urls_arr[i] = new QUrl(urls_ret[i]);
        }
        // Append sentinel value to the list
        urls_arr[urls_ret.size()] = nullptr;
        QUrl** sigval1 = urls_arr;
        slotFunc(self, sigval1);
        free(urls_arr);
    });
}

void KIO__RenameFileDialog_Error(KIO__RenameFileDialog* self, KJob* errorVal) {
    self->error(errorVal);
}

void KIO__RenameFileDialog_Connect_Error(KIO__RenameFileDialog* self, intptr_t slot) {
    void (*slotFunc)(KIO__RenameFileDialog*, KJob*) = reinterpret_cast<void (*)(KIO__RenameFileDialog*, KJob*)>(slot);
    KIO::RenameFileDialog::connect(self, &KIO::RenameFileDialog::error, [self, slotFunc](KJob* errorVal) {
        KJob* sigval1 = errorVal;
        slotFunc(self, sigval1);
    });
}

libqt_string KIO__RenameFileDialog_Tr2(const char* s, const char* c) {
    QString _ret = KIO::RenameFileDialog::tr(s, c);
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
    QString _ret = KIO::RenameFileDialog::tr(s, c, static_cast<int>(n));
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
int KIO__RenameFileDialog_QBaseMetacall(KIO__RenameFileDialog* self, int param1, int param2, void** param3) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->setKIO__RenameFileDialog_Metacall_IsBase(true);
        return vkiorenamefiledialog->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KIO::RenameFileDialog::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameFileDialog_OnMetacall(KIO__RenameFileDialog* self, intptr_t slot) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->setKIO__RenameFileDialog_Metacall_Callback(reinterpret_cast<VirtualKIORenameFileDialog::KIO__RenameFileDialog_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__RenameFileDialog_SetVisible(KIO__RenameFileDialog* self, bool visible) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->setVisible(visible);
    } else {
        self->KIO::RenameFileDialog::setVisible(visible);
    }
}

// Base class handler implementation
void KIO__RenameFileDialog_QBaseSetVisible(KIO__RenameFileDialog* self, bool visible) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->setKIO__RenameFileDialog_SetVisible_IsBase(true);
        vkiorenamefiledialog->setVisible(visible);
    } else {
        self->KIO::RenameFileDialog::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameFileDialog_OnSetVisible(KIO__RenameFileDialog* self, intptr_t slot) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->setKIO__RenameFileDialog_SetVisible_Callback(reinterpret_cast<VirtualKIORenameFileDialog::KIO__RenameFileDialog_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KIO__RenameFileDialog_SizeHint(const KIO__RenameFileDialog* self) {
    auto* vkiorenamefiledialog = const_cast<VirtualKIORenameFileDialog*>(dynamic_cast<const VirtualKIORenameFileDialog*>(self));
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        return new QSize(vkiorenamefiledialog->sizeHint());
    } else {
        return new QSize(((VirtualKIORenameFileDialog*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* KIO__RenameFileDialog_QBaseSizeHint(const KIO__RenameFileDialog* self) {
    auto* vkiorenamefiledialog = const_cast<VirtualKIORenameFileDialog*>(dynamic_cast<const VirtualKIORenameFileDialog*>(self));
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->setKIO__RenameFileDialog_SizeHint_IsBase(true);
        return new QSize(vkiorenamefiledialog->sizeHint());
    } else {
        return new QSize(((VirtualKIORenameFileDialog*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameFileDialog_OnSizeHint(const KIO__RenameFileDialog* self, intptr_t slot) {
    auto* vkiorenamefiledialog = const_cast<VirtualKIORenameFileDialog*>(dynamic_cast<const VirtualKIORenameFileDialog*>(self));
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->setKIO__RenameFileDialog_SizeHint_Callback(reinterpret_cast<VirtualKIORenameFileDialog::KIO__RenameFileDialog_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KIO__RenameFileDialog_MinimumSizeHint(const KIO__RenameFileDialog* self) {
    auto* vkiorenamefiledialog = const_cast<VirtualKIORenameFileDialog*>(dynamic_cast<const VirtualKIORenameFileDialog*>(self));
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        return new QSize(vkiorenamefiledialog->minimumSizeHint());
    } else {
        return new QSize(((VirtualKIORenameFileDialog*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* KIO__RenameFileDialog_QBaseMinimumSizeHint(const KIO__RenameFileDialog* self) {
    auto* vkiorenamefiledialog = const_cast<VirtualKIORenameFileDialog*>(dynamic_cast<const VirtualKIORenameFileDialog*>(self));
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->setKIO__RenameFileDialog_MinimumSizeHint_IsBase(true);
        return new QSize(vkiorenamefiledialog->minimumSizeHint());
    } else {
        return new QSize(((VirtualKIORenameFileDialog*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameFileDialog_OnMinimumSizeHint(const KIO__RenameFileDialog* self, intptr_t slot) {
    auto* vkiorenamefiledialog = const_cast<VirtualKIORenameFileDialog*>(dynamic_cast<const VirtualKIORenameFileDialog*>(self));
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->setKIO__RenameFileDialog_MinimumSizeHint_Callback(reinterpret_cast<VirtualKIORenameFileDialog::KIO__RenameFileDialog_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__RenameFileDialog_Open(KIO__RenameFileDialog* self) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->open();
    } else {
        self->KIO::RenameFileDialog::open();
    }
}

// Base class handler implementation
void KIO__RenameFileDialog_QBaseOpen(KIO__RenameFileDialog* self) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->setKIO__RenameFileDialog_Open_IsBase(true);
        vkiorenamefiledialog->open();
    } else {
        self->KIO::RenameFileDialog::open();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameFileDialog_OnOpen(KIO__RenameFileDialog* self, intptr_t slot) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->setKIO__RenameFileDialog_Open_Callback(reinterpret_cast<VirtualKIORenameFileDialog::KIO__RenameFileDialog_Open_Callback>(slot));
    }
}

// Derived class handler implementation
int KIO__RenameFileDialog_Exec(KIO__RenameFileDialog* self) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        return vkiorenamefiledialog->exec();
    } else {
        return self->KIO::RenameFileDialog::exec();
    }
}

// Base class handler implementation
int KIO__RenameFileDialog_QBaseExec(KIO__RenameFileDialog* self) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->setKIO__RenameFileDialog_Exec_IsBase(true);
        return vkiorenamefiledialog->exec();
    } else {
        return self->KIO::RenameFileDialog::exec();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameFileDialog_OnExec(KIO__RenameFileDialog* self, intptr_t slot) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->setKIO__RenameFileDialog_Exec_Callback(reinterpret_cast<VirtualKIORenameFileDialog::KIO__RenameFileDialog_Exec_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__RenameFileDialog_Done(KIO__RenameFileDialog* self, int param1) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->done(static_cast<int>(param1));
    } else {
        self->KIO::RenameFileDialog::done(static_cast<int>(param1));
    }
}

// Base class handler implementation
void KIO__RenameFileDialog_QBaseDone(KIO__RenameFileDialog* self, int param1) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->setKIO__RenameFileDialog_Done_IsBase(true);
        vkiorenamefiledialog->done(static_cast<int>(param1));
    } else {
        self->KIO::RenameFileDialog::done(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameFileDialog_OnDone(KIO__RenameFileDialog* self, intptr_t slot) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->setKIO__RenameFileDialog_Done_Callback(reinterpret_cast<VirtualKIORenameFileDialog::KIO__RenameFileDialog_Done_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__RenameFileDialog_Accept(KIO__RenameFileDialog* self) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->accept();
    } else {
        self->KIO::RenameFileDialog::accept();
    }
}

// Base class handler implementation
void KIO__RenameFileDialog_QBaseAccept(KIO__RenameFileDialog* self) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->setKIO__RenameFileDialog_Accept_IsBase(true);
        vkiorenamefiledialog->accept();
    } else {
        self->KIO::RenameFileDialog::accept();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameFileDialog_OnAccept(KIO__RenameFileDialog* self, intptr_t slot) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->setKIO__RenameFileDialog_Accept_Callback(reinterpret_cast<VirtualKIORenameFileDialog::KIO__RenameFileDialog_Accept_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__RenameFileDialog_Reject(KIO__RenameFileDialog* self) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->reject();
    } else {
        self->KIO::RenameFileDialog::reject();
    }
}

// Base class handler implementation
void KIO__RenameFileDialog_QBaseReject(KIO__RenameFileDialog* self) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->setKIO__RenameFileDialog_Reject_IsBase(true);
        vkiorenamefiledialog->reject();
    } else {
        self->KIO::RenameFileDialog::reject();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameFileDialog_OnReject(KIO__RenameFileDialog* self, intptr_t slot) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->setKIO__RenameFileDialog_Reject_Callback(reinterpret_cast<VirtualKIORenameFileDialog::KIO__RenameFileDialog_Reject_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__RenameFileDialog_KeyPressEvent(KIO__RenameFileDialog* self, QKeyEvent* param1) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->keyPressEvent(param1);
    } else {
        ((VirtualKIORenameFileDialog*)self)->keyPressEvent(param1);
    }
}

// Base class handler implementation
void KIO__RenameFileDialog_QBaseKeyPressEvent(KIO__RenameFileDialog* self, QKeyEvent* param1) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->setKIO__RenameFileDialog_KeyPressEvent_IsBase(true);
        vkiorenamefiledialog->keyPressEvent(param1);
    } else {
        ((VirtualKIORenameFileDialog*)self)->keyPressEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameFileDialog_OnKeyPressEvent(KIO__RenameFileDialog* self, intptr_t slot) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->setKIO__RenameFileDialog_KeyPressEvent_Callback(reinterpret_cast<VirtualKIORenameFileDialog::KIO__RenameFileDialog_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__RenameFileDialog_CloseEvent(KIO__RenameFileDialog* self, QCloseEvent* param1) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->closeEvent(param1);
    } else {
        ((VirtualKIORenameFileDialog*)self)->closeEvent(param1);
    }
}

// Base class handler implementation
void KIO__RenameFileDialog_QBaseCloseEvent(KIO__RenameFileDialog* self, QCloseEvent* param1) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->setKIO__RenameFileDialog_CloseEvent_IsBase(true);
        vkiorenamefiledialog->closeEvent(param1);
    } else {
        ((VirtualKIORenameFileDialog*)self)->closeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameFileDialog_OnCloseEvent(KIO__RenameFileDialog* self, intptr_t slot) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->setKIO__RenameFileDialog_CloseEvent_Callback(reinterpret_cast<VirtualKIORenameFileDialog::KIO__RenameFileDialog_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__RenameFileDialog_ShowEvent(KIO__RenameFileDialog* self, QShowEvent* param1) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->showEvent(param1);
    } else {
        ((VirtualKIORenameFileDialog*)self)->showEvent(param1);
    }
}

// Base class handler implementation
void KIO__RenameFileDialog_QBaseShowEvent(KIO__RenameFileDialog* self, QShowEvent* param1) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->setKIO__RenameFileDialog_ShowEvent_IsBase(true);
        vkiorenamefiledialog->showEvent(param1);
    } else {
        ((VirtualKIORenameFileDialog*)self)->showEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameFileDialog_OnShowEvent(KIO__RenameFileDialog* self, intptr_t slot) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->setKIO__RenameFileDialog_ShowEvent_Callback(reinterpret_cast<VirtualKIORenameFileDialog::KIO__RenameFileDialog_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__RenameFileDialog_ResizeEvent(KIO__RenameFileDialog* self, QResizeEvent* param1) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->resizeEvent(param1);
    } else {
        ((VirtualKIORenameFileDialog*)self)->resizeEvent(param1);
    }
}

// Base class handler implementation
void KIO__RenameFileDialog_QBaseResizeEvent(KIO__RenameFileDialog* self, QResizeEvent* param1) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->setKIO__RenameFileDialog_ResizeEvent_IsBase(true);
        vkiorenamefiledialog->resizeEvent(param1);
    } else {
        ((VirtualKIORenameFileDialog*)self)->resizeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameFileDialog_OnResizeEvent(KIO__RenameFileDialog* self, intptr_t slot) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->setKIO__RenameFileDialog_ResizeEvent_Callback(reinterpret_cast<VirtualKIORenameFileDialog::KIO__RenameFileDialog_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__RenameFileDialog_ContextMenuEvent(KIO__RenameFileDialog* self, QContextMenuEvent* param1) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->contextMenuEvent(param1);
    } else {
        ((VirtualKIORenameFileDialog*)self)->contextMenuEvent(param1);
    }
}

// Base class handler implementation
void KIO__RenameFileDialog_QBaseContextMenuEvent(KIO__RenameFileDialog* self, QContextMenuEvent* param1) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->setKIO__RenameFileDialog_ContextMenuEvent_IsBase(true);
        vkiorenamefiledialog->contextMenuEvent(param1);
    } else {
        ((VirtualKIORenameFileDialog*)self)->contextMenuEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameFileDialog_OnContextMenuEvent(KIO__RenameFileDialog* self, intptr_t slot) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->setKIO__RenameFileDialog_ContextMenuEvent_Callback(reinterpret_cast<VirtualKIORenameFileDialog::KIO__RenameFileDialog_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIO__RenameFileDialog_EventFilter(KIO__RenameFileDialog* self, QObject* param1, QEvent* param2) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        return vkiorenamefiledialog->eventFilter(param1, param2);
    } else {
        return ((VirtualKIORenameFileDialog*)self)->eventFilter(param1, param2);
    }
}

// Base class handler implementation
bool KIO__RenameFileDialog_QBaseEventFilter(KIO__RenameFileDialog* self, QObject* param1, QEvent* param2) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->setKIO__RenameFileDialog_EventFilter_IsBase(true);
        return vkiorenamefiledialog->eventFilter(param1, param2);
    } else {
        return ((VirtualKIORenameFileDialog*)self)->eventFilter(param1, param2);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameFileDialog_OnEventFilter(KIO__RenameFileDialog* self, intptr_t slot) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->setKIO__RenameFileDialog_EventFilter_Callback(reinterpret_cast<VirtualKIORenameFileDialog::KIO__RenameFileDialog_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
int KIO__RenameFileDialog_DevType(const KIO__RenameFileDialog* self) {
    auto* vkiorenamefiledialog = const_cast<VirtualKIORenameFileDialog*>(dynamic_cast<const VirtualKIORenameFileDialog*>(self));
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        return vkiorenamefiledialog->devType();
    } else {
        return self->KIO::RenameFileDialog::devType();
    }
}

// Base class handler implementation
int KIO__RenameFileDialog_QBaseDevType(const KIO__RenameFileDialog* self) {
    auto* vkiorenamefiledialog = const_cast<VirtualKIORenameFileDialog*>(dynamic_cast<const VirtualKIORenameFileDialog*>(self));
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->setKIO__RenameFileDialog_DevType_IsBase(true);
        return vkiorenamefiledialog->devType();
    } else {
        return self->KIO::RenameFileDialog::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameFileDialog_OnDevType(const KIO__RenameFileDialog* self, intptr_t slot) {
    auto* vkiorenamefiledialog = const_cast<VirtualKIORenameFileDialog*>(dynamic_cast<const VirtualKIORenameFileDialog*>(self));
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->setKIO__RenameFileDialog_DevType_Callback(reinterpret_cast<VirtualKIORenameFileDialog::KIO__RenameFileDialog_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
int KIO__RenameFileDialog_HeightForWidth(const KIO__RenameFileDialog* self, int param1) {
    auto* vkiorenamefiledialog = const_cast<VirtualKIORenameFileDialog*>(dynamic_cast<const VirtualKIORenameFileDialog*>(self));
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        return vkiorenamefiledialog->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KIO::RenameFileDialog::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int KIO__RenameFileDialog_QBaseHeightForWidth(const KIO__RenameFileDialog* self, int param1) {
    auto* vkiorenamefiledialog = const_cast<VirtualKIORenameFileDialog*>(dynamic_cast<const VirtualKIORenameFileDialog*>(self));
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->setKIO__RenameFileDialog_HeightForWidth_IsBase(true);
        return vkiorenamefiledialog->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KIO::RenameFileDialog::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameFileDialog_OnHeightForWidth(const KIO__RenameFileDialog* self, intptr_t slot) {
    auto* vkiorenamefiledialog = const_cast<VirtualKIORenameFileDialog*>(dynamic_cast<const VirtualKIORenameFileDialog*>(self));
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->setKIO__RenameFileDialog_HeightForWidth_Callback(reinterpret_cast<VirtualKIORenameFileDialog::KIO__RenameFileDialog_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIO__RenameFileDialog_HasHeightForWidth(const KIO__RenameFileDialog* self) {
    auto* vkiorenamefiledialog = const_cast<VirtualKIORenameFileDialog*>(dynamic_cast<const VirtualKIORenameFileDialog*>(self));
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        return vkiorenamefiledialog->hasHeightForWidth();
    } else {
        return self->KIO::RenameFileDialog::hasHeightForWidth();
    }
}

// Base class handler implementation
bool KIO__RenameFileDialog_QBaseHasHeightForWidth(const KIO__RenameFileDialog* self) {
    auto* vkiorenamefiledialog = const_cast<VirtualKIORenameFileDialog*>(dynamic_cast<const VirtualKIORenameFileDialog*>(self));
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->setKIO__RenameFileDialog_HasHeightForWidth_IsBase(true);
        return vkiorenamefiledialog->hasHeightForWidth();
    } else {
        return self->KIO::RenameFileDialog::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameFileDialog_OnHasHeightForWidth(const KIO__RenameFileDialog* self, intptr_t slot) {
    auto* vkiorenamefiledialog = const_cast<VirtualKIORenameFileDialog*>(dynamic_cast<const VirtualKIORenameFileDialog*>(self));
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->setKIO__RenameFileDialog_HasHeightForWidth_Callback(reinterpret_cast<VirtualKIORenameFileDialog::KIO__RenameFileDialog_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* KIO__RenameFileDialog_PaintEngine(const KIO__RenameFileDialog* self) {
    auto* vkiorenamefiledialog = const_cast<VirtualKIORenameFileDialog*>(dynamic_cast<const VirtualKIORenameFileDialog*>(self));
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        return vkiorenamefiledialog->paintEngine();
    } else {
        return self->KIO::RenameFileDialog::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* KIO__RenameFileDialog_QBasePaintEngine(const KIO__RenameFileDialog* self) {
    auto* vkiorenamefiledialog = const_cast<VirtualKIORenameFileDialog*>(dynamic_cast<const VirtualKIORenameFileDialog*>(self));
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->setKIO__RenameFileDialog_PaintEngine_IsBase(true);
        return vkiorenamefiledialog->paintEngine();
    } else {
        return self->KIO::RenameFileDialog::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameFileDialog_OnPaintEngine(const KIO__RenameFileDialog* self, intptr_t slot) {
    auto* vkiorenamefiledialog = const_cast<VirtualKIORenameFileDialog*>(dynamic_cast<const VirtualKIORenameFileDialog*>(self));
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->setKIO__RenameFileDialog_PaintEngine_Callback(reinterpret_cast<VirtualKIORenameFileDialog::KIO__RenameFileDialog_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIO__RenameFileDialog_Event(KIO__RenameFileDialog* self, QEvent* event) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        return vkiorenamefiledialog->event(event);
    } else {
        return ((VirtualKIORenameFileDialog*)self)->event(event);
    }
}

// Base class handler implementation
bool KIO__RenameFileDialog_QBaseEvent(KIO__RenameFileDialog* self, QEvent* event) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->setKIO__RenameFileDialog_Event_IsBase(true);
        return vkiorenamefiledialog->event(event);
    } else {
        return ((VirtualKIORenameFileDialog*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameFileDialog_OnEvent(KIO__RenameFileDialog* self, intptr_t slot) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->setKIO__RenameFileDialog_Event_Callback(reinterpret_cast<VirtualKIORenameFileDialog::KIO__RenameFileDialog_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__RenameFileDialog_MousePressEvent(KIO__RenameFileDialog* self, QMouseEvent* event) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->mousePressEvent(event);
    } else {
        ((VirtualKIORenameFileDialog*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void KIO__RenameFileDialog_QBaseMousePressEvent(KIO__RenameFileDialog* self, QMouseEvent* event) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->setKIO__RenameFileDialog_MousePressEvent_IsBase(true);
        vkiorenamefiledialog->mousePressEvent(event);
    } else {
        ((VirtualKIORenameFileDialog*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameFileDialog_OnMousePressEvent(KIO__RenameFileDialog* self, intptr_t slot) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->setKIO__RenameFileDialog_MousePressEvent_Callback(reinterpret_cast<VirtualKIORenameFileDialog::KIO__RenameFileDialog_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__RenameFileDialog_MouseReleaseEvent(KIO__RenameFileDialog* self, QMouseEvent* event) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->mouseReleaseEvent(event);
    } else {
        ((VirtualKIORenameFileDialog*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void KIO__RenameFileDialog_QBaseMouseReleaseEvent(KIO__RenameFileDialog* self, QMouseEvent* event) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->setKIO__RenameFileDialog_MouseReleaseEvent_IsBase(true);
        vkiorenamefiledialog->mouseReleaseEvent(event);
    } else {
        ((VirtualKIORenameFileDialog*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameFileDialog_OnMouseReleaseEvent(KIO__RenameFileDialog* self, intptr_t slot) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->setKIO__RenameFileDialog_MouseReleaseEvent_Callback(reinterpret_cast<VirtualKIORenameFileDialog::KIO__RenameFileDialog_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__RenameFileDialog_MouseDoubleClickEvent(KIO__RenameFileDialog* self, QMouseEvent* event) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKIORenameFileDialog*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void KIO__RenameFileDialog_QBaseMouseDoubleClickEvent(KIO__RenameFileDialog* self, QMouseEvent* event) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->setKIO__RenameFileDialog_MouseDoubleClickEvent_IsBase(true);
        vkiorenamefiledialog->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKIORenameFileDialog*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameFileDialog_OnMouseDoubleClickEvent(KIO__RenameFileDialog* self, intptr_t slot) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->setKIO__RenameFileDialog_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualKIORenameFileDialog::KIO__RenameFileDialog_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__RenameFileDialog_MouseMoveEvent(KIO__RenameFileDialog* self, QMouseEvent* event) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->mouseMoveEvent(event);
    } else {
        ((VirtualKIORenameFileDialog*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void KIO__RenameFileDialog_QBaseMouseMoveEvent(KIO__RenameFileDialog* self, QMouseEvent* event) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->setKIO__RenameFileDialog_MouseMoveEvent_IsBase(true);
        vkiorenamefiledialog->mouseMoveEvent(event);
    } else {
        ((VirtualKIORenameFileDialog*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameFileDialog_OnMouseMoveEvent(KIO__RenameFileDialog* self, intptr_t slot) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->setKIO__RenameFileDialog_MouseMoveEvent_Callback(reinterpret_cast<VirtualKIORenameFileDialog::KIO__RenameFileDialog_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__RenameFileDialog_WheelEvent(KIO__RenameFileDialog* self, QWheelEvent* event) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->wheelEvent(event);
    } else {
        ((VirtualKIORenameFileDialog*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void KIO__RenameFileDialog_QBaseWheelEvent(KIO__RenameFileDialog* self, QWheelEvent* event) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->setKIO__RenameFileDialog_WheelEvent_IsBase(true);
        vkiorenamefiledialog->wheelEvent(event);
    } else {
        ((VirtualKIORenameFileDialog*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameFileDialog_OnWheelEvent(KIO__RenameFileDialog* self, intptr_t slot) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->setKIO__RenameFileDialog_WheelEvent_Callback(reinterpret_cast<VirtualKIORenameFileDialog::KIO__RenameFileDialog_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__RenameFileDialog_KeyReleaseEvent(KIO__RenameFileDialog* self, QKeyEvent* event) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->keyReleaseEvent(event);
    } else {
        ((VirtualKIORenameFileDialog*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void KIO__RenameFileDialog_QBaseKeyReleaseEvent(KIO__RenameFileDialog* self, QKeyEvent* event) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->setKIO__RenameFileDialog_KeyReleaseEvent_IsBase(true);
        vkiorenamefiledialog->keyReleaseEvent(event);
    } else {
        ((VirtualKIORenameFileDialog*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameFileDialog_OnKeyReleaseEvent(KIO__RenameFileDialog* self, intptr_t slot) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->setKIO__RenameFileDialog_KeyReleaseEvent_Callback(reinterpret_cast<VirtualKIORenameFileDialog::KIO__RenameFileDialog_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__RenameFileDialog_FocusInEvent(KIO__RenameFileDialog* self, QFocusEvent* event) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->focusInEvent(event);
    } else {
        ((VirtualKIORenameFileDialog*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void KIO__RenameFileDialog_QBaseFocusInEvent(KIO__RenameFileDialog* self, QFocusEvent* event) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->setKIO__RenameFileDialog_FocusInEvent_IsBase(true);
        vkiorenamefiledialog->focusInEvent(event);
    } else {
        ((VirtualKIORenameFileDialog*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameFileDialog_OnFocusInEvent(KIO__RenameFileDialog* self, intptr_t slot) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->setKIO__RenameFileDialog_FocusInEvent_Callback(reinterpret_cast<VirtualKIORenameFileDialog::KIO__RenameFileDialog_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__RenameFileDialog_FocusOutEvent(KIO__RenameFileDialog* self, QFocusEvent* event) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->focusOutEvent(event);
    } else {
        ((VirtualKIORenameFileDialog*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void KIO__RenameFileDialog_QBaseFocusOutEvent(KIO__RenameFileDialog* self, QFocusEvent* event) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->setKIO__RenameFileDialog_FocusOutEvent_IsBase(true);
        vkiorenamefiledialog->focusOutEvent(event);
    } else {
        ((VirtualKIORenameFileDialog*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameFileDialog_OnFocusOutEvent(KIO__RenameFileDialog* self, intptr_t slot) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->setKIO__RenameFileDialog_FocusOutEvent_Callback(reinterpret_cast<VirtualKIORenameFileDialog::KIO__RenameFileDialog_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__RenameFileDialog_EnterEvent(KIO__RenameFileDialog* self, QEnterEvent* event) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->enterEvent(event);
    } else {
        ((VirtualKIORenameFileDialog*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void KIO__RenameFileDialog_QBaseEnterEvent(KIO__RenameFileDialog* self, QEnterEvent* event) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->setKIO__RenameFileDialog_EnterEvent_IsBase(true);
        vkiorenamefiledialog->enterEvent(event);
    } else {
        ((VirtualKIORenameFileDialog*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameFileDialog_OnEnterEvent(KIO__RenameFileDialog* self, intptr_t slot) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->setKIO__RenameFileDialog_EnterEvent_Callback(reinterpret_cast<VirtualKIORenameFileDialog::KIO__RenameFileDialog_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__RenameFileDialog_LeaveEvent(KIO__RenameFileDialog* self, QEvent* event) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->leaveEvent(event);
    } else {
        ((VirtualKIORenameFileDialog*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void KIO__RenameFileDialog_QBaseLeaveEvent(KIO__RenameFileDialog* self, QEvent* event) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->setKIO__RenameFileDialog_LeaveEvent_IsBase(true);
        vkiorenamefiledialog->leaveEvent(event);
    } else {
        ((VirtualKIORenameFileDialog*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameFileDialog_OnLeaveEvent(KIO__RenameFileDialog* self, intptr_t slot) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->setKIO__RenameFileDialog_LeaveEvent_Callback(reinterpret_cast<VirtualKIORenameFileDialog::KIO__RenameFileDialog_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__RenameFileDialog_PaintEvent(KIO__RenameFileDialog* self, QPaintEvent* event) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->paintEvent(event);
    } else {
        ((VirtualKIORenameFileDialog*)self)->paintEvent(event);
    }
}

// Base class handler implementation
void KIO__RenameFileDialog_QBasePaintEvent(KIO__RenameFileDialog* self, QPaintEvent* event) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->setKIO__RenameFileDialog_PaintEvent_IsBase(true);
        vkiorenamefiledialog->paintEvent(event);
    } else {
        ((VirtualKIORenameFileDialog*)self)->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameFileDialog_OnPaintEvent(KIO__RenameFileDialog* self, intptr_t slot) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->setKIO__RenameFileDialog_PaintEvent_Callback(reinterpret_cast<VirtualKIORenameFileDialog::KIO__RenameFileDialog_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__RenameFileDialog_MoveEvent(KIO__RenameFileDialog* self, QMoveEvent* event) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->moveEvent(event);
    } else {
        ((VirtualKIORenameFileDialog*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void KIO__RenameFileDialog_QBaseMoveEvent(KIO__RenameFileDialog* self, QMoveEvent* event) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->setKIO__RenameFileDialog_MoveEvent_IsBase(true);
        vkiorenamefiledialog->moveEvent(event);
    } else {
        ((VirtualKIORenameFileDialog*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameFileDialog_OnMoveEvent(KIO__RenameFileDialog* self, intptr_t slot) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->setKIO__RenameFileDialog_MoveEvent_Callback(reinterpret_cast<VirtualKIORenameFileDialog::KIO__RenameFileDialog_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__RenameFileDialog_TabletEvent(KIO__RenameFileDialog* self, QTabletEvent* event) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->tabletEvent(event);
    } else {
        ((VirtualKIORenameFileDialog*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void KIO__RenameFileDialog_QBaseTabletEvent(KIO__RenameFileDialog* self, QTabletEvent* event) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->setKIO__RenameFileDialog_TabletEvent_IsBase(true);
        vkiorenamefiledialog->tabletEvent(event);
    } else {
        ((VirtualKIORenameFileDialog*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameFileDialog_OnTabletEvent(KIO__RenameFileDialog* self, intptr_t slot) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->setKIO__RenameFileDialog_TabletEvent_Callback(reinterpret_cast<VirtualKIORenameFileDialog::KIO__RenameFileDialog_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__RenameFileDialog_ActionEvent(KIO__RenameFileDialog* self, QActionEvent* event) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->actionEvent(event);
    } else {
        ((VirtualKIORenameFileDialog*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void KIO__RenameFileDialog_QBaseActionEvent(KIO__RenameFileDialog* self, QActionEvent* event) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->setKIO__RenameFileDialog_ActionEvent_IsBase(true);
        vkiorenamefiledialog->actionEvent(event);
    } else {
        ((VirtualKIORenameFileDialog*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameFileDialog_OnActionEvent(KIO__RenameFileDialog* self, intptr_t slot) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->setKIO__RenameFileDialog_ActionEvent_Callback(reinterpret_cast<VirtualKIORenameFileDialog::KIO__RenameFileDialog_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__RenameFileDialog_DragEnterEvent(KIO__RenameFileDialog* self, QDragEnterEvent* event) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->dragEnterEvent(event);
    } else {
        ((VirtualKIORenameFileDialog*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void KIO__RenameFileDialog_QBaseDragEnterEvent(KIO__RenameFileDialog* self, QDragEnterEvent* event) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->setKIO__RenameFileDialog_DragEnterEvent_IsBase(true);
        vkiorenamefiledialog->dragEnterEvent(event);
    } else {
        ((VirtualKIORenameFileDialog*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameFileDialog_OnDragEnterEvent(KIO__RenameFileDialog* self, intptr_t slot) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->setKIO__RenameFileDialog_DragEnterEvent_Callback(reinterpret_cast<VirtualKIORenameFileDialog::KIO__RenameFileDialog_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__RenameFileDialog_DragMoveEvent(KIO__RenameFileDialog* self, QDragMoveEvent* event) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->dragMoveEvent(event);
    } else {
        ((VirtualKIORenameFileDialog*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void KIO__RenameFileDialog_QBaseDragMoveEvent(KIO__RenameFileDialog* self, QDragMoveEvent* event) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->setKIO__RenameFileDialog_DragMoveEvent_IsBase(true);
        vkiorenamefiledialog->dragMoveEvent(event);
    } else {
        ((VirtualKIORenameFileDialog*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameFileDialog_OnDragMoveEvent(KIO__RenameFileDialog* self, intptr_t slot) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->setKIO__RenameFileDialog_DragMoveEvent_Callback(reinterpret_cast<VirtualKIORenameFileDialog::KIO__RenameFileDialog_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__RenameFileDialog_DragLeaveEvent(KIO__RenameFileDialog* self, QDragLeaveEvent* event) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->dragLeaveEvent(event);
    } else {
        ((VirtualKIORenameFileDialog*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void KIO__RenameFileDialog_QBaseDragLeaveEvent(KIO__RenameFileDialog* self, QDragLeaveEvent* event) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->setKIO__RenameFileDialog_DragLeaveEvent_IsBase(true);
        vkiorenamefiledialog->dragLeaveEvent(event);
    } else {
        ((VirtualKIORenameFileDialog*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameFileDialog_OnDragLeaveEvent(KIO__RenameFileDialog* self, intptr_t slot) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->setKIO__RenameFileDialog_DragLeaveEvent_Callback(reinterpret_cast<VirtualKIORenameFileDialog::KIO__RenameFileDialog_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__RenameFileDialog_DropEvent(KIO__RenameFileDialog* self, QDropEvent* event) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->dropEvent(event);
    } else {
        ((VirtualKIORenameFileDialog*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void KIO__RenameFileDialog_QBaseDropEvent(KIO__RenameFileDialog* self, QDropEvent* event) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->setKIO__RenameFileDialog_DropEvent_IsBase(true);
        vkiorenamefiledialog->dropEvent(event);
    } else {
        ((VirtualKIORenameFileDialog*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameFileDialog_OnDropEvent(KIO__RenameFileDialog* self, intptr_t slot) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->setKIO__RenameFileDialog_DropEvent_Callback(reinterpret_cast<VirtualKIORenameFileDialog::KIO__RenameFileDialog_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__RenameFileDialog_HideEvent(KIO__RenameFileDialog* self, QHideEvent* event) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->hideEvent(event);
    } else {
        ((VirtualKIORenameFileDialog*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void KIO__RenameFileDialog_QBaseHideEvent(KIO__RenameFileDialog* self, QHideEvent* event) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->setKIO__RenameFileDialog_HideEvent_IsBase(true);
        vkiorenamefiledialog->hideEvent(event);
    } else {
        ((VirtualKIORenameFileDialog*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameFileDialog_OnHideEvent(KIO__RenameFileDialog* self, intptr_t slot) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->setKIO__RenameFileDialog_HideEvent_Callback(reinterpret_cast<VirtualKIORenameFileDialog::KIO__RenameFileDialog_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIO__RenameFileDialog_NativeEvent(KIO__RenameFileDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        return vkiorenamefiledialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKIORenameFileDialog*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool KIO__RenameFileDialog_QBaseNativeEvent(KIO__RenameFileDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->setKIO__RenameFileDialog_NativeEvent_IsBase(true);
        return vkiorenamefiledialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKIORenameFileDialog*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameFileDialog_OnNativeEvent(KIO__RenameFileDialog* self, intptr_t slot) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->setKIO__RenameFileDialog_NativeEvent_Callback(reinterpret_cast<VirtualKIORenameFileDialog::KIO__RenameFileDialog_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__RenameFileDialog_ChangeEvent(KIO__RenameFileDialog* self, QEvent* param1) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->changeEvent(param1);
    } else {
        ((VirtualKIORenameFileDialog*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void KIO__RenameFileDialog_QBaseChangeEvent(KIO__RenameFileDialog* self, QEvent* param1) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->setKIO__RenameFileDialog_ChangeEvent_IsBase(true);
        vkiorenamefiledialog->changeEvent(param1);
    } else {
        ((VirtualKIORenameFileDialog*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameFileDialog_OnChangeEvent(KIO__RenameFileDialog* self, intptr_t slot) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->setKIO__RenameFileDialog_ChangeEvent_Callback(reinterpret_cast<VirtualKIORenameFileDialog::KIO__RenameFileDialog_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int KIO__RenameFileDialog_Metric(const KIO__RenameFileDialog* self, int param1) {
    auto* vkiorenamefiledialog = const_cast<VirtualKIORenameFileDialog*>(dynamic_cast<const VirtualKIORenameFileDialog*>(self));
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        return vkiorenamefiledialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKIORenameFileDialog*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int KIO__RenameFileDialog_QBaseMetric(const KIO__RenameFileDialog* self, int param1) {
    auto* vkiorenamefiledialog = const_cast<VirtualKIORenameFileDialog*>(dynamic_cast<const VirtualKIORenameFileDialog*>(self));
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->setKIO__RenameFileDialog_Metric_IsBase(true);
        return vkiorenamefiledialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKIORenameFileDialog*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameFileDialog_OnMetric(const KIO__RenameFileDialog* self, intptr_t slot) {
    auto* vkiorenamefiledialog = const_cast<VirtualKIORenameFileDialog*>(dynamic_cast<const VirtualKIORenameFileDialog*>(self));
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->setKIO__RenameFileDialog_Metric_Callback(reinterpret_cast<VirtualKIORenameFileDialog::KIO__RenameFileDialog_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__RenameFileDialog_InitPainter(const KIO__RenameFileDialog* self, QPainter* painter) {
    auto* vkiorenamefiledialog = const_cast<VirtualKIORenameFileDialog*>(dynamic_cast<const VirtualKIORenameFileDialog*>(self));
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->initPainter(painter);
    } else {
        ((VirtualKIORenameFileDialog*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void KIO__RenameFileDialog_QBaseInitPainter(const KIO__RenameFileDialog* self, QPainter* painter) {
    auto* vkiorenamefiledialog = const_cast<VirtualKIORenameFileDialog*>(dynamic_cast<const VirtualKIORenameFileDialog*>(self));
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->setKIO__RenameFileDialog_InitPainter_IsBase(true);
        vkiorenamefiledialog->initPainter(painter);
    } else {
        ((VirtualKIORenameFileDialog*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameFileDialog_OnInitPainter(const KIO__RenameFileDialog* self, intptr_t slot) {
    auto* vkiorenamefiledialog = const_cast<VirtualKIORenameFileDialog*>(dynamic_cast<const VirtualKIORenameFileDialog*>(self));
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->setKIO__RenameFileDialog_InitPainter_Callback(reinterpret_cast<VirtualKIORenameFileDialog::KIO__RenameFileDialog_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* KIO__RenameFileDialog_Redirected(const KIO__RenameFileDialog* self, QPoint* offset) {
    auto* vkiorenamefiledialog = const_cast<VirtualKIORenameFileDialog*>(dynamic_cast<const VirtualKIORenameFileDialog*>(self));
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        return vkiorenamefiledialog->redirected(offset);
    } else {
        return ((VirtualKIORenameFileDialog*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* KIO__RenameFileDialog_QBaseRedirected(const KIO__RenameFileDialog* self, QPoint* offset) {
    auto* vkiorenamefiledialog = const_cast<VirtualKIORenameFileDialog*>(dynamic_cast<const VirtualKIORenameFileDialog*>(self));
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->setKIO__RenameFileDialog_Redirected_IsBase(true);
        return vkiorenamefiledialog->redirected(offset);
    } else {
        return ((VirtualKIORenameFileDialog*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameFileDialog_OnRedirected(const KIO__RenameFileDialog* self, intptr_t slot) {
    auto* vkiorenamefiledialog = const_cast<VirtualKIORenameFileDialog*>(dynamic_cast<const VirtualKIORenameFileDialog*>(self));
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->setKIO__RenameFileDialog_Redirected_Callback(reinterpret_cast<VirtualKIORenameFileDialog::KIO__RenameFileDialog_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* KIO__RenameFileDialog_SharedPainter(const KIO__RenameFileDialog* self) {
    auto* vkiorenamefiledialog = const_cast<VirtualKIORenameFileDialog*>(dynamic_cast<const VirtualKIORenameFileDialog*>(self));
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        return vkiorenamefiledialog->sharedPainter();
    } else {
        return ((VirtualKIORenameFileDialog*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* KIO__RenameFileDialog_QBaseSharedPainter(const KIO__RenameFileDialog* self) {
    auto* vkiorenamefiledialog = const_cast<VirtualKIORenameFileDialog*>(dynamic_cast<const VirtualKIORenameFileDialog*>(self));
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->setKIO__RenameFileDialog_SharedPainter_IsBase(true);
        return vkiorenamefiledialog->sharedPainter();
    } else {
        return ((VirtualKIORenameFileDialog*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameFileDialog_OnSharedPainter(const KIO__RenameFileDialog* self, intptr_t slot) {
    auto* vkiorenamefiledialog = const_cast<VirtualKIORenameFileDialog*>(dynamic_cast<const VirtualKIORenameFileDialog*>(self));
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->setKIO__RenameFileDialog_SharedPainter_Callback(reinterpret_cast<VirtualKIORenameFileDialog::KIO__RenameFileDialog_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__RenameFileDialog_InputMethodEvent(KIO__RenameFileDialog* self, QInputMethodEvent* param1) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->inputMethodEvent(param1);
    } else {
        ((VirtualKIORenameFileDialog*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void KIO__RenameFileDialog_QBaseInputMethodEvent(KIO__RenameFileDialog* self, QInputMethodEvent* param1) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->setKIO__RenameFileDialog_InputMethodEvent_IsBase(true);
        vkiorenamefiledialog->inputMethodEvent(param1);
    } else {
        ((VirtualKIORenameFileDialog*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameFileDialog_OnInputMethodEvent(KIO__RenameFileDialog* self, intptr_t slot) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->setKIO__RenameFileDialog_InputMethodEvent_Callback(reinterpret_cast<VirtualKIORenameFileDialog::KIO__RenameFileDialog_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* KIO__RenameFileDialog_InputMethodQuery(const KIO__RenameFileDialog* self, int param1) {
    auto* vkiorenamefiledialog = const_cast<VirtualKIORenameFileDialog*>(dynamic_cast<const VirtualKIORenameFileDialog*>(self));
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        return new QVariant(vkiorenamefiledialog->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKIORenameFileDialog*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* KIO__RenameFileDialog_QBaseInputMethodQuery(const KIO__RenameFileDialog* self, int param1) {
    auto* vkiorenamefiledialog = const_cast<VirtualKIORenameFileDialog*>(dynamic_cast<const VirtualKIORenameFileDialog*>(self));
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->setKIO__RenameFileDialog_InputMethodQuery_IsBase(true);
        return new QVariant(vkiorenamefiledialog->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKIORenameFileDialog*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameFileDialog_OnInputMethodQuery(const KIO__RenameFileDialog* self, intptr_t slot) {
    auto* vkiorenamefiledialog = const_cast<VirtualKIORenameFileDialog*>(dynamic_cast<const VirtualKIORenameFileDialog*>(self));
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->setKIO__RenameFileDialog_InputMethodQuery_Callback(reinterpret_cast<VirtualKIORenameFileDialog::KIO__RenameFileDialog_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIO__RenameFileDialog_FocusNextPrevChild(KIO__RenameFileDialog* self, bool next) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        return vkiorenamefiledialog->focusNextPrevChild(next);
    } else {
        return ((VirtualKIORenameFileDialog*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool KIO__RenameFileDialog_QBaseFocusNextPrevChild(KIO__RenameFileDialog* self, bool next) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->setKIO__RenameFileDialog_FocusNextPrevChild_IsBase(true);
        return vkiorenamefiledialog->focusNextPrevChild(next);
    } else {
        return ((VirtualKIORenameFileDialog*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameFileDialog_OnFocusNextPrevChild(KIO__RenameFileDialog* self, intptr_t slot) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->setKIO__RenameFileDialog_FocusNextPrevChild_Callback(reinterpret_cast<VirtualKIORenameFileDialog::KIO__RenameFileDialog_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__RenameFileDialog_TimerEvent(KIO__RenameFileDialog* self, QTimerEvent* event) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->timerEvent(event);
    } else {
        ((VirtualKIORenameFileDialog*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KIO__RenameFileDialog_QBaseTimerEvent(KIO__RenameFileDialog* self, QTimerEvent* event) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->setKIO__RenameFileDialog_TimerEvent_IsBase(true);
        vkiorenamefiledialog->timerEvent(event);
    } else {
        ((VirtualKIORenameFileDialog*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameFileDialog_OnTimerEvent(KIO__RenameFileDialog* self, intptr_t slot) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->setKIO__RenameFileDialog_TimerEvent_Callback(reinterpret_cast<VirtualKIORenameFileDialog::KIO__RenameFileDialog_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__RenameFileDialog_ChildEvent(KIO__RenameFileDialog* self, QChildEvent* event) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->childEvent(event);
    } else {
        ((VirtualKIORenameFileDialog*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KIO__RenameFileDialog_QBaseChildEvent(KIO__RenameFileDialog* self, QChildEvent* event) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->setKIO__RenameFileDialog_ChildEvent_IsBase(true);
        vkiorenamefiledialog->childEvent(event);
    } else {
        ((VirtualKIORenameFileDialog*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameFileDialog_OnChildEvent(KIO__RenameFileDialog* self, intptr_t slot) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->setKIO__RenameFileDialog_ChildEvent_Callback(reinterpret_cast<VirtualKIORenameFileDialog::KIO__RenameFileDialog_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__RenameFileDialog_CustomEvent(KIO__RenameFileDialog* self, QEvent* event) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->customEvent(event);
    } else {
        ((VirtualKIORenameFileDialog*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KIO__RenameFileDialog_QBaseCustomEvent(KIO__RenameFileDialog* self, QEvent* event) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->setKIO__RenameFileDialog_CustomEvent_IsBase(true);
        vkiorenamefiledialog->customEvent(event);
    } else {
        ((VirtualKIORenameFileDialog*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameFileDialog_OnCustomEvent(KIO__RenameFileDialog* self, intptr_t slot) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->setKIO__RenameFileDialog_CustomEvent_Callback(reinterpret_cast<VirtualKIORenameFileDialog::KIO__RenameFileDialog_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__RenameFileDialog_ConnectNotify(KIO__RenameFileDialog* self, const QMetaMethod* signal) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->connectNotify(*signal);
    } else {
        ((VirtualKIORenameFileDialog*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KIO__RenameFileDialog_QBaseConnectNotify(KIO__RenameFileDialog* self, const QMetaMethod* signal) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->setKIO__RenameFileDialog_ConnectNotify_IsBase(true);
        vkiorenamefiledialog->connectNotify(*signal);
    } else {
        ((VirtualKIORenameFileDialog*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameFileDialog_OnConnectNotify(KIO__RenameFileDialog* self, intptr_t slot) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->setKIO__RenameFileDialog_ConnectNotify_Callback(reinterpret_cast<VirtualKIORenameFileDialog::KIO__RenameFileDialog_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__RenameFileDialog_DisconnectNotify(KIO__RenameFileDialog* self, const QMetaMethod* signal) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->disconnectNotify(*signal);
    } else {
        ((VirtualKIORenameFileDialog*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KIO__RenameFileDialog_QBaseDisconnectNotify(KIO__RenameFileDialog* self, const QMetaMethod* signal) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->setKIO__RenameFileDialog_DisconnectNotify_IsBase(true);
        vkiorenamefiledialog->disconnectNotify(*signal);
    } else {
        ((VirtualKIORenameFileDialog*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameFileDialog_OnDisconnectNotify(KIO__RenameFileDialog* self, intptr_t slot) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->setKIO__RenameFileDialog_DisconnectNotify_Callback(reinterpret_cast<VirtualKIORenameFileDialog::KIO__RenameFileDialog_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__RenameFileDialog_AdjustPosition(KIO__RenameFileDialog* self, QWidget* param1) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->adjustPosition(param1);
    } else {
        ((VirtualKIORenameFileDialog*)self)->adjustPosition(param1);
    }
}

// Base class handler implementation
void KIO__RenameFileDialog_QBaseAdjustPosition(KIO__RenameFileDialog* self, QWidget* param1) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->setKIO__RenameFileDialog_AdjustPosition_IsBase(true);
        vkiorenamefiledialog->adjustPosition(param1);
    } else {
        ((VirtualKIORenameFileDialog*)self)->adjustPosition(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameFileDialog_OnAdjustPosition(KIO__RenameFileDialog* self, intptr_t slot) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->setKIO__RenameFileDialog_AdjustPosition_Callback(reinterpret_cast<VirtualKIORenameFileDialog::KIO__RenameFileDialog_AdjustPosition_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__RenameFileDialog_UpdateMicroFocus(KIO__RenameFileDialog* self) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->updateMicroFocus();
    } else {
        ((VirtualKIORenameFileDialog*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void KIO__RenameFileDialog_QBaseUpdateMicroFocus(KIO__RenameFileDialog* self) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->setKIO__RenameFileDialog_UpdateMicroFocus_IsBase(true);
        vkiorenamefiledialog->updateMicroFocus();
    } else {
        ((VirtualKIORenameFileDialog*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameFileDialog_OnUpdateMicroFocus(KIO__RenameFileDialog* self, intptr_t slot) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->setKIO__RenameFileDialog_UpdateMicroFocus_Callback(reinterpret_cast<VirtualKIORenameFileDialog::KIO__RenameFileDialog_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__RenameFileDialog_Create(KIO__RenameFileDialog* self) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->create();
    } else {
        ((VirtualKIORenameFileDialog*)self)->create();
    }
}

// Base class handler implementation
void KIO__RenameFileDialog_QBaseCreate(KIO__RenameFileDialog* self) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->setKIO__RenameFileDialog_Create_IsBase(true);
        vkiorenamefiledialog->create();
    } else {
        ((VirtualKIORenameFileDialog*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameFileDialog_OnCreate(KIO__RenameFileDialog* self, intptr_t slot) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->setKIO__RenameFileDialog_Create_Callback(reinterpret_cast<VirtualKIORenameFileDialog::KIO__RenameFileDialog_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__RenameFileDialog_Destroy(KIO__RenameFileDialog* self) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->destroy();
    } else {
        ((VirtualKIORenameFileDialog*)self)->destroy();
    }
}

// Base class handler implementation
void KIO__RenameFileDialog_QBaseDestroy(KIO__RenameFileDialog* self) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->setKIO__RenameFileDialog_Destroy_IsBase(true);
        vkiorenamefiledialog->destroy();
    } else {
        ((VirtualKIORenameFileDialog*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameFileDialog_OnDestroy(KIO__RenameFileDialog* self, intptr_t slot) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->setKIO__RenameFileDialog_Destroy_Callback(reinterpret_cast<VirtualKIORenameFileDialog::KIO__RenameFileDialog_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIO__RenameFileDialog_FocusNextChild(KIO__RenameFileDialog* self) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        return vkiorenamefiledialog->focusNextChild();
    } else {
        return ((VirtualKIORenameFileDialog*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool KIO__RenameFileDialog_QBaseFocusNextChild(KIO__RenameFileDialog* self) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->setKIO__RenameFileDialog_FocusNextChild_IsBase(true);
        return vkiorenamefiledialog->focusNextChild();
    } else {
        return ((VirtualKIORenameFileDialog*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameFileDialog_OnFocusNextChild(KIO__RenameFileDialog* self, intptr_t slot) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->setKIO__RenameFileDialog_FocusNextChild_Callback(reinterpret_cast<VirtualKIORenameFileDialog::KIO__RenameFileDialog_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIO__RenameFileDialog_FocusPreviousChild(KIO__RenameFileDialog* self) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        return vkiorenamefiledialog->focusPreviousChild();
    } else {
        return ((VirtualKIORenameFileDialog*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool KIO__RenameFileDialog_QBaseFocusPreviousChild(KIO__RenameFileDialog* self) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->setKIO__RenameFileDialog_FocusPreviousChild_IsBase(true);
        return vkiorenamefiledialog->focusPreviousChild();
    } else {
        return ((VirtualKIORenameFileDialog*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameFileDialog_OnFocusPreviousChild(KIO__RenameFileDialog* self, intptr_t slot) {
    auto* vkiorenamefiledialog = dynamic_cast<VirtualKIORenameFileDialog*>(self);
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->setKIO__RenameFileDialog_FocusPreviousChild_Callback(reinterpret_cast<VirtualKIORenameFileDialog::KIO__RenameFileDialog_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KIO__RenameFileDialog_Sender(const KIO__RenameFileDialog* self) {
    auto* vkiorenamefiledialog = const_cast<VirtualKIORenameFileDialog*>(dynamic_cast<const VirtualKIORenameFileDialog*>(self));
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        return vkiorenamefiledialog->sender();
    } else {
        return ((VirtualKIORenameFileDialog*)self)->sender();
    }
}

// Base class handler implementation
QObject* KIO__RenameFileDialog_QBaseSender(const KIO__RenameFileDialog* self) {
    auto* vkiorenamefiledialog = const_cast<VirtualKIORenameFileDialog*>(dynamic_cast<const VirtualKIORenameFileDialog*>(self));
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->setKIO__RenameFileDialog_Sender_IsBase(true);
        return vkiorenamefiledialog->sender();
    } else {
        return ((VirtualKIORenameFileDialog*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameFileDialog_OnSender(const KIO__RenameFileDialog* self, intptr_t slot) {
    auto* vkiorenamefiledialog = const_cast<VirtualKIORenameFileDialog*>(dynamic_cast<const VirtualKIORenameFileDialog*>(self));
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->setKIO__RenameFileDialog_Sender_Callback(reinterpret_cast<VirtualKIORenameFileDialog::KIO__RenameFileDialog_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KIO__RenameFileDialog_SenderSignalIndex(const KIO__RenameFileDialog* self) {
    auto* vkiorenamefiledialog = const_cast<VirtualKIORenameFileDialog*>(dynamic_cast<const VirtualKIORenameFileDialog*>(self));
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        return vkiorenamefiledialog->senderSignalIndex();
    } else {
        return ((VirtualKIORenameFileDialog*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KIO__RenameFileDialog_QBaseSenderSignalIndex(const KIO__RenameFileDialog* self) {
    auto* vkiorenamefiledialog = const_cast<VirtualKIORenameFileDialog*>(dynamic_cast<const VirtualKIORenameFileDialog*>(self));
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->setKIO__RenameFileDialog_SenderSignalIndex_IsBase(true);
        return vkiorenamefiledialog->senderSignalIndex();
    } else {
        return ((VirtualKIORenameFileDialog*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameFileDialog_OnSenderSignalIndex(const KIO__RenameFileDialog* self, intptr_t slot) {
    auto* vkiorenamefiledialog = const_cast<VirtualKIORenameFileDialog*>(dynamic_cast<const VirtualKIORenameFileDialog*>(self));
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->setKIO__RenameFileDialog_SenderSignalIndex_Callback(reinterpret_cast<VirtualKIORenameFileDialog::KIO__RenameFileDialog_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KIO__RenameFileDialog_Receivers(const KIO__RenameFileDialog* self, const char* signal) {
    auto* vkiorenamefiledialog = const_cast<VirtualKIORenameFileDialog*>(dynamic_cast<const VirtualKIORenameFileDialog*>(self));
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        return vkiorenamefiledialog->receivers(signal);
    } else {
        return ((VirtualKIORenameFileDialog*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KIO__RenameFileDialog_QBaseReceivers(const KIO__RenameFileDialog* self, const char* signal) {
    auto* vkiorenamefiledialog = const_cast<VirtualKIORenameFileDialog*>(dynamic_cast<const VirtualKIORenameFileDialog*>(self));
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->setKIO__RenameFileDialog_Receivers_IsBase(true);
        return vkiorenamefiledialog->receivers(signal);
    } else {
        return ((VirtualKIORenameFileDialog*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameFileDialog_OnReceivers(const KIO__RenameFileDialog* self, intptr_t slot) {
    auto* vkiorenamefiledialog = const_cast<VirtualKIORenameFileDialog*>(dynamic_cast<const VirtualKIORenameFileDialog*>(self));
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->setKIO__RenameFileDialog_Receivers_Callback(reinterpret_cast<VirtualKIORenameFileDialog::KIO__RenameFileDialog_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIO__RenameFileDialog_IsSignalConnected(const KIO__RenameFileDialog* self, const QMetaMethod* signal) {
    auto* vkiorenamefiledialog = const_cast<VirtualKIORenameFileDialog*>(dynamic_cast<const VirtualKIORenameFileDialog*>(self));
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        return vkiorenamefiledialog->isSignalConnected(*signal);
    } else {
        return ((VirtualKIORenameFileDialog*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KIO__RenameFileDialog_QBaseIsSignalConnected(const KIO__RenameFileDialog* self, const QMetaMethod* signal) {
    auto* vkiorenamefiledialog = const_cast<VirtualKIORenameFileDialog*>(dynamic_cast<const VirtualKIORenameFileDialog*>(self));
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->setKIO__RenameFileDialog_IsSignalConnected_IsBase(true);
        return vkiorenamefiledialog->isSignalConnected(*signal);
    } else {
        return ((VirtualKIORenameFileDialog*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameFileDialog_OnIsSignalConnected(const KIO__RenameFileDialog* self, intptr_t slot) {
    auto* vkiorenamefiledialog = const_cast<VirtualKIORenameFileDialog*>(dynamic_cast<const VirtualKIORenameFileDialog*>(self));
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->setKIO__RenameFileDialog_IsSignalConnected_Callback(reinterpret_cast<VirtualKIORenameFileDialog::KIO__RenameFileDialog_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double KIO__RenameFileDialog_GetDecodedMetricF(const KIO__RenameFileDialog* self, int metricA, int metricB) {
    auto* vkiorenamefiledialog = const_cast<VirtualKIORenameFileDialog*>(dynamic_cast<const VirtualKIORenameFileDialog*>(self));
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        return vkiorenamefiledialog->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKIORenameFileDialog*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double KIO__RenameFileDialog_QBaseGetDecodedMetricF(const KIO__RenameFileDialog* self, int metricA, int metricB) {
    auto* vkiorenamefiledialog = const_cast<VirtualKIORenameFileDialog*>(dynamic_cast<const VirtualKIORenameFileDialog*>(self));
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->setKIO__RenameFileDialog_GetDecodedMetricF_IsBase(true);
        return vkiorenamefiledialog->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKIORenameFileDialog*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__RenameFileDialog_OnGetDecodedMetricF(const KIO__RenameFileDialog* self, intptr_t slot) {
    auto* vkiorenamefiledialog = const_cast<VirtualKIORenameFileDialog*>(dynamic_cast<const VirtualKIORenameFileDialog*>(self));
    if (vkiorenamefiledialog && vkiorenamefiledialog->isVirtualKIORenameFileDialog) {
        vkiorenamefiledialog->setKIO__RenameFileDialog_GetDecodedMetricF_Callback(reinterpret_cast<VirtualKIORenameFileDialog::KIO__RenameFileDialog_GetDecodedMetricF_Callback>(slot));
    }
}

void KIO__RenameFileDialog_Delete(KIO__RenameFileDialog* self) {
    delete self;
}
