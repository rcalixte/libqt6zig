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
#include <QByteArray>
#include <cstring>
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
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKConfigDialog*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KConfigDialog_Tr(const char* s) {
    QString _ret = KConfigDialog::tr(s);
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
    KConfigDialog::connect(self, &KConfigDialog::widgetModified, [self, slotFunc]() {
        slotFunc(self);
    });
}

void KConfigDialog_SettingsChanged(KConfigDialog* self, const libqt_string dialogName) {
    QString dialogName_QString = QString::fromUtf8(dialogName.data, dialogName.len);
    self->settingsChanged(dialogName_QString);
}

void KConfigDialog_Connect_SettingsChanged(KConfigDialog* self, intptr_t slot) {
    void (*slotFunc)(KConfigDialog*, const char*) = reinterpret_cast<void (*)(KConfigDialog*, const char*)>(slot);
    KConfigDialog::connect(self, &KConfigDialog::settingsChanged, [self, slotFunc](const QString& dialogName) {
        const QString dialogName_ret = dialogName;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray dialogName_b = dialogName_ret.toUtf8();
        const char* dialogName_str = static_cast<const char*>(malloc(dialogName_b.length() + 1));
        memcpy((void*)dialogName_str, dialogName_b.data(), dialogName_b.length());
        ((char*)dialogName_str)[dialogName_b.length()] = '\0';
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
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->updateSettings();
    }
}

void KConfigDialog_UpdateWidgets(KConfigDialog* self) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->updateWidgets();
    }
}

void KConfigDialog_UpdateWidgetsDefault(KConfigDialog* self) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->updateWidgetsDefault();
    }
}

void KConfigDialog_ShowHelp(KConfigDialog* self) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->showHelp();
    }
}

bool KConfigDialog_HasChanged(KConfigDialog* self) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        return vkconfigdialog->hasChanged();
    }
    return {};
}

bool KConfigDialog_IsDefault(KConfigDialog* self) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        return vkconfigdialog->isDefault();
    }
    return {};
}

void KConfigDialog_ShowEvent(KConfigDialog* self, QShowEvent* e) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->showEvent(e);
    }
}

libqt_string KConfigDialog_Tr2(const char* s, const char* c) {
    QString _ret = KConfigDialog::tr(s, c);
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
    QString _ret = KConfigDialog::tr(s, c, static_cast<int>(n));
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
int KConfigDialog_QBaseMetacall(KConfigDialog* self, int param1, int param2, void** param3) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_Metacall_IsBase(true);
        return vkconfigdialog->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KConfigDialog::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigDialog_OnMetacall(KConfigDialog* self, intptr_t slot) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_Metacall_Callback(reinterpret_cast<VirtualKConfigDialog::KConfigDialog_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
void KConfigDialog_QBaseUpdateSettings(KConfigDialog* self) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_UpdateSettings_IsBase(true);
        vkconfigdialog->updateSettings();
    } else {
        ((VirtualKConfigDialog*)self)->updateSettings();
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigDialog_OnUpdateSettings(KConfigDialog* self, intptr_t slot) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_UpdateSettings_Callback(reinterpret_cast<VirtualKConfigDialog::KConfigDialog_UpdateSettings_Callback>(slot));
    }
}

// Base class handler implementation
void KConfigDialog_QBaseUpdateWidgets(KConfigDialog* self) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_UpdateWidgets_IsBase(true);
        vkconfigdialog->updateWidgets();
    } else {
        ((VirtualKConfigDialog*)self)->updateWidgets();
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigDialog_OnUpdateWidgets(KConfigDialog* self, intptr_t slot) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_UpdateWidgets_Callback(reinterpret_cast<VirtualKConfigDialog::KConfigDialog_UpdateWidgets_Callback>(slot));
    }
}

// Base class handler implementation
void KConfigDialog_QBaseUpdateWidgetsDefault(KConfigDialog* self) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_UpdateWidgetsDefault_IsBase(true);
        vkconfigdialog->updateWidgetsDefault();
    } else {
        ((VirtualKConfigDialog*)self)->updateWidgetsDefault();
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigDialog_OnUpdateWidgetsDefault(KConfigDialog* self, intptr_t slot) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_UpdateWidgetsDefault_Callback(reinterpret_cast<VirtualKConfigDialog::KConfigDialog_UpdateWidgetsDefault_Callback>(slot));
    }
}

// Base class handler implementation
void KConfigDialog_QBaseShowHelp(KConfigDialog* self) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_ShowHelp_IsBase(true);
        vkconfigdialog->showHelp();
    } else {
        ((VirtualKConfigDialog*)self)->showHelp();
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigDialog_OnShowHelp(KConfigDialog* self, intptr_t slot) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_ShowHelp_Callback(reinterpret_cast<VirtualKConfigDialog::KConfigDialog_ShowHelp_Callback>(slot));
    }
}

// Base class handler implementation
bool KConfigDialog_QBaseHasChanged(KConfigDialog* self) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_HasChanged_IsBase(true);
        return vkconfigdialog->hasChanged();
    } else {
        return ((VirtualKConfigDialog*)self)->hasChanged();
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigDialog_OnHasChanged(KConfigDialog* self, intptr_t slot) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_HasChanged_Callback(reinterpret_cast<VirtualKConfigDialog::KConfigDialog_HasChanged_Callback>(slot));
    }
}

// Base class handler implementation
bool KConfigDialog_QBaseIsDefault(KConfigDialog* self) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_IsDefault_IsBase(true);
        return vkconfigdialog->isDefault();
    } else {
        return ((VirtualKConfigDialog*)self)->isDefault();
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigDialog_OnIsDefault(KConfigDialog* self, intptr_t slot) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_IsDefault_Callback(reinterpret_cast<VirtualKConfigDialog::KConfigDialog_IsDefault_Callback>(slot));
    }
}

// Base class handler implementation
void KConfigDialog_QBaseShowEvent(KConfigDialog* self, QShowEvent* e) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_ShowEvent_IsBase(true);
        vkconfigdialog->showEvent(e);
    } else {
        ((VirtualKConfigDialog*)self)->showEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigDialog_OnShowEvent(KConfigDialog* self, intptr_t slot) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_ShowEvent_Callback(reinterpret_cast<VirtualKConfigDialog::KConfigDialog_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KConfigDialog_SetVisible(KConfigDialog* self, bool visible) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setVisible(visible);
    } else {
        self->KConfigDialog::setVisible(visible);
    }
}

// Base class handler implementation
void KConfigDialog_QBaseSetVisible(KConfigDialog* self, bool visible) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_SetVisible_IsBase(true);
        vkconfigdialog->setVisible(visible);
    } else {
        self->KConfigDialog::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigDialog_OnSetVisible(KConfigDialog* self, intptr_t slot) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_SetVisible_Callback(reinterpret_cast<VirtualKConfigDialog::KConfigDialog_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KConfigDialog_SizeHint(const KConfigDialog* self) {
    auto* vkconfigdialog = const_cast<VirtualKConfigDialog*>(dynamic_cast<const VirtualKConfigDialog*>(self));
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        return new QSize(vkconfigdialog->sizeHint());
    } else {
        return new QSize(((VirtualKConfigDialog*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* KConfigDialog_QBaseSizeHint(const KConfigDialog* self) {
    auto* vkconfigdialog = const_cast<VirtualKConfigDialog*>(dynamic_cast<const VirtualKConfigDialog*>(self));
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_SizeHint_IsBase(true);
        return new QSize(vkconfigdialog->sizeHint());
    } else {
        return new QSize(((VirtualKConfigDialog*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigDialog_OnSizeHint(const KConfigDialog* self, intptr_t slot) {
    auto* vkconfigdialog = const_cast<VirtualKConfigDialog*>(dynamic_cast<const VirtualKConfigDialog*>(self));
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_SizeHint_Callback(reinterpret_cast<VirtualKConfigDialog::KConfigDialog_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KConfigDialog_MinimumSizeHint(const KConfigDialog* self) {
    auto* vkconfigdialog = const_cast<VirtualKConfigDialog*>(dynamic_cast<const VirtualKConfigDialog*>(self));
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        return new QSize(vkconfigdialog->minimumSizeHint());
    } else {
        return new QSize(((VirtualKConfigDialog*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* KConfigDialog_QBaseMinimumSizeHint(const KConfigDialog* self) {
    auto* vkconfigdialog = const_cast<VirtualKConfigDialog*>(dynamic_cast<const VirtualKConfigDialog*>(self));
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_MinimumSizeHint_IsBase(true);
        return new QSize(vkconfigdialog->minimumSizeHint());
    } else {
        return new QSize(((VirtualKConfigDialog*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigDialog_OnMinimumSizeHint(const KConfigDialog* self, intptr_t slot) {
    auto* vkconfigdialog = const_cast<VirtualKConfigDialog*>(dynamic_cast<const VirtualKConfigDialog*>(self));
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_MinimumSizeHint_Callback(reinterpret_cast<VirtualKConfigDialog::KConfigDialog_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void KConfigDialog_Open(KConfigDialog* self) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->open();
    } else {
        self->KConfigDialog::open();
    }
}

// Base class handler implementation
void KConfigDialog_QBaseOpen(KConfigDialog* self) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_Open_IsBase(true);
        vkconfigdialog->open();
    } else {
        self->KConfigDialog::open();
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigDialog_OnOpen(KConfigDialog* self, intptr_t slot) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_Open_Callback(reinterpret_cast<VirtualKConfigDialog::KConfigDialog_Open_Callback>(slot));
    }
}

// Derived class handler implementation
int KConfigDialog_Exec(KConfigDialog* self) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        return vkconfigdialog->exec();
    } else {
        return self->KConfigDialog::exec();
    }
}

// Base class handler implementation
int KConfigDialog_QBaseExec(KConfigDialog* self) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_Exec_IsBase(true);
        return vkconfigdialog->exec();
    } else {
        return self->KConfigDialog::exec();
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigDialog_OnExec(KConfigDialog* self, intptr_t slot) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_Exec_Callback(reinterpret_cast<VirtualKConfigDialog::KConfigDialog_Exec_Callback>(slot));
    }
}

// Derived class handler implementation
void KConfigDialog_Done(KConfigDialog* self, int param1) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->done(static_cast<int>(param1));
    } else {
        self->KConfigDialog::done(static_cast<int>(param1));
    }
}

// Base class handler implementation
void KConfigDialog_QBaseDone(KConfigDialog* self, int param1) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_Done_IsBase(true);
        vkconfigdialog->done(static_cast<int>(param1));
    } else {
        self->KConfigDialog::done(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigDialog_OnDone(KConfigDialog* self, intptr_t slot) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_Done_Callback(reinterpret_cast<VirtualKConfigDialog::KConfigDialog_Done_Callback>(slot));
    }
}

// Derived class handler implementation
void KConfigDialog_Accept(KConfigDialog* self) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->accept();
    } else {
        self->KConfigDialog::accept();
    }
}

// Base class handler implementation
void KConfigDialog_QBaseAccept(KConfigDialog* self) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_Accept_IsBase(true);
        vkconfigdialog->accept();
    } else {
        self->KConfigDialog::accept();
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigDialog_OnAccept(KConfigDialog* self, intptr_t slot) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_Accept_Callback(reinterpret_cast<VirtualKConfigDialog::KConfigDialog_Accept_Callback>(slot));
    }
}

// Derived class handler implementation
void KConfigDialog_Reject(KConfigDialog* self) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->reject();
    } else {
        self->KConfigDialog::reject();
    }
}

// Base class handler implementation
void KConfigDialog_QBaseReject(KConfigDialog* self) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_Reject_IsBase(true);
        vkconfigdialog->reject();
    } else {
        self->KConfigDialog::reject();
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigDialog_OnReject(KConfigDialog* self, intptr_t slot) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_Reject_Callback(reinterpret_cast<VirtualKConfigDialog::KConfigDialog_Reject_Callback>(slot));
    }
}

// Derived class handler implementation
void KConfigDialog_KeyPressEvent(KConfigDialog* self, QKeyEvent* param1) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->keyPressEvent(param1);
    } else {
        ((VirtualKConfigDialog*)self)->keyPressEvent(param1);
    }
}

// Base class handler implementation
void KConfigDialog_QBaseKeyPressEvent(KConfigDialog* self, QKeyEvent* param1) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_KeyPressEvent_IsBase(true);
        vkconfigdialog->keyPressEvent(param1);
    } else {
        ((VirtualKConfigDialog*)self)->keyPressEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigDialog_OnKeyPressEvent(KConfigDialog* self, intptr_t slot) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_KeyPressEvent_Callback(reinterpret_cast<VirtualKConfigDialog::KConfigDialog_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KConfigDialog_CloseEvent(KConfigDialog* self, QCloseEvent* param1) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->closeEvent(param1);
    } else {
        ((VirtualKConfigDialog*)self)->closeEvent(param1);
    }
}

// Base class handler implementation
void KConfigDialog_QBaseCloseEvent(KConfigDialog* self, QCloseEvent* param1) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_CloseEvent_IsBase(true);
        vkconfigdialog->closeEvent(param1);
    } else {
        ((VirtualKConfigDialog*)self)->closeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigDialog_OnCloseEvent(KConfigDialog* self, intptr_t slot) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_CloseEvent_Callback(reinterpret_cast<VirtualKConfigDialog::KConfigDialog_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KConfigDialog_ResizeEvent(KConfigDialog* self, QResizeEvent* param1) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->resizeEvent(param1);
    } else {
        ((VirtualKConfigDialog*)self)->resizeEvent(param1);
    }
}

// Base class handler implementation
void KConfigDialog_QBaseResizeEvent(KConfigDialog* self, QResizeEvent* param1) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_ResizeEvent_IsBase(true);
        vkconfigdialog->resizeEvent(param1);
    } else {
        ((VirtualKConfigDialog*)self)->resizeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigDialog_OnResizeEvent(KConfigDialog* self, intptr_t slot) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_ResizeEvent_Callback(reinterpret_cast<VirtualKConfigDialog::KConfigDialog_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KConfigDialog_ContextMenuEvent(KConfigDialog* self, QContextMenuEvent* param1) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->contextMenuEvent(param1);
    } else {
        ((VirtualKConfigDialog*)self)->contextMenuEvent(param1);
    }
}

// Base class handler implementation
void KConfigDialog_QBaseContextMenuEvent(KConfigDialog* self, QContextMenuEvent* param1) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_ContextMenuEvent_IsBase(true);
        vkconfigdialog->contextMenuEvent(param1);
    } else {
        ((VirtualKConfigDialog*)self)->contextMenuEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigDialog_OnContextMenuEvent(KConfigDialog* self, intptr_t slot) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_ContextMenuEvent_Callback(reinterpret_cast<VirtualKConfigDialog::KConfigDialog_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KConfigDialog_EventFilter(KConfigDialog* self, QObject* param1, QEvent* param2) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        return vkconfigdialog->eventFilter(param1, param2);
    } else {
        return ((VirtualKConfigDialog*)self)->eventFilter(param1, param2);
    }
}

// Base class handler implementation
bool KConfigDialog_QBaseEventFilter(KConfigDialog* self, QObject* param1, QEvent* param2) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_EventFilter_IsBase(true);
        return vkconfigdialog->eventFilter(param1, param2);
    } else {
        return ((VirtualKConfigDialog*)self)->eventFilter(param1, param2);
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigDialog_OnEventFilter(KConfigDialog* self, intptr_t slot) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_EventFilter_Callback(reinterpret_cast<VirtualKConfigDialog::KConfigDialog_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
int KConfigDialog_DevType(const KConfigDialog* self) {
    auto* vkconfigdialog = const_cast<VirtualKConfigDialog*>(dynamic_cast<const VirtualKConfigDialog*>(self));
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        return vkconfigdialog->devType();
    } else {
        return self->KConfigDialog::devType();
    }
}

// Base class handler implementation
int KConfigDialog_QBaseDevType(const KConfigDialog* self) {
    auto* vkconfigdialog = const_cast<VirtualKConfigDialog*>(dynamic_cast<const VirtualKConfigDialog*>(self));
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_DevType_IsBase(true);
        return vkconfigdialog->devType();
    } else {
        return self->KConfigDialog::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigDialog_OnDevType(const KConfigDialog* self, intptr_t slot) {
    auto* vkconfigdialog = const_cast<VirtualKConfigDialog*>(dynamic_cast<const VirtualKConfigDialog*>(self));
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_DevType_Callback(reinterpret_cast<VirtualKConfigDialog::KConfigDialog_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
int KConfigDialog_HeightForWidth(const KConfigDialog* self, int param1) {
    auto* vkconfigdialog = const_cast<VirtualKConfigDialog*>(dynamic_cast<const VirtualKConfigDialog*>(self));
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        return vkconfigdialog->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KConfigDialog::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int KConfigDialog_QBaseHeightForWidth(const KConfigDialog* self, int param1) {
    auto* vkconfigdialog = const_cast<VirtualKConfigDialog*>(dynamic_cast<const VirtualKConfigDialog*>(self));
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_HeightForWidth_IsBase(true);
        return vkconfigdialog->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KConfigDialog::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigDialog_OnHeightForWidth(const KConfigDialog* self, intptr_t slot) {
    auto* vkconfigdialog = const_cast<VirtualKConfigDialog*>(dynamic_cast<const VirtualKConfigDialog*>(self));
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_HeightForWidth_Callback(reinterpret_cast<VirtualKConfigDialog::KConfigDialog_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool KConfigDialog_HasHeightForWidth(const KConfigDialog* self) {
    auto* vkconfigdialog = const_cast<VirtualKConfigDialog*>(dynamic_cast<const VirtualKConfigDialog*>(self));
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        return vkconfigdialog->hasHeightForWidth();
    } else {
        return self->KConfigDialog::hasHeightForWidth();
    }
}

// Base class handler implementation
bool KConfigDialog_QBaseHasHeightForWidth(const KConfigDialog* self) {
    auto* vkconfigdialog = const_cast<VirtualKConfigDialog*>(dynamic_cast<const VirtualKConfigDialog*>(self));
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_HasHeightForWidth_IsBase(true);
        return vkconfigdialog->hasHeightForWidth();
    } else {
        return self->KConfigDialog::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigDialog_OnHasHeightForWidth(const KConfigDialog* self, intptr_t slot) {
    auto* vkconfigdialog = const_cast<VirtualKConfigDialog*>(dynamic_cast<const VirtualKConfigDialog*>(self));
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_HasHeightForWidth_Callback(reinterpret_cast<VirtualKConfigDialog::KConfigDialog_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* KConfigDialog_PaintEngine(const KConfigDialog* self) {
    auto* vkconfigdialog = const_cast<VirtualKConfigDialog*>(dynamic_cast<const VirtualKConfigDialog*>(self));
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        return vkconfigdialog->paintEngine();
    } else {
        return self->KConfigDialog::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* KConfigDialog_QBasePaintEngine(const KConfigDialog* self) {
    auto* vkconfigdialog = const_cast<VirtualKConfigDialog*>(dynamic_cast<const VirtualKConfigDialog*>(self));
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_PaintEngine_IsBase(true);
        return vkconfigdialog->paintEngine();
    } else {
        return self->KConfigDialog::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigDialog_OnPaintEngine(const KConfigDialog* self, intptr_t slot) {
    auto* vkconfigdialog = const_cast<VirtualKConfigDialog*>(dynamic_cast<const VirtualKConfigDialog*>(self));
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_PaintEngine_Callback(reinterpret_cast<VirtualKConfigDialog::KConfigDialog_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
bool KConfigDialog_Event(KConfigDialog* self, QEvent* event) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        return vkconfigdialog->event(event);
    } else {
        return ((VirtualKConfigDialog*)self)->event(event);
    }
}

// Base class handler implementation
bool KConfigDialog_QBaseEvent(KConfigDialog* self, QEvent* event) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_Event_IsBase(true);
        return vkconfigdialog->event(event);
    } else {
        return ((VirtualKConfigDialog*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigDialog_OnEvent(KConfigDialog* self, intptr_t slot) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_Event_Callback(reinterpret_cast<VirtualKConfigDialog::KConfigDialog_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void KConfigDialog_MousePressEvent(KConfigDialog* self, QMouseEvent* event) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->mousePressEvent(event);
    } else {
        ((VirtualKConfigDialog*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void KConfigDialog_QBaseMousePressEvent(KConfigDialog* self, QMouseEvent* event) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_MousePressEvent_IsBase(true);
        vkconfigdialog->mousePressEvent(event);
    } else {
        ((VirtualKConfigDialog*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigDialog_OnMousePressEvent(KConfigDialog* self, intptr_t slot) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_MousePressEvent_Callback(reinterpret_cast<VirtualKConfigDialog::KConfigDialog_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KConfigDialog_MouseReleaseEvent(KConfigDialog* self, QMouseEvent* event) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->mouseReleaseEvent(event);
    } else {
        ((VirtualKConfigDialog*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void KConfigDialog_QBaseMouseReleaseEvent(KConfigDialog* self, QMouseEvent* event) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_MouseReleaseEvent_IsBase(true);
        vkconfigdialog->mouseReleaseEvent(event);
    } else {
        ((VirtualKConfigDialog*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigDialog_OnMouseReleaseEvent(KConfigDialog* self, intptr_t slot) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_MouseReleaseEvent_Callback(reinterpret_cast<VirtualKConfigDialog::KConfigDialog_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KConfigDialog_MouseDoubleClickEvent(KConfigDialog* self, QMouseEvent* event) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKConfigDialog*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void KConfigDialog_QBaseMouseDoubleClickEvent(KConfigDialog* self, QMouseEvent* event) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_MouseDoubleClickEvent_IsBase(true);
        vkconfigdialog->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKConfigDialog*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigDialog_OnMouseDoubleClickEvent(KConfigDialog* self, intptr_t slot) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualKConfigDialog::KConfigDialog_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KConfigDialog_MouseMoveEvent(KConfigDialog* self, QMouseEvent* event) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->mouseMoveEvent(event);
    } else {
        ((VirtualKConfigDialog*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void KConfigDialog_QBaseMouseMoveEvent(KConfigDialog* self, QMouseEvent* event) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_MouseMoveEvent_IsBase(true);
        vkconfigdialog->mouseMoveEvent(event);
    } else {
        ((VirtualKConfigDialog*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigDialog_OnMouseMoveEvent(KConfigDialog* self, intptr_t slot) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_MouseMoveEvent_Callback(reinterpret_cast<VirtualKConfigDialog::KConfigDialog_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KConfigDialog_WheelEvent(KConfigDialog* self, QWheelEvent* event) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->wheelEvent(event);
    } else {
        ((VirtualKConfigDialog*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void KConfigDialog_QBaseWheelEvent(KConfigDialog* self, QWheelEvent* event) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_WheelEvent_IsBase(true);
        vkconfigdialog->wheelEvent(event);
    } else {
        ((VirtualKConfigDialog*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigDialog_OnWheelEvent(KConfigDialog* self, intptr_t slot) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_WheelEvent_Callback(reinterpret_cast<VirtualKConfigDialog::KConfigDialog_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KConfigDialog_KeyReleaseEvent(KConfigDialog* self, QKeyEvent* event) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->keyReleaseEvent(event);
    } else {
        ((VirtualKConfigDialog*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void KConfigDialog_QBaseKeyReleaseEvent(KConfigDialog* self, QKeyEvent* event) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_KeyReleaseEvent_IsBase(true);
        vkconfigdialog->keyReleaseEvent(event);
    } else {
        ((VirtualKConfigDialog*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigDialog_OnKeyReleaseEvent(KConfigDialog* self, intptr_t slot) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_KeyReleaseEvent_Callback(reinterpret_cast<VirtualKConfigDialog::KConfigDialog_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KConfigDialog_FocusInEvent(KConfigDialog* self, QFocusEvent* event) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->focusInEvent(event);
    } else {
        ((VirtualKConfigDialog*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void KConfigDialog_QBaseFocusInEvent(KConfigDialog* self, QFocusEvent* event) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_FocusInEvent_IsBase(true);
        vkconfigdialog->focusInEvent(event);
    } else {
        ((VirtualKConfigDialog*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigDialog_OnFocusInEvent(KConfigDialog* self, intptr_t slot) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_FocusInEvent_Callback(reinterpret_cast<VirtualKConfigDialog::KConfigDialog_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KConfigDialog_FocusOutEvent(KConfigDialog* self, QFocusEvent* event) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->focusOutEvent(event);
    } else {
        ((VirtualKConfigDialog*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void KConfigDialog_QBaseFocusOutEvent(KConfigDialog* self, QFocusEvent* event) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_FocusOutEvent_IsBase(true);
        vkconfigdialog->focusOutEvent(event);
    } else {
        ((VirtualKConfigDialog*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigDialog_OnFocusOutEvent(KConfigDialog* self, intptr_t slot) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_FocusOutEvent_Callback(reinterpret_cast<VirtualKConfigDialog::KConfigDialog_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KConfigDialog_EnterEvent(KConfigDialog* self, QEnterEvent* event) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->enterEvent(event);
    } else {
        ((VirtualKConfigDialog*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void KConfigDialog_QBaseEnterEvent(KConfigDialog* self, QEnterEvent* event) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_EnterEvent_IsBase(true);
        vkconfigdialog->enterEvent(event);
    } else {
        ((VirtualKConfigDialog*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigDialog_OnEnterEvent(KConfigDialog* self, intptr_t slot) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_EnterEvent_Callback(reinterpret_cast<VirtualKConfigDialog::KConfigDialog_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KConfigDialog_LeaveEvent(KConfigDialog* self, QEvent* event) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->leaveEvent(event);
    } else {
        ((VirtualKConfigDialog*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void KConfigDialog_QBaseLeaveEvent(KConfigDialog* self, QEvent* event) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_LeaveEvent_IsBase(true);
        vkconfigdialog->leaveEvent(event);
    } else {
        ((VirtualKConfigDialog*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigDialog_OnLeaveEvent(KConfigDialog* self, intptr_t slot) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_LeaveEvent_Callback(reinterpret_cast<VirtualKConfigDialog::KConfigDialog_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KConfigDialog_PaintEvent(KConfigDialog* self, QPaintEvent* event) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->paintEvent(event);
    } else {
        ((VirtualKConfigDialog*)self)->paintEvent(event);
    }
}

// Base class handler implementation
void KConfigDialog_QBasePaintEvent(KConfigDialog* self, QPaintEvent* event) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_PaintEvent_IsBase(true);
        vkconfigdialog->paintEvent(event);
    } else {
        ((VirtualKConfigDialog*)self)->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigDialog_OnPaintEvent(KConfigDialog* self, intptr_t slot) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_PaintEvent_Callback(reinterpret_cast<VirtualKConfigDialog::KConfigDialog_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KConfigDialog_MoveEvent(KConfigDialog* self, QMoveEvent* event) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->moveEvent(event);
    } else {
        ((VirtualKConfigDialog*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void KConfigDialog_QBaseMoveEvent(KConfigDialog* self, QMoveEvent* event) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_MoveEvent_IsBase(true);
        vkconfigdialog->moveEvent(event);
    } else {
        ((VirtualKConfigDialog*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigDialog_OnMoveEvent(KConfigDialog* self, intptr_t slot) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_MoveEvent_Callback(reinterpret_cast<VirtualKConfigDialog::KConfigDialog_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KConfigDialog_TabletEvent(KConfigDialog* self, QTabletEvent* event) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->tabletEvent(event);
    } else {
        ((VirtualKConfigDialog*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void KConfigDialog_QBaseTabletEvent(KConfigDialog* self, QTabletEvent* event) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_TabletEvent_IsBase(true);
        vkconfigdialog->tabletEvent(event);
    } else {
        ((VirtualKConfigDialog*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigDialog_OnTabletEvent(KConfigDialog* self, intptr_t slot) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_TabletEvent_Callback(reinterpret_cast<VirtualKConfigDialog::KConfigDialog_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KConfigDialog_ActionEvent(KConfigDialog* self, QActionEvent* event) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->actionEvent(event);
    } else {
        ((VirtualKConfigDialog*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void KConfigDialog_QBaseActionEvent(KConfigDialog* self, QActionEvent* event) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_ActionEvent_IsBase(true);
        vkconfigdialog->actionEvent(event);
    } else {
        ((VirtualKConfigDialog*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigDialog_OnActionEvent(KConfigDialog* self, intptr_t slot) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_ActionEvent_Callback(reinterpret_cast<VirtualKConfigDialog::KConfigDialog_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KConfigDialog_DragEnterEvent(KConfigDialog* self, QDragEnterEvent* event) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->dragEnterEvent(event);
    } else {
        ((VirtualKConfigDialog*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void KConfigDialog_QBaseDragEnterEvent(KConfigDialog* self, QDragEnterEvent* event) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_DragEnterEvent_IsBase(true);
        vkconfigdialog->dragEnterEvent(event);
    } else {
        ((VirtualKConfigDialog*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigDialog_OnDragEnterEvent(KConfigDialog* self, intptr_t slot) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_DragEnterEvent_Callback(reinterpret_cast<VirtualKConfigDialog::KConfigDialog_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KConfigDialog_DragMoveEvent(KConfigDialog* self, QDragMoveEvent* event) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->dragMoveEvent(event);
    } else {
        ((VirtualKConfigDialog*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void KConfigDialog_QBaseDragMoveEvent(KConfigDialog* self, QDragMoveEvent* event) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_DragMoveEvent_IsBase(true);
        vkconfigdialog->dragMoveEvent(event);
    } else {
        ((VirtualKConfigDialog*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigDialog_OnDragMoveEvent(KConfigDialog* self, intptr_t slot) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_DragMoveEvent_Callback(reinterpret_cast<VirtualKConfigDialog::KConfigDialog_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KConfigDialog_DragLeaveEvent(KConfigDialog* self, QDragLeaveEvent* event) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->dragLeaveEvent(event);
    } else {
        ((VirtualKConfigDialog*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void KConfigDialog_QBaseDragLeaveEvent(KConfigDialog* self, QDragLeaveEvent* event) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_DragLeaveEvent_IsBase(true);
        vkconfigdialog->dragLeaveEvent(event);
    } else {
        ((VirtualKConfigDialog*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigDialog_OnDragLeaveEvent(KConfigDialog* self, intptr_t slot) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_DragLeaveEvent_Callback(reinterpret_cast<VirtualKConfigDialog::KConfigDialog_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KConfigDialog_DropEvent(KConfigDialog* self, QDropEvent* event) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->dropEvent(event);
    } else {
        ((VirtualKConfigDialog*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void KConfigDialog_QBaseDropEvent(KConfigDialog* self, QDropEvent* event) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_DropEvent_IsBase(true);
        vkconfigdialog->dropEvent(event);
    } else {
        ((VirtualKConfigDialog*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigDialog_OnDropEvent(KConfigDialog* self, intptr_t slot) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_DropEvent_Callback(reinterpret_cast<VirtualKConfigDialog::KConfigDialog_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KConfigDialog_HideEvent(KConfigDialog* self, QHideEvent* event) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->hideEvent(event);
    } else {
        ((VirtualKConfigDialog*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void KConfigDialog_QBaseHideEvent(KConfigDialog* self, QHideEvent* event) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_HideEvent_IsBase(true);
        vkconfigdialog->hideEvent(event);
    } else {
        ((VirtualKConfigDialog*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigDialog_OnHideEvent(KConfigDialog* self, intptr_t slot) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_HideEvent_Callback(reinterpret_cast<VirtualKConfigDialog::KConfigDialog_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KConfigDialog_NativeEvent(KConfigDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        return vkconfigdialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKConfigDialog*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool KConfigDialog_QBaseNativeEvent(KConfigDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_NativeEvent_IsBase(true);
        return vkconfigdialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKConfigDialog*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigDialog_OnNativeEvent(KConfigDialog* self, intptr_t slot) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_NativeEvent_Callback(reinterpret_cast<VirtualKConfigDialog::KConfigDialog_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KConfigDialog_ChangeEvent(KConfigDialog* self, QEvent* param1) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->changeEvent(param1);
    } else {
        ((VirtualKConfigDialog*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void KConfigDialog_QBaseChangeEvent(KConfigDialog* self, QEvent* param1) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_ChangeEvent_IsBase(true);
        vkconfigdialog->changeEvent(param1);
    } else {
        ((VirtualKConfigDialog*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigDialog_OnChangeEvent(KConfigDialog* self, intptr_t slot) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_ChangeEvent_Callback(reinterpret_cast<VirtualKConfigDialog::KConfigDialog_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int KConfigDialog_Metric(const KConfigDialog* self, int param1) {
    auto* vkconfigdialog = const_cast<VirtualKConfigDialog*>(dynamic_cast<const VirtualKConfigDialog*>(self));
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        return vkconfigdialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKConfigDialog*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int KConfigDialog_QBaseMetric(const KConfigDialog* self, int param1) {
    auto* vkconfigdialog = const_cast<VirtualKConfigDialog*>(dynamic_cast<const VirtualKConfigDialog*>(self));
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_Metric_IsBase(true);
        return vkconfigdialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKConfigDialog*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigDialog_OnMetric(const KConfigDialog* self, intptr_t slot) {
    auto* vkconfigdialog = const_cast<VirtualKConfigDialog*>(dynamic_cast<const VirtualKConfigDialog*>(self));
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_Metric_Callback(reinterpret_cast<VirtualKConfigDialog::KConfigDialog_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void KConfigDialog_InitPainter(const KConfigDialog* self, QPainter* painter) {
    auto* vkconfigdialog = const_cast<VirtualKConfigDialog*>(dynamic_cast<const VirtualKConfigDialog*>(self));
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->initPainter(painter);
    } else {
        ((VirtualKConfigDialog*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void KConfigDialog_QBaseInitPainter(const KConfigDialog* self, QPainter* painter) {
    auto* vkconfigdialog = const_cast<VirtualKConfigDialog*>(dynamic_cast<const VirtualKConfigDialog*>(self));
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_InitPainter_IsBase(true);
        vkconfigdialog->initPainter(painter);
    } else {
        ((VirtualKConfigDialog*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigDialog_OnInitPainter(const KConfigDialog* self, intptr_t slot) {
    auto* vkconfigdialog = const_cast<VirtualKConfigDialog*>(dynamic_cast<const VirtualKConfigDialog*>(self));
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_InitPainter_Callback(reinterpret_cast<VirtualKConfigDialog::KConfigDialog_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* KConfigDialog_Redirected(const KConfigDialog* self, QPoint* offset) {
    auto* vkconfigdialog = const_cast<VirtualKConfigDialog*>(dynamic_cast<const VirtualKConfigDialog*>(self));
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        return vkconfigdialog->redirected(offset);
    } else {
        return ((VirtualKConfigDialog*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* KConfigDialog_QBaseRedirected(const KConfigDialog* self, QPoint* offset) {
    auto* vkconfigdialog = const_cast<VirtualKConfigDialog*>(dynamic_cast<const VirtualKConfigDialog*>(self));
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_Redirected_IsBase(true);
        return vkconfigdialog->redirected(offset);
    } else {
        return ((VirtualKConfigDialog*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigDialog_OnRedirected(const KConfigDialog* self, intptr_t slot) {
    auto* vkconfigdialog = const_cast<VirtualKConfigDialog*>(dynamic_cast<const VirtualKConfigDialog*>(self));
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_Redirected_Callback(reinterpret_cast<VirtualKConfigDialog::KConfigDialog_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* KConfigDialog_SharedPainter(const KConfigDialog* self) {
    auto* vkconfigdialog = const_cast<VirtualKConfigDialog*>(dynamic_cast<const VirtualKConfigDialog*>(self));
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        return vkconfigdialog->sharedPainter();
    } else {
        return ((VirtualKConfigDialog*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* KConfigDialog_QBaseSharedPainter(const KConfigDialog* self) {
    auto* vkconfigdialog = const_cast<VirtualKConfigDialog*>(dynamic_cast<const VirtualKConfigDialog*>(self));
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_SharedPainter_IsBase(true);
        return vkconfigdialog->sharedPainter();
    } else {
        return ((VirtualKConfigDialog*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigDialog_OnSharedPainter(const KConfigDialog* self, intptr_t slot) {
    auto* vkconfigdialog = const_cast<VirtualKConfigDialog*>(dynamic_cast<const VirtualKConfigDialog*>(self));
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_SharedPainter_Callback(reinterpret_cast<VirtualKConfigDialog::KConfigDialog_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void KConfigDialog_InputMethodEvent(KConfigDialog* self, QInputMethodEvent* param1) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->inputMethodEvent(param1);
    } else {
        ((VirtualKConfigDialog*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void KConfigDialog_QBaseInputMethodEvent(KConfigDialog* self, QInputMethodEvent* param1) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_InputMethodEvent_IsBase(true);
        vkconfigdialog->inputMethodEvent(param1);
    } else {
        ((VirtualKConfigDialog*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigDialog_OnInputMethodEvent(KConfigDialog* self, intptr_t slot) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_InputMethodEvent_Callback(reinterpret_cast<VirtualKConfigDialog::KConfigDialog_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* KConfigDialog_InputMethodQuery(const KConfigDialog* self, int param1) {
    auto* vkconfigdialog = const_cast<VirtualKConfigDialog*>(dynamic_cast<const VirtualKConfigDialog*>(self));
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        return new QVariant(vkconfigdialog->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKConfigDialog*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* KConfigDialog_QBaseInputMethodQuery(const KConfigDialog* self, int param1) {
    auto* vkconfigdialog = const_cast<VirtualKConfigDialog*>(dynamic_cast<const VirtualKConfigDialog*>(self));
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_InputMethodQuery_IsBase(true);
        return new QVariant(vkconfigdialog->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKConfigDialog*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigDialog_OnInputMethodQuery(const KConfigDialog* self, intptr_t slot) {
    auto* vkconfigdialog = const_cast<VirtualKConfigDialog*>(dynamic_cast<const VirtualKConfigDialog*>(self));
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_InputMethodQuery_Callback(reinterpret_cast<VirtualKConfigDialog::KConfigDialog_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool KConfigDialog_FocusNextPrevChild(KConfigDialog* self, bool next) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        return vkconfigdialog->focusNextPrevChild(next);
    } else {
        return ((VirtualKConfigDialog*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool KConfigDialog_QBaseFocusNextPrevChild(KConfigDialog* self, bool next) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_FocusNextPrevChild_IsBase(true);
        return vkconfigdialog->focusNextPrevChild(next);
    } else {
        return ((VirtualKConfigDialog*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigDialog_OnFocusNextPrevChild(KConfigDialog* self, intptr_t slot) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_FocusNextPrevChild_Callback(reinterpret_cast<VirtualKConfigDialog::KConfigDialog_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
void KConfigDialog_TimerEvent(KConfigDialog* self, QTimerEvent* event) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->timerEvent(event);
    } else {
        ((VirtualKConfigDialog*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KConfigDialog_QBaseTimerEvent(KConfigDialog* self, QTimerEvent* event) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_TimerEvent_IsBase(true);
        vkconfigdialog->timerEvent(event);
    } else {
        ((VirtualKConfigDialog*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigDialog_OnTimerEvent(KConfigDialog* self, intptr_t slot) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_TimerEvent_Callback(reinterpret_cast<VirtualKConfigDialog::KConfigDialog_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KConfigDialog_ChildEvent(KConfigDialog* self, QChildEvent* event) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->childEvent(event);
    } else {
        ((VirtualKConfigDialog*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KConfigDialog_QBaseChildEvent(KConfigDialog* self, QChildEvent* event) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_ChildEvent_IsBase(true);
        vkconfigdialog->childEvent(event);
    } else {
        ((VirtualKConfigDialog*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigDialog_OnChildEvent(KConfigDialog* self, intptr_t slot) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_ChildEvent_Callback(reinterpret_cast<VirtualKConfigDialog::KConfigDialog_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KConfigDialog_CustomEvent(KConfigDialog* self, QEvent* event) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->customEvent(event);
    } else {
        ((VirtualKConfigDialog*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KConfigDialog_QBaseCustomEvent(KConfigDialog* self, QEvent* event) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_CustomEvent_IsBase(true);
        vkconfigdialog->customEvent(event);
    } else {
        ((VirtualKConfigDialog*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigDialog_OnCustomEvent(KConfigDialog* self, intptr_t slot) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_CustomEvent_Callback(reinterpret_cast<VirtualKConfigDialog::KConfigDialog_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KConfigDialog_ConnectNotify(KConfigDialog* self, const QMetaMethod* signal) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->connectNotify(*signal);
    } else {
        ((VirtualKConfigDialog*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KConfigDialog_QBaseConnectNotify(KConfigDialog* self, const QMetaMethod* signal) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_ConnectNotify_IsBase(true);
        vkconfigdialog->connectNotify(*signal);
    } else {
        ((VirtualKConfigDialog*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigDialog_OnConnectNotify(KConfigDialog* self, intptr_t slot) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_ConnectNotify_Callback(reinterpret_cast<VirtualKConfigDialog::KConfigDialog_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KConfigDialog_DisconnectNotify(KConfigDialog* self, const QMetaMethod* signal) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->disconnectNotify(*signal);
    } else {
        ((VirtualKConfigDialog*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KConfigDialog_QBaseDisconnectNotify(KConfigDialog* self, const QMetaMethod* signal) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_DisconnectNotify_IsBase(true);
        vkconfigdialog->disconnectNotify(*signal);
    } else {
        ((VirtualKConfigDialog*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigDialog_OnDisconnectNotify(KConfigDialog* self, intptr_t slot) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_DisconnectNotify_Callback(reinterpret_cast<VirtualKConfigDialog::KConfigDialog_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KConfigDialog_UpdateButtons(KConfigDialog* self) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->updateButtons();
    } else {
        ((VirtualKConfigDialog*)self)->updateButtons();
    }
}

// Base class handler implementation
void KConfigDialog_QBaseUpdateButtons(KConfigDialog* self) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_UpdateButtons_IsBase(true);
        vkconfigdialog->updateButtons();
    } else {
        ((VirtualKConfigDialog*)self)->updateButtons();
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigDialog_OnUpdateButtons(KConfigDialog* self, intptr_t slot) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_UpdateButtons_Callback(reinterpret_cast<VirtualKConfigDialog::KConfigDialog_UpdateButtons_Callback>(slot));
    }
}

// Derived class handler implementation
void KConfigDialog_SettingsChangedSlot(KConfigDialog* self) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->settingsChangedSlot();
    } else {
        ((VirtualKConfigDialog*)self)->settingsChangedSlot();
    }
}

// Base class handler implementation
void KConfigDialog_QBaseSettingsChangedSlot(KConfigDialog* self) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_SettingsChangedSlot_IsBase(true);
        vkconfigdialog->settingsChangedSlot();
    } else {
        ((VirtualKConfigDialog*)self)->settingsChangedSlot();
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigDialog_OnSettingsChangedSlot(KConfigDialog* self, intptr_t slot) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_SettingsChangedSlot_Callback(reinterpret_cast<VirtualKConfigDialog::KConfigDialog_SettingsChangedSlot_Callback>(slot));
    }
}

// Derived class handler implementation
void KConfigDialog_SetHelp(KConfigDialog* self, const libqt_string anchor) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    QString anchor_QString = QString::fromUtf8(anchor.data, anchor.len);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setHelp(anchor_QString);
    } else {
        ((VirtualKConfigDialog*)self)->setHelp(anchor_QString);
    }
}

// Base class handler implementation
void KConfigDialog_QBaseSetHelp(KConfigDialog* self, const libqt_string anchor) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    QString anchor_QString = QString::fromUtf8(anchor.data, anchor.len);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_SetHelp_IsBase(true);
        vkconfigdialog->setHelp(anchor_QString);
    } else {
        ((VirtualKConfigDialog*)self)->setHelp(anchor_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigDialog_OnSetHelp(KConfigDialog* self, intptr_t slot) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_SetHelp_Callback(reinterpret_cast<VirtualKConfigDialog::KConfigDialog_SetHelp_Callback>(slot));
    }
}

// Derived class handler implementation
void KConfigDialog_SetHelp2(KConfigDialog* self, const libqt_string anchor, const libqt_string appname) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    QString anchor_QString = QString::fromUtf8(anchor.data, anchor.len);
    QString appname_QString = QString::fromUtf8(appname.data, appname.len);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setHelp(anchor_QString, appname_QString);
    } else {
        ((VirtualKConfigDialog*)self)->setHelp(anchor_QString, appname_QString);
    }
}

// Base class handler implementation
void KConfigDialog_QBaseSetHelp2(KConfigDialog* self, const libqt_string anchor, const libqt_string appname) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    QString anchor_QString = QString::fromUtf8(anchor.data, anchor.len);
    QString appname_QString = QString::fromUtf8(appname.data, appname.len);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_SetHelp2_IsBase(true);
        vkconfigdialog->setHelp(anchor_QString, appname_QString);
    } else {
        ((VirtualKConfigDialog*)self)->setHelp(anchor_QString, appname_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigDialog_OnSetHelp2(KConfigDialog* self, intptr_t slot) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_SetHelp2_Callback(reinterpret_cast<VirtualKConfigDialog::KConfigDialog_SetHelp2_Callback>(slot));
    }
}

// Derived class handler implementation
KPageWidget* KConfigDialog_PageWidget(KConfigDialog* self) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        return vkconfigdialog->pageWidget();
    } else {
        return ((VirtualKConfigDialog*)self)->pageWidget();
    }
}

// Base class handler implementation
KPageWidget* KConfigDialog_QBasePageWidget(KConfigDialog* self) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_PageWidget_IsBase(true);
        return vkconfigdialog->pageWidget();
    } else {
        return ((VirtualKConfigDialog*)self)->pageWidget();
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigDialog_OnPageWidget(KConfigDialog* self, intptr_t slot) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_PageWidget_Callback(reinterpret_cast<VirtualKConfigDialog::KConfigDialog_PageWidget_Callback>(slot));
    }
}

// Derived class handler implementation
void KConfigDialog_SetPageWidget(KConfigDialog* self, KPageWidget* widget) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setPageWidget(widget);
    } else {
        ((VirtualKConfigDialog*)self)->setPageWidget(widget);
    }
}

// Base class handler implementation
void KConfigDialog_QBaseSetPageWidget(KConfigDialog* self, KPageWidget* widget) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_SetPageWidget_IsBase(true);
        vkconfigdialog->setPageWidget(widget);
    } else {
        ((VirtualKConfigDialog*)self)->setPageWidget(widget);
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigDialog_OnSetPageWidget(KConfigDialog* self, intptr_t slot) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_SetPageWidget_Callback(reinterpret_cast<VirtualKConfigDialog::KConfigDialog_SetPageWidget_Callback>(slot));
    }
}

// Derived class handler implementation
QDialogButtonBox* KConfigDialog_ButtonBox(KConfigDialog* self) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        return vkconfigdialog->buttonBox();
    } else {
        return ((VirtualKConfigDialog*)self)->buttonBox();
    }
}

// Base class handler implementation
QDialogButtonBox* KConfigDialog_QBaseButtonBox(KConfigDialog* self) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_ButtonBox_IsBase(true);
        return vkconfigdialog->buttonBox();
    } else {
        return ((VirtualKConfigDialog*)self)->buttonBox();
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigDialog_OnButtonBox(KConfigDialog* self, intptr_t slot) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_ButtonBox_Callback(reinterpret_cast<VirtualKConfigDialog::KConfigDialog_ButtonBox_Callback>(slot));
    }
}

// Derived class handler implementation
void KConfigDialog_SetButtonBox(KConfigDialog* self, QDialogButtonBox* box) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setButtonBox(box);
    } else {
        ((VirtualKConfigDialog*)self)->setButtonBox(box);
    }
}

// Base class handler implementation
void KConfigDialog_QBaseSetButtonBox(KConfigDialog* self, QDialogButtonBox* box) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_SetButtonBox_IsBase(true);
        vkconfigdialog->setButtonBox(box);
    } else {
        ((VirtualKConfigDialog*)self)->setButtonBox(box);
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigDialog_OnSetButtonBox(KConfigDialog* self, intptr_t slot) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_SetButtonBox_Callback(reinterpret_cast<VirtualKConfigDialog::KConfigDialog_SetButtonBox_Callback>(slot));
    }
}

// Derived class handler implementation
void KConfigDialog_AdjustPosition(KConfigDialog* self, QWidget* param1) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->adjustPosition(param1);
    } else {
        ((VirtualKConfigDialog*)self)->adjustPosition(param1);
    }
}

// Base class handler implementation
void KConfigDialog_QBaseAdjustPosition(KConfigDialog* self, QWidget* param1) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_AdjustPosition_IsBase(true);
        vkconfigdialog->adjustPosition(param1);
    } else {
        ((VirtualKConfigDialog*)self)->adjustPosition(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigDialog_OnAdjustPosition(KConfigDialog* self, intptr_t slot) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_AdjustPosition_Callback(reinterpret_cast<VirtualKConfigDialog::KConfigDialog_AdjustPosition_Callback>(slot));
    }
}

// Derived class handler implementation
void KConfigDialog_UpdateMicroFocus(KConfigDialog* self) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->updateMicroFocus();
    } else {
        ((VirtualKConfigDialog*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void KConfigDialog_QBaseUpdateMicroFocus(KConfigDialog* self) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_UpdateMicroFocus_IsBase(true);
        vkconfigdialog->updateMicroFocus();
    } else {
        ((VirtualKConfigDialog*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigDialog_OnUpdateMicroFocus(KConfigDialog* self, intptr_t slot) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_UpdateMicroFocus_Callback(reinterpret_cast<VirtualKConfigDialog::KConfigDialog_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void KConfigDialog_Create(KConfigDialog* self) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->create();
    } else {
        ((VirtualKConfigDialog*)self)->create();
    }
}

// Base class handler implementation
void KConfigDialog_QBaseCreate(KConfigDialog* self) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_Create_IsBase(true);
        vkconfigdialog->create();
    } else {
        ((VirtualKConfigDialog*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigDialog_OnCreate(KConfigDialog* self, intptr_t slot) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_Create_Callback(reinterpret_cast<VirtualKConfigDialog::KConfigDialog_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void KConfigDialog_Destroy(KConfigDialog* self) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->destroy();
    } else {
        ((VirtualKConfigDialog*)self)->destroy();
    }
}

// Base class handler implementation
void KConfigDialog_QBaseDestroy(KConfigDialog* self) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_Destroy_IsBase(true);
        vkconfigdialog->destroy();
    } else {
        ((VirtualKConfigDialog*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigDialog_OnDestroy(KConfigDialog* self, intptr_t slot) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_Destroy_Callback(reinterpret_cast<VirtualKConfigDialog::KConfigDialog_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool KConfigDialog_FocusNextChild(KConfigDialog* self) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        return vkconfigdialog->focusNextChild();
    } else {
        return ((VirtualKConfigDialog*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool KConfigDialog_QBaseFocusNextChild(KConfigDialog* self) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_FocusNextChild_IsBase(true);
        return vkconfigdialog->focusNextChild();
    } else {
        return ((VirtualKConfigDialog*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigDialog_OnFocusNextChild(KConfigDialog* self, intptr_t slot) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_FocusNextChild_Callback(reinterpret_cast<VirtualKConfigDialog::KConfigDialog_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KConfigDialog_FocusPreviousChild(KConfigDialog* self) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        return vkconfigdialog->focusPreviousChild();
    } else {
        return ((VirtualKConfigDialog*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool KConfigDialog_QBaseFocusPreviousChild(KConfigDialog* self) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_FocusPreviousChild_IsBase(true);
        return vkconfigdialog->focusPreviousChild();
    } else {
        return ((VirtualKConfigDialog*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigDialog_OnFocusPreviousChild(KConfigDialog* self, intptr_t slot) {
    auto* vkconfigdialog = dynamic_cast<VirtualKConfigDialog*>(self);
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_FocusPreviousChild_Callback(reinterpret_cast<VirtualKConfigDialog::KConfigDialog_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KConfigDialog_Sender(const KConfigDialog* self) {
    auto* vkconfigdialog = const_cast<VirtualKConfigDialog*>(dynamic_cast<const VirtualKConfigDialog*>(self));
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        return vkconfigdialog->sender();
    } else {
        return ((VirtualKConfigDialog*)self)->sender();
    }
}

// Base class handler implementation
QObject* KConfigDialog_QBaseSender(const KConfigDialog* self) {
    auto* vkconfigdialog = const_cast<VirtualKConfigDialog*>(dynamic_cast<const VirtualKConfigDialog*>(self));
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_Sender_IsBase(true);
        return vkconfigdialog->sender();
    } else {
        return ((VirtualKConfigDialog*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigDialog_OnSender(const KConfigDialog* self, intptr_t slot) {
    auto* vkconfigdialog = const_cast<VirtualKConfigDialog*>(dynamic_cast<const VirtualKConfigDialog*>(self));
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_Sender_Callback(reinterpret_cast<VirtualKConfigDialog::KConfigDialog_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KConfigDialog_SenderSignalIndex(const KConfigDialog* self) {
    auto* vkconfigdialog = const_cast<VirtualKConfigDialog*>(dynamic_cast<const VirtualKConfigDialog*>(self));
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        return vkconfigdialog->senderSignalIndex();
    } else {
        return ((VirtualKConfigDialog*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KConfigDialog_QBaseSenderSignalIndex(const KConfigDialog* self) {
    auto* vkconfigdialog = const_cast<VirtualKConfigDialog*>(dynamic_cast<const VirtualKConfigDialog*>(self));
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_SenderSignalIndex_IsBase(true);
        return vkconfigdialog->senderSignalIndex();
    } else {
        return ((VirtualKConfigDialog*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigDialog_OnSenderSignalIndex(const KConfigDialog* self, intptr_t slot) {
    auto* vkconfigdialog = const_cast<VirtualKConfigDialog*>(dynamic_cast<const VirtualKConfigDialog*>(self));
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_SenderSignalIndex_Callback(reinterpret_cast<VirtualKConfigDialog::KConfigDialog_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KConfigDialog_Receivers(const KConfigDialog* self, const char* signal) {
    auto* vkconfigdialog = const_cast<VirtualKConfigDialog*>(dynamic_cast<const VirtualKConfigDialog*>(self));
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        return vkconfigdialog->receivers(signal);
    } else {
        return ((VirtualKConfigDialog*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KConfigDialog_QBaseReceivers(const KConfigDialog* self, const char* signal) {
    auto* vkconfigdialog = const_cast<VirtualKConfigDialog*>(dynamic_cast<const VirtualKConfigDialog*>(self));
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_Receivers_IsBase(true);
        return vkconfigdialog->receivers(signal);
    } else {
        return ((VirtualKConfigDialog*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigDialog_OnReceivers(const KConfigDialog* self, intptr_t slot) {
    auto* vkconfigdialog = const_cast<VirtualKConfigDialog*>(dynamic_cast<const VirtualKConfigDialog*>(self));
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_Receivers_Callback(reinterpret_cast<VirtualKConfigDialog::KConfigDialog_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KConfigDialog_IsSignalConnected(const KConfigDialog* self, const QMetaMethod* signal) {
    auto* vkconfigdialog = const_cast<VirtualKConfigDialog*>(dynamic_cast<const VirtualKConfigDialog*>(self));
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        return vkconfigdialog->isSignalConnected(*signal);
    } else {
        return ((VirtualKConfigDialog*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KConfigDialog_QBaseIsSignalConnected(const KConfigDialog* self, const QMetaMethod* signal) {
    auto* vkconfigdialog = const_cast<VirtualKConfigDialog*>(dynamic_cast<const VirtualKConfigDialog*>(self));
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_IsSignalConnected_IsBase(true);
        return vkconfigdialog->isSignalConnected(*signal);
    } else {
        return ((VirtualKConfigDialog*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigDialog_OnIsSignalConnected(const KConfigDialog* self, intptr_t slot) {
    auto* vkconfigdialog = const_cast<VirtualKConfigDialog*>(dynamic_cast<const VirtualKConfigDialog*>(self));
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_IsSignalConnected_Callback(reinterpret_cast<VirtualKConfigDialog::KConfigDialog_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double KConfigDialog_GetDecodedMetricF(const KConfigDialog* self, int metricA, int metricB) {
    auto* vkconfigdialog = const_cast<VirtualKConfigDialog*>(dynamic_cast<const VirtualKConfigDialog*>(self));
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        return vkconfigdialog->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKConfigDialog*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double KConfigDialog_QBaseGetDecodedMetricF(const KConfigDialog* self, int metricA, int metricB) {
    auto* vkconfigdialog = const_cast<VirtualKConfigDialog*>(dynamic_cast<const VirtualKConfigDialog*>(self));
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_GetDecodedMetricF_IsBase(true);
        return vkconfigdialog->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKConfigDialog*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigDialog_OnGetDecodedMetricF(const KConfigDialog* self, intptr_t slot) {
    auto* vkconfigdialog = const_cast<VirtualKConfigDialog*>(dynamic_cast<const VirtualKConfigDialog*>(self));
    if (vkconfigdialog && vkconfigdialog->isVirtualKConfigDialog) {
        vkconfigdialog->setKConfigDialog_GetDecodedMetricF_Callback(reinterpret_cast<VirtualKConfigDialog::KConfigDialog_GetDecodedMetricF_Callback>(slot));
    }
}

void KConfigDialog_Delete(KConfigDialog* self) {
    delete self;
}
