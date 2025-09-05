#include <KActionCollection>
#include <KShortcutsDialog>
#include <QAction>
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
#include <kshortcutsdialog.h>
#include "libkshortcutsdialog.h"
#include "libkshortcutsdialog.hxx"

KShortcutsDialog* KShortcutsDialog_new(QWidget* parent) {
    return new VirtualKShortcutsDialog(parent);
}

KShortcutsDialog* KShortcutsDialog_new2() {
    return new VirtualKShortcutsDialog();
}

KShortcutsDialog* KShortcutsDialog_new3(int actionTypes) {
    return new VirtualKShortcutsDialog(static_cast<KShortcutsEditor::ActionTypes>(actionTypes));
}

KShortcutsDialog* KShortcutsDialog_new4(int actionTypes, int allowLetterShortcuts) {
    return new VirtualKShortcutsDialog(static_cast<KShortcutsEditor::ActionTypes>(actionTypes), static_cast<KShortcutsEditor::LetterShortcuts>(allowLetterShortcuts));
}

KShortcutsDialog* KShortcutsDialog_new5(int actionTypes, int allowLetterShortcuts, QWidget* parent) {
    return new VirtualKShortcutsDialog(static_cast<KShortcutsEditor::ActionTypes>(actionTypes), static_cast<KShortcutsEditor::LetterShortcuts>(allowLetterShortcuts), parent);
}

QMetaObject* KShortcutsDialog_MetaObject(const KShortcutsDialog* self) {
    return (QMetaObject*)self->metaObject();
}

void* KShortcutsDialog_Metacast(KShortcutsDialog* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KShortcutsDialog_Metacall(KShortcutsDialog* self, int param1, int param2, void** param3) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKShortcutsDialog*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KShortcutsDialog_Tr(const char* s) {
    QString _ret = KShortcutsDialog::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KShortcutsDialog_AddCollection(KShortcutsDialog* self, KActionCollection* collection) {
    self->addCollection(collection);
}

libqt_list /* of KActionCollection* */ KShortcutsDialog_ActionCollections(const KShortcutsDialog* self) {
    QList<KActionCollection*> _ret = self->actionCollections();
    // Convert QList<> from C++ memory to manually-managed C memory
    KActionCollection** _arr = static_cast<KActionCollection**>(malloc(sizeof(KActionCollection*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

bool KShortcutsDialog_Configure(KShortcutsDialog* self) {
    return self->configure();
}

QSize* KShortcutsDialog_SizeHint(const KShortcutsDialog* self) {
    auto* vkshortcutsdialog = dynamic_cast<const VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        return new QSize(self->sizeHint());
    } else {
        return new QSize(((VirtualKShortcutsDialog*)self)->sizeHint());
    }
}

void KShortcutsDialog_ShowDialog(KActionCollection* collection) {
    KShortcutsDialog::showDialog(collection);
}

void KShortcutsDialog_ImportConfiguration(KShortcutsDialog* self, const libqt_string path) {
    QString path_QString = QString::fromUtf8(path.data, path.len);
    self->importConfiguration(path_QString);
}

void KShortcutsDialog_ExportConfiguration(const KShortcutsDialog* self, const libqt_string path) {
    QString path_QString = QString::fromUtf8(path.data, path.len);
    self->exportConfiguration(path_QString);
}

void KShortcutsDialog_RefreshSchemes(KShortcutsDialog* self) {
    self->refreshSchemes();
}

void KShortcutsDialog_AddActionToSchemesMoreButton(KShortcutsDialog* self, QAction* action) {
    self->addActionToSchemesMoreButton(action);
}

void KShortcutsDialog_Accept(KShortcutsDialog* self) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        self->accept();
    } else {
        ((VirtualKShortcutsDialog*)self)->accept();
    }
}

void KShortcutsDialog_Saved(KShortcutsDialog* self) {
    self->saved();
}

void KShortcutsDialog_Connect_Saved(KShortcutsDialog* self, intptr_t slot) {
    void (*slotFunc)(KShortcutsDialog*) = reinterpret_cast<void (*)(KShortcutsDialog*)>(slot);
    KShortcutsDialog::connect(self, &KShortcutsDialog::saved, [self, slotFunc]() {
        slotFunc(self);
    });
}

libqt_string KShortcutsDialog_Tr2(const char* s, const char* c) {
    QString _ret = KShortcutsDialog::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KShortcutsDialog_Tr3(const char* s, const char* c, int n) {
    QString _ret = KShortcutsDialog::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KShortcutsDialog_AddCollection2(KShortcutsDialog* self, KActionCollection* collection, const libqt_string title) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    self->addCollection(collection, title_QString);
}

bool KShortcutsDialog_Configure1(KShortcutsDialog* self, bool saveSettings) {
    return self->configure(saveSettings);
}

void KShortcutsDialog_ShowDialog2(KActionCollection* collection, int allowLetterShortcuts) {
    KShortcutsDialog::showDialog(collection, static_cast<KShortcutsEditor::LetterShortcuts>(allowLetterShortcuts));
}

void KShortcutsDialog_ShowDialog3(KActionCollection* collection, int allowLetterShortcuts, QWidget* parent) {
    KShortcutsDialog::showDialog(collection, static_cast<KShortcutsEditor::LetterShortcuts>(allowLetterShortcuts), parent);
}

// Base class handler implementation
int KShortcutsDialog_QBaseMetacall(KShortcutsDialog* self, int param1, int param2, void** param3) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->setKShortcutsDialog_Metacall_IsBase(true);
        return vkshortcutsdialog->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KShortcutsDialog::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutsDialog_OnMetacall(KShortcutsDialog* self, intptr_t slot) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->setKShortcutsDialog_Metacall_Callback(reinterpret_cast<VirtualKShortcutsDialog::KShortcutsDialog_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
QSize* KShortcutsDialog_QBaseSizeHint(const KShortcutsDialog* self) {
    auto* vkshortcutsdialog = const_cast<VirtualKShortcutsDialog*>(dynamic_cast<const VirtualKShortcutsDialog*>(self));
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->setKShortcutsDialog_SizeHint_IsBase(true);
        return new QSize(vkshortcutsdialog->sizeHint());
    } else {
        return new QSize(((VirtualKShortcutsDialog*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutsDialog_OnSizeHint(const KShortcutsDialog* self, intptr_t slot) {
    auto* vkshortcutsdialog = const_cast<VirtualKShortcutsDialog*>(dynamic_cast<const VirtualKShortcutsDialog*>(self));
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->setKShortcutsDialog_SizeHint_Callback(reinterpret_cast<VirtualKShortcutsDialog::KShortcutsDialog_SizeHint_Callback>(slot));
    }
}

// Base class handler implementation
void KShortcutsDialog_QBaseAccept(KShortcutsDialog* self) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->setKShortcutsDialog_Accept_IsBase(true);
        vkshortcutsdialog->accept();
    } else {
        self->KShortcutsDialog::accept();
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutsDialog_OnAccept(KShortcutsDialog* self, intptr_t slot) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->setKShortcutsDialog_Accept_Callback(reinterpret_cast<VirtualKShortcutsDialog::KShortcutsDialog_Accept_Callback>(slot));
    }
}

// Derived class handler implementation
void KShortcutsDialog_SetVisible(KShortcutsDialog* self, bool visible) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->setVisible(visible);
    } else {
        self->KShortcutsDialog::setVisible(visible);
    }
}

// Base class handler implementation
void KShortcutsDialog_QBaseSetVisible(KShortcutsDialog* self, bool visible) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->setKShortcutsDialog_SetVisible_IsBase(true);
        vkshortcutsdialog->setVisible(visible);
    } else {
        self->KShortcutsDialog::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutsDialog_OnSetVisible(KShortcutsDialog* self, intptr_t slot) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->setKShortcutsDialog_SetVisible_Callback(reinterpret_cast<VirtualKShortcutsDialog::KShortcutsDialog_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KShortcutsDialog_MinimumSizeHint(const KShortcutsDialog* self) {
    auto* vkshortcutsdialog = const_cast<VirtualKShortcutsDialog*>(dynamic_cast<const VirtualKShortcutsDialog*>(self));
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        return new QSize(vkshortcutsdialog->minimumSizeHint());
    } else {
        return new QSize(((VirtualKShortcutsDialog*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* KShortcutsDialog_QBaseMinimumSizeHint(const KShortcutsDialog* self) {
    auto* vkshortcutsdialog = const_cast<VirtualKShortcutsDialog*>(dynamic_cast<const VirtualKShortcutsDialog*>(self));
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->setKShortcutsDialog_MinimumSizeHint_IsBase(true);
        return new QSize(vkshortcutsdialog->minimumSizeHint());
    } else {
        return new QSize(((VirtualKShortcutsDialog*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutsDialog_OnMinimumSizeHint(const KShortcutsDialog* self, intptr_t slot) {
    auto* vkshortcutsdialog = const_cast<VirtualKShortcutsDialog*>(dynamic_cast<const VirtualKShortcutsDialog*>(self));
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->setKShortcutsDialog_MinimumSizeHint_Callback(reinterpret_cast<VirtualKShortcutsDialog::KShortcutsDialog_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void KShortcutsDialog_Open(KShortcutsDialog* self) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->open();
    } else {
        self->KShortcutsDialog::open();
    }
}

// Base class handler implementation
void KShortcutsDialog_QBaseOpen(KShortcutsDialog* self) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->setKShortcutsDialog_Open_IsBase(true);
        vkshortcutsdialog->open();
    } else {
        self->KShortcutsDialog::open();
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutsDialog_OnOpen(KShortcutsDialog* self, intptr_t slot) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->setKShortcutsDialog_Open_Callback(reinterpret_cast<VirtualKShortcutsDialog::KShortcutsDialog_Open_Callback>(slot));
    }
}

// Derived class handler implementation
int KShortcutsDialog_Exec(KShortcutsDialog* self) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        return vkshortcutsdialog->exec();
    } else {
        return self->KShortcutsDialog::exec();
    }
}

// Base class handler implementation
int KShortcutsDialog_QBaseExec(KShortcutsDialog* self) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->setKShortcutsDialog_Exec_IsBase(true);
        return vkshortcutsdialog->exec();
    } else {
        return self->KShortcutsDialog::exec();
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutsDialog_OnExec(KShortcutsDialog* self, intptr_t slot) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->setKShortcutsDialog_Exec_Callback(reinterpret_cast<VirtualKShortcutsDialog::KShortcutsDialog_Exec_Callback>(slot));
    }
}

// Derived class handler implementation
void KShortcutsDialog_Done(KShortcutsDialog* self, int param1) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->done(static_cast<int>(param1));
    } else {
        self->KShortcutsDialog::done(static_cast<int>(param1));
    }
}

// Base class handler implementation
void KShortcutsDialog_QBaseDone(KShortcutsDialog* self, int param1) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->setKShortcutsDialog_Done_IsBase(true);
        vkshortcutsdialog->done(static_cast<int>(param1));
    } else {
        self->KShortcutsDialog::done(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutsDialog_OnDone(KShortcutsDialog* self, intptr_t slot) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->setKShortcutsDialog_Done_Callback(reinterpret_cast<VirtualKShortcutsDialog::KShortcutsDialog_Done_Callback>(slot));
    }
}

// Derived class handler implementation
void KShortcutsDialog_Reject(KShortcutsDialog* self) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->reject();
    } else {
        self->KShortcutsDialog::reject();
    }
}

// Base class handler implementation
void KShortcutsDialog_QBaseReject(KShortcutsDialog* self) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->setKShortcutsDialog_Reject_IsBase(true);
        vkshortcutsdialog->reject();
    } else {
        self->KShortcutsDialog::reject();
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutsDialog_OnReject(KShortcutsDialog* self, intptr_t slot) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->setKShortcutsDialog_Reject_Callback(reinterpret_cast<VirtualKShortcutsDialog::KShortcutsDialog_Reject_Callback>(slot));
    }
}

// Derived class handler implementation
void KShortcutsDialog_KeyPressEvent(KShortcutsDialog* self, QKeyEvent* param1) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->keyPressEvent(param1);
    } else {
        ((VirtualKShortcutsDialog*)self)->keyPressEvent(param1);
    }
}

// Base class handler implementation
void KShortcutsDialog_QBaseKeyPressEvent(KShortcutsDialog* self, QKeyEvent* param1) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->setKShortcutsDialog_KeyPressEvent_IsBase(true);
        vkshortcutsdialog->keyPressEvent(param1);
    } else {
        ((VirtualKShortcutsDialog*)self)->keyPressEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutsDialog_OnKeyPressEvent(KShortcutsDialog* self, intptr_t slot) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->setKShortcutsDialog_KeyPressEvent_Callback(reinterpret_cast<VirtualKShortcutsDialog::KShortcutsDialog_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KShortcutsDialog_CloseEvent(KShortcutsDialog* self, QCloseEvent* param1) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->closeEvent(param1);
    } else {
        ((VirtualKShortcutsDialog*)self)->closeEvent(param1);
    }
}

// Base class handler implementation
void KShortcutsDialog_QBaseCloseEvent(KShortcutsDialog* self, QCloseEvent* param1) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->setKShortcutsDialog_CloseEvent_IsBase(true);
        vkshortcutsdialog->closeEvent(param1);
    } else {
        ((VirtualKShortcutsDialog*)self)->closeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutsDialog_OnCloseEvent(KShortcutsDialog* self, intptr_t slot) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->setKShortcutsDialog_CloseEvent_Callback(reinterpret_cast<VirtualKShortcutsDialog::KShortcutsDialog_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KShortcutsDialog_ShowEvent(KShortcutsDialog* self, QShowEvent* param1) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->showEvent(param1);
    } else {
        ((VirtualKShortcutsDialog*)self)->showEvent(param1);
    }
}

// Base class handler implementation
void KShortcutsDialog_QBaseShowEvent(KShortcutsDialog* self, QShowEvent* param1) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->setKShortcutsDialog_ShowEvent_IsBase(true);
        vkshortcutsdialog->showEvent(param1);
    } else {
        ((VirtualKShortcutsDialog*)self)->showEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutsDialog_OnShowEvent(KShortcutsDialog* self, intptr_t slot) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->setKShortcutsDialog_ShowEvent_Callback(reinterpret_cast<VirtualKShortcutsDialog::KShortcutsDialog_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KShortcutsDialog_ResizeEvent(KShortcutsDialog* self, QResizeEvent* param1) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->resizeEvent(param1);
    } else {
        ((VirtualKShortcutsDialog*)self)->resizeEvent(param1);
    }
}

// Base class handler implementation
void KShortcutsDialog_QBaseResizeEvent(KShortcutsDialog* self, QResizeEvent* param1) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->setKShortcutsDialog_ResizeEvent_IsBase(true);
        vkshortcutsdialog->resizeEvent(param1);
    } else {
        ((VirtualKShortcutsDialog*)self)->resizeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutsDialog_OnResizeEvent(KShortcutsDialog* self, intptr_t slot) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->setKShortcutsDialog_ResizeEvent_Callback(reinterpret_cast<VirtualKShortcutsDialog::KShortcutsDialog_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KShortcutsDialog_ContextMenuEvent(KShortcutsDialog* self, QContextMenuEvent* param1) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->contextMenuEvent(param1);
    } else {
        ((VirtualKShortcutsDialog*)self)->contextMenuEvent(param1);
    }
}

// Base class handler implementation
void KShortcutsDialog_QBaseContextMenuEvent(KShortcutsDialog* self, QContextMenuEvent* param1) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->setKShortcutsDialog_ContextMenuEvent_IsBase(true);
        vkshortcutsdialog->contextMenuEvent(param1);
    } else {
        ((VirtualKShortcutsDialog*)self)->contextMenuEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutsDialog_OnContextMenuEvent(KShortcutsDialog* self, intptr_t slot) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->setKShortcutsDialog_ContextMenuEvent_Callback(reinterpret_cast<VirtualKShortcutsDialog::KShortcutsDialog_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KShortcutsDialog_EventFilter(KShortcutsDialog* self, QObject* param1, QEvent* param2) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        return vkshortcutsdialog->eventFilter(param1, param2);
    } else {
        return ((VirtualKShortcutsDialog*)self)->eventFilter(param1, param2);
    }
}

// Base class handler implementation
bool KShortcutsDialog_QBaseEventFilter(KShortcutsDialog* self, QObject* param1, QEvent* param2) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->setKShortcutsDialog_EventFilter_IsBase(true);
        return vkshortcutsdialog->eventFilter(param1, param2);
    } else {
        return ((VirtualKShortcutsDialog*)self)->eventFilter(param1, param2);
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutsDialog_OnEventFilter(KShortcutsDialog* self, intptr_t slot) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->setKShortcutsDialog_EventFilter_Callback(reinterpret_cast<VirtualKShortcutsDialog::KShortcutsDialog_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
int KShortcutsDialog_DevType(const KShortcutsDialog* self) {
    auto* vkshortcutsdialog = const_cast<VirtualKShortcutsDialog*>(dynamic_cast<const VirtualKShortcutsDialog*>(self));
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        return vkshortcutsdialog->devType();
    } else {
        return self->KShortcutsDialog::devType();
    }
}

// Base class handler implementation
int KShortcutsDialog_QBaseDevType(const KShortcutsDialog* self) {
    auto* vkshortcutsdialog = const_cast<VirtualKShortcutsDialog*>(dynamic_cast<const VirtualKShortcutsDialog*>(self));
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->setKShortcutsDialog_DevType_IsBase(true);
        return vkshortcutsdialog->devType();
    } else {
        return self->KShortcutsDialog::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutsDialog_OnDevType(const KShortcutsDialog* self, intptr_t slot) {
    auto* vkshortcutsdialog = const_cast<VirtualKShortcutsDialog*>(dynamic_cast<const VirtualKShortcutsDialog*>(self));
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->setKShortcutsDialog_DevType_Callback(reinterpret_cast<VirtualKShortcutsDialog::KShortcutsDialog_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
int KShortcutsDialog_HeightForWidth(const KShortcutsDialog* self, int param1) {
    auto* vkshortcutsdialog = const_cast<VirtualKShortcutsDialog*>(dynamic_cast<const VirtualKShortcutsDialog*>(self));
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        return vkshortcutsdialog->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KShortcutsDialog::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int KShortcutsDialog_QBaseHeightForWidth(const KShortcutsDialog* self, int param1) {
    auto* vkshortcutsdialog = const_cast<VirtualKShortcutsDialog*>(dynamic_cast<const VirtualKShortcutsDialog*>(self));
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->setKShortcutsDialog_HeightForWidth_IsBase(true);
        return vkshortcutsdialog->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KShortcutsDialog::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutsDialog_OnHeightForWidth(const KShortcutsDialog* self, intptr_t slot) {
    auto* vkshortcutsdialog = const_cast<VirtualKShortcutsDialog*>(dynamic_cast<const VirtualKShortcutsDialog*>(self));
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->setKShortcutsDialog_HeightForWidth_Callback(reinterpret_cast<VirtualKShortcutsDialog::KShortcutsDialog_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool KShortcutsDialog_HasHeightForWidth(const KShortcutsDialog* self) {
    auto* vkshortcutsdialog = const_cast<VirtualKShortcutsDialog*>(dynamic_cast<const VirtualKShortcutsDialog*>(self));
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        return vkshortcutsdialog->hasHeightForWidth();
    } else {
        return self->KShortcutsDialog::hasHeightForWidth();
    }
}

// Base class handler implementation
bool KShortcutsDialog_QBaseHasHeightForWidth(const KShortcutsDialog* self) {
    auto* vkshortcutsdialog = const_cast<VirtualKShortcutsDialog*>(dynamic_cast<const VirtualKShortcutsDialog*>(self));
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->setKShortcutsDialog_HasHeightForWidth_IsBase(true);
        return vkshortcutsdialog->hasHeightForWidth();
    } else {
        return self->KShortcutsDialog::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutsDialog_OnHasHeightForWidth(const KShortcutsDialog* self, intptr_t slot) {
    auto* vkshortcutsdialog = const_cast<VirtualKShortcutsDialog*>(dynamic_cast<const VirtualKShortcutsDialog*>(self));
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->setKShortcutsDialog_HasHeightForWidth_Callback(reinterpret_cast<VirtualKShortcutsDialog::KShortcutsDialog_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* KShortcutsDialog_PaintEngine(const KShortcutsDialog* self) {
    auto* vkshortcutsdialog = const_cast<VirtualKShortcutsDialog*>(dynamic_cast<const VirtualKShortcutsDialog*>(self));
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        return vkshortcutsdialog->paintEngine();
    } else {
        return self->KShortcutsDialog::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* KShortcutsDialog_QBasePaintEngine(const KShortcutsDialog* self) {
    auto* vkshortcutsdialog = const_cast<VirtualKShortcutsDialog*>(dynamic_cast<const VirtualKShortcutsDialog*>(self));
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->setKShortcutsDialog_PaintEngine_IsBase(true);
        return vkshortcutsdialog->paintEngine();
    } else {
        return self->KShortcutsDialog::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutsDialog_OnPaintEngine(const KShortcutsDialog* self, intptr_t slot) {
    auto* vkshortcutsdialog = const_cast<VirtualKShortcutsDialog*>(dynamic_cast<const VirtualKShortcutsDialog*>(self));
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->setKShortcutsDialog_PaintEngine_Callback(reinterpret_cast<VirtualKShortcutsDialog::KShortcutsDialog_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
bool KShortcutsDialog_Event(KShortcutsDialog* self, QEvent* event) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        return vkshortcutsdialog->event(event);
    } else {
        return ((VirtualKShortcutsDialog*)self)->event(event);
    }
}

// Base class handler implementation
bool KShortcutsDialog_QBaseEvent(KShortcutsDialog* self, QEvent* event) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->setKShortcutsDialog_Event_IsBase(true);
        return vkshortcutsdialog->event(event);
    } else {
        return ((VirtualKShortcutsDialog*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutsDialog_OnEvent(KShortcutsDialog* self, intptr_t slot) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->setKShortcutsDialog_Event_Callback(reinterpret_cast<VirtualKShortcutsDialog::KShortcutsDialog_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void KShortcutsDialog_MousePressEvent(KShortcutsDialog* self, QMouseEvent* event) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->mousePressEvent(event);
    } else {
        ((VirtualKShortcutsDialog*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void KShortcutsDialog_QBaseMousePressEvent(KShortcutsDialog* self, QMouseEvent* event) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->setKShortcutsDialog_MousePressEvent_IsBase(true);
        vkshortcutsdialog->mousePressEvent(event);
    } else {
        ((VirtualKShortcutsDialog*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutsDialog_OnMousePressEvent(KShortcutsDialog* self, intptr_t slot) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->setKShortcutsDialog_MousePressEvent_Callback(reinterpret_cast<VirtualKShortcutsDialog::KShortcutsDialog_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KShortcutsDialog_MouseReleaseEvent(KShortcutsDialog* self, QMouseEvent* event) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->mouseReleaseEvent(event);
    } else {
        ((VirtualKShortcutsDialog*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void KShortcutsDialog_QBaseMouseReleaseEvent(KShortcutsDialog* self, QMouseEvent* event) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->setKShortcutsDialog_MouseReleaseEvent_IsBase(true);
        vkshortcutsdialog->mouseReleaseEvent(event);
    } else {
        ((VirtualKShortcutsDialog*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutsDialog_OnMouseReleaseEvent(KShortcutsDialog* self, intptr_t slot) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->setKShortcutsDialog_MouseReleaseEvent_Callback(reinterpret_cast<VirtualKShortcutsDialog::KShortcutsDialog_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KShortcutsDialog_MouseDoubleClickEvent(KShortcutsDialog* self, QMouseEvent* event) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKShortcutsDialog*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void KShortcutsDialog_QBaseMouseDoubleClickEvent(KShortcutsDialog* self, QMouseEvent* event) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->setKShortcutsDialog_MouseDoubleClickEvent_IsBase(true);
        vkshortcutsdialog->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKShortcutsDialog*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutsDialog_OnMouseDoubleClickEvent(KShortcutsDialog* self, intptr_t slot) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->setKShortcutsDialog_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualKShortcutsDialog::KShortcutsDialog_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KShortcutsDialog_MouseMoveEvent(KShortcutsDialog* self, QMouseEvent* event) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->mouseMoveEvent(event);
    } else {
        ((VirtualKShortcutsDialog*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void KShortcutsDialog_QBaseMouseMoveEvent(KShortcutsDialog* self, QMouseEvent* event) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->setKShortcutsDialog_MouseMoveEvent_IsBase(true);
        vkshortcutsdialog->mouseMoveEvent(event);
    } else {
        ((VirtualKShortcutsDialog*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutsDialog_OnMouseMoveEvent(KShortcutsDialog* self, intptr_t slot) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->setKShortcutsDialog_MouseMoveEvent_Callback(reinterpret_cast<VirtualKShortcutsDialog::KShortcutsDialog_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KShortcutsDialog_WheelEvent(KShortcutsDialog* self, QWheelEvent* event) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->wheelEvent(event);
    } else {
        ((VirtualKShortcutsDialog*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void KShortcutsDialog_QBaseWheelEvent(KShortcutsDialog* self, QWheelEvent* event) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->setKShortcutsDialog_WheelEvent_IsBase(true);
        vkshortcutsdialog->wheelEvent(event);
    } else {
        ((VirtualKShortcutsDialog*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutsDialog_OnWheelEvent(KShortcutsDialog* self, intptr_t slot) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->setKShortcutsDialog_WheelEvent_Callback(reinterpret_cast<VirtualKShortcutsDialog::KShortcutsDialog_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KShortcutsDialog_KeyReleaseEvent(KShortcutsDialog* self, QKeyEvent* event) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->keyReleaseEvent(event);
    } else {
        ((VirtualKShortcutsDialog*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void KShortcutsDialog_QBaseKeyReleaseEvent(KShortcutsDialog* self, QKeyEvent* event) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->setKShortcutsDialog_KeyReleaseEvent_IsBase(true);
        vkshortcutsdialog->keyReleaseEvent(event);
    } else {
        ((VirtualKShortcutsDialog*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutsDialog_OnKeyReleaseEvent(KShortcutsDialog* self, intptr_t slot) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->setKShortcutsDialog_KeyReleaseEvent_Callback(reinterpret_cast<VirtualKShortcutsDialog::KShortcutsDialog_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KShortcutsDialog_FocusInEvent(KShortcutsDialog* self, QFocusEvent* event) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->focusInEvent(event);
    } else {
        ((VirtualKShortcutsDialog*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void KShortcutsDialog_QBaseFocusInEvent(KShortcutsDialog* self, QFocusEvent* event) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->setKShortcutsDialog_FocusInEvent_IsBase(true);
        vkshortcutsdialog->focusInEvent(event);
    } else {
        ((VirtualKShortcutsDialog*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutsDialog_OnFocusInEvent(KShortcutsDialog* self, intptr_t slot) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->setKShortcutsDialog_FocusInEvent_Callback(reinterpret_cast<VirtualKShortcutsDialog::KShortcutsDialog_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KShortcutsDialog_FocusOutEvent(KShortcutsDialog* self, QFocusEvent* event) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->focusOutEvent(event);
    } else {
        ((VirtualKShortcutsDialog*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void KShortcutsDialog_QBaseFocusOutEvent(KShortcutsDialog* self, QFocusEvent* event) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->setKShortcutsDialog_FocusOutEvent_IsBase(true);
        vkshortcutsdialog->focusOutEvent(event);
    } else {
        ((VirtualKShortcutsDialog*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutsDialog_OnFocusOutEvent(KShortcutsDialog* self, intptr_t slot) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->setKShortcutsDialog_FocusOutEvent_Callback(reinterpret_cast<VirtualKShortcutsDialog::KShortcutsDialog_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KShortcutsDialog_EnterEvent(KShortcutsDialog* self, QEnterEvent* event) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->enterEvent(event);
    } else {
        ((VirtualKShortcutsDialog*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void KShortcutsDialog_QBaseEnterEvent(KShortcutsDialog* self, QEnterEvent* event) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->setKShortcutsDialog_EnterEvent_IsBase(true);
        vkshortcutsdialog->enterEvent(event);
    } else {
        ((VirtualKShortcutsDialog*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutsDialog_OnEnterEvent(KShortcutsDialog* self, intptr_t slot) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->setKShortcutsDialog_EnterEvent_Callback(reinterpret_cast<VirtualKShortcutsDialog::KShortcutsDialog_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KShortcutsDialog_LeaveEvent(KShortcutsDialog* self, QEvent* event) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->leaveEvent(event);
    } else {
        ((VirtualKShortcutsDialog*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void KShortcutsDialog_QBaseLeaveEvent(KShortcutsDialog* self, QEvent* event) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->setKShortcutsDialog_LeaveEvent_IsBase(true);
        vkshortcutsdialog->leaveEvent(event);
    } else {
        ((VirtualKShortcutsDialog*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutsDialog_OnLeaveEvent(KShortcutsDialog* self, intptr_t slot) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->setKShortcutsDialog_LeaveEvent_Callback(reinterpret_cast<VirtualKShortcutsDialog::KShortcutsDialog_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KShortcutsDialog_PaintEvent(KShortcutsDialog* self, QPaintEvent* event) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->paintEvent(event);
    } else {
        ((VirtualKShortcutsDialog*)self)->paintEvent(event);
    }
}

// Base class handler implementation
void KShortcutsDialog_QBasePaintEvent(KShortcutsDialog* self, QPaintEvent* event) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->setKShortcutsDialog_PaintEvent_IsBase(true);
        vkshortcutsdialog->paintEvent(event);
    } else {
        ((VirtualKShortcutsDialog*)self)->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutsDialog_OnPaintEvent(KShortcutsDialog* self, intptr_t slot) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->setKShortcutsDialog_PaintEvent_Callback(reinterpret_cast<VirtualKShortcutsDialog::KShortcutsDialog_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KShortcutsDialog_MoveEvent(KShortcutsDialog* self, QMoveEvent* event) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->moveEvent(event);
    } else {
        ((VirtualKShortcutsDialog*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void KShortcutsDialog_QBaseMoveEvent(KShortcutsDialog* self, QMoveEvent* event) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->setKShortcutsDialog_MoveEvent_IsBase(true);
        vkshortcutsdialog->moveEvent(event);
    } else {
        ((VirtualKShortcutsDialog*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutsDialog_OnMoveEvent(KShortcutsDialog* self, intptr_t slot) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->setKShortcutsDialog_MoveEvent_Callback(reinterpret_cast<VirtualKShortcutsDialog::KShortcutsDialog_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KShortcutsDialog_TabletEvent(KShortcutsDialog* self, QTabletEvent* event) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->tabletEvent(event);
    } else {
        ((VirtualKShortcutsDialog*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void KShortcutsDialog_QBaseTabletEvent(KShortcutsDialog* self, QTabletEvent* event) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->setKShortcutsDialog_TabletEvent_IsBase(true);
        vkshortcutsdialog->tabletEvent(event);
    } else {
        ((VirtualKShortcutsDialog*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutsDialog_OnTabletEvent(KShortcutsDialog* self, intptr_t slot) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->setKShortcutsDialog_TabletEvent_Callback(reinterpret_cast<VirtualKShortcutsDialog::KShortcutsDialog_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KShortcutsDialog_ActionEvent(KShortcutsDialog* self, QActionEvent* event) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->actionEvent(event);
    } else {
        ((VirtualKShortcutsDialog*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void KShortcutsDialog_QBaseActionEvent(KShortcutsDialog* self, QActionEvent* event) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->setKShortcutsDialog_ActionEvent_IsBase(true);
        vkshortcutsdialog->actionEvent(event);
    } else {
        ((VirtualKShortcutsDialog*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutsDialog_OnActionEvent(KShortcutsDialog* self, intptr_t slot) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->setKShortcutsDialog_ActionEvent_Callback(reinterpret_cast<VirtualKShortcutsDialog::KShortcutsDialog_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KShortcutsDialog_DragEnterEvent(KShortcutsDialog* self, QDragEnterEvent* event) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->dragEnterEvent(event);
    } else {
        ((VirtualKShortcutsDialog*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void KShortcutsDialog_QBaseDragEnterEvent(KShortcutsDialog* self, QDragEnterEvent* event) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->setKShortcutsDialog_DragEnterEvent_IsBase(true);
        vkshortcutsdialog->dragEnterEvent(event);
    } else {
        ((VirtualKShortcutsDialog*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutsDialog_OnDragEnterEvent(KShortcutsDialog* self, intptr_t slot) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->setKShortcutsDialog_DragEnterEvent_Callback(reinterpret_cast<VirtualKShortcutsDialog::KShortcutsDialog_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KShortcutsDialog_DragMoveEvent(KShortcutsDialog* self, QDragMoveEvent* event) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->dragMoveEvent(event);
    } else {
        ((VirtualKShortcutsDialog*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void KShortcutsDialog_QBaseDragMoveEvent(KShortcutsDialog* self, QDragMoveEvent* event) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->setKShortcutsDialog_DragMoveEvent_IsBase(true);
        vkshortcutsdialog->dragMoveEvent(event);
    } else {
        ((VirtualKShortcutsDialog*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutsDialog_OnDragMoveEvent(KShortcutsDialog* self, intptr_t slot) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->setKShortcutsDialog_DragMoveEvent_Callback(reinterpret_cast<VirtualKShortcutsDialog::KShortcutsDialog_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KShortcutsDialog_DragLeaveEvent(KShortcutsDialog* self, QDragLeaveEvent* event) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->dragLeaveEvent(event);
    } else {
        ((VirtualKShortcutsDialog*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void KShortcutsDialog_QBaseDragLeaveEvent(KShortcutsDialog* self, QDragLeaveEvent* event) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->setKShortcutsDialog_DragLeaveEvent_IsBase(true);
        vkshortcutsdialog->dragLeaveEvent(event);
    } else {
        ((VirtualKShortcutsDialog*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutsDialog_OnDragLeaveEvent(KShortcutsDialog* self, intptr_t slot) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->setKShortcutsDialog_DragLeaveEvent_Callback(reinterpret_cast<VirtualKShortcutsDialog::KShortcutsDialog_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KShortcutsDialog_DropEvent(KShortcutsDialog* self, QDropEvent* event) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->dropEvent(event);
    } else {
        ((VirtualKShortcutsDialog*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void KShortcutsDialog_QBaseDropEvent(KShortcutsDialog* self, QDropEvent* event) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->setKShortcutsDialog_DropEvent_IsBase(true);
        vkshortcutsdialog->dropEvent(event);
    } else {
        ((VirtualKShortcutsDialog*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutsDialog_OnDropEvent(KShortcutsDialog* self, intptr_t slot) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->setKShortcutsDialog_DropEvent_Callback(reinterpret_cast<VirtualKShortcutsDialog::KShortcutsDialog_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KShortcutsDialog_HideEvent(KShortcutsDialog* self, QHideEvent* event) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->hideEvent(event);
    } else {
        ((VirtualKShortcutsDialog*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void KShortcutsDialog_QBaseHideEvent(KShortcutsDialog* self, QHideEvent* event) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->setKShortcutsDialog_HideEvent_IsBase(true);
        vkshortcutsdialog->hideEvent(event);
    } else {
        ((VirtualKShortcutsDialog*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutsDialog_OnHideEvent(KShortcutsDialog* self, intptr_t slot) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->setKShortcutsDialog_HideEvent_Callback(reinterpret_cast<VirtualKShortcutsDialog::KShortcutsDialog_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KShortcutsDialog_NativeEvent(KShortcutsDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        return vkshortcutsdialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKShortcutsDialog*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool KShortcutsDialog_QBaseNativeEvent(KShortcutsDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->setKShortcutsDialog_NativeEvent_IsBase(true);
        return vkshortcutsdialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKShortcutsDialog*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutsDialog_OnNativeEvent(KShortcutsDialog* self, intptr_t slot) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->setKShortcutsDialog_NativeEvent_Callback(reinterpret_cast<VirtualKShortcutsDialog::KShortcutsDialog_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KShortcutsDialog_ChangeEvent(KShortcutsDialog* self, QEvent* param1) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->changeEvent(param1);
    } else {
        ((VirtualKShortcutsDialog*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void KShortcutsDialog_QBaseChangeEvent(KShortcutsDialog* self, QEvent* param1) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->setKShortcutsDialog_ChangeEvent_IsBase(true);
        vkshortcutsdialog->changeEvent(param1);
    } else {
        ((VirtualKShortcutsDialog*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutsDialog_OnChangeEvent(KShortcutsDialog* self, intptr_t slot) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->setKShortcutsDialog_ChangeEvent_Callback(reinterpret_cast<VirtualKShortcutsDialog::KShortcutsDialog_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int KShortcutsDialog_Metric(const KShortcutsDialog* self, int param1) {
    auto* vkshortcutsdialog = const_cast<VirtualKShortcutsDialog*>(dynamic_cast<const VirtualKShortcutsDialog*>(self));
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        return vkshortcutsdialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKShortcutsDialog*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int KShortcutsDialog_QBaseMetric(const KShortcutsDialog* self, int param1) {
    auto* vkshortcutsdialog = const_cast<VirtualKShortcutsDialog*>(dynamic_cast<const VirtualKShortcutsDialog*>(self));
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->setKShortcutsDialog_Metric_IsBase(true);
        return vkshortcutsdialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKShortcutsDialog*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutsDialog_OnMetric(const KShortcutsDialog* self, intptr_t slot) {
    auto* vkshortcutsdialog = const_cast<VirtualKShortcutsDialog*>(dynamic_cast<const VirtualKShortcutsDialog*>(self));
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->setKShortcutsDialog_Metric_Callback(reinterpret_cast<VirtualKShortcutsDialog::KShortcutsDialog_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void KShortcutsDialog_InitPainter(const KShortcutsDialog* self, QPainter* painter) {
    auto* vkshortcutsdialog = const_cast<VirtualKShortcutsDialog*>(dynamic_cast<const VirtualKShortcutsDialog*>(self));
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->initPainter(painter);
    } else {
        ((VirtualKShortcutsDialog*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void KShortcutsDialog_QBaseInitPainter(const KShortcutsDialog* self, QPainter* painter) {
    auto* vkshortcutsdialog = const_cast<VirtualKShortcutsDialog*>(dynamic_cast<const VirtualKShortcutsDialog*>(self));
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->setKShortcutsDialog_InitPainter_IsBase(true);
        vkshortcutsdialog->initPainter(painter);
    } else {
        ((VirtualKShortcutsDialog*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutsDialog_OnInitPainter(const KShortcutsDialog* self, intptr_t slot) {
    auto* vkshortcutsdialog = const_cast<VirtualKShortcutsDialog*>(dynamic_cast<const VirtualKShortcutsDialog*>(self));
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->setKShortcutsDialog_InitPainter_Callback(reinterpret_cast<VirtualKShortcutsDialog::KShortcutsDialog_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* KShortcutsDialog_Redirected(const KShortcutsDialog* self, QPoint* offset) {
    auto* vkshortcutsdialog = const_cast<VirtualKShortcutsDialog*>(dynamic_cast<const VirtualKShortcutsDialog*>(self));
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        return vkshortcutsdialog->redirected(offset);
    } else {
        return ((VirtualKShortcutsDialog*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* KShortcutsDialog_QBaseRedirected(const KShortcutsDialog* self, QPoint* offset) {
    auto* vkshortcutsdialog = const_cast<VirtualKShortcutsDialog*>(dynamic_cast<const VirtualKShortcutsDialog*>(self));
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->setKShortcutsDialog_Redirected_IsBase(true);
        return vkshortcutsdialog->redirected(offset);
    } else {
        return ((VirtualKShortcutsDialog*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutsDialog_OnRedirected(const KShortcutsDialog* self, intptr_t slot) {
    auto* vkshortcutsdialog = const_cast<VirtualKShortcutsDialog*>(dynamic_cast<const VirtualKShortcutsDialog*>(self));
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->setKShortcutsDialog_Redirected_Callback(reinterpret_cast<VirtualKShortcutsDialog::KShortcutsDialog_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* KShortcutsDialog_SharedPainter(const KShortcutsDialog* self) {
    auto* vkshortcutsdialog = const_cast<VirtualKShortcutsDialog*>(dynamic_cast<const VirtualKShortcutsDialog*>(self));
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        return vkshortcutsdialog->sharedPainter();
    } else {
        return ((VirtualKShortcutsDialog*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* KShortcutsDialog_QBaseSharedPainter(const KShortcutsDialog* self) {
    auto* vkshortcutsdialog = const_cast<VirtualKShortcutsDialog*>(dynamic_cast<const VirtualKShortcutsDialog*>(self));
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->setKShortcutsDialog_SharedPainter_IsBase(true);
        return vkshortcutsdialog->sharedPainter();
    } else {
        return ((VirtualKShortcutsDialog*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutsDialog_OnSharedPainter(const KShortcutsDialog* self, intptr_t slot) {
    auto* vkshortcutsdialog = const_cast<VirtualKShortcutsDialog*>(dynamic_cast<const VirtualKShortcutsDialog*>(self));
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->setKShortcutsDialog_SharedPainter_Callback(reinterpret_cast<VirtualKShortcutsDialog::KShortcutsDialog_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void KShortcutsDialog_InputMethodEvent(KShortcutsDialog* self, QInputMethodEvent* param1) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->inputMethodEvent(param1);
    } else {
        ((VirtualKShortcutsDialog*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void KShortcutsDialog_QBaseInputMethodEvent(KShortcutsDialog* self, QInputMethodEvent* param1) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->setKShortcutsDialog_InputMethodEvent_IsBase(true);
        vkshortcutsdialog->inputMethodEvent(param1);
    } else {
        ((VirtualKShortcutsDialog*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutsDialog_OnInputMethodEvent(KShortcutsDialog* self, intptr_t slot) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->setKShortcutsDialog_InputMethodEvent_Callback(reinterpret_cast<VirtualKShortcutsDialog::KShortcutsDialog_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* KShortcutsDialog_InputMethodQuery(const KShortcutsDialog* self, int param1) {
    auto* vkshortcutsdialog = const_cast<VirtualKShortcutsDialog*>(dynamic_cast<const VirtualKShortcutsDialog*>(self));
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        return new QVariant(vkshortcutsdialog->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKShortcutsDialog*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* KShortcutsDialog_QBaseInputMethodQuery(const KShortcutsDialog* self, int param1) {
    auto* vkshortcutsdialog = const_cast<VirtualKShortcutsDialog*>(dynamic_cast<const VirtualKShortcutsDialog*>(self));
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->setKShortcutsDialog_InputMethodQuery_IsBase(true);
        return new QVariant(vkshortcutsdialog->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKShortcutsDialog*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutsDialog_OnInputMethodQuery(const KShortcutsDialog* self, intptr_t slot) {
    auto* vkshortcutsdialog = const_cast<VirtualKShortcutsDialog*>(dynamic_cast<const VirtualKShortcutsDialog*>(self));
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->setKShortcutsDialog_InputMethodQuery_Callback(reinterpret_cast<VirtualKShortcutsDialog::KShortcutsDialog_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool KShortcutsDialog_FocusNextPrevChild(KShortcutsDialog* self, bool next) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        return vkshortcutsdialog->focusNextPrevChild(next);
    } else {
        return ((VirtualKShortcutsDialog*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool KShortcutsDialog_QBaseFocusNextPrevChild(KShortcutsDialog* self, bool next) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->setKShortcutsDialog_FocusNextPrevChild_IsBase(true);
        return vkshortcutsdialog->focusNextPrevChild(next);
    } else {
        return ((VirtualKShortcutsDialog*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutsDialog_OnFocusNextPrevChild(KShortcutsDialog* self, intptr_t slot) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->setKShortcutsDialog_FocusNextPrevChild_Callback(reinterpret_cast<VirtualKShortcutsDialog::KShortcutsDialog_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
void KShortcutsDialog_TimerEvent(KShortcutsDialog* self, QTimerEvent* event) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->timerEvent(event);
    } else {
        ((VirtualKShortcutsDialog*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KShortcutsDialog_QBaseTimerEvent(KShortcutsDialog* self, QTimerEvent* event) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->setKShortcutsDialog_TimerEvent_IsBase(true);
        vkshortcutsdialog->timerEvent(event);
    } else {
        ((VirtualKShortcutsDialog*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutsDialog_OnTimerEvent(KShortcutsDialog* self, intptr_t slot) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->setKShortcutsDialog_TimerEvent_Callback(reinterpret_cast<VirtualKShortcutsDialog::KShortcutsDialog_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KShortcutsDialog_ChildEvent(KShortcutsDialog* self, QChildEvent* event) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->childEvent(event);
    } else {
        ((VirtualKShortcutsDialog*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KShortcutsDialog_QBaseChildEvent(KShortcutsDialog* self, QChildEvent* event) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->setKShortcutsDialog_ChildEvent_IsBase(true);
        vkshortcutsdialog->childEvent(event);
    } else {
        ((VirtualKShortcutsDialog*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutsDialog_OnChildEvent(KShortcutsDialog* self, intptr_t slot) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->setKShortcutsDialog_ChildEvent_Callback(reinterpret_cast<VirtualKShortcutsDialog::KShortcutsDialog_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KShortcutsDialog_CustomEvent(KShortcutsDialog* self, QEvent* event) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->customEvent(event);
    } else {
        ((VirtualKShortcutsDialog*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KShortcutsDialog_QBaseCustomEvent(KShortcutsDialog* self, QEvent* event) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->setKShortcutsDialog_CustomEvent_IsBase(true);
        vkshortcutsdialog->customEvent(event);
    } else {
        ((VirtualKShortcutsDialog*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutsDialog_OnCustomEvent(KShortcutsDialog* self, intptr_t slot) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->setKShortcutsDialog_CustomEvent_Callback(reinterpret_cast<VirtualKShortcutsDialog::KShortcutsDialog_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KShortcutsDialog_ConnectNotify(KShortcutsDialog* self, const QMetaMethod* signal) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->connectNotify(*signal);
    } else {
        ((VirtualKShortcutsDialog*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KShortcutsDialog_QBaseConnectNotify(KShortcutsDialog* self, const QMetaMethod* signal) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->setKShortcutsDialog_ConnectNotify_IsBase(true);
        vkshortcutsdialog->connectNotify(*signal);
    } else {
        ((VirtualKShortcutsDialog*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutsDialog_OnConnectNotify(KShortcutsDialog* self, intptr_t slot) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->setKShortcutsDialog_ConnectNotify_Callback(reinterpret_cast<VirtualKShortcutsDialog::KShortcutsDialog_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KShortcutsDialog_DisconnectNotify(KShortcutsDialog* self, const QMetaMethod* signal) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->disconnectNotify(*signal);
    } else {
        ((VirtualKShortcutsDialog*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KShortcutsDialog_QBaseDisconnectNotify(KShortcutsDialog* self, const QMetaMethod* signal) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->setKShortcutsDialog_DisconnectNotify_IsBase(true);
        vkshortcutsdialog->disconnectNotify(*signal);
    } else {
        ((VirtualKShortcutsDialog*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutsDialog_OnDisconnectNotify(KShortcutsDialog* self, intptr_t slot) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->setKShortcutsDialog_DisconnectNotify_Callback(reinterpret_cast<VirtualKShortcutsDialog::KShortcutsDialog_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KShortcutsDialog_AdjustPosition(KShortcutsDialog* self, QWidget* param1) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->adjustPosition(param1);
    } else {
        ((VirtualKShortcutsDialog*)self)->adjustPosition(param1);
    }
}

// Base class handler implementation
void KShortcutsDialog_QBaseAdjustPosition(KShortcutsDialog* self, QWidget* param1) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->setKShortcutsDialog_AdjustPosition_IsBase(true);
        vkshortcutsdialog->adjustPosition(param1);
    } else {
        ((VirtualKShortcutsDialog*)self)->adjustPosition(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutsDialog_OnAdjustPosition(KShortcutsDialog* self, intptr_t slot) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->setKShortcutsDialog_AdjustPosition_Callback(reinterpret_cast<VirtualKShortcutsDialog::KShortcutsDialog_AdjustPosition_Callback>(slot));
    }
}

// Derived class handler implementation
void KShortcutsDialog_UpdateMicroFocus(KShortcutsDialog* self) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->updateMicroFocus();
    } else {
        ((VirtualKShortcutsDialog*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void KShortcutsDialog_QBaseUpdateMicroFocus(KShortcutsDialog* self) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->setKShortcutsDialog_UpdateMicroFocus_IsBase(true);
        vkshortcutsdialog->updateMicroFocus();
    } else {
        ((VirtualKShortcutsDialog*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutsDialog_OnUpdateMicroFocus(KShortcutsDialog* self, intptr_t slot) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->setKShortcutsDialog_UpdateMicroFocus_Callback(reinterpret_cast<VirtualKShortcutsDialog::KShortcutsDialog_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void KShortcutsDialog_Create(KShortcutsDialog* self) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->create();
    } else {
        ((VirtualKShortcutsDialog*)self)->create();
    }
}

// Base class handler implementation
void KShortcutsDialog_QBaseCreate(KShortcutsDialog* self) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->setKShortcutsDialog_Create_IsBase(true);
        vkshortcutsdialog->create();
    } else {
        ((VirtualKShortcutsDialog*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutsDialog_OnCreate(KShortcutsDialog* self, intptr_t slot) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->setKShortcutsDialog_Create_Callback(reinterpret_cast<VirtualKShortcutsDialog::KShortcutsDialog_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void KShortcutsDialog_Destroy(KShortcutsDialog* self) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->destroy();
    } else {
        ((VirtualKShortcutsDialog*)self)->destroy();
    }
}

// Base class handler implementation
void KShortcutsDialog_QBaseDestroy(KShortcutsDialog* self) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->setKShortcutsDialog_Destroy_IsBase(true);
        vkshortcutsdialog->destroy();
    } else {
        ((VirtualKShortcutsDialog*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutsDialog_OnDestroy(KShortcutsDialog* self, intptr_t slot) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->setKShortcutsDialog_Destroy_Callback(reinterpret_cast<VirtualKShortcutsDialog::KShortcutsDialog_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool KShortcutsDialog_FocusNextChild(KShortcutsDialog* self) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        return vkshortcutsdialog->focusNextChild();
    } else {
        return ((VirtualKShortcutsDialog*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool KShortcutsDialog_QBaseFocusNextChild(KShortcutsDialog* self) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->setKShortcutsDialog_FocusNextChild_IsBase(true);
        return vkshortcutsdialog->focusNextChild();
    } else {
        return ((VirtualKShortcutsDialog*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutsDialog_OnFocusNextChild(KShortcutsDialog* self, intptr_t slot) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->setKShortcutsDialog_FocusNextChild_Callback(reinterpret_cast<VirtualKShortcutsDialog::KShortcutsDialog_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KShortcutsDialog_FocusPreviousChild(KShortcutsDialog* self) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        return vkshortcutsdialog->focusPreviousChild();
    } else {
        return ((VirtualKShortcutsDialog*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool KShortcutsDialog_QBaseFocusPreviousChild(KShortcutsDialog* self) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->setKShortcutsDialog_FocusPreviousChild_IsBase(true);
        return vkshortcutsdialog->focusPreviousChild();
    } else {
        return ((VirtualKShortcutsDialog*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutsDialog_OnFocusPreviousChild(KShortcutsDialog* self, intptr_t slot) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->setKShortcutsDialog_FocusPreviousChild_Callback(reinterpret_cast<VirtualKShortcutsDialog::KShortcutsDialog_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KShortcutsDialog_Sender(const KShortcutsDialog* self) {
    auto* vkshortcutsdialog = const_cast<VirtualKShortcutsDialog*>(dynamic_cast<const VirtualKShortcutsDialog*>(self));
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        return vkshortcutsdialog->sender();
    } else {
        return ((VirtualKShortcutsDialog*)self)->sender();
    }
}

// Base class handler implementation
QObject* KShortcutsDialog_QBaseSender(const KShortcutsDialog* self) {
    auto* vkshortcutsdialog = const_cast<VirtualKShortcutsDialog*>(dynamic_cast<const VirtualKShortcutsDialog*>(self));
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->setKShortcutsDialog_Sender_IsBase(true);
        return vkshortcutsdialog->sender();
    } else {
        return ((VirtualKShortcutsDialog*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutsDialog_OnSender(const KShortcutsDialog* self, intptr_t slot) {
    auto* vkshortcutsdialog = const_cast<VirtualKShortcutsDialog*>(dynamic_cast<const VirtualKShortcutsDialog*>(self));
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->setKShortcutsDialog_Sender_Callback(reinterpret_cast<VirtualKShortcutsDialog::KShortcutsDialog_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KShortcutsDialog_SenderSignalIndex(const KShortcutsDialog* self) {
    auto* vkshortcutsdialog = const_cast<VirtualKShortcutsDialog*>(dynamic_cast<const VirtualKShortcutsDialog*>(self));
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        return vkshortcutsdialog->senderSignalIndex();
    } else {
        return ((VirtualKShortcutsDialog*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KShortcutsDialog_QBaseSenderSignalIndex(const KShortcutsDialog* self) {
    auto* vkshortcutsdialog = const_cast<VirtualKShortcutsDialog*>(dynamic_cast<const VirtualKShortcutsDialog*>(self));
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->setKShortcutsDialog_SenderSignalIndex_IsBase(true);
        return vkshortcutsdialog->senderSignalIndex();
    } else {
        return ((VirtualKShortcutsDialog*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutsDialog_OnSenderSignalIndex(const KShortcutsDialog* self, intptr_t slot) {
    auto* vkshortcutsdialog = const_cast<VirtualKShortcutsDialog*>(dynamic_cast<const VirtualKShortcutsDialog*>(self));
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->setKShortcutsDialog_SenderSignalIndex_Callback(reinterpret_cast<VirtualKShortcutsDialog::KShortcutsDialog_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KShortcutsDialog_Receivers(const KShortcutsDialog* self, const char* signal) {
    auto* vkshortcutsdialog = const_cast<VirtualKShortcutsDialog*>(dynamic_cast<const VirtualKShortcutsDialog*>(self));
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        return vkshortcutsdialog->receivers(signal);
    } else {
        return ((VirtualKShortcutsDialog*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KShortcutsDialog_QBaseReceivers(const KShortcutsDialog* self, const char* signal) {
    auto* vkshortcutsdialog = const_cast<VirtualKShortcutsDialog*>(dynamic_cast<const VirtualKShortcutsDialog*>(self));
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->setKShortcutsDialog_Receivers_IsBase(true);
        return vkshortcutsdialog->receivers(signal);
    } else {
        return ((VirtualKShortcutsDialog*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutsDialog_OnReceivers(const KShortcutsDialog* self, intptr_t slot) {
    auto* vkshortcutsdialog = const_cast<VirtualKShortcutsDialog*>(dynamic_cast<const VirtualKShortcutsDialog*>(self));
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->setKShortcutsDialog_Receivers_Callback(reinterpret_cast<VirtualKShortcutsDialog::KShortcutsDialog_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KShortcutsDialog_IsSignalConnected(const KShortcutsDialog* self, const QMetaMethod* signal) {
    auto* vkshortcutsdialog = const_cast<VirtualKShortcutsDialog*>(dynamic_cast<const VirtualKShortcutsDialog*>(self));
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        return vkshortcutsdialog->isSignalConnected(*signal);
    } else {
        return ((VirtualKShortcutsDialog*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KShortcutsDialog_QBaseIsSignalConnected(const KShortcutsDialog* self, const QMetaMethod* signal) {
    auto* vkshortcutsdialog = const_cast<VirtualKShortcutsDialog*>(dynamic_cast<const VirtualKShortcutsDialog*>(self));
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->setKShortcutsDialog_IsSignalConnected_IsBase(true);
        return vkshortcutsdialog->isSignalConnected(*signal);
    } else {
        return ((VirtualKShortcutsDialog*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutsDialog_OnIsSignalConnected(const KShortcutsDialog* self, intptr_t slot) {
    auto* vkshortcutsdialog = const_cast<VirtualKShortcutsDialog*>(dynamic_cast<const VirtualKShortcutsDialog*>(self));
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->setKShortcutsDialog_IsSignalConnected_Callback(reinterpret_cast<VirtualKShortcutsDialog::KShortcutsDialog_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double KShortcutsDialog_GetDecodedMetricF(const KShortcutsDialog* self, int metricA, int metricB) {
    auto* vkshortcutsdialog = const_cast<VirtualKShortcutsDialog*>(dynamic_cast<const VirtualKShortcutsDialog*>(self));
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        return vkshortcutsdialog->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKShortcutsDialog*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double KShortcutsDialog_QBaseGetDecodedMetricF(const KShortcutsDialog* self, int metricA, int metricB) {
    auto* vkshortcutsdialog = const_cast<VirtualKShortcutsDialog*>(dynamic_cast<const VirtualKShortcutsDialog*>(self));
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->setKShortcutsDialog_GetDecodedMetricF_IsBase(true);
        return vkshortcutsdialog->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKShortcutsDialog*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutsDialog_OnGetDecodedMetricF(const KShortcutsDialog* self, intptr_t slot) {
    auto* vkshortcutsdialog = const_cast<VirtualKShortcutsDialog*>(dynamic_cast<const VirtualKShortcutsDialog*>(self));
    if (vkshortcutsdialog && vkshortcutsdialog->isVirtualKShortcutsDialog) {
        vkshortcutsdialog->setKShortcutsDialog_GetDecodedMetricF_Callback(reinterpret_cast<VirtualKShortcutsDialog::KShortcutsDialog_GetDecodedMetricF_Callback>(slot));
    }
}

void KShortcutsDialog_Delete(KShortcutsDialog* self) {
    delete self;
}
