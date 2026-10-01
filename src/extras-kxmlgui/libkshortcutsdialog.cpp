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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KShortcutsDialog_Tr(const char* s) {
    auto _ret = KShortcutsDialog::tr(s);
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
    KActionCollection** _arr = static_cast<KActionCollection**>(malloc(sizeof(KActionCollection*) * (_ret.size())));
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
    return new QSize(self->sizeHint());
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
    self->accept();
}

void KShortcutsDialog_Saved(KShortcutsDialog* self) {
    self->saved();
}

void KShortcutsDialog_Connect_Saved(KShortcutsDialog* self, intptr_t slot) {
    void (*slotFunc)(KShortcutsDialog*) = reinterpret_cast<void (*)(KShortcutsDialog*)>(slot);
    KShortcutsDialog::connect(self,
                              static_cast<void (KShortcutsDialog::*)()>(&KShortcutsDialog::saved),
                              [self, slotFunc]() {
                                  slotFunc(self);
                              });
}

libqt_string KShortcutsDialog_Tr2(const char* s, const char* c) {
    auto _ret = KShortcutsDialog::tr(s, c);
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
    auto _ret = KShortcutsDialog::tr(s, c, static_cast<int>(n));
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
QMetaObject* KShortcutsDialog_SuperMetaObject(const KShortcutsDialog* self) {
    return (QMetaObject*)self->KShortcutsDialog::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KShortcutsDialog_OnMetaObject(KShortcutsDialog* self, intptr_t slot) {
    if (auto* vkshortcutsdialog = const_cast<VirtualKShortcutsDialog*>(dynamic_cast<const VirtualKShortcutsDialog*>(self)))
        vkshortcutsdialog->kshortcutsdialog_metaobject_callback = reinterpret_cast<VirtualKShortcutsDialog::KShortcutsDialog_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KShortcutsDialog_SuperMetacast(KShortcutsDialog* self, const char* param1) {
    return self->KShortcutsDialog::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KShortcutsDialog_OnMetacast(KShortcutsDialog* self, intptr_t slot) {
    if (auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self))
        vkshortcutsdialog->kshortcutsdialog_metacast_callback = reinterpret_cast<VirtualKShortcutsDialog::KShortcutsDialog_Metacast_Callback>(slot);
}

// Base class handler implementation
int KShortcutsDialog_SuperMetacall(KShortcutsDialog* self, int param1, int param2, void** param3) {
    return self->KShortcutsDialog::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KShortcutsDialog_OnMetacall(KShortcutsDialog* self, intptr_t slot) {
    if (auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self))
        vkshortcutsdialog->kshortcutsdialog_metacall_callback = reinterpret_cast<VirtualKShortcutsDialog::KShortcutsDialog_Metacall_Callback>(slot);
}

// Base class handler implementation
QSize* KShortcutsDialog_SuperSizeHint(const KShortcutsDialog* self) {
    return new QSize(self->KShortcutsDialog::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void KShortcutsDialog_OnSizeHint(KShortcutsDialog* self, intptr_t slot) {
    if (auto* vkshortcutsdialog = const_cast<VirtualKShortcutsDialog*>(dynamic_cast<const VirtualKShortcutsDialog*>(self)))
        vkshortcutsdialog->kshortcutsdialog_sizehint_callback = reinterpret_cast<VirtualKShortcutsDialog::KShortcutsDialog_SizeHint_Callback>(slot);
}

// Base class handler implementation
void KShortcutsDialog_SuperAccept(KShortcutsDialog* self) {
    self->KShortcutsDialog::accept();
}

// Auxiliary method to allow providing re-implementation
void KShortcutsDialog_OnAccept(KShortcutsDialog* self, intptr_t slot) {
    if (auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self))
        vkshortcutsdialog->kshortcutsdialog_accept_callback = reinterpret_cast<VirtualKShortcutsDialog::KShortcutsDialog_Accept_Callback>(slot);
}

// Derived class handler implementation
void KShortcutsDialog_SetVisible(KShortcutsDialog* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void KShortcutsDialog_SuperSetVisible(KShortcutsDialog* self, bool visible) {
    self->KShortcutsDialog::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void KShortcutsDialog_OnSetVisible(KShortcutsDialog* self, intptr_t slot) {
    if (auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self))
        vkshortcutsdialog->kshortcutsdialog_setvisible_callback = reinterpret_cast<VirtualKShortcutsDialog::KShortcutsDialog_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* KShortcutsDialog_MinimumSizeHint(const KShortcutsDialog* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* KShortcutsDialog_SuperMinimumSizeHint(const KShortcutsDialog* self) {
    return new QSize(self->KShortcutsDialog::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void KShortcutsDialog_OnMinimumSizeHint(KShortcutsDialog* self, intptr_t slot) {
    if (auto* vkshortcutsdialog = const_cast<VirtualKShortcutsDialog*>(dynamic_cast<const VirtualKShortcutsDialog*>(self)))
        vkshortcutsdialog->kshortcutsdialog_minimumsizehint_callback = reinterpret_cast<VirtualKShortcutsDialog::KShortcutsDialog_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
void KShortcutsDialog_Open(KShortcutsDialog* self) {
    self->open();
}

// Base class handler implementation
void KShortcutsDialog_SuperOpen(KShortcutsDialog* self) {
    self->KShortcutsDialog::open();
}

// Auxiliary method to allow providing re-implementation
void KShortcutsDialog_OnOpen(KShortcutsDialog* self, intptr_t slot) {
    if (auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self))
        vkshortcutsdialog->kshortcutsdialog_open_callback = reinterpret_cast<VirtualKShortcutsDialog::KShortcutsDialog_Open_Callback>(slot);
}

// Derived class handler implementation
int KShortcutsDialog_Exec(KShortcutsDialog* self) {
    return self->exec();
}

// Base class handler implementation
int KShortcutsDialog_SuperExec(KShortcutsDialog* self) {
    return self->KShortcutsDialog::exec();
}

// Auxiliary method to allow providing re-implementation
void KShortcutsDialog_OnExec(KShortcutsDialog* self, intptr_t slot) {
    if (auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self))
        vkshortcutsdialog->kshortcutsdialog_exec_callback = reinterpret_cast<VirtualKShortcutsDialog::KShortcutsDialog_Exec_Callback>(slot);
}

// Derived class handler implementation
void KShortcutsDialog_Done(KShortcutsDialog* self, int param1) {
    self->done(static_cast<int>(param1));
}

// Base class handler implementation
void KShortcutsDialog_SuperDone(KShortcutsDialog* self, int param1) {
    self->KShortcutsDialog::done(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void KShortcutsDialog_OnDone(KShortcutsDialog* self, intptr_t slot) {
    if (auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self))
        vkshortcutsdialog->kshortcutsdialog_done_callback = reinterpret_cast<VirtualKShortcutsDialog::KShortcutsDialog_Done_Callback>(slot);
}

// Derived class handler implementation
void KShortcutsDialog_Reject(KShortcutsDialog* self) {
    self->reject();
}

// Base class handler implementation
void KShortcutsDialog_SuperReject(KShortcutsDialog* self) {
    self->KShortcutsDialog::reject();
}

// Auxiliary method to allow providing re-implementation
void KShortcutsDialog_OnReject(KShortcutsDialog* self, intptr_t slot) {
    if (auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self))
        vkshortcutsdialog->kshortcutsdialog_reject_callback = reinterpret_cast<VirtualKShortcutsDialog::KShortcutsDialog_Reject_Callback>(slot);
}

// Derived class handler implementation
void KShortcutsDialog_KeyPressEvent(KShortcutsDialog* self, QKeyEvent* param1) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog) {
        vkshortcutsdialog->keyPressEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KShortcutsDialog::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KShortcutsDialog_SuperKeyPressEvent(KShortcutsDialog* self, QKeyEvent* param1) {
    if (auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self)) {
        vkshortcutsdialog->KShortcutsDialog::keyPressEvent(param1);
    } else
        qFatal("Error: Protected virtual method KShortcutsDialog::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KShortcutsDialog_OnKeyPressEvent(KShortcutsDialog* self, intptr_t slot) {
    if (auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self))
        vkshortcutsdialog->kshortcutsdialog_keypressevent_callback = reinterpret_cast<VirtualKShortcutsDialog::KShortcutsDialog_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void KShortcutsDialog_CloseEvent(KShortcutsDialog* self, QCloseEvent* param1) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog) {
        vkshortcutsdialog->closeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KShortcutsDialog::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KShortcutsDialog_SuperCloseEvent(KShortcutsDialog* self, QCloseEvent* param1) {
    if (auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self)) {
        vkshortcutsdialog->KShortcutsDialog::closeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KShortcutsDialog::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KShortcutsDialog_OnCloseEvent(KShortcutsDialog* self, intptr_t slot) {
    if (auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self))
        vkshortcutsdialog->kshortcutsdialog_closeevent_callback = reinterpret_cast<VirtualKShortcutsDialog::KShortcutsDialog_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void KShortcutsDialog_ShowEvent(KShortcutsDialog* self, QShowEvent* param1) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog) {
        vkshortcutsdialog->showEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KShortcutsDialog::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KShortcutsDialog_SuperShowEvent(KShortcutsDialog* self, QShowEvent* param1) {
    if (auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self)) {
        vkshortcutsdialog->KShortcutsDialog::showEvent(param1);
    } else
        qFatal("Error: Protected virtual method KShortcutsDialog::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KShortcutsDialog_OnShowEvent(KShortcutsDialog* self, intptr_t slot) {
    if (auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self))
        vkshortcutsdialog->kshortcutsdialog_showevent_callback = reinterpret_cast<VirtualKShortcutsDialog::KShortcutsDialog_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void KShortcutsDialog_ResizeEvent(KShortcutsDialog* self, QResizeEvent* param1) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog) {
        vkshortcutsdialog->resizeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KShortcutsDialog::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KShortcutsDialog_SuperResizeEvent(KShortcutsDialog* self, QResizeEvent* param1) {
    if (auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self)) {
        vkshortcutsdialog->KShortcutsDialog::resizeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KShortcutsDialog::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KShortcutsDialog_OnResizeEvent(KShortcutsDialog* self, intptr_t slot) {
    if (auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self))
        vkshortcutsdialog->kshortcutsdialog_resizeevent_callback = reinterpret_cast<VirtualKShortcutsDialog::KShortcutsDialog_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void KShortcutsDialog_ContextMenuEvent(KShortcutsDialog* self, QContextMenuEvent* param1) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog) {
        vkshortcutsdialog->contextMenuEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KShortcutsDialog::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KShortcutsDialog_SuperContextMenuEvent(KShortcutsDialog* self, QContextMenuEvent* param1) {
    if (auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self)) {
        vkshortcutsdialog->KShortcutsDialog::contextMenuEvent(param1);
    } else
        qFatal("Error: Protected virtual method KShortcutsDialog::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KShortcutsDialog_OnContextMenuEvent(KShortcutsDialog* self, intptr_t slot) {
    if (auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self))
        vkshortcutsdialog->kshortcutsdialog_contextmenuevent_callback = reinterpret_cast<VirtualKShortcutsDialog::KShortcutsDialog_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
bool KShortcutsDialog_EventFilter(KShortcutsDialog* self, QObject* param1, QEvent* param2) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog) {
        return vkshortcutsdialog->eventFilter(param1, param2);
    } else {
        qFatal("Error: Protected virtual method KShortcutsDialog::eventFilter called without a directly constructed type");
    }
}

// Base class handler implementation
bool KShortcutsDialog_SuperEventFilter(KShortcutsDialog* self, QObject* param1, QEvent* param2) {
    if (auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self)) {
        return vkshortcutsdialog->KShortcutsDialog::eventFilter(param1, param2);
    } else
        qFatal("Error: Protected virtual method KShortcutsDialog::eventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KShortcutsDialog_OnEventFilter(KShortcutsDialog* self, intptr_t slot) {
    if (auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self))
        vkshortcutsdialog->kshortcutsdialog_eventfilter_callback = reinterpret_cast<VirtualKShortcutsDialog::KShortcutsDialog_EventFilter_Callback>(slot);
}

// Derived class handler implementation
int KShortcutsDialog_DevType(const KShortcutsDialog* self) {
    return self->devType();
}

// Base class handler implementation
int KShortcutsDialog_SuperDevType(const KShortcutsDialog* self) {
    return self->KShortcutsDialog::devType();
}

// Auxiliary method to allow providing re-implementation
void KShortcutsDialog_OnDevType(KShortcutsDialog* self, intptr_t slot) {
    if (auto* vkshortcutsdialog = const_cast<VirtualKShortcutsDialog*>(dynamic_cast<const VirtualKShortcutsDialog*>(self)))
        vkshortcutsdialog->kshortcutsdialog_devtype_callback = reinterpret_cast<VirtualKShortcutsDialog::KShortcutsDialog_DevType_Callback>(slot);
}

// Derived class handler implementation
int KShortcutsDialog_HeightForWidth(const KShortcutsDialog* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int KShortcutsDialog_SuperHeightForWidth(const KShortcutsDialog* self, int param1) {
    return self->KShortcutsDialog::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void KShortcutsDialog_OnHeightForWidth(KShortcutsDialog* self, intptr_t slot) {
    if (auto* vkshortcutsdialog = const_cast<VirtualKShortcutsDialog*>(dynamic_cast<const VirtualKShortcutsDialog*>(self)))
        vkshortcutsdialog->kshortcutsdialog_heightforwidth_callback = reinterpret_cast<VirtualKShortcutsDialog::KShortcutsDialog_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool KShortcutsDialog_HasHeightForWidth(const KShortcutsDialog* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool KShortcutsDialog_SuperHasHeightForWidth(const KShortcutsDialog* self) {
    return self->KShortcutsDialog::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void KShortcutsDialog_OnHasHeightForWidth(KShortcutsDialog* self, intptr_t slot) {
    if (auto* vkshortcutsdialog = const_cast<VirtualKShortcutsDialog*>(dynamic_cast<const VirtualKShortcutsDialog*>(self)))
        vkshortcutsdialog->kshortcutsdialog_hasheightforwidth_callback = reinterpret_cast<VirtualKShortcutsDialog::KShortcutsDialog_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* KShortcutsDialog_PaintEngine(const KShortcutsDialog* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* KShortcutsDialog_SuperPaintEngine(const KShortcutsDialog* self) {
    return self->KShortcutsDialog::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void KShortcutsDialog_OnPaintEngine(KShortcutsDialog* self, intptr_t slot) {
    if (auto* vkshortcutsdialog = const_cast<VirtualKShortcutsDialog*>(dynamic_cast<const VirtualKShortcutsDialog*>(self)))
        vkshortcutsdialog->kshortcutsdialog_paintengine_callback = reinterpret_cast<VirtualKShortcutsDialog::KShortcutsDialog_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
bool KShortcutsDialog_Event(KShortcutsDialog* self, QEvent* event) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog) {
        return vkshortcutsdialog->event(event);
    } else {
        qFatal("Error: Protected virtual method KShortcutsDialog::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool KShortcutsDialog_SuperEvent(KShortcutsDialog* self, QEvent* event) {
    if (auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self)) {
        return vkshortcutsdialog->KShortcutsDialog::event(event);
    } else
        qFatal("Error: Protected virtual method KShortcutsDialog::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KShortcutsDialog_OnEvent(KShortcutsDialog* self, intptr_t slot) {
    if (auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self))
        vkshortcutsdialog->kshortcutsdialog_event_callback = reinterpret_cast<VirtualKShortcutsDialog::KShortcutsDialog_Event_Callback>(slot);
}

// Derived class handler implementation
void KShortcutsDialog_MousePressEvent(KShortcutsDialog* self, QMouseEvent* event) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog) {
        vkshortcutsdialog->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method KShortcutsDialog::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KShortcutsDialog_SuperMousePressEvent(KShortcutsDialog* self, QMouseEvent* event) {
    if (auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self)) {
        vkshortcutsdialog->KShortcutsDialog::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method KShortcutsDialog::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KShortcutsDialog_OnMousePressEvent(KShortcutsDialog* self, intptr_t slot) {
    if (auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self))
        vkshortcutsdialog->kshortcutsdialog_mousepressevent_callback = reinterpret_cast<VirtualKShortcutsDialog::KShortcutsDialog_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void KShortcutsDialog_MouseReleaseEvent(KShortcutsDialog* self, QMouseEvent* event) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog) {
        vkshortcutsdialog->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KShortcutsDialog::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KShortcutsDialog_SuperMouseReleaseEvent(KShortcutsDialog* self, QMouseEvent* event) {
    if (auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self)) {
        vkshortcutsdialog->KShortcutsDialog::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KShortcutsDialog::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KShortcutsDialog_OnMouseReleaseEvent(KShortcutsDialog* self, intptr_t slot) {
    if (auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self))
        vkshortcutsdialog->kshortcutsdialog_mousereleaseevent_callback = reinterpret_cast<VirtualKShortcutsDialog::KShortcutsDialog_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KShortcutsDialog_MouseDoubleClickEvent(KShortcutsDialog* self, QMouseEvent* event) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog) {
        vkshortcutsdialog->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method KShortcutsDialog::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KShortcutsDialog_SuperMouseDoubleClickEvent(KShortcutsDialog* self, QMouseEvent* event) {
    if (auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self)) {
        vkshortcutsdialog->KShortcutsDialog::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method KShortcutsDialog::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KShortcutsDialog_OnMouseDoubleClickEvent(KShortcutsDialog* self, intptr_t slot) {
    if (auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self))
        vkshortcutsdialog->kshortcutsdialog_mousedoubleclickevent_callback = reinterpret_cast<VirtualKShortcutsDialog::KShortcutsDialog_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void KShortcutsDialog_MouseMoveEvent(KShortcutsDialog* self, QMouseEvent* event) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog) {
        vkshortcutsdialog->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KShortcutsDialog::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KShortcutsDialog_SuperMouseMoveEvent(KShortcutsDialog* self, QMouseEvent* event) {
    if (auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self)) {
        vkshortcutsdialog->KShortcutsDialog::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KShortcutsDialog::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KShortcutsDialog_OnMouseMoveEvent(KShortcutsDialog* self, intptr_t slot) {
    if (auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self))
        vkshortcutsdialog->kshortcutsdialog_mousemoveevent_callback = reinterpret_cast<VirtualKShortcutsDialog::KShortcutsDialog_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KShortcutsDialog_WheelEvent(KShortcutsDialog* self, QWheelEvent* event) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog) {
        vkshortcutsdialog->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method KShortcutsDialog::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KShortcutsDialog_SuperWheelEvent(KShortcutsDialog* self, QWheelEvent* event) {
    if (auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self)) {
        vkshortcutsdialog->KShortcutsDialog::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method KShortcutsDialog::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KShortcutsDialog_OnWheelEvent(KShortcutsDialog* self, intptr_t slot) {
    if (auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self))
        vkshortcutsdialog->kshortcutsdialog_wheelevent_callback = reinterpret_cast<VirtualKShortcutsDialog::KShortcutsDialog_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void KShortcutsDialog_KeyReleaseEvent(KShortcutsDialog* self, QKeyEvent* event) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog) {
        vkshortcutsdialog->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KShortcutsDialog::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KShortcutsDialog_SuperKeyReleaseEvent(KShortcutsDialog* self, QKeyEvent* event) {
    if (auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self)) {
        vkshortcutsdialog->KShortcutsDialog::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KShortcutsDialog::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KShortcutsDialog_OnKeyReleaseEvent(KShortcutsDialog* self, intptr_t slot) {
    if (auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self))
        vkshortcutsdialog->kshortcutsdialog_keyreleaseevent_callback = reinterpret_cast<VirtualKShortcutsDialog::KShortcutsDialog_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KShortcutsDialog_FocusInEvent(KShortcutsDialog* self, QFocusEvent* event) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog) {
        vkshortcutsdialog->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method KShortcutsDialog::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KShortcutsDialog_SuperFocusInEvent(KShortcutsDialog* self, QFocusEvent* event) {
    if (auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self)) {
        vkshortcutsdialog->KShortcutsDialog::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method KShortcutsDialog::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KShortcutsDialog_OnFocusInEvent(KShortcutsDialog* self, intptr_t slot) {
    if (auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self))
        vkshortcutsdialog->kshortcutsdialog_focusinevent_callback = reinterpret_cast<VirtualKShortcutsDialog::KShortcutsDialog_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void KShortcutsDialog_FocusOutEvent(KShortcutsDialog* self, QFocusEvent* event) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog) {
        vkshortcutsdialog->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method KShortcutsDialog::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KShortcutsDialog_SuperFocusOutEvent(KShortcutsDialog* self, QFocusEvent* event) {
    if (auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self)) {
        vkshortcutsdialog->KShortcutsDialog::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method KShortcutsDialog::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KShortcutsDialog_OnFocusOutEvent(KShortcutsDialog* self, intptr_t slot) {
    if (auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self))
        vkshortcutsdialog->kshortcutsdialog_focusoutevent_callback = reinterpret_cast<VirtualKShortcutsDialog::KShortcutsDialog_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void KShortcutsDialog_EnterEvent(KShortcutsDialog* self, QEnterEvent* event) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog) {
        vkshortcutsdialog->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KShortcutsDialog::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KShortcutsDialog_SuperEnterEvent(KShortcutsDialog* self, QEnterEvent* event) {
    if (auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self)) {
        vkshortcutsdialog->KShortcutsDialog::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method KShortcutsDialog::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KShortcutsDialog_OnEnterEvent(KShortcutsDialog* self, intptr_t slot) {
    if (auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self))
        vkshortcutsdialog->kshortcutsdialog_enterevent_callback = reinterpret_cast<VirtualKShortcutsDialog::KShortcutsDialog_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KShortcutsDialog_LeaveEvent(KShortcutsDialog* self, QEvent* event) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog) {
        vkshortcutsdialog->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KShortcutsDialog::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KShortcutsDialog_SuperLeaveEvent(KShortcutsDialog* self, QEvent* event) {
    if (auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self)) {
        vkshortcutsdialog->KShortcutsDialog::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KShortcutsDialog::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KShortcutsDialog_OnLeaveEvent(KShortcutsDialog* self, intptr_t slot) {
    if (auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self))
        vkshortcutsdialog->kshortcutsdialog_leaveevent_callback = reinterpret_cast<VirtualKShortcutsDialog::KShortcutsDialog_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KShortcutsDialog_PaintEvent(KShortcutsDialog* self, QPaintEvent* event) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog) {
        vkshortcutsdialog->paintEvent(event);
    } else {
        qFatal("Error: Protected virtual method KShortcutsDialog::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KShortcutsDialog_SuperPaintEvent(KShortcutsDialog* self, QPaintEvent* event) {
    if (auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self)) {
        vkshortcutsdialog->KShortcutsDialog::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method KShortcutsDialog::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KShortcutsDialog_OnPaintEvent(KShortcutsDialog* self, intptr_t slot) {
    if (auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self))
        vkshortcutsdialog->kshortcutsdialog_paintevent_callback = reinterpret_cast<VirtualKShortcutsDialog::KShortcutsDialog_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void KShortcutsDialog_MoveEvent(KShortcutsDialog* self, QMoveEvent* event) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog) {
        vkshortcutsdialog->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KShortcutsDialog::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KShortcutsDialog_SuperMoveEvent(KShortcutsDialog* self, QMoveEvent* event) {
    if (auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self)) {
        vkshortcutsdialog->KShortcutsDialog::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method KShortcutsDialog::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KShortcutsDialog_OnMoveEvent(KShortcutsDialog* self, intptr_t slot) {
    if (auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self))
        vkshortcutsdialog->kshortcutsdialog_moveevent_callback = reinterpret_cast<VirtualKShortcutsDialog::KShortcutsDialog_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KShortcutsDialog_TabletEvent(KShortcutsDialog* self, QTabletEvent* event) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog) {
        vkshortcutsdialog->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method KShortcutsDialog::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KShortcutsDialog_SuperTabletEvent(KShortcutsDialog* self, QTabletEvent* event) {
    if (auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self)) {
        vkshortcutsdialog->KShortcutsDialog::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method KShortcutsDialog::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KShortcutsDialog_OnTabletEvent(KShortcutsDialog* self, intptr_t slot) {
    if (auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self))
        vkshortcutsdialog->kshortcutsdialog_tabletevent_callback = reinterpret_cast<VirtualKShortcutsDialog::KShortcutsDialog_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void KShortcutsDialog_ActionEvent(KShortcutsDialog* self, QActionEvent* event) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog) {
        vkshortcutsdialog->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method KShortcutsDialog::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KShortcutsDialog_SuperActionEvent(KShortcutsDialog* self, QActionEvent* event) {
    if (auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self)) {
        vkshortcutsdialog->KShortcutsDialog::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method KShortcutsDialog::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KShortcutsDialog_OnActionEvent(KShortcutsDialog* self, intptr_t slot) {
    if (auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self))
        vkshortcutsdialog->kshortcutsdialog_actionevent_callback = reinterpret_cast<VirtualKShortcutsDialog::KShortcutsDialog_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void KShortcutsDialog_DragEnterEvent(KShortcutsDialog* self, QDragEnterEvent* event) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog) {
        vkshortcutsdialog->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KShortcutsDialog::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KShortcutsDialog_SuperDragEnterEvent(KShortcutsDialog* self, QDragEnterEvent* event) {
    if (auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self)) {
        vkshortcutsdialog->KShortcutsDialog::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method KShortcutsDialog::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KShortcutsDialog_OnDragEnterEvent(KShortcutsDialog* self, intptr_t slot) {
    if (auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self))
        vkshortcutsdialog->kshortcutsdialog_dragenterevent_callback = reinterpret_cast<VirtualKShortcutsDialog::KShortcutsDialog_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KShortcutsDialog_DragMoveEvent(KShortcutsDialog* self, QDragMoveEvent* event) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog) {
        vkshortcutsdialog->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KShortcutsDialog::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KShortcutsDialog_SuperDragMoveEvent(KShortcutsDialog* self, QDragMoveEvent* event) {
    if (auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self)) {
        vkshortcutsdialog->KShortcutsDialog::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KShortcutsDialog::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KShortcutsDialog_OnDragMoveEvent(KShortcutsDialog* self, intptr_t slot) {
    if (auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self))
        vkshortcutsdialog->kshortcutsdialog_dragmoveevent_callback = reinterpret_cast<VirtualKShortcutsDialog::KShortcutsDialog_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KShortcutsDialog_DragLeaveEvent(KShortcutsDialog* self, QDragLeaveEvent* event) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog) {
        vkshortcutsdialog->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KShortcutsDialog::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KShortcutsDialog_SuperDragLeaveEvent(KShortcutsDialog* self, QDragLeaveEvent* event) {
    if (auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self)) {
        vkshortcutsdialog->KShortcutsDialog::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KShortcutsDialog::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KShortcutsDialog_OnDragLeaveEvent(KShortcutsDialog* self, intptr_t slot) {
    if (auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self))
        vkshortcutsdialog->kshortcutsdialog_dragleaveevent_callback = reinterpret_cast<VirtualKShortcutsDialog::KShortcutsDialog_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KShortcutsDialog_DropEvent(KShortcutsDialog* self, QDropEvent* event) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog) {
        vkshortcutsdialog->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method KShortcutsDialog::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KShortcutsDialog_SuperDropEvent(KShortcutsDialog* self, QDropEvent* event) {
    if (auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self)) {
        vkshortcutsdialog->KShortcutsDialog::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method KShortcutsDialog::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KShortcutsDialog_OnDropEvent(KShortcutsDialog* self, intptr_t slot) {
    if (auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self))
        vkshortcutsdialog->kshortcutsdialog_dropevent_callback = reinterpret_cast<VirtualKShortcutsDialog::KShortcutsDialog_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void KShortcutsDialog_HideEvent(KShortcutsDialog* self, QHideEvent* event) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog) {
        vkshortcutsdialog->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method KShortcutsDialog::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KShortcutsDialog_SuperHideEvent(KShortcutsDialog* self, QHideEvent* event) {
    if (auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self)) {
        vkshortcutsdialog->KShortcutsDialog::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method KShortcutsDialog::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KShortcutsDialog_OnHideEvent(KShortcutsDialog* self, intptr_t slot) {
    if (auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self))
        vkshortcutsdialog->kshortcutsdialog_hideevent_callback = reinterpret_cast<VirtualKShortcutsDialog::KShortcutsDialog_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool KShortcutsDialog_NativeEvent(KShortcutsDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog) {
        return vkshortcutsdialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method KShortcutsDialog::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool KShortcutsDialog_SuperNativeEvent(KShortcutsDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self)) {
        return vkshortcutsdialog->KShortcutsDialog::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method KShortcutsDialog::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KShortcutsDialog_OnNativeEvent(KShortcutsDialog* self, intptr_t slot) {
    if (auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self))
        vkshortcutsdialog->kshortcutsdialog_nativeevent_callback = reinterpret_cast<VirtualKShortcutsDialog::KShortcutsDialog_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
void KShortcutsDialog_ChangeEvent(KShortcutsDialog* self, QEvent* param1) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog) {
        vkshortcutsdialog->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KShortcutsDialog::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KShortcutsDialog_SuperChangeEvent(KShortcutsDialog* self, QEvent* param1) {
    if (auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self)) {
        vkshortcutsdialog->KShortcutsDialog::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KShortcutsDialog::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KShortcutsDialog_OnChangeEvent(KShortcutsDialog* self, intptr_t slot) {
    if (auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self))
        vkshortcutsdialog->kshortcutsdialog_changeevent_callback = reinterpret_cast<VirtualKShortcutsDialog::KShortcutsDialog_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
int KShortcutsDialog_Metric(const KShortcutsDialog* self, int param1) {
    auto* vkshortcutsdialog = const_cast<VirtualKShortcutsDialog*>(dynamic_cast<const VirtualKShortcutsDialog*>(self));
    if (vkshortcutsdialog) {
        return vkshortcutsdialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method KShortcutsDialog::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int KShortcutsDialog_SuperMetric(const KShortcutsDialog* self, int param1) {
    if (auto* vkshortcutsdialog = const_cast<VirtualKShortcutsDialog*>(dynamic_cast<const VirtualKShortcutsDialog*>(self))) {
        return vkshortcutsdialog->KShortcutsDialog::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method KShortcutsDialog::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KShortcutsDialog_OnMetric(KShortcutsDialog* self, intptr_t slot) {
    if (auto* vkshortcutsdialog = const_cast<VirtualKShortcutsDialog*>(dynamic_cast<const VirtualKShortcutsDialog*>(self)))
        vkshortcutsdialog->kshortcutsdialog_metric_callback = reinterpret_cast<VirtualKShortcutsDialog::KShortcutsDialog_Metric_Callback>(slot);
}

// Derived class handler implementation
void KShortcutsDialog_InitPainter(const KShortcutsDialog* self, QPainter* painter) {
    auto* vkshortcutsdialog = const_cast<VirtualKShortcutsDialog*>(dynamic_cast<const VirtualKShortcutsDialog*>(self));
    if (vkshortcutsdialog) {
        vkshortcutsdialog->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method KShortcutsDialog::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void KShortcutsDialog_SuperInitPainter(const KShortcutsDialog* self, QPainter* painter) {
    if (auto* vkshortcutsdialog = const_cast<VirtualKShortcutsDialog*>(dynamic_cast<const VirtualKShortcutsDialog*>(self))) {
        vkshortcutsdialog->KShortcutsDialog::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method KShortcutsDialog::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KShortcutsDialog_OnInitPainter(KShortcutsDialog* self, intptr_t slot) {
    if (auto* vkshortcutsdialog = const_cast<VirtualKShortcutsDialog*>(dynamic_cast<const VirtualKShortcutsDialog*>(self)))
        vkshortcutsdialog->kshortcutsdialog_initpainter_callback = reinterpret_cast<VirtualKShortcutsDialog::KShortcutsDialog_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* KShortcutsDialog_Redirected(const KShortcutsDialog* self, QPoint* offset) {
    auto* vkshortcutsdialog = const_cast<VirtualKShortcutsDialog*>(dynamic_cast<const VirtualKShortcutsDialog*>(self));
    if (vkshortcutsdialog) {
        return vkshortcutsdialog->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method KShortcutsDialog::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* KShortcutsDialog_SuperRedirected(const KShortcutsDialog* self, QPoint* offset) {
    if (auto* vkshortcutsdialog = const_cast<VirtualKShortcutsDialog*>(dynamic_cast<const VirtualKShortcutsDialog*>(self))) {
        return vkshortcutsdialog->KShortcutsDialog::redirected(offset);
    } else
        qFatal("Error: Protected virtual method KShortcutsDialog::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KShortcutsDialog_OnRedirected(KShortcutsDialog* self, intptr_t slot) {
    if (auto* vkshortcutsdialog = const_cast<VirtualKShortcutsDialog*>(dynamic_cast<const VirtualKShortcutsDialog*>(self)))
        vkshortcutsdialog->kshortcutsdialog_redirected_callback = reinterpret_cast<VirtualKShortcutsDialog::KShortcutsDialog_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* KShortcutsDialog_SharedPainter(const KShortcutsDialog* self) {
    auto* vkshortcutsdialog = const_cast<VirtualKShortcutsDialog*>(dynamic_cast<const VirtualKShortcutsDialog*>(self));
    if (vkshortcutsdialog) {
        return vkshortcutsdialog->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method KShortcutsDialog::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* KShortcutsDialog_SuperSharedPainter(const KShortcutsDialog* self) {
    if (auto* vkshortcutsdialog = const_cast<VirtualKShortcutsDialog*>(dynamic_cast<const VirtualKShortcutsDialog*>(self))) {
        return vkshortcutsdialog->KShortcutsDialog::sharedPainter();
    } else
        qFatal("Error: Protected virtual method KShortcutsDialog::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KShortcutsDialog_OnSharedPainter(KShortcutsDialog* self, intptr_t slot) {
    if (auto* vkshortcutsdialog = const_cast<VirtualKShortcutsDialog*>(dynamic_cast<const VirtualKShortcutsDialog*>(self)))
        vkshortcutsdialog->kshortcutsdialog_sharedpainter_callback = reinterpret_cast<VirtualKShortcutsDialog::KShortcutsDialog_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void KShortcutsDialog_InputMethodEvent(KShortcutsDialog* self, QInputMethodEvent* param1) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog) {
        vkshortcutsdialog->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KShortcutsDialog::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KShortcutsDialog_SuperInputMethodEvent(KShortcutsDialog* self, QInputMethodEvent* param1) {
    if (auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self)) {
        vkshortcutsdialog->KShortcutsDialog::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method KShortcutsDialog::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KShortcutsDialog_OnInputMethodEvent(KShortcutsDialog* self, intptr_t slot) {
    if (auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self))
        vkshortcutsdialog->kshortcutsdialog_inputmethodevent_callback = reinterpret_cast<VirtualKShortcutsDialog::KShortcutsDialog_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* KShortcutsDialog_InputMethodQuery(const KShortcutsDialog* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* KShortcutsDialog_SuperInputMethodQuery(const KShortcutsDialog* self, int param1) {
    return new QVariant(self->KShortcutsDialog::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void KShortcutsDialog_OnInputMethodQuery(KShortcutsDialog* self, intptr_t slot) {
    if (auto* vkshortcutsdialog = const_cast<VirtualKShortcutsDialog*>(dynamic_cast<const VirtualKShortcutsDialog*>(self)))
        vkshortcutsdialog->kshortcutsdialog_inputmethodquery_callback = reinterpret_cast<VirtualKShortcutsDialog::KShortcutsDialog_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool KShortcutsDialog_FocusNextPrevChild(KShortcutsDialog* self, bool next) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog) {
        return vkshortcutsdialog->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method KShortcutsDialog::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool KShortcutsDialog_SuperFocusNextPrevChild(KShortcutsDialog* self, bool next) {
    if (auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self)) {
        return vkshortcutsdialog->KShortcutsDialog::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method KShortcutsDialog::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KShortcutsDialog_OnFocusNextPrevChild(KShortcutsDialog* self, intptr_t slot) {
    if (auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self))
        vkshortcutsdialog->kshortcutsdialog_focusnextprevchild_callback = reinterpret_cast<VirtualKShortcutsDialog::KShortcutsDialog_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
void KShortcutsDialog_TimerEvent(KShortcutsDialog* self, QTimerEvent* event) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog) {
        vkshortcutsdialog->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KShortcutsDialog::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KShortcutsDialog_SuperTimerEvent(KShortcutsDialog* self, QTimerEvent* event) {
    if (auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self)) {
        vkshortcutsdialog->KShortcutsDialog::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KShortcutsDialog::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KShortcutsDialog_OnTimerEvent(KShortcutsDialog* self, intptr_t slot) {
    if (auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self))
        vkshortcutsdialog->kshortcutsdialog_timerevent_callback = reinterpret_cast<VirtualKShortcutsDialog::KShortcutsDialog_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KShortcutsDialog_ChildEvent(KShortcutsDialog* self, QChildEvent* event) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog) {
        vkshortcutsdialog->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KShortcutsDialog::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KShortcutsDialog_SuperChildEvent(KShortcutsDialog* self, QChildEvent* event) {
    if (auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self)) {
        vkshortcutsdialog->KShortcutsDialog::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KShortcutsDialog::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KShortcutsDialog_OnChildEvent(KShortcutsDialog* self, intptr_t slot) {
    if (auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self))
        vkshortcutsdialog->kshortcutsdialog_childevent_callback = reinterpret_cast<VirtualKShortcutsDialog::KShortcutsDialog_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KShortcutsDialog_CustomEvent(KShortcutsDialog* self, QEvent* event) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog) {
        vkshortcutsdialog->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KShortcutsDialog::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KShortcutsDialog_SuperCustomEvent(KShortcutsDialog* self, QEvent* event) {
    if (auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self)) {
        vkshortcutsdialog->KShortcutsDialog::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KShortcutsDialog::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KShortcutsDialog_OnCustomEvent(KShortcutsDialog* self, intptr_t slot) {
    if (auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self))
        vkshortcutsdialog->kshortcutsdialog_customevent_callback = reinterpret_cast<VirtualKShortcutsDialog::KShortcutsDialog_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KShortcutsDialog_ConnectNotify(KShortcutsDialog* self, const QMetaMethod* signal) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog) {
        vkshortcutsdialog->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KShortcutsDialog::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KShortcutsDialog_SuperConnectNotify(KShortcutsDialog* self, const QMetaMethod* signal) {
    if (auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self)) {
        vkshortcutsdialog->KShortcutsDialog::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KShortcutsDialog::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KShortcutsDialog_OnConnectNotify(KShortcutsDialog* self, intptr_t slot) {
    if (auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self))
        vkshortcutsdialog->kshortcutsdialog_connectnotify_callback = reinterpret_cast<VirtualKShortcutsDialog::KShortcutsDialog_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KShortcutsDialog_DisconnectNotify(KShortcutsDialog* self, const QMetaMethod* signal) {
    auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self);
    if (vkshortcutsdialog) {
        vkshortcutsdialog->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KShortcutsDialog::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KShortcutsDialog_SuperDisconnectNotify(KShortcutsDialog* self, const QMetaMethod* signal) {
    if (auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self)) {
        vkshortcutsdialog->KShortcutsDialog::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KShortcutsDialog::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KShortcutsDialog_OnDisconnectNotify(KShortcutsDialog* self, intptr_t slot) {
    if (auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self))
        vkshortcutsdialog->kshortcutsdialog_disconnectnotify_callback = reinterpret_cast<VirtualKShortcutsDialog::KShortcutsDialog_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void KShortcutsDialog_AdjustPosition(KShortcutsDialog* self, QWidget* param1) {
    if (auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self)) {
        vkshortcutsdialog->VirtualKShortcutsDialog::adjustPosition(param1);
    } else
        qFatal("Error: Protected method KShortcutsDialog::adjustPosition called without a directly constructed type");
}

// Derived class protected handler implementation
void KShortcutsDialog_UpdateMicroFocus(KShortcutsDialog* self) {
    if (auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self)) {
        vkshortcutsdialog->VirtualKShortcutsDialog::updateMicroFocus();
    } else
        qFatal("Error: Protected method KShortcutsDialog::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void KShortcutsDialog_Create(KShortcutsDialog* self) {
    if (auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self)) {
        vkshortcutsdialog->VirtualKShortcutsDialog::create();
    } else
        qFatal("Error: Protected method KShortcutsDialog::create called without a directly constructed type");
}

// Derived class protected handler implementation
void KShortcutsDialog_Destroy(KShortcutsDialog* self) {
    if (auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self)) {
        vkshortcutsdialog->VirtualKShortcutsDialog::destroy();
    } else
        qFatal("Error: Protected method KShortcutsDialog::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool KShortcutsDialog_FocusNextChild(KShortcutsDialog* self) {
    if (auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self)) {
        return vkshortcutsdialog->VirtualKShortcutsDialog::focusNextChild();
    } else
        qFatal("Error: Protected method KShortcutsDialog::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool KShortcutsDialog_FocusPreviousChild(KShortcutsDialog* self) {
    if (auto* vkshortcutsdialog = dynamic_cast<VirtualKShortcutsDialog*>(self)) {
        return vkshortcutsdialog->VirtualKShortcutsDialog::focusPreviousChild();
    } else
        qFatal("Error: Protected method KShortcutsDialog::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KShortcutsDialog_Sender(const KShortcutsDialog* self) {
    if (auto* vkshortcutsdialog = const_cast<VirtualKShortcutsDialog*>(dynamic_cast<const VirtualKShortcutsDialog*>(self))) {
        return vkshortcutsdialog->VirtualKShortcutsDialog::sender();
    } else
        qFatal("Error: Protected method KShortcutsDialog::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KShortcutsDialog_SenderSignalIndex(const KShortcutsDialog* self) {
    if (auto* vkshortcutsdialog = const_cast<VirtualKShortcutsDialog*>(dynamic_cast<const VirtualKShortcutsDialog*>(self))) {
        return vkshortcutsdialog->VirtualKShortcutsDialog::senderSignalIndex();
    } else
        qFatal("Error: Protected method KShortcutsDialog::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KShortcutsDialog_Receivers(const KShortcutsDialog* self, const char* signal) {
    if (auto* vkshortcutsdialog = const_cast<VirtualKShortcutsDialog*>(dynamic_cast<const VirtualKShortcutsDialog*>(self))) {
        return vkshortcutsdialog->VirtualKShortcutsDialog::receivers(signal);
    } else
        qFatal("Error: Protected method KShortcutsDialog::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KShortcutsDialog_IsSignalConnected(const KShortcutsDialog* self, const QMetaMethod* signal) {
    if (auto* vkshortcutsdialog = const_cast<VirtualKShortcutsDialog*>(dynamic_cast<const VirtualKShortcutsDialog*>(self))) {
        return vkshortcutsdialog->VirtualKShortcutsDialog::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KShortcutsDialog::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double KShortcutsDialog_GetDecodedMetricF(const KShortcutsDialog* self, int metricA, int metricB) {
    if (auto* vkshortcutsdialog = const_cast<VirtualKShortcutsDialog*>(dynamic_cast<const VirtualKShortcutsDialog*>(self))) {
        return vkshortcutsdialog->VirtualKShortcutsDialog::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method KShortcutsDialog::getDecodedMetricF called without a directly constructed type");
}

void KShortcutsDialog_Delete(KShortcutsDialog* self) {
    delete self;
}
