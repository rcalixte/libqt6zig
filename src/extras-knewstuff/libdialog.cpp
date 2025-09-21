#include <KNSCore/EngineBase>
#include <KNSCore/Entry>
#define WORKAROUND_INNER_CLASS_DEFINITION_KNSWidgets__Dialog
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
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <dialog.h>
#include "libdialog.h"
#include "libdialog.hxx"

KNSWidgets__Dialog* KNSWidgets__Dialog_new(const libqt_string configFile) {
    QString configFile_QString = QString::fromUtf8(configFile.data, configFile.len);
    return new VirtualKNSWidgetsDialog(configFile_QString);
}

KNSWidgets__Dialog* KNSWidgets__Dialog_new2(const libqt_string configFile, QWidget* parent) {
    QString configFile_QString = QString::fromUtf8(configFile.data, configFile.len);
    return new VirtualKNSWidgetsDialog(configFile_QString, parent);
}

QMetaObject* KNSWidgets__Dialog_MetaObject(const KNSWidgets__Dialog* self) {
    return (QMetaObject*)self->metaObject();
}

void* KNSWidgets__Dialog_Metacast(KNSWidgets__Dialog* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KNSWidgets__Dialog_Metacall(KNSWidgets__Dialog* self, int param1, int param2, void** param3) {
    auto* vknswidgets__dialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgets__dialog && vknswidgets__dialog->isVirtualKNSWidgetsDialog) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKNSWidgetsDialog*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KNSWidgets__Dialog_Tr(const char* s) {
    QString _ret = KNSWidgets::Dialog::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

KNSCore__EngineBase* KNSWidgets__Dialog_Engine(KNSWidgets__Dialog* self) {
    return self->engine();
}

libqt_list /* of KNSCore__Entry* */ KNSWidgets__Dialog_ChangedEntries(const KNSWidgets__Dialog* self) {
    QList<KNSCore::Entry> _ret = self->changedEntries();
    // Convert QList<> from C++ memory to manually-managed C memory
    KNSCore__Entry** _arr = static_cast<KNSCore__Entry**>(malloc(sizeof(KNSCore__Entry*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new KNSCore::Entry(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void KNSWidgets__Dialog_Open(KNSWidgets__Dialog* self) {
    auto* vknswidgets__dialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgets__dialog && vknswidgets__dialog->isVirtualKNSWidgetsDialog) {
        self->open();
    } else {
        ((VirtualKNSWidgetsDialog*)self)->open();
    }
}

libqt_string KNSWidgets__Dialog_Tr2(const char* s, const char* c) {
    QString _ret = KNSWidgets::Dialog::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KNSWidgets__Dialog_Tr3(const char* s, const char* c, int n) {
    QString _ret = KNSWidgets::Dialog::tr(s, c, static_cast<int>(n));
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
int KNSWidgets__Dialog_QBaseMetacall(KNSWidgets__Dialog* self, int param1, int param2, void** param3) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->setKNSWidgets__Dialog_Metacall_IsBase(true);
        return vknswidgetsdialog->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KNSWidgets::Dialog::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Dialog_OnMetacall(KNSWidgets__Dialog* self, intptr_t slot) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->setKNSWidgets__Dialog_Metacall_Callback(reinterpret_cast<VirtualKNSWidgetsDialog::KNSWidgets__Dialog_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
void KNSWidgets__Dialog_QBaseOpen(KNSWidgets__Dialog* self) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->setKNSWidgets__Dialog_Open_IsBase(true);
        vknswidgetsdialog->open();
    } else {
        self->KNSWidgets::Dialog::open();
    }
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Dialog_OnOpen(KNSWidgets__Dialog* self, intptr_t slot) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->setKNSWidgets__Dialog_Open_Callback(reinterpret_cast<VirtualKNSWidgetsDialog::KNSWidgets__Dialog_Open_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSWidgets__Dialog_SetVisible(KNSWidgets__Dialog* self, bool visible) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->setVisible(visible);
    } else {
        self->KNSWidgets::Dialog::setVisible(visible);
    }
}

// Base class handler implementation
void KNSWidgets__Dialog_QBaseSetVisible(KNSWidgets__Dialog* self, bool visible) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->setKNSWidgets__Dialog_SetVisible_IsBase(true);
        vknswidgetsdialog->setVisible(visible);
    } else {
        self->KNSWidgets::Dialog::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Dialog_OnSetVisible(KNSWidgets__Dialog* self, intptr_t slot) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->setKNSWidgets__Dialog_SetVisible_Callback(reinterpret_cast<VirtualKNSWidgetsDialog::KNSWidgets__Dialog_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KNSWidgets__Dialog_SizeHint(const KNSWidgets__Dialog* self) {
    auto* vknswidgetsdialog = const_cast<VirtualKNSWidgetsDialog*>(dynamic_cast<const VirtualKNSWidgetsDialog*>(self));
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        return new QSize(vknswidgetsdialog->sizeHint());
    } else {
        return new QSize(((VirtualKNSWidgetsDialog*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* KNSWidgets__Dialog_QBaseSizeHint(const KNSWidgets__Dialog* self) {
    auto* vknswidgetsdialog = const_cast<VirtualKNSWidgetsDialog*>(dynamic_cast<const VirtualKNSWidgetsDialog*>(self));
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->setKNSWidgets__Dialog_SizeHint_IsBase(true);
        return new QSize(vknswidgetsdialog->sizeHint());
    } else {
        return new QSize(((VirtualKNSWidgetsDialog*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Dialog_OnSizeHint(const KNSWidgets__Dialog* self, intptr_t slot) {
    auto* vknswidgetsdialog = const_cast<VirtualKNSWidgetsDialog*>(dynamic_cast<const VirtualKNSWidgetsDialog*>(self));
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->setKNSWidgets__Dialog_SizeHint_Callback(reinterpret_cast<VirtualKNSWidgetsDialog::KNSWidgets__Dialog_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KNSWidgets__Dialog_MinimumSizeHint(const KNSWidgets__Dialog* self) {
    auto* vknswidgetsdialog = const_cast<VirtualKNSWidgetsDialog*>(dynamic_cast<const VirtualKNSWidgetsDialog*>(self));
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        return new QSize(vknswidgetsdialog->minimumSizeHint());
    } else {
        return new QSize(((VirtualKNSWidgetsDialog*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* KNSWidgets__Dialog_QBaseMinimumSizeHint(const KNSWidgets__Dialog* self) {
    auto* vknswidgetsdialog = const_cast<VirtualKNSWidgetsDialog*>(dynamic_cast<const VirtualKNSWidgetsDialog*>(self));
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->setKNSWidgets__Dialog_MinimumSizeHint_IsBase(true);
        return new QSize(vknswidgetsdialog->minimumSizeHint());
    } else {
        return new QSize(((VirtualKNSWidgetsDialog*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Dialog_OnMinimumSizeHint(const KNSWidgets__Dialog* self, intptr_t slot) {
    auto* vknswidgetsdialog = const_cast<VirtualKNSWidgetsDialog*>(dynamic_cast<const VirtualKNSWidgetsDialog*>(self));
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->setKNSWidgets__Dialog_MinimumSizeHint_Callback(reinterpret_cast<VirtualKNSWidgetsDialog::KNSWidgets__Dialog_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
int KNSWidgets__Dialog_Exec(KNSWidgets__Dialog* self) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        return vknswidgetsdialog->exec();
    } else {
        return self->KNSWidgets::Dialog::exec();
    }
}

// Base class handler implementation
int KNSWidgets__Dialog_QBaseExec(KNSWidgets__Dialog* self) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->setKNSWidgets__Dialog_Exec_IsBase(true);
        return vknswidgetsdialog->exec();
    } else {
        return self->KNSWidgets::Dialog::exec();
    }
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Dialog_OnExec(KNSWidgets__Dialog* self, intptr_t slot) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->setKNSWidgets__Dialog_Exec_Callback(reinterpret_cast<VirtualKNSWidgetsDialog::KNSWidgets__Dialog_Exec_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSWidgets__Dialog_Done(KNSWidgets__Dialog* self, int param1) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->done(static_cast<int>(param1));
    } else {
        self->KNSWidgets::Dialog::done(static_cast<int>(param1));
    }
}

// Base class handler implementation
void KNSWidgets__Dialog_QBaseDone(KNSWidgets__Dialog* self, int param1) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->setKNSWidgets__Dialog_Done_IsBase(true);
        vknswidgetsdialog->done(static_cast<int>(param1));
    } else {
        self->KNSWidgets::Dialog::done(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Dialog_OnDone(KNSWidgets__Dialog* self, intptr_t slot) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->setKNSWidgets__Dialog_Done_Callback(reinterpret_cast<VirtualKNSWidgetsDialog::KNSWidgets__Dialog_Done_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSWidgets__Dialog_Accept(KNSWidgets__Dialog* self) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->accept();
    } else {
        self->KNSWidgets::Dialog::accept();
    }
}

// Base class handler implementation
void KNSWidgets__Dialog_QBaseAccept(KNSWidgets__Dialog* self) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->setKNSWidgets__Dialog_Accept_IsBase(true);
        vknswidgetsdialog->accept();
    } else {
        self->KNSWidgets::Dialog::accept();
    }
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Dialog_OnAccept(KNSWidgets__Dialog* self, intptr_t slot) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->setKNSWidgets__Dialog_Accept_Callback(reinterpret_cast<VirtualKNSWidgetsDialog::KNSWidgets__Dialog_Accept_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSWidgets__Dialog_Reject(KNSWidgets__Dialog* self) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->reject();
    } else {
        self->KNSWidgets::Dialog::reject();
    }
}

// Base class handler implementation
void KNSWidgets__Dialog_QBaseReject(KNSWidgets__Dialog* self) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->setKNSWidgets__Dialog_Reject_IsBase(true);
        vknswidgetsdialog->reject();
    } else {
        self->KNSWidgets::Dialog::reject();
    }
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Dialog_OnReject(KNSWidgets__Dialog* self, intptr_t slot) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->setKNSWidgets__Dialog_Reject_Callback(reinterpret_cast<VirtualKNSWidgetsDialog::KNSWidgets__Dialog_Reject_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSWidgets__Dialog_KeyPressEvent(KNSWidgets__Dialog* self, QKeyEvent* param1) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->keyPressEvent(param1);
    } else {
        ((VirtualKNSWidgetsDialog*)self)->keyPressEvent(param1);
    }
}

// Base class handler implementation
void KNSWidgets__Dialog_QBaseKeyPressEvent(KNSWidgets__Dialog* self, QKeyEvent* param1) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->setKNSWidgets__Dialog_KeyPressEvent_IsBase(true);
        vknswidgetsdialog->keyPressEvent(param1);
    } else {
        ((VirtualKNSWidgetsDialog*)self)->keyPressEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Dialog_OnKeyPressEvent(KNSWidgets__Dialog* self, intptr_t slot) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->setKNSWidgets__Dialog_KeyPressEvent_Callback(reinterpret_cast<VirtualKNSWidgetsDialog::KNSWidgets__Dialog_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSWidgets__Dialog_CloseEvent(KNSWidgets__Dialog* self, QCloseEvent* param1) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->closeEvent(param1);
    } else {
        ((VirtualKNSWidgetsDialog*)self)->closeEvent(param1);
    }
}

// Base class handler implementation
void KNSWidgets__Dialog_QBaseCloseEvent(KNSWidgets__Dialog* self, QCloseEvent* param1) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->setKNSWidgets__Dialog_CloseEvent_IsBase(true);
        vknswidgetsdialog->closeEvent(param1);
    } else {
        ((VirtualKNSWidgetsDialog*)self)->closeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Dialog_OnCloseEvent(KNSWidgets__Dialog* self, intptr_t slot) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->setKNSWidgets__Dialog_CloseEvent_Callback(reinterpret_cast<VirtualKNSWidgetsDialog::KNSWidgets__Dialog_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSWidgets__Dialog_ShowEvent(KNSWidgets__Dialog* self, QShowEvent* param1) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->showEvent(param1);
    } else {
        ((VirtualKNSWidgetsDialog*)self)->showEvent(param1);
    }
}

// Base class handler implementation
void KNSWidgets__Dialog_QBaseShowEvent(KNSWidgets__Dialog* self, QShowEvent* param1) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->setKNSWidgets__Dialog_ShowEvent_IsBase(true);
        vknswidgetsdialog->showEvent(param1);
    } else {
        ((VirtualKNSWidgetsDialog*)self)->showEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Dialog_OnShowEvent(KNSWidgets__Dialog* self, intptr_t slot) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->setKNSWidgets__Dialog_ShowEvent_Callback(reinterpret_cast<VirtualKNSWidgetsDialog::KNSWidgets__Dialog_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSWidgets__Dialog_ResizeEvent(KNSWidgets__Dialog* self, QResizeEvent* param1) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->resizeEvent(param1);
    } else {
        ((VirtualKNSWidgetsDialog*)self)->resizeEvent(param1);
    }
}

// Base class handler implementation
void KNSWidgets__Dialog_QBaseResizeEvent(KNSWidgets__Dialog* self, QResizeEvent* param1) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->setKNSWidgets__Dialog_ResizeEvent_IsBase(true);
        vknswidgetsdialog->resizeEvent(param1);
    } else {
        ((VirtualKNSWidgetsDialog*)self)->resizeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Dialog_OnResizeEvent(KNSWidgets__Dialog* self, intptr_t slot) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->setKNSWidgets__Dialog_ResizeEvent_Callback(reinterpret_cast<VirtualKNSWidgetsDialog::KNSWidgets__Dialog_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSWidgets__Dialog_ContextMenuEvent(KNSWidgets__Dialog* self, QContextMenuEvent* param1) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->contextMenuEvent(param1);
    } else {
        ((VirtualKNSWidgetsDialog*)self)->contextMenuEvent(param1);
    }
}

// Base class handler implementation
void KNSWidgets__Dialog_QBaseContextMenuEvent(KNSWidgets__Dialog* self, QContextMenuEvent* param1) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->setKNSWidgets__Dialog_ContextMenuEvent_IsBase(true);
        vknswidgetsdialog->contextMenuEvent(param1);
    } else {
        ((VirtualKNSWidgetsDialog*)self)->contextMenuEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Dialog_OnContextMenuEvent(KNSWidgets__Dialog* self, intptr_t slot) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->setKNSWidgets__Dialog_ContextMenuEvent_Callback(reinterpret_cast<VirtualKNSWidgetsDialog::KNSWidgets__Dialog_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KNSWidgets__Dialog_EventFilter(KNSWidgets__Dialog* self, QObject* param1, QEvent* param2) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        return vknswidgetsdialog->eventFilter(param1, param2);
    } else {
        return ((VirtualKNSWidgetsDialog*)self)->eventFilter(param1, param2);
    }
}

// Base class handler implementation
bool KNSWidgets__Dialog_QBaseEventFilter(KNSWidgets__Dialog* self, QObject* param1, QEvent* param2) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->setKNSWidgets__Dialog_EventFilter_IsBase(true);
        return vknswidgetsdialog->eventFilter(param1, param2);
    } else {
        return ((VirtualKNSWidgetsDialog*)self)->eventFilter(param1, param2);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Dialog_OnEventFilter(KNSWidgets__Dialog* self, intptr_t slot) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->setKNSWidgets__Dialog_EventFilter_Callback(reinterpret_cast<VirtualKNSWidgetsDialog::KNSWidgets__Dialog_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
int KNSWidgets__Dialog_DevType(const KNSWidgets__Dialog* self) {
    auto* vknswidgetsdialog = const_cast<VirtualKNSWidgetsDialog*>(dynamic_cast<const VirtualKNSWidgetsDialog*>(self));
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        return vknswidgetsdialog->devType();
    } else {
        return self->KNSWidgets::Dialog::devType();
    }
}

// Base class handler implementation
int KNSWidgets__Dialog_QBaseDevType(const KNSWidgets__Dialog* self) {
    auto* vknswidgetsdialog = const_cast<VirtualKNSWidgetsDialog*>(dynamic_cast<const VirtualKNSWidgetsDialog*>(self));
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->setKNSWidgets__Dialog_DevType_IsBase(true);
        return vknswidgetsdialog->devType();
    } else {
        return self->KNSWidgets::Dialog::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Dialog_OnDevType(const KNSWidgets__Dialog* self, intptr_t slot) {
    auto* vknswidgetsdialog = const_cast<VirtualKNSWidgetsDialog*>(dynamic_cast<const VirtualKNSWidgetsDialog*>(self));
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->setKNSWidgets__Dialog_DevType_Callback(reinterpret_cast<VirtualKNSWidgetsDialog::KNSWidgets__Dialog_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
int KNSWidgets__Dialog_HeightForWidth(const KNSWidgets__Dialog* self, int param1) {
    auto* vknswidgetsdialog = const_cast<VirtualKNSWidgetsDialog*>(dynamic_cast<const VirtualKNSWidgetsDialog*>(self));
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        return vknswidgetsdialog->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KNSWidgets::Dialog::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int KNSWidgets__Dialog_QBaseHeightForWidth(const KNSWidgets__Dialog* self, int param1) {
    auto* vknswidgetsdialog = const_cast<VirtualKNSWidgetsDialog*>(dynamic_cast<const VirtualKNSWidgetsDialog*>(self));
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->setKNSWidgets__Dialog_HeightForWidth_IsBase(true);
        return vknswidgetsdialog->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KNSWidgets::Dialog::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Dialog_OnHeightForWidth(const KNSWidgets__Dialog* self, intptr_t slot) {
    auto* vknswidgetsdialog = const_cast<VirtualKNSWidgetsDialog*>(dynamic_cast<const VirtualKNSWidgetsDialog*>(self));
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->setKNSWidgets__Dialog_HeightForWidth_Callback(reinterpret_cast<VirtualKNSWidgetsDialog::KNSWidgets__Dialog_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool KNSWidgets__Dialog_HasHeightForWidth(const KNSWidgets__Dialog* self) {
    auto* vknswidgetsdialog = const_cast<VirtualKNSWidgetsDialog*>(dynamic_cast<const VirtualKNSWidgetsDialog*>(self));
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        return vknswidgetsdialog->hasHeightForWidth();
    } else {
        return self->KNSWidgets::Dialog::hasHeightForWidth();
    }
}

// Base class handler implementation
bool KNSWidgets__Dialog_QBaseHasHeightForWidth(const KNSWidgets__Dialog* self) {
    auto* vknswidgetsdialog = const_cast<VirtualKNSWidgetsDialog*>(dynamic_cast<const VirtualKNSWidgetsDialog*>(self));
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->setKNSWidgets__Dialog_HasHeightForWidth_IsBase(true);
        return vknswidgetsdialog->hasHeightForWidth();
    } else {
        return self->KNSWidgets::Dialog::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Dialog_OnHasHeightForWidth(const KNSWidgets__Dialog* self, intptr_t slot) {
    auto* vknswidgetsdialog = const_cast<VirtualKNSWidgetsDialog*>(dynamic_cast<const VirtualKNSWidgetsDialog*>(self));
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->setKNSWidgets__Dialog_HasHeightForWidth_Callback(reinterpret_cast<VirtualKNSWidgetsDialog::KNSWidgets__Dialog_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* KNSWidgets__Dialog_PaintEngine(const KNSWidgets__Dialog* self) {
    auto* vknswidgetsdialog = const_cast<VirtualKNSWidgetsDialog*>(dynamic_cast<const VirtualKNSWidgetsDialog*>(self));
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        return vknswidgetsdialog->paintEngine();
    } else {
        return self->KNSWidgets::Dialog::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* KNSWidgets__Dialog_QBasePaintEngine(const KNSWidgets__Dialog* self) {
    auto* vknswidgetsdialog = const_cast<VirtualKNSWidgetsDialog*>(dynamic_cast<const VirtualKNSWidgetsDialog*>(self));
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->setKNSWidgets__Dialog_PaintEngine_IsBase(true);
        return vknswidgetsdialog->paintEngine();
    } else {
        return self->KNSWidgets::Dialog::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Dialog_OnPaintEngine(const KNSWidgets__Dialog* self, intptr_t slot) {
    auto* vknswidgetsdialog = const_cast<VirtualKNSWidgetsDialog*>(dynamic_cast<const VirtualKNSWidgetsDialog*>(self));
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->setKNSWidgets__Dialog_PaintEngine_Callback(reinterpret_cast<VirtualKNSWidgetsDialog::KNSWidgets__Dialog_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
bool KNSWidgets__Dialog_Event(KNSWidgets__Dialog* self, QEvent* event) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        return vknswidgetsdialog->event(event);
    } else {
        return ((VirtualKNSWidgetsDialog*)self)->event(event);
    }
}

// Base class handler implementation
bool KNSWidgets__Dialog_QBaseEvent(KNSWidgets__Dialog* self, QEvent* event) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->setKNSWidgets__Dialog_Event_IsBase(true);
        return vknswidgetsdialog->event(event);
    } else {
        return ((VirtualKNSWidgetsDialog*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Dialog_OnEvent(KNSWidgets__Dialog* self, intptr_t slot) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->setKNSWidgets__Dialog_Event_Callback(reinterpret_cast<VirtualKNSWidgetsDialog::KNSWidgets__Dialog_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSWidgets__Dialog_MousePressEvent(KNSWidgets__Dialog* self, QMouseEvent* event) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->mousePressEvent(event);
    } else {
        ((VirtualKNSWidgetsDialog*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void KNSWidgets__Dialog_QBaseMousePressEvent(KNSWidgets__Dialog* self, QMouseEvent* event) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->setKNSWidgets__Dialog_MousePressEvent_IsBase(true);
        vknswidgetsdialog->mousePressEvent(event);
    } else {
        ((VirtualKNSWidgetsDialog*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Dialog_OnMousePressEvent(KNSWidgets__Dialog* self, intptr_t slot) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->setKNSWidgets__Dialog_MousePressEvent_Callback(reinterpret_cast<VirtualKNSWidgetsDialog::KNSWidgets__Dialog_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSWidgets__Dialog_MouseReleaseEvent(KNSWidgets__Dialog* self, QMouseEvent* event) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->mouseReleaseEvent(event);
    } else {
        ((VirtualKNSWidgetsDialog*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void KNSWidgets__Dialog_QBaseMouseReleaseEvent(KNSWidgets__Dialog* self, QMouseEvent* event) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->setKNSWidgets__Dialog_MouseReleaseEvent_IsBase(true);
        vknswidgetsdialog->mouseReleaseEvent(event);
    } else {
        ((VirtualKNSWidgetsDialog*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Dialog_OnMouseReleaseEvent(KNSWidgets__Dialog* self, intptr_t slot) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->setKNSWidgets__Dialog_MouseReleaseEvent_Callback(reinterpret_cast<VirtualKNSWidgetsDialog::KNSWidgets__Dialog_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSWidgets__Dialog_MouseDoubleClickEvent(KNSWidgets__Dialog* self, QMouseEvent* event) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKNSWidgetsDialog*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void KNSWidgets__Dialog_QBaseMouseDoubleClickEvent(KNSWidgets__Dialog* self, QMouseEvent* event) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->setKNSWidgets__Dialog_MouseDoubleClickEvent_IsBase(true);
        vknswidgetsdialog->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKNSWidgetsDialog*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Dialog_OnMouseDoubleClickEvent(KNSWidgets__Dialog* self, intptr_t slot) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->setKNSWidgets__Dialog_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualKNSWidgetsDialog::KNSWidgets__Dialog_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSWidgets__Dialog_MouseMoveEvent(KNSWidgets__Dialog* self, QMouseEvent* event) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->mouseMoveEvent(event);
    } else {
        ((VirtualKNSWidgetsDialog*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void KNSWidgets__Dialog_QBaseMouseMoveEvent(KNSWidgets__Dialog* self, QMouseEvent* event) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->setKNSWidgets__Dialog_MouseMoveEvent_IsBase(true);
        vknswidgetsdialog->mouseMoveEvent(event);
    } else {
        ((VirtualKNSWidgetsDialog*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Dialog_OnMouseMoveEvent(KNSWidgets__Dialog* self, intptr_t slot) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->setKNSWidgets__Dialog_MouseMoveEvent_Callback(reinterpret_cast<VirtualKNSWidgetsDialog::KNSWidgets__Dialog_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSWidgets__Dialog_WheelEvent(KNSWidgets__Dialog* self, QWheelEvent* event) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->wheelEvent(event);
    } else {
        ((VirtualKNSWidgetsDialog*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void KNSWidgets__Dialog_QBaseWheelEvent(KNSWidgets__Dialog* self, QWheelEvent* event) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->setKNSWidgets__Dialog_WheelEvent_IsBase(true);
        vknswidgetsdialog->wheelEvent(event);
    } else {
        ((VirtualKNSWidgetsDialog*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Dialog_OnWheelEvent(KNSWidgets__Dialog* self, intptr_t slot) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->setKNSWidgets__Dialog_WheelEvent_Callback(reinterpret_cast<VirtualKNSWidgetsDialog::KNSWidgets__Dialog_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSWidgets__Dialog_KeyReleaseEvent(KNSWidgets__Dialog* self, QKeyEvent* event) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->keyReleaseEvent(event);
    } else {
        ((VirtualKNSWidgetsDialog*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void KNSWidgets__Dialog_QBaseKeyReleaseEvent(KNSWidgets__Dialog* self, QKeyEvent* event) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->setKNSWidgets__Dialog_KeyReleaseEvent_IsBase(true);
        vknswidgetsdialog->keyReleaseEvent(event);
    } else {
        ((VirtualKNSWidgetsDialog*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Dialog_OnKeyReleaseEvent(KNSWidgets__Dialog* self, intptr_t slot) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->setKNSWidgets__Dialog_KeyReleaseEvent_Callback(reinterpret_cast<VirtualKNSWidgetsDialog::KNSWidgets__Dialog_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSWidgets__Dialog_FocusInEvent(KNSWidgets__Dialog* self, QFocusEvent* event) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->focusInEvent(event);
    } else {
        ((VirtualKNSWidgetsDialog*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void KNSWidgets__Dialog_QBaseFocusInEvent(KNSWidgets__Dialog* self, QFocusEvent* event) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->setKNSWidgets__Dialog_FocusInEvent_IsBase(true);
        vknswidgetsdialog->focusInEvent(event);
    } else {
        ((VirtualKNSWidgetsDialog*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Dialog_OnFocusInEvent(KNSWidgets__Dialog* self, intptr_t slot) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->setKNSWidgets__Dialog_FocusInEvent_Callback(reinterpret_cast<VirtualKNSWidgetsDialog::KNSWidgets__Dialog_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSWidgets__Dialog_FocusOutEvent(KNSWidgets__Dialog* self, QFocusEvent* event) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->focusOutEvent(event);
    } else {
        ((VirtualKNSWidgetsDialog*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void KNSWidgets__Dialog_QBaseFocusOutEvent(KNSWidgets__Dialog* self, QFocusEvent* event) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->setKNSWidgets__Dialog_FocusOutEvent_IsBase(true);
        vknswidgetsdialog->focusOutEvent(event);
    } else {
        ((VirtualKNSWidgetsDialog*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Dialog_OnFocusOutEvent(KNSWidgets__Dialog* self, intptr_t slot) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->setKNSWidgets__Dialog_FocusOutEvent_Callback(reinterpret_cast<VirtualKNSWidgetsDialog::KNSWidgets__Dialog_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSWidgets__Dialog_EnterEvent(KNSWidgets__Dialog* self, QEnterEvent* event) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->enterEvent(event);
    } else {
        ((VirtualKNSWidgetsDialog*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void KNSWidgets__Dialog_QBaseEnterEvent(KNSWidgets__Dialog* self, QEnterEvent* event) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->setKNSWidgets__Dialog_EnterEvent_IsBase(true);
        vknswidgetsdialog->enterEvent(event);
    } else {
        ((VirtualKNSWidgetsDialog*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Dialog_OnEnterEvent(KNSWidgets__Dialog* self, intptr_t slot) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->setKNSWidgets__Dialog_EnterEvent_Callback(reinterpret_cast<VirtualKNSWidgetsDialog::KNSWidgets__Dialog_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSWidgets__Dialog_LeaveEvent(KNSWidgets__Dialog* self, QEvent* event) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->leaveEvent(event);
    } else {
        ((VirtualKNSWidgetsDialog*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void KNSWidgets__Dialog_QBaseLeaveEvent(KNSWidgets__Dialog* self, QEvent* event) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->setKNSWidgets__Dialog_LeaveEvent_IsBase(true);
        vknswidgetsdialog->leaveEvent(event);
    } else {
        ((VirtualKNSWidgetsDialog*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Dialog_OnLeaveEvent(KNSWidgets__Dialog* self, intptr_t slot) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->setKNSWidgets__Dialog_LeaveEvent_Callback(reinterpret_cast<VirtualKNSWidgetsDialog::KNSWidgets__Dialog_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSWidgets__Dialog_PaintEvent(KNSWidgets__Dialog* self, QPaintEvent* event) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->paintEvent(event);
    } else {
        ((VirtualKNSWidgetsDialog*)self)->paintEvent(event);
    }
}

// Base class handler implementation
void KNSWidgets__Dialog_QBasePaintEvent(KNSWidgets__Dialog* self, QPaintEvent* event) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->setKNSWidgets__Dialog_PaintEvent_IsBase(true);
        vknswidgetsdialog->paintEvent(event);
    } else {
        ((VirtualKNSWidgetsDialog*)self)->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Dialog_OnPaintEvent(KNSWidgets__Dialog* self, intptr_t slot) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->setKNSWidgets__Dialog_PaintEvent_Callback(reinterpret_cast<VirtualKNSWidgetsDialog::KNSWidgets__Dialog_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSWidgets__Dialog_MoveEvent(KNSWidgets__Dialog* self, QMoveEvent* event) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->moveEvent(event);
    } else {
        ((VirtualKNSWidgetsDialog*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void KNSWidgets__Dialog_QBaseMoveEvent(KNSWidgets__Dialog* self, QMoveEvent* event) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->setKNSWidgets__Dialog_MoveEvent_IsBase(true);
        vknswidgetsdialog->moveEvent(event);
    } else {
        ((VirtualKNSWidgetsDialog*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Dialog_OnMoveEvent(KNSWidgets__Dialog* self, intptr_t slot) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->setKNSWidgets__Dialog_MoveEvent_Callback(reinterpret_cast<VirtualKNSWidgetsDialog::KNSWidgets__Dialog_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSWidgets__Dialog_TabletEvent(KNSWidgets__Dialog* self, QTabletEvent* event) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->tabletEvent(event);
    } else {
        ((VirtualKNSWidgetsDialog*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void KNSWidgets__Dialog_QBaseTabletEvent(KNSWidgets__Dialog* self, QTabletEvent* event) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->setKNSWidgets__Dialog_TabletEvent_IsBase(true);
        vknswidgetsdialog->tabletEvent(event);
    } else {
        ((VirtualKNSWidgetsDialog*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Dialog_OnTabletEvent(KNSWidgets__Dialog* self, intptr_t slot) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->setKNSWidgets__Dialog_TabletEvent_Callback(reinterpret_cast<VirtualKNSWidgetsDialog::KNSWidgets__Dialog_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSWidgets__Dialog_ActionEvent(KNSWidgets__Dialog* self, QActionEvent* event) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->actionEvent(event);
    } else {
        ((VirtualKNSWidgetsDialog*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void KNSWidgets__Dialog_QBaseActionEvent(KNSWidgets__Dialog* self, QActionEvent* event) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->setKNSWidgets__Dialog_ActionEvent_IsBase(true);
        vknswidgetsdialog->actionEvent(event);
    } else {
        ((VirtualKNSWidgetsDialog*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Dialog_OnActionEvent(KNSWidgets__Dialog* self, intptr_t slot) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->setKNSWidgets__Dialog_ActionEvent_Callback(reinterpret_cast<VirtualKNSWidgetsDialog::KNSWidgets__Dialog_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSWidgets__Dialog_DragEnterEvent(KNSWidgets__Dialog* self, QDragEnterEvent* event) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->dragEnterEvent(event);
    } else {
        ((VirtualKNSWidgetsDialog*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void KNSWidgets__Dialog_QBaseDragEnterEvent(KNSWidgets__Dialog* self, QDragEnterEvent* event) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->setKNSWidgets__Dialog_DragEnterEvent_IsBase(true);
        vknswidgetsdialog->dragEnterEvent(event);
    } else {
        ((VirtualKNSWidgetsDialog*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Dialog_OnDragEnterEvent(KNSWidgets__Dialog* self, intptr_t slot) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->setKNSWidgets__Dialog_DragEnterEvent_Callback(reinterpret_cast<VirtualKNSWidgetsDialog::KNSWidgets__Dialog_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSWidgets__Dialog_DragMoveEvent(KNSWidgets__Dialog* self, QDragMoveEvent* event) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->dragMoveEvent(event);
    } else {
        ((VirtualKNSWidgetsDialog*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void KNSWidgets__Dialog_QBaseDragMoveEvent(KNSWidgets__Dialog* self, QDragMoveEvent* event) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->setKNSWidgets__Dialog_DragMoveEvent_IsBase(true);
        vknswidgetsdialog->dragMoveEvent(event);
    } else {
        ((VirtualKNSWidgetsDialog*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Dialog_OnDragMoveEvent(KNSWidgets__Dialog* self, intptr_t slot) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->setKNSWidgets__Dialog_DragMoveEvent_Callback(reinterpret_cast<VirtualKNSWidgetsDialog::KNSWidgets__Dialog_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSWidgets__Dialog_DragLeaveEvent(KNSWidgets__Dialog* self, QDragLeaveEvent* event) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->dragLeaveEvent(event);
    } else {
        ((VirtualKNSWidgetsDialog*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void KNSWidgets__Dialog_QBaseDragLeaveEvent(KNSWidgets__Dialog* self, QDragLeaveEvent* event) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->setKNSWidgets__Dialog_DragLeaveEvent_IsBase(true);
        vknswidgetsdialog->dragLeaveEvent(event);
    } else {
        ((VirtualKNSWidgetsDialog*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Dialog_OnDragLeaveEvent(KNSWidgets__Dialog* self, intptr_t slot) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->setKNSWidgets__Dialog_DragLeaveEvent_Callback(reinterpret_cast<VirtualKNSWidgetsDialog::KNSWidgets__Dialog_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSWidgets__Dialog_DropEvent(KNSWidgets__Dialog* self, QDropEvent* event) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->dropEvent(event);
    } else {
        ((VirtualKNSWidgetsDialog*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void KNSWidgets__Dialog_QBaseDropEvent(KNSWidgets__Dialog* self, QDropEvent* event) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->setKNSWidgets__Dialog_DropEvent_IsBase(true);
        vknswidgetsdialog->dropEvent(event);
    } else {
        ((VirtualKNSWidgetsDialog*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Dialog_OnDropEvent(KNSWidgets__Dialog* self, intptr_t slot) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->setKNSWidgets__Dialog_DropEvent_Callback(reinterpret_cast<VirtualKNSWidgetsDialog::KNSWidgets__Dialog_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSWidgets__Dialog_HideEvent(KNSWidgets__Dialog* self, QHideEvent* event) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->hideEvent(event);
    } else {
        ((VirtualKNSWidgetsDialog*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void KNSWidgets__Dialog_QBaseHideEvent(KNSWidgets__Dialog* self, QHideEvent* event) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->setKNSWidgets__Dialog_HideEvent_IsBase(true);
        vknswidgetsdialog->hideEvent(event);
    } else {
        ((VirtualKNSWidgetsDialog*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Dialog_OnHideEvent(KNSWidgets__Dialog* self, intptr_t slot) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->setKNSWidgets__Dialog_HideEvent_Callback(reinterpret_cast<VirtualKNSWidgetsDialog::KNSWidgets__Dialog_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KNSWidgets__Dialog_NativeEvent(KNSWidgets__Dialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        return vknswidgetsdialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKNSWidgetsDialog*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool KNSWidgets__Dialog_QBaseNativeEvent(KNSWidgets__Dialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->setKNSWidgets__Dialog_NativeEvent_IsBase(true);
        return vknswidgetsdialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKNSWidgetsDialog*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Dialog_OnNativeEvent(KNSWidgets__Dialog* self, intptr_t slot) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->setKNSWidgets__Dialog_NativeEvent_Callback(reinterpret_cast<VirtualKNSWidgetsDialog::KNSWidgets__Dialog_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSWidgets__Dialog_ChangeEvent(KNSWidgets__Dialog* self, QEvent* param1) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->changeEvent(param1);
    } else {
        ((VirtualKNSWidgetsDialog*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void KNSWidgets__Dialog_QBaseChangeEvent(KNSWidgets__Dialog* self, QEvent* param1) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->setKNSWidgets__Dialog_ChangeEvent_IsBase(true);
        vknswidgetsdialog->changeEvent(param1);
    } else {
        ((VirtualKNSWidgetsDialog*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Dialog_OnChangeEvent(KNSWidgets__Dialog* self, intptr_t slot) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->setKNSWidgets__Dialog_ChangeEvent_Callback(reinterpret_cast<VirtualKNSWidgetsDialog::KNSWidgets__Dialog_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int KNSWidgets__Dialog_Metric(const KNSWidgets__Dialog* self, int param1) {
    auto* vknswidgetsdialog = const_cast<VirtualKNSWidgetsDialog*>(dynamic_cast<const VirtualKNSWidgetsDialog*>(self));
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        return vknswidgetsdialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKNSWidgetsDialog*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int KNSWidgets__Dialog_QBaseMetric(const KNSWidgets__Dialog* self, int param1) {
    auto* vknswidgetsdialog = const_cast<VirtualKNSWidgetsDialog*>(dynamic_cast<const VirtualKNSWidgetsDialog*>(self));
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->setKNSWidgets__Dialog_Metric_IsBase(true);
        return vknswidgetsdialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKNSWidgetsDialog*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Dialog_OnMetric(const KNSWidgets__Dialog* self, intptr_t slot) {
    auto* vknswidgetsdialog = const_cast<VirtualKNSWidgetsDialog*>(dynamic_cast<const VirtualKNSWidgetsDialog*>(self));
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->setKNSWidgets__Dialog_Metric_Callback(reinterpret_cast<VirtualKNSWidgetsDialog::KNSWidgets__Dialog_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSWidgets__Dialog_InitPainter(const KNSWidgets__Dialog* self, QPainter* painter) {
    auto* vknswidgetsdialog = const_cast<VirtualKNSWidgetsDialog*>(dynamic_cast<const VirtualKNSWidgetsDialog*>(self));
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->initPainter(painter);
    } else {
        ((VirtualKNSWidgetsDialog*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void KNSWidgets__Dialog_QBaseInitPainter(const KNSWidgets__Dialog* self, QPainter* painter) {
    auto* vknswidgetsdialog = const_cast<VirtualKNSWidgetsDialog*>(dynamic_cast<const VirtualKNSWidgetsDialog*>(self));
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->setKNSWidgets__Dialog_InitPainter_IsBase(true);
        vknswidgetsdialog->initPainter(painter);
    } else {
        ((VirtualKNSWidgetsDialog*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Dialog_OnInitPainter(const KNSWidgets__Dialog* self, intptr_t slot) {
    auto* vknswidgetsdialog = const_cast<VirtualKNSWidgetsDialog*>(dynamic_cast<const VirtualKNSWidgetsDialog*>(self));
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->setKNSWidgets__Dialog_InitPainter_Callback(reinterpret_cast<VirtualKNSWidgetsDialog::KNSWidgets__Dialog_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* KNSWidgets__Dialog_Redirected(const KNSWidgets__Dialog* self, QPoint* offset) {
    auto* vknswidgetsdialog = const_cast<VirtualKNSWidgetsDialog*>(dynamic_cast<const VirtualKNSWidgetsDialog*>(self));
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        return vknswidgetsdialog->redirected(offset);
    } else {
        return ((VirtualKNSWidgetsDialog*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* KNSWidgets__Dialog_QBaseRedirected(const KNSWidgets__Dialog* self, QPoint* offset) {
    auto* vknswidgetsdialog = const_cast<VirtualKNSWidgetsDialog*>(dynamic_cast<const VirtualKNSWidgetsDialog*>(self));
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->setKNSWidgets__Dialog_Redirected_IsBase(true);
        return vknswidgetsdialog->redirected(offset);
    } else {
        return ((VirtualKNSWidgetsDialog*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Dialog_OnRedirected(const KNSWidgets__Dialog* self, intptr_t slot) {
    auto* vknswidgetsdialog = const_cast<VirtualKNSWidgetsDialog*>(dynamic_cast<const VirtualKNSWidgetsDialog*>(self));
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->setKNSWidgets__Dialog_Redirected_Callback(reinterpret_cast<VirtualKNSWidgetsDialog::KNSWidgets__Dialog_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* KNSWidgets__Dialog_SharedPainter(const KNSWidgets__Dialog* self) {
    auto* vknswidgetsdialog = const_cast<VirtualKNSWidgetsDialog*>(dynamic_cast<const VirtualKNSWidgetsDialog*>(self));
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        return vknswidgetsdialog->sharedPainter();
    } else {
        return ((VirtualKNSWidgetsDialog*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* KNSWidgets__Dialog_QBaseSharedPainter(const KNSWidgets__Dialog* self) {
    auto* vknswidgetsdialog = const_cast<VirtualKNSWidgetsDialog*>(dynamic_cast<const VirtualKNSWidgetsDialog*>(self));
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->setKNSWidgets__Dialog_SharedPainter_IsBase(true);
        return vknswidgetsdialog->sharedPainter();
    } else {
        return ((VirtualKNSWidgetsDialog*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Dialog_OnSharedPainter(const KNSWidgets__Dialog* self, intptr_t slot) {
    auto* vknswidgetsdialog = const_cast<VirtualKNSWidgetsDialog*>(dynamic_cast<const VirtualKNSWidgetsDialog*>(self));
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->setKNSWidgets__Dialog_SharedPainter_Callback(reinterpret_cast<VirtualKNSWidgetsDialog::KNSWidgets__Dialog_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSWidgets__Dialog_InputMethodEvent(KNSWidgets__Dialog* self, QInputMethodEvent* param1) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->inputMethodEvent(param1);
    } else {
        ((VirtualKNSWidgetsDialog*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void KNSWidgets__Dialog_QBaseInputMethodEvent(KNSWidgets__Dialog* self, QInputMethodEvent* param1) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->setKNSWidgets__Dialog_InputMethodEvent_IsBase(true);
        vknswidgetsdialog->inputMethodEvent(param1);
    } else {
        ((VirtualKNSWidgetsDialog*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Dialog_OnInputMethodEvent(KNSWidgets__Dialog* self, intptr_t slot) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->setKNSWidgets__Dialog_InputMethodEvent_Callback(reinterpret_cast<VirtualKNSWidgetsDialog::KNSWidgets__Dialog_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* KNSWidgets__Dialog_InputMethodQuery(const KNSWidgets__Dialog* self, int param1) {
    auto* vknswidgetsdialog = const_cast<VirtualKNSWidgetsDialog*>(dynamic_cast<const VirtualKNSWidgetsDialog*>(self));
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        return new QVariant(vknswidgetsdialog->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKNSWidgetsDialog*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* KNSWidgets__Dialog_QBaseInputMethodQuery(const KNSWidgets__Dialog* self, int param1) {
    auto* vknswidgetsdialog = const_cast<VirtualKNSWidgetsDialog*>(dynamic_cast<const VirtualKNSWidgetsDialog*>(self));
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->setKNSWidgets__Dialog_InputMethodQuery_IsBase(true);
        return new QVariant(vknswidgetsdialog->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKNSWidgetsDialog*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Dialog_OnInputMethodQuery(const KNSWidgets__Dialog* self, intptr_t slot) {
    auto* vknswidgetsdialog = const_cast<VirtualKNSWidgetsDialog*>(dynamic_cast<const VirtualKNSWidgetsDialog*>(self));
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->setKNSWidgets__Dialog_InputMethodQuery_Callback(reinterpret_cast<VirtualKNSWidgetsDialog::KNSWidgets__Dialog_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool KNSWidgets__Dialog_FocusNextPrevChild(KNSWidgets__Dialog* self, bool next) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        return vknswidgetsdialog->focusNextPrevChild(next);
    } else {
        return ((VirtualKNSWidgetsDialog*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool KNSWidgets__Dialog_QBaseFocusNextPrevChild(KNSWidgets__Dialog* self, bool next) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->setKNSWidgets__Dialog_FocusNextPrevChild_IsBase(true);
        return vknswidgetsdialog->focusNextPrevChild(next);
    } else {
        return ((VirtualKNSWidgetsDialog*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Dialog_OnFocusNextPrevChild(KNSWidgets__Dialog* self, intptr_t slot) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->setKNSWidgets__Dialog_FocusNextPrevChild_Callback(reinterpret_cast<VirtualKNSWidgetsDialog::KNSWidgets__Dialog_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSWidgets__Dialog_TimerEvent(KNSWidgets__Dialog* self, QTimerEvent* event) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->timerEvent(event);
    } else {
        ((VirtualKNSWidgetsDialog*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KNSWidgets__Dialog_QBaseTimerEvent(KNSWidgets__Dialog* self, QTimerEvent* event) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->setKNSWidgets__Dialog_TimerEvent_IsBase(true);
        vknswidgetsdialog->timerEvent(event);
    } else {
        ((VirtualKNSWidgetsDialog*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Dialog_OnTimerEvent(KNSWidgets__Dialog* self, intptr_t slot) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->setKNSWidgets__Dialog_TimerEvent_Callback(reinterpret_cast<VirtualKNSWidgetsDialog::KNSWidgets__Dialog_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSWidgets__Dialog_ChildEvent(KNSWidgets__Dialog* self, QChildEvent* event) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->childEvent(event);
    } else {
        ((VirtualKNSWidgetsDialog*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KNSWidgets__Dialog_QBaseChildEvent(KNSWidgets__Dialog* self, QChildEvent* event) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->setKNSWidgets__Dialog_ChildEvent_IsBase(true);
        vknswidgetsdialog->childEvent(event);
    } else {
        ((VirtualKNSWidgetsDialog*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Dialog_OnChildEvent(KNSWidgets__Dialog* self, intptr_t slot) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->setKNSWidgets__Dialog_ChildEvent_Callback(reinterpret_cast<VirtualKNSWidgetsDialog::KNSWidgets__Dialog_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSWidgets__Dialog_CustomEvent(KNSWidgets__Dialog* self, QEvent* event) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->customEvent(event);
    } else {
        ((VirtualKNSWidgetsDialog*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KNSWidgets__Dialog_QBaseCustomEvent(KNSWidgets__Dialog* self, QEvent* event) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->setKNSWidgets__Dialog_CustomEvent_IsBase(true);
        vknswidgetsdialog->customEvent(event);
    } else {
        ((VirtualKNSWidgetsDialog*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Dialog_OnCustomEvent(KNSWidgets__Dialog* self, intptr_t slot) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->setKNSWidgets__Dialog_CustomEvent_Callback(reinterpret_cast<VirtualKNSWidgetsDialog::KNSWidgets__Dialog_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSWidgets__Dialog_ConnectNotify(KNSWidgets__Dialog* self, const QMetaMethod* signal) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->connectNotify(*signal);
    } else {
        ((VirtualKNSWidgetsDialog*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KNSWidgets__Dialog_QBaseConnectNotify(KNSWidgets__Dialog* self, const QMetaMethod* signal) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->setKNSWidgets__Dialog_ConnectNotify_IsBase(true);
        vknswidgetsdialog->connectNotify(*signal);
    } else {
        ((VirtualKNSWidgetsDialog*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Dialog_OnConnectNotify(KNSWidgets__Dialog* self, intptr_t slot) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->setKNSWidgets__Dialog_ConnectNotify_Callback(reinterpret_cast<VirtualKNSWidgetsDialog::KNSWidgets__Dialog_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSWidgets__Dialog_DisconnectNotify(KNSWidgets__Dialog* self, const QMetaMethod* signal) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->disconnectNotify(*signal);
    } else {
        ((VirtualKNSWidgetsDialog*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KNSWidgets__Dialog_QBaseDisconnectNotify(KNSWidgets__Dialog* self, const QMetaMethod* signal) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->setKNSWidgets__Dialog_DisconnectNotify_IsBase(true);
        vknswidgetsdialog->disconnectNotify(*signal);
    } else {
        ((VirtualKNSWidgetsDialog*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Dialog_OnDisconnectNotify(KNSWidgets__Dialog* self, intptr_t slot) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->setKNSWidgets__Dialog_DisconnectNotify_Callback(reinterpret_cast<VirtualKNSWidgetsDialog::KNSWidgets__Dialog_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSWidgets__Dialog_AdjustPosition(KNSWidgets__Dialog* self, QWidget* param1) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->adjustPosition(param1);
    } else {
        ((VirtualKNSWidgetsDialog*)self)->adjustPosition(param1);
    }
}

// Base class handler implementation
void KNSWidgets__Dialog_QBaseAdjustPosition(KNSWidgets__Dialog* self, QWidget* param1) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->setKNSWidgets__Dialog_AdjustPosition_IsBase(true);
        vknswidgetsdialog->adjustPosition(param1);
    } else {
        ((VirtualKNSWidgetsDialog*)self)->adjustPosition(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Dialog_OnAdjustPosition(KNSWidgets__Dialog* self, intptr_t slot) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->setKNSWidgets__Dialog_AdjustPosition_Callback(reinterpret_cast<VirtualKNSWidgetsDialog::KNSWidgets__Dialog_AdjustPosition_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSWidgets__Dialog_UpdateMicroFocus(KNSWidgets__Dialog* self) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->updateMicroFocus();
    } else {
        ((VirtualKNSWidgetsDialog*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void KNSWidgets__Dialog_QBaseUpdateMicroFocus(KNSWidgets__Dialog* self) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->setKNSWidgets__Dialog_UpdateMicroFocus_IsBase(true);
        vknswidgetsdialog->updateMicroFocus();
    } else {
        ((VirtualKNSWidgetsDialog*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Dialog_OnUpdateMicroFocus(KNSWidgets__Dialog* self, intptr_t slot) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->setKNSWidgets__Dialog_UpdateMicroFocus_Callback(reinterpret_cast<VirtualKNSWidgetsDialog::KNSWidgets__Dialog_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSWidgets__Dialog_Create(KNSWidgets__Dialog* self) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->create();
    } else {
        ((VirtualKNSWidgetsDialog*)self)->create();
    }
}

// Base class handler implementation
void KNSWidgets__Dialog_QBaseCreate(KNSWidgets__Dialog* self) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->setKNSWidgets__Dialog_Create_IsBase(true);
        vknswidgetsdialog->create();
    } else {
        ((VirtualKNSWidgetsDialog*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Dialog_OnCreate(KNSWidgets__Dialog* self, intptr_t slot) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->setKNSWidgets__Dialog_Create_Callback(reinterpret_cast<VirtualKNSWidgetsDialog::KNSWidgets__Dialog_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSWidgets__Dialog_Destroy(KNSWidgets__Dialog* self) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->destroy();
    } else {
        ((VirtualKNSWidgetsDialog*)self)->destroy();
    }
}

// Base class handler implementation
void KNSWidgets__Dialog_QBaseDestroy(KNSWidgets__Dialog* self) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->setKNSWidgets__Dialog_Destroy_IsBase(true);
        vknswidgetsdialog->destroy();
    } else {
        ((VirtualKNSWidgetsDialog*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Dialog_OnDestroy(KNSWidgets__Dialog* self, intptr_t slot) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->setKNSWidgets__Dialog_Destroy_Callback(reinterpret_cast<VirtualKNSWidgetsDialog::KNSWidgets__Dialog_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool KNSWidgets__Dialog_FocusNextChild(KNSWidgets__Dialog* self) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        return vknswidgetsdialog->focusNextChild();
    } else {
        return ((VirtualKNSWidgetsDialog*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool KNSWidgets__Dialog_QBaseFocusNextChild(KNSWidgets__Dialog* self) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->setKNSWidgets__Dialog_FocusNextChild_IsBase(true);
        return vknswidgetsdialog->focusNextChild();
    } else {
        return ((VirtualKNSWidgetsDialog*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Dialog_OnFocusNextChild(KNSWidgets__Dialog* self, intptr_t slot) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->setKNSWidgets__Dialog_FocusNextChild_Callback(reinterpret_cast<VirtualKNSWidgetsDialog::KNSWidgets__Dialog_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KNSWidgets__Dialog_FocusPreviousChild(KNSWidgets__Dialog* self) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        return vknswidgetsdialog->focusPreviousChild();
    } else {
        return ((VirtualKNSWidgetsDialog*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool KNSWidgets__Dialog_QBaseFocusPreviousChild(KNSWidgets__Dialog* self) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->setKNSWidgets__Dialog_FocusPreviousChild_IsBase(true);
        return vknswidgetsdialog->focusPreviousChild();
    } else {
        return ((VirtualKNSWidgetsDialog*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Dialog_OnFocusPreviousChild(KNSWidgets__Dialog* self, intptr_t slot) {
    auto* vknswidgetsdialog = dynamic_cast<VirtualKNSWidgetsDialog*>(self);
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->setKNSWidgets__Dialog_FocusPreviousChild_Callback(reinterpret_cast<VirtualKNSWidgetsDialog::KNSWidgets__Dialog_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KNSWidgets__Dialog_Sender(const KNSWidgets__Dialog* self) {
    auto* vknswidgetsdialog = const_cast<VirtualKNSWidgetsDialog*>(dynamic_cast<const VirtualKNSWidgetsDialog*>(self));
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        return vknswidgetsdialog->sender();
    } else {
        return ((VirtualKNSWidgetsDialog*)self)->sender();
    }
}

// Base class handler implementation
QObject* KNSWidgets__Dialog_QBaseSender(const KNSWidgets__Dialog* self) {
    auto* vknswidgetsdialog = const_cast<VirtualKNSWidgetsDialog*>(dynamic_cast<const VirtualKNSWidgetsDialog*>(self));
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->setKNSWidgets__Dialog_Sender_IsBase(true);
        return vknswidgetsdialog->sender();
    } else {
        return ((VirtualKNSWidgetsDialog*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Dialog_OnSender(const KNSWidgets__Dialog* self, intptr_t slot) {
    auto* vknswidgetsdialog = const_cast<VirtualKNSWidgetsDialog*>(dynamic_cast<const VirtualKNSWidgetsDialog*>(self));
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->setKNSWidgets__Dialog_Sender_Callback(reinterpret_cast<VirtualKNSWidgetsDialog::KNSWidgets__Dialog_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KNSWidgets__Dialog_SenderSignalIndex(const KNSWidgets__Dialog* self) {
    auto* vknswidgetsdialog = const_cast<VirtualKNSWidgetsDialog*>(dynamic_cast<const VirtualKNSWidgetsDialog*>(self));
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        return vknswidgetsdialog->senderSignalIndex();
    } else {
        return ((VirtualKNSWidgetsDialog*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KNSWidgets__Dialog_QBaseSenderSignalIndex(const KNSWidgets__Dialog* self) {
    auto* vknswidgetsdialog = const_cast<VirtualKNSWidgetsDialog*>(dynamic_cast<const VirtualKNSWidgetsDialog*>(self));
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->setKNSWidgets__Dialog_SenderSignalIndex_IsBase(true);
        return vknswidgetsdialog->senderSignalIndex();
    } else {
        return ((VirtualKNSWidgetsDialog*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Dialog_OnSenderSignalIndex(const KNSWidgets__Dialog* self, intptr_t slot) {
    auto* vknswidgetsdialog = const_cast<VirtualKNSWidgetsDialog*>(dynamic_cast<const VirtualKNSWidgetsDialog*>(self));
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->setKNSWidgets__Dialog_SenderSignalIndex_Callback(reinterpret_cast<VirtualKNSWidgetsDialog::KNSWidgets__Dialog_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KNSWidgets__Dialog_Receivers(const KNSWidgets__Dialog* self, const char* signal) {
    auto* vknswidgetsdialog = const_cast<VirtualKNSWidgetsDialog*>(dynamic_cast<const VirtualKNSWidgetsDialog*>(self));
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        return vknswidgetsdialog->receivers(signal);
    } else {
        return ((VirtualKNSWidgetsDialog*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KNSWidgets__Dialog_QBaseReceivers(const KNSWidgets__Dialog* self, const char* signal) {
    auto* vknswidgetsdialog = const_cast<VirtualKNSWidgetsDialog*>(dynamic_cast<const VirtualKNSWidgetsDialog*>(self));
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->setKNSWidgets__Dialog_Receivers_IsBase(true);
        return vknswidgetsdialog->receivers(signal);
    } else {
        return ((VirtualKNSWidgetsDialog*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Dialog_OnReceivers(const KNSWidgets__Dialog* self, intptr_t slot) {
    auto* vknswidgetsdialog = const_cast<VirtualKNSWidgetsDialog*>(dynamic_cast<const VirtualKNSWidgetsDialog*>(self));
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->setKNSWidgets__Dialog_Receivers_Callback(reinterpret_cast<VirtualKNSWidgetsDialog::KNSWidgets__Dialog_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KNSWidgets__Dialog_IsSignalConnected(const KNSWidgets__Dialog* self, const QMetaMethod* signal) {
    auto* vknswidgetsdialog = const_cast<VirtualKNSWidgetsDialog*>(dynamic_cast<const VirtualKNSWidgetsDialog*>(self));
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        return vknswidgetsdialog->isSignalConnected(*signal);
    } else {
        return ((VirtualKNSWidgetsDialog*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KNSWidgets__Dialog_QBaseIsSignalConnected(const KNSWidgets__Dialog* self, const QMetaMethod* signal) {
    auto* vknswidgetsdialog = const_cast<VirtualKNSWidgetsDialog*>(dynamic_cast<const VirtualKNSWidgetsDialog*>(self));
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->setKNSWidgets__Dialog_IsSignalConnected_IsBase(true);
        return vknswidgetsdialog->isSignalConnected(*signal);
    } else {
        return ((VirtualKNSWidgetsDialog*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Dialog_OnIsSignalConnected(const KNSWidgets__Dialog* self, intptr_t slot) {
    auto* vknswidgetsdialog = const_cast<VirtualKNSWidgetsDialog*>(dynamic_cast<const VirtualKNSWidgetsDialog*>(self));
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->setKNSWidgets__Dialog_IsSignalConnected_Callback(reinterpret_cast<VirtualKNSWidgetsDialog::KNSWidgets__Dialog_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double KNSWidgets__Dialog_GetDecodedMetricF(const KNSWidgets__Dialog* self, int metricA, int metricB) {
    auto* vknswidgetsdialog = const_cast<VirtualKNSWidgetsDialog*>(dynamic_cast<const VirtualKNSWidgetsDialog*>(self));
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        return vknswidgetsdialog->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKNSWidgetsDialog*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double KNSWidgets__Dialog_QBaseGetDecodedMetricF(const KNSWidgets__Dialog* self, int metricA, int metricB) {
    auto* vknswidgetsdialog = const_cast<VirtualKNSWidgetsDialog*>(dynamic_cast<const VirtualKNSWidgetsDialog*>(self));
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->setKNSWidgets__Dialog_GetDecodedMetricF_IsBase(true);
        return vknswidgetsdialog->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKNSWidgetsDialog*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void KNSWidgets__Dialog_OnGetDecodedMetricF(const KNSWidgets__Dialog* self, intptr_t slot) {
    auto* vknswidgetsdialog = const_cast<VirtualKNSWidgetsDialog*>(dynamic_cast<const VirtualKNSWidgetsDialog*>(self));
    if (vknswidgetsdialog && vknswidgetsdialog->isVirtualKNSWidgetsDialog) {
        vknswidgetsdialog->setKNSWidgets__Dialog_GetDecodedMetricF_Callback(reinterpret_cast<VirtualKNSWidgetsDialog::KNSWidgets__Dialog_GetDecodedMetricF_Callback>(slot));
    }
}

void KNSWidgets__Dialog_Delete(KNSWidgets__Dialog* self) {
    delete self;
}
