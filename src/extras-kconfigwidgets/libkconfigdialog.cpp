#include <KConfigDialog>
#include <KCoreConfigSkeleton>
#include <KPageDialog>
#include <KPageWidget>
#include <KPageWidgetItem>
#include <QActionEvent>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QContextMenuEvent>
#include <QDialog>
#include <QDialogButtonBox>
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
#include <kconfigdialog.h>
#include "libkconfigdialog.h"
#include "libkconfigdialog.hxx"

KConfigDialog* KConfigDialog_new(QWidget* parent, const libqt_string name, KCoreConfigSkeleton* config) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return new VirtualKConfigDialog(parent, name_QString, config);
}

QMetaObject* KConfigDialog_MetaObject(const KConfigDialog* self) {
    return (QMetaObject*)self->metaObject();
}

void* KConfigDialog_Metacast(KConfigDialog* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KConfigDialog_Metacall(KConfigDialog* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KConfigDialog_Tr(const char* s) {
    auto _ret = KConfigDialog::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KConfigDialog_WidgetModified(KConfigDialog* self) {
    self->widgetModified();
}

void KConfigDialog_Connect_WidgetModified(KConfigDialog* self, intptr_t slot) {
    void (*slotFunc)(KConfigDialog*) = reinterpret_cast<void (*)(KConfigDialog*)>(slot);
    KConfigDialog::connect(self,
                           static_cast<void (KConfigDialog::*)()>(&KConfigDialog::widgetModified),
                           [self, slotFunc]() {
                               slotFunc(self);
                           });
}

void KConfigDialog_SettingsChanged(KConfigDialog* self, const libqt_string dialogName) {
    QString dialogName_QString = QString::fromUtf8(dialogName.data, dialogName.len);
    self->settingsChanged(dialogName_QString);
}

void KConfigDialog_Connect_SettingsChanged(KConfigDialog* self, intptr_t slot) {
    void (*slotFunc)(KConfigDialog*, const char*) = reinterpret_cast<void (*)(KConfigDialog*, const char*)>(slot);
    KConfigDialog::connect(self,
                           static_cast<void (KConfigDialog::*)(const QString&)>(&KConfigDialog::settingsChanged),
                           [self, slotFunc](const QString& dialogName) {
                               const auto dialogName_ret = dialogName;
                               // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                               QByteArray dialogName_b = dialogName_ret.toUtf8();
                               auto dialogName_str_len = dialogName_b.length();
                               const char* dialogName_str = static_cast<const char*>(malloc(dialogName_str_len + 1));
                               memcpy((void*)dialogName_str, dialogName_b.data(), dialogName_str_len);
                               ((char*)dialogName_str)[dialogName_str_len] = '\0';
                               const char* sigval1 = dialogName_str;
                               slotFunc(self, sigval1);
                               libqt_free(dialogName_str);
                           });
}

KPageWidgetItem* KConfigDialog_AddPage(KConfigDialog* self, QWidget* page, const libqt_string itemName) {
    QString itemName_QString = QString::fromUtf8(itemName.data, itemName.len);
    return self->addPage(page, itemName_QString);
}

KPageWidgetItem* KConfigDialog_AddPage2(KConfigDialog* self, QWidget* page, KCoreConfigSkeleton* config, const libqt_string itemName) {
    QString itemName_QString = QString::fromUtf8(itemName.data, itemName.len);
    return self->addPage(page, config, itemName_QString);
}

KConfigDialog* KConfigDialog_Exists(const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return KConfigDialog::exists(name_QString);
}

bool KConfigDialog_ShowDialog(const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return KConfigDialog::showDialog(name_QString);
}

void KConfigDialog_UpdateSettings(KConfigDialog* self) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog) {
        vkconfigdialog->updateSettings();
    }
}

void KConfigDialog_UpdateWidgets(KConfigDialog* self) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog) {
        vkconfigdialog->updateWidgets();
    }
}

void KConfigDialog_UpdateWidgetsDefault(KConfigDialog* self) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog) {
        vkconfigdialog->updateWidgetsDefault();
    }
}

void KConfigDialog_ShowHelp(KConfigDialog* self) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog) {
        vkconfigdialog->showHelp();
    }
}

bool KConfigDialog_HasChanged(KConfigDialog* self) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog) {
        return vkconfigdialog->hasChanged();
    }
    qFatal("Error: Protected method KConfigDialog::hasChanged called without a directly constructed type");
}

bool KConfigDialog_IsDefault(KConfigDialog* self) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog) {
        return vkconfigdialog->isDefault();
    }
    qFatal("Error: Protected method KConfigDialog::isDefault called without a directly constructed type");
}

void KConfigDialog_ShowEvent(KConfigDialog* self, QShowEvent* e) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog) {
        vkconfigdialog->showEvent(e);
    }
}

libqt_string KConfigDialog_Tr2(const char* s, const char* c) {
    auto _ret = KConfigDialog::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KConfigDialog_Tr3(const char* s, const char* c, int n) {
    auto _ret = KConfigDialog::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

KPageWidgetItem* KConfigDialog_AddPage3(KConfigDialog* self, QWidget* page, const libqt_string itemName, const libqt_string pixmapName) {
    QString itemName_QString = QString::fromUtf8(itemName.data, itemName.len);
    QString pixmapName_QString = QString::fromUtf8(pixmapName.data, pixmapName.len);
    return self->addPage(page, itemName_QString, pixmapName_QString);
}

KPageWidgetItem* KConfigDialog_AddPage4(KConfigDialog* self, QWidget* page, const libqt_string itemName, const libqt_string pixmapName, const libqt_string header) {
    QString itemName_QString = QString::fromUtf8(itemName.data, itemName.len);
    QString pixmapName_QString = QString::fromUtf8(pixmapName.data, pixmapName.len);
    QString header_QString = QString::fromUtf8(header.data, header.len);
    return self->addPage(page, itemName_QString, pixmapName_QString, header_QString);
}

KPageWidgetItem* KConfigDialog_AddPage5(KConfigDialog* self, QWidget* page, const libqt_string itemName, const libqt_string pixmapName, const libqt_string header, bool manage) {
    QString itemName_QString = QString::fromUtf8(itemName.data, itemName.len);
    QString pixmapName_QString = QString::fromUtf8(pixmapName.data, pixmapName.len);
    QString header_QString = QString::fromUtf8(header.data, header.len);
    return self->addPage(page, itemName_QString, pixmapName_QString, header_QString, manage);
}

KPageWidgetItem* KConfigDialog_AddPage42(KConfigDialog* self, QWidget* page, KCoreConfigSkeleton* config, const libqt_string itemName, const libqt_string pixmapName) {
    QString itemName_QString = QString::fromUtf8(itemName.data, itemName.len);
    QString pixmapName_QString = QString::fromUtf8(pixmapName.data, pixmapName.len);
    return self->addPage(page, config, itemName_QString, pixmapName_QString);
}

KPageWidgetItem* KConfigDialog_AddPage52(KConfigDialog* self, QWidget* page, KCoreConfigSkeleton* config, const libqt_string itemName, const libqt_string pixmapName, const libqt_string header) {
    QString itemName_QString = QString::fromUtf8(itemName.data, itemName.len);
    QString pixmapName_QString = QString::fromUtf8(pixmapName.data, pixmapName.len);
    QString header_QString = QString::fromUtf8(header.data, header.len);
    return self->addPage(page, config, itemName_QString, pixmapName_QString, header_QString);
}

// Base class handler implementation
QMetaObject* KConfigDialog_SuperMetaObject(const KConfigDialog* self) {
    return (QMetaObject*)self->KConfigDialog::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KConfigDialog_OnMetaObject(KConfigDialog* self, intptr_t slot) {
    if (auto* vkconfigdialog = const_cast<VirtualKConfigDialog*>(dynamic_cast<const VirtualKConfigDialog*>(self)))
        vkconfigdialog->kconfigdialog_metaobject_callback = reinterpret_cast<VirtualKConfigDialog::KConfigDialog_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KConfigDialog_SuperMetacast(KConfigDialog* self, const char* param1) {
    return self->KConfigDialog::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KConfigDialog_OnMetacast(KConfigDialog* self, intptr_t slot) {
    if (auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self))
        vkconfigdialog->kconfigdialog_metacast_callback = reinterpret_cast<VirtualKConfigDialog::KConfigDialog_Metacast_Callback>(slot);
}

// Base class handler implementation
int KConfigDialog_SuperMetacall(KConfigDialog* self, int param1, int param2, void** param3) {
    return self->KConfigDialog::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KConfigDialog_OnMetacall(KConfigDialog* self, intptr_t slot) {
    if (auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self))
        vkconfigdialog->kconfigdialog_metacall_callback = reinterpret_cast<VirtualKConfigDialog::KConfigDialog_Metacall_Callback>(slot);
}

// Base class handler implementation
void KConfigDialog_SuperUpdateSettings(KConfigDialog* self) {
    if (auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self)) {
        vkconfigdialog->KConfigDialog::updateSettings();
    } else
        qFatal("Error: Protected virtual method KConfigDialog::updateSettings called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KConfigDialog_OnUpdateSettings(KConfigDialog* self, intptr_t slot) {
    if (auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self))
        vkconfigdialog->kconfigdialog_updatesettings_callback = reinterpret_cast<VirtualKConfigDialog::KConfigDialog_UpdateSettings_Callback>(slot);
}

// Base class handler implementation
void KConfigDialog_SuperUpdateWidgets(KConfigDialog* self) {
    if (auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self)) {
        vkconfigdialog->KConfigDialog::updateWidgets();
    } else
        qFatal("Error: Protected virtual method KConfigDialog::updateWidgets called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KConfigDialog_OnUpdateWidgets(KConfigDialog* self, intptr_t slot) {
    if (auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self))
        vkconfigdialog->kconfigdialog_updatewidgets_callback = reinterpret_cast<VirtualKConfigDialog::KConfigDialog_UpdateWidgets_Callback>(slot);
}

// Base class handler implementation
void KConfigDialog_SuperUpdateWidgetsDefault(KConfigDialog* self) {
    if (auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self)) {
        vkconfigdialog->KConfigDialog::updateWidgetsDefault();
    } else
        qFatal("Error: Protected virtual method KConfigDialog::updateWidgetsDefault called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KConfigDialog_OnUpdateWidgetsDefault(KConfigDialog* self, intptr_t slot) {
    if (auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self))
        vkconfigdialog->kconfigdialog_updatewidgetsdefault_callback = reinterpret_cast<VirtualKConfigDialog::KConfigDialog_UpdateWidgetsDefault_Callback>(slot);
}

// Base class handler implementation
void KConfigDialog_SuperShowHelp(KConfigDialog* self) {
    if (auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self)) {
        vkconfigdialog->KConfigDialog::showHelp();
    } else
        qFatal("Error: Protected virtual method KConfigDialog::showHelp called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KConfigDialog_OnShowHelp(KConfigDialog* self, intptr_t slot) {
    if (auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self))
        vkconfigdialog->kconfigdialog_showhelp_callback = reinterpret_cast<VirtualKConfigDialog::KConfigDialog_ShowHelp_Callback>(slot);
}

// Base class handler implementation
bool KConfigDialog_SuperHasChanged(KConfigDialog* self) {
    if (auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self)) {
        return vkconfigdialog->KConfigDialog::hasChanged();
    } else
        qFatal("Error: Protected virtual method KConfigDialog::hasChanged called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KConfigDialog_OnHasChanged(KConfigDialog* self, intptr_t slot) {
    if (auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self))
        vkconfigdialog->kconfigdialog_haschanged_callback = reinterpret_cast<VirtualKConfigDialog::KConfigDialog_HasChanged_Callback>(slot);
}

// Base class handler implementation
bool KConfigDialog_SuperIsDefault(KConfigDialog* self) {
    if (auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self)) {
        return vkconfigdialog->KConfigDialog::isDefault();
    } else
        qFatal("Error: Protected virtual method KConfigDialog::isDefault called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KConfigDialog_OnIsDefault(KConfigDialog* self, intptr_t slot) {
    if (auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self))
        vkconfigdialog->kconfigdialog_isdefault_callback = reinterpret_cast<VirtualKConfigDialog::KConfigDialog_IsDefault_Callback>(slot);
}

// Base class handler implementation
void KConfigDialog_SuperShowEvent(KConfigDialog* self, QShowEvent* e) {
    if (auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self)) {
        vkconfigdialog->KConfigDialog::showEvent(e);
    } else
        qFatal("Error: Protected virtual method KConfigDialog::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KConfigDialog_OnShowEvent(KConfigDialog* self, intptr_t slot) {
    if (auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self))
        vkconfigdialog->kconfigdialog_showevent_callback = reinterpret_cast<VirtualKConfigDialog::KConfigDialog_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void KConfigDialog_SetVisible(KConfigDialog* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void KConfigDialog_SuperSetVisible(KConfigDialog* self, bool visible) {
    self->KConfigDialog::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void KConfigDialog_OnSetVisible(KConfigDialog* self, intptr_t slot) {
    if (auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self))
        vkconfigdialog->kconfigdialog_setvisible_callback = reinterpret_cast<VirtualKConfigDialog::KConfigDialog_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* KConfigDialog_SizeHint(const KConfigDialog* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* KConfigDialog_SuperSizeHint(const KConfigDialog* self) {
    return new QSize(self->KConfigDialog::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void KConfigDialog_OnSizeHint(KConfigDialog* self, intptr_t slot) {
    if (auto* vkconfigdialog = const_cast<VirtualKConfigDialog*>(dynamic_cast<const VirtualKConfigDialog*>(self)))
        vkconfigdialog->kconfigdialog_sizehint_callback = reinterpret_cast<VirtualKConfigDialog::KConfigDialog_SizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* KConfigDialog_MinimumSizeHint(const KConfigDialog* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* KConfigDialog_SuperMinimumSizeHint(const KConfigDialog* self) {
    return new QSize(self->KConfigDialog::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void KConfigDialog_OnMinimumSizeHint(KConfigDialog* self, intptr_t slot) {
    if (auto* vkconfigdialog = const_cast<VirtualKConfigDialog*>(dynamic_cast<const VirtualKConfigDialog*>(self)))
        vkconfigdialog->kconfigdialog_minimumsizehint_callback = reinterpret_cast<VirtualKConfigDialog::KConfigDialog_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
void KConfigDialog_Open(KConfigDialog* self) {
    self->open();
}

// Base class handler implementation
void KConfigDialog_SuperOpen(KConfigDialog* self) {
    self->KConfigDialog::open();
}

// Auxiliary method to allow providing re-implementation
void KConfigDialog_OnOpen(KConfigDialog* self, intptr_t slot) {
    if (auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self))
        vkconfigdialog->kconfigdialog_open_callback = reinterpret_cast<VirtualKConfigDialog::KConfigDialog_Open_Callback>(slot);
}

// Derived class handler implementation
int KConfigDialog_Exec(KConfigDialog* self) {
    return self->exec();
}

// Base class handler implementation
int KConfigDialog_SuperExec(KConfigDialog* self) {
    return self->KConfigDialog::exec();
}

// Auxiliary method to allow providing re-implementation
void KConfigDialog_OnExec(KConfigDialog* self, intptr_t slot) {
    if (auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self))
        vkconfigdialog->kconfigdialog_exec_callback = reinterpret_cast<VirtualKConfigDialog::KConfigDialog_Exec_Callback>(slot);
}

// Derived class handler implementation
void KConfigDialog_Done(KConfigDialog* self, int param1) {
    self->done(static_cast<int>(param1));
}

// Base class handler implementation
void KConfigDialog_SuperDone(KConfigDialog* self, int param1) {
    self->KConfigDialog::done(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void KConfigDialog_OnDone(KConfigDialog* self, intptr_t slot) {
    if (auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self))
        vkconfigdialog->kconfigdialog_done_callback = reinterpret_cast<VirtualKConfigDialog::KConfigDialog_Done_Callback>(slot);
}

// Derived class handler implementation
void KConfigDialog_Accept(KConfigDialog* self) {
    self->accept();
}

// Base class handler implementation
void KConfigDialog_SuperAccept(KConfigDialog* self) {
    self->KConfigDialog::accept();
}

// Auxiliary method to allow providing re-implementation
void KConfigDialog_OnAccept(KConfigDialog* self, intptr_t slot) {
    if (auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self))
        vkconfigdialog->kconfigdialog_accept_callback = reinterpret_cast<VirtualKConfigDialog::KConfigDialog_Accept_Callback>(slot);
}

// Derived class handler implementation
void KConfigDialog_Reject(KConfigDialog* self) {
    self->reject();
}

// Base class handler implementation
void KConfigDialog_SuperReject(KConfigDialog* self) {
    self->KConfigDialog::reject();
}

// Auxiliary method to allow providing re-implementation
void KConfigDialog_OnReject(KConfigDialog* self, intptr_t slot) {
    if (auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self))
        vkconfigdialog->kconfigdialog_reject_callback = reinterpret_cast<VirtualKConfigDialog::KConfigDialog_Reject_Callback>(slot);
}

// Derived class handler implementation
void KConfigDialog_KeyPressEvent(KConfigDialog* self, QKeyEvent* param1) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog) {
        vkconfigdialog->keyPressEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KConfigDialog::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KConfigDialog_SuperKeyPressEvent(KConfigDialog* self, QKeyEvent* param1) {
    if (auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self)) {
        vkconfigdialog->KConfigDialog::keyPressEvent(param1);
    } else
        qFatal("Error: Protected virtual method KConfigDialog::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KConfigDialog_OnKeyPressEvent(KConfigDialog* self, intptr_t slot) {
    if (auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self))
        vkconfigdialog->kconfigdialog_keypressevent_callback = reinterpret_cast<VirtualKConfigDialog::KConfigDialog_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void KConfigDialog_CloseEvent(KConfigDialog* self, QCloseEvent* param1) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog) {
        vkconfigdialog->closeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KConfigDialog::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KConfigDialog_SuperCloseEvent(KConfigDialog* self, QCloseEvent* param1) {
    if (auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self)) {
        vkconfigdialog->KConfigDialog::closeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KConfigDialog::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KConfigDialog_OnCloseEvent(KConfigDialog* self, intptr_t slot) {
    if (auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self))
        vkconfigdialog->kconfigdialog_closeevent_callback = reinterpret_cast<VirtualKConfigDialog::KConfigDialog_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void KConfigDialog_ResizeEvent(KConfigDialog* self, QResizeEvent* param1) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog) {
        vkconfigdialog->resizeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KConfigDialog::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KConfigDialog_SuperResizeEvent(KConfigDialog* self, QResizeEvent* param1) {
    if (auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self)) {
        vkconfigdialog->KConfigDialog::resizeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KConfigDialog::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KConfigDialog_OnResizeEvent(KConfigDialog* self, intptr_t slot) {
    if (auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self))
        vkconfigdialog->kconfigdialog_resizeevent_callback = reinterpret_cast<VirtualKConfigDialog::KConfigDialog_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void KConfigDialog_ContextMenuEvent(KConfigDialog* self, QContextMenuEvent* param1) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog) {
        vkconfigdialog->contextMenuEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KConfigDialog::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KConfigDialog_SuperContextMenuEvent(KConfigDialog* self, QContextMenuEvent* param1) {
    if (auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self)) {
        vkconfigdialog->KConfigDialog::contextMenuEvent(param1);
    } else
        qFatal("Error: Protected virtual method KConfigDialog::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KConfigDialog_OnContextMenuEvent(KConfigDialog* self, intptr_t slot) {
    if (auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self))
        vkconfigdialog->kconfigdialog_contextmenuevent_callback = reinterpret_cast<VirtualKConfigDialog::KConfigDialog_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
bool KConfigDialog_EventFilter(KConfigDialog* self, QObject* param1, QEvent* param2) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog) {
        return vkconfigdialog->eventFilter(param1, param2);
    } else {
        qFatal("Error: Protected virtual method KConfigDialog::eventFilter called without a directly constructed type");
    }
}

// Base class handler implementation
bool KConfigDialog_SuperEventFilter(KConfigDialog* self, QObject* param1, QEvent* param2) {
    if (auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self)) {
        return vkconfigdialog->KConfigDialog::eventFilter(param1, param2);
    } else
        qFatal("Error: Protected virtual method KConfigDialog::eventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KConfigDialog_OnEventFilter(KConfigDialog* self, intptr_t slot) {
    if (auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self))
        vkconfigdialog->kconfigdialog_eventfilter_callback = reinterpret_cast<VirtualKConfigDialog::KConfigDialog_EventFilter_Callback>(slot);
}

// Derived class handler implementation
int KConfigDialog_DevType(const KConfigDialog* self) {
    return self->devType();
}

// Base class handler implementation
int KConfigDialog_SuperDevType(const KConfigDialog* self) {
    return self->KConfigDialog::devType();
}

// Auxiliary method to allow providing re-implementation
void KConfigDialog_OnDevType(KConfigDialog* self, intptr_t slot) {
    if (auto* vkconfigdialog = const_cast<VirtualKConfigDialog*>(dynamic_cast<const VirtualKConfigDialog*>(self)))
        vkconfigdialog->kconfigdialog_devtype_callback = reinterpret_cast<VirtualKConfigDialog::KConfigDialog_DevType_Callback>(slot);
}

// Derived class handler implementation
int KConfigDialog_HeightForWidth(const KConfigDialog* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int KConfigDialog_SuperHeightForWidth(const KConfigDialog* self, int param1) {
    return self->KConfigDialog::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void KConfigDialog_OnHeightForWidth(KConfigDialog* self, intptr_t slot) {
    if (auto* vkconfigdialog = const_cast<VirtualKConfigDialog*>(dynamic_cast<const VirtualKConfigDialog*>(self)))
        vkconfigdialog->kconfigdialog_heightforwidth_callback = reinterpret_cast<VirtualKConfigDialog::KConfigDialog_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool KConfigDialog_HasHeightForWidth(const KConfigDialog* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool KConfigDialog_SuperHasHeightForWidth(const KConfigDialog* self) {
    return self->KConfigDialog::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void KConfigDialog_OnHasHeightForWidth(KConfigDialog* self, intptr_t slot) {
    if (auto* vkconfigdialog = const_cast<VirtualKConfigDialog*>(dynamic_cast<const VirtualKConfigDialog*>(self)))
        vkconfigdialog->kconfigdialog_hasheightforwidth_callback = reinterpret_cast<VirtualKConfigDialog::KConfigDialog_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* KConfigDialog_PaintEngine(const KConfigDialog* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* KConfigDialog_SuperPaintEngine(const KConfigDialog* self) {
    return self->KConfigDialog::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void KConfigDialog_OnPaintEngine(KConfigDialog* self, intptr_t slot) {
    if (auto* vkconfigdialog = const_cast<VirtualKConfigDialog*>(dynamic_cast<const VirtualKConfigDialog*>(self)))
        vkconfigdialog->kconfigdialog_paintengine_callback = reinterpret_cast<VirtualKConfigDialog::KConfigDialog_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
bool KConfigDialog_Event(KConfigDialog* self, QEvent* event) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog) {
        return vkconfigdialog->event(event);
    } else {
        qFatal("Error: Protected virtual method KConfigDialog::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool KConfigDialog_SuperEvent(KConfigDialog* self, QEvent* event) {
    if (auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self)) {
        return vkconfigdialog->KConfigDialog::event(event);
    } else
        qFatal("Error: Protected virtual method KConfigDialog::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KConfigDialog_OnEvent(KConfigDialog* self, intptr_t slot) {
    if (auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self))
        vkconfigdialog->kconfigdialog_event_callback = reinterpret_cast<VirtualKConfigDialog::KConfigDialog_Event_Callback>(slot);
}

// Derived class handler implementation
void KConfigDialog_MousePressEvent(KConfigDialog* self, QMouseEvent* event) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog) {
        vkconfigdialog->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method KConfigDialog::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KConfigDialog_SuperMousePressEvent(KConfigDialog* self, QMouseEvent* event) {
    if (auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self)) {
        vkconfigdialog->KConfigDialog::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method KConfigDialog::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KConfigDialog_OnMousePressEvent(KConfigDialog* self, intptr_t slot) {
    if (auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self))
        vkconfigdialog->kconfigdialog_mousepressevent_callback = reinterpret_cast<VirtualKConfigDialog::KConfigDialog_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void KConfigDialog_MouseReleaseEvent(KConfigDialog* self, QMouseEvent* event) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog) {
        vkconfigdialog->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KConfigDialog::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KConfigDialog_SuperMouseReleaseEvent(KConfigDialog* self, QMouseEvent* event) {
    if (auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self)) {
        vkconfigdialog->KConfigDialog::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KConfigDialog::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KConfigDialog_OnMouseReleaseEvent(KConfigDialog* self, intptr_t slot) {
    if (auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self))
        vkconfigdialog->kconfigdialog_mousereleaseevent_callback = reinterpret_cast<VirtualKConfigDialog::KConfigDialog_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KConfigDialog_MouseDoubleClickEvent(KConfigDialog* self, QMouseEvent* event) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog) {
        vkconfigdialog->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method KConfigDialog::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KConfigDialog_SuperMouseDoubleClickEvent(KConfigDialog* self, QMouseEvent* event) {
    if (auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self)) {
        vkconfigdialog->KConfigDialog::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method KConfigDialog::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KConfigDialog_OnMouseDoubleClickEvent(KConfigDialog* self, intptr_t slot) {
    if (auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self))
        vkconfigdialog->kconfigdialog_mousedoubleclickevent_callback = reinterpret_cast<VirtualKConfigDialog::KConfigDialog_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void KConfigDialog_MouseMoveEvent(KConfigDialog* self, QMouseEvent* event) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog) {
        vkconfigdialog->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KConfigDialog::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KConfigDialog_SuperMouseMoveEvent(KConfigDialog* self, QMouseEvent* event) {
    if (auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self)) {
        vkconfigdialog->KConfigDialog::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KConfigDialog::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KConfigDialog_OnMouseMoveEvent(KConfigDialog* self, intptr_t slot) {
    if (auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self))
        vkconfigdialog->kconfigdialog_mousemoveevent_callback = reinterpret_cast<VirtualKConfigDialog::KConfigDialog_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KConfigDialog_WheelEvent(KConfigDialog* self, QWheelEvent* event) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog) {
        vkconfigdialog->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method KConfigDialog::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KConfigDialog_SuperWheelEvent(KConfigDialog* self, QWheelEvent* event) {
    if (auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self)) {
        vkconfigdialog->KConfigDialog::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method KConfigDialog::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KConfigDialog_OnWheelEvent(KConfigDialog* self, intptr_t slot) {
    if (auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self))
        vkconfigdialog->kconfigdialog_wheelevent_callback = reinterpret_cast<VirtualKConfigDialog::KConfigDialog_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void KConfigDialog_KeyReleaseEvent(KConfigDialog* self, QKeyEvent* event) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog) {
        vkconfigdialog->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KConfigDialog::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KConfigDialog_SuperKeyReleaseEvent(KConfigDialog* self, QKeyEvent* event) {
    if (auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self)) {
        vkconfigdialog->KConfigDialog::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KConfigDialog::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KConfigDialog_OnKeyReleaseEvent(KConfigDialog* self, intptr_t slot) {
    if (auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self))
        vkconfigdialog->kconfigdialog_keyreleaseevent_callback = reinterpret_cast<VirtualKConfigDialog::KConfigDialog_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KConfigDialog_FocusInEvent(KConfigDialog* self, QFocusEvent* event) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog) {
        vkconfigdialog->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method KConfigDialog::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KConfigDialog_SuperFocusInEvent(KConfigDialog* self, QFocusEvent* event) {
    if (auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self)) {
        vkconfigdialog->KConfigDialog::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method KConfigDialog::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KConfigDialog_OnFocusInEvent(KConfigDialog* self, intptr_t slot) {
    if (auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self))
        vkconfigdialog->kconfigdialog_focusinevent_callback = reinterpret_cast<VirtualKConfigDialog::KConfigDialog_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void KConfigDialog_FocusOutEvent(KConfigDialog* self, QFocusEvent* event) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog) {
        vkconfigdialog->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method KConfigDialog::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KConfigDialog_SuperFocusOutEvent(KConfigDialog* self, QFocusEvent* event) {
    if (auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self)) {
        vkconfigdialog->KConfigDialog::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method KConfigDialog::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KConfigDialog_OnFocusOutEvent(KConfigDialog* self, intptr_t slot) {
    if (auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self))
        vkconfigdialog->kconfigdialog_focusoutevent_callback = reinterpret_cast<VirtualKConfigDialog::KConfigDialog_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void KConfigDialog_EnterEvent(KConfigDialog* self, QEnterEvent* event) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog) {
        vkconfigdialog->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KConfigDialog::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KConfigDialog_SuperEnterEvent(KConfigDialog* self, QEnterEvent* event) {
    if (auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self)) {
        vkconfigdialog->KConfigDialog::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method KConfigDialog::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KConfigDialog_OnEnterEvent(KConfigDialog* self, intptr_t slot) {
    if (auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self))
        vkconfigdialog->kconfigdialog_enterevent_callback = reinterpret_cast<VirtualKConfigDialog::KConfigDialog_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KConfigDialog_LeaveEvent(KConfigDialog* self, QEvent* event) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog) {
        vkconfigdialog->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KConfigDialog::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KConfigDialog_SuperLeaveEvent(KConfigDialog* self, QEvent* event) {
    if (auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self)) {
        vkconfigdialog->KConfigDialog::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KConfigDialog::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KConfigDialog_OnLeaveEvent(KConfigDialog* self, intptr_t slot) {
    if (auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self))
        vkconfigdialog->kconfigdialog_leaveevent_callback = reinterpret_cast<VirtualKConfigDialog::KConfigDialog_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KConfigDialog_PaintEvent(KConfigDialog* self, QPaintEvent* event) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog) {
        vkconfigdialog->paintEvent(event);
    } else {
        qFatal("Error: Protected virtual method KConfigDialog::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KConfigDialog_SuperPaintEvent(KConfigDialog* self, QPaintEvent* event) {
    if (auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self)) {
        vkconfigdialog->KConfigDialog::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method KConfigDialog::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KConfigDialog_OnPaintEvent(KConfigDialog* self, intptr_t slot) {
    if (auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self))
        vkconfigdialog->kconfigdialog_paintevent_callback = reinterpret_cast<VirtualKConfigDialog::KConfigDialog_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void KConfigDialog_MoveEvent(KConfigDialog* self, QMoveEvent* event) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog) {
        vkconfigdialog->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KConfigDialog::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KConfigDialog_SuperMoveEvent(KConfigDialog* self, QMoveEvent* event) {
    if (auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self)) {
        vkconfigdialog->KConfigDialog::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method KConfigDialog::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KConfigDialog_OnMoveEvent(KConfigDialog* self, intptr_t slot) {
    if (auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self))
        vkconfigdialog->kconfigdialog_moveevent_callback = reinterpret_cast<VirtualKConfigDialog::KConfigDialog_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KConfigDialog_TabletEvent(KConfigDialog* self, QTabletEvent* event) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog) {
        vkconfigdialog->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method KConfigDialog::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KConfigDialog_SuperTabletEvent(KConfigDialog* self, QTabletEvent* event) {
    if (auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self)) {
        vkconfigdialog->KConfigDialog::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method KConfigDialog::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KConfigDialog_OnTabletEvent(KConfigDialog* self, intptr_t slot) {
    if (auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self))
        vkconfigdialog->kconfigdialog_tabletevent_callback = reinterpret_cast<VirtualKConfigDialog::KConfigDialog_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void KConfigDialog_ActionEvent(KConfigDialog* self, QActionEvent* event) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog) {
        vkconfigdialog->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method KConfigDialog::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KConfigDialog_SuperActionEvent(KConfigDialog* self, QActionEvent* event) {
    if (auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self)) {
        vkconfigdialog->KConfigDialog::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method KConfigDialog::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KConfigDialog_OnActionEvent(KConfigDialog* self, intptr_t slot) {
    if (auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self))
        vkconfigdialog->kconfigdialog_actionevent_callback = reinterpret_cast<VirtualKConfigDialog::KConfigDialog_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void KConfigDialog_DragEnterEvent(KConfigDialog* self, QDragEnterEvent* event) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog) {
        vkconfigdialog->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KConfigDialog::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KConfigDialog_SuperDragEnterEvent(KConfigDialog* self, QDragEnterEvent* event) {
    if (auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self)) {
        vkconfigdialog->KConfigDialog::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method KConfigDialog::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KConfigDialog_OnDragEnterEvent(KConfigDialog* self, intptr_t slot) {
    if (auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self))
        vkconfigdialog->kconfigdialog_dragenterevent_callback = reinterpret_cast<VirtualKConfigDialog::KConfigDialog_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KConfigDialog_DragMoveEvent(KConfigDialog* self, QDragMoveEvent* event) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog) {
        vkconfigdialog->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KConfigDialog::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KConfigDialog_SuperDragMoveEvent(KConfigDialog* self, QDragMoveEvent* event) {
    if (auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self)) {
        vkconfigdialog->KConfigDialog::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KConfigDialog::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KConfigDialog_OnDragMoveEvent(KConfigDialog* self, intptr_t slot) {
    if (auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self))
        vkconfigdialog->kconfigdialog_dragmoveevent_callback = reinterpret_cast<VirtualKConfigDialog::KConfigDialog_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KConfigDialog_DragLeaveEvent(KConfigDialog* self, QDragLeaveEvent* event) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog) {
        vkconfigdialog->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KConfigDialog::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KConfigDialog_SuperDragLeaveEvent(KConfigDialog* self, QDragLeaveEvent* event) {
    if (auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self)) {
        vkconfigdialog->KConfigDialog::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KConfigDialog::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KConfigDialog_OnDragLeaveEvent(KConfigDialog* self, intptr_t slot) {
    if (auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self))
        vkconfigdialog->kconfigdialog_dragleaveevent_callback = reinterpret_cast<VirtualKConfigDialog::KConfigDialog_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KConfigDialog_DropEvent(KConfigDialog* self, QDropEvent* event) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog) {
        vkconfigdialog->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method KConfigDialog::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KConfigDialog_SuperDropEvent(KConfigDialog* self, QDropEvent* event) {
    if (auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self)) {
        vkconfigdialog->KConfigDialog::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method KConfigDialog::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KConfigDialog_OnDropEvent(KConfigDialog* self, intptr_t slot) {
    if (auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self))
        vkconfigdialog->kconfigdialog_dropevent_callback = reinterpret_cast<VirtualKConfigDialog::KConfigDialog_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void KConfigDialog_HideEvent(KConfigDialog* self, QHideEvent* event) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog) {
        vkconfigdialog->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method KConfigDialog::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KConfigDialog_SuperHideEvent(KConfigDialog* self, QHideEvent* event) {
    if (auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self)) {
        vkconfigdialog->KConfigDialog::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method KConfigDialog::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KConfigDialog_OnHideEvent(KConfigDialog* self, intptr_t slot) {
    if (auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self))
        vkconfigdialog->kconfigdialog_hideevent_callback = reinterpret_cast<VirtualKConfigDialog::KConfigDialog_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool KConfigDialog_NativeEvent(KConfigDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog) {
        return vkconfigdialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method KConfigDialog::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool KConfigDialog_SuperNativeEvent(KConfigDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self)) {
        return vkconfigdialog->KConfigDialog::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method KConfigDialog::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KConfigDialog_OnNativeEvent(KConfigDialog* self, intptr_t slot) {
    if (auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self))
        vkconfigdialog->kconfigdialog_nativeevent_callback = reinterpret_cast<VirtualKConfigDialog::KConfigDialog_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
void KConfigDialog_ChangeEvent(KConfigDialog* self, QEvent* param1) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog) {
        vkconfigdialog->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KConfigDialog::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KConfigDialog_SuperChangeEvent(KConfigDialog* self, QEvent* param1) {
    if (auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self)) {
        vkconfigdialog->KConfigDialog::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KConfigDialog::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KConfigDialog_OnChangeEvent(KConfigDialog* self, intptr_t slot) {
    if (auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self))
        vkconfigdialog->kconfigdialog_changeevent_callback = reinterpret_cast<VirtualKConfigDialog::KConfigDialog_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
int KConfigDialog_Metric(const KConfigDialog* self, int param1) {
    auto* vkconfigdialog = const_cast<VirtualKConfigDialog*>(dynamic_cast<const VirtualKConfigDialog*>(self));
    if (vkconfigdialog) {
        return vkconfigdialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method KConfigDialog::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int KConfigDialog_SuperMetric(const KConfigDialog* self, int param1) {
    if (auto* vkconfigdialog = const_cast<VirtualKConfigDialog*>(dynamic_cast<const VirtualKConfigDialog*>(self))) {
        return vkconfigdialog->KConfigDialog::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method KConfigDialog::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KConfigDialog_OnMetric(KConfigDialog* self, intptr_t slot) {
    if (auto* vkconfigdialog = const_cast<VirtualKConfigDialog*>(dynamic_cast<const VirtualKConfigDialog*>(self)))
        vkconfigdialog->kconfigdialog_metric_callback = reinterpret_cast<VirtualKConfigDialog::KConfigDialog_Metric_Callback>(slot);
}

// Derived class handler implementation
void KConfigDialog_InitPainter(const KConfigDialog* self, QPainter* painter) {
    auto* vkconfigdialog = const_cast<VirtualKConfigDialog*>(dynamic_cast<const VirtualKConfigDialog*>(self));
    if (vkconfigdialog) {
        vkconfigdialog->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method KConfigDialog::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void KConfigDialog_SuperInitPainter(const KConfigDialog* self, QPainter* painter) {
    if (auto* vkconfigdialog = const_cast<VirtualKConfigDialog*>(dynamic_cast<const VirtualKConfigDialog*>(self))) {
        vkconfigdialog->KConfigDialog::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method KConfigDialog::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KConfigDialog_OnInitPainter(KConfigDialog* self, intptr_t slot) {
    if (auto* vkconfigdialog = const_cast<VirtualKConfigDialog*>(dynamic_cast<const VirtualKConfigDialog*>(self)))
        vkconfigdialog->kconfigdialog_initpainter_callback = reinterpret_cast<VirtualKConfigDialog::KConfigDialog_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* KConfigDialog_Redirected(const KConfigDialog* self, QPoint* offset) {
    auto* vkconfigdialog = const_cast<VirtualKConfigDialog*>(dynamic_cast<const VirtualKConfigDialog*>(self));
    if (vkconfigdialog) {
        return vkconfigdialog->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method KConfigDialog::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* KConfigDialog_SuperRedirected(const KConfigDialog* self, QPoint* offset) {
    if (auto* vkconfigdialog = const_cast<VirtualKConfigDialog*>(dynamic_cast<const VirtualKConfigDialog*>(self))) {
        return vkconfigdialog->KConfigDialog::redirected(offset);
    } else
        qFatal("Error: Protected virtual method KConfigDialog::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KConfigDialog_OnRedirected(KConfigDialog* self, intptr_t slot) {
    if (auto* vkconfigdialog = const_cast<VirtualKConfigDialog*>(dynamic_cast<const VirtualKConfigDialog*>(self)))
        vkconfigdialog->kconfigdialog_redirected_callback = reinterpret_cast<VirtualKConfigDialog::KConfigDialog_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* KConfigDialog_SharedPainter(const KConfigDialog* self) {
    auto* vkconfigdialog = const_cast<VirtualKConfigDialog*>(dynamic_cast<const VirtualKConfigDialog*>(self));
    if (vkconfigdialog) {
        return vkconfigdialog->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method KConfigDialog::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* KConfigDialog_SuperSharedPainter(const KConfigDialog* self) {
    if (auto* vkconfigdialog = const_cast<VirtualKConfigDialog*>(dynamic_cast<const VirtualKConfigDialog*>(self))) {
        return vkconfigdialog->KConfigDialog::sharedPainter();
    } else
        qFatal("Error: Protected virtual method KConfigDialog::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KConfigDialog_OnSharedPainter(KConfigDialog* self, intptr_t slot) {
    if (auto* vkconfigdialog = const_cast<VirtualKConfigDialog*>(dynamic_cast<const VirtualKConfigDialog*>(self)))
        vkconfigdialog->kconfigdialog_sharedpainter_callback = reinterpret_cast<VirtualKConfigDialog::KConfigDialog_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void KConfigDialog_InputMethodEvent(KConfigDialog* self, QInputMethodEvent* param1) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog) {
        vkconfigdialog->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KConfigDialog::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KConfigDialog_SuperInputMethodEvent(KConfigDialog* self, QInputMethodEvent* param1) {
    if (auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self)) {
        vkconfigdialog->KConfigDialog::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method KConfigDialog::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KConfigDialog_OnInputMethodEvent(KConfigDialog* self, intptr_t slot) {
    if (auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self))
        vkconfigdialog->kconfigdialog_inputmethodevent_callback = reinterpret_cast<VirtualKConfigDialog::KConfigDialog_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* KConfigDialog_InputMethodQuery(const KConfigDialog* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* KConfigDialog_SuperInputMethodQuery(const KConfigDialog* self, int param1) {
    return new QVariant(self->KConfigDialog::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void KConfigDialog_OnInputMethodQuery(KConfigDialog* self, intptr_t slot) {
    if (auto* vkconfigdialog = const_cast<VirtualKConfigDialog*>(dynamic_cast<const VirtualKConfigDialog*>(self)))
        vkconfigdialog->kconfigdialog_inputmethodquery_callback = reinterpret_cast<VirtualKConfigDialog::KConfigDialog_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool KConfigDialog_FocusNextPrevChild(KConfigDialog* self, bool next) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog) {
        return vkconfigdialog->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method KConfigDialog::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool KConfigDialog_SuperFocusNextPrevChild(KConfigDialog* self, bool next) {
    if (auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self)) {
        return vkconfigdialog->KConfigDialog::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method KConfigDialog::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KConfigDialog_OnFocusNextPrevChild(KConfigDialog* self, intptr_t slot) {
    if (auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self))
        vkconfigdialog->kconfigdialog_focusnextprevchild_callback = reinterpret_cast<VirtualKConfigDialog::KConfigDialog_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
void KConfigDialog_TimerEvent(KConfigDialog* self, QTimerEvent* event) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog) {
        vkconfigdialog->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KConfigDialog::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KConfigDialog_SuperTimerEvent(KConfigDialog* self, QTimerEvent* event) {
    if (auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self)) {
        vkconfigdialog->KConfigDialog::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KConfigDialog::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KConfigDialog_OnTimerEvent(KConfigDialog* self, intptr_t slot) {
    if (auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self))
        vkconfigdialog->kconfigdialog_timerevent_callback = reinterpret_cast<VirtualKConfigDialog::KConfigDialog_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KConfigDialog_ChildEvent(KConfigDialog* self, QChildEvent* event) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog) {
        vkconfigdialog->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KConfigDialog::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KConfigDialog_SuperChildEvent(KConfigDialog* self, QChildEvent* event) {
    if (auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self)) {
        vkconfigdialog->KConfigDialog::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KConfigDialog::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KConfigDialog_OnChildEvent(KConfigDialog* self, intptr_t slot) {
    if (auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self))
        vkconfigdialog->kconfigdialog_childevent_callback = reinterpret_cast<VirtualKConfigDialog::KConfigDialog_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KConfigDialog_CustomEvent(KConfigDialog* self, QEvent* event) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog) {
        vkconfigdialog->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KConfigDialog::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KConfigDialog_SuperCustomEvent(KConfigDialog* self, QEvent* event) {
    if (auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self)) {
        vkconfigdialog->KConfigDialog::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KConfigDialog::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KConfigDialog_OnCustomEvent(KConfigDialog* self, intptr_t slot) {
    if (auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self))
        vkconfigdialog->kconfigdialog_customevent_callback = reinterpret_cast<VirtualKConfigDialog::KConfigDialog_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KConfigDialog_ConnectNotify(KConfigDialog* self, const QMetaMethod* signal) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog) {
        vkconfigdialog->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KConfigDialog::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KConfigDialog_SuperConnectNotify(KConfigDialog* self, const QMetaMethod* signal) {
    if (auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self)) {
        vkconfigdialog->KConfigDialog::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KConfigDialog::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KConfigDialog_OnConnectNotify(KConfigDialog* self, intptr_t slot) {
    if (auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self))
        vkconfigdialog->kconfigdialog_connectnotify_callback = reinterpret_cast<VirtualKConfigDialog::KConfigDialog_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KConfigDialog_DisconnectNotify(KConfigDialog* self, const QMetaMethod* signal) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog) {
        vkconfigdialog->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KConfigDialog::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KConfigDialog_SuperDisconnectNotify(KConfigDialog* self, const QMetaMethod* signal) {
    if (auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self)) {
        vkconfigdialog->KConfigDialog::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KConfigDialog::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KConfigDialog_OnDisconnectNotify(KConfigDialog* self, intptr_t slot) {
    if (auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self))
        vkconfigdialog->kconfigdialog_disconnectnotify_callback = reinterpret_cast<VirtualKConfigDialog::KConfigDialog_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void KConfigDialog_UpdateButtons(KConfigDialog* self) {
    if (auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self)) {
        vkconfigdialog->VirtualKConfigDialog::updateButtons();
    } else
        qFatal("Error: Protected method KConfigDialog::updateButtons called without a directly constructed type");
}

// Derived class protected handler implementation
void KConfigDialog_SettingsChangedSlot(KConfigDialog* self) {
    if (auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self)) {
        vkconfigdialog->VirtualKConfigDialog::settingsChangedSlot();
    } else
        qFatal("Error: Protected method KConfigDialog::settingsChangedSlot called without a directly constructed type");
}

// Derived class protected handler implementation
void KConfigDialog_SetHelp(KConfigDialog* self, const libqt_string anchor) {
    if (auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self)) {
        QString anchor_QString = QString::fromUtf8(anchor.data, anchor.len);
        vkconfigdialog->VirtualKConfigDialog::setHelp(anchor_QString);
    } else
        qFatal("Error: Protected method KConfigDialog::setHelp called without a directly constructed type");
}

// Derived class protected handler implementation
void KConfigDialog_SetHelp2(KConfigDialog* self, const libqt_string anchor, const libqt_string appname) {
    if (auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self)) {
        QString anchor_QString = QString::fromUtf8(anchor.data, anchor.len);
        QString appname_QString = QString::fromUtf8(appname.data, appname.len);
        vkconfigdialog->VirtualKConfigDialog::setHelp(anchor_QString, appname_QString);
    } else
        qFatal("Error: Protected method KConfigDialog::setHelp2 called without a directly constructed type");
}

// Derived class protected handler implementation
KPageWidget* KConfigDialog_PageWidget(KConfigDialog* self) {
    if (auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self)) {
        return vkconfigdialog->VirtualKConfigDialog::pageWidget();
    } else
        qFatal("Error: Protected method KConfigDialog::pageWidget called without a directly constructed type");
}

// Derived class protected handler implementation
void KConfigDialog_SetPageWidget(KConfigDialog* self, KPageWidget* widget) {
    if (auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self)) {
        vkconfigdialog->VirtualKConfigDialog::setPageWidget(widget);
    } else
        qFatal("Error: Protected method KConfigDialog::setPageWidget called without a directly constructed type");
}

// Derived class protected handler implementation
QDialogButtonBox* KConfigDialog_ButtonBox(KConfigDialog* self) {
    if (auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self)) {
        return vkconfigdialog->VirtualKConfigDialog::buttonBox();
    } else
        qFatal("Error: Protected method KConfigDialog::buttonBox called without a directly constructed type");
}

// Derived class protected handler implementation
void KConfigDialog_SetButtonBox(KConfigDialog* self, QDialogButtonBox* box) {
    if (auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self)) {
        vkconfigdialog->VirtualKConfigDialog::setButtonBox(box);
    } else
        qFatal("Error: Protected method KConfigDialog::setButtonBox called without a directly constructed type");
}

// Derived class protected handler implementation
void KConfigDialog_AdjustPosition(KConfigDialog* self, QWidget* param1) {
    if (auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self)) {
        vkconfigdialog->VirtualKConfigDialog::adjustPosition(param1);
    } else
        qFatal("Error: Protected method KConfigDialog::adjustPosition called without a directly constructed type");
}

// Derived class protected handler implementation
void KConfigDialog_UpdateMicroFocus(KConfigDialog* self) {
    if (auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self)) {
        vkconfigdialog->VirtualKConfigDialog::updateMicroFocus();
    } else
        qFatal("Error: Protected method KConfigDialog::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void KConfigDialog_Create(KConfigDialog* self) {
    if (auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self)) {
        vkconfigdialog->VirtualKConfigDialog::create();
    } else
        qFatal("Error: Protected method KConfigDialog::create called without a directly constructed type");
}

// Derived class protected handler implementation
void KConfigDialog_Destroy(KConfigDialog* self) {
    if (auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self)) {
        vkconfigdialog->VirtualKConfigDialog::destroy();
    } else
        qFatal("Error: Protected method KConfigDialog::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool KConfigDialog_FocusNextChild(KConfigDialog* self) {
    if (auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self)) {
        return vkconfigdialog->VirtualKConfigDialog::focusNextChild();
    } else
        qFatal("Error: Protected method KConfigDialog::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool KConfigDialog_FocusPreviousChild(KConfigDialog* self) {
    if (auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self)) {
        return vkconfigdialog->VirtualKConfigDialog::focusPreviousChild();
    } else
        qFatal("Error: Protected method KConfigDialog::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KConfigDialog_Sender(const KConfigDialog* self) {
    if (auto* vkconfigdialog = const_cast<VirtualKConfigDialog*>(dynamic_cast<const VirtualKConfigDialog*>(self))) {
        return vkconfigdialog->VirtualKConfigDialog::sender();
    } else
        qFatal("Error: Protected method KConfigDialog::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KConfigDialog_SenderSignalIndex(const KConfigDialog* self) {
    if (auto* vkconfigdialog = const_cast<VirtualKConfigDialog*>(dynamic_cast<const VirtualKConfigDialog*>(self))) {
        return vkconfigdialog->VirtualKConfigDialog::senderSignalIndex();
    } else
        qFatal("Error: Protected method KConfigDialog::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KConfigDialog_Receivers(const KConfigDialog* self, const char* signal) {
    if (auto* vkconfigdialog = const_cast<VirtualKConfigDialog*>(dynamic_cast<const VirtualKConfigDialog*>(self))) {
        return vkconfigdialog->VirtualKConfigDialog::receivers(signal);
    } else
        qFatal("Error: Protected method KConfigDialog::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KConfigDialog_IsSignalConnected(const KConfigDialog* self, const QMetaMethod* signal) {
    if (auto* vkconfigdialog = const_cast<VirtualKConfigDialog*>(dynamic_cast<const VirtualKConfigDialog*>(self))) {
        return vkconfigdialog->VirtualKConfigDialog::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KConfigDialog::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double KConfigDialog_GetDecodedMetricF(const KConfigDialog* self, int metricA, int metricB) {
    if (auto* vkconfigdialog = const_cast<VirtualKConfigDialog*>(dynamic_cast<const VirtualKConfigDialog*>(self))) {
        return vkconfigdialog->VirtualKConfigDialog::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method KConfigDialog::getDecodedMetricF called without a directly constructed type");
}

void KConfigDialog_Delete(KConfigDialog* self) {
    delete self;
}
